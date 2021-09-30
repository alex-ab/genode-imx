/*
 * \brief  Board driver for bootstrap
 * \author Alexander Boettcher
 * \date   2021-09-29
 */

/*
 * Copyright (C) 2021 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

#ifndef _BOOTSTRAP__SPEC__PHYCORE__BOARD_H_
#define _BOOTSTRAP__SPEC__PHYCORE__BOARD_H_

#include <hw/spec/arm_64/imx8qm_phycore_board.h>
#include <hw/spec/arm_64/cpu.h>
#include <hw/spec/arm/gicv3.h>
#include <hw/spec/arm/lpae.h>

namespace Board {

	using namespace Hw::Imx8qm_phycore_board;

	struct Cpu : Hw::Arm_64_cpu
	{
		static void wake_up_all_cpus(void*);
	};

	using Hw::Pic;
};

#endif /* _BOOTSTRAP__SPEC__PHYCORE__BOARD_H_ */
