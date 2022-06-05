#ifndef H_DAC_REGS
#define H_DAC_REGS
/*
 * Part of Belkin STM32 HAL, DAC register definitions of STM32F1xx MCUs.
 *
 * Copyright 2021 Mikhail Belkin <dltech174@gmail.com>
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

/* DAC control register */
#define DAC_CR      MMIO32(DAC_BASE + 0x00)
// DAC channel2 DMA enable
#define DMAEN2              0x10000000
// DAC channel2 mask/amplitude selector
#define MAMP2_AMPLITUDE1    0x00000000
#define MAMP2_AMPLITUDE3    0x01000000
#define MAMP2_AMPLITUDE7    0x02000000
#define MAMP2_AMPLITUDE15   0x03000000
#define MAMP2_AMPLITUDE31   0x04000000
#define MAMP2_AMPLITUDE63   0x05000000
#define MAMP2_AMPLITUDE127  0x06000000
#define MAMP2_AMPLITUDE255  0x07000000
#define MAMP2_AMPLITUDE511  0x08000000
#define MAMP2_AMPLITUDE1023 0x09000000
#define MAMP2_AMPLITUDE2047 0x0a000000
#define MAMP2_AMPLITUDE4095 0x0b000000
// DAC channel2 noise/triangle wave generation enable
#define WAVE2_DISABLED      0x00000000
#define WAVE2_NOISE_EN      0x00400000
#define WAVE2_TRIANGLE_EN   0x00800000
// DAC channel2 trigger selection
#define TSEL2_TIM6_TRGO     0x00000000
#define TSEL2_TIM3_TRGO     0x00080000
#define TSEL2_TIM7_TRGO     0x00100000
#define TSEL2_TIM5_TRGO     0x00180000
#define TSEL2_TIM2_TRGO     0x00200000
#define TSEL2_TIM4_TRGO     0x00280000
#define TSEL2_EXTI9         0x00300000
#define TSEL2_SW_TRIGGER    0x00380000
// DAC channel2 trigger enable
#define TEN2                0x00040000
// DAC channel2 output buffer disable
#define BOFF2               0x00020000
// DAC channel2 enable
#define EN2                 0x00010000
// DAC channel1 DMA enable
#define DMAEN1              0x00001000
// DAC channel1 mask/amplitude selector
#define MAMP1_AMPLITUDE1    0x00000000
#define MAMP1_AMPLITUDE3    0x00000100
#define MAMP1_AMPLITUDE7    0x00000200
#define MAMP1_AMPLITUDE15   0x00000300
#define MAMP1_AMPLITUDE31   0x00000400
#define MAMP1_AMPLITUDE63   0x00000500
#define MAMP1_AMPLITUDE127  0x00000600
#define MAMP1_AMPLITUDE255  0x00000700
#define MAMP1_AMPLITUDE511  0x00000800
#define MAMP1_AMPLITUDE1023 0x00000900
#define MAMP1_AMPLITUDE2047 0x00000a00
#define MAMP1_AMPLITUDE4095 0x00000b00
// DAC channel1 noise/triangle wave generation enable
#define WAVE1_DISABLED      0x00000000
#define WAVE1_NOISE_EN      0x00000040
#define WAVE1_TRIANGLE_EN   0x00000080
// DAC channel1 trigger selection
#define TSEL1_TIM6_TRGO     0x00000000
#define TSEL1_TIM3_TRGO     0x00000008
#define TSEL1_TIM7_TRGO     0x00000010
#define TSEL1_TIM5_TRGO     0x00000018
#define TSEL1_TIM2_TRGO     0x00000020
#define TSEL1_TIM4_TRGO     0x00000028
#define TSEL1_EXTI9         0x00000030
#define TSEL1_SW_TRIGGER    0x00000038
// DAC channel1 trigger enable
#define TEN1                0x00000004
// DAC channel1 output buffer disable
#define BOFF1               0x00000002
// DAC channel1 enable
#define EN1                 0x00000001

/* DAC software trigger register */
#define DAC_SWTRIGR MMIO32(DAC_BASE + 0x04)
// DAC channel2 software trigger
#define SWTRIG2     0x2
// DAC channel1 software trigger
#define SWTRIG1     0x1

/* DAC channel1 12-bit right-aligned data holding register */
#define DAC_DHR12R1 MMIO32(DAC_BASE + 0x08)
// DAC channel1 12-bit right-aligned data

/* DAC channel1 12-bit left aligned data holding register */
#define DAC_DHR12L1 MMIO32(DAC_BASE + 0x0c)
// DAC channel1 12-bit left-aligned data

/* DAC channel1 8-bit right aligned data holding register */
#define DAC_DHR8R1  MMIO32(DAC_BASE + 0x10)
// DAC channel1 8-bit right-aligned data

/* DAC channel2 12-bit right aligned data holding register */
#define DAC_DHR12R2 MMIO32(DAC_BASE + 0x14)
// DAC channel2 12-bit right-aligned data

/* DAC channel2 12-bit left aligned data holding register */
#define DAC_DHR12L2 MMIO32(DAC_BASE + 0x18)
// DAC channel2 12-bit left-aligned data

/* DAC channel2 8-bit right-aligned data holding register */
#define DAC_DHR8R2  MMIO32(DAC_BASE + 0x1c)
// DAC channel2 8-bit right-aligned data

/* Dual DAC 12-bit right-aligned data holding register */
#define DAC_DHR12RD MMIO32(DAC_BASE + 0x20)
// DAC channel2 12-bit right-aligned data
#define DACC2DHR_OFFS   16
#define DACC2DHR_MSK    0x0fff0000
// DAC channel1 12-bit right-aligned data
#define DACC1DHR_MSK    0x00000fff

/* DUAL DAC 12-bit left aligned data holding register */
#define DAC_DHR12LD MMIO32(DAC_BASE + 0x2c)
// DACC2DHR[11:0]: DAC channel2 12-bit left-aligned data
// DACC1DHR[11:0]: DAC channel1 12-bit left-aligned data

/* DUAL DAC 8-bit right aligned data holding register */
#define DAC_DHR8RD  MMIO32(DAC_BASE + 0x28)
// DAC channel2 8-bit right-aligned data
#define DACC2DHR8_OFFS   8
#define DACC2DHR8_MSK    0xff00
// DAC channel1 8-bit right-aligned data
#define DACC1DHR8_MSK    0x00ff

/* DAC channel1 data output register */
#define DAC_DOR1    MMIO32(DAC_BASE + 0x2c)
// DAC channel1 data output

/* DAC channel2 data output register */
#define DAC_DOR2    MMIO32(DAC_BASE + 0x30)
// DAC channel2 data output

#endif
