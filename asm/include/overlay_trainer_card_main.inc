#include <nitro/fs/overlay.h>
#pragma once
.public TextFlags_SetCanABSpeedUpPrint
.public TextFlags_SetCanTouchSpeedUpPrint
.public FontID_Alloc
.public FontID_Release
.public FontID_String_GetWidth
.public LoadFontPal0
.public Sound_SetSceneAndPlayBGM
.public GF_SndHandleSetPlayerVolume
.public PlaySE
.public OverlayManager_CreateAndGetData
.public OverlayManager_GetData
.public OverlayManager_FreeData
.public OverlayManager_GetArgs
.public NARC_New
.public NARC_Delete
.public NARC_AllocAndReadWholeMember
.public GfGfxLoader_LoadCharData
.public GfGfxLoader_LoadScrnData
.public GfGfxLoader_GetScrnData
.public GfGfxLoader_GetPlttData
.public GfGfxLoader_LoadFromNarc
.public CreateSpriteResourcesHeader
.public G2dRenderer_Init
.public G2dRenderer_SetSubSurfaceCoords
.public Create2DGfxResObjMan
.public Destroy2DGfxResObjMan
.public AddCharResObjFromNarc
.public AddPlttResObjFromNarc
.public AddCellOrAnimResObjFromNarc
.public sub_0200ACF0
.public sub_0200AEB0
.public sub_0200AF94
.public sub_0200B0A8
.public OamManager_Create
.public OamManager_ApplyAndResetBuffers
.public OamManager_Free
.public sub_0200B2E0
.public sub_0200B2E8
.public NewMsgDataFromNarc
.public DestroyMsgData
.public ReadMsgDataIntoString
.public NewString_ReadMsgData
.public MessageFormat_New_Custom
.public MessageFormat_Delete
.public BufferString
.public BufferIntegerAsString
.public BufferMonthNameAbbr
.public StringExpandPlaceholders
.public LoadUserFrameGfx2
.public DrawFrameAndWindow2
.public ClearFrameAndWindow2
.public BeginNormalPaletteFade
.public IsPaletteFadeFinished
.public sub_0200FBDC
.public sub_0200FBF4
.public YesNoPrompt_Create
.public YesNoPrompt_Destroy
.public YesNoPrompt_InitFromTemplate
.public YesNoPrompt_HandleInput
.public YesNoPrompt_IsInTouchMode
.public YesNoPrompt_Reset
.public MenuInputStateMgr_GetState
.public MenuInputStateMgr_SetState
.public Main_SetVBlankIntrCB
.public Main_SetHBlankIntrCB
.public SetKeyRepeatTimers
.public CreateHeap
.public DestroyHeap
.public Heap_Free
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public BgSetPosTextAndCommit
.public BgCommitTilemapBufferToVram
.public BG_LoadCharTilesData
.public BG_FillCharDataRange
.public CopyToBgTilemapRect
.public FillBgTilemapRect
.public BgClearTilemapBufferAndCommit
.public GetBgTilemapBuffer
.public AddWindow
.public RemoveWindow
.public CopyWindowToVram
.public ScheduleWindowCopyToVram
.public ClearWindowTilemapAndCopyToVram
.public ClearWindowTilemapAndScheduleTransfer
.public FillWindowPixelBuffer
.public FillWindowPixelRect
.public DoScheduledBgGpuUpdates
.public ScheduleBgTilemapBufferTransfer
.public TextPrinterCheckActive
.public AddTextPrinterParameterizedWithColor
.public GF_RunVramTransferTasks
.public sub_020210BC
.public sub_02021148
.public sub_02021238
.public ObjCharTransfer_Init
.public ObjCharTransfer_Destroy
.public ObjCharTransfer_ClearBuffers
.public ObjPlttTransfer_Init
.public ObjPlttTransfer_Destroy
.public ObjPlttTransfer_Reset
.public GfGfx_SetBanks
.public GfGfx_DisableEngineAPlanes
.public GfGfx_EngineATogglePlanes
.public GfGfx_DisableEngineBPlanes
.public GfGfx_EngineBTogglePlanes
.public SpriteList_Delete
.public SpriteList_RenderAndAnimateSprites
.public Sprite_CreateAffine
.public Sprite_SetDrawFlag
.public Sprite_SetAnimActiveFlag
.public Sprite_SetAnimCtrlSeq
.public Sprite_ResetAnimCtrlState
.public Sprite_SetDrawPriority
.public TouchscreenHitbox_TouchNewIsIn
.public System_GetTouchNew
.public GF_AssertFail
.public String_New
.public String_Delete
.public String16_FormatInteger
.public CopyU16ArrayToString
.public Save_PlayerData_GetOptionsAddr
.public Options_GetTextFrameDelay
.public Options_GetFrame
.public GetIGTHours
.public GetIGTMinutes
.public sub_02037474
.public sub_0203A964
.public NNS_G2dGetUnpackedBGCharacterData
.public NNS_G2dGetUnpackedPaletteData
.public NNS_G2dInitOamManagerModule
.public FX_Inv
.public G2x_SetBGyAffine_
.public GX_LoadBGPltt
.public GXS_LoadBGPltt
.public DC_FlushRange
.public OS_WaitVBlankIntr
.public MI_CpuFill8
.public memset
.public _s32_div_f
.public gSystem
.public TrainerCardMainApp_Init
.public TrainerCardMainApp_Main
.public TrainerCardMainApp_Exit
