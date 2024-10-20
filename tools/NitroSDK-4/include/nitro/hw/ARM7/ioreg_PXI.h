/*---------------------------------------------------------------------------*
  Project:  NitroSDK - IO Register List - 
  File:     nitro/hw/ARM7/ioreg_PXI.h

  Copyright 2003-2004 Nintendo.  All rights reserved.

  These coded instructions, statements, and computer programs contain
  proprietary information of Nintendo of America Inc. and/or Nintendo
  Company Ltd., and are protected by Federal copyright law.  They may
  not be disclosed to third parties or copied or duplicated in any form,
  in whole or in part, without the prior written consent of Nintendo.

 *---------------------------------------------------------------------------*/
//
//  I was generated automatically, don't edit me directly!!!
//
#ifndef NITRO_HW_ARM7_IOREG_PXI_H_
#define NITRO_HW_ARM7_IOREG_PXI_H_

#ifndef SDK_ASM
#include <nitro/types.h>
#include <nitro/hw/ARM7/mmap_global.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Definition of Register offsets, addresses and variables.
 */


/* MAINPINTF */

#define REG_MAINPINTF_OFFSET                               0x180
#define REG_MAINPINTF_ADDR                                 (HW_REG_BASE + REG_MAINPINTF_OFFSET)
#define reg_PXI_MAINPINTF                                  (*( REGType16v *) REG_MAINPINTF_ADDR)

/* MAINP_FIFO_CNT */

#define REG_MAINP_FIFO_CNT_OFFSET                          0x184
#define REG_MAINP_FIFO_CNT_ADDR                            (HW_REG_BASE + REG_MAINP_FIFO_CNT_OFFSET)
#define reg_PXI_MAINP_FIFO_CNT                             (*( REGType16v *) REG_MAINP_FIFO_CNT_ADDR)

/* SEND_FIFO */

#define REG_SEND_FIFO_OFFSET                               0x188
#define REG_SEND_FIFO_ADDR                                 (HW_REG_BASE + REG_SEND_FIFO_OFFSET)
#define reg_PXI_SEND_FIFO                                  (*( REGType32v *) REG_SEND_FIFO_ADDR)

/* RECV_FIFO */

#define REG_RECV_FIFO_OFFSET                               0x100000
#define REG_RECV_FIFO_ADDR                                 (HW_REG_BASE + REG_RECV_FIFO_OFFSET)
#define reg_PXI_RECV_FIFO                                  (*( REGType32v *) REG_RECV_FIFO_ADDR)


/*
 * Definitions of Register fields
 */


/* MAINPINTF */

#define REG_PXI_MAINPINTF_I_SHIFT                          14
#define REG_PXI_MAINPINTF_I_SIZE                           1
#define REG_PXI_MAINPINTF_I_MASK                           0x4000

#define REG_PXI_MAINPINTF_IREQ_SHIFT                       13
#define REG_PXI_MAINPINTF_IREQ_SIZE                        1
#define REG_PXI_MAINPINTF_IREQ_MASK                        0x2000

#define REG_PXI_MAINPINTF_A7STATUS_SHIFT                   8
#define REG_PXI_MAINPINTF_A7STATUS_SIZE                    4
#define REG_PXI_MAINPINTF_A7STATUS_MASK                    0x0f00

#define REG_PXI_MAINPINTF_A9STATUS_SHIFT                   0
#define REG_PXI_MAINPINTF_A9STATUS_SIZE                    4
#define REG_PXI_MAINPINTF_A9STATUS_MASK                    0x000f

#ifndef SDK_ASM
#define REG_PXI_MAINPINTF_FIELD( i, ireq, a7status, a9status ) \
    (u16)( \
    ((u32)(i) << REG_PXI_MAINPINTF_I_SHIFT) | \
    ((u32)(ireq) << REG_PXI_MAINPINTF_IREQ_SHIFT) | \
    ((u32)(a7status) << REG_PXI_MAINPINTF_A7STATUS_SHIFT) | \
    ((u32)(a9status) << REG_PXI_MAINPINTF_A9STATUS_SHIFT))
#endif


/* MAINP_FIFO_CNT */

#define REG_PXI_MAINP_FIFO_CNT_E_SHIFT                     15
#define REG_PXI_MAINP_FIFO_CNT_E_SIZE                      1
#define REG_PXI_MAINP_FIFO_CNT_E_MASK                      0x8000

#define REG_PXI_MAINP_FIFO_CNT_ERR_SHIFT                   14
#define REG_PXI_MAINP_FIFO_CNT_ERR_SIZE                    1
#define REG_PXI_MAINP_FIFO_CNT_ERR_MASK                    0x4000

#define REG_PXI_MAINP_FIFO_CNT_RECV_RI_SHIFT               10
#define REG_PXI_MAINP_FIFO_CNT_RECV_RI_SIZE                1
#define REG_PXI_MAINP_FIFO_CNT_RECV_RI_MASK                0x0400

#define REG_PXI_MAINP_FIFO_CNT_RECV_FULL_SHIFT             9
#define REG_PXI_MAINP_FIFO_CNT_RECV_FULL_SIZE              1
#define REG_PXI_MAINP_FIFO_CNT_RECV_FULL_MASK              0x0200

#define REG_PXI_MAINP_FIFO_CNT_RECV_EMP_SHIFT              8
#define REG_PXI_MAINP_FIFO_CNT_RECV_EMP_SIZE               1
#define REG_PXI_MAINP_FIFO_CNT_RECV_EMP_MASK               0x0100

#define REG_PXI_MAINP_FIFO_CNT_SEND_CL_SHIFT               3
#define REG_PXI_MAINP_FIFO_CNT_SEND_CL_SIZE                1
#define REG_PXI_MAINP_FIFO_CNT_SEND_CL_MASK                0x0008

#define REG_PXI_MAINP_FIFO_CNT_SEND_TI_SHIFT               2
#define REG_PXI_MAINP_FIFO_CNT_SEND_TI_SIZE                1
#define REG_PXI_MAINP_FIFO_CNT_SEND_TI_MASK                0x0004

#define REG_PXI_MAINP_FIFO_CNT_SEND_FULL_SHIFT             1
#define REG_PXI_MAINP_FIFO_CNT_SEND_FULL_SIZE              1
#define REG_PXI_MAINP_FIFO_CNT_SEND_FULL_MASK              0x0002

#define REG_PXI_MAINP_FIFO_CNT_SEND_EMP_SHIFT              0
#define REG_PXI_MAINP_FIFO_CNT_SEND_EMP_SIZE               1
#define REG_PXI_MAINP_FIFO_CNT_SEND_EMP_MASK               0x0001

#ifndef SDK_ASM
#define REG_PXI_MAINP_FIFO_CNT_FIELD( e, err, recv_ri, recv_full, recv_emp, send_cl, send_ti, send_full, send_emp ) \
    (u16)( \
    ((u32)(e) << REG_PXI_MAINP_FIFO_CNT_E_SHIFT) | \
    ((u32)(err) << REG_PXI_MAINP_FIFO_CNT_ERR_SHIFT) | \
    ((u32)(recv_ri) << REG_PXI_MAINP_FIFO_CNT_RECV_RI_SHIFT) | \
    ((u32)(recv_full) << REG_PXI_MAINP_FIFO_CNT_RECV_FULL_SHIFT) | \
    ((u32)(recv_emp) << REG_PXI_MAINP_FIFO_CNT_RECV_EMP_SHIFT) | \
    ((u32)(send_cl) << REG_PXI_MAINP_FIFO_CNT_SEND_CL_SHIFT) | \
    ((u32)(send_ti) << REG_PXI_MAINP_FIFO_CNT_SEND_TI_SHIFT) | \
    ((u32)(send_full) << REG_PXI_MAINP_FIFO_CNT_SEND_FULL_SHIFT) | \
    ((u32)(send_emp) << REG_PXI_MAINP_FIFO_CNT_SEND_EMP_SHIFT))
#endif


/* SEND_FIFO */

/* RECV_FIFO */

#ifdef __cplusplus
} /* extern "C" */
#endif

/* NITRO_HW_ARM7_IOREG_PXI_H_ */
#endif
