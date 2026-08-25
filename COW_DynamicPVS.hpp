#pragma once
#include "Il2CppBase.hpp"

namespace COW_DynamicPVS {

    // TypeDefIndex: 29055 | Original: COW.DynamicPVS.DynamicPVSEventHandler | Token: 0x2007180
    struct DynamicPVSEventHandler : Il2Cpp::Object {
        // Fields (8)
        void* root; // root | Token: 0x4038d65
        void* isBounds; // isBounds | Token: 0x4038d66
        void* size; // size | Token: 0x4038d67
        void* boundsCenterOffset; // boundsCenterOffset | Token: 0x4038d68
        void* ignoreGroundHeight; // ignoreGroundHeight | Token: 0x4038d69
        void* callBack; // callBack | Token: 0x4038d6a
        void* type; // type | Token: 0x4038d6b
        void* isVisible; // isVisible | Token: 0x4038d6c

        // Methods (4)
        // Method: Method_0() | Slot: 27076 | Token: 0x43af79
        using fn_Method_0 = void* (*)(DynamicPVSEventHandler* __this);
        // Method: Method_1() | Slot: 24138 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(DynamicPVSEventHandler* __this);
        // Method: bum() | Slot: 44931 | Token: 0x1886
        using fn_bum = void* (*)(DynamicPVSEventHandler* __this);
        // Method: e() | Slot: 65535 | Token: 0x6028dc0
        using fn_e = void* (*)(DynamicPVSEventHandler* __this);
    };

    // TypeDefIndex: 29056 | Original: COW.DynamicPVS.DynamicPVSType | Token: 0x2007181
    struct DynamicPVSType : Il2Cpp::Object {
        // Fields (3)
        void* value__; // value__ | Token: 0x4038d6d
        void* DontMoveSelf; // DontMoveSelf | Token: 0x4038d6e
        void* MoveSelf; // MoveSelf | Token: 0x4038d6f
    };

    // TypeDefIndex: 29057 | Original: COW.DynamicPVS.SerializeData | Token: 0x2007182
    struct SerializeData : Il2Cpp::Object {
        // Fields (8)
        void* BakerPosition; // BakerPosition | Token: 0x4038d70
        void* BakerPortalYCount; // BakerPortalYCount | Token: 0x4038d71
        void* PortalYSize; // PortalYSize | Token: 0x4038d72
        void* BakerBoundsSize; // BakerBoundsSize | Token: 0x4038d73
        void* PortalSize; // PortalSize | Token: 0x4038d74
        void* ReferenceHeight; // ReferenceHeight | Token: 0x4038d75
        void* RemapHeights; // RemapHeights | Token: 0x4038d76
        void* PortalVisibilities; // PortalVisibilities | Token: 0x4038d77

        // Methods (3)
        // Method: <>iFixBaseProxy_Login() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Login = void* (*)(SerializeData* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36290 | Token: 0x17504
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SerializeData* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(SerializeData* __this);
    };

    // TypeDefIndex: 29058 | Original: COW.DynamicPVS.Deserializer | Token: 0x2007183
    struct Deserializer : Il2Cpp::Object {
        // Fields (10)
        void* m_MemoryStream; // m_MemoryStream | Token: 0x4038d78
        void* m_BinaryReader; // m_BinaryReader | Token: 0x4038d79
        void* m_SerializeData; // m_SerializeData | Token: 0x4038d7a
        void* m_SceneName; // m_SceneName | Token: 0x4038d7b
        void* k_CachePoolSize; // k_CachePoolSize | Token: 0x4038d7c
        void* m_ResIDCache; // m_ResIDCache | Token: 0x4038d7d
        void* m_BinaryCache; // m_BinaryCache | Token: 0x4038d7e
        void* m_AsyncLoadingTicket; // m_AsyncLoadingTicket | Token: 0x4038d7f
        void* m_AsyncLoadResID; // m_AsyncLoadResID | Token: 0x4038d80
        void* m_AsyncLoadCallBack; // m_AsyncLoadCallBack | Token: 0x4038d81

        // Methods (13)
        // Method: Method_0() | Slot: 29957 | Token: 0x69c4
        using fn_Method_0 = void* (*)(Deserializer* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5e49
        using fn_Method_1 = void* (*)(Deserializer* __this);
        // Method: Method_2(void* strAPPSecret) | Slot: 9541 | Token: 0x43b009
        using fn_Method_2 = void* (*)(Deserializer* __this, void* strAPPSecret);
        // Method: Method_3() | Slot: 24146 | Token: 0x2ffff
        using fn_Method_3 = void* (*)(Deserializer* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 5305 | Token: 0xc6
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(Deserializer* __this);
        // Method: ject() | Slot: 4 | Token: 0x6028dc8
        using fn_ject = void* (*)(Deserializer* __this);
        // Method: Logout() | Slot: 198 | Token: 0xffffffff
        using fn_Logout = void* (*)(Deserializer* __this);
        // Method: eCurrencySubType() | Slot: 36298 | Token: 0x17509
        using fn_eCurrencySubType = void* (*)(Deserializer* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(Deserializer* __this);
        // Method: Method_9() | Slot: 29964 | Token: 0x12545
        using fn_Method_9 = void* (*)(Deserializer* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x5e52
        using fn_Method_10 = void* (*)(Deserializer* __this);
        // Method: get_WheelModels() | Slot: 27076 | Token: 0x43b0dd
        using fn_get_WheelModels = void* (*)(Deserializer* __this);
        // Method: Method_12() | Slot: 24146 | Token: 0x1ffff
        using fn_Method_12 = void* (*)(Deserializer* __this);
    };

    // TypeDefIndex: 29059 | Original: COW.DynamicPVS.DynamicPVSManager | Token: 0x2007184
    struct DynamicPVSManager : Il2Cpp::Object {
        // Fields (13)
        void* InvalidTicket; // InvalidTicket | Token: 0x4038d82
        void* BINARY_VERSION; // BINARY_VERSION | Token: 0x4038d83
        void* BINARY_AREA_BOUNDS; // BINARY_AREA_BOUNDS | Token: 0x4038d84
        void* m_Deserializer; // m_Deserializer | Token: 0x4038d85
        void* m_Indexer; // m_Indexer | Token: 0x4038d86
        void* m_SerializeData; // m_SerializeData | Token: 0x4038d87
        void* m_Target; // m_Target | Token: 0x4038d88
        void* m_AreaBounds; // m_AreaBounds | Token: 0x4038d89
        void* m_LastTargetPos; // m_LastTargetPos | Token: 0x4038d8a
        void* m_CurAreaID; // m_CurAreaID | Token: 0x4038d8b
        void* m_HandlerPool; // m_HandlerPool | Token: 0x4038d8c
        void* m_Handlers; // m_Handlers | Token: 0x4038d8d
        void* m_InternalTicket; // m_InternalTicket | Token: 0x4038d8e

        // Methods (18)
        // Method: g() | Slot: 45299 | Token: 0x86
        using fn_g = void* (*)(DynamicPVSManager* __this);
        // Method: ject(void* type, void* qRCodeGenerationChannel, void* data) | Slot: 65535 | Token: 0x6028dd0
        using fn_ject = void* (*)(DynamicPVSManager* __this, void* type, void* qRCodeGenerationChannel, void* data);
        // Method: MakeQRCodeUrl() | Slot: 129 | Token: 0xffffffff
        using fn_MakeQRCodeUrl = void* (*)(DynamicPVSManager* __this);
        // Method: BOKO() | Slot: 36306 | Token: 0xffffffff
        using fn_BOKO = void* (*)(DynamicPVSManager* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(DynamicPVSManager* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(DynamicPVSManager* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5e52
        using fn_Method_6 = void* (*)(DynamicPVSManager* __this);
        // Method: ls(void* priority) | Slot: 9541 | Token: 0x67
        using fn_ls = void* (*)(DynamicPVSManager* __this, void* priority);
        // Method: Method_8() | Slot: 24146 | Token: 0xffff
        using fn_Method_8 = void* (*)(DynamicPVSManager* __this);
        // Method: bum() | Slot: 44165 | Token: 0x6
        using fn_bum = void* (*)(DynamicPVSManager* __this);
        // Method: ject(void* P0) | Slot: 65535 | Token: 0x6028dd8
        using fn_ject = void* (*)(DynamicPVSManager* __this, void* P0);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(DynamicPVSManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36314 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(DynamicPVSManager* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(DynamicPVSManager* __this);
        // Method: Method_14() | Slot: 65535 | Token: 0x12545
        using fn_Method_14 = void* (*)(DynamicPVSManager* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x5e51
        using fn_Method_15 = void* (*)(DynamicPVSManager* __this);
        // Method: (void* instCount) | Slot: 8434 | Token: 0x21a46a
        using fn_unnamed = void* (*)(DynamicPVSManager* __this, void* instCount);
        // Method: Method_17() | Slot: 24150 | Token: 0x6
        using fn_Method_17 = void* (*)(DynamicPVSManager* __this);
    };

    // TypeDefIndex: 29060 | Original: COW.DynamicPVS.Indexer | Token: 0x2007185
    struct Indexer : Il2Cpp::Object {
        // Fields (4)
        void* m_SerializeData; // m_SerializeData | Token: 0x4038d8f
        void* m_InvPortalSize; // m_InvPortalSize | Token: 0x4038d90
        void* m_TempIndices; // m_TempIndices | Token: 0x4038d91
        void* m_CurBakerPortalIndex; // m_CurBakerPortalIndex | Token: 0x4038d92

        // Methods (13)
        // Method: bum() | Slot: 32552 | Token: 0xc6
        using fn_bum = void* (*)(Indexer* __this);
        // Method: () | Slot: 65535 | Token: 0x6028de0
        using fn_unnamed = void* (*)(Indexer* __this);
        // Method: ClearUIData() | Slot: 134 | Token: 0xffffffff
        using fn_ClearUIData = void* (*)(Indexer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36322 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(Indexer* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(Indexer* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(Indexer* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5e56
        using fn_Method_6 = void* (*)(Indexer* __this);
        // Method: Method_7(void* priority) | Slot: 9541 | Token: 0x43b214
        using fn_Method_7 = void* (*)(Indexer* __this, void* priority);
        // Method: Method_8() | Slot: 24150 | Token: 0x2ffff
        using fn_Method_8 = void* (*)(Indexer* __this);
        // Method: bum() | Slot: 45618 | Token: 0x86
        using fn_bum = void* (*)(Indexer* __this);
        // Method: () | Slot: 65535 | Token: 0x6028de8
        using fn_unnamed = void* (*)(Indexer* __this);
        // Method: GetMsgContainerIdx() | Slot: 134 | Token: 0xffffffff
        using fn_GetMsgContainerIdx = void* (*)(Indexer* __this);
        // Method: imable() | Slot: 36330 | Token: 0x17523
        using fn_imable = void* (*)(Indexer* __this);
    };

} // namespace COW_DynamicPVS
