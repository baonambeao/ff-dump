#pragma once
#include "Il2CppBase.hpp"

namespace COW_Gameplay_UGC_BlockEdit {

    // TypeDefIndex: 30372 | Original: COW.Gameplay.UGC.BlockEdit.BlockEditContext | Token: 0x20076a5
    struct BlockEditContext : Il2Cpp::Object {
        // Fields (19)
        void* BlockDefine; // BlockDefine | Token: 0x403ab5c
        void* BlockLibraries; // BlockLibraries | Token: 0x403ab5d
        void* BlockGraphs; // BlockGraphs | Token: 0x403ab5e
        void* CurrentBuildGraphData; // CurrentBuildGraphData | Token: 0x403ab5f
        void* CurrentExportGraphData; // CurrentExportGraphData | Token: 0x403ab60
        void* CurrentExportMiscData; // CurrentExportMiscData | Token: 0x403ab61
        void* CurrentEditGraphData; // CurrentEditGraphData | Token: 0x403ab62
        void* CurrentEditOwnedEventNameList; // CurrentEditOwnedEventNameList | Token: 0x403ab63
        void* CopyBlockId; // CopyBlockId | Token: 0x403ab64
        void* CopyBlockOwnerGraphId; // CopyBlockOwnerGraphId | Token: 0x403ab65
        void* UserExportDataLogExportInfo; // UserExportDataLogExportInfo | Token: 0x403ab66
        void* UserExportDataLogImportInfo; // UserExportDataLogImportInfo | Token: 0x403ab67
        void* BlockTemplateGraphData; // BlockTemplateGraphData | Token: 0x403ab68
        void* RawBlockConfigData; // RawBlockConfigData | Token: 0x403ab69
        void* m_OfflineBlockConfigData; // m_OfflineBlockConfigData | Token: 0x403ab6a
        void* CurrentExportGraphProtoDatas; // CurrentExportGraphProtoDatas | Token: 0x403ab6b
        void* CurrentExportGraphProtoData; // CurrentExportGraphProtoData | Token: 0x403ab6c
        void* TemplateGraphMapping; // TemplateGraphMapping | Token: 0x403ab6d
        void* mCSVLoaded; // mCSVLoaded | Token: 0x403ab6e

        // Methods (12)
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlockEditContext* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(BlockEditContext* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x636d
        using fn_Method_2 = void* (*)(BlockEditContext* __this);
        // Method: en(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_en = void* (*)(BlockEditContext* __this, void* cam);
        // Method: Method_4() | Slot: 25454 | Token: 0x10004
        using fn_Method_4 = void* (*)(BlockEditContext* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(BlockEditContext* __this);
        // Method: haviourPause(void* P0) | Slot: 65535 | Token: 0x602b280
        using fn_haviourPause = void* (*)(BlockEditContext* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BlockEditContext* __this);
        // Method: changeCurrencySubType() | Slot: 45698 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BlockEditContext* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BlockEditContext* __this);
        // Method: Method_10(void* node) | Slot: 37076 | Token: 0x12545
        using fn_Method_10 = void* (*)(BlockEditContext* __this, void* node);
        // Method: Method_11() | Slot: 0 | Token: 0x6370
        using fn_Method_11 = void* (*)(BlockEditContext* __this);
    };

    // TypeDefIndex: 30373 | Original: COW.Gameplay.UGC.BlockEdit.EBlockEditProjectType | Token: 0x20076a6
    struct EBlockEditProjectType : Il2Cpp::Object {
        // Fields (6)
        void* value__; // value__ | Token: 0x403ab6f
        void* Protobuf; // Protobuf | Token: 0x403ab70
        void* Json; // Json | Token: 0x403ab71
        void* ZippedJson; // ZippedJson | Token: 0x403ab72
        void* SerMap; // SerMap | Token: 0x403ab73
        void* ZippedSerMap; // ZippedSerMap | Token: 0x403ab74
    };

    // TypeDefIndex: 30376 | Original: COW.Gameplay.UGC.BlockEdit.BlockEditManager | Token: 0x20076a7
    struct BlockEditManager : Il2Cpp::Object {
        // Fields (9)
        void* BlockDefineContext; // BlockDefineContext | Token: 0x403ab75
        void* EntityData; // EntityData | Token: 0x403ab76
        void* CurrentSaveProjectType; // CurrentSaveProjectType | Token: 0x403ab77
        void* m_ScreenshotWidth; // m_ScreenshotWidth | Token: 0x403ab78
        void* m_ScreenshotHeight; // m_ScreenshotHeight | Token: 0x403ab79
        void* m_CustomTemplateDataList; // m_CustomTemplateDataList | Token: 0x403ab7a
        void* m_LibraryTemplateDataList; // m_LibraryTemplateDataList | Token: 0x403ab7b
        void* m_IsCustomTemplateSortDirty; // m_IsCustomTemplateSortDirty | Token: 0x403ab7c
        void* JsonFixer; // JsonFixer | Token: 0x403ab7d

        // Methods (57)
        // Method: Method_0(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_0 = void* (*)(BlockEditManager* __this, void* strAPPSecret);
        // Method: Method_1() | Slot: 25457 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(BlockEditManager* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(BlockEditManager* __this);
        // Method: iourPause() | Slot: 65535 | Token: 0x602b288
        using fn_iourPause = void* (*)(BlockEditManager* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(BlockEditManager* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45706 | Token: 0x190d8
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(BlockEditManager* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(BlockEditManager* __this);
        // Method: Method_7() | Slot: 37081 | Token: 0x12545
        using fn_Method_7 = void* (*)(BlockEditManager* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x6373
        using fn_Method_8 = void* (*)(BlockEditManager* __this);
        // Method: alTransformLocalBounds(void* d) | Slot: 9541 | Token: 0x67
        using fn_alTransformLocalBounds = void* (*)(BlockEditManager* __this, void* d);
        // Method: Method_10() | Slot: 25459 | Token: 0xffff
        using fn_Method_10 = void* (*)(BlockEditManager* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(BlockEditManager* __this);
        // Method: rPause(void* holder) | Slot: 4 | Token: 0x602b290
        using fn_rPause = void* (*)(BlockEditManager* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(BlockEditManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45714 | Token: 0x190dd
        using fn_GetExchangeCurrencySubType = void* (*)(BlockEditManager* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlockEditManager* __this);
        // Method: Method_16() | Slot: 65535 | Token: 0x12545
        using fn_Method_16 = void* (*)(BlockEditManager* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x6375
        using fn_Method_17 = void* (*)(BlockEditManager* __this);
        // Method: nsformLocalBounds(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_nsformLocalBounds = void* (*)(BlockEditManager* __this, void* cam);
        // Method: Method_19() | Slot: 25462 | Token: 0x10004
        using fn_Method_19 = void* (*)(BlockEditManager* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(BlockEditManager* __this);
        // Method: ause(void* P0) | Slot: 65535 | Token: 0x602b298
        using fn_ause = void* (*)(BlockEditManager* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BlockEditManager* __this);
        // Method: changeCurrencySubType() | Slot: 45722 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BlockEditManager* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BlockEditManager* __this);
        // Method: Method_25(void* node) | Slot: 37092 | Token: 0x12545
        using fn_Method_25 = void* (*)(BlockEditManager* __this, void* node);
        // Method: Method_26() | Slot: 0 | Token: 0x6378
        using fn_Method_26 = void* (*)(BlockEditManager* __this);
        // Method: Method_27(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_27 = void* (*)(BlockEditManager* __this, void* strAPPSecret);
        // Method: Method_28() | Slot: 25465 | Token: 0x1ffff
        using fn_Method_28 = void* (*)(BlockEditManager* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(BlockEditManager* __this);
        // Method: e() | Slot: 65535 | Token: 0x602b2a0
        using fn_e = void* (*)(BlockEditManager* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(BlockEditManager* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45730 | Token: 0x190e8
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(BlockEditManager* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(BlockEditManager* __this);
        // Method: Method_34() | Slot: 37097 | Token: 0x12545
        using fn_Method_34 = void* (*)(BlockEditManager* __this);
        // Method: Method_35() | Slot: 0 | Token: 0x637b
        using fn_Method_35 = void* (*)(BlockEditManager* __this);
        // Method: Bounds(void* d) | Slot: 9541 | Token: 0x67
        using fn_Bounds = void* (*)(BlockEditManager* __this, void* d);
        // Method: Method_37() | Slot: 25467 | Token: 0xffff
        using fn_Method_37 = void* (*)(BlockEditManager* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(BlockEditManager* __this);
        // Method: nPlayableDestroy(void* holder) | Slot: 4 | Token: 0x602b2a8
        using fn_nPlayableDestroy = void* (*)(BlockEditManager* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(BlockEditManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45738 | Token: 0x190ed
        using fn_GetExchangeCurrencySubType = void* (*)(BlockEditManager* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlockEditManager* __this);
        // Method: Method_43() | Slot: 65535 | Token: 0x12545
        using fn_Method_43 = void* (*)(BlockEditManager* __this);
        // Method: Method_44() | Slot: 0 | Token: 0x637d
        using fn_Method_44 = void* (*)(BlockEditManager* __this);
        // Method: s(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_s = void* (*)(BlockEditManager* __this, void* cam);
        // Method: Method_46() | Slot: 25470 | Token: 0x10004
        using fn_Method_46 = void* (*)(BlockEditManager* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(BlockEditManager* __this);
        // Method: layableDestroy(void* P0) | Slot: 65535 | Token: 0x602b2b0
        using fn_layableDestroy = void* (*)(BlockEditManager* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BlockEditManager* __this);
        // Method: changeCurrencySubType() | Slot: 45746 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BlockEditManager* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BlockEditManager* __this);
        // Method: Method_52(void* node) | Slot: 37108 | Token: 0x12545
        using fn_Method_52 = void* (*)(BlockEditManager* __this, void* node);
        // Method: Method_53() | Slot: 0 | Token: 0x6380
        using fn_Method_53 = void* (*)(BlockEditManager* __this);
        // Method: Method_54(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_54 = void* (*)(BlockEditManager* __this, void* strAPPSecret);
        // Method: Method_55() | Slot: 25473 | Token: 0x1ffff
        using fn_Method_55 = void* (*)(BlockEditManager* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(BlockEditManager* __this);
    };

    // TypeDefIndex: 30377 | Original: COW.Gameplay.UGC.BlockEdit.BlockEditManagerDebug | Token: 0x20076aa
    struct BlockEditManagerDebug : Il2Cpp::Object {
        // Fields (4)
        void* DEBUG_GRAPH_ID; // DEBUG_GRAPH_ID | Token: 0x403ab84
        void* DEBUG_GLOBAL_GRAPH_ID; // DEBUG_GLOBAL_GRAPH_ID | Token: 0x403ab85
        void* GRAPH_LOCALSAVENAME; // GRAPH_LOCALSAVENAME | Token: 0x403ab86
        void* DEBUG_GRAPH_LOCALSAVENAME; // DEBUG_GRAPH_LOCALSAVENAME | Token: 0x403ab87

        // Methods (1)
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(BlockEditManagerDebug* __this);
    };

    // TypeDefIndex: 30378 | Original: COW.Gameplay.UGC.BlockEdit.EBlockTemplateType | Token: 0x20076ab
    struct EBlockTemplateType : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x403ab88
        void* Library; // Library | Token: 0x403ab89
        void* Created; // Created | Token: 0x403ab8a
        void* Store; // Store | Token: 0x403ab8b
    };

    // TypeDefIndex: 30379 | Original: COW.Gameplay.UGC.BlockEdit.BlockTemplateData | Token: 0x20076ac
    struct BlockTemplateData : Il2Cpp::Object {
        // Fields (7)
        void* TemplateType; // TemplateType | Token: 0x403ab8c
        void* TemplateData; // TemplateData | Token: 0x403ab8d
        void* TemplateImage; // TemplateImage | Token: 0x403ab8e
        void* GraphData; // GraphData | Token: 0x403ab8f
        void* ID; // ID | Token: 0x403ab90
        void* Path; // Path | Token: 0x403ab91
        void* Order; // Order | Token: 0x403ab92

        // Methods (1)
        // Method: eDestroy(void* holder) | Slot: 4 | Token: 0x602b2c0
        using fn_eDestroy = void* (*)(BlockTemplateData* __this, void* holder);
    };

    // TypeDefIndex: 30380 | Original: COW.Gameplay.UGC.BlockEdit.IBlockEditCommand | Token: 0x20076ad
    struct IBlockEditCommand : Il2Cpp::Object {

        // Methods (2)
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(IBlockEditCommand* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45762 | Token: 0x190fd
        using fn_GetExchangeCurrencySubType = void* (*)(IBlockEditCommand* __this);
    };

    // TypeDefIndex: 30381 | Original: COW.Gameplay.UGC.BlockEdit.BlockEditCommand | Token: 0x20076ae
    struct BlockEditCommand : Il2Cpp::Object {
        // Fields (1)
        void* _Graph_k__BackingField; // <Graph>k__BackingField | Token: 0x403ab93

        // Methods (3)
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlockEditCommand* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(BlockEditCommand* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x6385
        using fn_Method_2 = void* (*)(BlockEditCommand* __this);
    };

    // TypeDefIndex: 30382 | Original: COW.Gameplay.UGC.BlockEdit.BlockEditMacroCommand | Token: 0x20076af
    struct BlockEditMacroCommand : Il2Cpp::Object {
        // Fields (1)
        void* _Graph_k__BackingField; // <Graph>k__BackingField | Token: 0x403ab94

        // Methods (3)
        // Method: ctHeadUpdateWhenOffscreen(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_ctHeadUpdateWhenOffscreen = void* (*)(BlockEditMacroCommand* __this, void* cam);
        // Method: Method_1() | Slot: 25478 | Token: 0x10004
        using fn_Method_1 = void* (*)(BlockEditMacroCommand* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(BlockEditMacroCommand* __this);
    };

    // TypeDefIndex: 30383 | Original: COW.Gameplay.UGC.BlockEdit.BlockEditRecordCommand | Token: 0x20076b0
    struct BlockEditRecordCommand : Il2Cpp::Object {
        // Fields (1)
        void* _Graph_k__BackingField; // <Graph>k__BackingField | Token: 0x403ab95

        // Methods (3)
        // Method: estroy(void* P0) | Slot: 65535 | Token: 0x602b2c8
        using fn_estroy = void* (*)(BlockEditRecordCommand* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BlockEditRecordCommand* __this);
        // Method: changeCurrencySubType() | Slot: 45770 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BlockEditRecordCommand* __this);
    };

    // TypeDefIndex: 30384 | Original: COW.Gameplay.UGC.BlockEdit.BlockEditCommandManager | Token: 0x20076b1
    struct BlockEditCommandManager : Il2Cpp::Object {

        // Methods (3)
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BlockEditCommandManager* __this);
        // Method: Method_1(void* node) | Slot: 37124 | Token: 0x12545
        using fn_Method_1 = void* (*)(BlockEditCommandManager* __this, void* node);
        // Method: Method_2() | Slot: 0 | Token: 0x6388
        using fn_Method_2 = void* (*)(BlockEditCommandManager* __this);
    };

    // TypeDefIndex: 30386 | Original: COW.Gameplay.UGC.BlockEdit.BlockData | Token: 0x20076b2
    struct BlockData : Il2Cpp::Object {
        // Fields (20)
        void* positionX; // positionX | Token: 0x403ab96
        void* positionY; // positionY | Token: 0x403ab97
        void* id; // id | Token: 0x403ab98
        void* blockName; // blockName | Token: 0x403ab99
        void* bodies; // bodies | Token: 0x403ab9a
        void* values; // values | Token: 0x403ab9b
        void* BlockDefine; // BlockDefine | Token: 0x403ab9c
        void* Context; // Context | Token: 0x403ab9d
        void* Parent; // Parent | Token: 0x403ab9e
        void* Graph; // Graph | Token: 0x403ab9f
        void* Enabled; // Enabled | Token: 0x403aba0
        void* UserRef; // UserRef | Token: 0x403aba1
        void* mBlockDescKey; // mBlockDescKey | Token: 0x403aba2
        void* ReturnType; // ReturnType | Token: 0x403aba3
        void* OnTypeUpdated; // OnTypeUpdated | Token: 0x403aba4
        void* OnAvailableUpdated; // OnAvailableUpdated | Token: 0x403aba5
        void* ChildrenBlockCount; // ChildrenBlockCount | Token: 0x403aba6
        void* WasAvailable; // WasAvailable | Token: 0x403aba7
        void* IsAvailable; // IsAvailable | Token: 0x403aba8
        void* ErrorCode; // ErrorCode | Token: 0x403aba9

        // Methods (35)
        // Method: Method_0(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_0 = void* (*)(BlockData* __this, void* strAPPSecret);
        // Method: Method_1() | Slot: 25481 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(BlockData* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(BlockData* __this);
        // Method: roy() | Slot: 65535 | Token: 0x602b2d0
        using fn_roy = void* (*)(BlockData* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(BlockData* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45778 | Token: 0x19108
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(BlockData* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(BlockData* __this);
        // Method: Method_7() | Slot: 37129 | Token: 0x12545
        using fn_Method_7 = void* (*)(BlockData* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x638b
        using fn_Method_8 = void* (*)(BlockData* __this);
        // Method: eWhenOffscreen(void* d) | Slot: 9541 | Token: 0x67
        using fn_eWhenOffscreen = void* (*)(BlockData* __this, void* d);
        // Method: Method_10() | Slot: 25483 | Token: 0xffff
        using fn_Method_10 = void* (*)(BlockData* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(BlockData* __this);
        // Method: (void* holder) | Slot: 4 | Token: 0x602b2d8
        using fn_unnamed = void* (*)(BlockData* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(BlockData* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45786 | Token: 0x1910d
        using fn_GetExchangeCurrencySubType = void* (*)(BlockData* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlockData* __this);
        // Method: Method_16() | Slot: 65535 | Token: 0x12545
        using fn_Method_16 = void* (*)(BlockData* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x638d
        using fn_Method_17 = void* (*)(BlockData* __this);
        // Method: Offscreen(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_Offscreen = void* (*)(BlockData* __this, void* cam);
        // Method: Method_19() | Slot: 25486 | Token: 0x10004
        using fn_Method_19 = void* (*)(BlockData* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(BlockData* __this);
        // Method: nableBlackWhite(void* P0) | Slot: 65535 | Token: 0x602b2e0
        using fn_nableBlackWhite = void* (*)(BlockData* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BlockData* __this);
        // Method: changeCurrencySubType() | Slot: 45794 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BlockData* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BlockData* __this);
        // Method: Method_25(void* node) | Slot: 37140 | Token: 0x12545
        using fn_Method_25 = void* (*)(BlockData* __this, void* node);
        // Method: Method_26() | Slot: 0 | Token: 0x6390
        using fn_Method_26 = void* (*)(BlockData* __this);
        // Method: Method_27(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_27 = void* (*)(BlockData* __this, void* strAPPSecret);
        // Method: Method_28() | Slot: 25489 | Token: 0x1ffff
        using fn_Method_28 = void* (*)(BlockData* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(BlockData* __this);
        // Method: leBlackWhite() | Slot: 65535 | Token: 0x602b2e8
        using fn_leBlackWhite = void* (*)(BlockData* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(BlockData* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45802 | Token: 0x19118
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(BlockData* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(BlockData* __this);
        // Method: Method_34() | Slot: 37145 | Token: 0x12545
        using fn_Method_34 = void* (*)(BlockData* __this);
    };

    // TypeDefIndex: 30387 | Original: COW.Gameplay.UGC.BlockEdit.BlockRecord | Token: 0x20076b4
    struct BlockRecord : Il2Cpp::Object {
        // Fields (4)
        void* Target; // Target | Token: 0x403abac
        void* Parent; // Parent | Token: 0x403abad
        void* Index; // Index | Token: 0x403abae
        void* InCurrentGraph; // InCurrentGraph | Token: 0x403abaf

        // Methods (2)
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(BlockRecord* __this);
        // Method: lackWhite(void* holder) | Slot: 4 | Token: 0x602b2f0
        using fn_lackWhite = void* (*)(BlockRecord* __this, void* holder);
    };

    // TypeDefIndex: 30388 | Original: COW.Gameplay.UGC.BlockEdit.BlockMoveRecord | Token: 0x20076b5
    struct BlockMoveRecord : Il2Cpp::Object {
        // Fields (5)
        void* Target; // Target | Token: 0x403abb0
        void* OriginalParent; // OriginalParent | Token: 0x403abb1
        void* OriginalIndex; // OriginalIndex | Token: 0x403abb2
        void* TargetParent; // TargetParent | Token: 0x403abb3
        void* TargetIndex; // TargetIndex | Token: 0x403abb4

        // Methods (6)
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(BlockMoveRecord* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45810 | Token: 0x1911d
        using fn_GetExchangeCurrencySubType = void* (*)(BlockMoveRecord* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlockMoveRecord* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(BlockMoveRecord* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x6395
        using fn_Method_4 = void* (*)(BlockMoveRecord* __this);
        // Method: inalEffectHeadLocalBounds(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_inalEffectHeadLocalBounds = void* (*)(BlockMoveRecord* __this, void* cam);
    };

    // TypeDefIndex: 30389 | Original: COW.Gameplay.UGC.BlockEdit.FieldRecord | Token: 0x20076b6
    struct FieldRecord : Il2Cpp::Object {
        // Fields (4)
        void* Owner; // Owner | Token: 0x403abb5
        void* Target; // Target | Token: 0x403abb6
        void* Index; // Index | Token: 0x403abb7
        void* BodyIndex; // BodyIndex | Token: 0x403abb8

        // Methods (2)
        // Method: Method_0() | Slot: 25494 | Token: 0x10004
        using fn_Method_0 = void* (*)(FieldRecord* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(FieldRecord* __this);
    };

    // TypeDefIndex: 30391 | Original: COW.Gameplay.UGC.BlockEdit.BodyData | Token: 0x20076b7
    struct BodyData : Il2Cpp::Object {
        // Fields (7)
        void* actions; // actions | Token: 0x403abb9
        void* values; // values | Token: 0x403abba
        void* Context; // Context | Token: 0x403abbb
        void* BodyDefine; // BodyDefine | Token: 0x403abbc
        void* Owner; // Owner | Token: 0x403abbd
        void* Graph; // Graph | Token: 0x403abbe
        void* UserRef; // UserRef | Token: 0x403abbf

        // Methods (16)
        // Method: ckWhite(void* P0) | Slot: 65535 | Token: 0x602b2f8
        using fn_ckWhite = void* (*)(BodyData* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BodyData* __this);
        // Method: changeCurrencySubType() | Slot: 45818 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BodyData* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BodyData* __this);
        // Method: Method_4(void* node) | Slot: 37156 | Token: 0x12545
        using fn_Method_4 = void* (*)(BodyData* __this, void* node);
        // Method: Method_5() | Slot: 0 | Token: 0x6398
        using fn_Method_5 = void* (*)(BodyData* __this);
        // Method: Method_6(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_6 = void* (*)(BodyData* __this, void* strAPPSecret);
        // Method: Method_7() | Slot: 25497 | Token: 0x1ffff
        using fn_Method_7 = void* (*)(BodyData* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(BodyData* __this);
        // Method: hite() | Slot: 65535 | Token: 0x602b300
        using fn_hite = void* (*)(BodyData* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(BodyData* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45826 | Token: 0x19128
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(BodyData* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(BodyData* __this);
        // Method: Method_13() | Slot: 37161 | Token: 0x12545
        using fn_Method_13 = void* (*)(BodyData* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x639b
        using fn_Method_14 = void* (*)(BodyData* __this);
        // Method: eadLocalBounds(void* d) | Slot: 9541 | Token: 0x67
        using fn_eadLocalBounds = void* (*)(BodyData* __this, void* d);
    };

    // TypeDefIndex: 30392 | Original: COW.Gameplay.UGC.BlockEdit.FuncDefineData | Token: 0x20076b9
    struct FuncDefineData : Il2Cpp::Object {
        // Fields (11)
        void* id; // id | Token: 0x403abc2
        void* funcName; // funcName | Token: 0x403abc3
        void* ReturnTypeExisted; // ReturnTypeExisted | Token: 0x403abc4
        void* returnType; // returnType | Token: 0x403abc5
        void* paramDefines; // paramDefines | Token: 0x403abc6
        void* DefinerId; // DefinerId | Token: 0x403abc7
        void* CallerData; // CallerData | Token: 0x403abc8
        void* OnChanged; // OnChanged | Token: 0x403abc9
        void* OnRemoved; // OnRemoved | Token: 0x403abca
        void* Context; // Context | Token: 0x403abcb
        void* Graph; // Graph | Token: 0x403abcc

        // Methods (13)
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(FuncDefineData* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45834 | Token: 0x1912d
        using fn_GetExchangeCurrencySubType = void* (*)(FuncDefineData* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(FuncDefineData* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(FuncDefineData* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x639d
        using fn_Method_4 = void* (*)(FuncDefineData* __this);
        // Method: calBounds(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_calBounds = void* (*)(FuncDefineData* __this, void* cam);
        // Method: Method_6() | Slot: 25502 | Token: 0x10004
        using fn_Method_6 = void* (*)(FuncDefineData* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(FuncDefineData* __this);
        // Method: tint(void* P0) | Slot: 65535 | Token: 0x602b310
        using fn_tint = void* (*)(FuncDefineData* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(FuncDefineData* __this);
        // Method: changeCurrencySubType() | Slot: 45842 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(FuncDefineData* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(FuncDefineData* __this);
        // Method: Method_12(void* node) | Slot: 37172 | Token: 0x12545
        using fn_Method_12 = void* (*)(FuncDefineData* __this, void* node);
    };

    // TypeDefIndex: 30393 | Original: COW.Gameplay.UGC.BlockEdit.FuncParamRecord | Token: 0x20076ba
    struct FuncParamRecord : Il2Cpp::Object {
        // Fields (6)
        void* DefineData; // DefineData | Token: 0x403abcd
        void* ParamDefineRecord; // ParamDefineRecord | Token: 0x403abce
        void* Index; // Index | Token: 0x403abcf
        void* Callers; // Callers | Token: 0x403abd0
        void* ParamSlots; // ParamSlots | Token: 0x403abd1
        void* DataBlocksInParamSlot; // DataBlocksInParamSlot | Token: 0x403abd2

        // Methods (2)
        // Method: Method_0() | Slot: 0 | Token: 0x63a0
        using fn_Method_0 = void* (*)(FuncParamRecord* __this);
        // Method: Method_1(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_1 = void* (*)(FuncParamRecord* __this, void* strAPPSecret);
    };

    // TypeDefIndex: 30394 | Original: COW.Gameplay.UGC.BlockEdit.FuncDefineRecord | Token: 0x20076bb
    struct FuncDefineRecord : Il2Cpp::Object {
        // Fields (2)
        void* DefineData; // DefineData | Token: 0x403abd3
        void* Callers; // Callers | Token: 0x403abd4

        // Methods (3)
        // Method: Method_0() | Slot: 25505 | Token: 0x1ffff
        using fn_Method_0 = void* (*)(FuncDefineRecord* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(FuncDefineRecord* __this);
        // Method: t() | Slot: 65535 | Token: 0x602b318
        using fn_t = void* (*)(FuncDefineRecord* __this);
    };

    // TypeDefIndex: 30398 | Original: COW.Gameplay.UGC.BlockEdit.BlockEditGraphs | Token: 0x20076bc
    struct BlockEditGraphs : Il2Cpp::Object {
        // Fields (3)
        void* _Context_k__BackingField; // <Context>k__BackingField | Token: 0x403abd5
        void* Graphs; // Graphs | Token: 0x403abd6
        void* GraphDictionary; // GraphDictionary | Token: 0x403abd7

        // Methods (27)
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(BlockEditGraphs* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45850 | Token: 0x19138
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(BlockEditGraphs* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(BlockEditGraphs* __this);
        // Method: Method_3() | Slot: 37177 | Token: 0x12545
        using fn_Method_3 = void* (*)(BlockEditGraphs* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x63a3
        using fn_Method_4 = void* (*)(BlockEditGraphs* __this);
        // Method: _TargetAnimator(void* d) | Slot: 9541 | Token: 0x67
        using fn__TargetAnimator = void* (*)(BlockEditGraphs* __this, void* d);
        // Method: Method_6() | Slot: 25507 | Token: 0xffff
        using fn_Method_6 = void* (*)(BlockEditGraphs* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(BlockEditGraphs* __this);
        // Method: inInput(void* holder) | Slot: 4 | Token: 0x602b320
        using fn_inInput = void* (*)(BlockEditGraphs* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(BlockEditGraphs* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45858 | Token: 0x1913d
        using fn_GetExchangeCurrencySubType = void* (*)(BlockEditGraphs* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlockEditGraphs* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0x12545
        using fn_Method_12 = void* (*)(BlockEditGraphs* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x63a5
        using fn_Method_13 = void* (*)(BlockEditGraphs* __this);
        // Method: etAnimator(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_etAnimator = void* (*)(BlockEditGraphs* __this, void* cam);
        // Method: Method_15() | Slot: 25510 | Token: 0x10004
        using fn_Method_15 = void* (*)(BlockEditGraphs* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(BlockEditGraphs* __this);
        // Method: Input(void* P0) | Slot: 65535 | Token: 0x602b328
        using fn_Input = void* (*)(BlockEditGraphs* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BlockEditGraphs* __this);
        // Method: changeCurrencySubType() | Slot: 45866 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BlockEditGraphs* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BlockEditGraphs* __this);
        // Method: Method_21(void* node) | Slot: 37188 | Token: 0x12545
        using fn_Method_21 = void* (*)(BlockEditGraphs* __this, void* node);
        // Method: Method_22() | Slot: 0 | Token: 0x63a8
        using fn_Method_22 = void* (*)(BlockEditGraphs* __this);
        // Method: Method_23(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_23 = void* (*)(BlockEditGraphs* __this, void* strAPPSecret);
        // Method: Method_24() | Slot: 25513 | Token: 0x1ffff
        using fn_Method_24 = void* (*)(BlockEditGraphs* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(BlockEditGraphs* __this);
        // Method: ut() | Slot: 65535 | Token: 0x602b330
        using fn_ut = void* (*)(BlockEditGraphs* __this);
    };

    // TypeDefIndex: 30401 | Original: COW.Gameplay.UGC.BlockEdit.GraphData | Token: 0x20076c0
    struct GraphData : Il2Cpp::Object {
        // Fields (19)
        void* id; // id | Token: 0x403abe1
        void* mIsDeleted; // mIsDeleted | Token: 0x403abe2
        void* m_EntityID; // m_EntityID | Token: 0x403abe3
        void* m_EntityType; // m_EntityType | Token: 0x403abe4
        void* Canvas; // Canvas | Token: 0x403abe5
        void* RootBlockDataList; // RootBlockDataList | Token: 0x403abe6
        void* GraphVarDefines; // GraphVarDefines | Token: 0x403abe7
        void* GraphVarDefinesList; // GraphVarDefinesList | Token: 0x403abe8
        void* _Context_k__BackingField; // <Context>k__BackingField | Token: 0x403abe9
        void* CommandFactory; // CommandFactory | Token: 0x403abea
        void* CommandManager; // CommandManager | Token: 0x403abeb
        void* LocalVarDefines; // LocalVarDefines | Token: 0x403abec
        void* AllBlockDatas; // AllBlockDatas | Token: 0x403abed
        void* FuncDefines; // FuncDefines | Token: 0x403abee
        void* CheckLegalityPassed; // CheckLegalityPassed | Token: 0x403abef
        void* Declare; // Declare | Token: 0x403abf0
        void* LastEditTime; // LastEditTime | Token: 0x403abf1
        void* BlockTemplateName; // BlockTemplateName | Token: 0x403abf2
        void* BlockTemplateDescription; // BlockTemplateDescription | Token: 0x403abf3

        // Methods (45)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(GraphData* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x63ad
        using fn_Method_1 = void* (*)(GraphData* __this);
        // Method: ginalAnimatorCullingMode(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_ginalAnimatorCullingMode = void* (*)(GraphData* __this, void* cam);
        // Method: Method_3() | Slot: 25518 | Token: 0x10004
        using fn_Method_3 = void* (*)(GraphData* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(GraphData* __this);
        // Method: xInput(void* P0) | Slot: 65535 | Token: 0x602b340
        using fn_xInput = void* (*)(GraphData* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(GraphData* __this);
        // Method: changeCurrencySubType() | Slot: 45890 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(GraphData* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(GraphData* __this);
        // Method: Method_9(void* node) | Slot: 37204 | Token: 0x12545
        using fn_Method_9 = void* (*)(GraphData* __this, void* node);
        // Method: Method_10() | Slot: 0 | Token: 0x63b0
        using fn_Method_10 = void* (*)(GraphData* __this);
        // Method: Method_11(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_11 = void* (*)(GraphData* __this, void* strAPPSecret);
        // Method: Method_12() | Slot: 25521 | Token: 0x1ffff
        using fn_Method_12 = void* (*)(GraphData* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(GraphData* __this);
        // Method: put() | Slot: 65535 | Token: 0x602b348
        using fn_put = void* (*)(GraphData* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(GraphData* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45898 | Token: 0x19158
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(GraphData* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(GraphData* __this);
        // Method: Method_18() | Slot: 37209 | Token: 0x12545
        using fn_Method_18 = void* (*)(GraphData* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x63b3
        using fn_Method_19 = void* (*)(GraphData* __this);
        // Method: orCullingMode(void* d) | Slot: 9541 | Token: 0x67
        using fn_orCullingMode = void* (*)(GraphData* __this, void* d);
        // Method: Method_21() | Slot: 25523 | Token: 0xffff
        using fn_Method_21 = void* (*)(GraphData* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(GraphData* __this);
        // Method: (void* holder) | Slot: 4 | Token: 0x602b350
        using fn_unnamed = void* (*)(GraphData* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(GraphData* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45906 | Token: 0x1915d
        using fn_GetExchangeCurrencySubType = void* (*)(GraphData* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(GraphData* __this);
        // Method: Method_27() | Slot: 65535 | Token: 0x12545
        using fn_Method_27 = void* (*)(GraphData* __this);
        // Method: Method_28() | Slot: 0 | Token: 0x63b5
        using fn_Method_28 = void* (*)(GraphData* __this);
        // Method: lingMode(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_lingMode = void* (*)(GraphData* __this, void* cam);
        // Method: Method_30() | Slot: 25526 | Token: 0x10004
        using fn_Method_30 = void* (*)(GraphData* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(GraphData* __this);
        // Method: cachedManager(void* P0) | Slot: 65535 | Token: 0x602b358
        using fn_cachedManager = void* (*)(GraphData* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(GraphData* __this);
        // Method: changeCurrencySubType() | Slot: 45914 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(GraphData* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(GraphData* __this);
        // Method: Method_36(void* node) | Slot: 37220 | Token: 0x12545
        using fn_Method_36 = void* (*)(GraphData* __this, void* node);
        // Method: Method_37() | Slot: 0 | Token: 0x63b8
        using fn_Method_37 = void* (*)(GraphData* __this);
        // Method: Method_38(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_38 = void* (*)(GraphData* __this, void* strAPPSecret);
        // Method: Method_39() | Slot: 25529 | Token: 0x1ffff
        using fn_Method_39 = void* (*)(GraphData* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(GraphData* __this);
        // Method: hedManager() | Slot: 65535 | Token: 0x602b360
        using fn_hedManager = void* (*)(GraphData* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(GraphData* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45922 | Token: 0x19168
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(GraphData* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(GraphData* __this);
    };

    // TypeDefIndex: 30402 | Original: COW.Gameplay.UGC.BlockEdit.CanvasData | Token: 0x20076c3
    struct CanvasData : Il2Cpp::Object {
        // Fields (3)
        void* positionX; // positionX | Token: 0x403abf8
        void* positionY; // positionY | Token: 0x403abf9
        void* scale; // scale | Token: 0x403abfa

        // Methods (4)
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(CanvasData* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45930 | Token: 0x1916d
        using fn_GetExchangeCurrencySubType = void* (*)(CanvasData* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(CanvasData* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(CanvasData* __this);
    };

    // TypeDefIndex: 30403 | Original: COW.Gameplay.UGC.BlockEdit.TagSerializeContent | Token: 0x20076c4
    struct TagSerializeContent : Il2Cpp::Object {
        // Fields (1)
        void* tag; // tag | Token: 0x403abfb

        // Methods (2)
        // Method: Method_0() | Slot: 0 | Token: 0x63bd
        using fn_Method_0 = void* (*)(TagSerializeContent* __this);
        // Method: nalMaterials(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_nalMaterials = void* (*)(TagSerializeContent* __this, void* cam);
    };

    // TypeDefIndex: 30404 | Original: COW.Gameplay.UGC.BlockEdit.HudEventDefineData | Token: 0x20076c5
    struct HudEventDefineData : Il2Cpp::Object {
        // Fields (7)
        void* Context; // Context | Token: 0x403abfc
        void* m_BlockData; // m_BlockData | Token: 0x403abfd
        void* m_WidgetId; // m_WidgetId | Token: 0x403abfe
        void* m_TypeName; // m_TypeName | Token: 0x403abff
        void* m_WidgetName; // m_WidgetName | Token: 0x403ac00
        void* m_LogicEntityType; // m_LogicEntityType | Token: 0x403ac01
        void* graphId; // graphId | Token: 0x403ac02

        // Methods (16)
        // Method: Method_0() | Slot: 25534 | Token: 0x10004
        using fn_Method_0 = void* (*)(HudEventDefineData* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(HudEventDefineData* __this);
        // Method: nager(void* P0) | Slot: 65535 | Token: 0x602b370
        using fn_nager = void* (*)(HudEventDefineData* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(HudEventDefineData* __this);
        // Method: changeCurrencySubType() | Slot: 45938 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(HudEventDefineData* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(HudEventDefineData* __this);
        // Method: Method_6(void* node) | Slot: 37236 | Token: 0x12545
        using fn_Method_6 = void* (*)(HudEventDefineData* __this, void* node);
        // Method: Method_7() | Slot: 0 | Token: 0x63c0
        using fn_Method_7 = void* (*)(HudEventDefineData* __this);
        // Method: Method_8(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_8 = void* (*)(HudEventDefineData* __this, void* strAPPSecret);
        // Method: Method_9() | Slot: 25537 | Token: 0x1ffff
        using fn_Method_9 = void* (*)(HudEventDefineData* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(HudEventDefineData* __this);
        // Method: er() | Slot: 65535 | Token: 0x602b378
        using fn_er = void* (*)(HudEventDefineData* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(HudEventDefineData* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45946 | Token: 0x19178
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(HudEventDefineData* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(HudEventDefineData* __this);
        // Method: Method_15() | Slot: 37241 | Token: 0x12545
        using fn_Method_15 = void* (*)(HudEventDefineData* __this);
    };

    // TypeDefIndex: 30405 | Original: COW.Gameplay.UGC.BlockEdit.BinaryDeserializer | Token: 0x20076c6
    struct BinaryDeserializer : Il2Cpp::Object {

        // Methods (11)
        // Method: Method_0() | Slot: 0 | Token: 0x63c3
        using fn_Method_0 = void* (*)(BinaryDeserializer* __this);
        // Method: s(void* d) | Slot: 9541 | Token: 0x67
        using fn_s = void* (*)(BinaryDeserializer* __this, void* d);
        // Method: Method_2() | Slot: 25539 | Token: 0xffff
        using fn_Method_2 = void* (*)(BinaryDeserializer* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(BinaryDeserializer* __this);
        // Method: PostEffectTrack(void* holder) | Slot: 4 | Token: 0x602b380
        using fn_PostEffectTrack = void* (*)(BinaryDeserializer* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(BinaryDeserializer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45954 | Token: 0x1917d
        using fn_GetExchangeCurrencySubType = void* (*)(BinaryDeserializer* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BinaryDeserializer* __this);
        // Method: Method_8() | Slot: 65535 | Token: 0x12545
        using fn_Method_8 = void* (*)(BinaryDeserializer* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x63c5
        using fn_Method_9 = void* (*)(BinaryDeserializer* __this);
        // Method: riginalRenderQueues(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_riginalRenderQueues = void* (*)(BinaryDeserializer* __this, void* cam);
    };

    // TypeDefIndex: 30406 | Original: COW.Gameplay.UGC.BlockEdit.BinarySerializer | Token: 0x20076c7
    struct BinarySerializer : Il2Cpp::Object {

        // Methods (10)
        // Method: Method_0() | Slot: 25542 | Token: 0x10004
        using fn_Method_0 = void* (*)(BinarySerializer* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(BinarySerializer* __this);
        // Method: stEffectTrack(void* P0) | Slot: 65535 | Token: 0x602b388
        using fn_stEffectTrack = void* (*)(BinarySerializer* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BinarySerializer* __this);
        // Method: changeCurrencySubType() | Slot: 45962 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BinarySerializer* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BinarySerializer* __this);
        // Method: Method_6(void* node) | Slot: 37252 | Token: 0x12545
        using fn_Method_6 = void* (*)(BinarySerializer* __this, void* node);
        // Method: Method_7() | Slot: 0 | Token: 0x63c8
        using fn_Method_7 = void* (*)(BinarySerializer* __this);
        // Method: Method_8(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_8 = void* (*)(BinarySerializer* __this, void* strAPPSecret);
        // Method: Method_9() | Slot: 25545 | Token: 0x1ffff
        using fn_Method_9 = void* (*)(BinarySerializer* __this);
    };

    // TypeDefIndex: 30407 | Original: COW.Gameplay.UGC.BlockEdit.IBlockDeserializer`1 | Token: 0x20076c8
    struct IBlockDeserializer_1 : Il2Cpp::Object {

        // Methods (10)
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(IBlockDeserializer_1* __this);
        // Method: ffectTrack() | Slot: 65535 | Token: 0x602b390
        using fn_ffectTrack = void* (*)(IBlockDeserializer_1* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(IBlockDeserializer_1* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45970 | Token: 0x19188
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(IBlockDeserializer_1* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(IBlockDeserializer_1* __this);
        // Method: Method_5() | Slot: 37257 | Token: 0x12545
        using fn_Method_5 = void* (*)(IBlockDeserializer_1* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x63cb
        using fn_Method_6 = void* (*)(IBlockDeserializer_1* __this);
        // Method: erQueues(void* d) | Slot: 9541 | Token: 0x67
        using fn_erQueues = void* (*)(IBlockDeserializer_1* __this, void* d);
        // Method: Method_8() | Slot: 25547 | Token: 0xffff
        using fn_Method_8 = void* (*)(IBlockDeserializer_1* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(IBlockDeserializer_1* __this);
    };

    // TypeDefIndex: 30408 | Original: COW.Gameplay.UGC.BlockEdit.IBlockSerializer`1 | Token: 0x20076c9
    struct IBlockSerializer_1 : Il2Cpp::Object {

        // Methods (9)
        // Method: ctTrack(void* holder) | Slot: 4 | Token: 0x602b398
        using fn_ctTrack = void* (*)(IBlockSerializer_1* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(IBlockSerializer_1* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 45978 | Token: 0x1918d
        using fn_GetExchangeCurrencySubType = void* (*)(IBlockSerializer_1* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IBlockSerializer_1* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(IBlockSerializer_1* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x63cd
        using fn_Method_5 = void* (*)(IBlockSerializer_1* __this);
        // Method: ues(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_ues = void* (*)(IBlockSerializer_1* __this, void* cam);
        // Method: Method_7() | Slot: 25550 | Token: 0x10004
        using fn_Method_7 = void* (*)(IBlockSerializer_1* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(IBlockSerializer_1* __this);
    };

    // TypeDefIndex: 30409 | Original: COW.Gameplay.UGC.BlockEdit.ValueType | Token: 0x20076ca
    struct ValueType : Il2Cpp::Object {
        // Fields (12)
        void* value__; // value__ | Token: 0x403ac03
        void* TYPE_INT32; // TYPE_INT32 | Token: 0x403ac04
        void* TYPE_STRING; // TYPE_STRING | Token: 0x403ac05
        void* TYPE_BOOL; // TYPE_BOOL | Token: 0x403ac06
        void* TYPE_FLOAT; // TYPE_FLOAT | Token: 0x403ac07
        void* TYPE_INT64; // TYPE_INT64 | Token: 0x403ac08
        void* TYPE_VECTOR2; // TYPE_VECTOR2 | Token: 0x403ac09
        void* TYPE_VECTOR3; // TYPE_VECTOR3 | Token: 0x403ac0a
        void* TYPE_LIST; // TYPE_LIST | Token: 0x403ac0b
        void* TYPE_MAP; // TYPE_MAP | Token: 0x403ac0c
        void* TYPE_INT8; // TYPE_INT8 | Token: 0x403ac0d
        void* TYPE_INT16; // TYPE_INT16 | Token: 0x403ac0e
    };

    // TypeDefIndex: 30410 | Original: COW.Gameplay.UGC.BlockEdit.ISerializableValue | Token: 0x20076cb
    struct ISerializableValue : Il2Cpp::Object {

        // Methods (3)
        // Method: Track(void* P0) | Slot: 65535 | Token: 0x602b3a0
        using fn_Track = void* (*)(ISerializableValue* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(ISerializableValue* __this);
        // Method: changeCurrencySubType() | Slot: 45986 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(ISerializableValue* __this);
    };

    // TypeDefIndex: 30411 | Original: COW.Gameplay.UGC.BlockEdit.SerializableInt8 | Token: 0x20076cc
    struct SerializableInt8 : Il2Cpp::Object {
        // Fields (1)
        void* Value; // Value | Token: 0x403ac0f

        // Methods (5)
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(SerializableInt8* __this);
        // Method: Method_1(void* node) | Slot: 37268 | Token: 0x12545
        using fn_Method_1 = void* (*)(SerializableInt8* __this, void* node);
        // Method: Method_2() | Slot: 0 | Token: 0x63d0
        using fn_Method_2 = void* (*)(SerializableInt8* __this);
        // Method: Method_3(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_3 = void* (*)(SerializableInt8* __this, void* strAPPSecret);
        // Method: Method_4() | Slot: 25553 | Token: 0x1ffff
        using fn_Method_4 = void* (*)(SerializableInt8* __this);
    };

    // TypeDefIndex: 30412 | Original: COW.Gameplay.UGC.BlockEdit.SerializableInt16 | Token: 0x20076cd
    struct SerializableInt16 : Il2Cpp::Object {
        // Fields (1)
        void* Value; // Value | Token: 0x403ac10

        // Methods (5)
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(SerializableInt16* __this);
        // Method: ck() | Slot: 65535 | Token: 0x602b3a8
        using fn_ck = void* (*)(SerializableInt16* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(SerializableInt16* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 45994 | Token: 0x19198
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SerializableInt16* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(SerializableInt16* __this);
    };

    // TypeDefIndex: 30413 | Original: COW.Gameplay.UGC.BlockEdit.SerializableInt32 | Token: 0x20076ce
    struct SerializableInt32 : Il2Cpp::Object {
        // Fields (1)
        void* Value; // Value | Token: 0x403ac11

        // Methods (5)
        // Method: Method_0() | Slot: 37273 | Token: 0x12545
        using fn_Method_0 = void* (*)(SerializableInt32* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x63d3
        using fn_Method_1 = void* (*)(SerializableInt32* __this);
        // Method: ExecuteCount(void* d) | Slot: 9541 | Token: 0x67
        using fn_ExecuteCount = void* (*)(SerializableInt32* __this, void* d);
        // Method: Method_3() | Slot: 25555 | Token: 0xffff
        using fn_Method_3 = void* (*)(SerializableInt32* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(SerializableInt32* __this);
    };

    // TypeDefIndex: 30414 | Original: COW.Gameplay.UGC.BlockEdit.SerializableString | Token: 0x20076cf
    struct SerializableString : Il2Cpp::Object {
        // Fields (1)
        void* Value; // Value | Token: 0x403ac12

        // Methods (5)
        // Method: inputCount(void* holder) | Slot: 4 | Token: 0x602b3b0
        using fn_inputCount = void* (*)(SerializableString* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(SerializableString* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46002 | Token: 0x1919d
        using fn_GetExchangeCurrencySubType = void* (*)(SerializableString* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(SerializableString* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(SerializableString* __this);
    };

    // TypeDefIndex: 30415 | Original: COW.Gameplay.UGC.BlockEdit.SerializableBool | Token: 0x20076d0
    struct SerializableBool : Il2Cpp::Object {
        // Fields (1)
        void* Value; // Value | Token: 0x403ac13

        // Methods (5)
        // Method: Method_0() | Slot: 0 | Token: 0x63d5
        using fn_Method_0 = void* (*)(SerializableBool* __this);
        // Method: teCount(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_teCount = void* (*)(SerializableBool* __this, void* cam);
        // Method: Method_2() | Slot: 25558 | Token: 0x10004
        using fn_Method_2 = void* (*)(SerializableBool* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(SerializableBool* __this);
        // Method: putCount(void* P0) | Slot: 65535 | Token: 0x602b3b8
        using fn_putCount = void* (*)(SerializableBool* __this, void* P0);
    };

    // TypeDefIndex: 30416 | Original: COW.Gameplay.UGC.BlockEdit.SerializableFloat | Token: 0x20076d1
    struct SerializableFloat : Il2Cpp::Object {
        // Fields (1)
        void* Value; // Value | Token: 0x403ac14

        // Methods (5)
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(SerializableFloat* __this);
        // Method: changeCurrencySubType() | Slot: 46010 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(SerializableFloat* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(SerializableFloat* __this);
        // Method: Method_3(void* node) | Slot: 37284 | Token: 0x12545
        using fn_Method_3 = void* (*)(SerializableFloat* __this, void* node);
        // Method: Method_4() | Slot: 0 | Token: 0x63d8
        using fn_Method_4 = void* (*)(SerializableFloat* __this);
    };

    // TypeDefIndex: 30417 | Original: COW.Gameplay.UGC.BlockEdit.SerializableInt64 | Token: 0x20076d2
    struct SerializableInt64 : Il2Cpp::Object {
        // Fields (1)
        void* Value; // Value | Token: 0x403ac15

        // Methods (5)
        // Method: Method_0(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_0 = void* (*)(SerializableInt64* __this, void* strAPPSecret);
        // Method: Method_1() | Slot: 25561 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(SerializableInt64* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(SerializableInt64* __this);
        // Method: Count() | Slot: 65535 | Token: 0x602b3c0
        using fn_Count = void* (*)(SerializableInt64* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(SerializableInt64* __this);
    };

    // TypeDefIndex: 30418 | Original: COW.Gameplay.UGC.BlockEdit.SerializableVector2 | Token: 0x20076d3
    struct SerializableVector2 : Il2Cpp::Object {
        // Fields (1)
        void* Value; // Value | Token: 0x403ac16

        // Methods (5)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46018 | Token: 0x191a8
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SerializableVector2* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(SerializableVector2* __this);
        // Method: Method_2() | Slot: 37289 | Token: 0x12545
        using fn_Method_2 = void* (*)(SerializableVector2* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x63db
        using fn_Method_3 = void* (*)(SerializableVector2* __this);
        // Method: itiveEffectTrack(void* d) | Slot: 9541 | Token: 0x67
        using fn_itiveEffectTrack = void* (*)(SerializableVector2* __this, void* d);
    };

    // TypeDefIndex: 30419 | Original: COW.Gameplay.UGC.BlockEdit.SerializableVector3 | Token: 0x20076d4
    struct SerializableVector3 : Il2Cpp::Object {
        // Fields (1)
        void* Value; // Value | Token: 0x403ac17

        // Methods (5)
        // Method: Method_0() | Slot: 25563 | Token: 0xffff
        using fn_Method_0 = void* (*)(SerializableVector3* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(SerializableVector3* __this);
        // Method: nt(void* holder) | Slot: 4 | Token: 0x602b3c8
        using fn_nt = void* (*)(SerializableVector3* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(SerializableVector3* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46026 | Token: 0x191ad
        using fn_GetExchangeCurrencySubType = void* (*)(SerializableVector3* __this);
    };

    // TypeDefIndex: 30420 | Original: COW.Gameplay.UGC.BlockEdit.SerializableFactory | Token: 0x20076d5
    struct SerializableFactory : Il2Cpp::Object {

        // Methods (2)
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(SerializableFactory* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(SerializableFactory* __this);
    };

    // TypeDefIndex: 30421 | Original: COW.Gameplay.UGC.BlockEdit.JsonDeserializer | Token: 0x20076d6
    struct JsonDeserializer : Il2Cpp::Object {

        // Methods (11)
        // Method: Method_0() | Slot: 0 | Token: 0x63dd
        using fn_Method_0 = void* (*)(JsonDeserializer* __this);
        // Method: EffectTrack(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_EffectTrack = void* (*)(JsonDeserializer* __this, void* cam);
        // Method: Method_2() | Slot: 25566 | Token: 0x10004
        using fn_Method_2 = void* (*)(JsonDeserializer* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(JsonDeserializer* __this);
        // Method: (void* P0) | Slot: 65535 | Token: 0x602b3d0
        using fn_unnamed = void* (*)(JsonDeserializer* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(JsonDeserializer* __this);
        // Method: changeCurrencySubType() | Slot: 46034 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(JsonDeserializer* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(JsonDeserializer* __this);
        // Method: Method_8(void* node) | Slot: 37300 | Token: 0x12545
        using fn_Method_8 = void* (*)(JsonDeserializer* __this, void* node);
        // Method: Method_9() | Slot: 0 | Token: 0x63e0
        using fn_Method_9 = void* (*)(JsonDeserializer* __this);
        // Method: Method_10(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_10 = void* (*)(JsonDeserializer* __this, void* strAPPSecret);
    };

    // TypeDefIndex: 30422 | Original: COW.Gameplay.UGC.BlockEdit.JsonSerializer | Token: 0x20076d7
    struct JsonSerializer : Il2Cpp::Object {

        // Methods (10)
        // Method: Method_0() | Slot: 25569 | Token: 0x1ffff
        using fn_Method_0 = void* (*)(JsonSerializer* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(JsonSerializer* __this);
        // Method: eateTrackMixer() | Slot: 65535 | Token: 0x602b3d8
        using fn_eateTrackMixer = void* (*)(JsonSerializer* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(JsonSerializer* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46042 | Token: 0x191b8
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(JsonSerializer* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(JsonSerializer* __this);
        // Method: Method_6() | Slot: 37305 | Token: 0x12545
        using fn_Method_6 = void* (*)(JsonSerializer* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x63e3
        using fn_Method_7 = void* (*)(JsonSerializer* __this);
        // Method: (void* d) | Slot: 9541 | Token: 0x67
        using fn_unnamed = void* (*)(JsonSerializer* __this, void* d);
        // Method: Method_9() | Slot: 25571 | Token: 0xffff
        using fn_Method_9 = void* (*)(JsonSerializer* __this);
    };

    // TypeDefIndex: 30423 | Original: COW.Gameplay.UGC.BlockEdit.SerializedGraph | Token: 0x20076d8
    struct SerializedGraph : Il2Cpp::Object {
        // Fields (1)
        void* _data; // _data | Token: 0x403ac18

        // Methods (53)
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(SerializedGraph* __this);
        // Method: eTrackMixer(void* holder) | Slot: 4 | Token: 0x602b3e0
        using fn_eTrackMixer = void* (*)(SerializedGraph* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(SerializedGraph* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46050 | Token: 0x191bd
        using fn_GetExchangeCurrencySubType = void* (*)(SerializedGraph* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(SerializedGraph* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(SerializedGraph* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x63e5
        using fn_Method_6 = void* (*)(SerializedGraph* __this);
        // Method: nNormal(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_nNormal = void* (*)(SerializedGraph* __this, void* cam);
        // Method: Method_8() | Slot: 25574 | Token: 0x10004
        using fn_Method_8 = void* (*)(SerializedGraph* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(SerializedGraph* __this);
        // Method: rackMixer(void* P0) | Slot: 65535 | Token: 0x602b3e8
        using fn_rackMixer = void* (*)(SerializedGraph* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(SerializedGraph* __this);
        // Method: changeCurrencySubType() | Slot: 46058 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(SerializedGraph* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(SerializedGraph* __this);
        // Method: Method_14(void* node) | Slot: 37316 | Token: 0x12545
        using fn_Method_14 = void* (*)(SerializedGraph* __this, void* node);
        // Method: Method_15() | Slot: 0 | Token: 0x63e8
        using fn_Method_15 = void* (*)(SerializedGraph* __this);
        // Method: Method_16(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_16 = void* (*)(SerializedGraph* __this, void* strAPPSecret);
        // Method: Method_17() | Slot: 25577 | Token: 0x1ffff
        using fn_Method_17 = void* (*)(SerializedGraph* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(SerializedGraph* __this);
        // Method: kMixer() | Slot: 65535 | Token: 0x602b3f0
        using fn_kMixer = void* (*)(SerializedGraph* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(SerializedGraph* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46066 | Token: 0x191c8
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SerializedGraph* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(SerializedGraph* __this);
        // Method: Method_23() | Slot: 37321 | Token: 0x12545
        using fn_Method_23 = void* (*)(SerializedGraph* __this);
        // Method: Method_24() | Slot: 0 | Token: 0x63eb
        using fn_Method_24 = void* (*)(SerializedGraph* __this);
        // Method: ateMesh(void* d) | Slot: 9541 | Token: 0x67
        using fn_ateMesh = void* (*)(SerializedGraph* __this, void* d);
        // Method: Method_26() | Slot: 25579 | Token: 0xffff
        using fn_Method_26 = void* (*)(SerializedGraph* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(SerializedGraph* __this);
        // Method: xer(void* holder) | Slot: 4 | Token: 0x602b3f8
        using fn_xer = void* (*)(SerializedGraph* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(SerializedGraph* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46074 | Token: 0x191cd
        using fn_GetExchangeCurrencySubType = void* (*)(SerializedGraph* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(SerializedGraph* __this);
        // Method: Method_32() | Slot: 65535 | Token: 0x12545
        using fn_Method_32 = void* (*)(SerializedGraph* __this);
        // Method: Method_33() | Slot: 0 | Token: 0x63ed
        using fn_Method_33 = void* (*)(SerializedGraph* __this);
        // Method: sh(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_sh = void* (*)(SerializedGraph* __this, void* cam);
        // Method: Method_35() | Slot: 25582 | Token: 0x10004
        using fn_Method_35 = void* (*)(SerializedGraph* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(SerializedGraph* __this);
        // Method: r(void* P0) | Slot: 65535 | Token: 0x602b400
        using fn_r = void* (*)(SerializedGraph* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(SerializedGraph* __this);
        // Method: changeCurrencySubType() | Slot: 46082 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(SerializedGraph* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(SerializedGraph* __this);
        // Method: Method_41(void* node) | Slot: 37332 | Token: 0x12545
        using fn_Method_41 = void* (*)(SerializedGraph* __this, void* node);
        // Method: Method_42() | Slot: 0 | Token: 0x63f0
        using fn_Method_42 = void* (*)(SerializedGraph* __this);
        // Method: Method_43(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_43 = void* (*)(SerializedGraph* __this, void* strAPPSecret);
        // Method: Method_44() | Slot: 25585 | Token: 0x1ffff
        using fn_Method_44 = void* (*)(SerializedGraph* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(SerializedGraph* __this);
        // Method: ostProcessingEffectsPlayableAsset() | Slot: 65535 | Token: 0x602b408
        using fn_ostProcessingEffectsPlayableAsset = void* (*)(SerializedGraph* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(SerializedGraph* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46090 | Token: 0x191d8
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SerializedGraph* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(SerializedGraph* __this);
        // Method: Method_50() | Slot: 37337 | Token: 0x12545
        using fn_Method_50 = void* (*)(SerializedGraph* __this);
        // Method: Method_51() | Slot: 0 | Token: 0x63f3
        using fn_Method_51 = void* (*)(SerializedGraph* __this);
        // Method: p(void* d) | Slot: 9541 | Token: 0x67
        using fn_p = void* (*)(SerializedGraph* __this, void* d);
    };

    // TypeDefIndex: 30424 | Original: COW.Gameplay.UGC.BlockEdit.SerializedList | Token: 0x20076d9
    struct SerializedList : Il2Cpp::Object {
        // Fields (1)
        void* serializedMaps; // serializedMaps | Token: 0x403ac19

        // Methods (24)
        // Method: Method_0() | Slot: 25587 | Token: 0xffff
        using fn_Method_0 = void* (*)(SerializedList* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(SerializedList* __this);
        // Method: ProcessingEffectsPlayableAsset(void* holder) | Slot: 4 | Token: 0x602b410
        using fn_ProcessingEffectsPlayableAsset = void* (*)(SerializedList* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(SerializedList* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46098 | Token: 0x191dd
        using fn_GetExchangeCurrencySubType = void* (*)(SerializedList* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(SerializedList* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0x12545
        using fn_Method_6 = void* (*)(SerializedList* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x63f5
        using fn_Method_7 = void* (*)(SerializedList* __this);
        // Method: mal(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_mal = void* (*)(SerializedList* __this, void* cam);
        // Method: Method_9() | Slot: 25590 | Token: 0x10004
        using fn_Method_9 = void* (*)(SerializedList* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(SerializedList* __this);
        // Method: ocessingEffectsPlayableAsset(void* P0) | Slot: 65535 | Token: 0x602b418
        using fn_ocessingEffectsPlayableAsset = void* (*)(SerializedList* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(SerializedList* __this);
        // Method: changeCurrencySubType() | Slot: 46106 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(SerializedList* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(SerializedList* __this);
        // Method: Method_15(void* node) | Slot: 37348 | Token: 0x12545
        using fn_Method_15 = void* (*)(SerializedList* __this, void* node);
        // Method: Method_16() | Slot: 0 | Token: 0x63f8
        using fn_Method_16 = void* (*)(SerializedList* __this);
        // Method: Method_17(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_17 = void* (*)(SerializedList* __this, void* strAPPSecret);
        // Method: Method_18() | Slot: 25593 | Token: 0x1ffff
        using fn_Method_18 = void* (*)(SerializedList* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(SerializedList* __this);
        // Method: ssingEffectsPlayableAsset() | Slot: 65535 | Token: 0x602b420
        using fn_ssingEffectsPlayableAsset = void* (*)(SerializedList* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(SerializedList* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46114 | Token: 0x191e8
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SerializedList* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(SerializedList* __this);
    };

    // TypeDefIndex: 30425 | Original: COW.Gameplay.UGC.BlockEdit.SimpleSeriMap | Token: 0x20076da
    struct SimpleSeriMap : Il2Cpp::Object {
        // Fields (1)
        void* values; // values | Token: 0x403ac1a

        // Methods (13)
        // Method: Method_0() | Slot: 37353 | Token: 0x12545
        using fn_Method_0 = void* (*)(SimpleSeriMap* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x63fb
        using fn_Method_1 = void* (*)(SimpleSeriMap* __this);
        // Method: basisz(void* d) | Slot: 9541 | Token: 0x67
        using fn_basisz = void* (*)(SimpleSeriMap* __this, void* d);
        // Method: Method_3() | Slot: 25595 | Token: 0xffff
        using fn_Method_3 = void* (*)(SimpleSeriMap* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(SimpleSeriMap* __this);
        // Method: ngEffectsPlayableAsset(void* holder) | Slot: 4 | Token: 0x602b428
        using fn_ngEffectsPlayableAsset = void* (*)(SimpleSeriMap* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(SimpleSeriMap* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46122 | Token: 0x191ed
        using fn_GetExchangeCurrencySubType = void* (*)(SimpleSeriMap* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(SimpleSeriMap* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x12545
        using fn_Method_9 = void* (*)(SimpleSeriMap* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x63fd
        using fn_Method_10 = void* (*)(SimpleSeriMap* __this);
        // Method: z(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_z = void* (*)(SimpleSeriMap* __this, void* cam);
        // Method: Method_12() | Slot: 25598 | Token: 0x10004
        using fn_Method_12 = void* (*)(SimpleSeriMap* __this);
    };

    // TypeDefIndex: 30426 | Original: COW.Gameplay.UGC.BlockEdit.TypeInfo | Token: 0x20076db
    struct TypeInfo : Il2Cpp::Object {
        // Fields (1)
        void* m_FullType; // m_FullType | Token: 0x403ac1b

        // Methods (10)
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(TypeInfo* __this);
        // Method: EffectsPlayableAsset(void* P0) | Slot: 65535 | Token: 0x602b430
        using fn_EffectsPlayableAsset = void* (*)(TypeInfo* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(TypeInfo* __this);
        // Method: changeCurrencySubType() | Slot: 46130 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(TypeInfo* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(TypeInfo* __this);
        // Method: Method_5(void* node) | Slot: 37364 | Token: 0x12545
        using fn_Method_5 = void* (*)(TypeInfo* __this, void* node);
        // Method: Method_6() | Slot: 0 | Token: 0x6400
        using fn_Method_6 = void* (*)(TypeInfo* __this);
        // Method: Method_7(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_7 = void* (*)(TypeInfo* __this, void* strAPPSecret);
        // Method: Method_8() | Slot: 25601 | Token: 0x1ffff
        using fn_Method_8 = void* (*)(TypeInfo* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(TypeInfo* __this);
    };

    // TypeDefIndex: 30427 | Original: COW.Gameplay.UGC.BlockEdit.ArrayValue | Token: 0x20076dc
    struct ArrayValue : Il2Cpp::Object {
        // Fields (3)
        void* arrayType; // arrayType | Token: 0x403ac1c
        void* contents; // contents | Token: 0x403ac1d
        void* Context; // Context | Token: 0x403ac1e

        // Methods (6)
        // Method: ectsPlayableAsset() | Slot: 65535 | Token: 0x602b438
        using fn_ectsPlayableAsset = void* (*)(ArrayValue* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(ArrayValue* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46138 | Token: 0x191f8
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(ArrayValue* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(ArrayValue* __this);
        // Method: Method_4() | Slot: 37369 | Token: 0x12545
        using fn_Method_4 = void* (*)(ArrayValue* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x6403
        using fn_Method_5 = void* (*)(ArrayValue* __this);
    };

    // TypeDefIndex: 30428 | Original: COW.Gameplay.UGC.BlockEdit.FuncRefValue | Token: 0x20076dd
    struct FuncRefValue : Il2Cpp::Object {
        // Fields (5)
        void* graphId; // graphId | Token: 0x403ac1f
        void* funcId; // funcId | Token: 0x403ac20
        void* isAsync; // isAsync | Token: 0x403ac21
        void* args; // args | Token: 0x403ac22
        void* Context; // Context | Token: 0x403ac23

        // Methods (7)
        // Method: BasisVectors(void* d) | Slot: 9541 | Token: 0x67
        using fn_BasisVectors = void* (*)(FuncRefValue* __this, void* d);
        // Method: Method_1() | Slot: 25603 | Token: 0xffff
        using fn_Method_1 = void* (*)(FuncRefValue* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(FuncRefValue* __this);
        // Method: sPlayableAsset(void* holder) | Slot: 4 | Token: 0x602b440
        using fn_sPlayableAsset = void* (*)(FuncRefValue* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(FuncRefValue* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46146 | Token: 0x191fd
        using fn_GetExchangeCurrencySubType = void* (*)(FuncRefValue* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(FuncRefValue* __this);
    };

    // TypeDefIndex: 30429 | Original: COW.Gameplay.UGC.BlockEdit.ValueData | Token: 0x20076de
    struct ValueData : Il2Cpp::Object {
        // Fields (23)
        void* EditorValueType; // EditorValueType | Token: 0x403ac24
        void* ActualType; // ActualType | Token: 0x403ac25
        void* FormalType; // FormalType | Token: 0x403ac26
        void* boolValue; // boolValue | Token: 0x403ac27
        void* intValue; // intValue | Token: 0x403ac28
        void* floatValue; // floatValue | Token: 0x403ac29
        void* stringValue; // stringValue | Token: 0x403ac2a
        void* vector3Value; // vector3Value | Token: 0x403ac2b
        void* value; // value | Token: 0x403ac2c
        void* localVarDefineValue; // localVarDefineValue | Token: 0x403ac2d
        void* funcDefineValue; // funcDefineValue | Token: 0x403ac2e
        void* HudEventDefineData; // HudEventDefineData | Token: 0x403ac2f
        void* userCustomEventRefValue; // userCustomEventRefValue | Token: 0x403ac30
        void* dispatchUserCustomEventRefValue; // dispatchUserCustomEventRefValue | Token: 0x403ac31
        void* funcRefValue; // funcRefValue | Token: 0x403ac32
        void* arrayValue; // arrayValue | Token: 0x403ac33
        void* Context; // Context | Token: 0x403ac34
        void* Owner; // Owner | Token: 0x403ac35
        void* FieldDefine; // FieldDefine | Token: 0x403ac36
        void* FieldIndex; // FieldIndex | Token: 0x403ac37
        void* Graph; // Graph | Token: 0x403ac38
        void* UserRef; // UserRef | Token: 0x403ac39
        void* IsAvailable; // IsAvailable | Token: 0x403ac3a

        // Methods (29)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(ValueData* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x6405
        using fn_Method_1 = void* (*)(ValueData* __this);
        // Method: Vectors(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_Vectors = void* (*)(ValueData* __this, void* cam);
        // Method: Method_3() | Slot: 25606 | Token: 0x10004
        using fn_Method_3 = void* (*)(ValueData* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(ValueData* __this);
        // Method: layableAsset(void* P0) | Slot: 65535 | Token: 0x602b448
        using fn_layableAsset = void* (*)(ValueData* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(ValueData* __this);
        // Method: changeCurrencySubType() | Slot: 46154 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(ValueData* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(ValueData* __this);
        // Method: Method_9(void* node) | Slot: 37380 | Token: 0x12545
        using fn_Method_9 = void* (*)(ValueData* __this, void* node);
        // Method: Method_10() | Slot: 0 | Token: 0x6408
        using fn_Method_10 = void* (*)(ValueData* __this);
        // Method: Method_11(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_11 = void* (*)(ValueData* __this, void* strAPPSecret);
        // Method: Method_12() | Slot: 25609 | Token: 0x1ffff
        using fn_Method_12 = void* (*)(ValueData* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(ValueData* __this);
        // Method: ableAsset() | Slot: 65535 | Token: 0x602b450
        using fn_ableAsset = void* (*)(ValueData* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(ValueData* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46162 | Token: 0x19208
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(ValueData* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(ValueData* __this);
        // Method: Method_18() | Slot: 37385 | Token: 0x12545
        using fn_Method_18 = void* (*)(ValueData* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x640b
        using fn_Method_19 = void* (*)(ValueData* __this);
        // Method: Length(void* d) | Slot: 9541 | Token: 0x67
        using fn_Length = void* (*)(ValueData* __this, void* d);
        // Method: Method_21() | Slot: 25611 | Token: 0xffff
        using fn_Method_21 = void* (*)(ValueData* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(ValueData* __this);
        // Method: eAsset(void* holder) | Slot: 4 | Token: 0x602b458
        using fn_eAsset = void* (*)(ValueData* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(ValueData* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46170 | Token: 0x1920d
        using fn_GetExchangeCurrencySubType = void* (*)(ValueData* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(ValueData* __this);
        // Method: Method_27() | Slot: 65535 | Token: 0x12545
        using fn_Method_27 = void* (*)(ValueData* __this);
        // Method: Method_28() | Slot: 0 | Token: 0x640d
        using fn_Method_28 = void* (*)(ValueData* __this);
    };

    // TypeDefIndex: 30430 | Original: COW.Gameplay.UGC.BlockEdit.UIDataBlockType | Token: 0x20076df
    struct UIDataBlockType : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x403ac3b
        void* Normal; // Normal | Token: 0x403ac3c
        void* ConstValue; // ConstValue | Token: 0x403ac3d
        void* Variable; // Variable | Token: 0x403ac3e
    };

    // TypeDefIndex: 30431 | Original: COW.Gameplay.UGC.BlockEdit.VarDefineData | Token: 0x20076e0
    struct VarDefineData : Il2Cpp::Object {
        // Fields (12)
        void* id; // id | Token: 0x403ac3f
        void* varName; // varName | Token: 0x403ac40
        void* m_VarTypeInfo; // m_VarTypeInfo | Token: 0x403ac41
        void* isVarNameModified; // isVarNameModified | Token: 0x403ac42
        void* defaultValue; // defaultValue | Token: 0x403ac43
        void* GetterData; // GetterData | Token: 0x403ac44
        void* SetterData; // SetterData | Token: 0x403ac45
        void* OnChanged; // OnChanged | Token: 0x403ac46
        void* OnRemoved; // OnRemoved | Token: 0x403ac47
        void* Context; // Context | Token: 0x403ac48
        void* Graph; // Graph | Token: 0x403ac49
        void* UserRef; // UserRef | Token: 0x403ac4a

        // Methods (9)
        // Method: h(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_h = void* (*)(VarDefineData* __this, void* cam);
        // Method: Method_1() | Slot: 25614 | Token: 0x10004
        using fn_Method_1 = void* (*)(VarDefineData* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(VarDefineData* __this);
        // Method: sset(void* P0) | Slot: 65535 | Token: 0x602b460
        using fn_sset = void* (*)(VarDefineData* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(VarDefineData* __this);
        // Method: changeCurrencySubType() | Slot: 46178 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(VarDefineData* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(VarDefineData* __this);
        // Method: Method_7(void* node) | Slot: 37396 | Token: 0x12545
        using fn_Method_7 = void* (*)(VarDefineData* __this, void* node);
        // Method: Method_8() | Slot: 0 | Token: 0x6410
        using fn_Method_8 = void* (*)(VarDefineData* __this);
    };

    // TypeDefIndex: 30432 | Original: COW.Gameplay.UGC.BlockEdit.LocalVarDefineData | Token: 0x20076e1
    struct LocalVarDefineData : Il2Cpp::Object {
        // Fields (1)
        void* Owner; // Owner | Token: 0x403ac4b

        // Methods (5)
        // Method: Method_0(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_0 = void* (*)(LocalVarDefineData* __this, void* strAPPSecret);
        // Method: Method_1() | Slot: 25617 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(LocalVarDefineData* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(LocalVarDefineData* __this);
        // Method: t() | Slot: 65535 | Token: 0x602b468
        using fn_t = void* (*)(LocalVarDefineData* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(LocalVarDefineData* __this);
    };

    // TypeDefIndex: 30433 | Original: COW.Gameplay.UGC.BlockEdit.GraphVarDefineData | Token: 0x20076e2
    struct GraphVarDefineData : Il2Cpp::Object {
        // Fields (2)
        void* Owner; // Owner | Token: 0x403ac4c
        void* index; // index | Token: 0x403ac4d

        // Methods (8)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46186 | Token: 0x19218
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(GraphVarDefineData* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(GraphVarDefineData* __this);
        // Method: Method_2() | Slot: 37401 | Token: 0x12545
        using fn_Method_2 = void* (*)(GraphVarDefineData* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x6413
        using fn_Method_3 = void* (*)(GraphVarDefineData* __this);
        // Method: Direction(void* d) | Slot: 9541 | Token: 0x67
        using fn_Direction = void* (*)(GraphVarDefineData* __this, void* d);
        // Method: Method_5() | Slot: 25619 | Token: 0xffff
        using fn_Method_5 = void* (*)(GraphVarDefineData* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(GraphVarDefineData* __this);
        // Method: nvert(void* holder) | Slot: 4 | Token: 0x602b470
        using fn_nvert = void* (*)(GraphVarDefineData* __this, void* holder);
    };

    // TypeDefIndex: 30434 | Original: COW.Gameplay.UGC.BlockEdit.VarRecord | Token: 0x20076e3
    struct VarRecord : Il2Cpp::Object {
        // Fields (2)
        void* VarDefine; // VarDefine | Token: 0x403ac4e
        void* RefBlockRecords; // RefBlockRecords | Token: 0x403ac4f

        // Methods (3)
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(VarRecord* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46194 | Token: 0x1921d
        using fn_GetExchangeCurrencySubType = void* (*)(VarRecord* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(VarRecord* __this);
    };

    // TypeDefIndex: 30435 | Original: COW.Gameplay.UGC.BlockEdit.GraphVarRecord | Token: 0x20076e4
    struct GraphVarRecord : Il2Cpp::Object {
        // Fields (3)
        void* Record; // Record | Token: 0x403ac50
        void* Index; // Index | Token: 0x403ac51
        void* svOffset; // svOffset | Token: 0x403ac52

        // Methods (2)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(GraphVarRecord* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x6415
        using fn_Method_1 = void* (*)(GraphVarRecord* __this);
    };

    // TypeDefIndex: 30437 | Original: COW.Gameplay.UGC.BlockEdit.BlockDefine | Token: 0x20076e5
    struct BlockDefine : Il2Cpp::Object {
        // Fields (13)
        void* blockType; // blockType | Token: 0x403ac53
        void* typeName; // typeName | Token: 0x403ac54
        void* nameKey; // nameKey | Token: 0x403ac55
        void* funcType; // funcType | Token: 0x403ac56
        void* scriptName; // scriptName | Token: 0x403ac57
        void* apiRefName; // apiRefName | Token: 0x403ac58
        void* module; // module | Token: 0x403ac59
        void* IsNotExportable; // IsNotExportable | Token: 0x403ac5a
        void* SerializeBlockFields; // SerializeBlockFields | Token: 0x403ac5b
        void* TypeChangeRule; // TypeChangeRule | Token: 0x403ac5c
        void* Context; // Context | Token: 0x403ac5d
        void* mConfigData; // mConfigData | Token: 0x403ac5e
        void* apiTarget; // apiTarget | Token: 0x403ac5f

        // Methods (5)
        // Method: tion(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_tion = void* (*)(BlockDefine* __this, void* cam);
        // Method: Method_1() | Slot: 25622 | Token: 0x10004
        using fn_Method_1 = void* (*)(BlockDefine* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(BlockDefine* __this);
        // Method: ert(void* P0) | Slot: 65535 | Token: 0x602b478
        using fn_ert = void* (*)(BlockDefine* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BlockDefine* __this);
    };

    // TypeDefIndex: 30438 | Original: COW.Gameplay.UGC.BlockEdit.BlockDefineDictionary | Token: 0x20076e7
    struct BlockDefineDictionary : Il2Cpp::Object {
        // Fields (4)
        void* IsDataCorrupted; // IsDataCorrupted | Token: 0x403ac64
        void* BlockDefines; // BlockDefines | Token: 0x403ac65
        void* DynamicBlockDefineHelpers; // DynamicBlockDefineHelpers | Token: 0x403ac66
        void* Context; // Context | Token: 0x403ac67

        // Methods (3)
        // Method: changeCurrencySubType() | Slot: 46202 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BlockDefineDictionary* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BlockDefineDictionary* __this);
        // Method: Method_2(void* node) | Slot: 37412 | Token: 0x12545
        using fn_Method_2 = void* (*)(BlockDefineDictionary* __this, void* node);
    };

    // TypeDefIndex: 30439 | Original: COW.Gameplay.UGC.BlockEdit.BlockFieldDefine | Token: 0x20076e8
    struct BlockFieldDefine : Il2Cpp::Object {
        // Fields (9)
        void* fieldType; // fieldType | Token: 0x403ac68
        void* labelKey; // labelKey | Token: 0x403ac69
        void* enumType; // enumType | Token: 0x403ac6a
        void* nameKey; // nameKey | Token: 0x403ac6b
        void* isNotLinkable; // isNotLinkable | Token: 0x403ac6c
        void* updateBlock; // updateBlock | Token: 0x403ac6d
        void* locWithIndex; // locWithIndex | Token: 0x403ac6e
        void* filters; // filters | Token: 0x403ac6f
        void* Owner; // Owner | Token: 0x403ac70

        // Methods (3)
        // Method: Method_0() | Slot: 0 | Token: 0x6418
        using fn_Method_0 = void* (*)(BlockFieldDefine* __this);
        // Method: Method_1(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_1 = void* (*)(BlockFieldDefine* __this, void* strAPPSecret);
        // Method: Method_2() | Slot: 25625 | Token: 0x1ffff
        using fn_Method_2 = void* (*)(BlockFieldDefine* __this);
    };

    // TypeDefIndex: 30440 | Original: COW.Gameplay.UGC.BlockEdit.SerializeBlockFieldDefine | Token: 0x20076e9
    struct SerializeBlockFieldDefine : Il2Cpp::Object {
        // Fields (7)
        void* EditorValueType; // EditorValueType | Token: 0x403ac71
        void* DefinedType; // DefinedType | Token: 0x403ac72
        void* valueIndex; // valueIndex | Token: 0x403ac73
        void* onlyForCodeBlock; // onlyForCodeBlock | Token: 0x403ac74
        void* BodyIndex; // BodyIndex | Token: 0x403ac75
        void* SerializeBlockFieldIndex; // SerializeBlockFieldIndex | Token: 0x403ac76
        void* desKey; // desKey | Token: 0x403ac77

        // Methods (4)
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(SerializeBlockFieldDefine* __this);
        // Method: () | Slot: 65535 | Token: 0x602b480
        using fn_unnamed = void* (*)(SerializeBlockFieldDefine* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(SerializeBlockFieldDefine* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46210 | Token: 0x19228
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SerializeBlockFieldDefine* __this);
    };

    // TypeDefIndex: 30441 | Original: COW.Gameplay.UGC.BlockEdit.SlotFieldDefine | Token: 0x20076ea
    struct SlotFieldDefine : Il2Cpp::Object {
        // Fields (1)
        void* notAllowNull; // notAllowNull | Token: 0x403ac78

        // Methods (3)
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(SlotFieldDefine* __this);
        // Method: Method_1() | Slot: 37417 | Token: 0x12545
        using fn_Method_1 = void* (*)(SlotFieldDefine* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x641b
        using fn_Method_2 = void* (*)(SlotFieldDefine* __this);
    };

    // TypeDefIndex: 30442 | Original: COW.Gameplay.UGC.BlockEdit.LocalVarDefineFieldDefine | Token: 0x20076eb
    struct LocalVarDefineFieldDefine : Il2Cpp::Object {
        // Fields (1)
        void* isOut; // isOut | Token: 0x403ac79

        // Methods (3)
        // Method: ection(void* d) | Slot: 9541 | Token: 0x67
        using fn_ection = void* (*)(LocalVarDefineFieldDefine* __this, void* d);
        // Method: Method_1() | Slot: 25627 | Token: 0xffff
        using fn_Method_1 = void* (*)(LocalVarDefineFieldDefine* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(LocalVarDefineFieldDefine* __this);
    };

    // TypeDefIndex: 30443 | Original: COW.Gameplay.UGC.BlockEdit.DataBlockDefine | Token: 0x20076ec
    struct DataBlockDefine : Il2Cpp::Object {
        // Fields (4)
        void* ReturnType; // ReturnType | Token: 0x403ac7a
        void* ReturnKey; // ReturnKey | Token: 0x403ac7b
        void* fields; // fields | Token: 0x403ac7c
        void* UIBlockType; // UIBlockType | Token: 0x403ac7d

        // Methods (3)
        // Method: stProcessingEffectsPlayableBehaviour(void* holder) | Slot: 4 | Token: 0x602b488
        using fn_stProcessingEffectsPlayableBehaviour = void* (*)(DataBlockDefine* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(DataBlockDefine* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46218 | Token: 0x1922d
        using fn_GetExchangeCurrencySubType = void* (*)(DataBlockDefine* __this);
    };

    // TypeDefIndex: 30444 | Original: COW.Gameplay.UGC.BlockEdit.DynamicBlockDefineHelper | Token: 0x20076ed
    struct DynamicBlockDefineHelper : Il2Cpp::Object {
        // Fields (1)
        void* OriginalBlockDefine; // OriginalBlockDefine | Token: 0x403ac7e

        // Methods (6)
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(DynamicBlockDefineHelper* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(DynamicBlockDefineHelper* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x641d
        using fn_Method_2 = void* (*)(DynamicBlockDefineHelper* __this);
        // Method: n(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_n = void* (*)(DynamicBlockDefineHelper* __this, void* cam);
        // Method: Method_4() | Slot: 25630 | Token: 0x10004
        using fn_Method_4 = void* (*)(DynamicBlockDefineHelper* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(DynamicBlockDefineHelper* __this);
    };

    // TypeDefIndex: 30445 | Original: COW.Gameplay.UGC.BlockEdit.FieldExtendableBlockDefineHelper | Token: 0x20076ee
    struct FieldExtendableBlockDefineHelper : Il2Cpp::Object {

        // Methods (8)
        // Method: ProcessingEffectsPlayableBehaviour(void* P0) | Slot: 65535 | Token: 0x602b490
        using fn_ProcessingEffectsPlayableBehaviour = void* (*)(FieldExtendableBlockDefineHelper* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(FieldExtendableBlockDefineHelper* __this);
        // Method: changeCurrencySubType() | Slot: 46226 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(FieldExtendableBlockDefineHelper* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(FieldExtendableBlockDefineHelper* __this);
        // Method: Method_4(void* node) | Slot: 37428 | Token: 0x12545
        using fn_Method_4 = void* (*)(FieldExtendableBlockDefineHelper* __this, void* node);
        // Method: Method_5() | Slot: 0 | Token: 0x6420
        using fn_Method_5 = void* (*)(FieldExtendableBlockDefineHelper* __this);
        // Method: Method_6(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_6 = void* (*)(FieldExtendableBlockDefineHelper* __this, void* strAPPSecret);
        // Method: Method_7() | Slot: 25633 | Token: 0x1ffff
        using fn_Method_7 = void* (*)(FieldExtendableBlockDefineHelper* __this);
    };

    // TypeDefIndex: 30446 | Original: COW.Gameplay.UGC.BlockEdit.ArithmeticBlockDefineHelper | Token: 0x20076ef
    struct ArithmeticBlockDefineHelper : Il2Cpp::Object {

        // Methods (3)
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(ArithmeticBlockDefineHelper* __this);
        // Method: cessingEffectsPlayableBehaviour() | Slot: 65535 | Token: 0x602b498
        using fn_cessingEffectsPlayableBehaviour = void* (*)(ArithmeticBlockDefineHelper* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(ArithmeticBlockDefineHelper* __this);
    };

    // TypeDefIndex: 30447 | Original: COW.Gameplay.UGC.BlockEdit.LogicalOperationBlockDefineHelper | Token: 0x20076f0
    struct LogicalOperationBlockDefineHelper : Il2Cpp::Object {

        // Methods (3)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46234 | Token: 0x19238
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(LogicalOperationBlockDefineHelper* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(LogicalOperationBlockDefineHelper* __this);
        // Method: Method_2() | Slot: 37433 | Token: 0x12545
        using fn_Method_2 = void* (*)(LogicalOperationBlockDefineHelper* __this);
    };

    // TypeDefIndex: 30448 | Original: COW.Gameplay.UGC.BlockEdit.StrConcatBlockDefineHelper | Token: 0x20076f1
    struct StrConcatBlockDefineHelper : Il2Cpp::Object {

        // Methods (3)
        // Method: Method_0() | Slot: 0 | Token: 0x6423
        using fn_Method_0 = void* (*)(StrConcatBlockDefineHelper* __this);
        // Method: ffset(void* d) | Slot: 9541 | Token: 0x67
        using fn_ffset = void* (*)(StrConcatBlockDefineHelper* __this, void* d);
        // Method: Method_2() | Slot: 25635 | Token: 0xffff
        using fn_Method_2 = void* (*)(StrConcatBlockDefineHelper* __this);
    };

    // TypeDefIndex: 30449 | Original: COW.Gameplay.UGC.BlockEdit.GetEntityPropertyBlockDefineHelper | Token: 0x20076f2
    struct GetEntityPropertyBlockDefineHelper : Il2Cpp::Object {

        // Methods (3)
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(GetEntityPropertyBlockDefineHelper* __this);
        // Method: singEffectsPlayableBehaviour(void* holder) | Slot: 4 | Token: 0x602b4a0
        using fn_singEffectsPlayableBehaviour = void* (*)(GetEntityPropertyBlockDefineHelper* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(GetEntityPropertyBlockDefineHelper* __this);
    };

    // TypeDefIndex: 30450 | Original: COW.Gameplay.UGC.BlockEdit.ProcessBlockDefine | Token: 0x20076f3
    struct ProcessBlockDefine : Il2Cpp::Object {
        // Fields (1)
        void* bodies; // bodies | Token: 0x403ac7f

        // Methods (3)
        // Method: GetExchangeCurrencySubType() | Slot: 46242 | Token: 0x1923d
        using fn_GetExchangeCurrencySubType = void* (*)(ProcessBlockDefine* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(ProcessBlockDefine* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x12545
        using fn_Method_2 = void* (*)(ProcessBlockDefine* __this);
    };

    // TypeDefIndex: 30451 | Original: COW.Gameplay.UGC.BlockEdit.EventBlockDefine | Token: 0x20076f4
    struct EventBlockDefine : Il2Cpp::Object {
        // Fields (1)
        void* eventType; // eventType | Token: 0x403ac80

        // Methods (3)
        // Method: Method_0() | Slot: 0 | Token: 0x6425
        using fn_Method_0 = void* (*)(EventBlockDefine* __this);
        // Method: (void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_unnamed = void* (*)(EventBlockDefine* __this, void* cam);
        // Method: Method_2() | Slot: 25638 | Token: 0x10004
        using fn_Method_2 = void* (*)(EventBlockDefine* __this);
    };

    // TypeDefIndex: 30452 | Original: COW.Gameplay.UGC.BlockEdit.ActionBlockDefine | Token: 0x20076f5
    struct ActionBlockDefine : Il2Cpp::Object {

        // Methods (1)
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(ActionBlockDefine* __this);
    };

    // TypeDefIndex: 30453 | Original: COW.Gameplay.UGC.BlockEdit.FunctionBlockDefine | Token: 0x20076f6
    struct FunctionBlockDefine : Il2Cpp::Object {

        // Methods (1)
        // Method: ngEffectsPlayableBehaviour(void* P0) | Slot: 65535 | Token: 0x602b4a8
        using fn_ngEffectsPlayableBehaviour = void* (*)(FunctionBlockDefine* __this, void* P0);
    };

    // TypeDefIndex: 30454 | Original: COW.Gameplay.UGC.BlockEdit.UserCustomEventBlockDefine | Token: 0x20076f7
    struct UserCustomEventBlockDefine : Il2Cpp::Object {

        // Methods (1)
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(UserCustomEventBlockDefine* __this);
    };

    // TypeDefIndex: 30455 | Original: COW.Gameplay.UGC.BlockEdit.ProcessBlockBodyDefine | Token: 0x20076f8
    struct ProcessBlockBodyDefine : Il2Cpp::Object {
        // Fields (4)
        void* fields; // fields | Token: 0x403ac81
        void* isLinkable; // isLinkable | Token: 0x403ac82
        void* SerializeBlockFields; // SerializeBlockFields | Token: 0x403ac83
        void* Owner; // Owner | Token: 0x403ac84

        // Methods (2)
        // Method: changeCurrencySubType() | Slot: 46250 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(ProcessBlockBodyDefine* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(ProcessBlockBodyDefine* __this);
    };

    // TypeDefIndex: 30456 | Original: COW.Gameplay.UGC.BlockEdit.TypeChangeRuleDefine | Token: 0x20076f9
    struct TypeChangeRuleDefine : Il2Cpp::Object {
        // Fields (1)
        void* Expressions; // Expressions | Token: 0x403ac85

        // Methods (3)
        // Method: Method_0(void* node) | Slot: 37444 | Token: 0x12545
        using fn_Method_0 = void* (*)(TypeChangeRuleDefine* __this, void* node);
        // Method: Method_1() | Slot: 0 | Token: 0x6428
        using fn_Method_1 = void* (*)(TypeChangeRuleDefine* __this);
        // Method: Method_2(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_2 = void* (*)(TypeChangeRuleDefine* __this, void* strAPPSecret);
    };

    // TypeDefIndex: 30457 | Original: COW.Gameplay.UGC.BlockEdit.ExpressionDefine | Token: 0x20076fa
    struct ExpressionDefine : Il2Cpp::Object {
        // Fields (6)
        void* TokenReg; // TokenReg | Token: 0x403ac86
        void* ExpressionStack; // ExpressionStack | Token: 0x403ac87
        void* ExpressionTokens; // ExpressionTokens | Token: 0x403ac88
        void* AssignToReturnType; // AssignToReturnType | Token: 0x403ac89
        void* AssignToValueByIndex; // AssignToValueByIndex | Token: 0x403ac8a
        void* SourceExpression; // SourceExpression | Token: 0x403ac8b

        // Methods (6)
        // Method: Method_0() | Slot: 25641 | Token: 0x1ffff
        using fn_Method_0 = void* (*)(ExpressionDefine* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(ExpressionDefine* __this);
        // Method: ffectsPlayableBehaviour() | Slot: 65535 | Token: 0x602b4b0
        using fn_ffectsPlayableBehaviour = void* (*)(ExpressionDefine* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(ExpressionDefine* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46258 | Token: 0x19248
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(ExpressionDefine* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(ExpressionDefine* __this);
    };

    // TypeDefIndex: 30458 | Original: COW.Gameplay.UGC.BlockEdit.BlockExporter | Token: 0x20076fb
    struct BlockExporter : Il2Cpp::Object {
        // Fields (4)
        void* m_ArithmeticSignPriority; // m_ArithmeticSignPriority | Token: 0x403ac8c
        void* m_LogicalOperatorPriority; // m_LogicalOperatorPriority | Token: 0x403ac8d
        void* m_UserCustomEventIdDic; // m_UserCustomEventIdDic | Token: 0x403ac8e
        void* m_UserCustomEventIdCurIndex; // m_UserCustomEventIdCurIndex | Token: 0x403ac8f

        // Methods (17)
        // Method: Method_0() | Slot: 37449 | Token: 0x12545
        using fn_Method_0 = void* (*)(BlockExporter* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x642b
        using fn_Method_1 = void* (*)(BlockExporter* __this);
        // Method: itionOffset(void* d) | Slot: 9541 | Token: 0x67
        using fn_itionOffset = void* (*)(BlockExporter* __this, void* d);
        // Method: Method_3() | Slot: 25643 | Token: 0xffff
        using fn_Method_3 = void* (*)(BlockExporter* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(BlockExporter* __this);
        // Method: ctsPlayableBehaviour(void* holder) | Slot: 4 | Token: 0x602b4b8
        using fn_ctsPlayableBehaviour = void* (*)(BlockExporter* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(BlockExporter* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46266 | Token: 0x1924d
        using fn_GetExchangeCurrencySubType = void* (*)(BlockExporter* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlockExporter* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x12545
        using fn_Method_9 = void* (*)(BlockExporter* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x642d
        using fn_Method_10 = void* (*)(BlockExporter* __this);
        // Method: Offset(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_Offset = void* (*)(BlockExporter* __this, void* cam);
        // Method: Method_12() | Slot: 25646 | Token: 0x10004
        using fn_Method_12 = void* (*)(BlockExporter* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(BlockExporter* __this);
        // Method: sPlayableBehaviour(void* P0) | Slot: 65535 | Token: 0x602b4c0
        using fn_sPlayableBehaviour = void* (*)(BlockExporter* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BlockExporter* __this);
        // Method: changeCurrencySubType() | Slot: 46274 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BlockExporter* __this);
    };

    // TypeDefIndex: 30459 | Original: COW.Gameplay.UGC.BlockEdit.BlockEditLibraries | Token: 0x20076fc
    struct BlockEditLibraries : Il2Cpp::Object {
        // Fields (3)
        void* Context; // Context | Token: 0x403ac90
        void* LibraryDict; // LibraryDict | Token: 0x403ac91
        void* BlockDataDictionary; // BlockDataDictionary | Token: 0x403ac92

        // Methods (2)
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BlockEditLibraries* __this);
        // Method: Method_1(void* node) | Slot: 37460 | Token: 0x12545
        using fn_Method_1 = void* (*)(BlockEditLibraries* __this, void* node);
    };

    // TypeDefIndex: 30461 | Original: COW.Gameplay.UGC.BlockEdit.LibraryData | Token: 0x20076fd
    struct LibraryData : Il2Cpp::Object {
        // Fields (3)
        void* _BlockCategory_k__BackingField; // <BlockCategory>k__BackingField | Token: 0x403ac93
        void* _BlockSubType_k__BackingField; // <BlockSubType>k__BackingField | Token: 0x403ac94
        void* BlockDataList; // BlockDataList | Token: 0x403ac95

        // Methods (7)
        // Method: Method_0() | Slot: 0 | Token: 0x6430
        using fn_Method_0 = void* (*)(LibraryData* __this);
        // Method: Method_1(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_1 = void* (*)(LibraryData* __this, void* strAPPSecret);
        // Method: Method_2() | Slot: 25649 | Token: 0x1ffff
        using fn_Method_2 = void* (*)(LibraryData* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(LibraryData* __this);
        // Method: ayableBehaviour() | Slot: 65535 | Token: 0x602b4c8
        using fn_ayableBehaviour = void* (*)(LibraryData* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(LibraryData* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46282 | Token: 0x19258
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(LibraryData* __this);
    };

    // TypeDefIndex: 30462 | Original: COW.Gameplay.UGC.BlockEdit.EditorValueType | Token: 0x20076ff
    struct EditorValueType : Il2Cpp::Object {
        // Fields (11)
        void* value__; // value__ | Token: 0x403ac98
        void* Const; // Const | Token: 0x403ac99
        void* Block; // Block | Token: 0x403ac9a
        void* VarRef; // VarRef | Token: 0x403ac9b
        void* LocalVarDefine; // LocalVarDefine | Token: 0x403ac9c
        void* FuncDefine; // FuncDefine | Token: 0x403ac9d
        void* HudEventDefine; // HudEventDefine | Token: 0x403ac9e
        void* FuncRef; // FuncRef | Token: 0x403ac9f
        void* UserCustomEventRef; // UserCustomEventRef | Token: 0x403aca0
        void* DispatchUserCustomEventRef; // DispatchUserCustomEventRef | Token: 0x403aca1
        void* Null; // Null | Token: 0x403aca2
    };

    // TypeDefIndex: 30463 | Original: COW.Gameplay.UGC.BlockEdit.UpdateType | Token: 0x2007700
    struct UpdateType : Il2Cpp::Object {
        // Fields (23)
        void* value__; // value__ | Token: 0x403aca3
        void* None; // None | Token: 0x403aca4
        void* Type; // Type | Token: 0x403aca5
        void* VarRefType; // VarRefType | Token: 0x403aca6
        void* RefClone; // RefClone | Token: 0x403aca7
        void* RefCloneForEntityClone; // RefCloneForEntityClone | Token: 0x403aca8
        void* CollectCustomString; // CollectCustomString | Token: 0x403aca9
        void* RegisterToGraph; // RegisterToGraph | Token: 0x403acaa
        void* UnregisterFromGraph; // UnregisterFromGraph | Token: 0x403acab
        void* CheckBlockLegality; // CheckBlockLegality | Token: 0x403acac
        void* GetCount; // GetCount | Token: 0x403acad
        void* FuncRefType; // FuncRefType | Token: 0x403acae
        void* FuncRefAddItem; // FuncRefAddItem | Token: 0x403acaf
        void* FuncRefRemoveItem; // FuncRefRemoveItem | Token: 0x403acb0
        void* FuncRefGraphRef; // FuncRefGraphRef | Token: 0x403acb1
        void* HudEventGraphRef; // HudEventGraphRef | Token: 0x403acb2
        void* CollectVarRef; // CollectVarRef | Token: 0x403acb3
        void* CollectLocalVarDefine; // CollectLocalVarDefine | Token: 0x403acb4
        void* CollectFuncCaller; // CollectFuncCaller | Token: 0x403acb5
        void* MapDefineId; // MapDefineId | Token: 0x403acb6
        void* CollectResRef; // CollectResRef | Token: 0x403acb7
        void* CollectSceneEntityRef; // CollectSceneEntityRef | Token: 0x403acb8
        void* CollectBlockWithCondition; // CollectBlockWithCondition | Token: 0x403acb9
    };

    // TypeDefIndex: 30464 | Original: COW.Gameplay.UGC.BlockEdit.ImportUserBlockDataError | Token: 0x2007701
    struct ImportUserBlockDataError : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x403acba
        void* Success; // Success | Token: 0x403acbb
        void* DataCorrupted; // DataCorrupted | Token: 0x403acbc
        void* ExceedLimit; // ExceedLimit | Token: 0x403acbd
    };

    // TypeDefIndex: 30465 | Original: COW.Gameplay.UGC.BlockEdit.IBlockDataContainer | Token: 0x2007702
    struct IBlockDataContainer : Il2Cpp::Object {

        // Methods (6)
        // Method: vable(void* d) | Slot: 9541 | Token: 0x67
        using fn_vable = void* (*)(IBlockDataContainer* __this, void* d);
        // Method: Method_1() | Slot: 25651 | Token: 0xffff
        using fn_Method_1 = void* (*)(IBlockDataContainer* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(IBlockDataContainer* __this);
        // Method: bleBehaviour(void* holder) | Slot: 4 | Token: 0x602b4d0
        using fn_bleBehaviour = void* (*)(IBlockDataContainer* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(IBlockDataContainer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46290 | Token: 0x1925d
        using fn_GetExchangeCurrencySubType = void* (*)(IBlockDataContainer* __this);
    };

    // TypeDefIndex: 30466 | Original: COW.Gameplay.UGC.BlockEdit.BlockDataUtil | Token: 0x2007703
    struct BlockDataUtil : Il2Cpp::Object {
        // Fields (8)
        void* RefIdMapping; // RefIdMapping | Token: 0x403acbe
        void* GraphRedirectTarget; // GraphRedirectTarget | Token: 0x403acbf
        void* CheckLocalVarDefineRangeCache; // CheckLocalVarDefineRangeCache | Token: 0x403acc0
        void* CheckLocalVarDefineRangeLogEnabled; // CheckLocalVarDefineRangeLogEnabled | Token: 0x403acc1
        void* CheckLocalVarDefineRangeRepeated; // CheckLocalVarDefineRangeRepeated | Token: 0x403acc2
        void* CheckedBlocks; // CheckedBlocks | Token: 0x403acc3
        void* TypeMismatchInfoCache; // TypeMismatchInfoCache | Token: 0x403acc4
        void* LibraryValueCompletionRequest; // LibraryValueCompletionRequest | Token: 0x403acc5

        // Methods (23)
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlockDataUtil* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(BlockDataUtil* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x6435
        using fn_Method_2 = void* (*)(BlockDataUtil* __this);
        // Method: (void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_unnamed = void* (*)(BlockDataUtil* __this, void* cam);
        // Method: Method_4() | Slot: 25654 | Token: 0x10004
        using fn_Method_4 = void* (*)(BlockDataUtil* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(BlockDataUtil* __this);
        // Method: eBehaviour(void* P0) | Slot: 65535 | Token: 0x602b4d8
        using fn_eBehaviour = void* (*)(BlockDataUtil* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(BlockDataUtil* __this);
        // Method: changeCurrencySubType() | Slot: 46298 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(BlockDataUtil* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(BlockDataUtil* __this);
        // Method: Method_10(void* node) | Slot: 37476 | Token: 0x12545
        using fn_Method_10 = void* (*)(BlockDataUtil* __this, void* node);
        // Method: Method_11() | Slot: 0 | Token: 0x6438
        using fn_Method_11 = void* (*)(BlockDataUtil* __this);
        // Method: Method_12(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_12 = void* (*)(BlockDataUtil* __this, void* strAPPSecret);
        // Method: Method_13() | Slot: 25657 | Token: 0x1ffff
        using fn_Method_13 = void* (*)(BlockDataUtil* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(BlockDataUtil* __this);
        // Method: haviour() | Slot: 65535 | Token: 0x602b4e0
        using fn_haviour = void* (*)(BlockDataUtil* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(BlockDataUtil* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46306 | Token: 0x19268
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(BlockDataUtil* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(BlockDataUtil* __this);
        // Method: Method_19() | Slot: 37481 | Token: 0x12545
        using fn_Method_19 = void* (*)(BlockDataUtil* __this);
        // Method: Method_20() | Slot: 0 | Token: 0x643b
        using fn_Method_20 = void* (*)(BlockDataUtil* __this);
        // Method: nt(void* d) | Slot: 9541 | Token: 0x67
        using fn_nt = void* (*)(BlockDataUtil* __this, void* d);
        // Method: Method_22() | Slot: 25659 | Token: 0xffff
        using fn_Method_22 = void* (*)(BlockDataUtil* __this);
    };

    // TypeDefIndex: 30467 | Original: COW.Gameplay.UGC.BlockEdit.ValueTypeUtil | Token: 0x2007704
    struct ValueTypeUtil : Il2Cpp::Object {

        // Methods (8)
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(ValueTypeUtil* __this);
        // Method: iour(void* holder) | Slot: 4 | Token: 0x602b4e8
        using fn_iour = void* (*)(ValueTypeUtil* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(ValueTypeUtil* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46314 | Token: 0x1926d
        using fn_GetExchangeCurrencySubType = void* (*)(ValueTypeUtil* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(ValueTypeUtil* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(ValueTypeUtil* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x643d
        using fn_Method_6 = void* (*)(ValueTypeUtil* __this);
        // Method: calVertices(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_calVertices = void* (*)(ValueTypeUtil* __this, void* cam);
    };

    // TypeDefIndex: 30468 | Original: COW.Gameplay.UGC.BlockEdit.MiscUtil | Token: 0x2007705
    struct MiscUtil : Il2Cpp::Object {
        // Fields (1)
        void* BlockCountByTypeCache; // BlockCountByTypeCache | Token: 0x403acc6

        // Methods (7)
        // Method: Method_0() | Slot: 25662 | Token: 0x10004
        using fn_Method_0 = void* (*)(MiscUtil* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(MiscUtil* __this);
        // Method: ur(void* P0) | Slot: 65535 | Token: 0x602b4f0
        using fn_ur = void* (*)(MiscUtil* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(MiscUtil* __this);
        // Method: changeCurrencySubType() | Slot: 46322 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(MiscUtil* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(MiscUtil* __this);
        // Method: Method_6(void* node) | Slot: 37492 | Token: 0x12545
        using fn_Method_6 = void* (*)(MiscUtil* __this, void* node);
    };

    // TypeDefIndex: 30469 | Original: COW.Gameplay.UGC.BlockEdit.ResRefUtil | Token: 0x2007706
    struct ResRefUtil : Il2Cpp::Object {

        // Methods (3)
        // Method: Method_0() | Slot: 0 | Token: 0x6440
        using fn_Method_0 = void* (*)(ResRefUtil* __this);
        // Method: Method_1(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_1 = void* (*)(ResRefUtil* __this, void* strAPPSecret);
        // Method: Method_2() | Slot: 25665 | Token: 0x1ffff
        using fn_Method_2 = void* (*)(ResRefUtil* __this);
    };

    // TypeDefIndex: 30471 | Original: COW.Gameplay.UGC.BlockEdit.CollectBlockWithConditionContext | Token: 0x2007707
    struct CollectBlockWithConditionContext : Il2Cpp::Object {
        // Fields (2)
        void* Conditions; // Conditions | Token: 0x403acc7
        void* BlockDataList; // BlockDataList | Token: 0x403acc8

        // Methods (2)
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(CollectBlockWithConditionContext* __this);
        // Method: OnGraphStart() | Slot: 65535 | Token: 0x602b4f8
        using fn_OnGraphStart = void* (*)(CollectBlockWithConditionContext* __this);
    };

    // TypeDefIndex: 30472 | Original: COW.Gameplay.UGC.BlockEdit.BlockDefineUtil | Token: 0x2007709
    struct BlockDefineUtil : Il2Cpp::Object {
        // Fields (1)
        void* CurrentBuildBodyIndex; // CurrentBuildBodyIndex | Token: 0x403accc

        // Methods (14)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46330 | Token: 0x19278
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(BlockDefineUtil* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(BlockDefineUtil* __this);
        // Method: Method_2() | Slot: 37497 | Token: 0x12545
        using fn_Method_2 = void* (*)(BlockDefineUtil* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x6443
        using fn_Method_3 = void* (*)(BlockDefineUtil* __this);
        // Method: (void* d) | Slot: 9541 | Token: 0x67
        using fn_unnamed = void* (*)(BlockDefineUtil* __this, void* d);
        // Method: Method_5() | Slot: 25667 | Token: 0xffff
        using fn_Method_5 = void* (*)(BlockDefineUtil* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(BlockDefineUtil* __this);
        // Method: raphStart(void* holder) | Slot: 4 | Token: 0x602b500
        using fn_raphStart = void* (*)(BlockDefineUtil* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(BlockDefineUtil* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46338 | Token: 0x1927d
        using fn_GetExchangeCurrencySubType = void* (*)(BlockDefineUtil* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlockDefineUtil* __this);
        // Method: Method_11() | Slot: 65535 | Token: 0x12545
        using fn_Method_11 = void* (*)(BlockDefineUtil* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x6445
        using fn_Method_12 = void* (*)(BlockDefineUtil* __this);
        // Method: lNormal(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_lNormal = void* (*)(BlockDefineUtil* __this, void* cam);
    };

    // TypeDefIndex: 30473 | Original: COW.Gameplay.UGC.BlockEdit.OverrideExportReport | Token: 0x200770a
    struct OverrideExportReport : Il2Cpp::Object {
        // Fields (2)
        void* Succeed; // Succeed | Token: 0x403accd
        void* Overriden; // Overriden | Token: 0x403acce
    };

    // TypeDefIndex: 30474 | Original: COW.Gameplay.UGC.BlockEdit.ExportUtil | Token: 0x200770b
    struct ExportUtil : Il2Cpp::Object {
        // Fields (1)
        void* ExportError; // ExportError | Token: 0x403accf

        // Methods (15)
        // Method: Method_0() | Slot: 25670 | Token: 0x10004
        using fn_Method_0 = void* (*)(ExportUtil* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(ExportUtil* __this);
        // Method: phStart(void* P0) | Slot: 65535 | Token: 0x602b508
        using fn_phStart = void* (*)(ExportUtil* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(ExportUtil* __this);
        // Method: changeCurrencySubType() | Slot: 46346 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(ExportUtil* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(ExportUtil* __this);
        // Method: Method_6(void* node) | Slot: 37508 | Token: 0x12545
        using fn_Method_6 = void* (*)(ExportUtil* __this, void* node);
        // Method: Method_7() | Slot: 0 | Token: 0x6448
        using fn_Method_7 = void* (*)(ExportUtil* __this);
        // Method: Method_8(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_8 = void* (*)(ExportUtil* __this, void* strAPPSecret);
        // Method: Method_9() | Slot: 25673 | Token: 0x1ffff
        using fn_Method_9 = void* (*)(ExportUtil* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(ExportUtil* __this);
        // Method: tart() | Slot: 65535 | Token: 0x602b510
        using fn_tart = void* (*)(ExportUtil* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(ExportUtil* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46354 | Token: 0x19288
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(ExportUtil* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(ExportUtil* __this);
    };

    // TypeDefIndex: 30475 | Original: COW.Gameplay.UGC.BlockEdit.IdUtil | Token: 0x200770c
    struct IdUtil : Il2Cpp::Object {
        // Fields (8)
        void* UndefinedPrefix; // UndefinedPrefix | Token: 0x403acd0
        void* GraphPrefix; // GraphPrefix | Token: 0x403acd1
        void* FuncCallPrefix; // FuncCallPrefix | Token: 0x403acd2
        void* GraphVarPrefix; // GraphVarPrefix | Token: 0x403acd3
        void* HudEventPrefix; // HudEventPrefix | Token: 0x403acd4
        void* WidgetMockGraphPrefix; // WidgetMockGraphPrefix | Token: 0x403acd5
        void* UserBlockPrefix; // UserBlockPrefix | Token: 0x403acd6
        void* BlockTemplatePrefix; // BlockTemplatePrefix | Token: 0x403acd7

        // Methods (3)
        // Method: Method_0() | Slot: 37513 | Token: 0x12545
        using fn_Method_0 = void* (*)(IdUtil* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x644b
        using fn_Method_1 = void* (*)(IdUtil* __this);
        // Method: heLocalToWorld(void* d) | Slot: 9541 | Token: 0x67
        using fn_heLocalToWorld = void* (*)(IdUtil* __this, void* d);
    };

    // TypeDefIndex: 30476 | Original: COW.Gameplay.UGC.BlockEdit.JsonUtil | Token: 0x200770d
    struct JsonUtil : Il2Cpp::Object {
        // Fields (3)
        void* LogTitle; // LogTitle | Token: 0x403acd8
        void* ReadError; // ReadError | Token: 0x403acd9
        void* WriteError; // WriteError | Token: 0x403acda

        // Methods (27)
        // Method: Method_0() | Slot: 25675 | Token: 0xffff
        using fn_Method_0 = void* (*)(JsonUtil* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(JsonUtil* __this);
        // Method: t(void* holder) | Slot: 4 | Token: 0x602b518
        using fn_t = void* (*)(JsonUtil* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(JsonUtil* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46362 | Token: 0x1928d
        using fn_GetExchangeCurrencySubType = void* (*)(JsonUtil* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(JsonUtil* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0x12545
        using fn_Method_6 = void* (*)(JsonUtil* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x644d
        using fn_Method_7 = void* (*)(JsonUtil* __this);
        // Method: alToWorld(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_alToWorld = void* (*)(JsonUtil* __this, void* cam);
        // Method: Method_9() | Slot: 25678 | Token: 0x10004
        using fn_Method_9 = void* (*)(JsonUtil* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(JsonUtil* __this);
        // Method: m_BlackWhites(void* P0) | Slot: 65535 | Token: 0x602b520
        using fn_m_BlackWhites = void* (*)(JsonUtil* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(JsonUtil* __this);
        // Method: changeCurrencySubType() | Slot: 46370 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(JsonUtil* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(JsonUtil* __this);
        // Method: Method_15(void* node) | Slot: 37524 | Token: 0x12545
        using fn_Method_15 = void* (*)(JsonUtil* __this, void* node);
        // Method: Method_16() | Slot: 0 | Token: 0x6450
        using fn_Method_16 = void* (*)(JsonUtil* __this);
        // Method: Method_17(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_17 = void* (*)(JsonUtil* __this, void* strAPPSecret);
        // Method: Method_18() | Slot: 25681 | Token: 0x1ffff
        using fn_Method_18 = void* (*)(JsonUtil* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(JsonUtil* __this);
        // Method: lackWhites() | Slot: 65535 | Token: 0x602b528
        using fn_lackWhites = void* (*)(JsonUtil* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(JsonUtil* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46378 | Token: 0x19298
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(JsonUtil* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(JsonUtil* __this);
        // Method: Method_24() | Slot: 37529 | Token: 0x12545
        using fn_Method_24 = void* (*)(JsonUtil* __this);
        // Method: Method_25() | Slot: 0 | Token: 0x6453
        using fn_Method_25 = void* (*)(JsonUtil* __this);
        // Method: riginalVertices(void* d) | Slot: 9541 | Token: 0x67
        using fn_riginalVertices = void* (*)(JsonUtil* __this, void* d);
    };

    // TypeDefIndex: 30477 | Original: COW.Gameplay.UGC.BlockEdit.BlockEditVersionConfig | Token: 0x200770e
    struct BlockEditVersionConfig : Il2Cpp::Object {
        // Fields (3)
        void* CurrentGraphVersion; // CurrentGraphVersion | Token: 0x403acdb
        void* LowestSupportedGraphVersion; // LowestSupportedGraphVersion | Token: 0x403acdc
        void* VersionMapping; // VersionMapping | Token: 0x403acdd

        // Methods (2)
        // Method: Method_0() | Slot: 25683 | Token: 0xffff
        using fn_Method_0 = void* (*)(BlockEditVersionConfig* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(BlockEditVersionConfig* __this);
    };

    // TypeDefIndex: 30478 | Original: COW.Gameplay.UGC.BlockEdit.GraphUpgradeUtil | Token: 0x200770f
    struct GraphUpgradeUtil : Il2Cpp::Object {
        // Fields (3)
        void* GraphUpgradeFunctions; // GraphUpgradeFunctions | Token: 0x403acde
        void* GraphUpgradeFunctionsForSerMap; // GraphUpgradeFunctionsForSerMap | Token: 0x403acdf
        void* PropertyIndexToPropertyName; // PropertyIndexToPropertyName | Token: 0x403ace0

        // Methods (16)
        // Method: kWhites(void* holder) | Slot: 4 | Token: 0x602b530
        using fn_kWhites = void* (*)(GraphUpgradeUtil* __this, void* holder);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(GraphUpgradeUtil* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 46386 | Token: 0x1929d
        using fn_GetExchangeCurrencySubType = void* (*)(GraphUpgradeUtil* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(GraphUpgradeUtil* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(GraphUpgradeUtil* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x6455
        using fn_Method_5 = void* (*)(GraphUpgradeUtil* __this);
        // Method: alVertices(void* cam) | Slot: 9541 | Token: 0x9d5
        using fn_alVertices = void* (*)(GraphUpgradeUtil* __this, void* cam);
        // Method: Method_7() | Slot: 25686 | Token: 0x10004
        using fn_Method_7 = void* (*)(GraphUpgradeUtil* __this);
        // Method: bum() | Slot: 61340 | Token: 0x1886
        using fn_bum = void* (*)(GraphUpgradeUtil* __this);
        // Method: hites(void* P0) | Slot: 65535 | Token: 0x602b538
        using fn_hites = void* (*)(GraphUpgradeUtil* __this, void* P0);
        // Method: OnInit() | Slot: 196 | Token: 0xffffffff
        using fn_OnInit = void* (*)(GraphUpgradeUtil* __this);
        // Method: changeCurrencySubType() | Slot: 46394 | Token: 0xffffffff
        using fn_changeCurrencySubType = void* (*)(GraphUpgradeUtil* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(GraphUpgradeUtil* __this);
        // Method: Method_13(void* node) | Slot: 37540 | Token: 0x12545
        using fn_Method_13 = void* (*)(GraphUpgradeUtil* __this, void* node);
        // Method: Method_14() | Slot: 0 | Token: 0x6458
        using fn_Method_14 = void* (*)(GraphUpgradeUtil* __this);
        // Method: Method_15(void* strAPPSecret) | Slot: 9541 | Token: 0x1cef9c
        using fn_Method_15 = void* (*)(GraphUpgradeUtil* __this, void* strAPPSecret);
    };

} // namespace COW_Gameplay_UGC_BlockEdit
