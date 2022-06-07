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

/**********************CAN control and status registers**********************/
/* CAN master control register */
#define CAN1_MCR    MMIO32(CAN1_BASE + 0x000)
#define CAN2_MCR    MMIO32(CAN2_BASE + 0x000)
// Debug freeze
#define DBF     0x10000
// bxCAN software master reset
#define RESETC  0x8000
// Time triggered communication mode
#define TTCM    0x80
// Automatic bus-off management
#define ABOM    0x40
// Automatic wakeup mode
#define AWUM    0x20
// No automatic retransmission
#define NART    0x10
// Receive FIFO locked mode
#define RFLM    0x8
// Transmit FIFO priority
#define TXFP    0x4
// Sleep mode request
#define SLEEP   0x2
// Initialization request
#define INRQ    0x1

/* CAN master status register */
#define CAN1_MSR    MMIO32(CAN1_BASE + 0x004)
#define CAN2_MSR    MMIO32(CAN2_BASE + 0x004)
// CAN Rx signal
#define RX      0x800
// Last sample point
#define SAMP    0x400
// Receive mode
#define RXM     0x200
// Transmit mode
#define TXM     0x100
// Sleep acknowledge interrupt
#define SLAKI   0x10
// Wakeup interrupt
#define WKUI    0x8
// Error interrupt
#define ERRI    0x4
// Sleep acknowledge
#define SLAK    0x2
// Initialization acknowledge
#define INAK    0x1

/* CAN transmit status register */
#define CAN1_TSR    MMIO32(CAN1_BASE + 0x008)
#define CAN2_TSR    MMIO32(CAN2_BASE + 0x008)
// Lowest priority flag for mailbox 2
#define LOW2        0x80000000
// Lowest priority flag for mailbox 1
#define LOW1        0x40000000
// Lowest priority flag for mailbox 0
#define LOW0        0x20000000
// Transmit mailbox 2 empty
#define TME2        0x10000000
// Transmit mailbox 1 empty
#define TME1        0x8000000
// Transmit mailbox 0 empty
#define TME0        0x4000000
// Mailbox code
#define CODE_SFT    24
#define CODE_MSK    0x3
// Abort request for mailbox 2
#define ABRQ2       0x800000
// Transmission error of mailbox 2
#define TERR2       0x80000
// Arbitration lost for mailbox 2
#define ALST2       0x40000
// Transmission OK of mailbox 2
#define TXOK2       0x20000
// Request completed mailbox2
#define RQCP2       0x10000
// Abort request for mailbox 1
#define ABRQ1       0x8000
// Transmission error of mailbox1
#define TERR1       0x800
// Arbitration lost for mailbox1
#define ALST1       0x400
// Transmission OK of mailbox1
#define TXOK1       0x200
// Request completed mailbox1
#define RQCP1       0x100
// Abort request for mailbox 0
#define ABRQ0       0x80
// Transmission error of mailbox0
#define TERR0       0x8
// Arbitration lost for mailbox0
#define ALST0       0x4
// Transmission OK of mailbox0
#define TXOK0       0x2
// Request completed mailbox0
#define RQCP0       0x1

/* CAN receive FIFO 0 register */
#define CAN1_RF0R   MMIO32(CAN1_BASE + 0x00c)
#define CAN2_RF0R   MMIO32(CAN2_BASE + 0x00c)
// Release FIFO 0 output mailbox
#define RFOM0       0x20
// FIFO 0 overrun
#define FOVR0       0x10
// FIFO 0 full
#define FULL0       0x80
// FIFO 0 message pending
#define FMP0_SFT    0
#define FMP0_MSK    0x3

/* CAN receive FIFO 1 register */
#define CAN1_RF1R   MMIO32(CAN1_BASE + 0x010)
#define CAN2_RF1R   MMIO32(CAN2_BASE + 0x010)
// Release FIFO 1 output mailbox
#define RFOM1       0x20
// FIFO 0 overrun
#define FOVR1       0x10
// FIFO 0 full
#define FULL1       0x80
// FIFO 0 message pending
#define FMP1_SFT    0
#define FMP1_MSK    0x3

/* CAN interrupt enable register */
#define CAN1_IER    MMIO32(CAN1_BASE + 0x014)
#define CAN2_IER    MMIO32(CAN2_BASE + 0x014)
// Sleep interrupt enable
#define SLKIE   0x20000
// Wakeup interrupt enable
#define WKUIE   0x10000
// Error interrupt enable
#define ERRIEC  0x8000
// Last error code interrupt enable
#define LECIE   0x800
// Bus-off interrupt enable
#define BOFIE   0x400
// Error passive interrupt enable
#define EPVIE   0x200
// Error warning interrupt enable
#define EWGIE   0x100
// FIFO overrun interrupt enable
#define FOVIE1  0x40
// FIFO full interrupt enable
#define FFIE1   0x20
// FIFO message pending interrupt enable
#define FMPIE1  0x10
// FIFO overrun interrupt enable
#define FOVIE0  0x8
// FIFO full interrupt enable
#define FFIE0   0x4
// FIFO message pending interrupt enable
#define FMPIE0  0x2
// Transmit mailbox empty interrupt enable
#define TMEIE   0x1

/* CAN error status register */
#define CAN1_ESR    MMIO32(CAN1_BASE + 0x018)
#define CAN2_ESR    MMIO32(CAN2_BASE + 0x018)
// Receive error counter
#define REC_SFT     24
#define REC_MSK     0xff
// Least significant byte of the 9-bit transmit error counter
#define TEC_LSB_SFT 16
#define TEC_LSB_MSK 0xff
// Last error code
#define LEC_NO              0x00
#define LEC_STUFF           0x10
#define LEC_FORM            0x20
#define LEC_ACK             0x30
#define LEC_BIT_RX          0x40
#define LEC_BIT_DOMINANT    0x50
#define LEC_CRC             0x60
#define LEC_SW              0x70
// Bus-off flag
#define BOFF        0x4
// Error passive flag
#define EPVF        0x2
// Error warning flag
#define EWGF        0x1

/* CAN bit timing register */
#define CAN1_BTR    MMIO32(CAN1_BASE + 0x01c)
#define CAN2_BTR    MMIO32(CAN2_BASE + 0x01c)
// Silent mode (debug)
#define SILM        0x80000000
// Loop back mode (debug)
#define LBKM        0x40000000
// Resynchronization jump width
#define SJW_SFT     24
#define SJW_MSK     0x3
// Time segment 2
#define TS2_SFT     20
#define TS2_MSK     0x7
// Time segment 1
#define TS1_SFT     16
#define TS1_MSK     0x7
// Baud rate prescaler
#define BRP_SFT     0
#define BRP_MSK     0x3ff

/*************************CAN mailbox registers*******************************/
/* CAN TX mailbox identifier register */
#define CAN1_TI0R   MMIO32(CAN1_BASE + 0x180)
#define CAN2_TI0R   MMIO32(CAN2_BASE + 0x180)

#define CAN1_TI1R   MMIO32(CAN1_BASE + 0x190)
#define CAN2_TI1R   MMIO32(CAN2_BASE + 0x190)

#define CAN1_TI2R   MMIO32(CAN1_BASE + 0x1a0)
#define CAN2_TI2R   MMIO32(CAN2_BASE + 0x1a0)
// Standard identifier or extended identifier
#define STID_SFT    21
#define STID_MSK    0x7ff
// Extended identifier
#define EXID_SFT    3
#define EXID_MSK    0x1fffffff
// Identifier extension
#define IDE         0x4
// Remote transmission request
#define RTR         0x2
// Transmit mailbox request
#define TXRQ        0x1

/* CAN mailbox data length control and time stamp register */
#define CAN1_TDT0R  MMIO32(CAN1_BASE + 0x184)
#define CAN2_TDT0R  MMIO32(CAN2_BASE + 0x184)

#define CAN1_TDT1R  MMIO32(CAN1_BASE + 0x194)
#define CAN2_TDT1R  MMIO32(CAN2_BASE + 0x194)

#define CAN1_TDT2R  MMIO32(CAN1_BASE + 0x1a4)
#define CAN2_TDT2R  MMIO32(CAN2_BASE + 0x1a4)
// Message time stamp
#define TIME_SFT    16
#define TIME_MSK    0xffff
// Transmit global time
#define TGT         0x100
// Data length code
#define DLC_SFT     0
#define DLC_MSK     0xf

/* CAN mailbox data low register */
#define CAN1_TDL0R  MMIO32(CAN1_BASE + 0x188)
#define CAN2_TDL0R  MMIO32(CAN2_BASE + 0x188)

#define CAN1_TDL1R  MMIO32(CAN1_BASE + 0x198)
#define CAN2_TDL1R  MMIO32(CAN2_BASE + 0x198)

#define CAN1_TDL2R  MMIO32(CAN1_BASE + 0x1a8)
#define CAN2_TDL2R  MMIO32(CAN2_BASE + 0x1a8)
// Data byte 3 of the message.
#define DATA3_SFT   24
#define DATA3_MSK   0xff
// Data byte 2 of the message.
#define DATA2_SFT   16
#define DATA2_MSK   0xff
// Data byte 1 of the message.
#define DATA1_SFT   8
#define DATA1_MSK   0xff
// Data byte 0 of the message.
#define DATA0_SFT   0
#define DATA0_MSK   0xff

/* CAN mailbox data high register */
#define CAN1_TDH0R  MMIO32(CAN1_BASE + 0x18c)
#define CAN2_TDH0R  MMIO32(CAN2_BASE + 0x18c)

#define CAN1_TDH1R  MMIO32(CAN1_BASE + 0x19c)
#define CAN2_TDH1R  MMIO32(CAN2_BASE + 0x19c)

#define CAN1_TDH2R  MMIO32(CAN1_BASE + 0x1ac)
#define CAN2_TDH2R  MMIO32(CAN2_BASE + 0x1ac)
// Data byte 7 of the message.
#define DATA7_SFT   24
#define DATA7_MSK   0xff
// Data byte 6 of the message.
#define DATA6_SFT   16
#define DATA6_MSK   0xff
// Data byte 5 of the message.
#define DATA5_SFT   8
#define DATA5_MSK   0xff
// Data byte 4 of the message.
#define DATA4_SFT   0
#define DATA4_MSK   0xff

/* CAN receive FIFO mailbox identifier register */
#define CAN1_RI0R   MMIO32(CAN1_BASE + 0x1b0)
#define CAN2_RI0R   MMIO32(CAN2_BASE + 0x1b0)

#define CAN1_RI1R   MMIO32(CAN1_BASE + 0x1c0)
#define CAN2_RI1R   MMIO32(CAN2_BASE + 0x1c0)
// Standard identifier or extended identifier
#define STIDI_SFT    21
#define STIDI_MSK    0x7ff
// Extended identifier
#define EXIDI_SFT    3
#define EXIDI_MSK    0x1fffffff
// Identifier extension
#define IDE          0x4
// Remote transmission request
#define RTR          0x2

/* CAN receive FIFO mailbox data length control and time stamp register */
#define CAN1_RDT0R  MMIO32(CAN1_BASE + 0x1b4)
#define CAN2_RDT0R  MMIO32(CAN2_BASE + 0x1b4)

#define CAN1_RDT1R  MMIO32(CAN1_BASE + 0x1c4)
#define CAN2_RDT1R  MMIO32(CAN2_BASE + 0x1c4)
// Message time stamp
#define TIMEM_SFT   16
#define TIMEM_MSK   0xffff
// Filter match index
#define FMI_SFT     8
#define FMI_MSK     0xff
// Data length code
#define DLCM_SFT    0
#define DLCM_MSK    0xf

/* CAN receive FIFO mailbox data low registe */
#define CAN1_RDL0R  MMIO32(CAN1_BASE + 0x1b8)
#define CAN2_RDL0R  MMIO32(CAN2_BASE + 0x1b8)

#define CAN1_RDL1R  MMIO32(CAN1_BASE + 0x1c8)
#define CAN2_RDL1R  MMIO32(CAN2_BASE + 0x1c8)
// Data byte 3 of the message.
// Data byte 2 of the message.
// Data byte 1 of the message.
// Data byte 0 of the message.

/* CAN receive FIFO mailbox data high register */
#define CAN1_RDH0R  MMIO32(CAN1_BASE + 0x1bc)
#define CAN2_RDH0R  MMIO32(CAN2_BASE + 0x1bc)

#define CAN1_RDH1R  MMIO32(CAN1_BASE + 0x1cc)
#define CAN2_RDH1R  MMIO32(CAN2_BASE + 0x1cc)
// Data byte 7 of the message.
// Data byte 6 of the message.
// Data byte 5 of the message.
// Data byte 4 of the message.

/************************** CAN filter registers ****************************/
/* CAN filter master register */
#define CAN1_FMR    MMIO32(CAN1_BASE + 0x200)
#define CAN2_FMR    MMIO32(CAN2_BASE + 0x200)
// CAN2 start bank
#define CAN2SB_SFT  8
#define CAN2SB_MSK  0x2f
// Filter init mode
#define FINIT       0x1

/* CAN filter mode register */
#define CAN1_FM1R   MMIO32(CAN1_BASE + 0x204)
#define CAN2_FM1R   MMIO32(CAN2_BASE + 0x204)
// Mode of the registers of Filter x.
#define FBM27   0x8000000
#define FBM26   0x4000000
#define FBM25   0x2000000
#define FBM24   0x1000000
#define FBM23   0x800000
#define FBM22   0x400000
#define FBM21   0x200000
#define FBM20   0x100000
#define FBM19   0x80000
#define FBM18   0x40000
#define FBM17   0x20000
#define FBM16   0x10000
#define FBM15   0x8000
#define FBM14   0x4000
#define FBM13   0x2000
#define FBM12   0x1000
#define FBM11   0x800
#define FBM10   0x400
#define FBM9    0x200
#define FBM8    0x100
#define FBM7    0x80
#define FBM6    0x40
#define FBM5    0x20
#define FBM4    0x10
#define FBM3    0x8
#define FBM2    0x4
#define FBM1    0x2
#define FBM0    0x1

/* CAN filter scale register */
#define CAN1_FS1R   MMIO32(CAN1_BASE + 0x20c)
#define CAN2_FS1R   MMIO32(CAN2_BASE + 0x20c)
// These bits define the scale configuration of Filters 13-0.
#define FSC27   0x8000000
#define FSC26   0x4000000
#define FSC25   0x2000000
#define FSC24   0x1000000
#define FSC23   0x800000
#define FSC22   0x400000
#define FSC21   0x200000
#define FSC20   0x100000
#define FSC19   0x80000
#define FSC18   0x40000
#define FSC17   0x20000
#define FSC16   0x10000
#define FSC15   0x8000
#define FSC14   0x4000
#define FSC13   0x2000
#define FSC12   0x1000
#define FSC11   0x800
#define FSC10   0x400
#define FSC9    0x200
#define FSC8    0x100
#define FSC7    0x80
#define FSC6    0x40
#define FSC5    0x20
#define FSC4    0x10
#define FSC3    0x8
#define FSC2    0x4
#define FSC1    0x2
#define FSC0    0x1

/* CAN filter FIFO assignment register */
#define CAN1_FFA1R  MMIO32(CAN1_BASE + 0x214)
#define CAN2_FFA1R  MMIO32(CAN2_BASE + 0x214)
// Filter FIFO assignment for filter x
#define FFA27   0x8000000
#define FFA26   0x4000000
#define FFA25   0x2000000
#define FFA24   0x1000000
#define FFA23   0x800000
#define FFA22   0x400000
#define FFA21   0x200000
#define FFA20   0x100000
#define FFA19   0x80000
#define FFA18   0x40000
#define FFA17   0x20000
#define FFA16   0x10000
#define FFA15   0x8000
#define FFA14   0x4000
#define FFA13   0x2000
#define FFA12   0x1000
#define FFA11   0x800
#define FFA10   0x400
#define FFA9    0x200
#define FFA8    0x100
#define FFA7    0x80
#define FFA6    0x40
#define FFA5    0x20
#define FFA4    0x10
#define FFA3    0x8
#define FFA2    0x4
#define FFA1    0x2
#define FFA0    0x1

/* CAN filter activation register */
#define CAN1_FA1R   MMIO32(CAN1_BASE + 0x21c)
#define CAN2_FA1R   MMIO32(CAN2_BASE + 0x21c)
// The software sets this bit to activate Filter x.
#define FACT27   0x8000000
#define FACT26   0x4000000
#define FACT25   0x2000000
#define FACT24   0x1000000
#define FACT23   0x800000
#define FACT22   0x400000
#define FACT21   0x200000
#define FACT20   0x100000
#define FACT19   0x80000
#define FACT18   0x40000
#define FACT17   0x20000
#define FACT16   0x10000
#define FACT15   0x8000
#define FACT14   0x4000
#define FACT13   0x2000
#define FACT12   0x1000
#define FACT11   0x800
#define FACT10   0x400
#define FACT9    0x200
#define FACT8    0x100
#define FACT7    0x80
#define FACT6    0x40
#define FACT5    0x20
#define FACT4    0x10
#define FACT3    0x8
#define FACT2    0x4
#define FACT1    0x2
#define FACT0    0x1

/* Filter bank i register x */
#define CAN1_F0R1   MMIO32(CAN1_BASE + 0x240)
#define CAN2_F0R1   MMIO32(CAN2_BASE + 0x240)

#define CAN1_F0R2   MMIO32(CAN1_BASE + 0x244)
#define CAN2_F0R2   MMIO32(CAN2_BASE + 0x244)

#define CAN1_F1R1   MMIO32(CAN1_BASE + 0x248)
#define CAN2_F1R1   MMIO32(CAN2_BASE + 0x248)

#define CAN1_F1R2   MMIO32(CAN1_BASE + 0x24c)
#define CAN2_F1R2   MMIO32(CAN2_BASE + 0x24c)

#define CAN1_F2R1   MMIO32(CAN1_BASE + 0x250)
#define CAN2_F2R1   MMIO32(CAN2_BASE + 0x250)

#define CAN1_F2R2   MMIO32(CAN1_BASE + 0x254)
#define CAN2_F2R2   MMIO32(CAN2_BASE + 0x254)

#define CAN1_F3R1   MMIO32(CAN1_BASE + 0x258)
#define CAN2_F3R1   MMIO32(CAN2_BASE + 0x258)

#define CAN1_F3R2   MMIO32(CAN1_BASE + 0x25c)
#define CAN2_F3R2   MMIO32(CAN2_BASE + 0x25c)

#define CAN1_F4R1   MMIO32(CAN1_BASE + 0x260)
#define CAN2_F4R1   MMIO32(CAN2_BASE + 0x260)

#define CAN1_F4R2   MMIO32(CAN1_BASE + 0x264)
#define CAN2_F4R2   MMIO32(CAN2_BASE + 0x264)

#define CAN1_F5R1   MMIO32(CAN1_BASE + 0x268)
#define CAN2_F5R1   MMIO32(CAN2_BASE + 0x268)

#define CAN1_F5R2   MMIO32(CAN1_BASE + 0x26c)
#define CAN2_F5R2   MMIO32(CAN2_BASE + 0x26c)

#define CAN1_F6R1   MMIO32(CAN1_BASE + 0x270)
#define CAN2_F6R1   MMIO32(CAN2_BASE + 0x270)

#define CAN1_F6R2   MMIO32(CAN1_BASE + 0x274)
#define CAN2_F6R2   MMIO32(CAN2_BASE + 0x274)

#define CAN1_F7R1   MMIO32(CAN1_BASE + 0x278)
#define CAN2_F7R1   MMIO32(CAN2_BASE + 0x278)

#define CAN1_F7R2   MMIO32(CAN1_BASE + 0x27c)
#define CAN2_F7R2   MMIO32(CAN2_BASE + 0x27c)

#define CAN1_F8R1   MMIO32(CAN1_BASE + 0x280)
#define CAN2_F8R1   MMIO32(CAN2_BASE + 0x280)

#define CAN1_F8R2   MMIO32(CAN1_BASE + 0x284)
#define CAN2_F8R2   MMIO32(CAN2_BASE + 0x284)

#define CAN1_F9R1   MMIO32(CAN1_BASE + 0x288)
#define CAN2_F9R1   MMIO32(CAN2_BASE + 0x288)

#define CAN1_F9R2   MMIO32(CAN1_BASE + 0x28c)
#define CAN2_F9R2   MMIO32(CAN2_BASE + 0x28c)

#define CAN1_F10R1  MMIO32(CAN1_BASE + 0x290)
#define CAN2_F10R1  MMIO32(CAN2_BASE + 0x290)

#define CAN1_F10R2  MMIO32(CAN1_BASE + 0x294)
#define CAN2_F10R2  MMIO32(CAN2_BASE + 0x294)

#define CAN1_F11R1  MMIO32(CAN1_BASE + 0x298)
#define CAN2_F11R1  MMIO32(CAN2_BASE + 0x298)

#define CAN1_F11R2  MMIO32(CAN1_BASE + 0x29c)
#define CAN2_F11R2  MMIO32(CAN2_BASE + 0x29c)

#define CAN1_F12R1  MMIO32(CAN1_BASE + 0x2a0)
#define CAN2_F12R1  MMIO32(CAN2_BASE + 0x2a0)

#define CAN1_F12R2  MMIO32(CAN1_BASE + 0x2a4)
#define CAN2_F12R2  MMIO32(CAN2_BASE + 0x2a4)

#define CAN1_F13R1  MMIO32(CAN1_BASE + 0x2a8)
#define CAN2_F13R1  MMIO32(CAN2_BASE + 0x2a8)

#define CAN1_F13R2  MMIO32(CAN1_BASE + 0x2ac)
#define CAN2_F13R2  MMIO32(CAN2_BASE + 0x2ac)

#define CAN1_F14R1  MMIO32(CAN1_BASE + 0x2b0)
#define CAN2_F14R1  MMIO32(CAN2_BASE + 0x2b0)

#define CAN1_F14R2  MMIO32(CAN1_BASE + 0x2b4)
#define CAN2_F14R2  MMIO32(CAN2_BASE + 0x2b4)

#define CAN1_F15R1  MMIO32(CAN1_BASE + 0x2b8)
#define CAN2_F15R1  MMIO32(CAN2_BASE + 0x2b8)

#define CAN1_F15R2  MMIO32(CAN1_BASE + 0x2bc)
#define CAN2_F15R2  MMIO32(CAN2_BASE + 0x2bc)

#define CAN1_F16R1  MMIO32(CAN1_BASE + 0x2c0)
#define CAN2_F16R1  MMIO32(CAN2_BASE + 0x2c0)

#define CAN1_F16R2  MMIO32(CAN1_BASE + 0x2c4)
#define CAN2_F16R2  MMIO32(CAN2_BASE + 0x2c4)

#define CAN1_F17R1  MMIO32(CAN1_BASE + 0x2c8)
#define CAN2_F17R1  MMIO32(CAN2_BASE + 0x2c8)

#define CAN1_F17R2  MMIO32(CAN1_BASE + 0x2cc)
#define CAN2_F17R2  MMIO32(CAN2_BASE + 0x2cc)

#define CAN1_F18R1  MMIO32(CAN1_BASE + 0x2d0)
#define CAN2_F18R1  MMIO32(CAN2_BASE + 0x2d0)

#define CAN1_F18R2  MMIO32(CAN1_BASE + 0x2d4)
#define CAN2_F18R2  MMIO32(CAN2_BASE + 0x2d4)

#define CAN1_F19R1  MMIO32(CAN1_BASE + 0x2d8)
#define CAN2_F19R1  MMIO32(CAN2_BASE + 0x2d8)

#define CAN1_F19R2  MMIO32(CAN1_BASE + 0x2dc)
#define CAN2_F19R2  MMIO32(CAN2_BASE + 0x2dc)

#define CAN1_F20R1  MMIO32(CAN1_BASE + 0x2e0)
#define CAN2_F20R1  MMIO32(CAN2_BASE + 0x2e0)

#define CAN1_F20R2  MMIO32(CAN1_BASE + 0x2e4)
#define CAN2_F20R2  MMIO32(CAN2_BASE + 0x2e4)

#define CAN1_F21R1  MMIO32(CAN1_BASE + 0x2e8)
#define CAN2_F21R1  MMIO32(CAN2_BASE + 0x2e8)

#define CAN1_F21R2  MMIO32(CAN1_BASE + 0x2ec)
#define CAN2_F21R2  MMIO32(CAN2_BASE + 0x2ec)

#define CAN1_F22R1  MMIO32(CAN1_BASE + 0x2f0)
#define CAN2_F22R1  MMIO32(CAN2_BASE + 0x2f0)

#define CAN1_F22R2  MMIO32(CAN1_BASE + 0x2f4)
#define CAN2_F22R2  MMIO32(CAN2_BASE + 0x2f4)

#define CAN1_F23R1  MMIO32(CAN1_BASE + 0x2f8)
#define CAN2_F23R1  MMIO32(CAN2_BASE + 0x2f8)

#define CAN1_F23R2  MMIO32(CAN1_BASE + 0x2fc)
#define CAN2_F23R2  MMIO32(CAN2_BASE + 0x2fc)

#define CAN1_F24R1  MMIO32(CAN1_BASE + 0x300)
#define CAN2_F24R1  MMIO32(CAN2_BASE + 0x300)

#define CAN1_F24R2  MMIO32(CAN1_BASE + 0x304)
#define CAN2_F24R2  MMIO32(CAN2_BASE + 0x304)

#define CAN1_F25R1  MMIO32(CAN1_BASE + 0x308)
#define CAN2_F25R1  MMIO32(CAN2_BASE + 0x308)

#define CAN1_F25R2  MMIO32(CAN1_BASE + 0x30c)
#define CAN2_F25R2  MMIO32(CAN2_BASE + 0x30c)

#define CAN1_F26R1  MMIO32(CAN1_BASE + 0x310)
#define CAN2_F26R1  MMIO32(CAN2_BASE + 0x310)

#define CAN1_F26R2  MMIO32(CAN1_BASE + 0x314)
#define CAN2_F26R2  MMIO32(CAN2_BASE + 0x314)

#define CAN1_F27R1  MMIO32(CAN1_BASE + 0x318)
#define CAN2_F27R1  MMIO32(CAN2_BASE + 0x318)

#define CAN1_F27R2  MMIO32(CAN1_BASE + 0x31c)
#define CAN2_F27R2  MMIO32(CAN2_BASE + 0x31c)
// Mode of the registers of Filter x.
#define FB31   0x80000000
#define FB30   0x40000000
#define FB29   0x20000000
#define FB28   0x10000000
#define FB27   0x8000000
#define FB26   0x4000000
#define FB25   0x2000000
#define FB24   0x1000000
#define FB23   0x800000
#define FB22   0x400000
#define FB21   0x200000
#define FB20   0x100000
#define FB19   0x80000
#define FB18   0x40000
#define FB17   0x20000
#define FB16   0x10000
#define FB15   0x8000
#define FB14   0x4000
#define FB13   0x2000
#define FB12   0x1000
#define FB11   0x800
#define FB10   0x400
#define FB9    0x200
#define FB8    0x100
#define FB7    0x80
#define FB6    0x40
#define FB5    0x20
#define FB4    0x10
#define FB3    0x8
#define FB2    0x4
#define FB1    0x2
#define FB0    0x1

#endif
