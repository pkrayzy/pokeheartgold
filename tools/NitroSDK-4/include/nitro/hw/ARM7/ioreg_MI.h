/*---------------------------------------------------------------------------*
  Project:  NitroSDK - IO Register List - 
  File:     nitro/hw/ARM7/ioreg_MI.h

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
#ifndef NITRO_HW_ARM7_IOREG_MI_H_
#define NITRO_HW_ARM7_IOREG_MI_H_

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


/* DMA0SAD */

#define REG_DMA0SAD_OFFSET                                 0x0b0
#define REG_DMA0SAD_ADDR                                   (HW_REG_BASE + REG_DMA0SAD_OFFSET)
#define reg_MI_DMA0SAD                                     (*( REGType32v *) REG_DMA0SAD_ADDR)

/* DMA0DAD */

#define REG_DMA0DAD_OFFSET                                 0x0b4
#define REG_DMA0DAD_ADDR                                   (HW_REG_BASE + REG_DMA0DAD_OFFSET)
#define reg_MI_DMA0DAD                                     (*( REGType32v *) REG_DMA0DAD_ADDR)

/* DMA0CNT */

#define REG_DMA0CNT_OFFSET                                 0x0b8
#define REG_DMA0CNT_ADDR                                   (HW_REG_BASE + REG_DMA0CNT_OFFSET)
#define reg_MI_DMA0CNT                                     (*( REGType32v *) REG_DMA0CNT_ADDR)

/* DMA1SAD */

#define REG_DMA1SAD_OFFSET                                 0x0bc
#define REG_DMA1SAD_ADDR                                   (HW_REG_BASE + REG_DMA1SAD_OFFSET)
#define reg_MI_DMA1SAD                                     (*( REGType32v *) REG_DMA1SAD_ADDR)

/* DMA1DAD */

#define REG_DMA1DAD_OFFSET                                 0x0c0
#define REG_DMA1DAD_ADDR                                   (HW_REG_BASE + REG_DMA1DAD_OFFSET)
#define reg_MI_DMA1DAD                                     (*( REGType32v *) REG_DMA1DAD_ADDR)

/* DMA1CNT */

#define REG_DMA1CNT_OFFSET                                 0x0c4
#define REG_DMA1CNT_ADDR                                   (HW_REG_BASE + REG_DMA1CNT_OFFSET)
#define reg_MI_DMA1CNT                                     (*( REGType32v *) REG_DMA1CNT_ADDR)

/* DMA2SAD */

#define REG_DMA2SAD_OFFSET                                 0x0c8
#define REG_DMA2SAD_ADDR                                   (HW_REG_BASE + REG_DMA2SAD_OFFSET)
#define reg_MI_DMA2SAD                                     (*( REGType32v *) REG_DMA2SAD_ADDR)

/* DMA2DAD */

#define REG_DMA2DAD_OFFSET                                 0x0cc
#define REG_DMA2DAD_ADDR                                   (HW_REG_BASE + REG_DMA2DAD_OFFSET)
#define reg_MI_DMA2DAD                                     (*( REGType32v *) REG_DMA2DAD_ADDR)

/* DMA2CNT */

#define REG_DMA2CNT_OFFSET                                 0x0d0
#define REG_DMA2CNT_ADDR                                   (HW_REG_BASE + REG_DMA2CNT_OFFSET)
#define reg_MI_DMA2CNT                                     (*( REGType32v *) REG_DMA2CNT_ADDR)

/* DMA3SAD */

#define REG_DMA3SAD_OFFSET                                 0x0d4
#define REG_DMA3SAD_ADDR                                   (HW_REG_BASE + REG_DMA3SAD_OFFSET)
#define reg_MI_DMA3SAD                                     (*( REGType32v *) REG_DMA3SAD_ADDR)

/* DMA3DAD */

#define REG_DMA3DAD_OFFSET                                 0x0d8
#define REG_DMA3DAD_ADDR                                   (HW_REG_BASE + REG_DMA3DAD_OFFSET)
#define reg_MI_DMA3DAD                                     (*( REGType32v *) REG_DMA3DAD_ADDR)

/* DMA3CNT */

#define REG_DMA3CNT_OFFSET                                 0x0dc
#define REG_DMA3CNT_ADDR                                   (HW_REG_BASE + REG_DMA3CNT_OFFSET)
#define reg_MI_DMA3CNT                                     (*( REGType32v *) REG_DMA3CNT_ADDR)

/* MCCNT0 */

#define REG_MCCNT0_OFFSET                                  0x1a0
#define REG_MCCNT0_ADDR                                    (HW_REG_BASE + REG_MCCNT0_OFFSET)
#define reg_MI_MCCNT0                                      (*( REGType16v *) REG_MCCNT0_ADDR)

/* MCD0 */

#define REG_MCD0_OFFSET                                    0x1a2
#define REG_MCD0_ADDR                                      (HW_REG_BASE + REG_MCD0_OFFSET)
#define reg_MI_MCD0                                        (*( REGType16v *) REG_MCD0_ADDR)

/* MCD1 */

#define REG_MCD1_OFFSET                                    0x100010
#define REG_MCD1_ADDR                                      (HW_REG_BASE + REG_MCD1_OFFSET)
#define reg_MI_MCD1                                        (*( REGType32v *) REG_MCD1_ADDR)

/* MCCNT1 */

#define REG_MCCNT1_OFFSET                                  0x1a4
#define REG_MCCNT1_ADDR                                    (HW_REG_BASE + REG_MCCNT1_OFFSET)
#define reg_MI_MCCNT1                                      (*( REGType32v *) REG_MCCNT1_ADDR)

/* MCCMD0 */

#define REG_MCCMD0_OFFSET                                  0x1a8
#define REG_MCCMD0_ADDR                                    (HW_REG_BASE + REG_MCCMD0_OFFSET)
#define reg_MI_MCCMD0                                      (*( REGType32v *) REG_MCCMD0_ADDR)

/* MCCMD1 */

#define REG_MCCMD1_OFFSET                                  0x1ac
#define REG_MCCMD1_ADDR                                    (HW_REG_BASE + REG_MCCMD1_OFFSET)
#define reg_MI_MCCMD1                                      (*( REGType32v *) REG_MCCMD1_ADDR)

/* EXMEMCNT_L */

#define REG_EXMEMCNT_L_OFFSET                              0x204
#define REG_EXMEMCNT_L_ADDR                                (HW_REG_BASE + REG_EXMEMCNT_L_OFFSET)
#define reg_MI_EXMEMCNT_L                                  (*( REGType16v *) REG_EXMEMCNT_L_ADDR)

/* EXMEMCNT_H */

#define REG_EXMEMCNT_H_OFFSET                              0x206
#define REG_EXMEMCNT_H_ADDR                                (HW_REG_BASE + REG_EXMEMCNT_H_OFFSET)
#define reg_MI_EXMEMCNT_H                                  (*( REGType16v *) REG_EXMEMCNT_H_ADDR)

/* WVRAMSTAT */

#define REG_WVRAMSTAT_OFFSET                               0x240
#define REG_WVRAMSTAT_ADDR                                 (HW_REG_BASE + REG_WVRAMSTAT_OFFSET)
#define reg_MI_WVRAMSTAT                                   (*( REGType16v *) REG_WVRAMSTAT_ADDR)


/*
 * Definitions of Register fields
 */


/* DMA0SAD */

#define REG_MI_DMA0SAD_DMASRC_SHIFT                        0
#define REG_MI_DMA0SAD_DMASRC_SIZE                         27
#define REG_MI_DMA0SAD_DMASRC_MASK                         0x07ffffff

#ifndef SDK_ASM
#define REG_MI_DMA0SAD_FIELD( dmasrc ) \
    (u32)( \
    ((u32)(dmasrc) << REG_MI_DMA0SAD_DMASRC_SHIFT))
#endif


/* DMA0DAD */

#define REG_MI_DMA0DAD_DMADEST_SHIFT                       0
#define REG_MI_DMA0DAD_DMADEST_SIZE                        27
#define REG_MI_DMA0DAD_DMADEST_MASK                        0x07ffffff

#ifndef SDK_ASM
#define REG_MI_DMA0DAD_FIELD( dmadest ) \
    (u32)( \
    ((u32)(dmadest) << REG_MI_DMA0DAD_DMADEST_SHIFT))
#endif


/* DMA0CNT */

#define REG_MI_DMA0CNT_E_SHIFT                             31
#define REG_MI_DMA0CNT_E_SIZE                              1
#define REG_MI_DMA0CNT_E_MASK                              0x80000000

#define REG_MI_DMA0CNT_I_SHIFT                             30
#define REG_MI_DMA0CNT_I_SIZE                              1
#define REG_MI_DMA0CNT_I_MASK                              0x40000000

#define REG_MI_DMA0CNT_TIMING_SHIFT                        28
#define REG_MI_DMA0CNT_TIMING_SIZE                         2
#define REG_MI_DMA0CNT_TIMING_MASK                         0x30000000

#define REG_MI_DMA0CNT_SB_SHIFT                            26
#define REG_MI_DMA0CNT_SB_SIZE                             1
#define REG_MI_DMA0CNT_SB_MASK                             0x04000000

#define REG_MI_DMA0CNT_CM_SHIFT                            25
#define REG_MI_DMA0CNT_CM_SIZE                             1
#define REG_MI_DMA0CNT_CM_MASK                             0x02000000

#define REG_MI_DMA0CNT_SAR_SHIFT                           23
#define REG_MI_DMA0CNT_SAR_SIZE                            2
#define REG_MI_DMA0CNT_SAR_MASK                            0x01800000

#define REG_MI_DMA0CNT_DAR_SHIFT                           21
#define REG_MI_DMA0CNT_DAR_SIZE                            2
#define REG_MI_DMA0CNT_DAR_MASK                            0x00600000

#define REG_MI_DMA0CNT_WORDCNT_SHIFT                       0
#define REG_MI_DMA0CNT_WORDCNT_SIZE                        16
#define REG_MI_DMA0CNT_WORDCNT_MASK                        0x0000ffff

#ifndef SDK_ASM
#define REG_MI_DMA0CNT_FIELD( e, i, timing, sb, cm, sar, dar, wordcnt ) \
    (u32)( \
    ((u32)(e) << REG_MI_DMA0CNT_E_SHIFT) | \
    ((u32)(i) << REG_MI_DMA0CNT_I_SHIFT) | \
    ((u32)(timing) << REG_MI_DMA0CNT_TIMING_SHIFT) | \
    ((u32)(sb) << REG_MI_DMA0CNT_SB_SHIFT) | \
    ((u32)(cm) << REG_MI_DMA0CNT_CM_SHIFT) | \
    ((u32)(sar) << REG_MI_DMA0CNT_SAR_SHIFT) | \
    ((u32)(dar) << REG_MI_DMA0CNT_DAR_SHIFT) | \
    ((u32)(wordcnt) << REG_MI_DMA0CNT_WORDCNT_SHIFT))
#endif


/* DMA1SAD */

#define REG_MI_DMA1SAD_DMASRC_SHIFT                        0
#define REG_MI_DMA1SAD_DMASRC_SIZE                         28
#define REG_MI_DMA1SAD_DMASRC_MASK                         0x0fffffff

#ifndef SDK_ASM
#define REG_MI_DMA1SAD_FIELD( dmasrc ) \
    (u32)( \
    ((u32)(dmasrc) << REG_MI_DMA1SAD_DMASRC_SHIFT))
#endif


/* DMA1DAD */

#define REG_MI_DMA1DAD_DMADEST_SHIFT                       0
#define REG_MI_DMA1DAD_DMADEST_SIZE                        27
#define REG_MI_DMA1DAD_DMADEST_MASK                        0x07ffffff

#ifndef SDK_ASM
#define REG_MI_DMA1DAD_FIELD( dmadest ) \
    (u32)( \
    ((u32)(dmadest) << REG_MI_DMA1DAD_DMADEST_SHIFT))
#endif


/* DMA1CNT */

#define REG_MI_DMA1CNT_E_SHIFT                             31
#define REG_MI_DMA1CNT_E_SIZE                              1
#define REG_MI_DMA1CNT_E_MASK                              0x80000000

#define REG_MI_DMA1CNT_I_SHIFT                             30
#define REG_MI_DMA1CNT_I_SIZE                              1
#define REG_MI_DMA1CNT_I_MASK                              0x40000000

#define REG_MI_DMA1CNT_TIMING_SHIFT                        28
#define REG_MI_DMA1CNT_TIMING_SIZE                         2
#define REG_MI_DMA1CNT_TIMING_MASK                         0x30000000

#define REG_MI_DMA1CNT_SB_SHIFT                            26
#define REG_MI_DMA1CNT_SB_SIZE                             1
#define REG_MI_DMA1CNT_SB_MASK                             0x04000000

#define REG_MI_DMA1CNT_CM_SHIFT                            25
#define REG_MI_DMA1CNT_CM_SIZE                             1
#define REG_MI_DMA1CNT_CM_MASK                             0x02000000

#define REG_MI_DMA1CNT_SAR_SHIFT                           23
#define REG_MI_DMA1CNT_SAR_SIZE                            2
#define REG_MI_DMA1CNT_SAR_MASK                            0x01800000

#define REG_MI_DMA1CNT_DAR_SHIFT                           21
#define REG_MI_DMA1CNT_DAR_SIZE                            2
#define REG_MI_DMA1CNT_DAR_MASK                            0x00600000

#define REG_MI_DMA1CNT_WORDCNT_SHIFT                       0
#define REG_MI_DMA1CNT_WORDCNT_SIZE                        16
#define REG_MI_DMA1CNT_WORDCNT_MASK                        0x0000ffff

#ifndef SDK_ASM
#define REG_MI_DMA1CNT_FIELD( e, i, timing, sb, cm, sar, dar, wordcnt ) \
    (u32)( \
    ((u32)(e) << REG_MI_DMA1CNT_E_SHIFT) | \
    ((u32)(i) << REG_MI_DMA1CNT_I_SHIFT) | \
    ((u32)(timing) << REG_MI_DMA1CNT_TIMING_SHIFT) | \
    ((u32)(sb) << REG_MI_DMA1CNT_SB_SHIFT) | \
    ((u32)(cm) << REG_MI_DMA1CNT_CM_SHIFT) | \
    ((u32)(sar) << REG_MI_DMA1CNT_SAR_SHIFT) | \
    ((u32)(dar) << REG_MI_DMA1CNT_DAR_SHIFT) | \
    ((u32)(wordcnt) << REG_MI_DMA1CNT_WORDCNT_SHIFT))
#endif


/* DMA2SAD */

#define REG_MI_DMA2SAD_DMASRC_SHIFT                        0
#define REG_MI_DMA2SAD_DMASRC_SIZE                         28
#define REG_MI_DMA2SAD_DMASRC_MASK                         0x0fffffff

#ifndef SDK_ASM
#define REG_MI_DMA2SAD_FIELD( dmasrc ) \
    (u32)( \
    ((u32)(dmasrc) << REG_MI_DMA2SAD_DMASRC_SHIFT))
#endif


/* DMA2DAD */

#define REG_MI_DMA2DAD_DMADEST_SHIFT                       0
#define REG_MI_DMA2DAD_DMADEST_SIZE                        27
#define REG_MI_DMA2DAD_DMADEST_MASK                        0x07ffffff

#ifndef SDK_ASM
#define REG_MI_DMA2DAD_FIELD( dmadest ) \
    (u32)( \
    ((u32)(dmadest) << REG_MI_DMA2DAD_DMADEST_SHIFT))
#endif


/* DMA2CNT */

#define REG_MI_DMA2CNT_E_SHIFT                             31
#define REG_MI_DMA2CNT_E_SIZE                              1
#define REG_MI_DMA2CNT_E_MASK                              0x80000000

#define REG_MI_DMA2CNT_I_SHIFT                             30
#define REG_MI_DMA2CNT_I_SIZE                              1
#define REG_MI_DMA2CNT_I_MASK                              0x40000000

#define REG_MI_DMA2CNT_TIMING_SHIFT                        28
#define REG_MI_DMA2CNT_TIMING_SIZE                         2
#define REG_MI_DMA2CNT_TIMING_MASK                         0x30000000

#define REG_MI_DMA2CNT_SB_SHIFT                            26
#define REG_MI_DMA2CNT_SB_SIZE                             1
#define REG_MI_DMA2CNT_SB_MASK                             0x04000000

#define REG_MI_DMA2CNT_CM_SHIFT                            25
#define REG_MI_DMA2CNT_CM_SIZE                             1
#define REG_MI_DMA2CNT_CM_MASK                             0x02000000

#define REG_MI_DMA2CNT_SAR_SHIFT                           23
#define REG_MI_DMA2CNT_SAR_SIZE                            2
#define REG_MI_DMA2CNT_SAR_MASK                            0x01800000

#define REG_MI_DMA2CNT_DAR_SHIFT                           21
#define REG_MI_DMA2CNT_DAR_SIZE                            2
#define REG_MI_DMA2CNT_DAR_MASK                            0x00600000

#define REG_MI_DMA2CNT_WORDCNT_SHIFT                       0
#define REG_MI_DMA2CNT_WORDCNT_SIZE                        16
#define REG_MI_DMA2CNT_WORDCNT_MASK                        0x0000ffff

#ifndef SDK_ASM
#define REG_MI_DMA2CNT_FIELD( e, i, timing, sb, cm, sar, dar, wordcnt ) \
    (u32)( \
    ((u32)(e) << REG_MI_DMA2CNT_E_SHIFT) | \
    ((u32)(i) << REG_MI_DMA2CNT_I_SHIFT) | \
    ((u32)(timing) << REG_MI_DMA2CNT_TIMING_SHIFT) | \
    ((u32)(sb) << REG_MI_DMA2CNT_SB_SHIFT) | \
    ((u32)(cm) << REG_MI_DMA2CNT_CM_SHIFT) | \
    ((u32)(sar) << REG_MI_DMA2CNT_SAR_SHIFT) | \
    ((u32)(dar) << REG_MI_DMA2CNT_DAR_SHIFT) | \
    ((u32)(wordcnt) << REG_MI_DMA2CNT_WORDCNT_SHIFT))
#endif


/* DMA3SAD */

#define REG_MI_DMA3SAD_DMASRC_SHIFT                        0
#define REG_MI_DMA3SAD_DMASRC_SIZE                         28
#define REG_MI_DMA3SAD_DMASRC_MASK                         0x0fffffff

#ifndef SDK_ASM
#define REG_MI_DMA3SAD_FIELD( dmasrc ) \
    (u32)( \
    ((u32)(dmasrc) << REG_MI_DMA3SAD_DMASRC_SHIFT))
#endif


/* DMA3DAD */

#define REG_MI_DMA3DAD_DMADEST_SHIFT                       0
#define REG_MI_DMA3DAD_DMADEST_SIZE                        28
#define REG_MI_DMA3DAD_DMADEST_MASK                        0x0fffffff

#ifndef SDK_ASM
#define REG_MI_DMA3DAD_FIELD( dmadest ) \
    (u32)( \
    ((u32)(dmadest) << REG_MI_DMA3DAD_DMADEST_SHIFT))
#endif


/* DMA3CNT */

#define REG_MI_DMA3CNT_E_SHIFT                             31
#define REG_MI_DMA3CNT_E_SIZE                              1
#define REG_MI_DMA3CNT_E_MASK                              0x80000000

#define REG_MI_DMA3CNT_I_SHIFT                             30
#define REG_MI_DMA3CNT_I_SIZE                              1
#define REG_MI_DMA3CNT_I_MASK                              0x40000000

#define REG_MI_DMA3CNT_TIMING_SHIFT                        28
#define REG_MI_DMA3CNT_TIMING_SIZE                         2
#define REG_MI_DMA3CNT_TIMING_MASK                         0x30000000

#define REG_MI_DMA3CNT_SB_SHIFT                            26
#define REG_MI_DMA3CNT_SB_SIZE                             1
#define REG_MI_DMA3CNT_SB_MASK                             0x04000000

#define REG_MI_DMA3CNT_CM_SHIFT                            25
#define REG_MI_DMA3CNT_CM_SIZE                             1
#define REG_MI_DMA3CNT_CM_MASK                             0x02000000

#define REG_MI_DMA3CNT_SAR_SHIFT                           23
#define REG_MI_DMA3CNT_SAR_SIZE                            2
#define REG_MI_DMA3CNT_SAR_MASK                            0x01800000

#define REG_MI_DMA3CNT_DAR_SHIFT                           21
#define REG_MI_DMA3CNT_DAR_SIZE                            2
#define REG_MI_DMA3CNT_DAR_MASK                            0x00600000

#define REG_MI_DMA3CNT_WORDCNT_SHIFT                       0
#define REG_MI_DMA3CNT_WORDCNT_SIZE                        16
#define REG_MI_DMA3CNT_WORDCNT_MASK                        0x0000ffff

#ifndef SDK_ASM
#define REG_MI_DMA3CNT_FIELD( e, i, timing, sb, cm, sar, dar, wordcnt ) \
    (u32)( \
    ((u32)(e) << REG_MI_DMA3CNT_E_SHIFT) | \
    ((u32)(i) << REG_MI_DMA3CNT_I_SHIFT) | \
    ((u32)(timing) << REG_MI_DMA3CNT_TIMING_SHIFT) | \
    ((u32)(sb) << REG_MI_DMA3CNT_SB_SHIFT) | \
    ((u32)(cm) << REG_MI_DMA3CNT_CM_SHIFT) | \
    ((u32)(sar) << REG_MI_DMA3CNT_SAR_SHIFT) | \
    ((u32)(dar) << REG_MI_DMA3CNT_DAR_SHIFT) | \
    ((u32)(wordcnt) << REG_MI_DMA3CNT_WORDCNT_SHIFT))
#endif


/* MCCNT0 */

#define REG_MI_MCCNT0_E_SHIFT                              15
#define REG_MI_MCCNT0_E_SIZE                               1
#define REG_MI_MCCNT0_E_MASK                               0x8000

#define REG_MI_MCCNT0_I_SHIFT                              14
#define REG_MI_MCCNT0_I_SIZE                               1
#define REG_MI_MCCNT0_I_MASK                               0x4000

#define REG_MI_MCCNT0_SEL_SHIFT                            13
#define REG_MI_MCCNT0_SEL_SIZE                             1
#define REG_MI_MCCNT0_SEL_MASK                             0x2000

#define REG_MI_MCCNT0_BUSY_SHIFT                           7
#define REG_MI_MCCNT0_BUSY_SIZE                            1
#define REG_MI_MCCNT0_BUSY_MASK                            0x0080

#define REG_MI_MCCNT0_MODE_SHIFT                           6
#define REG_MI_MCCNT0_MODE_SIZE                            1
#define REG_MI_MCCNT0_MODE_MASK                            0x0040

#define REG_MI_MCCNT0_BAUDRATE_SHIFT                       0
#define REG_MI_MCCNT0_BAUDRATE_SIZE                        2
#define REG_MI_MCCNT0_BAUDRATE_MASK                        0x0003

#ifndef SDK_ASM
#define REG_MI_MCCNT0_FIELD( e, i, sel, busy, mode, baudrate ) \
    (u16)( \
    ((u32)(e) << REG_MI_MCCNT0_E_SHIFT) | \
    ((u32)(i) << REG_MI_MCCNT0_I_SHIFT) | \
    ((u32)(sel) << REG_MI_MCCNT0_SEL_SHIFT) | \
    ((u32)(busy) << REG_MI_MCCNT0_BUSY_SHIFT) | \
    ((u32)(mode) << REG_MI_MCCNT0_MODE_SHIFT) | \
    ((u32)(baudrate) << REG_MI_MCCNT0_BAUDRATE_SHIFT))
#endif


/* MCD0 */

#define REG_MI_MCD0_DATA_SHIFT                             0
#define REG_MI_MCD0_DATA_SIZE                              8
#define REG_MI_MCD0_DATA_MASK                              0x00ff

#ifndef SDK_ASM
#define REG_MI_MCD0_FIELD( data ) \
    (u16)( \
    ((u32)(data) << REG_MI_MCD0_DATA_SHIFT))
#endif


/* MCD1 */

/* MCCNT1 */

#define REG_MI_MCCNT1_START_SHIFT                          31
#define REG_MI_MCCNT1_START_SIZE                           1
#define REG_MI_MCCNT1_START_MASK                           0x80000000

#define REG_MI_MCCNT1_WR_SHIFT                             30
#define REG_MI_MCCNT1_WR_SIZE                              1
#define REG_MI_MCCNT1_WR_MASK                              0x40000000

#define REG_MI_MCCNT1_CT_SHIFT                             27
#define REG_MI_MCCNT1_CT_SIZE                              1
#define REG_MI_MCCNT1_CT_MASK                              0x08000000

#define REG_MI_MCCNT1_PC_SHIFT                             24
#define REG_MI_MCCNT1_PC_SIZE                              3
#define REG_MI_MCCNT1_PC_MASK                              0x07000000

#define REG_MI_MCCNT1_RDY_SHIFT                            23
#define REG_MI_MCCNT1_RDY_SIZE                             1
#define REG_MI_MCCNT1_RDY_MASK                             0x00800000

#define REG_MI_MCCNT1_L2_SHIFT                             16
#define REG_MI_MCCNT1_L2_SIZE                              6
#define REG_MI_MCCNT1_L2_MASK                              0x003f0000

#define REG_MI_MCCNT1_L1_SHIFT                             0
#define REG_MI_MCCNT1_L1_SIZE                              13
#define REG_MI_MCCNT1_L1_MASK                              0x00001fff

#ifndef SDK_ASM
#define REG_MI_MCCNT1_FIELD( start, wr, ct, pc, rdy, l2, l1 ) \
    (u32)( \
    ((u32)(start) << REG_MI_MCCNT1_START_SHIFT) | \
    ((u32)(wr) << REG_MI_MCCNT1_WR_SHIFT) | \
    ((u32)(ct) << REG_MI_MCCNT1_CT_SHIFT) | \
    ((u32)(pc) << REG_MI_MCCNT1_PC_SHIFT) | \
    ((u32)(rdy) << REG_MI_MCCNT1_RDY_SHIFT) | \
    ((u32)(l2) << REG_MI_MCCNT1_L2_SHIFT) | \
    ((u32)(l1) << REG_MI_MCCNT1_L1_SHIFT))
#endif


/* MCCMD0 */

#define REG_MI_MCCMD0_CMD3_SHIFT                           24
#define REG_MI_MCCMD0_CMD3_SIZE                            8
#define REG_MI_MCCMD0_CMD3_MASK                            0xff000000

#define REG_MI_MCCMD0_CMD2_SHIFT                           16
#define REG_MI_MCCMD0_CMD2_SIZE                            8
#define REG_MI_MCCMD0_CMD2_MASK                            0x00ff0000

#define REG_MI_MCCMD0_CMD1_SHIFT                           8
#define REG_MI_MCCMD0_CMD1_SIZE                            8
#define REG_MI_MCCMD0_CMD1_MASK                            0x0000ff00

#define REG_MI_MCCMD0_CMD0_SHIFT                           0
#define REG_MI_MCCMD0_CMD0_SIZE                            8
#define REG_MI_MCCMD0_CMD0_MASK                            0x000000ff

#ifndef SDK_ASM
#define REG_MI_MCCMD0_FIELD( cmd3, cmd2, cmd1, cmd0 ) \
    (u32)( \
    ((u32)(cmd3) << REG_MI_MCCMD0_CMD3_SHIFT) | \
    ((u32)(cmd2) << REG_MI_MCCMD0_CMD2_SHIFT) | \
    ((u32)(cmd1) << REG_MI_MCCMD0_CMD1_SHIFT) | \
    ((u32)(cmd0) << REG_MI_MCCMD0_CMD0_SHIFT))
#endif


/* MCCMD1 */

#define REG_MI_MCCMD1_CMD7_SHIFT                           24
#define REG_MI_MCCMD1_CMD7_SIZE                            8
#define REG_MI_MCCMD1_CMD7_MASK                            0xff000000

#define REG_MI_MCCMD1_CMD6_SHIFT                           16
#define REG_MI_MCCMD1_CMD6_SIZE                            8
#define REG_MI_MCCMD1_CMD6_MASK                            0x00ff0000

#define REG_MI_MCCMD1_CMD5_SHIFT                           8
#define REG_MI_MCCMD1_CMD5_SIZE                            8
#define REG_MI_MCCMD1_CMD5_MASK                            0x0000ff00

#define REG_MI_MCCMD1_CMD4_SHIFT                           0
#define REG_MI_MCCMD1_CMD4_SIZE                            8
#define REG_MI_MCCMD1_CMD4_MASK                            0x000000ff

#ifndef SDK_ASM
#define REG_MI_MCCMD1_FIELD( cmd7, cmd6, cmd5, cmd4 ) \
    (u32)( \
    ((u32)(cmd7) << REG_MI_MCCMD1_CMD7_SHIFT) | \
    ((u32)(cmd6) << REG_MI_MCCMD1_CMD6_SHIFT) | \
    ((u32)(cmd5) << REG_MI_MCCMD1_CMD5_SHIFT) | \
    ((u32)(cmd4) << REG_MI_MCCMD1_CMD4_SHIFT))
#endif


/* EXMEMCNT_L */

#define REG_MI_EXMEMCNT_L_EP_SHIFT                         15
#define REG_MI_EXMEMCNT_L_EP_SIZE                          1
#define REG_MI_EXMEMCNT_L_EP_MASK                          0x8000

#define REG_MI_EXMEMCNT_L_MP_SHIFT                         11
#define REG_MI_EXMEMCNT_L_MP_SIZE                          1
#define REG_MI_EXMEMCNT_L_MP_MASK                          0x0800

#define REG_MI_EXMEMCNT_L_CP_SHIFT                         7
#define REG_MI_EXMEMCNT_L_CP_SIZE                          1
#define REG_MI_EXMEMCNT_L_CP_MASK                          0x0080

#define REG_MI_EXMEMCNT_L_PHI_SHIFT                        5
#define REG_MI_EXMEMCNT_L_PHI_SIZE                         2
#define REG_MI_EXMEMCNT_L_PHI_MASK                         0x0060

#define REG_MI_EXMEMCNT_L_ROM2nd_SHIFT                     4
#define REG_MI_EXMEMCNT_L_ROM2nd_SIZE                      1
#define REG_MI_EXMEMCNT_L_ROM2nd_MASK                      0x0010

#define REG_MI_EXMEMCNT_L_ROM1st_SHIFT                     2
#define REG_MI_EXMEMCNT_L_ROM1st_SIZE                      2
#define REG_MI_EXMEMCNT_L_ROM1st_MASK                      0x000c

#define REG_MI_EXMEMCNT_L_RAM_SHIFT                        0
#define REG_MI_EXMEMCNT_L_RAM_SIZE                         2
#define REG_MI_EXMEMCNT_L_RAM_MASK                         0x0003

#ifndef SDK_ASM
#define REG_MI_EXMEMCNT_L_FIELD( ep, mp, cp, phi, rom2nd, rom1st, ram ) \
    (u16)( \
    ((u32)(ep) << REG_MI_EXMEMCNT_L_EP_SHIFT) | \
    ((u32)(mp) << REG_MI_EXMEMCNT_L_MP_SHIFT) | \
    ((u32)(cp) << REG_MI_EXMEMCNT_L_CP_SHIFT) | \
    ((u32)(phi) << REG_MI_EXMEMCNT_L_PHI_SHIFT) | \
    ((u32)(rom2nd) << REG_MI_EXMEMCNT_L_ROM2nd_SHIFT) | \
    ((u32)(rom1st) << REG_MI_EXMEMCNT_L_ROM1st_SHIFT) | \
    ((u32)(ram) << REG_MI_EXMEMCNT_L_RAM_SHIFT))
#endif


/* EXMEMCNT_H */

#define REG_MI_EXMEMCNT_H_PHI33M_SHIFT                     7
#define REG_MI_EXMEMCNT_H_PHI33M_SIZE                      1
#define REG_MI_EXMEMCNT_H_PHI33M_MASK                      0x0080

#define REG_MI_EXMEMCNT_H_WW1_2nd_SHIFT                    5
#define REG_MI_EXMEMCNT_H_WW1_2nd_SIZE                     1
#define REG_MI_EXMEMCNT_H_WW1_2nd_MASK                     0x0020

#define REG_MI_EXMEMCNT_H_WW1_1st_SHIFT                    3
#define REG_MI_EXMEMCNT_H_WW1_1st_SIZE                     2
#define REG_MI_EXMEMCNT_H_WW1_1st_MASK                     0x0018

#define REG_MI_EXMEMCNT_H_WW0_2nd_SHIFT                    2
#define REG_MI_EXMEMCNT_H_WW0_2nd_SIZE                     1
#define REG_MI_EXMEMCNT_H_WW0_2nd_MASK                     0x0004

#define REG_MI_EXMEMCNT_H_WW0_1st_SHIFT                    0
#define REG_MI_EXMEMCNT_H_WW0_1st_SIZE                     2
#define REG_MI_EXMEMCNT_H_WW0_1st_MASK                     0x0003

#ifndef SDK_ASM
#define REG_MI_EXMEMCNT_H_FIELD( phi33m, ww1_2nd, ww1_1st, ww0_2nd, ww0_1st ) \
    (u16)( \
    ((u32)(phi33m) << REG_MI_EXMEMCNT_H_PHI33M_SHIFT) | \
    ((u32)(ww1_2nd) << REG_MI_EXMEMCNT_H_WW1_2nd_SHIFT) | \
    ((u32)(ww1_1st) << REG_MI_EXMEMCNT_H_WW1_1st_SHIFT) | \
    ((u32)(ww0_2nd) << REG_MI_EXMEMCNT_H_WW0_2nd_SHIFT) | \
    ((u32)(ww0_1st) << REG_MI_EXMEMCNT_H_WW0_1st_SHIFT))
#endif


/* WVRAMSTAT */

#define REG_MI_WVRAMSTAT_WRAM_1_SHIFT                      9
#define REG_MI_WVRAMSTAT_WRAM_1_SIZE                       1
#define REG_MI_WVRAMSTAT_WRAM_1_MASK                       0x0200

#define REG_MI_WVRAMSTAT_WRAM_0_SHIFT                      8
#define REG_MI_WVRAMSTAT_WRAM_0_SIZE                       1
#define REG_MI_WVRAMSTAT_WRAM_0_MASK                       0x0100

#define REG_MI_WVRAMSTAT_VRAM_D_SHIFT                      1
#define REG_MI_WVRAMSTAT_VRAM_D_SIZE                       1
#define REG_MI_WVRAMSTAT_VRAM_D_MASK                       0x0002

#define REG_MI_WVRAMSTAT_VRAM_C_SHIFT                      0
#define REG_MI_WVRAMSTAT_VRAM_C_SIZE                       1
#define REG_MI_WVRAMSTAT_VRAM_C_MASK                       0x0001

#ifndef SDK_ASM
#define REG_MI_WVRAMSTAT_FIELD( wram_1, wram_0, vram_d, vram_c ) \
    (u16)( \
    ((u32)(wram_1) << REG_MI_WVRAMSTAT_WRAM_1_SHIFT) | \
    ((u32)(wram_0) << REG_MI_WVRAMSTAT_WRAM_0_SHIFT) | \
    ((u32)(vram_d) << REG_MI_WVRAMSTAT_VRAM_D_SHIFT) | \
    ((u32)(vram_c) << REG_MI_WVRAMSTAT_VRAM_C_SHIFT))
#endif


#ifdef __cplusplus
} /* extern "C" */
#endif

/* NITRO_HW_ARM7_IOREG_MI_H_ */
#endif
