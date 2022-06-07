#ifndef H_CAN_REGS
#define H_CAN_REGS
/*
 * Part of Belkin STM32 HAL, Controller area network register definitions of STM32F1xx MCUs.
 *
 * Copyright 2022 Mikhail Belkin <dltech174@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "memorymap.h"

/*  */
#define CAN1_MCR          MMIO32(CAN1_BASE + 0x)
#define CAN2_MCR          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_MSR          MMIO32(CAN1_BASE + 0x)
#define CAN2_MSR          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TSR          MMIO32(CAN1_BASE + 0x)
#define CAN2_TSR          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_RF0R          MMIO32(CAN1_BASE + 0x)
#define CAN2_RF0R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_RF1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_RF1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_IER          MMIO32(CAN1_BASE + 0x)
#define CAN2_IER         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_ESR          MMIO32(CAN1_BASE + 0x)
#define CAN2_ESR          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_BTR          MMIO32(CAN1_BASE + 0x)
#define CAN2_BTR          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TI0R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TI0R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TDT0R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TDT0R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TDL0R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TDL0R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TDH0R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TDH0R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TI1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TI1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TDT1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TDT1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TDL1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TDL1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TDH1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TDH1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TI2R         MMIO32(CAN1_BASE + 0x)
#define CAN2_TI2R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TDT2R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TDT2R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TDL2R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TDL2R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_TDH2R          MMIO32(CAN1_BASE + 0x)
#define CAN2_TDH2R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_RI0R          MMIO32(CAN1_BASE + 0x)
#define CAN2_RI0R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_RDT0R          MMIO32(CAN1_BASE + 0x)
#define CAN2_RDT0R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_RDL0R          MMIO32(CAN1_BASE + 0x)
#define CAN2_RDL0R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_RDH0R          MMIO32(CAN1_BASE + 0x)
#define CAN2_RDH0R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_RI1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_RI1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_RDT1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_RDT1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_RDL1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_RDL1R         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_RDH1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_RDH1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_FMR          MMIO32(CAN1_BASE + 0x)
#define CAN2_FMR          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_FM1R         MMIO32(CAN1_BASE + 0x)
#define CAN2_FM1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_FS1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_FS1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_FFA1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_FFA1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_FA1R          MMIO32(CAN1_BASE + 0x)
#define CAN2_FA1R          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F0R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F0R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F0R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F0R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F1R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F1R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F1R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F1R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F2R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F2R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F2R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F2R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F3R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F3R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F3R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F3R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F4R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F4R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F4R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F4R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F5R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F5R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F5R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F5R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F6R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F6R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F6R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F6R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F7R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F7R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F7R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F7R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F8R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F8R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F8R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F8R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F9R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F9R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F9R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F9R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F10R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F10R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F10R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F10R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F11R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F11R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F11R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F11R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F12R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F12R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F12R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F12R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F13R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F13R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F13R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F13R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F14R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F14R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F14R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F14R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F15R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F15R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F15R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F15R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F16R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F16R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F16R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F16R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F17R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F17R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F17R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F17R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F18R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F18R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F18R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F18R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F19R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F19R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F19R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F19R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F20R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F20R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F20R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F20R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F21R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F21R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F21R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F21R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F22R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F22R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F22R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F22R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F23R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F23R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F23R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F23R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F24R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F24R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F24R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F24R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F25R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F25R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F25R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F25R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F26R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F26R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F26R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F26R2          MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F27R1          MMIO32(CAN1_BASE + 0x)
#define CAN2_F27R1         MMIO32(CAN2_BASE + 0x)

/*  */
#define CAN1_F27R2          MMIO32(CAN1_BASE + 0x)
#define CAN2_F27R2          MMIO32(CAN2_BASE + 0x)

#endif
