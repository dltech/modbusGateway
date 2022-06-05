#ifndef H_SDIO_REGS
#define H_SDIO_REGS
/*
 * Part of Belkin STM32 HAL, SDIO regester definitions of STM32F1xx MCUs.
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

/* SDIO power control register */
#define SDIO_POWER      MMIO32(SDIO_BASE + 0x00)
// Power supply control bits.
#define PWRCTRL_OFF 0x0
#define PWRCTRL_UP  0x2
#define PWRCTRL_ON  0x3

/* SDI clock control register */
#define SDIO_CLKCR      MMIO32(SDIO_BASE + 0x04)
// HW Flow Control enable
#define HWFC_EN         0x4000
// SDIO_CK dephasing selection bit
#define NEGEDGE         0x2000
// Wide bus mode enable bit
#define WIDBUS_DEFAULT  0x0000
#define WIDBUS_4WIDE    0x0800
#define WIDBUS_8WIDE    0x1000
// Clock divider bypass enable bit
#define BYPASS          0x0400
// Power saving configuration bit
#define PWRSAV          0x0200
// Clock enable bit
#define CLKEN           0x0100
// Clock divide factor
#define CLKDIV_MASK     0x00ff

/* SDIO argument register */
#define SDIO_ARG        MMIO32(SDIO_BASE + 0x08)

/* SDIO command register */
#define SDIO_CMD        MMIO32(SDIO_BASE + 0x0c)
// CE-ATA command
#define ATACMD         0x4000
// not Interrupt Enable
#define nIEN           0x2000
// Enable CMD completion
#define ENCMDcompl     0x1000
// SD I/O suspend command
#define SDIOSuspend    0x0800
// Command path state machine (CPSM) Enable bit
#define CPSMEN         0x0400
// CPSM Waits for ends of data transfer (CmdPend internal signal).
#define WAITPEND       0x0200
// CPSM waits for interrupt request
#define WAITINT        0x0100
// Wait for response bits
#define WAITRESP_NO    0x0000
#define WAITRESP_SHORT 0x0040
#define WAITRESP_LONG  0x00c0
// Command index
#define CMDINDEX_MASK  0x003f

/* SDIO command response register */
#define SDIO_RESPCMD    MMIO32(SDIO_BASE + 0x10)
// Response command index
#define RESPCMD_MASK    0x3f

/* SDIO response 1 register */
#define SDIO_RESP1      MMIO32(SDIO_BASE + 0x14)
/* SDIO response 2 register */
#define SDIO_RESP2      MMIO32(SDIO_BASE + 0x18)
/* SDIO response 3 register */
#define SDIO_RESP3      MMIO32(SDIO_BASE + 0x1c)
/* SDIO response 4 register */
#define SDIO_RESP4      MMIO32(SDIO_BASE + 0x20)
/* SDIO data timer register */
#define SDIO_DTIMER     MMIO32(SDIO_BASE + 0x24)

/* SDIO data length register */
#define SDIO_DLEN       MMIO32(SDIO_BASE + 0x28)
// Data length value
#define DATALENGTH_MASK  0x1fff

/* SDIO data control register */
#define SDIO_DCTRL      MMIO32(SDIO_BASE + 0x2c)
// SD I/O enable functions
#define SDIOEN  0x800
// Read wait mode
#define RWMOD   0x400
// Read wait stop
#define RWSTOP  0x200
// Read wait start
#define RWSTART 0x100
// Data block size
#define DBLOCKSIZE1     0x000
#define DBLOCKSIZE2     0x010
#define DBLOCKSIZE4     0x020
#define DBLOCKSIZE8     0x030
#define DBLOCKSIZE16    0x040
#define DBLOCKSIZE32    0x050
#define DBLOCKSIZE64    0x060
#define DBLOCKSIZE128   0x070
#define DBLOCKSIZE256   0x080
#define DBLOCKSIZE512   0x090
#define DBLOCKSIZE1024  0x0a0
#define DBLOCKSIZE2048  0x0b0
#define DBLOCKSIZE4096  0x0c0
#define DBLOCKSIZE8192  0x0d0
#define DBLOCKSIZE16384 0x0e0
// DMA enable bit
#define DMAEN   0x008
// Data transfer mode selection 1: Stream or SDIO multibyte data transfer.
#define DTMODE  0x004
// Data transfer direction selection
#define DTDIR   0x002
// Data transfer enabled bit
#define DTEN    0x001

/* SDIO data counter register */
#define SDIO_DCOUNT     MMIO32(SDIO_BASE + 0x30)
// Data count value
#define DATACOUNT_MASK  0x01fff

/* SDIO status register */
#define SDIO_STA        MMIO32(SDIO_BASE + 0x34)
// CE-ATA command completion signal received for CMD61
#define CEATAEND  0x800000
// SDIO interrupt received
#define SDIOIT    0x400000
// Data available in receive FIFO
#define RXDAVL    0x200000
// Data available in transmit FIFO
#define TXDAVL    0x100000
// Receive FIFO empty
#define RXFIFOE   0x080000
// Transmit FIFO empty
#define TXFIFOE   0x040000
// Receive FIFO full
#define RXFIFOF   0x020000
// Transmit FIFO full
#define TXFIFOF   0x010000
// Receive FIFO half full: there are at least 8 words in the FIFO
#define RXFIFOHF  0x008000
// Transmit FIFO half empty: at least 8 words can be written into the FIFO
#define TXFIFOHE  0x004000
// Data receive in progress
#define RXACT     0x002000
// Data transmit in progress
#define TXACT     0x001000
// Command transfer in progress
#define CMDACT    0x000800
// Data block sent/received (CRC check passed)
#define DBCKEND   0x000400
// Start bit not detected on all data signals in wide bus mode
#define STBITERR  0x000200
// Data end (data counter, SDIDCOUNT, is zero)
#define DATAEND   0x000100
// Command sent (no response required)
#define CMDSENT   0x000080
// Command response received (CRC check passed)
#define CMDREND   0x000040
// Received FIFO overrun error
#define RXOVERR   0x000020
// Transmit FIFO underrun error
#define TXUNDERR  0x000010
// Data timeout
#define DTIMEOUT  0x000008
// Command response timeout
#define CTIMEOUT  0x000004
// Data block sent/received (CRC check failed)
#define DCRCFAIL  0x000002
// Command response received (CRC check failed)
#define CCRCFAIL  0x000001

/* SDIO interrupt clear register */
#define SDIO_ICR        MMIO32(SDIO_BASE + 0x38)
// CEATAEND flag clear bit
#define CEATAENDC   0x800000
// SDIOIT flag clear bit
#define SDIOITC     0x400000
// DBCKEND flag clear bit
#define DBCKENDC    0x000400
// STBITERR flag clear bit
#define STBITERRC   0x000200
// DATAEND flag clear bit
#define DATAENDC    0x000100
// CMDSENT flag clear bit
#define CMDSENTC    0x000080
// CMDREND flag clear bit
#define CMDRENDC    0x000040
// RXOVERR flag clear bit
#define RXOVERRC    0x000020
// TXUNDERR flag clear bit
#define TXUNDERRC   0x000010
// DTIMEOUT flag clear bit
#define DTIMEOUTC   0x000008
// CTIMEOUT flag clear bit
#define CTIMEOUTC   0x000004
// DCRCFAIL flag clear bit
#define DCRCFAILC   0x000002
// CCRCFAIL flag clear bit
#define CCRCFAILC   0x000001

/* SDIO mask register */
#define SDIO_MASK       MMIO32(SDIO_BASE + 0x3c)
// CE-ATA command completion signal received interrupt enable
#define CEATAENDIE  0x800000
// SDIO interrupt received interrupt enable
#define SDIOITIE    0x400000
// Data available in Rx FIFO interrupt enable
#define RXDAVLIE    0x200000
// Data available in Tx FIFO interrupt enable
#define TXDAVLIE    0x100000
// Rx FIFO empty interrupt enable
#define RXFIFOEIE   0x080000
// Tx FIFO empty interrupt enable
#define TXFIFOEIE   0x040000
// Rx FIFO full interrupt enable
#define RXFIFOFIE   0x020000
// Tx FIFO full interrupt enable
#define TXFIFOFIE   0x010000
// Rx FIFO half full interrupt enable
#define RXFIFOHFIE  0x008000
// Tx FIFO half empty interrupt enable
#define TXFIFOHEIE  0x004000
// Data receive acting interrupt enable
#define RXACTIE     0x002000
// Data transmit acting interrupt enable
#define TXACTIE     0x001000
// Command transfer acting interrupt enable
#define CMDACTIE    0x000800
// Data block end interrupt enable
#define DBCKENDIE   0x000400
// Start bit error interrupt enable
#define STBITERRIE  0x000200
// Data end interrupt enable
#define DATAENDIE   0x000100
// Command sent interrupt enable
#define CMDSENTIE   0x000080
// Command response received interrupt enable
#define CMDRENDIE   0x000040
// Rx FIFO overrun error interrupt enable
#define RXOVERRIE   0x000020
// Tx FIFO underrun error interrupt enable
#define TXUNDERRIE  0x000010
// Data timeout interrupt enable
#define DTIMEOUTIE  0x000008
// Command timeout interrupt enable
#define CTIMEOUTIE  0x000004
// Data CRC fail interrupt enable
#define DCRCFAILIE  0x000002
// Command CRC fail interrupt enable
#define CCRCFAILIE  0x000001

/* SDIO FIFO counter register */
#define SDIO_FIFOCNT    MMIO32(SDIO_BASE + 0x48)
// Remaining number of words to be written to or read from the FIFO
#define FIFOCOUNT   0xffffff

/* SDIO data FIFO register */
#define SDIO_FIFO       MMIO32(SDIO_BASE + 0x80)

#endif
