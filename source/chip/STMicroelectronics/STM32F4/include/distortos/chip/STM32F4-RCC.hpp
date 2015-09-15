/**
 * \file
 * \brief Header for RCC-related functions for STM32F4
 *
 * \author Copyright (C) 2015 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * \date 2015-09-15
 */

#ifndef SOURCE_CHIP_STMICROELECTRONICS_STM32F4_INCLUDE_DISTORTOS_CHIP_STM32F4_RCC_HPP_
#define SOURCE_CHIP_STMICROELECTRONICS_STM32F4_INCLUDE_DISTORTOS_CHIP_STM32F4_RCC_HPP_

namespace distortos
{

namespace chip
{

/**
 * \brief Disables HSE clock.
 *
 * \warning Before changing configuration of HSE clock make sure that it is not used in any way (as core clock, as
 * source for any PLL or as source of RTC clock).
 */

void disableHse();

}	// namespace chip

}	// namespace distortos

#endif	// SOURCE_CHIP_STMICROELECTRONICS_STM32F4_INCLUDE_DISTORTOS_CHIP_STM32F4_RCC_HPP_
