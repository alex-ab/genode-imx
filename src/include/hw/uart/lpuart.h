/*
 * \brief  Driver for Freescale's lpuart
 * \author Alexander Boettcher
 * \date   2021-09-30
 */

/*
 * Copyright (C) 2021 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

#ifndef _INCLUDE__DRIVERS__UART__LPUART_H_
#define _INCLUDE__DRIVERS__UART__LPUART_H_

/* Genode includes */
#include <util/mmio.h>

namespace Genode { class Lp_uart; }


class Genode::Lp_uart: Mmio
{
		/**
		 * LPUART status register
		 */
		struct Status : Register<0x14, 32>
		{
			struct Tdre : Bitfield<23, 1> { }; /* Transmit Data Register Empty */
		};

		/**
		 * LPUART data register
		 */
		struct Data : Register<0x1c, 32> { };

		/**
		 * Transmit character 'c' without care about its type
		 */
		void _put_char(char c)
		{
			while (!read<Status::Tdre>()) { } 
			write<Data>(c);
		}

	public:

		/**
		 * Constructor
		 *
		 * \param base  device MMIO base
		 */
		Lp_uart(addr_t base, uint32_t, uint32_t) : Mmio(base)
		{ }

		/**
		 * Print character 'c' through the UART
		 */
		void put_char(char c)
		{
			/* transmit character */
			_put_char(c);
		}
};

#endif /* _INCLUDE__DRIVERS__UART__LPUART_H_ */
