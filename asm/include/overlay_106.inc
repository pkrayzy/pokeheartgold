#include <nitro/fs/overlay.h>
#pragma once
.public GF_GetCurrentPlayingBGM
.public GF_SetVolumeBySeqNo
.public PlayBGM
.public sub_02005E44
.public StopBGM
.public PlaySE
.public sub_02006118
.public StopSE
.public PlayCry
.public CreateSysTaskAndEnvironment
.public DestroySysTaskAndEnvironment
.public AllocAndReadWholeNarcMemberByIdPair
.public NARC_New
.public NARC_Delete
.public GfGfxLoader_LoadFromNarc
.public GfGfxLoader_LoadCharDataFromOpenNarc
.public GfGfxLoader_LoadScrnDataFromOpenNarc
.public GfGfxLoader_GetPlttDataFromOpenNarc
.public G2dRenderer_SetSubSurfaceCoords
.public SpriteSystem_Alloc
.public SpriteManager_New
.public SpriteSystem_GetRenderer
.public SpriteSystem_Init
.public SpriteSystem_InitSprites
.public SpriteSystem_DrawSprites
.public SpriteSystem_TransferOam
.public SpriteSystem_Free
.public SpriteSystem_InitManagerWithCapacities
.public SpriteSystem_LoadCharResObjFromOpenNarc
.public SpriteSystem_LoadPlttResObjFromOpenNarc
.public SpriteSystem_LoadCellResObjFromOpenNarc
.public SpriteSystem_LoadAnimResObjFromOpenNarc
.public SpriteSystem_NewSprite
.public SpriteSystem_FreeResourcesAndManager
.public Sprite_DeleteAndFreeResources
.public ManagedSprite_TickFrame
.public ManagedSprite_SetDrawFlag
.public ManagedSprite_SetPriority
.public ManagedSprite_SetPositionXY
.public SysTask_CreateOnVWaitQueue
.public SysTask_Destroy
.public BeginNormalPaletteFade
.public IsPaletteFadeFinished
.public sub_020145B4
.public Main_SetVBlankIntrCB
.public HBlankInterruptDisable
.public AllocFromHeap
.public Heap_Free
.public GF_ExpHeap_FndInitAllocator
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public SetBgPriority
.public ToggleBgLayer
.public BG_ClearCharDataRange
.public BG_SetMaskColor
.public BgClearTilemapBufferAndCommit
.public DoScheduledBgGpuUpdates
.public GF3dRender_InitObjFromHeader
.public GF3dRender_DrawModel
.public GF3dRender_InitSimpleManager
.public GF3dRender_DeleteSimpleManager
.public SysTask_GetData
.public GfGfx_SetBanks
.public GfGfx_EngineATogglePlanes
.public GfGfx_EngineASetPlanes
.public GfGfx_EngineBSetPlanes
.public Camera_New
.public Camera_Delete
.public Camera_SetStaticPtr
.public Camera_PushLookAtToNNSGlb
.public Camera_SetPerspectiveClippingPlane
.public Camera_Init_FromTargetDistanceAndAngle
.public Sprite_GetImageProxy
.public Sprite_GetPaletteProxy
.public GF_AssertFail
.public Thunk_G3X_Reset
.public RequestSwap3DBuffers
.public SpeciesToOverworldModelIndexOffset
.public OverworldModelLookupFormCount
.public OverworldModelLookupHasFemaleForm
.public GetMonData
.public MonIsShiny
.public Party_GetCount
.public Party_GetMonByIndex
.public SaveArray_Party_Get
.public NNS_G2dGetImageLocation
.public NNS_G2dGetImagePaletteLocation
.public NNS_G3dAnmObjInit
.public NNS_G3dRenderObjAddAnmObj
.public NNS_G3dGlbLightVector
.public NNS_G3dGlbLightColor
.public NNS_G3dGlbMaterialColorDiffAmb
.public NNS_G3dGlbMaterialColorSpecEmi
.public NNS_G3dGlbPolygonAttr
.public NNS_G3dAllocAnmObj
.public NNS_G3dFreeAnmObj
.public NNSi_G3dModifyMatFlag
.public NNS_G3dGetTex
.public NNS_G3dGetAnmByIdx
.public GX_SetGraphicsMode
.public GX_SetBankForBG
.public GX_SetBankForLCDC
.public GX_ResetBankForBG
.public GX_GetBankForLCDC
.public G2x_SetBlendAlpha_
.public G3X_SetFog
.public G3X_SetEdgeColorTable
.public G3X_SetClearColor
.public GX_LoadOBJPltt
.public GX_LoadOBJ
.public GX_BeginLoadBGExtPltt
.public GX_LoadBGExtPltt
.public GX_EndLoadBGExtPltt
.public DC_FlushRange
.public MIi_CpuCopy32
.public MIi_CpuClearFast
.public MI_CpuFill8
.public abs
.public _s32_div_f
.public ScriptCinematic_HoOh
.public ScriptCinematic_Lugia
.public ScriptCinematic_Arceus
