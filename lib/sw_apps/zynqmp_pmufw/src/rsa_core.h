/******************************************************************************
* Copyright (C) 2018 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
******************************************************************************/

#ifndef _RSA_CORE_H_
#define _RSA_CORE_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * RSA_CORE Base Address
 */
#define RSA_CORE_BASEADDR      0XFFCE0000

/**
 * Register: RSA_CORE_RSA_WR_DATA
 */
#define RSA_CORE_RSA_WR_DATA    ( ( RSA_CORE_BASEADDR ) + 0X00000000 )

#define RSA_CORE_RSA_WR_DATA_WR_DATA_SHIFT   0
#define RSA_CORE_RSA_WR_DATA_WR_DATA_WIDTH   8
#define RSA_CORE_RSA_WR_DATA_WR_DATA_MASK    0X000000FF

/**
 * Register: RSA_CORE_RSA_WR_ADDR
 */
#define RSA_CORE_RSA_WR_ADDR    ( ( RSA_CORE_BASEADDR ) + 0X00000004 )

#define RSA_CORE_RSA_WR_ADDR_WR_ADDR_SHIFT   0
#define RSA_CORE_RSA_WR_ADDR_WR_ADDR_WIDTH   7
#define RSA_CORE_RSA_WR_ADDR_WR_ADDR_MASK    0X0000007F

/**
 * Register: RSA_CORE_RSA_RD_DATA
 */
#define RSA_CORE_RSA_RD_DATA    ( ( RSA_CORE_BASEADDR ) + 0X00000008 )

#define RSA_CORE_RSA_RD_DATA_RD_DATA_SHIFT   0
#define RSA_CORE_RSA_RD_DATA_RD_DATA_WIDTH   8
#define RSA_CORE_RSA_RD_DATA_RD_DATA_MASK    0X000000FF

/**
 * Register: RSA_CORE_RSA_RD_ADDR
 */
#define RSA_CORE_RSA_RD_ADDR    ( ( RSA_CORE_BASEADDR ) + 0X0000000C )

#define RSA_CORE_RSA_RD_ADDR_RD_ADDR_SHIFT   0
#define RSA_CORE_RSA_RD_ADDR_RD_ADDR_WIDTH   7
#define RSA_CORE_RSA_RD_ADDR_RD_ADDR_MASK    0X0000007F

/**
 * Register: RSA_CORE_CTRL
 */
#define RSA_CORE_CTRL    ( ( RSA_CORE_BASEADDR ) + 0X00000010 )

#define RSA_CORE_CTRL_LEN_CODE_SHIFT   4
#define RSA_CORE_CTRL_LEN_CODE_WIDTH   4
#define RSA_CORE_CTRL_LEN_CODE_MASK    0X000000F0

#define RSA_CORE_CTRL_DONE_CLR_ABORT_SHIFT   3
#define RSA_CORE_CTRL_DONE_CLR_ABORT_WIDTH   1
#define RSA_CORE_CTRL_DONE_CLR_ABORT_MASK    0X00000008

#define RSA_CORE_CTRL_OPCODE_SHIFT   0
#define RSA_CORE_CTRL_OPCODE_WIDTH   3
#define RSA_CORE_CTRL_OPCODE_MASK    0X00000007

/**
 * Register: RSA_CORE_STATUS
 */
#define RSA_CORE_STATUS    ( ( RSA_CORE_BASEADDR ) + 0X00000014 )

#define RSA_CORE_STATUS_PROG_CNT_SHIFT   3
#define RSA_CORE_STATUS_PROG_CNT_WIDTH   5
#define RSA_CORE_STATUS_PROG_CNT_MASK    0X000000F8

#define RSA_CORE_STATUS_ERROR_SHIFT   2
#define RSA_CORE_STATUS_ERROR_WIDTH   1
#define RSA_CORE_STATUS_ERROR_MASK    0X00000004

#define RSA_CORE_STATUS_BUSY_SHIFT   1
#define RSA_CORE_STATUS_BUSY_WIDTH   1
#define RSA_CORE_STATUS_BUSY_MASK    0X00000002

#define RSA_CORE_STATUS_DONE_SHIFT   0
#define RSA_CORE_STATUS_DONE_WIDTH   1
#define RSA_CORE_STATUS_DONE_MASK    0X00000001

/**
 * Register: RSA_CORE_MINV0
 */
#define RSA_CORE_MINV0    ( ( RSA_CORE_BASEADDR ) + 0X00000018 )

#define RSA_CORE_MINV0_MINV0_SHIFT   0
#define RSA_CORE_MINV0_MINV0_WIDTH   8
#define RSA_CORE_MINV0_MINV0_MASK    0X000000FF

/**
 * Register: RSA_CORE_MINV1
 */
#define RSA_CORE_MINV1    ( ( RSA_CORE_BASEADDR ) + 0X0000001C )

#define RSA_CORE_MINV1_MINV1_SHIFT   0
#define RSA_CORE_MINV1_MINV1_WIDTH   8
#define RSA_CORE_MINV1_MINV1_MASK    0X000000FF

/**
 * Register: RSA_CORE_MINV2
 */
#define RSA_CORE_MINV2    ( ( RSA_CORE_BASEADDR ) + 0X00000020 )

#define RSA_CORE_MINV2_MINV2_SHIFT   0
#define RSA_CORE_MINV2_MINV2_WIDTH   8
#define RSA_CORE_MINV2_MINV2_MASK    0X000000FF

/**
 * Register: RSA_CORE_MINV3
 */
#define RSA_CORE_MINV3    ( ( RSA_CORE_BASEADDR ) + 0X00000024 )

#define RSA_CORE_MINV3_MINV2_SHIFT   0
#define RSA_CORE_MINV3_MINV2_WIDTH   8
#define RSA_CORE_MINV3_MINV2_MASK    0X000000FF

#ifdef __cplusplus
}
#endif


#endif /* _RSA_CORE_H_ */
