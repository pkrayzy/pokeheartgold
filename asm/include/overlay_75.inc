#include <nitro/fs/overlay.h>
#pragma once
.public RegisterMainOverlay
.public ListMenuInit
.public ListMenu_ProcessInput
.public DestroyListMenu
.public TextFlags_SetCanABSpeedUpPrint
.public TextFlags_SetAutoScrollParam
.public TextFlags_SetCanTouchSpeedUpPrint
.public FontID_String_GetWidth
.public LoadFontPal1
.public BlendPalette
.public Sound_SetSceneAndPlayBGM
.public PlaySE
.public UnloadOverlayByID
.public HandleLoadOverlay
.public OverlayManager_New
.public OverlayManager_Delete
.public OverlayManager_CreateAndGetData
.public OverlayManager_GetData
.public OverlayManager_FreeData
.public OverlayManager_GetArgs
.public OverlayManager_Run
.public NARC_New
.public NARC_Delete
.public GfGfxLoader_LoadCharDataFromOpenNarc
.public GfGfxLoader_LoadScrnDataFromOpenNarc
.public GfGfxLoader_GXLoadPalFromOpenNarc
.public GfGfxLoader_GetPlttDataFromOpenNarc
.public OamManager_ApplyAndResetBuffers
.public NewMsgDataFromNarc
.public DestroyMsgData
.public ReadMsgDataIntoString
.public NewString_ReadMsgData
.public MessageFormat_New_Custom
.public MessageFormat_Delete
.public BufferPlayersName
.public BufferIntegerAsString
.public StringExpandPlaceholders
.public SysTask_CreateOnVBlankQueue
.public SysTask_Destroy
.public LoadUserFrameGfx1
.public DrawFrameAndWindow1
.public sub_0200E5D4
.public LoadUserFrameGfx2
.public DrawFrameAndWindow2
.public ClearFrameAndWindow2
.public WaitingIcon_New
.public sub_0200F450
.public BeginNormalPaletteFade
.public IsPaletteFadeFinished
.public ListMenuItems_New
.public ListMenuItems_Delete
.public ListMenuItems_AppendFromMsgData
.public ListMenuCursorNew
.public DestroyListMenuCursorObj
.public ListMenuUpdateCursorObj
.public YesNoPrompt_Create
.public YesNoPrompt_Destroy
.public YesNoPrompt_InitFromTemplate
.public YesNoPrompt_HandleInput
.public Main_SetVBlankIntrCB
.public HBlankInterruptDisable
.public Sys_SetSleepDisableFlag
.public Sys_ClearSleepDisableFlag
.public SetKeyRepeatTimers
.public CreateHeap
.public DestroyHeap
.public AllocFromHeap
.public Heap_Free
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public BgSetPosTextAndCommit
.public BG_ClearCharDataRange
.public BG_SetMaskColor
.public FillBgTilemapRect
.public BgClearTilemapBufferAndCommit
.public AddWindowParameterized
.public RemoveWindow
.public CopyWindowToVram
.public ClearWindowTilemapAndCopyToVram
.public FillWindowPixelBuffer
.public DoScheduledBgGpuUpdates
.public ScheduleBgTilemapBufferTransfer
.public TextPrinterCheckActive
.public AddTextPrinterParameterized
.public AddTextPrinterParameterizedWithColor
.public GF_CreateVramTransferManager
.public GF_DestroyVramTransferManager
.public GF_RunVramTransferTasks
.public sub_020210BC
.public sub_02021148
.public sub_02021238
.public GfGfx_SetBanks
.public GfGfx_DisableEngineAPlanes
.public GfGfx_EngineATogglePlanes
.public GfGfx_DisableEngineBPlanes
.public GfGfx_EngineBTogglePlanes
.public GfGfx_SwapDisplay
.public GF_AssertFail
.public String_New
.public String_Delete
.public String_Copy
.public String_atoi
.public String_Compare
.public String_GetLength
.public String_CountLines
.public String_GetLineN
.public CopyStringToU16Array
.public SaveGameNormal
.public Save_ClearStatusFlags
.public Save_SysInfo_Get
.public Save_SysInfo_GetField4C
.public Save_SysInfo_SetField4C
.public Save_PlayerData_GetProfile
.public Save_PlayerData_GetOptionsAddr
.public Options_GetFrame
.public sub_0202C08C
.public sub_0202C6F4
.public sub_02031734
.public sub_02031744
.public sub_0203175C
.public sub_02031774
.public sub_02031780
.public sub_020317BC
.public sub_0203186C
.public sub_02034D8C
.public sub_02034DB8
.public sub_02034DE0
.public sub_02039528
.public sub_0203957C
.public sub_020399EC
.public sub_02039FD8
.public sub_0203A040
.public sub_0203A05C
.public sub_0203A880
.public sub_0203A914
.public sub_0203A930
.public Save_VarsFlags_Get
.public SetFlag970
.public sub_02085400
.public sub_0208541C
.public sub_02085438
.public LoadDwcOverlay
.public UnloadDwcOverlay
.public LoadOVY38
.public UnloadOVY38
.public DWC_CreateFriendKey
.public NNS_FndCreateExpHeapEx
.public NNS_FndDestroyExpHeap
.public NNS_FndAllocFromExpHeapEx
.public NNS_FndFreeToExpHeap
.public GX_LoadBGPltt
.public GXS_LoadBGPltt
.public DC_FlushRange
.public OS_DisableInterrupts
.public OS_RestoreInterrupts
.public MIi_CpuCopy16
.public MIi_CpuClear32
.public MI_CpuFill8
.public _ull_mod
.public _02102620
.public gSystem
.public ov00_021E6A70
.public ov00_021EC0FC
.public ov00_021EC11C
.public ov00_021EC210
.public ov00_021EC294
.public ov00_021EC3F0
.public ov00_021EC454
.public ov00_021EC4A4
.public ov00_021EC5B4
.public ov00_021EC60C
.public ov00_021EC724
.public ov00_021EC8D8
.public ov00_021EC9D4
.public ov00_021EC9E0
.public ov00_021ECB40
.public ov00_021ECD04
.public ov00_021ECDC8
.public ov00_021ED9B4
.public ov00_021FA0D8
.public ov44_0222A4B4
.public ov44_0222A60C
.public ov44_0222A758
.public gApplication_TitleScreen
.public ov70_022378C0
.public ov70_022378DC
.public ov70_02237F2C
.public ov70_02237F38
.public ov70_02237F58
.public ov70_02238304
.public ov75_App_MainMenu_SelectOption_WiiMessageSettings
