/*---------------------------------------------------------------------------*
  Project:  NitroSDK - GX - demos - UnitTours/3D_Pol_Simple3
  File:     main.c

  Copyright 2003-2006 Nintendo.  All rights reserved.

  These coded instructions, statements, and computer programs contain
  proprietary information of Nintendo of America Inc. and/or Nintendo
  Company Ltd., and are protected by Federal copyright law.  They may
  not be disclosed to third parties or copied or duplicated in any form,
  in whole or in part, without the prior written consent of Nintendo.

  $Log: main.c,v $
  Revision 1.28  2006/01/18 02:11:22  kitase_hirotake
  do-indent

  Revision 1.27  2005/11/21 10:36:35  kitase_hirotake
  SVC_WaitVBlankIntr を OS_WaitVBlankIntr に変更

  Revision 1.26  2005/02/28 05:26:15  yosizaki
  do-indent.

  Revision 1.25  2004/11/02 09:37:33  takano_makoto
  fix typo.

  Revision 1.24  2004/05/24 10:33:15  takano_makoto
  autotestコードの修正

  Revision 1.23  2004/04/07 01:23:27  yada
  fix header comment

  Revision 1.22  2004/04/06 12:48:07  yada
  fix header comment

  Revision 1.21  2004/02/24 05:25:21  yasu
  Use OS_EnableIrqMask instead of OS_SetIrqMask

  Revision 1.20  2004/02/09 01:44:47  kitani_toshikazu
  Add default setting codes for auto testing.

  Revision 1.19  2004/02/05 07:09:02  yasu
  change SDK prefix iris -> nitro

  Revision 1.18  2004/02/05 01:15:24  kitani_toshikazu
  Added codes for autoTesting.

  Revision 1.17  2004/01/22 02:03:25  nishida_kenji
  swap G3_SwapBuffers and SVC_WaitVBlankIntr

  Revision 1.16  2004/01/19 02:15:56  nishida_kenji
  fix comments

  Revision 1.15  2004/01/18 09:20:26  nishida_kenji
  adds DEMOStartDisplay

  Revision 1.14  2004/01/18 08:19:33  nishida_kenji
  change the place of SVC_WaitVBlankIntr

  Revision 1.13  2004/01/09 12:02:34  nishida_kenji
  use OS_SetIrqCheckFlag at VBlankIntr()

  Revision 1.12  2004/01/07 09:38:05  nishida_kenji
  revises comments

  Revision 1.11  2004/01/06 12:54:08  nishida_kenji
  revise comments

  Revision 1.10  2003/12/25 11:00:10  nishida_kenji
  converted by GX_APIChangeFrom031212-2.pl

  Revision 1.9  2003/12/25 06:25:02  nishida_kenji
  revise a part of geometry command APIs

  Revision 1.8  2003/12/17 09:00:20  nishida_kenji
  Totally revised APIs.
  build/buildtools/GX_APIChangeFrom031212.pl would help you change your program to some extent.

  $NoKeywords: $
 *---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
// A sample that use GX_VECVTX10(G3_Vtx10):
//
// You can reduce the amount of the data transferred to the FIFO by G3_Vtx10.
// Since it uses a 3D vector in s3.6 format, precision becomes lower than G3_Vtx.
//---------------------------------------------------------------------------

#include <nitro.h>
#include "DEMO.h"

//---------------------------------------------------------------------------
// GX_VECVTX10 takes (x, y, z) in fx32/fx16 format,
// and packs them into a 3D vector in s3.6 format.
//---------------------------------------------------------------------------
VecVtx10 gCubeGeometry[8] = {
    GX_VECVTX10(FX16_ONE, FX16_ONE, FX16_ONE),
    GX_VECVTX10(FX16_ONE, FX16_ONE, -FX16_ONE),
    GX_VECVTX10(FX16_ONE, -FX16_ONE, FX16_ONE),
    GX_VECVTX10(FX16_ONE, -FX16_ONE, -FX16_ONE),
    GX_VECVTX10(-FX16_ONE, FX16_ONE, FX16_ONE),
    GX_VECVTX10(-FX16_ONE, FX16_ONE, -FX16_ONE),
    GX_VECVTX10(-FX16_ONE, -FX16_ONE, FX16_ONE),
    GX_VECVTX10(-FX16_ONE, -FX16_ONE, -FX16_ONE)
};

static void vtx(int idx)
{
    //  use G3_Vtx10(x, y, z) if not packed yet
    G3_Direct1(G3OP_VTX_10, gCubeGeometry[idx]);
}

static void quad(int idx0, int idx1, int idx2, int idx3)
{
    vtx(idx0);
    vtx(idx1);
    vtx(idx2);
    vtx(idx3);
}

void NitroMain(void)
{
    u16     Rotate = 0;                // for rotating cubes(0-65535)
    int     idx = 0;

    //---------------------------------------------------------------------------
    // Initialize:
    // They enable IRQ interrupts, initialize VRAM, and set BG #0 for 3D mode.
    //---------------------------------------------------------------------------
    DEMOInitCommon();
    DEMOInitVRAM();
    DEMOInitDisplay3D();

    DEMOStartDisplay();
    while (1)
    {
        G3X_Reset();
        Rotate += 256;

        {
            VecFx32 Eye = { 0, 0, FX32_ONE };   // Eye position
            VecFx32 at = { 0, 0, 0 };  // Viewpoint
            VecFx32 vUp = { 0, FX32_ONE, 0 };   // Up

            // Matrix mode is changed to GX_MTXMODE_POSITION_VECTOR internally,
            // and the camera matrix is loaded to the current matrix.
            G3_LookAt(&Eye, &vUp, &at, NULL);
        }

        G3_PushMtx();

        {
            fx16    s = FX_SinIdx(Rotate);
            fx16    c = FX_CosIdx(Rotate);

            G3_Translate(0, 0, -5 * FX32_ONE);

            G3_RotX(s, c);
            G3_RotY(s, c);
            G3_RotZ(s, c);

            // The current matrix is Rz * Ry * Rx * Trns * Cam.
        }

        G3_MaterialColorDiffAmb(GX_RGB(31, 31, 31),     // diffuse
                                GX_RGB(16, 16, 16),     // ambient
                                TRUE   // use diffuse as vtx color if TRUE
            );

        G3_MaterialColorSpecEmi(GX_RGB(16, 16, 16),     // specular
                                GX_RGB(0, 0, 0),        // emission
                                FALSE  // use shininess table if TRUE
            );

        G3_PolygonAttr(GX_LIGHTMASK_NONE,       // no lights
                       GX_POLYGONMODE_MODULATE, // modulation mode
                       GX_CULL_BACK,   // cull back
                       0,              // polygon ID(0 - 63)
                       31,             // alpha(0 - 31)
                       0               // OR of GXPolygonAttrMisc's value
            );

        G3_Begin(GX_BEGIN_QUADS);

        {
            quad(2, 0, 4, 6);
            quad(7, 5, 1, 3);
            quad(6, 4, 5, 7);
            quad(3, 1, 0, 2);
            quad(5, 4, 0, 1);
            quad(6, 7, 3, 2);
        }

        G3_End();

        G3_PopMtx(1);

        // swapping the polygon list RAM, the vertex RAM, etc.
        G3_SwapBuffers(GX_SORTMODE_AUTO, GX_BUFFERMODE_W);

#ifdef SDK_AUTOTEST
        GX_SetBankForLCDC(GX_VRAM_LCDC_C);
        EXT_TestSetVRAMForScreenShot(GX_VRAM_LCDC_C);
        EXT_TestScreenShot(100, 0xA152BB4);
        EXT_TestTickCounter();
#endif //SDK_AUTOTEST

        OS_WaitVBlankIntr();           // Waiting the end of VBlank interrupt
    }
}


//---------------------------------------------------------------------------
// VBlank interrupt function:
//
// Interrupt handlers are registered on the interrupt table by OS_SetIRQFunction.
// OS_EnableIrqMask selects IRQ interrupts to enable, and
// OS_EnableIrq enables IRQ interrupts.
// Notice that you have to call 'OS_SetIrqCheckFlag' to check a VBlank interrupt.
//---------------------------------------------------------------------------
void VBlankIntr(void)
{
    OS_SetIrqCheckFlag(OS_IE_V_BLANK); // checking VBlank interrupt
}
