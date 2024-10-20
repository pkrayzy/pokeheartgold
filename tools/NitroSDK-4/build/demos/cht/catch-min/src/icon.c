/*---------------------------------------------------------------------------*
  Project:  NitroSDK - CHT - demos
  File:     icon.c

  Copyright 2003-2006 Nintendo.  All rights reserved.

  These coded instructions, statements, and computer programs contain
  proprietary information of Nintendo of America Inc. and/or Nintendo
  Company Ltd., and are protected by Federal copyright law.  They may
  not be disclosed to third parties or copied or duplicated in any form,
  in whole or in part, without the prior written consent of Nintendo.

  $Log: icon.c,v $
  Revision 1.3  2006/01/18 02:11:20  kitase_hirotake
  do-indent

  Revision 1.2  2005/07/14 23:39:12  kitase_hirotake
  Copyright����

  Revision 1.1  2005/07/14 01:34:48  kitase_hirotake
  Initial Release

  Revision 1.1  2004/12/22 02:42:43  terui
  Initial upload

  $NoKeywords: $
 *---------------------------------------------------------------------------*/

#include    "icon.h"

/*---------------------------------------------------------------------------*
    Character data
 *---------------------------------------------------------------------------*/
const u32 icons_character[8 * 40] = {
    0xcccccccc, 0x2222222c, 0xcccccccc, 0x1111111c,     // 0000h
    0x111ccc1c, 0x111c2c1c, 0x111ccc1c, 0x1111c11c,
    0xcccccccc, 0xc2222222, 0xcccccccc, 0xc1111111,     // 0001h
    0xc1551111, 0xc1551111, 0xc1551551, 0xc1551551,
    0x5511c11c, 0x5511c11c, 0x5511c11c, 0x5511c11c,     // 0002h
    0x1111111c, 0xcccccccc, 0x2222222c, 0xcccccccc,
    0xc1551551, 0xc1551551, 0xc1551551, 0xc1551551,     // 0003h
    0xc1111111, 0xcccccccc, 0xc2222222, 0xcccccccc,
    0xcccccccc, 0x3333333c, 0xcccccccc, 0x1111111c,     // 0004h
    0x111ccc1c, 0x111c3c1c, 0x111ccc1c, 0x1111c11c,
    0xcccccccc, 0xc3333333, 0xcccccccc, 0xc1111111,     // 0005h
    0xc1551111, 0xc1551111, 0xc1551551, 0xc1551551,
    0xcc11c11c, 0xcc11c11c, 0xcc11c11c, 0xcc11c11c,     // 0006h
    0x1111111c, 0xcccccccc, 0x3333333c, 0xcccccccc,
    0xc1551551, 0xc1551551, 0xc1551551, 0xc1551551,     // 0007h
    0xc1111111, 0xcccccccc, 0xc3333333, 0xcccccccc,
    0xcccccccc, 0x4444444c, 0xcccccccc, 0x1111111c,     // 0008h
    0x111ccc1c, 0x111c4c1c, 0x111ccc1c, 0x1111c11c,
    0xcccccccc, 0xc4444444, 0xcccccccc, 0xc1111111,     // 0009h
    0xc1551111, 0xc1551111, 0xc1551cc1, 0xc1551cc1,
    0xcc11c11c, 0xcc11c11c, 0xcc11c11c, 0xcc11c11c,     // 000ah
    0x1111111c, 0xcccccccc, 0x4444444c, 0xcccccccc,
    0xc1551cc1, 0xc1551cc1, 0xc1551cc1, 0xc1551cc1,     // 000bh
    0xc1111111, 0xcccccccc, 0xc4444444, 0xcccccccc,
    0xcccccccc, 0x4444444c, 0xcccccccc, 0x1111111c,     // 000ch
    0x111ccc1c, 0x111c4c1c, 0x111ccc1c, 0x1111c11c,
    0xcccccccc, 0xc4444444, 0xcccccccc, 0xc1111111,     // 000dh
    0xc1cc1111, 0xc1cc1111, 0xc1cc1cc1, 0xc1cc1cc1,
    0xcc11c11c, 0xcc11c11c, 0xcc11c11c, 0xcc11c11c,     // 000eh
    0x1111111c, 0xcccccccc, 0x4444444c, 0xcccccccc,
    0xc1cc1cc1, 0xc1cc1cc1, 0xc1cc1cc1, 0xc1cc1cc1,     // 000fh
    0xc1111111, 0xcccccccc, 0xc4444444, 0xcccccccc,
    0xcccccccc, 0x6666666c, 0xcccccccc, 0xcccccccc,     // 0010h
    0xcccaaacc, 0xcccacacc, 0xcccaaacc, 0xccccaccc,
    0xcccccccc, 0xc6666666, 0xcccccccc, 0xcccccccc,     // 0011h
    0xccbbcccc, 0xccbbcccc, 0xccbbcccc, 0xccbbcbbc,
    0xccccaccc, 0xccccaccc, 0xbbccaccc, 0xbbccaccc,     // 0012h
    0xcccccccc, 0xcccccccc, 0x6666666c, 0xcccccccc,
    0xccbbcbbc, 0xccbbcbbc, 0xccbbcbbc, 0xccbbcbbc,     // 0013h
    0xcccccccc, 0xcccccccc, 0xc6666666, 0xcccccccc,
    0xcccccccc, 0x7777777c, 0xcccccccc, 0xcccccccc,     // 0014h
    0xcccaaacc, 0xcccacacc, 0xcccaaacc, 0xccccaccc,
    0xcccccccc, 0xc7777777, 0xcccccccc, 0xcccccccc,     // 0015h
    0xccbbcccc, 0xccbbcccc, 0xccbbcccc, 0xccbbcbbc,
    0xccccaccc, 0xccccaccc, 0x11ccaccc, 0x11ccaccc,     // 0016h
    0xcccccccc, 0xcccccccc, 0x7777777c, 0xcccccccc,
    0xccbbcbbc, 0xccbbcbbc, 0xccbbcbbc, 0xccbbcbbc,     // 0017h
    0xcccccccc, 0xcccccccc, 0xc7777777, 0xcccccccc,
    0xcccccccc, 0x8888888c, 0xcccccccc, 0xcccccccc,     // 0018h
    0xcccaaacc, 0xcccacacc, 0xcccaaacc, 0xccccaccc,
    0xcccccccc, 0xc8888888, 0xcccccccc, 0xcccccccc,     // 0019h
    0xccbbcccc, 0xccbbcccc, 0xccbbcccc, 0xccbbc11c,
    0xccccaccc, 0xccccaccc, 0x11ccaccc, 0x11ccaccc,     // 001ah
    0xcccccccc, 0xcccccccc, 0x8888888c, 0xcccccccc,
    0xccbbc11c, 0xccbbc11c, 0xccbbc11c, 0xccbbc11c,     // 001bh
    0xcccccccc, 0xcccccccc, 0xc8888888, 0xcccccccc,
    0xcccccccc, 0x8888888c, 0xcccccccc, 0xcccccccc,     // 001ch
    0xcccaaacc, 0xcccacacc, 0xcccaaacc, 0xccccaccc,
    0xcccccccc, 0xc8888888, 0xcccccccc, 0xcccccccc,     // 001dh
    0xcc11cccc, 0xcc11cccc, 0xcc11cccc, 0xcc11c11c,
    0xccccaccc, 0xccccaccc, 0x11ccaccc, 0x11ccaccc,     // 001eh
    0xcccccccc, 0xcccccccc, 0x8888888c, 0xcccccccc,
    0xcc11c11c, 0xcc11c11c, 0xcc11c11c, 0xcc11c11c,     // 001fh
    0xcccccccc, 0xcccccccc, 0xc8888888, 0xcccccccc,
    0xcccccccc, 0x1111119c, 0x9999999c, 0x1111999c,     // 0020h
    0x9999999c, 0x1199999c, 0x9999999c, 0xcccccccc,
    0xcccccccc, 0xc9111111, 0xc9999999, 0xc9991111,     // 0021h
    0xc9999999, 0xc9999911, 0xc9999999, 0xcccccccc,
    0x1111111c, 0xccc1111c, 0xccc1111c, 0xccc1111c,     // 0022h
    0x11111c1c, 0xccc1cccc, 0xccc11c1c, 0xcccccccc,
    0xc1111111, 0xc1111ccc, 0xc1111ccc, 0xc1111ccc,     // 0023h
    0xc1c11111, 0xcc1c1ccc, 0xc1c11ccc, 0xcccccccc,
    0xcccccccc, 0xdddddddc, 0xccccccdc, 0xeeeeecdc,     // 0024h
    0xeeeeecdc, 0xeceeecdc, 0xeceeecdc, 0xeeeeecdc,
    0xcccccccc, 0xcddddddd, 0xcdcccccc, 0xcdceeeee,     // 0025h
    0xcdceeeee, 0xcdceeece, 0xcdceeece, 0xcdceeeee,
    0xeeeeecdc, 0xeeceecdc, 0xcceeecdc, 0xeeeeecdc,     // 0026h
    0xeeeeecdc, 0xccccccdc, 0xdddddddc, 0xcccccccc,
    0xcdceeeee, 0xcdceecee, 0xcdceeecc, 0xcdceeeee,     // 0027h
    0xcdceeeee, 0xcdcccccc, 0xcddddddd, 0xcccccccc
};

/*---------------------------------------------------------------------------*
    Palette data
 *---------------------------------------------------------------------------*/
const u32 icons_palette[8 * 1] = {
    0x7fff7fe0, 0x02ff397f, 0x739c26c7, 0x1e7f185b,     // palette for icons
    0x318c0267, 0x18c65ad6, 0x7fff0000, 0x000002df
};


/*---------------------------------------------------------------------------*
  End of file
 *---------------------------------------------------------------------------*/
