#ifndef H_RCC_REGS
#define H_RCC_REGS
/*
 * Part of Belkin STM32 HAL, RCC regester definitions of STMF1xx CL MCU.
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

/* Clock control register */
#define RCC_CR          MMIO32(RCC_BASE + 0x00)
// PLL3 clock ready flag
#define PLL3RDY 0x20000000
// PLL3 enable
#define PLL3ON  0x10000000
// PLL2 clock ready flag
#define PLL2RDY 0x08000000
// PLL2 enable
#define PLL2ON  0x04000000
// PLL clock ready flag
#define PLLRDY  0x02000000
// PLL enable
#define PLLON   0x01000000
// Clock security system enable
#define CSSON   0x00080000
// External high-speed clock bypass
#define HSEBYP  0x00040000
// External high-speed clock ready flag
#define HSERDY  0x00020000
// HSE clock enable
#define HSEON   0x00010000
// Internal high-speed clock calibration
#define HSICAL_OFFS     8
// Internal high-speed clock trimming
#define HSITRIM_OFFS    3
// Internal high-speed clock ready flag
#define HSIRDY  0x00000002
// Internal high-speed clock enable
#define HSION   0x00000001

/* Clock configuration register */
#define RCC_CFGR        MMIO32(RCC_BASE + 0x04)
// Microcontroller clock output
#define MCO_NOCLK           0x00000000
#define MCO_SYSCLK          0x04000000
#define MCO_HSI             0x05000000
#define MCO_HSE             0x06000000
#define MCO_PLL_DIV2        0x07000000
#define MCO_PLL2            0x08000000
#define MCO_PLL3_DIV2       0x09000000
#define MCO_XT1             0x0a000000
#define MCO_PLL3            0x0b000000
// USB OTG FS prescaler
#define OTGFSPRE            0x00400000
// PLL multiplication factor
#define PLLMUL9             0x001c0000
#define PLLMUL8             0x00180000
#define PLLMUL7             0x00140000
#define PLLMUL6P5           0x00340000
#define PLLMUL6             0x00100000
#define PLLMUL5             0x000c0000
#define PLLMUL4             0x00080000
// LSB of division factor PREDIV1
#define PLLXTPRE            0x00020000
// PLL entry clock source
#define PLLSRC              0x00010000
// ADC prescaler
#define ADCPRE_PCLK2_DIV8   0x0000c000
#define ADCPRE_PCLK2_DIV6   0x00008000
#define ADCPRE_PCLK2_DIV4   0x00004000
#define ADCPRE_PCLK2_DIV2   0x00000000
// APB high-speed prescaler (APB2)
#define PPRE2_HCLK_DIV16    0x00003800
#define PPRE2_HCLK_DIV8     0x00003000
#define PPRE2_HCLK_DIV4     0x00002800
#define PPRE2_HCLK_DIV2     0x00002000
#define PPRE2_HCLK_NODIV    0x00000000
// APB Low-speed prescaler (APB1)
#define PPRE1_HCLK_DIV16    0x00000700
#define PPRE1_HCLK_DIV8     0x00000600
#define PPRE1_HCLK_DIV4     0x00000500
#define PPRE1_HCLK_DIV2     0x00000400
#define PPRE1_HCLK_NODIV    0x00000000
// AHB prescaler
#define HPRE_SYSCLK_DIV512  0x000000f0
#define HPRE_SYSCLK_DIV256  0x000000e0
#define HPRE_SYSCLK_DIV128  0x000000d0
#define HPRE_SYSCLK_DIV64   0x000000c0
#define HPRE_SYSCLK_DIV16   0x000000b0
#define HPRE_SYSCLK_DIV8    0x000000a0
#define HPRE_SYSCLK_DIV4    0x00000090
#define HPRE_SYSCLK_DIV2    0x00000080
#define HPRE_SYSCLK_NODIV   0x00000000
// System clock switch status
#define SWS_MASK            0x0000000c
#define SWS_HSI             0x00000000
#define SWS_HSE             0x00000004
#define SWS_PLL             0x00000008
// System clock Switch
#define SW_MASK             0x00000003
#define SW_HSI              0x00000000
#define SW_HSE              0x00000001
#define SW_PLL              0x00000002

/* Clock configuration register2 */
#define RCC_CFGR2       MMIO32(RCC_BASE + 0x2c)
// I2S3 clock source
#define I2S3SRC     0x00040000
// I2S2 clock source
#define I2S2SRC     0x00020000
// PREDIV1 entry clock source
#define PREDDIV1SRC 0x00010000
// PLL3 Multiplication Factor
#define PLL3MUL20   0x0000f000
#define PLL3MUL16   0x0000e000
#define PLL3MUL14   0x0000c000
#define PLL3MUL13   0x0000b000
#define PLL3MUL12   0x0000a000
#define PLL3MUL11   0x00009000
#define PLL3MUL10   0x00008000
#define PLL3MUL9    0x00007000
#define PLL3MUL8    0x00006000
// PLL2 Multiplication Factor
#define PLL2MUL20   0x00000f00
#define PLL2MUL16   0x00000e00
#define PLL2MUL14   0x00000c00
#define PLL2MUL13   0x00000b00
#define PLL2MUL12   0x00000a00
#define PLL2MUL11   0x00000900
#define PLL2MUL10   0x00000800
#define PLL2MUL9    0x00000700
#define PLL2MUL8    0x00000600
// PREDIV2 division factor
#define PREDDIV2_16 0x000000f0
#define PREDDIV2_15 0x000000e0
#define PREDDIV2_14 0x000000d0
#define PREDDIV2_13 0x000000c0
#define PREDDIV2_12 0x000000b0
#define PREDDIV2_11 0x000000a0
#define PREDDIV2_10 0x00000090
#define PREDDIV2_9  0x00000080
#define PREDDIV2_8  0x00000070
#define PREDDIV2_7  0x00000060
#define PREDDIV2_6  0x00000050
#define PREDDIV2_5  0x00000040
#define PREDDIV2_4  0x00000030
#define PREDDIV2_3  0x00000020
#define PREDDIV2_2  0x00000010
#define PREDDIV2_1  0x00000000
// PREDIV1 division factor
#define PREDDIV1_16 0x0000000f
#define PREDDIV1_15 0x0000000e
#define PREDDIV1_14 0x0000000d
#define PREDDIV1_13 0x0000000c
#define PREDDIV1_12 0x0000000b
#define PREDDIV1_11 0x0000000a
#define PREDDIV1_10 0x00000009
#define PREDDIV1_9  0x00000008
#define PREDDIV1_8  0x00000007
#define PREDDIV1_7  0x00000006
#define PREDDIV1_6  0x00000005
#define PREDDIV1_5  0x00000004
#define PREDDIV1_4  0x00000003
#define PREDDIV1_3  0x00000002
#define PREDDIV1_2  0x00000001
#define PREDDIV1_1  0x00000000

/* Clock interrupt register */
#define RCC_CIR         MMIO32(RCC_BASE + 0x08)
// Clock security system interrupt clear
#define CSSC        0x00800000
// PLL3 Ready Interrupt Clear
#define PLL3RDYC    0x00400000
// PLL2 Ready Interrupt Clear
#define PLL2RDYC    0x00200000
// PLL ready interrupt clear
#define PLLRDYC     0x00100000
// HSE ready interrupt clear
#define HSERDYC     0x00080000
// HSI ready interrupt clear
#define HSIRDYC     0x00040000
// LSE ready interrupt clear
#define LSERDYC     0x00020000
// LSI ready interrupt clear
#define LSIRDYC     0x00010000
// PLL3 Ready Interrupt Enable
#define PLL3RDYIE   0x00004000
// PLL2 Ready Interrupt Enable
#define PLL2RDYIE   0x00002000
// PLL ready interrupt enable
#define PLLRDYIE    0x00001000
// HSE ready interrupt enable
#define HSERDYIE    0x00000800
// HSI ready interrupt enable
#define HSIRDYIE    0x00000400
// LSE ready interrupt enable
#define LSERDYIE    0x00000200
// LSI ready interrupt enable
#define LSIRDYIE    0x00000100
// Clock security system interrupt flag
#define CSSF        0x00000080
// PLL3 Ready Interrupt flag
#define PLL3RDYF    0x00000040
// PLL2 Ready Interrupt flag
#define PLL2RDYF    0x00000020
// PLL ready interrupt flag
#define PLLRDYF     0x00000010
// HSE ready interrupt flag
#define HSERDYF     0x00000008
// HSI ready interrupt flag
#define HSIRDYF     0x00000004
// LSE ready interrupt flag
#define LSERDYF     0x00000002
// LSI ready interrupt flag
#define LSIRDYF     0x00000001

/* APB2 Peripherial reset register */
#define RCC_APB2RSTR    MMIO32(RCC_BASE + 0x0c)
// USART1 reset
#define USART1RST   0x00004000
// SPI 1 reset
#define SPI1RST     0x00001000
// TIM1 timer reset
#define TIM1RST     0x00000800
// ADC 2 interface reset
#define ADC2RST     0x00000400
// ADC 1 interface reset
#define ADC1RST     0x00000200
// I/O port E reset
#define IOPERST     0x00000040
// I/O port D reset
#define IOPDRST     0x00000020
// IO port C reset
#define IOPCRST     0x00000010
// IO port B reset
#define IOPBRST     0x00000008
// I/O port A reset
#define IOPARST     0x00000004
// Alternate function I/O reset
#define AFIORST     0x00000001

/* APB1 Peripherial reset register */
#define RCC_APB1RSTR    MMIO32(RCC_BASE + 0x10)
// DAC interface reset
#define DACRST      0x20000000
// Power interface reset
#define PWRRST      0x10000000
// Backup interface reset
#define BKPRST      0x08000000
// CAN2 reset
#define CAN2RST     0x04000000
// CAN1 reset
#define CAN1RST     0x02000000
// I2C 2 reset
#define I2C2RST     0x00400000
// I2C1 reset
#define I2C1RST     0x00200000
// USART 5 reset
#define UART5RST    0x00100000
// USART 4 reset
#define UART4RST    0x00080000
// USART 3 reset
#define UART3RST    0x00040000
// USART 2 reset
#define UART2RST    0x00020000
// SPI3 reset
#define SPI3RST     0x00008000
// SPI2 reset
#define SPI2RST     0x00004000
// Window watchdog reset
#define WWDGRST     0x00000800
// Timer 7 reset
#define TIM7RST     0x00000020
// Timer 6 reset
#define TIM6RST     0x00000010
// Timer 5 reset
#define TIM5RST     0x00000008
// Timer 4 reset
#define TIM4RST     0x00000004
// Timer 3 reset
#define TIM3RST     0x00000002
// Timer 2 reset
#define TIM2RST     0x00000001

/* AHB Peripheral Clock enable register */
#define RCC_AHBENR      MMIO32(RCC_BASE + 0x14)
#define ETHMACRXEN  0x00010000
#define ETHMACTXEN  0x00008000
#define ETHMACEN    0x00004000
#define OTGFSEN     0x00001000
#define AHB_CRCEN   0x00000040
#define FLITFEN     0x00000010
#define SRAMEN      0x00000004
#define DMA2EN      0x00000002
#define DMA1EN      0x00000001

/* APB2 peripheral clock enable register */
#define RCC_APB2ENR     MMIO32(RCC_BASE + 0x18)
#define USART1EN    0x00004000
#define SPI1EN      0x00001000
#define TIM1EN      0x00000800
#define ADC2EN      0x00000400
#define ADC1EN      0x00000200
#define IOPEEN      0x00000040
#define IOPDEN      0x00000020
#define IOPCEN      0x00000010
#define IOPBEN      0x00000008
#define IOPAEN      0x00000004
#define AFIOEN      0x00000001

/* APB1 peripheral clock enable register */
#define RCC_APB1ENR     MMIO32(RCC_BASE + 0x1c)
#define DACEN       0x20000000
#define PWREN       0x10000000
#define BKPEN       0x08000000
#define CAN2EN      0x04000000
#define CAN1EN      0x02000000
#define I2C2EN      0x00400000
#define I2C1EN      0x00200000
#define UART5EN     0x00100000
#define UART4EN     0x00080000
#define UART3EN     0x00040000
#define UART2EN     0x00020000
#define SPI3EN      0x00008000
#define SPI2EN      0x00004000
#define WWDGEN      0x00000800
#define TIM7EN      0x00000020
#define TIM6EN      0x00000010
#define TIM5EN      0x00000008
#define TIM4EN      0x00000004
#define TIM3EN      0x00000002
#define TIM2EN      0x00000001

/* Backup domain control register */
#define RCC_BCDR        MMIO32(RCC_BASE + 0x20)
// Backup domain software reset
#define BDRST           0x00010000
// RTC clock enable
#define RTCEN           0x00008000
// RTC clock source selection
#define RTCSEL_NOCLK    0x00000000
#define RTCSEL_LSE      0x00000100
#define RTCSEL_LSI      0x00000200
#define RTCSEL_HSE      0x00000300
// External Low Speed oscillator bypass
#define LSEBYP          0x00000004
// External Low Speed oscillator ready
#define LSERDY          0x00000002
// External Low Speed oscillator enable
#define LSEON           0x00000001

/* Control/status register */
#define RCC_CSR         MMIO32(RCC_BASE + 0x24)
// Low-power reset flag
#define LPWRRSTF    0x80000000
// Window watchdog reset flag
#define WWDGRSTF    0x40000000
// Independent watchdog reset flag
#define IWDGRSTF    0x20000000
// Software reset flag
#define SFTRSTF     0x10000000
// POR/PDR reset flag
#define PORRSTF     0x08000000
// PIN reset flag
#define PINRSTF     0x04000000
// Remove reset flag
#define RMVF        0x01000000
// Internal low speed oscillator ready
#define LSIRDY      0x00000002
// Internal low speed oscillator enable
#define LSION       0x00000001

/* AHB peripheral clock reset register */
#define RCC_AHBSTR      MMIO32(RCC_BASE + 0x28)
#define ETHMACRST   0x00004000
#define OTGFSRST    0x00001000

#endif
