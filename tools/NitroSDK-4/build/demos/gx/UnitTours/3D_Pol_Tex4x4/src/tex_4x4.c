/*---------------------------------------------------------------------------*
  Project:  NitroSDK - GX - demos - UnitTours/3D_Pol_Tex4x4
  File:     tex_4x4.c

  Copyright 2003-2005 Nintendo.  All rights reserved.

  These coded instructions, statements, and computer programs contain
  proprietary information of Nintendo of America Inc. and/or Nintendo
  Company Ltd., and are protected by Federal copyright law.  They may
  not be disclosed to third parties or copied or duplicated in any form,
  in whole or in part, without the prior written consent of Nintendo.

  $Log: tex_4x4.c,v $
  Revision 1.9  2005/02/28 05:26:15  yosizaki
  do-indent.

  Revision 1.8  2004/04/07 01:23:08  yada
  fix header comment

  Revision 1.7  2004/04/06 12:48:07  yada
  fix header comment

  Revision 1.6  2004/02/05 07:09:02  yasu
  change SDK prefix iris -> nitro

  Revision 1.5  2004/01/07 09:38:05  nishida_kenji
  revises comments

  $NoKeywords: $
 *---------------------------------------------------------------------------*/
#include "tex_4x4.h"

const u32 tex_4x4_64x64[256] = {
    0x80AAFD55, 0xF85C5F55, 0x80AA5655, 0x28AAFA5F,
    0xA8AA5555, 0x80A8AA6A, 0xA0FAFF7F, 0x785E5755,
    0xC0685E55, 0x00A06A7A, 0x0B2DB5D5, 0x022BBDD5,
    0x00022501, 0x62420A96, 0x6A7A7FE0, 0x707AF85C,
    0x80A0F85E, 0x02AAFF55, 0x00EA5F55, 0x00AAFD55,
    0xA0FA5F55, 0xA8575555, 0x00FA5555, 0xE0FA5755,
    0x2F259555, 0x00A8FF55, 0x000A2FBD, 0x40405155,
    0x3F3F9F57, 0x56565458, 0x00008070, 0x00A8FE5F,
    0xF8DE575F, 0x0B252D2D, 0x5C000000, 0xD5000080,
    0x5500007E, 0x25028055, 0x00A0F87F, 0x00A85F55,
    0x00AAF555, 0x08AAFFB5, 0x280B092D, 0x60685A56,
    0x3F1F1715, 0x7EF88000, 0xF87E57FF, 0x5FBF8200,
    0x55020000, 0xD5E88000, 0x57575E78, 0xFF555515,
    0x5555B50F, 0xD52D0A00, 0x2D2F0200, 0x5C575555,
    0xD800ABD7, 0xDCA00000, 0x050B0000, 0x78C0A0A8,
    0xA626361F, 0x5C7CF8FA, 0x95172A00, 0x88A8685A,
    0x0000AA55, 0x0000AA95, 0x203EDD57, 0x0ABC7755,
    0x000ABD55, 0x80F85755, 0x5C95350B, 0xBDAD0B00,
    0x020303B5, 0xA8008056, 0x0A00000D, 0x50586860,
    0x57566AA8, 0xF8E87A50, 0x58EFAB2A, 0x555556E8,
    0x82AAFF55, 0x00AAFF55, 0x00AAFF55, 0x80A89619,
    0x3D090302, 0x00807070, 0x0000FA57, 0x0000022D,
    0x5EE08000, 0x555FFAA8, 0x55BD0A00, 0x555EE800,
    0x5557E8A0, 0xFA7E57A0, 0x2F55F5C0, 0x407A8055,
    0x00E05E55, 0x00AB5555, 0x00BA5555, 0x0000EB55,
    0x00B857F5, 0x00002D09, 0x0014AC98, 0xF8F87878,
    0x80E0F85C, 0xC87A5F55, 0xFE806068, 0x5E5E78E8,
    0x03AB5577, 0x2CAFA5D5, 0xA0FAA9A9, 0xA80A5A5A,
    0x547A7A00, 0x5555F580, 0x5555550A, 0x55D5AF02,
    0x5555AA00, 0x5555BE00, 0x2D0B0800, 0x0000806A,
    0x00008255, 0x00E0F056, 0xF87A5E57, 0x008BFF7E,
    0x0A295555, 0xE078EA5D, 0x60AAAA6A, 0xAA60785E,
    0x0000AA5F, 0x00A8FF55, 0x00AAFF55, 0x0000FE5D,
    0x00EA5555, 0xE0ABD555, 0x2FABEBFD, 0x7856DE02,
    0x55FDAA00, 0xA560E088, 0x7002E078, 0x2500AAFF,
    0x5C000AAA, 0x552E0000, 0x0D0000A0, 0x60FAFF55,
    0x6AA4A9A8, 0xAAF85600, 0xAAFE5580, 0x6AF702D8,
    0xB5BD2F03, 0x01A30057, 0x8080E05A, 0x0000AA75,
    0xA000AA55, 0xAA002AB5, 0x0000E078, 0x78EA55D5,
    0x5E7E5C5C, 0x35155555, 0x0000020D, 0x5E5EEAE0,
    0x09804040, 0x00AAABF7, 0x0000EA57, 0xA0E87A5F,
    0x78787E57, 0x7F5F5702, 0x5555D50A, 0x55555F00,
    0x575F5500, 0x55552D00, 0x250F0000, 0xA0000070,
    0x80000055, 0x00000009, 0x80AA5760, 0x5C705F5E,
    0x000A0925, 0x00000000, 0x00000000, 0xE0E06078,
    0x58500062, 0x7060787A, 0xE8E8F878, 0x3F3F7F7F,
    0x00F0F555, 0x2E0B00AD, 0x60F8E00A, 0x570000E0,
    0x55C000FF, 0x5557AA02, 0xD57B7870, 0x0A575555,
    0x01010101, 0x00000000, 0x00000000, 0x0000E068,
    0x00785F5F, 0x805A7F7F, 0x605E5A6A, 0x78786868,
    0x2F575F0B, 0x0B252B00, 0xA0E8785C, 0x00FE5555,
    0xE0AF5555, 0x5EE00AFF, 0x5555E00A, 0x55555780,
    0xD5FE8002, 0xFB55AA00, 0xFF5D0A00, 0x7F55FA00,
    0xFF555E78, 0x00552F00, 0xBAB500E0, 0x78E000A0,
    0xFF57A800, 0x55FD0200, 0x555F8000, 0xB555FF00,
    0x02F55F60, 0x00A05555, 0x0000F555, 0x00800A55,
    0x55BF023D, 0x55EBAA00, 0x55FFAA00, 0x557EFE00,
    0x55FFAA00, 0x5FEA0000, 0x555FFEA8, 0x557DAA02,
    0x555557E0, 0xA0025F5E, 0xE0805F5F, 0x55FFB50D,
    0x557AAA00, 0x5555EA80, 0x55557F00, 0x557F6900,
    0x55555454, 0x95AA0000, 0x56A82000, 0x6EE8A880,
    0x78E8E080, 0x5FFEEAE2, 0x5E78E8A0, 0x7EFAE8A0,
    0x7E7AE8E8, 0x5F787860, 0x5757DFF8, 0xA8605050,
    0x5E78E8E8, 0x7E7A7A78, 0x7878F8F8, 0x090B0B0B,
};

const u16 index_4x4index[256] = {
    0xC0E3, 0xC0E4, 0xC0E5, 0xC0E6,
    0xC0E7, 0xC0E8, 0xC0E9, 0xC0EA,
    0xC0EB, 0xC0EC, 0xC0ED, 0xC0EE,
    0xC0EF, 0xC0F0, 0xC0F1, 0xC0F2,
    0xC0D3, 0xC0D4, 0xC0D5, 0xC0D6,
    0xC0D7, 0xC0D8, 0xC0D9, 0xC0DA,
    0xC0DB, 0xC0DC, 0xC0DD, 0xC0DE,
    0xC0DF, 0xC0E0, 0xC0E1, 0xC0E2,
    0xC0C3, 0xC0C4, 0xC0C5, 0xC0C6,
    0xC0C7, 0xC0C8, 0xC0C9, 0xC0CA,
    0xC0CB, 0xC0CC, 0xC0CD, 0xC0CE,
    0xC0CF, 0xC0D0, 0xC0D1, 0xC0D2,
    0xC0B3, 0xC0B4, 0xC0B5, 0xC0B6,
    0xC0B7, 0xC0B8, 0xC0B9, 0xC0BA,
    0xC0BB, 0xC0BC, 0xC0BD, 0xC0BE,
    0xC0BF, 0xC0C0, 0xC0C1, 0xC0C2,
    0xC0A3, 0xC0A4, 0xC0A5, 0xC0A6,
    0xC0A7, 0xC0A8, 0xC0A9, 0xC0AA,
    0xC0AB, 0xC0AC, 0xC0AD, 0xC0AE,
    0xC0AF, 0xC0B0, 0xC0B1, 0xC0B2,
    0xC094, 0xC095, 0xC096, 0xC097,
    0xC098, 0xC099, 0xC09A, 0xC09B,
    0xC09C, 0xC09D, 0xC09E, 0xC09F,
    0xC0A0, 0xC0A1, 0xC0A1, 0xC0A2,
    0xC084, 0xC085, 0xC086, 0xC087,
    0xC088, 0xC089, 0xC08A, 0xC08B,
    0xC08C, 0xC08D, 0xC08E, 0xC08F,
    0xC090, 0xC091, 0xC092, 0xC093,
    0xC074, 0xC075, 0xC076, 0xC077,
    0xC078, 0xC079, 0xC07A, 0xC07B,
    0xC07C, 0xC07D, 0xC07E, 0xC07F,
    0xC080, 0xC081, 0xC082, 0xC083,
    0xC065, 0xC066, 0xC067, 0xC068,
    0xC065, 0xC069, 0xC06A, 0xC06B,
    0xC06C, 0xC06D, 0xC06E, 0xC06F,
    0xC070, 0xC071, 0xC072, 0xC073,
    0xC03A, 0xC056, 0xC057, 0xC058,
    0xC059, 0xC05A, 0xC05B, 0xC05C,
    0xC05D, 0xC05E, 0xC05F, 0xC060,
    0xC061, 0xC062, 0xC063, 0xC064,
    0xC048, 0xC02E, 0xC03B, 0xC049,
    0xC04A, 0xC04B, 0xC04C, 0xC04D,
    0xC04E, 0xC04F, 0xC050, 0xC051,
    0xC052, 0xC053, 0xC054, 0xC055,
    0xC03A, 0xC02D, 0xC02D, 0xC03B,
    0xC03C, 0xC03D, 0xC03E, 0xC03F,
    0xC040, 0xC041, 0xC042, 0xC043,
    0xC044, 0xC045, 0xC046, 0xC047,
    0xC02C, 0xC02D, 0xC02D, 0xC02E,
    0xC02F, 0xC013, 0xC030, 0xC031,
    0xC032, 0xC033, 0xC034, 0xC035,
    0xC036, 0xC037, 0xC038, 0xC039,
    0xC01F, 0xC020, 0xC020, 0xC01F,
    0xC021, 0xC022, 0xC023, 0xC013,
    0xC024, 0xC025, 0xC026, 0xC027,
    0xC028, 0xC029, 0xC02A, 0xC02B,
    0xC010, 0xC011, 0xC011, 0xC012,
    0xC013, 0xC014, 0xC015, 0xC016,
    0xC017, 0xC018, 0xC019, 0xC01A,
    0xC01B, 0xC01C, 0xC01D, 0xC01E,
    0xC000, 0xC001, 0xC002, 0xC003,
    0xC004, 0xC005, 0xC006, 0xC007,
    0xC008, 0xC009, 0xC00A, 0xC00B,
    0xC00C, 0xC00D, 0xC00E, 0xC00F,
};

const u16 pal_4x4plett[243 * 2] = {
    0x7FFF, 0x4BFF,
    0x4FFF, 0x47FF,
    0x4FFF, 0x4BDF,
    0x4BDF, 0x479F,
    0x479F, 0x3F5F,
    0x437F, 0x3B1F,
    0x3B3F, 0x2EDF,
    0x2EFF, 0x269F,
    0x26BF, 0x1E5F,
    0x1E5F, 0x1A1F,
    0x1A1F, 0x15DF,
    0x19BF, 0x1D9F,
    0x1D7F, 0x153F,
    0x193F, 0x14DF,
    0x14BF, 0x185F,
    0x243F, 0x183F,
    0x67FF, 0x5BFF,
    0x73FF, 0x5BFF,
    0x6FFF, 0x57DF,
    0x6FFF, 0x4F9F,
    0x5FFF, 0x475F,
    0x63FF, 0x3F3F,
    0x63FF, 0x371F,
    0x5FFF, 0x2ADF,
    0x2EDF, 0x223F,
    0x269F, 0x21DF,
    0x5B5F, 0x221F,
    0x531F, 0x219F,
    0x56FF, 0x18FF,
    0x4A7F, 0x189F,
    0x45DE, 0x2C5E,
    0x7FFF, 0x63FF,
    0x7FFF, 0x6BFF,
    0x7BFF, 0x5BDF,
    0x6BFF, 0x53BF,
    0x77FF, 0x63FF,
    0x77FF, 0x269F,
    0x73DF, 0x225F,
    0x73DF, 0x1DFF,
    0x6F9F, 0x219F,
    0x675F, 0x213F,
    0x56DF, 0x1CFF,
    0x5ABF, 0x1CBE,
    0x5A9E, 0x2C5E,
    0x7FFF, 0x7BFF,
    0x7FFF, 0x7FFF,
    0x7FFF, 0x6FFF,
    0x7BFF, 0x5FDF,
    0x4F9F, 0x475F,
    0x433F, 0x3AFF,
    0x473F, 0x329F,
    0x73DF, 0x265F,
    0x73BF, 0x52BF,
    0x675F, 0x4A7F,
    0x737F, 0x4A3F,
    0x735F, 0x1CDF,
    0x6ADE, 0x207E,
    0x6A9E, 0x2C3E,
    0x7FFF, 0x77FF,
    0x7BFF, 0x6FFF,
    0x6BFF, 0x63DF,
    0x5FDF, 0x537F,
    0x4F7F, 0x471F,
    0x4F7F, 0x3ADF,
    0x5FBF, 0x329F,
    0x77BF, 0x4B1F,
    0x739F, 0x673F,
    0x6F3F, 0x529F,
    0x733F, 0x4E3F,
    0x6ADE, 0x4A1E,
    0x5A3E, 0x49DE,
    0x627D, 0x499D,
    0x7BFF, 0x73FF,
    0x77FF, 0x67DF,
    0x67FF, 0x5BBF,
    0x67DF, 0x4F7F,
    0x77FF, 0x473F,
    0x73FF, 0x3EFF,
    0x6FBF, 0x3A9F,
    0x6B7F, 0x2E3F,
    0x777F, 0x2DFF,
    0x737F, 0x35BF,
    0x6B1E, 0x319E,
    0x6ADE, 0x399E,
    0x72DE, 0x667D,
    0x5E5E, 0x4D9D,
    0x73FF, 0x63DF,
    0x6FFF, 0x5FBF,
    0x63FF, 0x5FBF,
    0x77FF, 0x5BBF,
    0x7BFF, 0x6FDF,
    0x77FF, 0x6B9F,
    0x73DF, 0x677F,
    0x77DF, 0x5F3F,
    0x77BF, 0x5AFF,
    0x737F, 0x2D7F,
    0x6F5F, 0x317E,
    0x2D3E, 0x28DE,
    0x4A3E, 0x289E,
    0x76DD, 0x2C7D,
    0x76BD, 0x4D7C,
    0x77FF, 0x5F9F,
    0x7BFF, 0x5FBF,
    0x7BFF, 0x63BF,
    0x73FF, 0x5F9F,
    0x6BDF, 0x5B7F,
    0x73DF, 0x637F,
    0x73BF, 0x635F,
    0x779F, 0x5F3F,
    0x779F, 0x673F,
    0x735F, 0x5EBE,
    0x773E, 0x423E,
    0x771E, 0x45DE,
    0x72BD, 0x287E,
    0x729D, 0x38FD,
    0x729D, 0x65FD,
    0x6BFF, 0x5F9F,
    0x6BFF, 0x5B9F,
    0x6BDF, 0x5F9F,
    0x77FF, 0x5B9F,
    0x7BFF, 0x5F9F,
    0x73DF, 0x5F7F,
    0x73BF, 0x5B5F,
    0x77BF, 0x6B5F,
    0x739F, 0x631F,
    0x6B3F, 0x529F,
    0x671F, 0x4A3E,
    0x4E3E, 0x45DE,
    0x5A5E, 0x51FD,
    0x5E5D, 0x59FD,
    0x5E1D, 0x59BD,
    0x5DDD, 0x557C,
    0x77FF, 0x331F,
    0x7BFF, 0x329F,
    0x77FF, 0x327F,
    0x77FF, 0x325F,
    0x6BFF, 0x36BF,
    0x77DF, 0x4F7F,
    0x77BF, 0x6F9F,
    0x739F, 0x56DF,
    0x52DF, 0x423F,
    0x4E9F, 0x423E,
    0x425F, 0x461E,
    0x4A3E, 0x45DE,
    0x4DFD, 0x45BD,
    0x51FD, 0x499D,
    0x59DD, 0x519D,
    0x59BC, 0x597C,
    0x2A5F, 0x25FF,
    0x2E5F, 0x25FF,
    0x2E5F, 0x29FF,
    0x2E3F, 0x2DFF,
    0x6FDF, 0x329F,
    0x77BF, 0x3EDF,
    0x779F, 0x295F,
    0x6F7F, 0x299F,
    0x6F5F, 0x4A5E,
    0x6F1E, 0x461E,
    0x6ADE, 0x4E5E,
    0x6EDD, 0x521D,
    0x5E1D, 0x45BD,
    0x51BD, 0x4D5C,
    0x599C, 0x555B,
    0x21DF, 0x157F,
    0x25DF, 0x197F,
    0x29FF, 0x219F,
    0x3B1F, 0x217F,
    0x77BF, 0x1D5F,
    0x6B9F, 0x211F,
    0x3A7F, 0x253F,
    0x635F, 0x3A5F,
    0x773E, 0x631E,
    0x771E, 0x5ABE,
    0x6EFE, 0x5EBE,
    0x72BD, 0x665D,
    0x6A3D, 0x5DFD,
    0x5E1D, 0x5DBC,
    0x59FD, 0x515C,
    0x65DD, 0x553B,
    0x67DF, 0x19DF,
    0x77FF, 0x19DF,
    0x4F9F, 0x195F,
    0x219F, 0x193F,
    0x367F, 0x1D3F,
    0x46FF, 0x1D1F,
    0x6F5F, 0x3A7F,
    0x675F, 0x6F1E,
    0x771E, 0x66BE,
    0x62FE, 0x3DDE,
    0x76DD, 0x5A9D,
    0x769D, 0x6E7D,
    0x6E7D, 0x6E3C,
    0x6E7D, 0x65DC,
    0x65FC, 0x61BC,
    0x69FC, 0x69BC,
    0x6BFF, 0x639F,
    0x73DF, 0x639F,
    0x77DF, 0x5B9F,
    0x779F, 0x3EBF,
    0x737F, 0x631F,
    0x735F, 0x5EDE,
    0x735E, 0x4E5E,
    0x6EFE, 0x4A1E,
    0x6ADE, 0x521D,
    0x6E9D, 0x5E3D,
    0x769D, 0x6A5D,
    0x767D, 0x765C,
    0x767D, 0x763C,
    0x763C, 0x6A1C,
    0x6A1C, 0x6DDC,
    0x75FB, 0x6DBC,
    0x67BF, 0x4F1F,
    0x6FBF, 0x3E9F,
    0x6F9F, 0x3E5F,
    0x5F3F, 0x3A3F,
    0x5F1F, 0x35FF,
    0x4A7F, 0x39DE,
    0x461E, 0x39BE,
    0x41FE, 0x3D9E,
    0x51FD, 0x419D,
    0x5A3D, 0x519D,
    0x6E5D, 0x559C,
    0x765C, 0x763C,
    0x7A5D, 0x761C,
    0x765C, 0x761C,
    0x761C, 0x69DB,
    0x79FB, 0x617B,
    0x533F, 0x31FF,
    0x3A9F, 0x2DFF,
    0x321F, 0x31DF,
    0x35FF, 0x35BE,
    0x35DF, 0x35BE,
    0x39DE, 0x3D9D,
    0x39BE, 0x417D,
    0x3D9E, 0x417D,
    0x457D, 0x495C,
    0x4D7C, 0x513B,
    0x61DC, 0x555B,
    0x723C, 0x65BC,
    0x761C, 0x71FC,
    0x7A3C, 0x79FC,
    0x765C, 0x65BB,
    0x659B, 0x5D3B,
};
