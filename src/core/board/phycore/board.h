/*
 * \brief  Board driver for core
 * \author Alexander Boettcher
 * \date   2021-09-29
 */

/*
 * Copyright (C) 2021 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

#ifndef _CORE__SPEC__PHYCORE__BOARD_H_
#define _CORE__SPEC__PHYCORE__BOARD_H_

#include <hw/spec/arm_64/imx8qm_phycore_board.h>
#include <spec/arm/generic_timer.h>
#include <spec/arm/virtualization/gicv3.h>
#include <spec/arm_v8/cpu.h>
#include <spec/arm_64/cpu/vm_state_virtualization.h>
#include <spec/arm/virtualization/board.h>

namespace Board {

	using namespace Hw::Imx8qm_phycore_board;

	enum {
		TIMER_IRQ           = 14 + 16,
		VT_TIMER_IRQ        = 11 + 16,
		VT_MAINTAINANCE_IRQ = 9  + 16,
		VCPU_MAX            = 16
	};
};

#endif /* _CORE__SPEC__PHYCORE__BOARD_H_ */
