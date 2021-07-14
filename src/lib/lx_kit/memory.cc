/**
 * \brief  Lx_kit memory allocation backend
 * \author Stefan Kalkowski
 * \date   2021-03-25
 */

/*
 * Copyright (C) 2021 Genode Labs GmbH
 *
 * This file is distributed under the terms of the GNU General Public License
 * version 2.
 */

/* Genode includes */
#include <base/log.h>
#include <os/backtrace.h>
#include <platform_session/connection.h>
#include <util/touch.h>

/* local includes */
#include <lx_kit/memory.h>


Lx_kit::Mem_allocator::Mem_allocator(Genode::Env          & env,
                                     Heap                 & heap,
                                     Platform::Connection & platform,
                                     Cache                  cache_attr)
:
	_env(env), _heap(heap), _platform(platform),
	_cache_attr(cache_attr), _mem(&heap) {}


Lx_kit::Mem_allocator::Buffer & Lx_kit::Mem_allocator::alloc_buffer(size_t size)
{
	Ram_dataspace_capability ds_cap;

	try {
		size_t ds_size  = align_addr(size, 12);
		ds_cap          = _platform.alloc_dma_buffer(ds_size, _cache_attr);
		addr_t dma_addr = _platform.dma_addr(ds_cap);

		Buffer & buffer = *new (_heap)
			Buffer_element(_buffers, _env.rm(), ds_cap, dma_addr);
		addr_t addr     = (addr_t)buffer.local_addr<void>();

		/* map eager by touching all pages once */
		for (size_t sz = 0; sz < ds_size; sz += 4096) {
			touch_read((unsigned char const volatile*)(addr + sz)); }

		return buffer;
	} catch (Out_of_caps) {
		_platform.free_dma_buffer(ds_cap);
		throw;
	}
}


void * Lx_kit::Mem_allocator::alloc(size_t size, size_t align)
{
	if (!size)
		return nullptr;

	void * out_addr = nullptr;

	if (_mem.alloc_aligned(size, &out_addr, log2(align)).error()) {

		Buffer & buffer = alloc_buffer(size);
		_mem.add_range((addr_t)buffer.local_addr<void>(), buffer.size());

		/* re-try allocation */
		_mem.alloc_aligned(size, &out_addr, log2(align));
	}

	if (!out_addr) {
		error("memory allocation failed for ", size, " align ", align);
		backtrace();
	}
	else
		memset(out_addr, 0, size);

	return out_addr;
}


Genode::addr_t Lx_kit::Mem_allocator::dma_addr(void * addr)
{
	addr_t ret = 0UL;

	_buffers.for_each([&] (Buffer & b) {
		addr_t other = (addr_t)addr;
		addr_t addr  = (addr_t)b.local_addr<void>();
		if (addr > other || (addr+b.size()) <= other)
			return;

		/* byte offset of 'addr' from start of block */
		addr_t const offset = other - addr;
		ret = b.dma_addr() + offset;
	});

	return ret;
}


bool Lx_kit::Mem_allocator::free(const void * ptr)
{
	if (!_mem.valid_addr((addr_t)ptr))
		return false;

	_mem.free(const_cast<void*>(ptr));
	return true;
}


void Lx_kit::Mem_allocator::free(Buffer & buffer)
{
	_buffers.for_each([&] (Buffer & b) {
		if (b.local_addr<void>() == buffer.local_addr<void>() &&
		    b.size() == buffer.size())
			destroy(_heap, &b);
	});
}


Genode::size_t Lx_kit::Mem_allocator::size(const void * ptr)
{
	return ptr ? _mem.size_at(ptr) : 0;
}
