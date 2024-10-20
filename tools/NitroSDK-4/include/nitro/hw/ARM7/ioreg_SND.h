/*---------------------------------------------------------------------------*
  Project:  NitroSDK - IO Register List - 
  File:     nitro/hw/ARM7/ioreg_SND.h

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
#ifndef NITRO_HW_ARM7_IOREG_SND_H_
#define NITRO_HW_ARM7_IOREG_SND_H_

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


/* POWCNT */

#define REG_POWCNT_OFFSET                                  0x304
#define REG_POWCNT_ADDR                                    (HW_REG_BASE + REG_POWCNT_OFFSET)
#define reg_SND_POWCNT                                     (*( REGType16v *) REG_POWCNT_ADDR)

/* SOUND0CNT */

#define REG_SOUND0CNT_OFFSET                               0x400
#define REG_SOUND0CNT_ADDR                                 (HW_REG_BASE + REG_SOUND0CNT_OFFSET)
#define reg_SND_SOUND0CNT                                  (*( REGType32v *) REG_SOUND0CNT_ADDR)

/* SOUND0CNT_VOL_16 */

#define REG_SOUND0CNT_VOL_16_OFFSET                        0x400
#define REG_SOUND0CNT_VOL_16_ADDR                          (HW_REG_BASE + REG_SOUND0CNT_VOL_16_OFFSET)
#define reg_SND_SOUND0CNT_VOL_16                           (*( REGType16v *) REG_SOUND0CNT_VOL_16_ADDR)

/* SOUND0CNT_VOL */

#define REG_SOUND0CNT_VOL_OFFSET                           0x400
#define REG_SOUND0CNT_VOL_ADDR                             (HW_REG_BASE + REG_SOUND0CNT_VOL_OFFSET)
#define reg_SND_SOUND0CNT_VOL                              (*( REGType8v *) REG_SOUND0CNT_VOL_ADDR)

/* SOUND0CNT_PAN */

#define REG_SOUND0CNT_PAN_OFFSET                           0x402
#define REG_SOUND0CNT_PAN_ADDR                             (HW_REG_BASE + REG_SOUND0CNT_PAN_OFFSET)
#define reg_SND_SOUND0CNT_PAN                              (*( REGType8v *) REG_SOUND0CNT_PAN_ADDR)

/* SOUND0CNT_8 */

#define REG_SOUND0CNT_8_OFFSET                             0x403
#define REG_SOUND0CNT_8_ADDR                               (HW_REG_BASE + REG_SOUND0CNT_8_OFFSET)
#define reg_SND_SOUND0CNT_8                                (*( REGType8v *) REG_SOUND0CNT_8_ADDR)

/* SOUND0SAD */

#define REG_SOUND0SAD_OFFSET                               0x404
#define REG_SOUND0SAD_ADDR                                 (HW_REG_BASE + REG_SOUND0SAD_OFFSET)
#define reg_SND_SOUND0SAD                                  (*( REGType32v *) REG_SOUND0SAD_ADDR)

/* SOUND0TMR */

#define REG_SOUND0TMR_OFFSET                               0x408
#define REG_SOUND0TMR_ADDR                                 (HW_REG_BASE + REG_SOUND0TMR_OFFSET)
#define reg_SND_SOUND0TMR                                  (*( REGType16v *) REG_SOUND0TMR_ADDR)

/* SOUND0RPT_PT */

#define REG_SOUND0RPT_PT_OFFSET                            0x40a
#define REG_SOUND0RPT_PT_ADDR                              (HW_REG_BASE + REG_SOUND0RPT_PT_OFFSET)
#define reg_SND_SOUND0RPT_PT                               (*( REGType16v *) REG_SOUND0RPT_PT_ADDR)

/* SOUND0RPT_LEN */

#define REG_SOUND0RPT_LEN_OFFSET                           0x40c
#define REG_SOUND0RPT_LEN_ADDR                             (HW_REG_BASE + REG_SOUND0RPT_LEN_OFFSET)
#define reg_SND_SOUND0RPT_LEN                              (*( REGType32v *) REG_SOUND0RPT_LEN_ADDR)

/* SOUNDCNT */

#define REG_SOUNDCNT_OFFSET                                0x500
#define REG_SOUNDCNT_ADDR                                  (HW_REG_BASE + REG_SOUNDCNT_OFFSET)
#define reg_SND_SOUNDCNT                                   (*( REGType16v *) REG_SOUNDCNT_ADDR)

/* SOUNDCNT_8 */

#define REG_SOUNDCNT_8_OFFSET                              0x501
#define REG_SOUNDCNT_8_ADDR                                (HW_REG_BASE + REG_SOUNDCNT_8_OFFSET)
#define reg_SND_SOUNDCNT_8                                 (*( REGType8v *) REG_SOUNDCNT_8_ADDR)

/* SOUNDCNT_VOL */

#define REG_SOUNDCNT_VOL_OFFSET                            0x500
#define REG_SOUNDCNT_VOL_ADDR                              (HW_REG_BASE + REG_SOUNDCNT_VOL_OFFSET)
#define reg_SND_SOUNDCNT_VOL                               (*( REGType8v *) REG_SOUNDCNT_VOL_ADDR)

/* SNDCAPCNT */

#define REG_SNDCAPCNT_OFFSET                               0x508
#define REG_SNDCAPCNT_ADDR                                 (HW_REG_BASE + REG_SNDCAPCNT_OFFSET)
#define reg_SND_SNDCAPCNT                                  (*( REGType16v *) REG_SNDCAPCNT_ADDR)

/* SNDCAP0CNT */

#define REG_SNDCAP0CNT_OFFSET                              0x508
#define REG_SNDCAP0CNT_ADDR                                (HW_REG_BASE + REG_SNDCAP0CNT_OFFSET)
#define reg_SND_SNDCAP0CNT                                 (*( REGType8v *) REG_SNDCAP0CNT_ADDR)

/* SNDCAP1CNT */

#define REG_SNDCAP1CNT_OFFSET                              0x509
#define REG_SNDCAP1CNT_ADDR                                (HW_REG_BASE + REG_SNDCAP1CNT_OFFSET)
#define reg_SND_SNDCAP1CNT                                 (*( REGType8v *) REG_SNDCAP1CNT_ADDR)

/* SNDCAP0DAD */

#define REG_SNDCAP0DAD_OFFSET                              0x510
#define REG_SNDCAP0DAD_ADDR                                (HW_REG_BASE + REG_SNDCAP0DAD_OFFSET)
#define reg_SND_SNDCAP0DAD                                 (*( REGType32v *) REG_SNDCAP0DAD_ADDR)

/* SNDCAP0LEN */

#define REG_SNDCAP0LEN_OFFSET                              0x514
#define REG_SNDCAP0LEN_ADDR                                (HW_REG_BASE + REG_SNDCAP0LEN_OFFSET)
#define reg_SND_SNDCAP0LEN                                 (*( REGType16v *) REG_SNDCAP0LEN_ADDR)

/* SNDCAP1DAD */

#define REG_SNDCAP1DAD_OFFSET                              0x518
#define REG_SNDCAP1DAD_ADDR                                (HW_REG_BASE + REG_SNDCAP1DAD_OFFSET)
#define reg_SND_SNDCAP1DAD                                 (*( REGType32v *) REG_SNDCAP1DAD_ADDR)

/* SNDCAP1LEN */

#define REG_SNDCAP1LEN_OFFSET                              0x51c
#define REG_SNDCAP1LEN_ADDR                                (HW_REG_BASE + REG_SNDCAP1LEN_OFFSET)
#define reg_SND_SNDCAP1LEN                                 (*( REGType16v *) REG_SNDCAP1LEN_ADDR)


/*
 * Definitions of Register fields
 */


/* POWCNT */

#define REG_SND_POWCNT_EWL_SHIFT                           1
#define REG_SND_POWCNT_EWL_SIZE                            1
#define REG_SND_POWCNT_EWL_MASK                            0x0002

#define REG_SND_POWCNT_SPE_SHIFT                           0
#define REG_SND_POWCNT_SPE_SIZE                            1
#define REG_SND_POWCNT_SPE_MASK                            0x0001

#ifndef SDK_ASM
#define REG_SND_POWCNT_FIELD( ewl, spe ) \
    (u16)( \
    ((u32)(ewl) << REG_SND_POWCNT_EWL_SHIFT) | \
    ((u32)(spe) << REG_SND_POWCNT_SPE_SHIFT))
#endif


/* SOUND0CNT */

#define REG_SND_SOUND0CNT_E_SHIFT                          31
#define REG_SND_SOUND0CNT_E_SIZE                           1
#define REG_SND_SOUND0CNT_E_MASK                           0x80000000

#define REG_SND_SOUND0CNT_FORMAT_SHIFT                     29
#define REG_SND_SOUND0CNT_FORMAT_SIZE                      2
#define REG_SND_SOUND0CNT_FORMAT_MASK                      0x60000000

#define REG_SND_SOUND0CNT_REPEAT_SHIFT                     27
#define REG_SND_SOUND0CNT_REPEAT_SIZE                      2
#define REG_SND_SOUND0CNT_REPEAT_MASK                      0x18000000

#define REG_SND_SOUND0CNT_DUTY_SHIFT                       24
#define REG_SND_SOUND0CNT_DUTY_SIZE                        3
#define REG_SND_SOUND0CNT_DUTY_MASK                        0x07000000

#define REG_SND_SOUND0CNT_PAN_SHIFT                        16
#define REG_SND_SOUND0CNT_PAN_SIZE                         7
#define REG_SND_SOUND0CNT_PAN_MASK                         0x007f0000

#define REG_SND_SOUND0CNT_HOLD_SHIFT                       15
#define REG_SND_SOUND0CNT_HOLD_SIZE                        1
#define REG_SND_SOUND0CNT_HOLD_MASK                        0x00008000

#define REG_SND_SOUND0CNT_SHIFT_SHIFT                      8
#define REG_SND_SOUND0CNT_SHIFT_SIZE                       2
#define REG_SND_SOUND0CNT_SHIFT_MASK                       0x00000300

#define REG_SND_SOUND0CNT_VOLUME_SHIFT                     0
#define REG_SND_SOUND0CNT_VOLUME_SIZE                      7
#define REG_SND_SOUND0CNT_VOLUME_MASK                      0x0000007f

#ifndef SDK_ASM
#define REG_SND_SOUND0CNT_FIELD( e, format, repeat, duty, pan, hold, shift, volume ) \
    (u32)( \
    ((u32)(e) << REG_SND_SOUND0CNT_E_SHIFT) | \
    ((u32)(format) << REG_SND_SOUND0CNT_FORMAT_SHIFT) | \
    ((u32)(repeat) << REG_SND_SOUND0CNT_REPEAT_SHIFT) | \
    ((u32)(duty) << REG_SND_SOUND0CNT_DUTY_SHIFT) | \
    ((u32)(pan) << REG_SND_SOUND0CNT_PAN_SHIFT) | \
    ((u32)(hold) << REG_SND_SOUND0CNT_HOLD_SHIFT) | \
    ((u32)(shift) << REG_SND_SOUND0CNT_SHIFT_SHIFT) | \
    ((u32)(volume) << REG_SND_SOUND0CNT_VOLUME_SHIFT))
#endif


/* SOUND0CNT_VOL_16 */

#define REG_SND_SOUND0CNT_VOL_16_HOLD_SHIFT                15
#define REG_SND_SOUND0CNT_VOL_16_HOLD_SIZE                 1
#define REG_SND_SOUND0CNT_VOL_16_HOLD_MASK                 0x8000

#define REG_SND_SOUND0CNT_VOL_16_SHIFT_SHIFT               8
#define REG_SND_SOUND0CNT_VOL_16_SHIFT_SIZE                2
#define REG_SND_SOUND0CNT_VOL_16_SHIFT_MASK                0x0300

#define REG_SND_SOUND0CNT_VOL_16_VOLUME_SHIFT              0
#define REG_SND_SOUND0CNT_VOL_16_VOLUME_SIZE               7
#define REG_SND_SOUND0CNT_VOL_16_VOLUME_MASK               0x007f

#ifndef SDK_ASM
#define REG_SND_SOUND0CNT_VOL_16_FIELD( hold, shift, volume ) \
    (u16)( \
    ((u32)(hold) << REG_SND_SOUND0CNT_VOL_16_HOLD_SHIFT) | \
    ((u32)(shift) << REG_SND_SOUND0CNT_VOL_16_SHIFT_SHIFT) | \
    ((u32)(volume) << REG_SND_SOUND0CNT_VOL_16_VOLUME_SHIFT))
#endif


/* SOUND0CNT_VOL */

#define REG_SND_SOUND0CNT_VOL_VOLUME_SHIFT                 0
#define REG_SND_SOUND0CNT_VOL_VOLUME_SIZE                  7
#define REG_SND_SOUND0CNT_VOL_VOLUME_MASK                  0x7f

#ifndef SDK_ASM
#define REG_SND_SOUND0CNT_VOL_FIELD( volume ) \
    (u8)( \
    ((u32)(volume) << REG_SND_SOUND0CNT_VOL_VOLUME_SHIFT))
#endif


/* SOUND0CNT_PAN */

#define REG_SND_SOUND0CNT_PAN_PAN_SHIFT                    0
#define REG_SND_SOUND0CNT_PAN_PAN_SIZE                     7
#define REG_SND_SOUND0CNT_PAN_PAN_MASK                     0x7f

#ifndef SDK_ASM
#define REG_SND_SOUND0CNT_PAN_FIELD( pan ) \
    (u8)( \
    ((u32)(pan) << REG_SND_SOUND0CNT_PAN_PAN_SHIFT))
#endif


/* SOUND0CNT_8 */

#define REG_SND_SOUND0CNT_8_E_SHIFT                        7
#define REG_SND_SOUND0CNT_8_E_SIZE                         1
#define REG_SND_SOUND0CNT_8_E_MASK                         0x80

#define REG_SND_SOUND0CNT_8_FORMAT_SHIFT                   5
#define REG_SND_SOUND0CNT_8_FORMAT_SIZE                    2
#define REG_SND_SOUND0CNT_8_FORMAT_MASK                    0x60

#define REG_SND_SOUND0CNT_8_REPEAT_SHIFT                   3
#define REG_SND_SOUND0CNT_8_REPEAT_SIZE                    2
#define REG_SND_SOUND0CNT_8_REPEAT_MASK                    0x18

#define REG_SND_SOUND0CNT_8_DUTY_SHIFT                     0
#define REG_SND_SOUND0CNT_8_DUTY_SIZE                      3
#define REG_SND_SOUND0CNT_8_DUTY_MASK                      0x07

#ifndef SDK_ASM
#define REG_SND_SOUND0CNT_8_FIELD( e, format, repeat, duty ) \
    (u8)( \
    ((u32)(e) << REG_SND_SOUND0CNT_8_E_SHIFT) | \
    ((u32)(format) << REG_SND_SOUND0CNT_8_FORMAT_SHIFT) | \
    ((u32)(repeat) << REG_SND_SOUND0CNT_8_REPEAT_SHIFT) | \
    ((u32)(duty) << REG_SND_SOUND0CNT_8_DUTY_SHIFT))
#endif


/* SOUND0SAD */

#define REG_SND_SOUND0SAD_SRC_SHIFT                        0
#define REG_SND_SOUND0SAD_SRC_SIZE                         27
#define REG_SND_SOUND0SAD_SRC_MASK                         0x07ffffff

#ifndef SDK_ASM
#define REG_SND_SOUND0SAD_FIELD( src ) \
    (u32)( \
    ((u32)(src) << REG_SND_SOUND0SAD_SRC_SHIFT))
#endif


/* SOUND0TMR */

#define REG_SND_SOUND0TMR_TIMER_SHIFT                      0
#define REG_SND_SOUND0TMR_TIMER_SIZE                       16
#define REG_SND_SOUND0TMR_TIMER_MASK                       0xffff

#ifndef SDK_ASM
#define REG_SND_SOUND0TMR_FIELD( timer ) \
    (u16)( \
    ((u32)(timer) << REG_SND_SOUND0TMR_TIMER_SHIFT))
#endif


/* SOUND0RPT_PT */

#define REG_SND_SOUND0RPT_PT_POINT_SHIFT                   0
#define REG_SND_SOUND0RPT_PT_POINT_SIZE                    16
#define REG_SND_SOUND0RPT_PT_POINT_MASK                    0xffff

#ifndef SDK_ASM
#define REG_SND_SOUND0RPT_PT_FIELD( point ) \
    (u16)( \
    ((u32)(point) << REG_SND_SOUND0RPT_PT_POINT_SHIFT))
#endif


/* SOUND0RPT_LEN */

#define REG_SND_SOUND0RPT_LEN_LEN_SHIFT                    0
#define REG_SND_SOUND0RPT_LEN_LEN_SIZE                     22
#define REG_SND_SOUND0RPT_LEN_LEN_MASK                     0x003fffff

#ifndef SDK_ASM
#define REG_SND_SOUND0RPT_LEN_FIELD( len ) \
    (u32)( \
    ((u32)(len) << REG_SND_SOUND0RPT_LEN_LEN_SHIFT))
#endif


/* SOUNDCNT */

#define REG_SND_SOUNDCNT_E_SHIFT                           15
#define REG_SND_SOUNDCNT_E_SIZE                            1
#define REG_SND_SOUNDCNT_E_MASK                            0x8000

#define REG_SND_SOUNDCNT_MIX_CH3_SHIFT                     13
#define REG_SND_SOUNDCNT_MIX_CH3_SIZE                      1
#define REG_SND_SOUNDCNT_MIX_CH3_MASK                      0x2000

#define REG_SND_SOUNDCNT_MIX_CH1_SHIFT                     12
#define REG_SND_SOUNDCNT_MIX_CH1_SIZE                      1
#define REG_SND_SOUNDCNT_MIX_CH1_MASK                      0x1000

#define REG_SND_SOUNDCNT_ROUT_SHIFT                        10
#define REG_SND_SOUNDCNT_ROUT_SIZE                         2
#define REG_SND_SOUNDCNT_ROUT_MASK                         0x0c00

#define REG_SND_SOUNDCNT_LOUT_SHIFT                        8
#define REG_SND_SOUNDCNT_LOUT_SIZE                         2
#define REG_SND_SOUNDCNT_LOUT_MASK                         0x0300

#define REG_SND_SOUNDCNT_VOLUME_SHIFT                      0
#define REG_SND_SOUNDCNT_VOLUME_SIZE                       7
#define REG_SND_SOUNDCNT_VOLUME_MASK                       0x007f

#ifndef SDK_ASM
#define REG_SND_SOUNDCNT_FIELD( e, mix_ch3, mix_ch1, rout, lout, volume ) \
    (u16)( \
    ((u32)(e) << REG_SND_SOUNDCNT_E_SHIFT) | \
    ((u32)(mix_ch3) << REG_SND_SOUNDCNT_MIX_CH3_SHIFT) | \
    ((u32)(mix_ch1) << REG_SND_SOUNDCNT_MIX_CH1_SHIFT) | \
    ((u32)(rout) << REG_SND_SOUNDCNT_ROUT_SHIFT) | \
    ((u32)(lout) << REG_SND_SOUNDCNT_LOUT_SHIFT) | \
    ((u32)(volume) << REG_SND_SOUNDCNT_VOLUME_SHIFT))
#endif


/* SOUNDCNT_8 */

#define REG_SND_SOUNDCNT_8_E_SHIFT                         7
#define REG_SND_SOUNDCNT_8_E_SIZE                          1
#define REG_SND_SOUNDCNT_8_E_MASK                          0x80

#define REG_SND_SOUNDCNT_8_MIX_CH3_SHIFT                   5
#define REG_SND_SOUNDCNT_8_MIX_CH3_SIZE                    1
#define REG_SND_SOUNDCNT_8_MIX_CH3_MASK                    0x20

#define REG_SND_SOUNDCNT_8_MIX_CH1_SHIFT                   4
#define REG_SND_SOUNDCNT_8_MIX_CH1_SIZE                    1
#define REG_SND_SOUNDCNT_8_MIX_CH1_MASK                    0x10

#define REG_SND_SOUNDCNT_8_ROUT_SHIFT                      2
#define REG_SND_SOUNDCNT_8_ROUT_SIZE                       2
#define REG_SND_SOUNDCNT_8_ROUT_MASK                       0x0c

#define REG_SND_SOUNDCNT_8_LOUT_SHIFT                      0
#define REG_SND_SOUNDCNT_8_LOUT_SIZE                       2
#define REG_SND_SOUNDCNT_8_LOUT_MASK                       0x03

#ifndef SDK_ASM
#define REG_SND_SOUNDCNT_8_FIELD( e, mix_ch3, mix_ch1, rout, lout ) \
    (u8)( \
    ((u32)(e) << REG_SND_SOUNDCNT_8_E_SHIFT) | \
    ((u32)(mix_ch3) << REG_SND_SOUNDCNT_8_MIX_CH3_SHIFT) | \
    ((u32)(mix_ch1) << REG_SND_SOUNDCNT_8_MIX_CH1_SHIFT) | \
    ((u32)(rout) << REG_SND_SOUNDCNT_8_ROUT_SHIFT) | \
    ((u32)(lout) << REG_SND_SOUNDCNT_8_LOUT_SHIFT))
#endif


/* SOUNDCNT_VOL */

#define REG_SND_SOUNDCNT_VOL_VOLUME_SHIFT                  0
#define REG_SND_SOUNDCNT_VOL_VOLUME_SIZE                   7
#define REG_SND_SOUNDCNT_VOL_VOLUME_MASK                   0x7f

#ifndef SDK_ASM
#define REG_SND_SOUNDCNT_VOL_FIELD( volume ) \
    (u8)( \
    ((u32)(volume) << REG_SND_SOUNDCNT_VOL_VOLUME_SHIFT))
#endif


/* SNDCAPCNT */

#define REG_SND_SNDCAPCNT_CAP1_E_SHIFT                     15
#define REG_SND_SNDCAPCNT_CAP1_E_SIZE                      1
#define REG_SND_SNDCAPCNT_CAP1_E_MASK                      0x8000

#define REG_SND_SNDCAPCNT_CAP1_FORMAT_SHIFT                11
#define REG_SND_SNDCAPCNT_CAP1_FORMAT_SIZE                 1
#define REG_SND_SNDCAPCNT_CAP1_FORMAT_MASK                 0x0800

#define REG_SND_SNDCAPCNT_CAP1_REPEAT_SHIFT                10
#define REG_SND_SNDCAPCNT_CAP1_REPEAT_SIZE                 1
#define REG_SND_SNDCAPCNT_CAP1_REPEAT_MASK                 0x0400

#define REG_SND_SNDCAPCNT_CAP1_IN_SHIFT                    9
#define REG_SND_SNDCAPCNT_CAP1_IN_SIZE                     1
#define REG_SND_SNDCAPCNT_CAP1_IN_MASK                     0x0200

#define REG_SND_SNDCAPCNT_CAP1_OUT_SHIFT                   8
#define REG_SND_SNDCAPCNT_CAP1_OUT_SIZE                    1
#define REG_SND_SNDCAPCNT_CAP1_OUT_MASK                    0x0100

#define REG_SND_SNDCAPCNT_CAP0_E_SHIFT                     7
#define REG_SND_SNDCAPCNT_CAP0_E_SIZE                      1
#define REG_SND_SNDCAPCNT_CAP0_E_MASK                      0x0080

#define REG_SND_SNDCAPCNT_CAP0_FORMAT_SHIFT                3
#define REG_SND_SNDCAPCNT_CAP0_FORMAT_SIZE                 1
#define REG_SND_SNDCAPCNT_CAP0_FORMAT_MASK                 0x0008

#define REG_SND_SNDCAPCNT_CAP0_REPEAT_SHIFT                2
#define REG_SND_SNDCAPCNT_CAP0_REPEAT_SIZE                 1
#define REG_SND_SNDCAPCNT_CAP0_REPEAT_MASK                 0x0004

#define REG_SND_SNDCAPCNT_CAP0_IN_SHIFT                    1
#define REG_SND_SNDCAPCNT_CAP0_IN_SIZE                     1
#define REG_SND_SNDCAPCNT_CAP0_IN_MASK                     0x0002

#define REG_SND_SNDCAPCNT_CAP0_OUT_SHIFT                   0
#define REG_SND_SNDCAPCNT_CAP0_OUT_SIZE                    1
#define REG_SND_SNDCAPCNT_CAP0_OUT_MASK                    0x0001

#ifndef SDK_ASM
#define REG_SND_SNDCAPCNT_FIELD( cap1_e, cap1_format, cap1_repeat, cap1_in, cap1_out, cap0_e, cap0_format, cap0_repeat, cap0_in, cap0_out ) \
    (u16)( \
    ((u32)(cap1_e) << REG_SND_SNDCAPCNT_CAP1_E_SHIFT) | \
    ((u32)(cap1_format) << REG_SND_SNDCAPCNT_CAP1_FORMAT_SHIFT) | \
    ((u32)(cap1_repeat) << REG_SND_SNDCAPCNT_CAP1_REPEAT_SHIFT) | \
    ((u32)(cap1_in) << REG_SND_SNDCAPCNT_CAP1_IN_SHIFT) | \
    ((u32)(cap1_out) << REG_SND_SNDCAPCNT_CAP1_OUT_SHIFT) | \
    ((u32)(cap0_e) << REG_SND_SNDCAPCNT_CAP0_E_SHIFT) | \
    ((u32)(cap0_format) << REG_SND_SNDCAPCNT_CAP0_FORMAT_SHIFT) | \
    ((u32)(cap0_repeat) << REG_SND_SNDCAPCNT_CAP0_REPEAT_SHIFT) | \
    ((u32)(cap0_in) << REG_SND_SNDCAPCNT_CAP0_IN_SHIFT) | \
    ((u32)(cap0_out) << REG_SND_SNDCAPCNT_CAP0_OUT_SHIFT))
#endif


/* SNDCAP0CNT */

#define REG_SND_SNDCAP0CNT_E_SHIFT                         7
#define REG_SND_SNDCAP0CNT_E_SIZE                          1
#define REG_SND_SNDCAP0CNT_E_MASK                          0x80

#define REG_SND_SNDCAP0CNT_FORMAT_SHIFT                    3
#define REG_SND_SNDCAP0CNT_FORMAT_SIZE                     1
#define REG_SND_SNDCAP0CNT_FORMAT_MASK                     0x08

#define REG_SND_SNDCAP0CNT_REPEAT_SHIFT                    2
#define REG_SND_SNDCAP0CNT_REPEAT_SIZE                     1
#define REG_SND_SNDCAP0CNT_REPEAT_MASK                     0x04

#define REG_SND_SNDCAP0CNT_IN_SHIFT                        1
#define REG_SND_SNDCAP0CNT_IN_SIZE                         1
#define REG_SND_SNDCAP0CNT_IN_MASK                         0x02

#define REG_SND_SNDCAP0CNT_OUT_SHIFT                       0
#define REG_SND_SNDCAP0CNT_OUT_SIZE                        1
#define REG_SND_SNDCAP0CNT_OUT_MASK                        0x01

#ifndef SDK_ASM
#define REG_SND_SNDCAP0CNT_FIELD( e, format, repeat, in, out ) \
    (u8)( \
    ((u32)(e) << REG_SND_SNDCAP0CNT_E_SHIFT) | \
    ((u32)(format) << REG_SND_SNDCAP0CNT_FORMAT_SHIFT) | \
    ((u32)(repeat) << REG_SND_SNDCAP0CNT_REPEAT_SHIFT) | \
    ((u32)(in) << REG_SND_SNDCAP0CNT_IN_SHIFT) | \
    ((u32)(out) << REG_SND_SNDCAP0CNT_OUT_SHIFT))
#endif


/* SNDCAP1CNT */

#define REG_SND_SNDCAP1CNT_E_SHIFT                         7
#define REG_SND_SNDCAP1CNT_E_SIZE                          1
#define REG_SND_SNDCAP1CNT_E_MASK                          0x80

#define REG_SND_SNDCAP1CNT_FORMAT_SHIFT                    3
#define REG_SND_SNDCAP1CNT_FORMAT_SIZE                     1
#define REG_SND_SNDCAP1CNT_FORMAT_MASK                     0x08

#define REG_SND_SNDCAP1CNT_REPEAT_SHIFT                    2
#define REG_SND_SNDCAP1CNT_REPEAT_SIZE                     1
#define REG_SND_SNDCAP1CNT_REPEAT_MASK                     0x04

#define REG_SND_SNDCAP1CNT_IN_SHIFT                        1
#define REG_SND_SNDCAP1CNT_IN_SIZE                         1
#define REG_SND_SNDCAP1CNT_IN_MASK                         0x02

#define REG_SND_SNDCAP1CNT_OUT_SHIFT                       0
#define REG_SND_SNDCAP1CNT_OUT_SIZE                        1
#define REG_SND_SNDCAP1CNT_OUT_MASK                        0x01

#ifndef SDK_ASM
#define REG_SND_SNDCAP1CNT_FIELD( e, format, repeat, in, out ) \
    (u8)( \
    ((u32)(e) << REG_SND_SNDCAP1CNT_E_SHIFT) | \
    ((u32)(format) << REG_SND_SNDCAP1CNT_FORMAT_SHIFT) | \
    ((u32)(repeat) << REG_SND_SNDCAP1CNT_REPEAT_SHIFT) | \
    ((u32)(in) << REG_SND_SNDCAP1CNT_IN_SHIFT) | \
    ((u32)(out) << REG_SND_SNDCAP1CNT_OUT_SHIFT))
#endif


/* SNDCAP0DAD */

#define REG_SND_SNDCAP0DAD_DEST_SHIFT                      0
#define REG_SND_SNDCAP0DAD_DEST_SIZE                       27
#define REG_SND_SNDCAP0DAD_DEST_MASK                       0x07ffffff

#ifndef SDK_ASM
#define REG_SND_SNDCAP0DAD_FIELD( dest ) \
    (u32)( \
    ((u32)(dest) << REG_SND_SNDCAP0DAD_DEST_SHIFT))
#endif


/* SNDCAP0LEN */

#define REG_SND_SNDCAP0LEN_LEN_SHIFT                       0
#define REG_SND_SNDCAP0LEN_LEN_SIZE                        16
#define REG_SND_SNDCAP0LEN_LEN_MASK                        0xffff

#ifndef SDK_ASM
#define REG_SND_SNDCAP0LEN_FIELD( len ) \
    (u16)( \
    ((u32)(len) << REG_SND_SNDCAP0LEN_LEN_SHIFT))
#endif


/* SNDCAP1DAD */

#define REG_SND_SNDCAP1DAD_DEST_SHIFT                      0
#define REG_SND_SNDCAP1DAD_DEST_SIZE                       27
#define REG_SND_SNDCAP1DAD_DEST_MASK                       0x07ffffff

#ifndef SDK_ASM
#define REG_SND_SNDCAP1DAD_FIELD( dest ) \
    (u32)( \
    ((u32)(dest) << REG_SND_SNDCAP1DAD_DEST_SHIFT))
#endif


/* SNDCAP1LEN */

#define REG_SND_SNDCAP1LEN_LEN_SHIFT                       0
#define REG_SND_SNDCAP1LEN_LEN_SIZE                        16
#define REG_SND_SNDCAP1LEN_LEN_MASK                        0xffff

#ifndef SDK_ASM
#define REG_SND_SNDCAP1LEN_FIELD( len ) \
    (u16)( \
    ((u32)(len) << REG_SND_SNDCAP1LEN_LEN_SHIFT))
#endif


#ifdef __cplusplus
} /* extern "C" */
#endif

/* NITRO_HW_ARM7_IOREG_SND_H_ */
#endif
