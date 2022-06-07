#ifndef H_ETHERNET_REGS
#define H_ETHERNET_REGS
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

/****************** MAC register description ****************************/
/* Ethernet MAC configuration register */
#define ETH_MACCR          MMIO32(ETHERNET_BASE + 0x0000)
// Watchdog disable
#define WD      0x800000
// Jabber disable
#define JD      0x400000
// Interframe gap
#define IFG96   0x00000
#define IFG88   0x20000
#define IFG80   0x40000
#define IFG72   0x60000
#define IFG64   0x80000
#define IFG56   0xa0000
#define IFG48   0xc0000
#define IFG40   0xe0000
// Carrier sense disable
#define CSD     0x10000
// Fast Ethernet speed
#define FES     0x4000
// Receive own disable
#define ROD     0x2000
// Loopback mode
#define LM      0x1000
// Duplex mode
#define DM      0x800
// IPv4 checksum offload
#define IPCO    0x400
// Retry disable
#define RD      0x200
// Automatic pad/CRC stripping
#define APCS    0x80
// Back-off limit
#define BL10    0x00
#define BL8     0x20
#define BL4     0x40
#define BL1     0x60
// Deferral check
#define DC      0x10
// Transmitter enable
#define TE      0x8
// Receiver enable
#define RE      0x4

/* Ethernet MAC frame filter register */
#define ETH_MACFFR         MMIO32(ETHERNET_BASE + 0x0004)
// Receive all
#define RA                  0x800
// Hash or perfect filter
#define HPF                 0x400
// Source address filter
#define SAF                 0x200
// Source address inverse filtering
#define SAIF                0x100
// Pass control frames
#define PCF_PREVENTS        0x00
#define PCF_FORWARDS_ALL    0x80
#define PCF_FORWARDS_ADDR   0xc0
// Broadcast frames disable
#define BFD                 0x20
// Pass all multicast
#define PAM                 0x10
// Destination address inverse filtering
#define DAIF                0x8
// Hash multicast
#define HM                  0x4
// Hash unicast
#define HU                  0x2
// Promiscuous mode
#define PM                  0x1

/* Ethernet MAC hash table high and low register */
#define ETH_MACHTHR        MMIO32(ETHERNET_BASE + 0x0008)
#define ETH_MACHTLR        MMIO32(ETHERNET_BASE + 0x000c)
// Hash table

/* Ethernet MAC MII address register */
#define ETH_MACMIIAR       MMIO32(ETHERNET_BASE + 0x0010)
// PHY address
#define PA_SFT      11
#define PA_MSK      0x1f
// MII register
#define MR_SFT      6
#define MR_MSK      0x1f
// Clock range
#define CR_60_72MHZ 0x0
#define CR_20_35MHZ 0x4
#define CR_35_60MHZ 0xc
// MII write
#define MW          0x2
// MII busy
#define MB          0x1

/* Ethernet MAC MII data register */
#define ETH_MACMIIDR       MMIO32(ETHERNET_BASE + 0x0014)
// MII data, MD[16:0]

/* Ethernet MAC flow control register */
#define ETH_MACFCR         MMIO32(ETHERNET_BASE + 0x0018)
// Pause time
#define PT_SFT  16
#define PT_MSK  0xffff
// Zero-quanta pause disable
#define ZQPD    0x80
// Pause low threshold
#define PLT_M4   0x00
#define PLT_M28  0x10
#define PLT_M144 0x20
#define PLT_M256 0x30
// Unicast pause frame detect
#define UPFD    0x8
// Receive flow control enable
#define RFCE    0x4
// Transmit flow control enable
#define TFCE    0x2
// Flow control busy/back pressure activate
#define FCB_BPA 0x1

/* Ethernet MAC VLAN tag register */
#define ETH_MACVLANTR      MMIO32(ETHERNET_BASE + 0x001c)
// 12-bit VLAN tag comparison
#define VLANTC  0x10000
// VLAN tag identifier (for receive frames)
#define VLANTI_SFT  0
#define VLANTI_MSK  0xffff

/* Ethernet MAC remote wakeup frame filter register */
#define ETH_MACRWUFFR      MMIO32(ETHERNET_BASE + 0x0028)
//...

/* Ethernet MAC PMT control and status register */
#define ETH_MACPMTCSR      MMIO32(ETHERNET_BASE + 0x002c)
// Wakeup frame filter register pointer reset
#define WFFRPR  0x80000000
// Global unicast
#define GU      0x200
// Wakeup frame received
#define WFR     0x40
// Magic packet received
#define MPR     0x20
// Wakeup frame enable
#define WFE     0x4
// Magic Packet enable
#define MPE     0x2
// Power down
#define PD      0x1

/* Ethernet MAC interrupt status register */
#define ETH_MACSR          MMIO32(ETHERNET_BASE + 0x0038)
// Time stamp trigger status
#define TSTS    0x200
// MMC transmit status
#define MMCTS   0x40
// MMC receive status
#define MMCRS   0x20
// MMC status
#define MMCS    0x10
// PMT status
#define PMTS    0x8

/* Ethernet MAC interrupt mask register */
#define ETH_MACIMR         MMIO32(ETHERNET_BASE + 0x003c)
// Time stamp trigger interrupt mask
#define TSTIM   0x200
// PMT interrupt mask
#define PMTIM   0x4

/* Ethernet MAC address n high and low registers */
#define ETH_MACA0HR        MMIO32(ETHERNET_BASE + 0x0040)
// MAC address0 high [47:32]
#define ETH_MACA0LR        MMIO32(ETHERNET_BASE + 0x0044)
// MAC address0 low [31:0]
#define ETH_MACA1HR        MMIO32(ETHERNET_BASE + 0x0048)
#define ETH_MACA1LR        MMIO32(ETHERNET_BASE + 0x004c)
#define ETH_MACA2HR        MMIO32(ETHERNET_BASE + 0x0050)
#define ETH_MACA2LR        MMIO32(ETHERNET_BASE + 0x0054)
#define ETH_MACA3HR        MMIO32(ETHERNET_BASE + 0x0058)
// Address enable
#define AE  0x80000000
// Source address
#define SA  0x40000000
// Mask byte control
#define MBC_SFT 24
#define MBC_MSK 0x3f
// Mask byte control
#define MACANH_MSK  0xffff
#define MACANH_SFT  0
#define ETH_MACA3LR        MMIO32(ETHERNET_BASE + 0x005c)
// MAC addressn low [31:0]


/******************** MMC register description *************************/
/* Ethernet MMC control register */
#define ETH_MMCCR          MMIO32(ETHERNET_BASE + 0x0100)
// MMC counter freeze
#define MCF 0x8
// Reset on read
#define ROR 0x4
// Counter stop rollover
#define CSR 0x2
// Counter reset
#define CR  0x1

/* Ethernet MMC receive interrupt register */
#define ETH_MMCRIR         MMIO32(ETHERNET_BASE + 0x0104)
// Received Good Unicast Frames Status
#define RGUFS   0x200
// Received frames alignment error status
#define RFAES   0x40
// Received frames CRC error status
#define RFCES   0x20

/* Ethernet MMC transmit interrupt register */
#define ETH_MMCTIR         MMIO32(ETHERNET_BASE + 0x0108)
// Transmitted good frames status
#define TGFS    0x200000
// Transmitted good frames more single collision status
#define TGFMSCS 0x8000
// Transmitted good frames single collision status
#define TGFSCS  0x4000

/* Ethernet MMC receive interrupt mask register */
#define ETH_MMCRIMR        MMIO32(ETHERNET_BASE + 0x010c)
// Received good unicast frames mask
#define RGUFM   0x20000
// Received frames alignment error mask
#define RFAEM   0x40
// Received frame CRC error mask
#define RFCEM   0x20

/* Ethernet MMC transmit interrupt mask register */
#define ETH_MMCTIMR        MMIO32(ETHERNET_BASE + 0x0110)
// Transmitted good frames mask
#define TGFM    0x200000
// Transmitted good frames more single collision mask
#define TGFMSCM 0x8000
// Transmitted good frames single collision mask
#define TGFSCM  0x4000

/* Ethernet MMC transmitted good frames after a single collision cnt register */
#define ETH_MMCTGFSCCR     MMIO32(ETHERNET_BASE + 0x014c)
// Transmitted good frames single collision counter, TGFSCC[31:0]

/* Eth MMC transmitted good frames after more than a sngl collision cnt reg */
#define ETH_MMCTGFMSCCR    MMIO32(ETHERNET_BASE + 0x0150)
// Transmitted good frames more single collision counter, TGFMSCC[31:0]

/* Ethernet MMC transmitted good frames counter register */
#define ETH_MMCTGFCR       MMIO32(ETHERNET_BASE + 0x0168)
// Transmitted good frames counter, TGFC[31:0]

/* Ethernet MMC received frames with CRC error counter register */
#define ETH_MMCRFCECR      MMIO32(ETHERNET_BASE + 0x0194)
// Received frames CRC error counter, RFCEC[31:0]

/* Ethernet MMC received frames with alignment error counter register */
#define ETH_MMCRFAECR      MMIO32(ETHERNET_BASE + 0x0198)
// Received frames alignment error counter, RFAEC[31:0]

/* MMC received good unicast frames counter register */
#define ETH_MMCRGUFCR      MMIO32(ETHERNET_BASE + 0x01c4)
// Received good unicast frames counter, RGUFC[31:0]


/**************************** IEEE 1588 time stamp registers *****************/
/* Ethernet PTP time stamp control register */
#define ETH_PTPTSCR        MMIO32(ETHERNET_BASE + 0x0700)
// Time stamp addend register update
#define TSARU   0x20
// Time stamp interrupt trigger enable
#define TSITE   0x10
// Time stamp system time update
#define TSSTU   0x8
// Time stamp system time initialize
#define TSSTI   0x4
// Time stamp fine or coarse update
#define TSFCU   0x2
// Time stamp enable
#define TSE     0x1

/* Ethernet PTP subsecond increment register */
#define ETH_PTPSSIR        MMIO32(ETHERNET_BASE + 0x0704)
// System time subsecond increment, STSSI[7:0]

/* Ethernet PTP time stamp high register */
#define ETH_PTPTSHR        MMIO32(ETHERNET_BASE + 0x0708)
// System time second, STS[31:0]

/* Ethernet PTP time stamp low register */
#define ETH_PTPTSLR        MMIO32(ETHERNET_BASE + 0x070c)
// System time positive or negative sign
#define STPNS       0x80000000
// System time subseconds
#define STSS_SFT    0
#define STSS_MSK    0x7fffffff

/* Ethernet PTP time stamp high update register */
#define ETH_PTPTSHUR       MMIO32(ETHERNET_BASE + 0x0710)
// Time stamp update second, TSUS[31:0]

/* Ethernet PTP time stamp low update register */
#define ETH_PTPTSLUR       MMIO32(ETHERNET_BASE + 0x0714)
#define TSUPNS       0x80000000
// System time subseconds
#define TSUSS_SFT    0
#define TSUSS_MSK    0x7fffffff

/* Ethernet PTP time stamp addend register */
#define ETH_PTPTSAR        MMIO32(ETHERNET_BASE + 0x0718)
// Time stamp addend, TSA[31:0]

/* Ethernet PTP target time high and low registers */
#define ETH_PTPTTHR        MMIO32(ETHERNET_BASE + 0x071c)
#define ETH_PTPTTLR        MMIO32(ETHERNET_BASE + 0x0720)
// Target time stamp, TTS[63:0]

/******************************* DMA register description *********************/
/* Ethernet DMA bus mode register */
#define ETH_DMABMR         MMIO32(ETHERNET_BASE + 0x1000)
// Address-aligned beats
#define AAB     0x2000000
// 4xPBL mode
#define FPM     0x1000000
// Use separate PBL
#define USP     0x800000
// Rx DMA PBL
#define RDP_SFT 17
#define RDP_MSK 0x3f
// Fixed burst
#define FB      0x10000
// Rx Tx priority ratio
#define PM_1_1  0x0000
#define PM_2_1  0x4000
#define PM_3_1  0x8000
#define PM_4_1  0xc000
// Programmable burst length
#define PBL_SFT 8
#define PBL_MSK 3f
// Descriptor skip length
#define DSL_SFT 2
#define DSL_MSK 0x1f
// DMA Arbitration
#define DA      0x2
// Software reset
#define SR      0x1

/* Ethernet DMA transmit poll demand register */
#define ETH_DMATPDR        MMIO32(ETHERNET_BASE + 0x1004)
// Transmit poll demand, TPD[31:0]

/* EHERNET DMA receive poll demand register */
#define ETH_DMARPDR        MMIO32(ETHERNET_BASE + 0x1008)
// Receive poll demand, RPD[31:0]

/* Ethernet DMA receive descriptor list address register */
#define ETH_DMARDLAR       MMIO32(ETHERNET_BASE + 0x100c)
// Start of receive list, SRL[31:0]

/* Ethernet DMA transmit descriptor list address register */
#define ETH_DMATDLAR       MMIO32(ETHERNET_BASE + 0x1010)
// Start of transmit list, STL[31:0]

/* Ethernet DMA status register */
#define ETH_DMASR          MMIO32(ETHERNET_BASE + 0x1014)
// Time stamp trigger status
#define TSTSD   0x20000000
// PMT status
#define PMTSD   0x10000000
// MMC status
#define MMCSD   0x8000000
// Error bits status
#define EBS_SFT 23
#define EBS_MSK 0x7
// Transmit process state
#define TPS_SFT 20
#define TPS_MSK 0x7
// Receive process state
#define RPS_SFT 17
#define RPS_MSK 0x7
// Normal interrupt summary
#define NIS     0x10000
// Abnormal interrupt summary
#define AIS     0x8000
// Early receive status
#define ERS     0x4000
// Fatal bus error status
#define FBES    0x2000
// Early transmit status
#define ETS     0x400
// Receive watchdog timeout status
#define RWTS    0x200
// Receive process stopped status
#define RPSS    0x100
// Receive buffer unavailable status
#define RBUS    0x80
// Receive status
#define RS      0x40
// Transmit underflow status
#define TUS     0x20
// Receive overflow status
#define ROS     0x10
// Transmit jabber timeout status
#define TJTS    0x8
// Transmit buffer unavailable status
#define TBUS    0x4
// Transmit process stopped status
#define TPSS    0x2
// Transmit status
#define TS      0x1

/* Ethernet DMA operation mode register */
#define ETH_DMAOMR         MMIO32(ETHERNET_BASE + 0x1018)
// Dropping of TCP/IP checksum error frames disable
#define DTCEFD  0x4000000
// Receive store and forward
#define RSF     0x2000000
// Disable flushing of received frames
#define DFRF    0x1000000
// Transmit store and forward
#define TSF     0x200000
// Flush transmit FIFO
#define FTF     0x100000
// Transmit threshold control
#define TLC64   0x00000
#define TLC128  0x04000
#define TLC192  0x08000
#define TLC256  0x0c000
#define TLC40   0x10000
#define TLC32   0x14000
#define TLC24   0x18000
#define TLC16   0x1c000
// Start/stop transmission
#define ST      0x2000
// Forward error frames
#define FEF     0x80
// Forward undersized good frames
#define FUGF    0x40
// Receive threshold control
#define RTC64   0x00
#define RTC32   0x08
#define RTC96   0x10
#define RTC128  0x18
// Operate on second frame
#define OSF     0x4
// Start/stop receive
#define SR      0x2

/* Ethernet DMA interrupt enable register */
#define ETH_DMAIER         MMIO32(ETHERNET_BASE + 0x101c)
// Normal interrupt summary enable
#define NISE    0x10000
// Abnormal interrupt summary enable
#define AISE    0x8000
// Early receive interrupt enable
#define ERIE    0x4000
// Fatal bus error interrupt enable
#define FBEIE   0x2000
// Early transmit interrupt enable
#define ETIE    0x400
// receive watchdog timeout interrupt enable
#define RWTIE   0x200
// Receive process stopped interrupt enable
#define RPSIE   0x100
// Receive buffer unavailable interrupt enable
#define RBUIE   0x80
// Receive interrupt enable
#define RIE     0x40
// Underflow interrupt enable
#define TUIE    0x20
// Overflow interrupt enable
#define ROIE    0x10
// Transmit jabber timeout interrupt enable
#define TJTIE   0x8
// Transmit buffer unavailable interrupt enable
#define TBUIE   0x4
// Transmit process stopped interrupt enable
#define TPSIE   0x2
// Transmit interrupt enable
#define TIE     0x1

/* Ethernet DMA missed frame and buffer overflow counter register */
#define ETH_DMAMFBOCR      MMIO32(ETHERNET_BASE + 0x1020)
// Overflow bit for FIFO overflow counter
#define OFOC    0x10000000
// Missed frames by the application
#define MFA_SFT 17
#define MFA_MSK 0x7ff
// Overflow bit for missed frame counter
#define OMFC    0x10000
// Missed frames by the controller
#define MFC_SFT 0
#define MFC_MSK 0xffff

/* Ethernet DMA current host transmit descriptor register */
#define ETH_DMACHTDR       MMIO32(ETHERNET_BASE + 0x1048)
// Host transmit descriptor address pointer, HTDAP[31:0]

/* Ethernet DMA current host receive descriptor register */
#define ETH_DMACHRDR       MMIO32(ETHERNET_BASE + 0x104c)
// Host receive descriptor address pointer. Cleared On Reset. HRDAP[31:0]

/* Ethernet DMA current host transmit buffer address register */
#define ETH_DMACHTBAR      MMIO32(ETHERNET_BASE + 0x1050)
// Host transmit buffer address pointer. Cleared On Reset. HTBAP[31:0]

/* Ethernet DMA current host receive buffer address register */
#define ETH_DMACHRBAR      MMIO32(ETHERNET_BASE + 0x1054)
// Host receive buffer address pointer. Cleared On Reset. HRBAP[31:0]

#endif
