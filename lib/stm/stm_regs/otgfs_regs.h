#ifndef H_OTGFS_REGS
#define H_OTGFS_REGS
/*
 * Part of Belkin STM32 HAL, USB on-the-go full-speed register definitions of
 * STM32F1xx connectivity line MCUs.
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


/****** OTG_FS global registers *******/
/* OTG_FS control and status register */
#define OTG_FS_GOTGCTL      MMIO32(USB_OTG_FS_BASE + 0x000)
// B-session valid
#define BSVLD   0x80000
// A-session valid
#define ASVLD   0x40000
// Long/short debounce time
#define DBCT    0x20000
// Connector ID status
#define CIDSTS  0x10000
// Device HNP enabled
#define DHNPEN  0x00800
// host set HNP enable
#define HSHNPEN 0x00400
// HNP request
#define HNPRQ   0x00200
// Host negotiation success
#define HNGSCS  0x00100
// Session request
#define SRQ     0x00002
// Session request success
#define SRQSCS  0x00001

/* OTG_FS interrupt register */
#define OTG_FS_GOTGINT      MMIO32(USB_OTG_FS_BASE + 0x004)
// Debounce done
#define DBCDNE  0x80000
// A-device timeout change
#define ADTOCHG 0x40000
// Host negotiation detected
#define HNGDET  0x20000
// Host negotiation success status change
#define HNSSCHG 0x00200
// Session request success status change
#define SRSSCHG 0x00100
// Session end detected
#define SEDET   0x00004

/* OTG_FS AHB configuration register */
#define OTG_FS_GAHBCFG      MMIO32(USB_OTG_FS_BASE + 0x008)
// Periodic TxFIFO empty level
#define PTXFELVL    0x100
// TxFIFO empty level
#define TXFELVL     0x080
// Global interrupt mask
#define GINTMSK     0x001

/* OTG_FS USB configuration register */
#define OTG_FS_GUSBCFG      MMIO32(USB_OTG_FS_BASE + 0x00c)
// Corrupt Tx packet
#define CTXPKT      0x80000000
// Force device mode
#define FDMOD       0x40000000
// Force host mode
#define FHMOD       0x20000000
// USB turnaround time
#define TRDT14_15   0x00003c00
#define TRDT15_16   0x00003800
#define TRDT16_17   0x00003400
#define TRDT17_18   0x00003000
#define TRDT18_20   0x00002c00
#define TRDT20_22   0x00002800
#define TRDT22_24   0x00002400
#define TRDT24_27   0x00002000
#define TRDT27_32   0x00001c00
#define TRDT32_GT   0x00001800
// HNP-capable
#define HNPCAP      0x00000200
// SRP-capable
#define SRPCAP      0x00000100
// Full speed serial transceiver select
#define PHYSEL      0x00000040
// FS timeout calibration
#define TOCAL_MSK   0x0000000f

/* OTG_FS reset register */
#define OTG_FS_GRSTCTL      MMIO32(USB_OTG_FS_BASE + 0x010)
// AHB master idle
#define AHBIDL      0x80000000
// TxFIFO number
#define TXFNUM0     0x00000000
#define TXFNUM1     0x00000040
#define TXFNUM2     0x00000080
#define TXFNUM3     0x000000c0
#define TXFNUM4     0x00000100
#define TXFNUM15    0x00000140
#define TXFNUM_ALL  0x00000400
// TxFIFO flush
#define TXFFLSH     0x00000020
// RxFIFO flush
#define RXFFLSH     0x00000010
// Host frame counter reset
#define FCRST       0x00000004
// HCLK soft reset
#define HSRST       0x00000002
// Core soft reset
#define CSRST       0x00000001

/* OTG_FS core interrupt register */
#define OTG_FS_GINTSTS      MMIO32(USB_OTG_FS_BASE + 0x014)
// Resume/remote wakeup detected interrupt
#define WKUPINT         0x80000000
// Session request/new session detected interrupt
#define SRQINT          0x40000000
// Disconnect detected interrupt
#define DISCINT         0x20000000
// Connector ID status change
#define CIDSCHG         0x10000000
// Periodic TxFIFO empty
#define PTXFE           0x04000000
// Host channels interrupt
#define HCINT           0x02000000
// Host port interrupt
#define HPRTINT         0x01000000
// Incomplete periodic transfer
#define IPXFR           0x00200000
// Incomplete isochronous OUT transfer
#define INCOMPISOOUT    0x00200000
// Incomplete isochronous IN transfer
#define IISOIXFR        0x00100000
// OUT endpoint interrupt
#define OEPINT          0x00080000
// IN endpoint interrupt
#define IEPINT          0x00040000
// End of periodic frame interrupt
#define EOPF            0x00008000
// Isochronous OUT packet dropped interrupt
#define ISOODRP         0x00004000
// Enumeration done
#define ENUMDNE         0x00002000
// USB reset
#define USBRST          0x00001000
// USB suspend
#define USBSUSP         0x00000800
// Early suspend
#define ESUSP           0x00000400
// Global OUT NAK effective
#define GONAKEFF        0x00000080
// Global IN non-periodic NAK effective
#define GINAKEFF        0x00000040
// Non-periodic TxFIFO empty
#define NPTXFE          0x00000020
// RxFIFO non-empty
#define RXFLVL          0x00000010
// Start of frame
#define SOF             0x00000008
// OTG interrupt
#define OTGINT          0x00000004
// Mode mismatch interrupt
#define MMIS            0x00000002
// Current mode of operation
#define CMOD            0x00000001

/* OTG_FS interrupt mask register */
#define OTG_FS_GINTMSK      MMIO32(USB_OTG_FS_BASE + 0x018)
// Resume/remote wakeup detected interrupt mask
#define WUIM        0x80000000
// Session request/new session detected interrupt mask
#define SRQIM       0x40000000
// Disconnect detected interrupt mask
#define DISCINT     0x20000000
// Connector ID status change mask
#define CIDSCHGM    0x10000000
// Periodic TxFIFO empty mask
#define PTXFEM      0x04000000
// Host channels interrupt mask
#define HCIM        0x02000000
// Host port interrupt mask
#define PRTIM       0x01000000
// Incomplete periodic transfer mask
#define IPXFRM      0x00200000
// Incomplete isochronous OUT transfer mask
#define IISOOXFRM   0x00200000
// Incomplete isochronous IN transfer mask
#define IISOIXFRM   0x00100000
// OUT endpoints interrupt mask
#define OEPINT      0x00080000
// IN endpoints interrupt mask
#define IEPINT      0x00040000
// End of periodic frame interrupt mask
#define EOPFM       0x00008000
// Isochronous OUT packet dropped interrupt mask
#define ISOODRPM    0x00004000
// Enumeration done mask
#define ENUMDNEM    0x00002000
// USB reset mask
#define USBRST      0x00001000
// USB suspend mask
#define USBSUSPM    0x00000800
// Early suspend mask
#define ESUSPM      0x00000400
// Global OUT NAK effective mask
#define GONAKEFFM   0x00000080
// Global non-periodic IN NAK effective mask
#define GINAKEFFM   0x00000040
// Non-periodic TxFIFO empty mask
#define NPTXFEM     0x00000020
// Receive FIFO non-empty mask
#define RXFLVLM     0x00000010
// Start of frame mask
#define SOFM        0x00000008
// OTG interrupt mask
#define OTGINT      0x00000004
// Mode mismatch interrupt mask
#define MMISM       0x00000002

/* OTG_FS Receive status debug read */
#define OTG_FS_GRXSTSR      MMIO32(USB_OTG_FS_BASE + 0x01c)
#define OTG_FS_GRXSTSR2     MMIO32(USB_OTG_FS_BASE + 0x020)
/* OTG status read and pop registers */
#define OTG_FS_GRXSTSP      MMIO32(USB_OTG_FS_BASE + 0x01c)
#define OTG_FS_GRXSTSP2     MMIO32(USB_OTG_FS_BASE + 0x020)
// Host mode
// Packet status
#define PKTSTS_IN_DATA_RECEIVED 0x40000
#define PKTSTS_IN_TRX_COMPLETED 0x60000
#define PKTSTS_DATA_TOGGLE_ERR  0xa0000
#define PKTSTS_CHANNEL_HALTED   0xe0000
// Data PID
#define DPID_DATA0              0x00000
#define DPID_DATA1              0x10000
#define DPID_DATA2              0x08000
#define DPID_MDATA              0x18000
// Byte count
#define BCNT_MSK                0x07ff0
#define BCNT_OFFS               4
// Channel number
#define CHNUM_MSK               0x0000f
// Device mode
// Frame number
#define FRMNUM_MSK              0x1e00000
#define FRMNUM_OFFS             21
// Packet status
#define PKTSTS_GLOBAL_OUT_NAK   0x0200000
#define PKTSTS_OUT_DATA_PACK_RX 0x0400000
#define PKTSTS_OUT_TRX_COMPLETE 0x0600000
#define PKTSTS_SETUP_TRX_COMPL  0x0800000
#define PKTSTS_SETUP_DATA_RX    0x0c00000
// Endpoint number
#define EPNUM_MSK               0x000000f

/* OTG_FS Receive FIFO size register */
#define OTG_FS_GRXFSIZ      MMIO32(USB_OTG_FS_BASE + 0x024)
// OTG_FS Receive FIFO size register
#define RXFD_MSK    0xffff

/* OTG_FS Host non-periodic transmit FIFO size register */
#define OTG_FS_HNPTXFSIZ    MMIO32(USB_OTG_FS_BASE + 0x028)
// Non-periodic TxFIFO depth
#define NPTXFD_MSK  0xffff0000
#define NPTXFD_OFFS 16
// Non-periodic transmit RAM start address
#define NPTXFSA_MSK 0x0000ffff

/* Endpoint 0 Transmit FIFO size */
#define OTG_FS_DIEPTXF0     MMIO32(USB_OTG_FS_BASE + 0x028)
// Endpoint 0 TxFIFO depth
#define TX0FD_MSK   0xffff0000
#define TX0FD_OFFS  16
// Endpoint 0 transmit RAM start address
#define TX0FSA_MSK  0x0000ffff

/* OTG_FS non-periodic transmit FIFO/queue status register */
#define OTG_FS_HNPTXSTS     MMIO32(USB_OTG_FS_BASE + 0x02c)
// Top of the non-periodic transmit request queue
#define NPTXQTOP_NEP_MSK       0x78000000
#define NPTXQTOP_NEP_OFFS      27
#define NPTXQTOP_IN_OUT_TOKEN  0x00000000
#define NPTXQTOP_ZERO_LEN_PACK 0x02000000
#define NPTXQTOP_CH_HALT       0x06000000
#define NPTXQTOP_TERMINATE     0x01000000
// Non-periodic transmit request queue space available
#define NPTQXSAV_MSK    0x000f0000
#define NPTXFSAV_FULL   0x00000000
#define NPTQXSAV_OFFS   16
// Non-periodic TxFIFO space available
#define NPTXFSAV_MSK    0x000001ff
#define NPTXFSAV_FULL   0x00000000

/* OTG_FS general core configuration register */
#define OTG_FS_GCCFG        MMIO32(USB_OTG_FS_BASE + 0x038)
// SOF output enable
#define SOFOUTEN    0x100000
// Enable the V BUS sensing “B” device
#define VBUSBSEN    0x080000
// Enable the V BUS sensing “A” device
#define VBUSASEN    0x040000
// Power down
#define PWRDWN      0x010000

/* OTG_FS core ID register */
#define OTG_FS_CID          MMIO32(USB_OTG_FS_BASE + 0x03c)
// Product ID field PRODUCT_ID

/* OTG_FS Host periodic transmit FIFO size register */
#define OTG_FS_HPTXFSIZ     MMIO32(USB_OTG_FS_BASE + 0x100)
// Host periodic TxFIFO depth
#define PTXFD_MSK    0xffff0000
#define PTXFD_OFFS   16
// Host periodic TxFIFO start address
#define PTXSA_MSK    0x0000ffff

/* OTG_FS device IN endpoint transmit FIFO size register */
#define OTG_FS_DIEPTXF1     MMIO32(USB_OTG_FS_BASE + 0x104)
#define OTG_FS_DIEPTXF2     MMIO32(USB_OTG_FS_BASE + 0x108)
#define OTG_FS_DIEPTXF3     MMIO32(USB_OTG_FS_BASE + 0x10c)
// IN endpoint TxFIFO depth
#define INEPTXFD_MSK  0xffff0000
#define INEPTXFD_OFFS 16
// IN endpoint FIFOx transmit RAM start address
#define INEPTXSA_MSK  0x0000ffff

/******** Host-mode registers *********/
/* OTG_FS Host configuration register */
#define OTG_FS_HCFG         MMIO32(USB_OTG_FS_BASE + 0x400)
// FS- and LS-only support
#define FSLSS          0x4
// FS/LS PHY clock select
#define FSLSPCS_RUN48M 0x1
#define FSLSPCS_SEL48M 0x1
#define FSLSPCS_SEL6M  0x2

/* OTG_FS Host frame interval register */
#define OTG_FS_HFIR         MMIO32(USB_OTG_FS_BASE + 0x404)
// Frame interval FRIVL

/* OTG_FS Host frame number/frame time remaining register */
#define OTG_FS_HFNUM        MMIO32(USB_OTG_FS_BASE + 0x408)
// Frame time remaining
#define FTREM_MSK   0xffff0000
#define FTREM_OFFS  16
// Frame number
#define FRNUM_MSK   0x0000ffff

/* OTG_FS_Host periodic transmit FIFO/queue status register */
#define OTG_FS_HPTXSTS      MMIO32(USB_OTG_FS_BASE + 0x410)
// Top of the periodic transmit request queue
#define PTXQTOP_ODD_EVEN      0x80000000
#define PTXQTOP_NEP_MSK       0x78000000
#define PTXQTOP_NEP_OFFS      27
#define PTXQTOP_IN_OUT_TYPE   0x00000000
#define PTXQTOP_ZERO_LEN_PACK 0x02000000
#define PTXQTOP_DIS_CH_CMD    0x06000000
#define PTXQTOP_TERMINATE     0x01000000
// Periodic transmit request queue space available
#define PTXQSAV_MSK           0x000f0000
#define PTXQSAV_FULL          0x00000000
#define PTXQSAV_OFFS          16
// Periodic transmit data FIFO space available
#define PTXQSAVL_MSK           0x000001ff
#define PTXQSAVL_FULL          0x00000000

/* OTG_FS Host all channels interrupt register */
#define OTG_FS_HAINT        MMIO32(USB_OTG_FS_BASE + 0x414)
// Channel interrupts
#define HAINT0   0x01
#define HAINT1   0x02
#define HAINT2   0x04
#define HAINT3   0x08
#define HAINT4   0x10
#define HAINT5   0x20
#define HAINT6   0x40
#define HAINT7   0x80

/* OTG_FS Host all channels interrupt mask register */
#define OTG_FS_HAINTMSK     MMIO32(USB_OTG_FS_BASE + 0x418)
// Channel interrupt mask
#define HAINTM0  0x01
#define HAINTM1  0x02
#define HAINTM2  0x04
#define HAINTM3  0x08
#define HAINTM4  0x10
#define HAINTM5  0x20
#define HAINTM6  0x40
#define HAINTM7  0x80

/* OTG_FS Host port control and status register */
#define OTG_FS_HPRT         MMIO32(USB_OTG_FS_BASE + 0x440)
// Port speed
#define PSPD_FULL           0x20000
#define PSPD_LOW            0x40000
// Port test control
#define PTCTL_DISABLED      0x00000
#define PTCTL_TESTJ         0x02000
#define PTCTL_TESTK         0x04000
#define PTCTL_SE0_NAK       0x06000
#define PTCTL_PACKET_MODE   0x08000
#define PTCTL_FORCE_EN      0x0a000
// Port power
#define PPWR                0x01000
// Port line status
#define PLSTS_DP            0x00800
#define PLSTS_DM            0x00400
// Port reset
#define PRST                0x00100
// Port suspend
#define PSUSP               0x00080
// Port resume
#define PRES                0x00040
// Port overcurrent change
#define POCCHNG             0x00020
// Port overcurrent active
#define POCA                0x00010
// Port enable/disable change
#define PENCHNG             0x00008
// Port enable
#define PENA                0x00004
// Port connect detected
#define PCDET               0x00002
// Port connect status
#define PCSTS               0x00001

/* OTG_FS Host channel-0 characteristics register */
#define OTG_FS_HCCHAR0      MMIO32(USB_OTG_FS_BASE + 0x500)
/* OTG_FS Host channel-1 characteristics register */
#define OTG_FS_HCCHAR1      MMIO32(USB_OTG_FS_BASE + 0x520)
/* OTG_FS Host channel-2 characteristics register */
#define OTG_FS_HCCHAR2      MMIO32(USB_OTG_FS_BASE + 0x540)
/* OTG_FS Host channel-3 characteristics register */
#define OTG_FS_HCCHAR3      MMIO32(USB_OTG_FS_BASE + 0x560)
/* OTG_FS Host channel-4 characteristics register */
#define OTG_FS_HCCHAR4      MMIO32(USB_OTG_FS_BASE + 0x580)
/* OTG_FS Host channel-5 characteristics register */
#define OTG_FS_HCCHAR5      MMIO32(USB_OTG_FS_BASE + 0x5a0)
/* OTG_FS Host channel-6 characteristics register */
#define OTG_FS_HCCHAR6      MMIO32(USB_OTG_FS_BASE + 0x5c0)
/* OTG_FS Host channel-7 characteristics register */
#define OTG_FS_HCCHAR7      MMIO32(USB_OTG_FS_BASE + 0x5e0)
// Channel enable
#define CHENA                    0x80000000
// Channel disable
#define CHDIS                    0x40000000
// Odd frame
#define ODDFRM                   0x20000000
// Device address
#define HDAD_MSK                 0x1fc00000
#define HDAD_OFFS                22
// Multicount
#define MCNT1                    0x00100000
#define MCNT2                    0x00200000
#define MCNT3                    0x00300000
// Endpoint type
#define EPTYP_HOST_CONTROL       0x00000000
#define EPTYP_HOST_ISOCHRONOUS   0x00040000
#define EPTYP_HOST_BULK          0x00080000
#define EPTYP_HOST_INTERRUPT     0x000c0000
// Low-speed device
#define LSDEV                    0x00020000
// Endpoint direction
#define EPDIR                    0x00008000
// Endpoint number
#define HEPNUM_MSK                0x00007800
#define HEPNUM_OFFS               11
// Maximum packet size
#define MPSIZ_MSK                0x000007ff

/* OTG_FS Host channel-0 interrupt register */
#define OTG_FS_HCINT0       MMIO32(USB_OTG_FS_BASE + 0x508)
/* OTG_FS Host channel-1 interrupt register */
#define OTG_FS_HCINT1       MMIO32(USB_OTG_FS_BASE + 0x528)
/* OTG_FS Host channel-2 interrupt register */
#define OTG_FS_HCINT2       MMIO32(USB_OTG_FS_BASE + 0x548)
/* OTG_FS Host channel-3 interrupt register */
#define OTG_FS_HCINT3       MMIO32(USB_OTG_FS_BASE + 0x568)
/* OTG_FS Host channel-4 interrupt register */
#define OTG_FS_HCINT4       MMIO32(USB_OTG_FS_BASE + 0x588)
/* OTG_FS Host channel-5 interrupt register */
#define OTG_FS_HCINT5       MMIO32(USB_OTG_FS_BASE + 0x5a8)
/* OTG_FS Host channel-6 interrupt register */
#define OTG_FS_HCINT6       MMIO32(USB_OTG_FS_BASE + 0x5c8)
/* OTG_FS Host channel-7 interrupt register */
#define OTG_FS_HCINT7       MMIO32(USB_OTG_FS_BASE + 0x5e8)
// Data toggle error
#define DTERR   0x400
// Frame overrun
#define FRMOR   0x200
// Babble error
#define BBERR   0x100
// Transaction error
#define TXERR   0x080
// ACK response received/transmitted interrupt
#define ACK     0x020
// NAK response received interrupt
#define NAKH    0x010
// STALL response received interrupt
#define STALLH  0x008
// Channel halted
#define CHH     0x002
// Transfer completed
#define XFRCH   0x001

/* OTG_FS Host channel-0 interrupt mask register */
#define OTG_FS_HCINTMSK0    MMIO32(USB_OTG_FS_BASE + 0x50c)
/* OTG_FS Host channel-1 interrupt mask register */
#define OTG_FS_HCINTMSK1    MMIO32(USB_OTG_FS_BASE + 0x52c)
/* OTG_FS Host channel-2 interrupt mask register */
#define OTG_FS_HCINTMSK2    MMIO32(USB_OTG_FS_BASE + 0x54c)
/* OTG_FS Host channel-3 interrupt mask register */
#define OTG_FS_HCINTMSK3    MMIO32(USB_OTG_FS_BASE + 0x56c)
/* OTG_FS Host channel-4 interrupt mask register */
#define OTG_FS_HCINTMSK4    MMIO32(USB_OTG_FS_BASE + 0x58c)
/* OTG_FS Host channel-5 interrupt mask register */
#define OTG_FS_HCINTMSK5    MMIO32(USB_OTG_FS_BASE + 0x5ac)
/* OTG_FS Host channel-6 interrupt mask register */
#define OTG_FS_HCINTMSK6    MMIO32(USB_OTG_FS_BASE + 0x5cc)
/* OTG_FS Host channel-7 interrupt mask register */
#define OTG_FS_HCINTMSK7    MMIO32(USB_OTG_FS_BASE + 0x5ec)
// Data toggle error mask
#define DTERRM   0x400
// Frame overrun mask
#define FRMORM   0x200
// Babble error mask
#define BBERRM   0x100
// Transaction error mask
#define TXERRM   0x080
// ACK response received/transmitted interrupt mask
#define ACKM     0x020
// NAK response received interrupt mask
#define NAKHM    0x010
// STALL response received interrupt mask
#define STALLM   0x008
// Channel halted mask
#define CHHM     0x002
// Transfer completed mask
#define XFRCHM   0x001

/* OTG_FS Host channel-0 transfer size register */
#define OTG_FS_HCTSIZ0      MMIO32(USB_OTG_FS_BASE + 0x510)
/* OTG_FS Host channel-1 transfer size register */
#define OTG_FS_HCTSIZ1      MMIO32(USB_OTG_FS_BASE + 0x530)
/* OTG_FS Host channel-2 transfer size register */
#define OTG_FS_HCTSIZ2      MMIO32(USB_OTG_FS_BASE + 0x550)
/* OTG_FS Host channel-3 transfer size register */
#define OTG_FS_HCTSIZ3      MMIO32(USB_OTG_FS_BASE + 0x570)
/* OTG_FS Host channel-4 transfer size register */
#define OTG_FS_HCTSIZ4      MMIO32(USB_OTG_FS_BASE + 0x590)
/* OTG_FS Host channel-5 transfer size register */
#define OTG_FS_HCTSIZ5      MMIO32(USB_OTG_FS_BASE + 0x5b0)
/* OTG_FS Host channel-6 transfer size register */
#define OTG_FS_HCTSIZ6      MMIO32(USB_OTG_FS_BASE + 0x5d0)
/* OTG_FS Host channel-7 transfer size register */
#define OTG_FS_HCTSIZ7      MMIO32(USB_OTG_FS_BASE + 0x5f0)
// Data PID
#define HDPID_DATA0     0x00000000
#define HDPID_DATA1     0x40000000
#define HDPID_DATA2     0x20000000
#define HDPID_MDATA     0x60000000
// Packet count
#define HPKTCNT_MSK     0x1ff80000
#define HPKTCNT_OFFS    19
// Transfer size
#define HXFRSIZ_MSK      0x0007ffff

/*********Device-mode registers**********/
/* OTG_FS device configuration register */
#define OTG_FS_DCFG         MMIO32(USB_OTG_FS_BASE + 0x800)
// Periodic frame interval
#define PFIVL_80    0x0000
#define PFIVL_85    0x0800
#define PFIVL_90    0x1000
#define PFIVL_95    0x1800
// Device address
#define DAD_MSK     0x07f0
#define DAD_OFFS    4
// Non-zero-length status OUT handshake
#define NZLSOHSK    0x0004
// Device speed
#define DSPD_FULL   0x0003

/* OTG_FS device control register */
#define OTG_FS_DCTL         MMIO32(USB_OTG_FS_BASE + 0x804)
// Power-on programming done
#define POPRGDNE            0x800
// Clear global OUT NAK
#define CGONAK              0x400
// Set global OUT NAK
#define SGONAK              0x200
// Clear global IN NAK
#define CGINAK              0x100
// Set global IN NAK
#define SGINAK              0x080
// Test control
#define TCTL_MSK            0x070
#define TCTL_DIS            0x000
#define TCTL_TESTJ          0x010
#define TCTL_TESTK          0x020
#define TCTL_SE0_NAK        0x030
#define TCTL_TEST_PACKET    0x040
#define TCTL_TEST_FORCE_EN  0x050
// Global OUT NAK status
#define GONSTS              0x008
// Global IN NAK status
#define GINSTS              0x004
// Soft disconnect
#define SDIS                0x002
// Remote wakeup signaling
#define RWUSIG              0x001

/* OTG_FS device status register */
#define OTG_FS_DSTS         MMIO32(USB_OTG_FS_BASE + 0x808)
// Frame number of the received SOF
#define FNSOF_MSK    0xffff00
#define FNSOF_OFFS   8
// Erratic error
#define EERR         0x000008
// Enumerated speed
#define ENUMSPD_FULL 0x000006
// Suspend status
#define SUSPSTS      0x000001

/* OTG_FS device IN endpoint common interrupt mask register */
#define OTG_FS_DIEPMSK      MMIO32(USB_OTG_FS_BASE + 0x810)
// NAK interrupt mask
#define NAKM        0x2000
// IN endpoint NAK effective mask
#define INEPNEM     0x0040
// IN token received with EP mismatch mask
#define INEPNMM     0x0020
// IN token received when TxFIFO empty mask
#define ITTXFEMSK   0x0010
// Timeout condition mask (Non-isochronous endpoints)
#define TOM         0x0008
// Endpoint disabled interrupt mask
#define EPDM        0x0002
// Transfer completed interrupt mask
#define XFRCM       0x0001

/* OTG_FS device OUT endpoint common interrupt mask register */
#define OTG_FS_DOEPMSK      MMIO32(USB_OTG_FS_BASE + 0x814)
// NAK interrupt mask
#define NAKMSK      0x2000
// Babble error interrupt mask
#define BERRM       0x1000
// Out packet error mask
#define OUTPKTERRM  0x0100
// Status phase received for control write mask
#define STSPHSRXM   0x0020
// OUT token received when endpoint disabled mask
#define OTEPDM      0x0010
// SETUP phase done mask
#define STUPM       0x0008
// Endpoint disabled interrupt mask
#define EPDM        0x0002
// Transfer completed interrupt mask
#define XFRCM       0x0001

/* OTG_FS device all endpoints interrupt register */
#define OTG_FS_DAINT        MMIO32(USB_OTG_FS_BASE + 0x818)
// OUT EP interrupt mask bits
#define OEPINT0  0x00010000
#define OEPINT1  0x00020000
#define OEPINT2  0x00040000
#define OEPINT3  0x00080000
// IN EP interrupt mask bits
#define IEPINT0  0x00000001
#define IEPINT1  0x00000002
#define IEPINT2  0x00000004
#define IEPINT3  0x00000008

/* OTG_FS all endpoints interrupt mask register */
#define OTG_FS_DAINTMSK     MMIO32(USB_OTG_FS_BASE + 0x81c)
// OUT EP interrupt mask bits
#define OEPM0  0x00010000
#define OEPM1  0x00020000
#define OEPM2  0x00040000
#define OEPM3  0x00080000
// IN EP interrupt mask bits
#define IEPM0  0x00000001
#define IEPM1  0x00000002
#define IEPM2  0x00000004
#define IEPM3  0x00000008

/* OTG_FS device V BUS discharge time register */
#define OTG_FS_DVBUSDIS     MMIO32(USB_OTG_FS_BASE + 0x828)
// Device V BUS discharge time VBUSDT in ms
#define VBUSDT(n)   (uint16_t)(n/46.875)

/* OTG_FS device V BUS pulsing time register */
#define OTG_FS_DVBUSPULSE   MMIO32(USB_OTG_FS_BASE + 0x82c)
// Device V BUS pulsing time in ms
#define DVBUSP(n)   (uint16_t)(n/46.875)

/* OTG_FS device IN endpoint FIFO empty interrupt mask register */
#define OTG_FS_DIEPEMPMSK   MMIO32(USB_OTG_FS_BASE + 0x834)
// IN EP Tx FIFO empty interrupt mask bits
#define INEPTXFEM0  0x0001
#define INEPTXFEM1  0x0002
#define INEPTXFEM2  0x0004
#define INEPTXFEM3  0x0008

/* OTG_FS device control IN endpoint 0 control register */
#define OTG_FS_DIEPCTL0     MMIO32(USB_OTG_FS_BASE + 0x900)
// Endpoint enable
#define EPENA       0x80000000
// Endpoint disable
#define EPDIS       0x40000000
// Set NAK
#define SNAK        0x0800000
// Clear NAK
#define CNAK        0x0400000
// TxFIFO number
#define TXFNUM_MSK  0x03c00000
#define TXFNUM_OFFS 22
// STALL handshake
#define STALL       0x00200000
// Endpoint type EPTYP Hardcoded to ‘00’ for control
// NAK status
#define NAKSTS      0x00020000
// USB active endpoint
#define USBAEP      0x00008000
// Maximum packet size
#define MPSIZ64B    0x00000000
#define MPSIZ32B    0x00000001
#define MPSIZ16B    0x00000002
#define MPSIZ8B     0x00000003

/* OTG device endpoint 1 control register */
#define OTG_FS_DIEPCTL1     MMIO32(USB_OTG_FS_BASE + 0x920)
/* OTG device endpoint 2 control register */
#define OTG_FS_DIEPCTL2     MMIO32(USB_OTG_FS_BASE + 0x940)
/* OTG device endpoint 3 control register */
#define OTG_FS_DIEPCTL3     MMIO32(USB_OTG_FS_BASE + 0x960)
// Set odd frame
#define SODDFRM             0x20000000
// TxFIFO number
#define SD0PID              0x10000000
// STALL handshake
#define SEVNFRM             0x10000000
// Endpoint type
#define EPTYP_CONTROL       0x00000000
#define EPTYP_ISOCHRONOUS   0x00040000
#define EPTYP_BULK          0x00080000
#define EPTYP_INTERRUPT     0x000c0000
// Even/odd frame
#define EONUM               0x00010000
// Endpoint data PID
#define DPID                0x00010000
// Maximum packet size MPSIZ in bytes

/* OTG_FS device control OUT endpoint 0 control register */
#define OTG_FS_DOEPCTL0     MMIO32(USB_OTG_FS_BASE + 0xb00)
// Snoop mode
#define SNPM    0x08000000

/* OTG_FS device endpoint-1 control register */
#define OTG_FS_DOEPCTL1     MMIO32(USB_OTG_FS_BASE + 0xb20)
/* OTG_FS device endpoint-2 control register */
#define OTG_FS_DOEPCTL2     MMIO32(USB_OTG_FS_BASE + 0xb40)
/* OTG_FS device endpoint-3 control register */
#define OTG_FS_DOEPCTL3     MMIO32(USB_OTG_FS_BASE + 0xb60)
// Set DATA1 PID
#define SD1PID             0x20000000

/* OTG_FS device endpoint-0 interrupt register */
#define OTG_FS_DIEPINT0     MMIO32(USB_OTG_FS_BASE + 0x908)
/* OTG_FS device endpoint-1 interrupt register */
#define OTG_FS_DIEPINT1     MMIO32(USB_OTG_FS_BASE + 0x928)
/* OTG_FS device endpoint-2 interrupt register */
#define OTG_FS_DIEPINT2     MMIO32(USB_OTG_FS_BASE + 0x948)
/* OTG_FS device endpoint-3 interrupt register */
#define OTG_FS_DIEPINT3     MMIO32(USB_OTG_FS_BASE + 0x968)
// NAK input
#define NAK_IN      0x2000
// Packet dropped status
#define PKTDRPSTS   0x0400
// Transmit FIFO empty
#define TXFE        0x0080
// IN endpoint NAK effective
#define INEPNE      0x0040
// IN token received with EP mismatch
#define INEPNM      0x0020
// IN token received when TxFIFO is empty
#define ITTXFE      0x0010
// Timeout condition
#define TOC         0x0008
// Endpoint disabled interrupt
#define EPDISD_IN   0x0002
// Transfer completed interrupt
#define XFRC_IN     0x0001


/* OTG_FS device endpoint-x interrupt register */
#define OTG_FS_DOEPINT0     MMIO32(USB_OTG_FS_BASE + 0xb08)
/* OTG_FS device endpoint-x interrupt register */
#define OTG_FS_DOEPINT1     MMIO32(USB_OTG_FS_BASE + 0xb28)
/* OTG_FS device endpoint-x interrupt register */
#define OTG_FS_DOEPINT2     MMIO32(USB_OTG_FS_BASE + 0xb48)
/* OTG_FS device endpoint-x interrupt register */
#define OTG_FS_DOEPINT3     MMIO32(USB_OTG_FS_BASE + 0xb68)
// NAK input
#define NAK         0x2000
// Babble error interrupt
#define BERR        0x1000
// OUT packet error
#define OUTPKTERR   0x0100
// Status phase received for control write
#define STSPHSRX    0x0020
// OUT token received when endpoint disabled
#define OTEPDIS     0x0010
// SETUP phase done
#define STUP        0x0008
// Endpoint disabled interrupt
#define EPDISD      0x0002
// Transfer completed interrupt
#define XFRC        0x0001

/* OTG_FS device IN endpoint 0 transfer size register */
#define OTG_FS_DIEPTSIZ0    MMIO32(USB_OTG_FS_BASE + 0x910)
// Packet count
#define PKTCNT_MSK      0x180000
#define PKTCNT_OFFS     19
// Transfer size
#define XFRSIZ_MSK      0x00003f

/* OTG_FS device OUT endpoint 0 transfer size register */
#define OTG_FS_DOEPTSIZ0    MMIO32(USB_OTG_FS_BASE + 0xb10)
// SETUP packet count
#define STUPCNT_MSK     0x60000000
#define STUPCNT_OFFS    29
// Packet count
#define PKTCNT_CTRL     0x00080000
// Transfer size
#define XFRSIZ_CTRL_MSK 0x0000003f

/* OTG_FS device endpoint-1 transfer size register */
#define OTG_FS_DIEPTSIZ1    MMIO32(USB_OTG_FS_BASE + 0x930)
/* OTG_FS device endpoint-2 transfer size register */
#define OTG_FS_DIEPTSIZ2    MMIO32(USB_OTG_FS_BASE + 0x950)
/* OTG_FS device endpoint-3 transfer size register */
#define OTG_FS_DIEPTSIZ3    MMIO32(USB_OTG_FS_BASE + 0x970)
// Packet count
#define PKTCNT_IN_MSK   0x1ff80000
#define PKTCNT_IN_OFFS  19
// Transfer size
#define XFRSIZ_IN_MSK   0x0007ffff

/* OTG_FS device IN endpoint transmit FIFO status register */
#define TG_FS_DTXFSTS0      MMIO32(USB_OTG_FS_BASE + 0x918)
#define TG_FS_DTXFSTS1      MMIO32(USB_OTG_FS_BASE + 0x938)
#define TG_FS_DTXFSTS2      MMIO32(USB_OTG_FS_BASE + 0x958)
#define TG_FS_DTXFSTS3      MMIO32(USB_OTG_FS_BASE + 0x978)
// IN endpoint TxFIFO space available INEPTFSAV in 32bit words

/* OTG_FS device OUT endpoint-1 transfer size register */
#define OTG_FS_DOEPTSIZ1    MMIO32(USB_OTG_FS_BASE + 0xb30)
/* OTG_FS device OUT endpoint-2 transfer size register */
#define OTG_FS_DOEPTSIZ2    MMIO32(USB_OTG_FS_BASE + 0xb50)
/* OTG_FS device OUT endpoint-3 transfer size register */
#define OTG_FS_DOEPTSIZ3    MMIO32(USB_OTG_FS_BASE + 0xb70)
// Received data PID
#define RXDPID_DATA0     0x00000000
#define RXDPID_DATA2     0x20000000
#define RXDPID_DATA1     0x40000000
#define RXDPID_MDATA     0x60000000
// Packet count
#define PKTCNT_OUT_MSK   0x1ff80000
#define PKTCNT_OUT_OFFS  19
// Transfer size
#define XFRSIZ_OUT_MSK   0x0007ffff

/**************************************************/
/* OTG_FS power and clock gating control register */
#define OTG_FS_PCGCCTL      MMIO32(USB_OTG_FS_BASE + 0xe00)
// PHY Suspended
#define PHYSUSP  0x10
// Gate HCLK
#define GATEHCLK 0x02
// Stop PHY clock
#define STPPCLK  0x01

#endif
