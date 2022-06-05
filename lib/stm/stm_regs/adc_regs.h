#ifndef H_ADC_REGS
#define H_ADC_REGS
/*
 * Part of Belkin STM32 HAL, ADC register definitions of STM32F1xx MCUs.
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

/* ADC status register */
#define ADC1_SR   MMIO32(ADC1_BASE + 0x00)
#define ADC2_SR   MMIO32(ADC2_BASE + 0x00)
#define ADC3_SR   MMIO32(ADC3_BASE + 0x00)
// Regular channel Start flag
#define STRT    0x10
// Injected channel Start flag
#define JSTRT   0x08
// Injected channel end of conversion
#define JEOC    0x04
// End of conversion
#define EOC     0x02
// Analog watchdog flag
#define AWD     0x01

/* ADC control register 1 */
#define ADC1_CR1   MMIO32(ADC1_BASE + 0x04)
#define ADC2_CR1   MMIO32(ADC2_BASE + 0x04)
#define ADC3_CR1   MMIO32(ADC3_BASE + 0x04)
// Analog watchdog enable on regular channels
#define AWDEN                     0x800000
// Analog watchdog enable on injected channels
#define JAWDEN                    0x400000
// Dual mode selection
#define DUALMOD_INDEPENDEND       0x000000
#define DUALMOD_REG_SIM_INJ_SIM   0x010000
#define DUALMOD_REG_SIM_ALT_TRG   0x020000
#define DUALMOD_INJ_SIM_FAST_INT  0x030000
#define DUALMOD_INJ_SIM_SLOW_INT  0x040000
#define DUALMOD_INJECTED_SIMULATE 0x050000
#define DUALMOD_REGULAR_SIMULATE  0x060000
#define DUALMOD_FAST_INTERLEAVED  0x070000
#define DUALMOD_SLOW_INTERLEAVED  0x080000
#define DUALMOD_ALTERNATE_TRIGGER 0x090000
// Discontinuous mode channel count
#define DISCNUM_1CHANNEL          0x000000
#define DISCNUM_2CHANNEL          0x002000
#define DISCNUM_3CHANNEL          0x004000
#define DISCNUM_4CHANNEL          0x006000
#define DISCNUM_5CHANNEL          0x008000
#define DISCNUM_6CHANNEL          0x00a000
#define DISCNUM_7CHANNEL          0x00c000
#define DISCNUM_8CHANNEL          0x00e000
// Discontinuous mode on injected channels
#define JDISCEN                   0x001000
// Discontinuous mode on regular channels
#define DISCEN                    0x000800
// Automatic Injected Group conversion
#define JAUTO                     0x000400
// Enable the watchdog on a single channel in scan mode
#define AWDSGL                    0x000200
// Scan mode
#define SCAN                      0x000100
// Interrupt enable for injected channels
#define JEOCIE                    0x000080
// Analog watchdog interrupt enable
#define AWDIE                     0x000040
// Interrupt enable for EOC
#define EOCIE                     0x000020
// Analog watchdog channel select bits
#define AWDCH_CHANNEL0            0x000000
#define AWDCH_CHANNEL1            0x000001
#define AWDCH_CHANNEL2            0x000002
#define AWDCH_CHANNEL3            0x000003
#define AWDCH_CHANNEL4            0x000004
#define AWDCH_CHANNEL5            0x000005
#define AWDCH_CHANNEL6            0x000006
#define AWDCH_CHANNEL7            0x000007
#define AWDCH_CHANNEL8            0x000008
#define AWDCH_CHANNEL9            0x000009
#define AWDCH_CHANNEL10           0x00000a
#define AWDCH_CHANNEL11           0x00000b
#define AWDCH_CHANNEL12           0x00000c
#define AWDCH_CHANNEL13           0x00000d
#define AWDCH_CHANNEL14           0x00000e
#define AWDCH_CHANNEL15           0x00000f
#define AWDCH_CHANNEL16           0x000010
#define AWDCH_CHANNEL17           0x000011

/* ADC control register 2 */
#define ADC1_CR2   MMIO32(ADC1_BASE + 0x08)
#define ADC2_CR2   MMIO32(ADC2_BASE + 0x08)
// Temperature sensor and VREFINT enable
#define TSVREFE             0x800000
// Start conversion of regular channels
#define SWSTART             0x400000
// Start conversion of injected channels
#define JSWSTART            0x200000
// External trigger conversion mode for regular channels
#define EXTTRIG             0x100000
// External event select for regular group
#define EXTSEL_TIM1_CC1     0x000000
#define EXTSEL_TIM1_CC2     0x020000
#define EXTSEL_TIM1_CC3     0x040000
#define EXTSEL_TIM2_CC2     0x060000
#define EXTSEL_TIM3_TRGO    0x080000
#define EXTSEL_TIM4_CC4     0x0a0000
#define EXTSEL_EXTI11       0x0c0000
#define EXTSEL_SWSTART      0x0e0000
// External trigger conversion mode for injected channels
#define JEXTTRIG            0x008000
// External event select for injected group
#define JEXTSEL_TIM1_TRGO   0x000000
#define JEXTSEL_TIM1_CC4    0x001000
#define JEXTSEL_TIM2_TRGO   0x002000
#define JEXTSEL_TIM2_CC1    0x003000
#define JEXTSEL_TIM3_CC4    0x004000
#define JEXTSEL_TIM4_TRGO   0x005000
#define JEXTSEL_EXTI15      0x006000
#define JEXTSEL_JSWSTART    0x007000
// Data alignment
#define ALIGN               0x000800
// Direct memory access mode
#define DMA                 0x000100
// Reset calibration
#define RSTCAL              0x000008
// A/D Calibration
#define CAL                 0x000004
// Continuous conversion
#define CONT                0x000002
// A/D converter ON / OFF
#define ADON                0x000001

/* ADC3 control register 2 */
#define ADC3_CR2   MMIO32(ADC3_BASE + 0x08)
// External event select for regular group
#define EXTSEL_TIM3_CC1     0x000000
#define EXTSEL_TIM2_CC3     0x020000
#define EXTSEL_TIM8_CC1     0x060000
#define EXTSEL_TIM8_TRGO    0x080000
#define EXTSEL_TIM5_CC1     0x0a0000
#define EXTSEL_TIM5_CC3     0x0c0000
// External event select for injected group
#define JEXTSEL_TIM4_CC3    0x002000
#define JEXTSEL_TIM8_CC2    0x003000
#define JEXTSEL_TIM8_CC4    0x004000
#define JEXTSEL_TIM5_TRGO   0x005000
#define JEXTSEL_TIM5_CC4    0x006000

/* ADC sample time register 1 */
#define ADC1_SMPR1   MMIO32(ADC1_BASE + 0x0c)
#define ADC2_SMPR1   MMIO32(ADC2_BASE + 0x0c)
#define ADC3_SMPR1   MMIO32(ADC3_BASE + 0x0c)
// Channel 17 Sample time selection
#define SMP17_1P5CYCL   0x000000
#define SMP17_7P5CYCL   0x200000
#define SMP17_13P5CYCL  0x400000
#define SMP17_28P5CYCL  0x600000
#define SMP17_41P5CYCL  0x800000
#define SMP17_55P5CYCL  0xa00000
#define SMP17_71P5CYCL  0xc00000
#define SMP17_239P5CYCL 0xe00000
// Channel 16 Sample time selection
#define SMP16_1P5CYCL   0x000000
#define SMP16_7P5CYCL   0x040000
#define SMP16_13P5CYCL  0x080000
#define SMP16_28P5CYCL  0x0c0000
#define SMP16_41P5CYCL  0x100000
#define SMP16_55P5CYCL  0x140000
#define SMP16_71P5CYCL  0x180000
#define SMP16_239P5CYCL 0x1c0000
// Channel 15 Sample time selection
#define SMP15_1P5CYCL   0x000000
#define SMP15_7P5CYCL   0x008000
#define SMP15_13P5CYCL  0x010000
#define SMP15_28P5CYCL  0x018000
#define SMP15_41P5CYCL  0x020000
#define SMP15_55P5CYCL  0x028000
#define SMP15_71P5CYCL  0x030000
#define SMP15_239P5CYCL 0x038000
// Channel 14 Sample time selection
#define SMP14_1P5CYCL   0x000000
#define SMP14_7P5CYCL   0x001000
#define SMP14_13P5CYCL  0x002000
#define SMP14_28P5CYCL  0x003000
#define SMP14_41P5CYCL  0x004000
#define SMP14_55P5CYCL  0x005000
#define SMP14_71P5CYCL  0x006000
#define SMP14_239P5CYCL 0x007000
// Channel 13 Sample time selection
#define SMP13_1P5CYCL   0x000000
#define SMP13_7P5CYCL   0x000200
#define SMP13_13P5CYCL  0x000400
#define SMP13_28P5CYCL  0x000600
#define SMP13_41P5CYCL  0x000800
#define SMP13_55P5CYCL  0x000a00
#define SMP13_71P5CYCL  0x000c00
#define SMP13_239P5CYCL 0x000e00
// Channel 12 Sample time selection
#define SMP12_1P5CYCL   0x000000
#define SMP12_7P5CYCL   0x000040
#define SMP12_13P5CYCL  0x000080
#define SMP12_28P5CYCL  0x0000c0
#define SMP12_41P5CYCL  0x000100
#define SMP12_55P5CYCL  0x000140
#define SMP12_71P5CYCL  0x000180
#define SMP12_239P5CYCL 0x0001c0
// Channel 11 Sample time selection
#define SMP11_1P5CYCL   0x000000
#define SMP11_7P5CYCL   0x000008
#define SMP11_13P5CYCL  0x000010
#define SMP11_28P5CYCL  0x000018
#define SMP11_41P5CYCL  0x000020
#define SMP11_55P5CYCL  0x000028
#define SMP11_71P5CYCL  0x000030
#define SMP11_239P5CYCL 0x000038
// Channel 10 Sample time selection
#define SMP10_1P5CYCL   0x000000
#define SMP10_7P5CYCL   0x000001
#define SMP10_13P5CYCL  0x000002
#define SMP10_28P5CYCL  0x000003
#define SMP10_41P5CYCL  0x000004
#define SMP10_55P5CYCL  0x000005
#define SMP10_71P5CYCL  0x000006
#define SMP10_239P5CYCL 0x000007

/* ADC sample time register 2 */
#define ADC1_SMPR2   MMIO32(ADC1_BASE + 0x10)
#define ADC2_SMPR2   MMIO32(ADC2_BASE + 0x10)
#define ADC3_SMPR2   MMIO32(ADC3_BASE + 0x10)
// Channel 9 Sample time selection
#define SMP9_1P5CYCL   0x00000000
#define SMP9_7P5CYCL   0x08000000
#define SMP9_13P5CYCL  0x10000000
#define SMP9_28P5CYCL  0x18000000
#define SMP9_41P5CYCL  0x20000000
#define SMP9_55P5CYCL  0x28000000
#define SMP9_71P5CYCL  0x30000000
#define SMP9_239P5CYCL 0x38000000
// Channel 8 Sample time selection
#define SMP8_1P5CYCL   0x00000000
#define SMP8_7P5CYCL   0x01000000
#define SMP8_13P5CYCL  0x02000000
#define SMP8_28P5CYCL  0x03000000
#define SMP8_41P5CYCL  0x04000000
#define SMP8_55P5CYCL  0x05000000
#define SMP8_71P5CYCL  0x06000000
#define SMP8_239P5CYCL 0x07000000
// Channel 7 Sample time selection
#define SMP7_1P5CYCL   0x00000000
#define SMP7_7P5CYCL   0x00200000
#define SMP7_13P5CYCL  0x00400000
#define SMP7_28P5CYCL  0x00600000
#define SMP7_41P5CYCL  0x00800000
#define SMP7_55P5CYCL  0x00a00000
#define SMP7_71P5CYCL  0x00c00000
#define SMP7_239P5CYCL 0x00e00000
// Channel 6 Sample time selection
#define SMP6_1P5CYCL   0x00000000
#define SMP6_7P5CYCL   0x00040000
#define SMP6_13P5CYCL  0x00080000
#define SMP6_28P5CYCL  0x000c0000
#define SMP6_41P5CYCL  0x00100000
#define SMP6_55P5CYCL  0x00140000
#define SMP6_71P5CYCL  0x00180000
#define SMP6_239P5CYCL 0x001c0000
// Channel 5 Sample time selection
#define SMP5_1P5CYCL   0x00000000
#define SMP5_7P5CYCL   0x00008000
#define SMP5_13P5CYCL  0x00010000
#define SMP5_28P5CYCL  0x00018000
#define SMP5_41P5CYCL  0x00020000
#define SMP5_55P5CYCL  0x00028000
#define SMP5_71P5CYCL  0x00030000
#define SMP5_239P5CYCL 0x00038000
// Channel 4 Sample time selection
#define SMP4_1P5CYCL   0x00000000
#define SMP4_7P5CYCL   0x00001000
#define SMP4_13P5CYCL  0x00002000
#define SMP4_28P5CYCL  0x00003000
#define SMP4_41P5CYCL  0x00004000
#define SMP4_55P5CYCL  0x00005000
#define SMP4_71P5CYCL  0x00006000
#define SMP4_239P5CYCL 0x00007000
// Channel 3 Sample time selection
#define SMP3_1P5CYCL   0x00000000
#define SMP3_7P5CYCL   0x00000200
#define SMP3_13P5CYCL  0x00000400
#define SMP3_28P5CYCL  0x00000600
#define SMP3_41P5CYCL  0x00000800
#define SMP3_55P5CYCL  0x00000a00
#define SMP3_71P5CYCL  0x00000c00
#define SMP3_239P5CYCL 0x00000e00
// Channel 2 Sample time selection
#define SMP2_1P5CYCL   0x00000000
#define SMP2_7P5CYCL   0x00000040
#define SMP2_13P5CYCL  0x00000080
#define SMP2_28P5CYCL  0x000000c0
#define SMP2_41P5CYCL  0x00000100
#define SMP2_55P5CYCL  0x00000140
#define SMP2_71P5CYCL  0x00000180
#define SMP2_239P5CYCL 0x000001c0
// Channel 1 Sample time selection
#define SMP1_1P5CYCL   0x00000000
#define SMP1_7P5CYCL   0x00000008
#define SMP1_13P5CYCL  0x00000010
#define SMP1_28P5CYCL  0x00000018
#define SMP1_41P5CYCL  0x00000020
#define SMP1_55P5CYCL  0x00000028
#define SMP1_71P5CYCL  0x00000030
#define SMP1_239P5CYCL 0x00000038
// Channel 0 Sample time selection
#define SMP0_1P5CYCL   0x00000000
#define SMP0_7P5CYCL   0x00000001
#define SMP0_13P5CYCL  0x00000002
#define SMP0_28P5CYCL  0x00000003
#define SMP0_41P5CYCL  0x00000004
#define SMP0_55P5CYCL  0x00000005
#define SMP0_71P5CYCL  0x00000006
#define SMP0_239P5CYCL 0x00000007

/* ADC injected channel data offset registers */
#define ADC1_JOFR1   MMIO32(ADC1_BASE + 0x14)
#define ADC2_JOFR1   MMIO32(ADC2_BASE + 0x14)
#define ADC3_JOFR1   MMIO32(ADC3_BASE + 0x14)
// Data offset for injected channel 1
#define ADC1_JOFR2   MMIO32(ADC1_BASE + 0x18)
#define ADC2_JOFR2   MMIO32(ADC2_BASE + 0x18)
#define ADC3_JOFR2   MMIO32(ADC3_BASE + 0x18)
// Data offset for injected channel 2
#define ADC1_JOFR3   MMIO32(ADC1_BASE + 0x1c)
#define ADC2_JOFR3   MMIO32(ADC2_BASE + 0x1c)
#define ADC3_JOFR3   MMIO32(ADC3_BASE + 0x1c)
// Data offset for injected channel 3
#define ADC1_JOFR4   MMIO32(ADC1_BASE + 0x20)
#define ADC2_JOFR4   MMIO32(ADC2_BASE + 0x20)
#define ADC3_JOFR4   MMIO32(ADC3_BASE + 0x20)
// Data offset for injected channel 4

/* ADC watchdog high threshold register */
#define ADC1_HTR   MMIO32(ADC1_BASE + 0x24)
#define ADC2_HTR   MMIO32(ADC2_BASE + 0x24)
#define ADC3_HTR   MMIO32(ADC3_BASE + 0x24)
// Analog watchdog high threshold

/* ADC watchdog low threshold register */
#define ADC1_LTR   MMIO32(ADC1_BASE + 0x28)
#define ADC2_LTR   MMIO32(ADC2_BASE + 0x28)
#define ADC3_LTR   MMIO32(ADC3_BASE + 0x28)
// Analog watchdog low threshold

/* ADC regular sequence register 1 */
#define ADC1_SQR1   MMIO32(ADC1_BASE + 0x2c)
#define ADC2_SQR1   MMIO32(ADC2_BASE + 0x2c)
#define ADC3_SQR1   MMIO32(ADC3_BASE + 0x2c)
// Regular channel sequence length
#define L_1CONV    0x000000
#define L_2CONV    0x100000
#define L_3CONV    0x200000
#define L_4CONV    0x300000
#define L_5CONV    0x400000
#define L_6CONV    0x500000
#define L_7CONV    0x600000
#define L_8CONV    0x700000
#define L_9CONV    0x800000
#define L_10CONV   0x900000
#define L_11CONV   0xa00000
#define L_12CONV   0xb00000
#define L_13CONV   0xc00000
#define L_14CONV   0xd00000
#define L_15CONV   0xe00000
#define L_16CONV   0xf00000
// channel number (0..17) assigned as the 16th in the sequence to be converted
#define JSQ4(n)     ((uint32_t)((n&0x1f)<<15))
// channel number (0..17) assigned as the 15th in the sequence to be converted
#define JSQ3(n)     ((uint32_t)((n&0x1f)<<10))
// channel number (0..17) assigned as the 14th in the sequence to be converted
#define JSQ2(n)     ((uint32_t)((n&0x1f)<<5))
// channel number (0..17) assigned as the 13th in the sequence to be converted
#define JSQ1(n)     ((uint32_t)(n&0x1f))

/* ADC regular sequence register 2 */
#define ADC1_SQR2   MMIO32(ADC1_BASE + 0x30)
#define ADC2_SQR2   MMIO32(ADC2_BASE + 0x30)
#define ADC3_SQR2   MMIO32(ADC3_BASE + 0x30)
// channel number (0..17) assigned as the 12th in the sequence to be converted
#define SQ12(n)     ((uint32_t)((n&0x1f)<<25))
// channel number (0..17) assigned as the 11th in the sequence to be converted
#define SQ11(n)     ((uint32_t)((n&0x1f)<<20))
// channel number (0..17) assigned as the 10th in the sequence to be converted
#define SQ10(n)     ((uint32_t)((n&0x1f)<<15))
// channel number (0..17) assigned as the 9th in the sequence to be converted
#define SQ9(n)     ((uint32_t)((n&0x1f)<<10))
// channel number (0..17) assigned as the 8th in the sequence to be converted
#define SQ8(n)     ((uint32_t)((n&0x1f)<<5))
// channel number (0..17) assigned as the 7th in the sequence to be converted
#define SQ7(n)     ((uint32_t)(n&0x1f))

/* ADC regular sequence register 3 */
#define ADC1_SQR3   MMIO32(ADC1_BASE + 0x34)
#define ADC2_SQR3   MMIO32(ADC2_BASE + 0x34)
#define ADC3_SQR3   MMIO32(ADC3_BASE + 0x34)
// channel number (0..17) assigned as the 6th in the sequence to be converted
#define SQ12(n)     ((uint32_t)((n&0x1f)<<25))
// channel number (0..17) assigned as the 5th in the sequence to be converted
#define SQ11(n)     ((uint32_t)((n&0x1f)<<20))
// channel number (0..17) assigned as the fourth in the sequence to be converted
#define SQ10(n)     ((uint32_t)((n&0x1f)<<15))
// channel number (0..17) assigned as the third in the sequence to be converted
#define SQ9(n)     ((uint32_t)((n&0x1f)<<10))
// channel number (0..17) assigned as the second in the sequence to be converted
#define SQ8(n)     ((uint32_t)((n&0x1f)<<5))
// channel number (0..17) assigned as the first in the sequence to be converted
#define SQ7(n)     ((uint32_t)(n&0x1f))


/* ADC injected sequence register */
#define ADC1_JSQR   MMIO32(ADC1_BASE + 0x38)
#define ADC2_JSQR   MMIO32(ADC2_BASE + 0x38)
#define ADC3_JSQR   MMIO32(ADC3_BASE + 0x38)
// Injected sequence length
#define JL_1CONV    0x000000
#define JL_2CONV    0x100000
#define JL_3CONV    0x200000
#define JL_4CONV    0x300000
// channel number (0..17) assigned as the fourth in the sequence to be converted
#define JSQ4(n)     ((uint32_t)((n&0x1f)<<15))
// channel number (0..17) assigned as the third in the sequence to be converted
#define JSQ3(n)     ((uint32_t)((n&0x1f)<<10))
// channel number (0..17) assigned as the second in the sequence to be converted
#define JSQ2(n)     ((uint32_t)((n&0x1f)<<5))
// channel number (0..17) assigned as the first in the sequence to be converted
#define JSQ1(n)     ((uint32_t)(n&0x1f))

/* ADC injected data registers */
#define ADC1_JDR1   MMIO32(ADC1_BASE + 0x3c)
#define ADC2_JDR1   MMIO32(ADC2_BASE + 0x3c)
#define ADC3_JDR1   MMIO32(ADC3_BASE + 0x3c)
#define ADC1_JDR2   MMIO32(ADC1_BASE + 0x40)
#define ADC2_JDR2   MMIO32(ADC2_BASE + 0x40)
#define ADC3_JDR2   MMIO32(ADC3_BASE + 0x40)
#define ADC1_JDR3   MMIO32(ADC1_BASE + 0x44)
#define ADC2_JDR3   MMIO32(ADC2_BASE + 0x44)
#define ADC3_JDR3   MMIO32(ADC3_BASE + 0x44)
#define ADC1_JDR4   MMIO32(ADC1_BASE + 0x48)
#define ADC2_JDR4   MMIO32(ADC2_BASE + 0x48)
#define ADC3_JDR4   MMIO32(ADC3_BASE + 0x48)
// Injected data

/* ADC1 regular data register */
#define ADC1_DR   MMIO32(ADC1_BASE + 0x00)
// ADC2 data In ADC1 dual mode
#define ADC2DATA_OFFS   16
/* ADC2_3 regular data registers */
#define ADC2_DR   MMIO32(ADC2_BASE + 0x00)
#define ADC3_DR   MMIO32(ADC3_BASE + 0x00)
// Regular data
#define DATA_MSK        0xffff

#endif
