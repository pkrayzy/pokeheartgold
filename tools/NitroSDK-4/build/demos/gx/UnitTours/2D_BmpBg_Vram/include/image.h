/*---------------------------------------------------------------------------*
  Project:  NitroSDK - GX - demos - UnitTours/2D_BmpBg_Vram
  File:     image.h

  Copyright 2003-2005 Nintendo.  All rights reserved.

  These coded instructions, statements, and computer programs contain
  proprietary information of Nintendo of America Inc. and/or Nintendo
  Company Ltd., and are protected by Federal copyright law.  They may
  not be disclosed to third parties or copied or duplicated in any form,
  in whole or in part, without the prior written consent of Nintendo.

  $Log: image.h,v $
  Revision 1.9  2005/02/28 05:26:14  yosizaki
  do-indent.

  Revision 1.8  2004/11/02 09:46:39  takano_makoto
  fix typo.

  Revision 1.7  2004/04/07 01:23:27  yada
  fix header comment

  Revision 1.6  2004/04/06 12:48:07  yada
  fix header comment

  Revision 1.5  2004/02/05 07:09:02  yasu
  change SDK prefix iris -> nitro

  Revision 1.4  2004/01/07 09:38:05  nishida_kenji
  revises comments

  $NoKeywords: $
 *---------------------------------------------------------------------------*/
#ifndef IMAGE_H_
#define IMAGE_H_


/*****************************************************************************/
/*  Data format for VRAM Display mode                                        */
/*                                                                           */
/*   d15 d14 d13 d12 d11 d10 d9  d8  d7  d6  d5  d4  d3  d2  d1  d0          */
/* ������������������������������������������������������������������        */
/* ��  ��       BULE       ��      GREEN       ��       RED        ��        */
/* ��  ��B5  B4  B3  B2  B1��G5  G4  G3  G2  G1��R5  R4  R3  R2  R1��        */
/* ������������������������������������������������������������������        */
/*****************************************************************************/

extern const unsigned short IMAGE_VRAM256x192[4][256 * 192];

#endif
