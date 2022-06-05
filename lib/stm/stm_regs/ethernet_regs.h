#ifndef H_DMA_REGS
#define H_DMA_REGS
/*
 * Part of Belkin STM32 HAL, Ethernet register definitions of STM32F1xx MCUs.
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
#define ETH_MACCR    MMIO32(ETHERNET_BASE + 0x0000)

/*  */
#define ETH_MACFFR     MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACHTHR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACHTLR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACMIIAR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACMIIDR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACFCR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACVLANTR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACRWUFFR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACPMTCSR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACSR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACIMR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACA0HR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACA0LR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACA1HR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACA1LR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACA2HR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACA2LR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACA3HR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MACA3LR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCCR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCRIR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCTIR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCRIMR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCTIMR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCTGFSCCR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCTGFMSCCR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCTGFCR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCRFCECR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCRFAECR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_MMCRGUFCR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_PTPTSCR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_PTPSSIR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_PTPTSHR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_PTPTSLR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_PTPTSHUR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_PTPTSLUR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_PTPTSAR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_PTPTTHR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_PTPTTLR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMABMR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMATPDR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMARPDR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMARDLAR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMATDLAR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMASR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMAOMR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMAIER    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMAMFBOCR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMACHTDR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMACHRDR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMACHTBAR    MMIO32(ETHERNET_BASE + 0x)

/*  */
#define ETH_DMACHRBAR    MMIO32(ETHERNET_BASE + 0x)

#endif
