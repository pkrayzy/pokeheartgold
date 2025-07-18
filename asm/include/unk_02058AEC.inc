#include <nitro/fs/overlay.h>
#pragma once
.public PlaySE
.public NewMsgDataFromNarc
.public DestroyMsgData
.public ReadMsgDataIntoString
.public MessageFormat_New
.public MessageFormat_Delete
.public BufferPlayersName
.public BufferBoxMonSpeciesName
.public StringExpandPlaceholders
.public SysTask_CreateOnMainQueue
.public SysTask_Destroy
.public LoadUserFrameGfx1
.public DrawFrameAndWindow1
.public sub_0200E5D4
.public ClearFrameAndWindow2
.public IsPaletteFadeFinished
.public ListMenuCursorNew
.public DestroyListMenuCursorObj
.public ListMenuUpdateCursorObj
.public MailMsg_Init_Default
.public CreateHeapAtEnd
.public DestroyHeap
.public AllocFromHeap
.public AllocFromHeapAtEnd
.public Heap_Free
.public InitWindow
.public WindowIsInUse
.public AddWindowParameterized
.public RemoveWindow
.public CopyWindowPixelsToVram_TextMode
.public ClearWindowTilemapAndCopyToVram
.public FillWindowPixelBuffer
.public FillWindowPixelRect
.public AddTextPrinterParameterized
.public GF_AssertFail
.public String_New
.public String_Delete
.public Save_PlayerData_GetProfile
.public Save_PlayerData_GetOptionsAddr
.public LinkBattleRuleset_GetRuleValue
.public Save_SpecialRibbons_Get
.public sub_02034434
.public sub_02034818
.public sub_02035650
.public sub_02035754
.public sub_02035798
.public sub_02035878
.public sub_02036FD8
.public sub_02037030
.public sub_02037088
.public sub_02037108
.public sub_02037454
.public sub_02037474
.public sub_0203769C
.public sub_020376F8
.public sub_0203778C
.public sub_02037AC0
.public sub_02037B38
.public sub_02037B5C
.public sub_02037F18
.public sub_02037F64
.public sub_02037F94
.public sub_02037FCC
.public sub_02037FF0
.public sub_02038070
.public sub_02038094
.public sub_02038918
.public sub_0203894C
.public sub_0203898C
.public sub_02038C1C
.public sub_020398D4
.public sub_02039918
.public sub_0203993C
.public sub_0203996C
.public FieldSystem_LaunchApplication
.public sub_0203E2F4
.public FieldSystem_GetSaveData
.public TrainerCard_LaunchApp
.public FieldSystem_CreateTask
.public FieldSystem_TaskIsRunning
.public FieldSystem_ApplicationIsRunning
.public FieldSystem_LoadFieldOverlay
.public sub_020505C8
.public TaskManager_GetFieldSystem
.public TaskManager_GetEnvironment
.public sub_02056E60
.public sub_02057A34
.public sub_02057A88
.public sub_02057ADC
.public sub_02057B14
.public sub_02057E08
.public sub_02057F70
.public sub_020588DC
.public sub_02059538
.public sub_02059AE4
.public sub_02059B08
.public sub_02059B18
.public sub_02059B34
.public sub_02059D44
.public sub_02059DB0
.public sub_02059E04
.public sub_0205A1F0
.public sub_0205A1F4
.public sub_0205A200
.public sub_0205A284
.public sub_0205A358
.public sub_0205A35C
.public sub_0205A39C
.public sub_0205A3B0
.public sub_0205A408
.public sub_0205A40C
.public sub_0205A410
.public sub_0205A430
.public sub_0205A904
.public sub_0205AA6C
.public sub_0205AB88
.public sub_0205ABB0
.public sub_0205ABBC
.public sub_0205B514
.public sub_0205B564
.public sub_0205B5A8
.public sub_0205B5B4
.public IsPrintFinished
.public PlayerAvatar_GetMapObject
.public sub_0205F55C
.public MapObject_IsMovementPaused
.public GetMonData
.public sub_02070D90
.public Mon_GetBoxMon
.public SaveArray_Party_Alloc
.public Party_InitWithMaxSize
.public Party_AddMon
.public Party_GetCount
.public Party_GetMonByIndex
.public SaveArray_Party_Get
.public SaveArray_IsNatDexEnabled
.public Save_Bag_Get
.public sub_02088288
.public sub_0208828C
.public sub_02089D40
.public sub_0208AD34
.public sub_0208F814
.public sub_02091574
.public MI_CpuFill8
.public MI_CpuCopy8
.public gOverlayTemplate_PartyMenu
.public gOverlayTemplate_PokemonSummary
.public gSystem
.public ov01_021E636C
