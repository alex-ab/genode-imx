/*
 * \brief   Platform implementation specific for base-hw and 
 *          phyCORE-i.MX 8 SOM with i.MX 8 QuadMax processor (PCM-064)
 *          on phyCORE-i.MX 8 carrier board
 * \author  Alexander Boettcher
 * \date    2021-09-29
 */

/*
 * Copyright (C) 2021 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

#include <platform.h>


Bootstrap::Platform::Board::Board()
:
	early_ram_regions(Memory_region { ::Board::RAM_BASE, ::Board::RAM_SIZE }),
	late_ram_regions(Memory_region { }),
	core_mmio(Memory_region { ::Board::UART_BASE, ::Board::UART_SIZE },
	          Memory_region { ::Board::Cpu_mmio::IRQ_CONTROLLER_DISTR_BASE,
	                          ::Board::Cpu_mmio::IRQ_CONTROLLER_DISTR_SIZE },
	          Memory_region { ::Board::Cpu_mmio::IRQ_CONTROLLER_REDIST_BASE,
	                          ::Board::Cpu_mmio::IRQ_CONTROLLER_REDIST_SIZE })
{
	::Board::Pic pic {};
}


void Board::Cpu::wake_up_all_cpus(void *) { }
