/*---------------------------------------------------------------------------*
  Project:  NitroSDK - GX - 
  File:     fx_mtx43.c

  Copyright 2003-2007 Nintendo.  All rights reserved.

  These coded instructions, statements, and computer programs contain
  proprietary information of Nintendo of America Inc. and/or Nintendo
  Company Ltd., and are protected by Federal copyright law.  They may
  not be disclosed to third parties or copied or duplicated in any form,
  in whole or in part, without the prior written consent of Nintendo.

  $Log: fx_mtx43.c,v $
  Revision 1.27  2007/04/24 04:25:58  yosizaki
  add instance of MTX_LookAt().

  Revision 1.26  2006/01/18 02:11:20  kitase_hirotake
  do-indent

  Revision 1.25  2005/03/01 01:57:00  yosizaki
  copyright �̔N���C��.

  Revision 1.24  2005/02/28 05:26:13  yosizaki
  do-indent.

  Revision 1.23  2004/02/18 09:01:23  nishida_kenji
  Add comments for code32.h.

  Revision 1.22  2004/02/16 00:51:05  nishida_kenji
  Revise MTX_Inverse43.

  Revision 1.21  2004/02/12 01:35:50  nishida_kenji
  Work around to optimization of simple matrix functions.

  Revision 1.20  2004/02/10 07:30:17  nishida_kenji
  Work around to optimization of simple matrix functions.

  Revision 1.19  2004/02/10 06:04:45  nishida_kenji
  Fix MTX_TransApply43.

  Revision 1.18  2004/02/06 04:50:54  nishida_kenji
  MI_CpuCopyFast for block copy.

  Revision 1.17  2004/02/05 07:09:02  yasu
  change SDK prefix iris -> nitro

  Revision 1.16  2004/02/03 06:43:03  nishida_kenji
  Add comments.

  Revision 1.15  2004/01/27 00:41:21  nishida_kenji
  small fix and comments

  Revision 1.14  2004/01/26 07:20:45  nishida_kenji
  include code32.h

  Revision 1.12  2004/01/26 03:00:43  kitani_toshikazu
  Fixed MTX_Invert43 translate bug , append MTX_Trans43() and MTX_TransApply43()

  Revision 1.11  2004/01/22 02:53:30  nishida_kenji
  fix MTX_Concat43

  Revision 1.10  2004/01/17 08:16:54  nishida_kenji
  add MTX_MultVec43

  Revision 1.9  2004/01/09 09:27:28  nishida_kenji
  fix comments

  Revision 1.8  2003/12/11 06:12:39  nishida_kenji
  add MTX_Concat

  Revision 1.7  2003/12/09 11:43:10  nishida_kenji
  improve asserts

  Revision 1.6  2003/12/04 07:32:09  nishida_kenji
  MTX_Inverse33, MTX_Inverse43

  $NoKeywords: $
 *---------------------------------------------------------------------------*/

#include <nitro/code32.h>              // Always generate ARM binary for efficiency

#include <nitro/fx/fx_mtx43.h>
#include <nitro/fx/fx_mtx33.h>
#include <nitro/fx/fx_vec.h>
#include <nitro/fx/fx_cp.h>
#include <nitro/mi/memory.h>

asm void MTX_Identity43_(register MtxFx43* pDst)
{
    mov  r2, #4096                     // FX32_ONE
    mov  r3, #0
    stmia r0!, {r2, r3}
    mov  r1, #0
    stmia r0!, {r1, r3}
    stmia r0!, {r2, r3}
    stmia r0!, {r1, r3}
    stmia r0!, {r2, r3}
    stmia r0!, {r1, r3}

    bx    lr
}

asm void MTX_Copy43To44_(register const MtxFx43* pSrc, register MtxFx44* pDst)
{
    stmfd sp!, {r4}

    mov   r12, #0
    ldmia r0!, {r2-r4}
    stmia r1!, {r2-r4, r12}
    ldmia r0!, {r2-r4}
    stmia r1!, {r2-r4, r12}
    ldmia r0!, {r2-r4}
    stmia r1!, {r2-r4, r12}
    mov   r12, #4096                   // FX32_ONE
    ldmia r0!, {r2-r4}
    stmia r1!, {r2-r4, r12}

    ldmfd sp!, {r4}
    bx    lr
}


asm void MTX_Transpose43_(register const MtxFx43* pSrc, register MtxFx43* pDst)
{
    stmfd sp!, {r4-r9}

    ldmia r0, {r2-r9, r12}
    stmia r1!, {r2, r5, r8}
    stmia r1!, {r3, r6, r9}
    stmia r1!, {r4, r7, r12}

    mov   r0, #0
    str   r0, [r1, #0]
    str   r0, [r1, #4]
    str   r0, [r1, #8]

    ldmfd sp!, {r4-r9}
    bx    lr
}

/*---------------------------------------------------------------------------*
  Name:         MTX_TransApply43

  Description:  Calc T(x, y, z) * pSrc = pDst

  Arguments:    pSrc         a pointer to a 4x3 matrix
                pDst         a pointer to a 4x3 matrix
                x            x trans factor
                y            y trans factor
                z            z trans factor

  Returns:      none
 *---------------------------------------------------------------------------*/
void MTX_TransApply43(const MtxFx43 *pSrc, MtxFx43 *pDst, fx32 x, fx32 y, fx32 z)
{
    SDK_NULL_ASSERT(pSrc);
    SDK_NULL_ASSERT(pDst);

    if (pSrc != pDst)
    {
        MI_Copy36B(pSrc, pDst);
    }
    {
        fx64    xx = x;
        fx64    yy = y;
        fx64    zz = z;

        pDst->_30 =
            pSrc->_30 + (fx32)((xx * pSrc->_00 + yy * pSrc->_10 + zz * pSrc->_20) >> FX32_SHIFT);
        pDst->_31 =
            pSrc->_31 + (fx32)((xx * pSrc->_01 + yy * pSrc->_11 + zz * pSrc->_21) >> FX32_SHIFT);
        pDst->_32 =
            pSrc->_32 + (fx32)((xx * pSrc->_02 + yy * pSrc->_12 + zz * pSrc->_22) >> FX32_SHIFT);
    }
}

#include <nitro/code16.h>
asm void MTX_Scale43_(register MtxFx43* pDst, register fx32 x, register fx32 y, register fx32 z)
{
    stmia r0!, {r1}
    mov r1, #0
    str r3, [r0, #28]
    mov r3, #0
    stmia r0!, {r1, r3}
    stmia r0!, {r1, r2, r3}
    mov r2, #0
    stmia r0!, {r1, r3}
    add r0, #4
    stmia r0!, {r1, r2, r3}

    bx lr
}
#include <nitro/code32.h>


/*---------------------------------------------------------------------------*
  Name:         MTX_ScaleApply43

  Description:  This function performs the operation equivalent to
                MTX_Scale43 + MTX_Concat43.

  Arguments:    pSrc         a pointer to a 4x3 matrix
                pDst         a pointer to a 4x3 matrix
                x            x scale factor
                y            y scale factor
                z            z scale factor
  
  Returns:      none
 *---------------------------------------------------------------------------*/
void MTX_ScaleApply43(const MtxFx43 *pSrc, MtxFx43 *pDst, fx32 x, fx32 y, fx32 z)
{
    MTX_ScaleApply33((const MtxFx33 *)pSrc, (MtxFx33 *)pDst, x, y, z);

    pDst->_30 = pSrc->_30;
    pDst->_31 = pSrc->_31;
    pDst->_32 = pSrc->_32;
}


#include <nitro/code16.h>
asm void MTX_RotX43_(register MtxFx43 * pDst, register fx32 sinVal, register fx32 cosVal)
{
    str  r1, [r0, #20]
    neg  r1, r1
    str  r1, [r0, #28]
    mov  r1, #1
    lsl  r1, r1, #12
    stmia r0!, {r1}
    mov  r3, #0
    mov  r1, #0
    stmia r0!, {r1,r3}
    stmia r0!, {r1,r2}
    str  r1, [r0, #4]
    add r0, #12
    stmia r0!, {r2,r3}
    stmia r0!, {r1,r3}

    bx    lr
}
#include <nitro/code32.h>

#include <nitro/code16.h>
asm void MTX_RotY43_(register MtxFx43 * pDst, register fx32 sinVal, register fx32 cosVal)
{
    str   r1, [r0, #24]
    mov   r3, #0
    stmia r0!, {r2, r3}
    neg   r1, r1
    stmia r0!, {r1, r3}
    mov   r1, #1
    lsl   r1, r1, #12
    stmia r0!, {r1, r3}
    add   r0, #4
    mov   r1, #0
    stmia r0!, {r1, r2, r3}
    stmia r0!, {r1, r3}

    bx    lr
}
#include <nitro/code32.h>


#include <nitro/code16.h>
asm void MTX_RotZ43_(register MtxFx43 * pDst, register fx32 sinVal, register fx32 cosVal)
{
    stmia r0!, {r2}
    mov   r3, #0
    stmia r0!, {r1, r3}
    neg   r1, r1
    stmia r0!, {r1, r2, r3}
    mov   r1, #0
    mov   r2, #0
    mov   r3, #1
    lsl   r3, r3, #12
    stmia r0!, {r1, r2, r3}
    mov   r3, #0
    stmia r0!, {r1, r2, r3}

    bx    lr
}
#include <nitro/code32.h>


/*---------------------------------------------------------------------------*
  Name:         MTX_RotAxis43

  Description:  Sets a rotation matrix about an arbitrary axis.

  Arguments:    pDst         a pointer to a 4x3 matrix
                vec          a pointer to a vector containing the x,y,z axis
                             components. *vec must be a unit vector.
                sinVal       sine of an angle of rotation
                cosVal       cosine of an angle of rotation
  
  Returns:      none
 *---------------------------------------------------------------------------*/
void MTX_RotAxis43(MtxFx43 *pDst, const VecFx32 *vec, fx32 sinVal, fx32 cosVal)
{
    MTX_RotAxis33((MtxFx33 *)pDst, vec, sinVal, cosVal);
    pDst->_30 = 0;
    pDst->_31 = 0;
    pDst->_32 = 0;
}


/*---------------------------------------------------------------------------*
  Name:         MTX_Inverse43

  Description:  Computes an inverse of a 4x3 matrix.

  Arguments:    pSrc         a pointer to a 4x3 matrix
                pDst         a pointer to a 4x3 matrix
  
  Returns:      -1 if *pSrc is not invertible.
                0 if success.
 *---------------------------------------------------------------------------*/
int MTX_Inverse43(const MtxFx43 *pSrc, MtxFx43 *pDst)
{
    MtxFx43 tmp;
    MtxFx43 *p;
    fx32    det;
    fx32    det00, det10, det20;
    fx32    tmp01, tmp02, tmp11, tmp12;
    fx32    tmp21, tmp22;

    SDK_NULL_ASSERT(pSrc);
    SDK_NULL_ASSERT(pDst);

    if (pSrc == pDst)
    {
        p = &tmp;
    }
    else
    {
        p = pDst;
    }

    // Computes the sub-determinant
    det00 = (fx32)(((fx64)pSrc->_11 * pSrc->_22 -
                    (fx64)pSrc->_12 * pSrc->_21 + (fx64)(FX32_ONE >> 1)) >> FX32_SHIFT);
    det10 = (fx32)(((fx64)pSrc->_10 * pSrc->_22 -
                    (fx64)pSrc->_12 * pSrc->_20 + (fx64)(FX32_ONE >> 1)) >> FX32_SHIFT);
    det20 = (fx32)(((fx64)pSrc->_10 * pSrc->_21 -
                    (fx64)pSrc->_11 * pSrc->_20 + (fx64)(FX32_ONE >> 1)) >> FX32_SHIFT);

    // Comptutes the determinant
    det = (fx32)(((fx64)pSrc->_00 * det00 -
                  (fx64)pSrc->_01 * det10 +
                  (fx64)pSrc->_02 * det20 + (fx64)(FX32_ONE >> 1)) >> FX32_SHIFT);
    if (0 == det)
    {
        return -1;
    }

    FX_InvAsync(det);

    tmp01 = (fx32)(((fx64)pSrc->_01 * pSrc->_22 - (fx64)pSrc->_21 * pSrc->_02) >> FX32_SHIFT);
    tmp02 = (fx32)(((fx64)pSrc->_01 * pSrc->_12 - (fx64)pSrc->_11 * pSrc->_02) >> FX32_SHIFT);
    tmp11 = (fx32)(((fx64)pSrc->_00 * pSrc->_22 - (fx64)pSrc->_20 * pSrc->_02) >> FX32_SHIFT);
    tmp12 = (fx32)(((fx64)pSrc->_00 * pSrc->_12 - (fx64)pSrc->_10 * pSrc->_02) >> FX32_SHIFT);

    det = FX_GetDivResult();
    p->_00 = (fx32)(((fx64)det * det00) >> FX32_SHIFT);
    p->_01 = -(fx32)(((fx64)det * tmp01) >> FX32_SHIFT);
    p->_02 = (fx32)(((fx64)det * tmp02) >> FX32_SHIFT);

    p->_10 = -(fx32)(((fx64)det * det10) >> FX32_SHIFT);
    p->_11 = (fx32)(((fx64)det * tmp11) >> FX32_SHIFT);
    p->_12 = -(fx32)(((fx64)det * tmp12) >> FX32_SHIFT);

    p->_20 = (fx32)(((fx64)det * det20) >> FX32_SHIFT);

    tmp21 = (fx32)(((fx64)pSrc->_00 * pSrc->_21 - (fx64)pSrc->_20 * pSrc->_01) >> FX32_SHIFT);
    p->_21 = -(fx32)(((fx64)det * tmp21) >> FX32_SHIFT);

    tmp22 = (fx32)(((fx64)pSrc->_00 * pSrc->_11 - (fx64)pSrc->_10 * pSrc->_01) >> FX32_SHIFT);
    p->_22 = (fx32)(((fx64)det * tmp22) >> FX32_SHIFT);

    // compute (invA)*(-C)
    p->_30 = -(fx32)(((fx64)p->_00 * pSrc->_30 +
                      (fx64)p->_10 * pSrc->_31 + (fx64)p->_20 * pSrc->_32) >> FX32_SHIFT);

    p->_31 = -(fx32)(((fx64)p->_01 * pSrc->_30 +
                      (fx64)p->_11 * pSrc->_31 + (fx64)p->_21 * pSrc->_32) >> FX32_SHIFT);

    p->_32 = -(fx32)(((fx64)p->_02 * pSrc->_30 +
                      (fx64)p->_12 * pSrc->_31 + (fx64)p->_22 * pSrc->_32) >> FX32_SHIFT);

    if (p == &tmp)
    {
        MI_Copy48B(&tmp, pDst);
    }
    return 0;
}


/*---------------------------------------------------------------------------*
  Name:         MTX_Concat43

  Description:  Concatenates two 4x3 matrices.
                The order of operation is A x B = AB.
                OK for any of ab == a == b.

  Arguments:    a            a pointer to a 4x3 matrix
                b            a pointer to a 4x3 matrix
                ab           a pointer to the resultant matrix
  
  Returns:      none
 *---------------------------------------------------------------------------*/
void MTX_Concat43(const MtxFx43 *a, const MtxFx43 *b, MtxFx43 *ab)
{
    MtxFx43 tmp;
    MtxFx43 *p;

    register fx32 x, y, z;
    register fx32 xx, yy, zz;

    SDK_NULL_ASSERT(a);
    SDK_NULL_ASSERT(b);
    SDK_NULL_ASSERT(ab);

    if (ab == b)
    {
        p = &tmp;
    }
    else
    {
        p = ab;
    }

    // compute (a x b) -> p

    // row 0
    x = a->_00;
    y = a->_01;
    z = a->_02;

    p->_00 = (fx32)(((fx64)x * b->_00 + (fx64)y * b->_10 + (fx64)z * b->_20) >> FX32_SHIFT);
    p->_01 = (fx32)(((fx64)x * b->_01 + (fx64)y * b->_11 + (fx64)z * b->_21) >> FX32_SHIFT);

    xx = b->_02;
    yy = b->_12;
    zz = b->_22;

    p->_02 = (fx32)(((fx64)x * xx + (fx64)y * yy + (fx64)z * zz) >> FX32_SHIFT);

    // row 1
    x = a->_10;
    y = a->_11;
    z = a->_12;

    p->_12 = (fx32)(((fx64)x * xx + (fx64)y * yy + (fx64)z * zz) >> FX32_SHIFT);
    p->_11 = (fx32)(((fx64)x * b->_01 + (fx64)y * b->_11 + (fx64)z * b->_21) >> FX32_SHIFT);

    xx = b->_00;
    yy = b->_10;
    zz = b->_20;

    p->_10 = (fx32)(((fx64)x * xx + (fx64)y * yy + (fx64)z * zz) >> FX32_SHIFT);

    // row 2
    x = a->_20;
    y = a->_21;
    z = a->_22;

    p->_20 = (fx32)(((fx64)x * xx + (fx64)y * yy + (fx64)z * zz) >> FX32_SHIFT);
    p->_21 = (fx32)(((fx64)x * b->_01 + (fx64)y * b->_11 + (fx64)z * b->_21) >> FX32_SHIFT);
    xx = b->_02;
    yy = b->_12;
    zz = b->_22;

    p->_22 = (fx32)(((fx64)x * xx + (fx64)y * yy + (fx64)z * zz) >> FX32_SHIFT);

    // row 3
    x = a->_30;
    y = a->_31;
    z = a->_32;

    p->_32 = (fx32)((((fx64)x * xx + (fx64)y * yy + (fx64)z * zz) >> FX32_SHIFT) + b->_32);
    p->_31 =
        (fx32)((((fx64)x * b->_01 + (fx64)y * b->_11 + (fx64)z * b->_21) >> FX32_SHIFT) + b->_31);
    p->_30 =
        (fx32)((((fx64)x * b->_00 + (fx64)y * b->_10 + (fx64)z * b->_20) >> FX32_SHIFT) + b->_30);

    if (p == &tmp)
    {
        *ab = tmp;
    }
}


/*---------------------------------------------------------------------------*
  Name:         MTX_MultVec43

  Description:  Multiplies a vector by a 4x3 matrix.
                vec x m = dst

  Arguments:    vec          a pointer to the source vector to multiply
                m            a pointer to a 4x3 matrix
                dst          a pointer to the result vector
  
  Returns:      none
 *---------------------------------------------------------------------------*/
void MTX_MultVec43(const VecFx32 *vec, const MtxFx43 *m, VecFx32 *dst)
{
    register fx32 x, y, z;
    SDK_NULL_ASSERT(vec);
    SDK_NULL_ASSERT(m);
    SDK_NULL_ASSERT(dst);

    x = vec->x;
    y = vec->y;
    z = vec->z;

    dst->x = (fx32)(((fx64)x * m->_00 + (fx64)y * m->_10 + (fx64)z * m->_20) >> FX32_SHIFT);
    dst->x += m->_30;

    dst->y = (fx32)(((fx64)x * m->_01 + (fx64)y * m->_11 + (fx64)z * m->_21) >> FX32_SHIFT);
    dst->y += m->_31;

    dst->z = (fx32)(((fx64)x * m->_02 + (fx64)y * m->_12 + (fx64)z * m->_22) >> FX32_SHIFT);
    dst->z += m->_32;
}


/*---------------------------------------------------------------------------*
  Name:         MTX_LookAt

  Description:  Computes a matrix to transform points to camera coordinates.

  Arguments:    camPos       camera position
                camUp        camera 'up' direction
                target       camera aim point
                mtx          a 4x3 matrix to be set if not NULL

  Returns:      none
 *---------------------------------------------------------------------------*/
void MTX_LookAt(const VecFx32 *camPos, const VecFx32 *camUp, const VecFx32 *target, MtxFx43 *mtx)
{
    VecFx32 vLook, vRight, vUp;

    SDK_NULL_ASSERT(camPos);
    SDK_NULL_ASSERT(camUp);
    SDK_NULL_ASSERT(target);
    SDK_NULL_ASSERT(mtx);

    vLook.x = camPos->x - target->x;
    vLook.y = camPos->y - target->y;
    vLook.z = camPos->z - target->z;
    VEC_Normalize(&vLook, &vLook);
    VEC_CrossProduct(camUp, &vLook, &vRight);
    VEC_Normalize(&vRight, &vRight);
    VEC_CrossProduct(&vLook, &vRight, &vUp);

    mtx->_00 = vRight.x;
    mtx->_01 = vUp.x;
    mtx->_02 = vLook.x;
    mtx->_10 = vRight.y;
    mtx->_11 = vUp.y;
    mtx->_12 = vLook.y;
    mtx->_20 = vRight.z;
    mtx->_21 = vUp.z;
    mtx->_22 = vLook.z;
    mtx->_30 = -VEC_DotProduct(camPos, &vRight);
    mtx->_31 = -VEC_DotProduct(camPos, &vUp);
    mtx->_32 = -VEC_DotProduct(camPos, &vLook);
}
