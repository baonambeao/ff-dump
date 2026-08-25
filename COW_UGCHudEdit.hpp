#pragma once
#include "Il2CppBase.hpp"

namespace COW_UGCHudEdit {

    // TypeDefIndex: 29149 | Original: COW.UGCHudEdit.AdjustHudWidgetSelectorAngleCommand | Token: 0x20071de
    struct AdjustHudWidgetSelectorAngleCommand : Il2Cpp::Object {
        // Fields (4)
        void* m_Selector; // m_Selector | Token: 0x403906a
        void* m_BindWidget; // m_BindWidget | Token: 0x403906b
        void* m_InitLocalAngleZ; // m_InitLocalAngleZ | Token: 0x403906c
        void* m_LocalAngleZ; // m_LocalAngleZ | Token: 0x403906d

        // Methods (8)
        // Method: SetDirtyPictures() | Slot: 134 | Token: 0xffffffff
        using fn_SetDirtyPictures = void* (*)(AdjustHudWidgetSelectorAngleCommand* __this);
        // Method: imable() | Slot: 37370 | Token: 0x1794a
        using fn_imable = void* (*)(AdjustHudWidgetSelectorAngleCommand* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(AdjustHudWidgetSelectorAngleCommand* __this);
        // Method: Method_3() | Slot: 31054 | Token: 0x69c4
        using fn_Method_3 = void* (*)(AdjustHudWidgetSelectorAngleCommand* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f23
        using fn_Method_4 = void* (*)(AdjustHudWidgetSelectorAngleCommand* __this);
        // Method: ras() | Slot: 27076 | Token: 0x4442b2
        using fn_ras = void* (*)(AdjustHudWidgetSelectorAngleCommand* __this);
        // Method: Method_6() | Slot: 24355 | Token: 0x2ffff
        using fn_Method_6 = void* (*)(AdjustHudWidgetSelectorAngleCommand* __this);
        // Method: bum() | Slot: 17116 | Token: 0x86
        using fn_bum = void* (*)(AdjustHudWidgetSelectorAngleCommand* __this);
    };

    // TypeDefIndex: 29150 | Original: COW.UGCHudEdit.AdjustHudWidgetSelectorSizeCommand | Token: 0x20071df
    struct AdjustHudWidgetSelectorSizeCommand : Il2Cpp::Object {
        // Fields (9)
        void* m_Selector; // m_Selector | Token: 0x403906e
        void* m_PivotType; // m_PivotType | Token: 0x403906f
        void* m_BindWidget; // m_BindWidget | Token: 0x4039070
        void* m_InitWidth; // m_InitWidth | Token: 0x4039071
        void* m_InitHeight; // m_InitHeight | Token: 0x4039072
        void* m_InitPosition; // m_InitPosition | Token: 0x4039073
        void* m_CurrentWidth; // m_CurrentWidth | Token: 0x4039074
        void* m_CurrentHeight; // m_CurrentHeight | Token: 0x4039075
        void* m_CurrentPosition; // m_CurrentPosition | Token: 0x4039076

        // Methods (9)
        // Method: eTransform(void* serverSlotId, void* type) | Slot: 65535 | Token: 0x6029200
        using fn_eTransform = void* (*)(AdjustHudWidgetSelectorSizeCommand* __this, void* serverSlotId, void* type);
        // Method: DelDirtyWords() | Slot: 134 | Token: 0xffffffff
        using fn_DelDirtyWords = void* (*)(AdjustHudWidgetSelectorSizeCommand* __this);
        // Method: _WAIT() | Slot: 37378 | Token: 0x1795a
        using fn__WAIT = void* (*)(AdjustHudWidgetSelectorSizeCommand* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(AdjustHudWidgetSelectorSizeCommand* __this);
        // Method: Method_4() | Slot: 31068 | Token: 0x12545
        using fn_Method_4 = void* (*)(AdjustHudWidgetSelectorSizeCommand* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5f23
        using fn_Method_5 = void* (*)(AdjustHudWidgetSelectorSizeCommand* __this);
        // Method: Method_6(void* priority) | Slot: 9541 | Token: 0x14b9
        using fn_Method_6 = void* (*)(AdjustHudWidgetSelectorSizeCommand* __this, void* priority);
        // Method: Method_7() | Slot: 24355 | Token: 0x4
        using fn_Method_7 = void* (*)(AdjustHudWidgetSelectorSizeCommand* __this);
        // Method: bum() | Slot: 42090 | Token: 0xc4
        using fn_bum = void* (*)(AdjustHudWidgetSelectorSizeCommand* __this);
    };

    // TypeDefIndex: 29151 | Original: COW.UGCHudEdit.DeleteHudWidgetCommand | Token: 0x20071e0
    struct DeleteHudWidgetCommand : Il2Cpp::Object {
        // Fields (2)
        void* m_Target; // m_Target | Token: 0x4039077
        void* m_Model; // m_Model | Token: 0x4039078

        // Methods (6)
        // Method: eTransform() | Slot: 6 | Token: 0x6029208
        using fn_eTransform = void* (*)(DeleteHudWidgetCommand* __this);
        // Method: Logout() | Slot: 198 | Token: 0xffffffff
        using fn_Logout = void* (*)(DeleteHudWidgetCommand* __this);
        // Method: eCurrencySubType() | Slot: 37386 | Token: 0xffffffff
        using fn_eCurrencySubType = void* (*)(DeleteHudWidgetCommand* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(DeleteHudWidgetCommand* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x38d2
        using fn_Method_4 = void* (*)(DeleteHudWidgetCommand* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5f23
        using fn_Method_5 = void* (*)(DeleteHudWidgetCommand* __this);
    };

    // TypeDefIndex: 29152 | Original: COW.UGCHudEdit.DragWidgetSelectorCommand | Token: 0x20071e1
    struct DragWidgetSelectorCommand : Il2Cpp::Object {
        // Fields (8)
        void* m_Selector; // m_Selector | Token: 0x4039079
        void* m_BindWidget; // m_BindWidget | Token: 0x403907a
        void* m_StartPosition; // m_StartPosition | Token: 0x403907b
        void* m_StartAnchorMin; // m_StartAnchorMin | Token: 0x403907c
        void* m_StartAnchorMax; // m_StartAnchorMax | Token: 0x403907d
        void* m_EndPosition; // m_EndPosition | Token: 0x403907e
        void* m_EndAnchorMin; // m_EndAnchorMin | Token: 0x403907f
        void* m_EndAnchorMax; // m_EndAnchorMax | Token: 0x4039080

        // Methods (8)
        // Method: Method_0(void* priority) | Slot: 9541 | Token: 0x4443b6
        using fn_Method_0 = void* (*)(DragWidgetSelectorCommand* __this, void* priority);
        // Method: Method_1() | Slot: 24355 | Token: 0xffff
        using fn_Method_1 = void* (*)(DragWidgetSelectorCommand* __this);
        // Method: bum() | Slot: 17386 | Token: 0x81
        using fn_bum = void* (*)(DragWidgetSelectorCommand* __this);
        // Method: eTransform(void* ids, void* callback) | Slot: 65535 | Token: 0x6029210
        using fn_eTransform = void* (*)(DragWidgetSelectorCommand* __this, void* ids, void* callback);
        // Method: NotifyResourceShop() | Slot: 134 | Token: 0xffffffff
        using fn_NotifyResourceShop = void* (*)(DragWidgetSelectorCommand* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37394 | Token: 0x17961
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(DragWidgetSelectorCommand* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(DragWidgetSelectorCommand* __this);
        // Method: Method_7() | Slot: 31076 | Token: 0x12545
        using fn_Method_7 = void* (*)(DragWidgetSelectorCommand* __this);
    };

    // TypeDefIndex: 29153 | Original: COW.UGCHudEdit.RecordCloneHudWidgetCommand | Token: 0x20071e2
    struct RecordCloneHudWidgetCommand : Il2Cpp::Object {
        // Fields (3)
        void* m_Target; // m_Target | Token: 0x4039081
        void* m_GameObject; // m_GameObject | Token: 0x4039082
        void* m_Model; // m_Model | Token: 0x4039083

        // Methods (7)
        // Method: Method_0() | Slot: 0 | Token: 0x5f23
        using fn_Method_0 = void* (*)(RecordCloneHudWidgetCommand* __this);
        // Method: Method_1(void* priority) | Slot: 8434 | Token: 0x4444a4
        using fn_Method_1 = void* (*)(RecordCloneHudWidgetCommand* __this, void* priority);
        // Method: Method_2() | Slot: 24355 | Token: 0xffff
        using fn_Method_2 = void* (*)(RecordCloneHudWidgetCommand* __this);
        // Method: t() | Slot: 17612 | Token: 0x86
        using fn_t = void* (*)(RecordCloneHudWidgetCommand* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029218
        using fn_eTransform = void* (*)(RecordCloneHudWidgetCommand* __this);
        // Method: UpdateReviewState() | Slot: 134 | Token: 0xffffffff
        using fn_UpdateReviewState = void* (*)(RecordCloneHudWidgetCommand* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37402 | Token: 0x1796f
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(RecordCloneHudWidgetCommand* __this);
    };

    // TypeDefIndex: 29154 | Original: COW.UGCHudEdit.RecordCreateHudWidgetCommand | Token: 0x20071e3
    struct RecordCreateHudWidgetCommand : Il2Cpp::Object {
        // Fields (3)
        void* m_Target; // m_Target | Token: 0x4039084
        void* m_GameObject; // m_GameObject | Token: 0x4039085
        void* m_Model; // m_Model | Token: 0x4039086

        // Methods (7)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(RecordCreateHudWidgetCommand* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x427e
        using fn_Method_1 = void* (*)(RecordCreateHudWidgetCommand* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5f23
        using fn_Method_2 = void* (*)(RecordCreateHudWidgetCommand* __this);
        // Method: er() | Slot: 15735 | Token: 0x44453e
        using fn_er = void* (*)(RecordCreateHudWidgetCommand* __this);
        // Method: Method_4() | Slot: 24355 | Token: 0xffff
        using fn_Method_4 = void* (*)(RecordCreateHudWidgetCommand* __this);
        // Method: angeToDead() | Slot: 17786 | Token: 0x86
        using fn_angeToDead = void* (*)(RecordCreateHudWidgetCommand* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029220
        using fn_eTransform = void* (*)(RecordCreateHudWidgetCommand* __this);
    };

    // TypeDefIndex: 29155 | Original: COW.UGCHudEdit.RecordUGCHudWidgetAttributeCommand | Token: 0x20071e4
    struct RecordUGCHudWidgetAttributeCommand : Il2Cpp::Object {
        // Fields (3)
        void* m_AttributeController; // m_AttributeController | Token: 0x4039087
        void* m_InitValue; // m_InitValue | Token: 0x4039088
        void* m_CurrentValue; // m_CurrentValue | Token: 0x4039089

        // Methods (7)
        // Method: GetWorkshopTemplateList() | Slot: 134 | Token: 0xffffffff
        using fn_GetWorkshopTemplateList = void* (*)(RecordUGCHudWidgetAttributeCommand* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37410 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(RecordUGCHudWidgetAttributeCommand* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(RecordUGCHudWidgetAttributeCommand* __this);
        // Method: Method_3() | Slot: 31090 | Token: 0x12813
        using fn_Method_3 = void* (*)(RecordUGCHudWidgetAttributeCommand* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f23
        using fn_Method_4 = void* (*)(RecordUGCHudWidgetAttributeCommand* __this);
        // Method: (void* priority) | Slot: 9541 | Token: 0x444622
        using fn_unnamed = void* (*)(RecordUGCHudWidgetAttributeCommand* __this, void* priority);
        // Method: Method_6() | Slot: 24355 | Token: 0xffff
        using fn_Method_6 = void* (*)(RecordUGCHudWidgetAttributeCommand* __this);
    };

    // TypeDefIndex: 29156 | Original: COW.UGCHudEdit.RecordUGCHudWidgetHierarchyCommand | Token: 0x20071e5
    struct RecordUGCHudWidgetHierarchyCommand : Il2Cpp::Object {
        // Fields (5)
        void* m_Target; // m_Target | Token: 0x403908a
        void* m_InitParentNode; // m_InitParentNode | Token: 0x403908b
        void* m_InitIndex; // m_InitIndex | Token: 0x403908c
        void* m_CurrentParentNode; // m_CurrentParentNode | Token: 0x403908d
        void* m_CurrentIndex; // m_CurrentIndex | Token: 0x403908e

        // Methods (7)
        // Method: g() | Slot: 18003 | Token: 0x86
        using fn_g = void* (*)(RecordUGCHudWidgetHierarchyCommand* __this);
        // Method: eTransform(void* code) | Slot: 65535 | Token: 0x6029228
        using fn_eTransform = void* (*)(RecordUGCHudWidgetHierarchyCommand* __this, void* code);
        // Method: LogFunnelClickByName() | Slot: 134 | Token: 0xffffffff
        using fn_LogFunnelClickByName = void* (*)(RecordUGCHudWidgetHierarchyCommand* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37418 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(RecordUGCHudWidgetHierarchyCommand* __this);
        // Method: __Field() | Slot: 65535 | Token: 0x8000000
        using fn___Field = void* (*)(RecordUGCHudWidgetHierarchyCommand* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x1208d
        using fn_Method_5 = void* (*)(RecordUGCHudWidgetHierarchyCommand* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5f23
        using fn_Method_6 = void* (*)(RecordUGCHudWidgetHierarchyCommand* __this);
    };

    // TypeDefIndex: 29157 | Original: COW.UGCHudEdit.SelectHudWidgetCommand | Token: 0x20071e6
    struct SelectHudWidgetCommand : Il2Cpp::Object {
        // Fields (3)
        void* m_Target; // m_Target | Token: 0x403908f
        void* m_LastTarget; // m_LastTarget | Token: 0x4039090
        void* m_Model; // m_Model | Token: 0x4039091

        // Methods (6)
        // Method: viewName(void* priority) | Slot: 9541 | Token: 0x4446fa
        using fn_viewName = void* (*)(SelectHudWidgetCommand* __this, void* priority);
        // Method: Method_1() | Slot: 24355 | Token: 0x4ffff
        using fn_Method_1 = void* (*)(SelectHudWidgetCommand* __this);
        // Method: bum() | Slot: 18221 | Token: 0x86
        using fn_bum = void* (*)(SelectHudWidgetCommand* __this);
        // Method: eTransform(void* code) | Slot: 65535 | Token: 0x6029230
        using fn_eTransform = void* (*)(SelectHudWidgetCommand* __this, void* code);
        // Method: get_EditorChoiceCacheDict() | Slot: 2182 | Token: 0xffffffff
        using fn_get_EditorChoiceCacheDict = void* (*)(SelectHudWidgetCommand* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37426 | Token: 0x17982
        using fn_GetExchangeCurrencySubType = void* (*)(SelectHudWidgetCommand* __this);
    };

    // TypeDefIndex: 29158 | Original: COW.UGCHudEdit.SetHudWidgetAnchorPositionCommand | Token: 0x20071e7
    struct SetHudWidgetAnchorPositionCommand : Il2Cpp::Object {
        // Fields (3)
        void* m_Target; // m_Target | Token: 0x4039092
        void* m_AnchorPosition; // m_AnchorPosition | Token: 0x4039093
        void* m_LastAnchorPosition; // m_LastAnchorPosition | Token: 0x4039094

        // Methods (6)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SetHudWidgetAnchorPositionCommand* __this);
        // Method: Method_1() | Slot: 31111 | Token: 0x12545
        using fn_Method_1 = void* (*)(SetHudWidgetAnchorPositionCommand* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5f23
        using fn_Method_2 = void* (*)(SetHudWidgetAnchorPositionCommand* __this);
        // Method: aded(void* priority) | Slot: 9541 | Token: 0x4447c1
        using fn_aded = void* (*)(SetHudWidgetAnchorPositionCommand* __this, void* priority);
        // Method: Method_4() | Slot: 24355 | Token: 0xffff
        using fn_Method_4 = void* (*)(SetHudWidgetAnchorPositionCommand* __this);
        // Method: Interval() | Slot: 18419 | Token: 0x86
        using fn_Interval = void* (*)(SetHudWidgetAnchorPositionCommand* __this);
    };

    // TypeDefIndex: 29159 | Original: COW.UGCHudEdit.SetHudWidgetLocalAngleZCommand | Token: 0x20071e8
    struct SetHudWidgetLocalAngleZCommand : Il2Cpp::Object {
        // Fields (3)
        void* m_Target; // m_Target | Token: 0x4039095
        void* m_LocalAngleZ; // m_LocalAngleZ | Token: 0x4039096
        void* m_LastLocalAngelZ; // m_LastLocalAngelZ | Token: 0x4039097

        // Methods (6)
        // Method: eTransform(void* code, void* isGMPreview) | Slot: 65535 | Token: 0x6029238
        using fn_eTransform = void* (*)(SetHudWidgetLocalAngleZCommand* __this, void* code, void* isGMPreview);
        // Method: RequestSearchMap() | Slot: 134 | Token: 0xffffffff
        using fn_RequestSearchMap = void* (*)(SetHudWidgetLocalAngleZCommand* __this);
        // Method: imable() | Slot: 37434 | Token: 0x1798f
        using fn_imable = void* (*)(SetHudWidgetLocalAngleZCommand* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SetHudWidgetLocalAngleZCommand* __this);
        // Method: Method_4() | Slot: 31127 | Token: 0x12545
        using fn_Method_4 = void* (*)(SetHudWidgetLocalAngleZCommand* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5f23
        using fn_Method_5 = void* (*)(SetHudWidgetLocalAngleZCommand* __this);
    };

    // TypeDefIndex: 29160 | Original: COW.UGCHudEdit.SetHudWidgetNameCommand | Token: 0x20071e9
    struct SetHudWidgetNameCommand : Il2Cpp::Object {
        // Fields (3)
        void* m_Target; // m_Target | Token: 0x4039098
        void* m_Name; // m_Name | Token: 0x4039099
        void* m_LastName; // m_LastName | Token: 0x403909a

        // Methods (6)
        // Method: treamer(void* priority) | Slot: 10032 | Token: 0x444878
        using fn_treamer = void* (*)(SetHudWidgetNameCommand* __this, void* priority);
        // Method: Method_1() | Slot: 24355 | Token: 0xffff
        using fn_Method_1 = void* (*)(SetHudWidgetNameCommand* __this);
        // Method: eedY() | Slot: 18606 | Token: 0x86
        using fn_eedY = void* (*)(SetHudWidgetNameCommand* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029240
        using fn_eTransform = void* (*)(SetHudWidgetNameCommand* __this);
        // Method: InitMyMaxCost() | Slot: 134 | Token: 0xffffffff
        using fn_InitMyMaxCost = void* (*)(SetHudWidgetNameCommand* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37442 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(SetHudWidgetNameCommand* __this);
    };

    // TypeDefIndex: 29161 | Original: COW.UGCHudEdit.SetHudWidgetSizeCommand | Token: 0x20071ea
    struct SetHudWidgetSizeCommand : Il2Cpp::Object {
        // Fields (5)
        void* m_Target; // m_Target | Token: 0x403909b
        void* m_Width; // m_Width | Token: 0x403909c
        void* m_Height; // m_Height | Token: 0x403909d
        void* m_LastWidth; // m_LastWidth | Token: 0x403909e
        void* m_LastHeight; // m_LastHeight | Token: 0x403909f

        // Methods (6)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SetHudWidgetSizeCommand* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x69c4
        using fn_Method_1 = void* (*)(SetHudWidgetSizeCommand* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5f23
        using fn_Method_2 = void* (*)(SetHudWidgetSizeCommand* __this);
        // Method: Method_3() | Slot: 27076 | Token: 0x44492f
        using fn_Method_3 = void* (*)(SetHudWidgetSizeCommand* __this);
        // Method: Method_4() | Slot: 24355 | Token: 0xffff
        using fn_Method_4 = void* (*)(SetHudWidgetSizeCommand* __this);
        // Method: bum() | Slot: 18761 | Token: 0x81
        using fn_bum = void* (*)(SetHudWidgetSizeCommand* __this);
    };

    // TypeDefIndex: 29162 | Original: COW.UGCHudEdit.UGCHudPrefabDataType | Token: 0x20071eb
    struct UGCHudPrefabDataType : Il2Cpp::Object {
        // Fields (3)
        void* value__; // value__ | Token: 0x40390a0
        void* Protobuf; // Protobuf | Token: 0x40390a1
        void* Json; // Json | Token: 0x40390a2
    };

    // TypeDefIndex: 29163 | Original: COW.UGCHudEdit.UGCHudPrefabFileType | Token: 0x20071ec
    struct UGCHudPrefabFileType : Il2Cpp::Object {
        // Fields (3)
        void* value__; // value__ | Token: 0x40390a3
        void* Project; // Project | Token: 0x40390a4
        void* Export; // Export | Token: 0x40390a5
    };

    // TypeDefIndex: 29167 | Original: COW.UGCHudEdit.UGCHudPrefabDataProcessor | Token: 0x20071ed
    struct UGCHudPrefabDataProcessor : Il2Cpp::Object {

        // Methods (73)
        // Method: eTransform(void* force) | Slot: 65535 | Token: 0x6029248
        using fn_eTransform = void* (*)(UGCHudPrefabDataProcessor* __this, void* force);
        // Method: RequestLatestReleaseMap() | Slot: 134 | Token: 0xffffffff
        using fn_RequestLatestReleaseMap = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: _WAIT() | Slot: 37450 | Token: 0x179a7
        using fn__WAIT = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5f23
        using fn_Method_5 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_6() | Slot: 27076 | Token: 0x4449dd
        using fn_Method_6 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_7() | Slot: 24355 | Token: 0x1ffff
        using fn_Method_7 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: bum() | Slot: 18962 | Token: 0x86
        using fn_bum = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: eTransform(void* id, void* index) | Slot: 65535 | Token: 0x6029250
        using fn_eTransform = void* (*)(UGCHudPrefabDataProcessor* __this, void* id, void* index);
        // Method: RequestOfficialMapInfo() | Slot: 134 | Token: 0xffffffff
        using fn_RequestOfficialMapInfo = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37458 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x425e
        using fn_Method_13 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x5f23
        using fn_Method_14 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_15() | Slot: 16931 | Token: 0x444a9a
        using fn_Method_15 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_16() | Slot: 24355 | Token: 0xffff
        using fn_Method_16 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: () | Slot: 19167 | Token: 0x86
        using fn_unnamed = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: eTransform(void* poolType, void* genreID) | Slot: 65535 | Token: 0x6029258
        using fn_eTransform = void* (*)(UGCHudPrefabDataProcessor* __this, void* poolType, void* genreID);
        // Method: GetWaterfallLeaderboardData() | Slot: 134 | Token: 0xffffffff
        using fn_GetWaterfallLeaderboardData = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37466 | Token: 0x179b1
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_22() | Slot: 31156 | Token: 0x12545
        using fn_Method_22 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x5f23
        using fn_Method_23 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: m(void* priority) | Slot: 9541 | Token: 0x444b6b
        using fn_m = void* (*)(UGCHudPrefabDataProcessor* __this, void* priority);
        // Method: Method_25() | Slot: 24355 | Token: 0x1ffff
        using fn_Method_25 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: bum() | Slot: 19349 | Token: 0x86
        using fn_bum = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: eTransform(void* data) | Slot: 65535 | Token: 0x6029260
        using fn_eTransform = void* (*)(UGCHudPrefabDataProcessor* __this, void* data);
        // Method: RequestWaterfallLeaderboardData() | Slot: 134 | Token: 0xffffffff
        using fn_RequestWaterfallLeaderboardData = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37474 | Token: 0x179bb
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_31() | Slot: 31168 | Token: 0x12545
        using fn_Method_31 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_32() | Slot: 0 | Token: 0x5f23
        using fn_Method_32 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_33(void* priority) | Slot: 9541 | Token: 0x444c76
        using fn_Method_33 = void* (*)(UGCHudPrefabDataProcessor* __this, void* priority);
        // Method: Method_34() | Slot: 24355 | Token: 0xffff
        using fn_Method_34 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: bum() | Slot: 19612 | Token: 0x86
        using fn_bum = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029268
        using fn_eTransform = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: RequestLikeCode() | Slot: 134 | Token: 0xffffffff
        using fn_RequestLikeCode = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: imable() | Slot: 37482 | Token: 0x179c7
        using fn_imable = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_40() | Slot: 31180 | Token: 0x69c4
        using fn_Method_40 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_41() | Slot: 0 | Token: 0x5f23
        using fn_Method_41 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: gin(void* priority) | Slot: 9541 | Token: 0x444d10
        using fn_gin = void* (*)(UGCHudPrefabDataProcessor* __this, void* priority);
        // Method: Method_43() | Slot: 24355 | Token: 0xffff
        using fn_Method_43 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: bum() | Slot: 19755 | Token: 0x81
        using fn_bum = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029270
        using fn_eTransform = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: LoadSceneEditGame() | Slot: 129 | Token: 0xffffffff
        using fn_LoadSceneEditGame = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37490 | Token: 0x179d0
        using fn_GetExchangeCurrencySubType = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_49() | Slot: 65535 | Token: 0x40e4
        using fn_Method_49 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_50() | Slot: 0 | Token: 0x5f23
        using fn_Method_50 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_51() | Slot: 16612 | Token: 0x444daf
        using fn_Method_51 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_52() | Slot: 24355 | Token: 0x1ffff
        using fn_Method_52 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: ryEvaluateFreeRadiusInterval() | Slot: 19933 | Token: 0x86
        using fn_ryEvaluateFreeRadiusInterval = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: eTransform(void* info) | Slot: 65535 | Token: 0x6029278
        using fn_eTransform = void* (*)(UGCHudPrefabDataProcessor* __this, void* info);
        // Method: IsWorkshopBanned() | Slot: 134 | Token: 0xffffffff
        using fn_IsWorkshopBanned = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37498 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_58() | Slot: 65535 | Token: 0x97c4
        using fn_Method_58 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_59() | Slot: 0 | Token: 0x5f23
        using fn_Method_59 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_60(void* pos) | Slot: 9541 | Token: 0x444e48
        using fn_Method_60 = void* (*)(UGCHudPrefabDataProcessor* __this, void* pos);
        // Method: Method_61() | Slot: 24355 | Token: 0x2ffff
        using fn_Method_61 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: bum() | Slot: 20098 | Token: 0x86
        using fn_bum = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: eTransform(void* platform) | Slot: 65535 | Token: 0x6029280
        using fn_eTransform = void* (*)(UGCHudPrefabDataProcessor* __this, void* platform);
        // Method: OpenWorkshopDetailWnd() | Slot: 134 | Token: 0xffffffff
        using fn_OpenWorkshopDetailWnd = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: MGMOGJMGGG() | Slot: 37506 | Token: 0x179e1
        using fn_MGMOGJMGGG = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_67() | Slot: 31205 | Token: 0x3bb4
        using fn_Method_67 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: Method_68() | Slot: 0 | Token: 0x5f23
        using fn_Method_68 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: ileSizeZ(void* priority) | Slot: 27078 | Token: 0x444f2c
        using fn_ileSizeZ = void* (*)(UGCHudPrefabDataProcessor* __this, void* priority);
        // Method: Method_70() | Slot: 24355 | Token: 0xffff
        using fn_Method_70 = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: g() | Slot: 20311 | Token: 0x86
        using fn_g = void* (*)(UGCHudPrefabDataProcessor* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029288
        using fn_eTransform = void* (*)(UGCHudPrefabDataProcessor* __this);
    };

} // namespace COW_UGCHudEdit
