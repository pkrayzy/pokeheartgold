/*---------------------------------------------------------------------------*
  Project:  NitroSDK - IO Register List - 
  File:     nitro/hw/ARM9/ioreg_GXS.h

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
#ifndef NITRO_HW_ARM9_IOREG_GXS_H_
#define NITRO_HW_ARM9_IOREG_GXS_H_

#ifndef SDK_ASM
#include <nitro/types.h>
#include <nitro/hw/ARM9/mmap_global.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Definition of Register offsets, addresses and variables.
 */


/* DB_DISPCNT */

#define REG_DB_DISPCNT_OFFSET                              0x1000
#define REG_DB_DISPCNT_ADDR                                (HW_REG_BASE + REG_DB_DISPCNT_OFFSET)
#define reg_GXS_DB_DISPCNT                                 (*( REGType32v *) REG_DB_DISPCNT_ADDR)

/* DB_MASTER_BRIGHT */

#define REG_DB_MASTER_BRIGHT_OFFSET                        0x106c
#define REG_DB_MASTER_BRIGHT_ADDR                          (HW_REG_BASE + REG_DB_MASTER_BRIGHT_OFFSET)
#define reg_GXS_DB_MASTER_BRIGHT                           (*( REGType16v *) REG_DB_MASTER_BRIGHT_ADDR)


/*
 * Definitions of Register fields
 */


/* DB_DISPCNT */

#define REG_GXS_DB_DISPCNT_O_SHIFT                         31
#define REG_GXS_DB_DISPCNT_O_SIZE                          1
#define REG_GXS_DB_DISPCNT_O_MASK                          0x80000000

#define REG_GXS_DB_DISPCNT_BG_SHIFT                        30
#define REG_GXS_DB_DISPCNT_BG_SIZE                         1
#define REG_GXS_DB_DISPCNT_BG_MASK                         0x40000000

#define REG_GXS_DB_DISPCNT_OH_SHIFT                        23
#define REG_GXS_DB_DISPCNT_OH_SIZE                         1
#define REG_GXS_DB_DISPCNT_OH_MASK                         0x00800000

#define REG_GXS_DB_DISPCNT_EXOBJ_SHIFT                     20
#define REG_GXS_DB_DISPCNT_EXOBJ_SIZE                      2
#define REG_GXS_DB_DISPCNT_EXOBJ_MASK                      0x00300000

#define REG_GXS_DB_DISPCNT_MODE_SHIFT                      16
#define REG_GXS_DB_DISPCNT_MODE_SIZE                       1
#define REG_GXS_DB_DISPCNT_MODE_MASK                       0x00010000

#define REG_GXS_DB_DISPCNT_OW_SHIFT                        15
#define REG_GXS_DB_DISPCNT_OW_SIZE                         1
#define REG_GXS_DB_DISPCNT_OW_MASK                         0x00008000

#define REG_GXS_DB_DISPCNT_W1_SHIFT                        14
#define REG_GXS_DB_DISPCNT_W1_SIZE                         1
#define REG_GXS_DB_DISPCNT_W1_MASK                         0x00004000

#define REG_GXS_DB_DISPCNT_W0_SHIFT                        13
#define REG_GXS_DB_DISPCNT_W0_SIZE                         1
#define REG_GXS_DB_DISPCNT_W0_MASK                         0x00002000

#define REG_GXS_DB_DISPCNT_DISPLAY_SHIFT                   8
#define REG_GXS_DB_DISPCNT_DISPLAY_SIZE                    5
#define REG_GXS_DB_DISPCNT_DISPLAY_MASK                    0x00001f00

#define REG_GXS_DB_DISPCNT_BLANK_SHIFT                     7
#define REG_GXS_DB_DISPCNT_BLANK_SIZE                      1
#define REG_GXS_DB_DISPCNT_BLANK_MASK                      0x00000080

#define REG_GXS_DB_DISPCNT_OBJMAP_SHIFT                    4
#define REG_GXS_DB_DISPCNT_OBJMAP_SIZE                     3
#define REG_GXS_DB_DISPCNT_OBJMAP_MASK                     0x00000070

#define REG_GXS_DB_DISPCNT_BGMODE_SHIFT                    0
#define REG_GXS_DB_DISPCNT_BGMODE_SIZE                     3
#define REG_GXS_DB_DISPCNT_BGMODE_MASK                     0x00000007

#define REG_GXS_DB_DISPCNT_OBJMAP_CH_SHIFT                 4
#define REG_GXS_DB_DISPCNT_OBJMAP_CH_SIZE                  1
#define REG_GXS_DB_DISPCNT_OBJMAP_CH_MASK                  0x00000010

#define REG_GXS_DB_DISPCNT_OBJMAP_BM_SHIFT                 5
#define REG_GXS_DB_DISPCNT_OBJMAP_BM_SIZE                  2
#define REG_GXS_DB_DISPCNT_OBJMAP_BM_MASK                  0x00000060

#define REG_GXS_DB_DISPCNT_EXOBJ_CH_SHIFT                  20
#define REG_GXS_DB_DISPCNT_EXOBJ_CH_SIZE                   2
#define REG_GXS_DB_DISPCNT_EXOBJ_CH_MASK                   0x00300000

#ifndef SDK_ASM
#define REG_GXS_DB_DISPCNT_FIELD( o, bg, oh, exobj, mode, ow, w1, w0, display, blank, objmap, bgmode, objmap_ch, objmap_bm, exobj_ch ) \
    (u32)( \
    ((u32)(o) << REG_GXS_DB_DISPCNT_O_SHIFT) | \
    ((u32)(bg) << REG_GXS_DB_DISPCNT_BG_SHIFT) | \
    ((u32)(oh) << REG_GXS_DB_DISPCNT_OH_SHIFT) | \
    ((u32)(exobj) << REG_GXS_DB_DISPCNT_EXOBJ_SHIFT) | \
    ((u32)(mode) << REG_GXS_DB_DISPCNT_MODE_SHIFT) | \
    ((u32)(ow) << REG_GXS_DB_DISPCNT_OW_SHIFT) | \
    ((u32)(w1) << REG_GXS_DB_DISPCNT_W1_SHIFT) | \
    ((u32)(w0) << REG_GXS_DB_DISPCNT_W0_SHIFT) | \
    ((u32)(display) << REG_GXS_DB_DISPCNT_DISPLAY_SHIFT) | \
    ((u32)(blank) << REG_GXS_DB_DISPCNT_BLANK_SHIFT) | \
    ((u32)(objmap) << REG_GXS_DB_DISPCNT_OBJMAP_SHIFT) | \
    ((u32)(bgmode) << REG_GXS_DB_DISPCNT_BGMODE_SHIFT) | \
    ((u32)(objmap_ch) << REG_GXS_DB_DISPCNT_OBJMAP_CH_SHIFT) | \
    ((u32)(objmap_bm) << REG_GXS_DB_DISPCNT_OBJMAP_BM_SHIFT) | \
    ((u32)(exobj_ch) << REG_GXS_DB_DISPCNT_EXOBJ_CH_SHIFT))
#endif


/* DB_MASTER_BRIGHT */

#define REG_GXS_DB_MASTER_BRIGHT_E_MOD_SHIFT               14
#define REG_GXS_DB_MASTER_BRIGHT_E_MOD_SIZE                2
#define REG_GXS_DB_MASTER_BRIGHT_E_MOD_MASK                0xc000

#define REG_GXS_DB_MASTER_BRIGHT_E_VALUE_SHIFT             0
#define REG_GXS_DB_MASTER_BRIGHT_E_VALUE_SIZE              5
#define REG_GXS_DB_MASTER_BRIGHT_E_VALUE_MASK              0x001f

#ifndef SDK_ASM
#define REG_GXS_DB_MASTER_BRIGHT_FIELD( e_mod, e_value ) \
    (u16)( \
    ((u32)(e_mod) << REG_GXS_DB_MASTER_BRIGHT_E_MOD_SHIFT) | \
    ((u32)(e_value) << REG_GXS_DB_MASTER_BRIGHT_E_VALUE_SHIFT))
#endif


#ifdef __cplusplus
} /* extern "C" */
#endif

/* NITRO_HW_ARM9_IOREG_GXS_H_ */
#endif
