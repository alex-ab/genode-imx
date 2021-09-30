/*
 * \brief  Board definitions for i.MX8 Quad Max Phytec phycore
 * \author Alexander Boettcher
 * \date   2021-09-29
 */

/*
 * Copyright (C) 2021 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

#ifndef _SRC__INCLUDE__HW__SPEC__ARM_64__IMX8QM_PHYCORE__BOARD_H_
#define _SRC__INCLUDE__HW__SPEC__ARM_64__IMX8QM_PHYCORE__BOARD_H_

#include <hw/spec/arm/boot_info.h>
#include <hw/uart/lpuart.h>

namespace Hw::Imx8qm_phycore_board {

	using Serial = Genode::Lp_uart;

	enum {
		RAM_BASE   = 0x80200000,
		RAM_SIZE   = 0x03e00000,
		/* XXX more regions XXX */

		UART_BASE  = 0x5a060000,
		UART_SIZE  = 0x1000,
		UART_CLOCK = 250000000, /* XXX */
	};

	namespace Cpu_mmio {
		enum {
			IRQ_CONTROLLER_DISTR_BASE  = 0x51a00000,
			IRQ_CONTROLLER_DISTR_SIZE  = 0x10000,
			IRQ_CONTROLLER_VT_CPU_BASE = 0x52000000, /* XXX ? */
			IRQ_CONTROLLER_VT_CPU_SIZE = 0x2000, /* XXX ? */
			IRQ_CONTROLLER_REDIST_BASE = 0x51b00000,
			IRQ_CONTROLLER_REDIST_SIZE = 0xc0000,
		};
	};
};

#endif /* _SRC__INCLUDE__HW__SPEC__ARM_64__IMX8QM_PHYCORE__BOARD_H_ */
