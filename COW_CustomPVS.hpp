#pragma once
#include "Il2CppBase.hpp"

namespace COW_CustomPVS {

    // TypeDefIndex: 29061 | Original: COW.CustomPVS.LPVSItemAttacher | Token: 0x2007186
    struct LPVSItemAttacher : Il2Cpp::Object {
        // Fields (10)
        void* ID; // ID | Token: 0x4038d93
        void* gameObject; // gameObject | Token: 0x4038d94
        void* PVS_VISIBLE; // PVS_VISIBLE | Token: 0x4038d95
        void* STREAMER_VISIBLE; // STREAMER_VISIBLE | Token: 0x4038d96
        void* m_IsVisible; // m_IsVisible | Token: 0x4038d97
        void* m_Renderers; // m_Renderers | Token: 0x4038d98
        void* m_CullParticleSystem; // m_CullParticleSystem | Token: 0x4038d99
        void* m_ParticleSystemRenderers; // m_ParticleSystemRenderers | Token: 0x4038d9a
        void* m_TempRenderers; // m_TempRenderers | Token: 0x4038d9b
        void* m_TempPSRenderers; // m_TempPSRenderers | Token: 0x4038d9c

        // Methods (15)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(LPVSItemAttacher* __this);
        // Method: Method_1() | Slot: 29994 | Token: 0x12545
        using fn_Method_1 = void* (*)(LPVSItemAttacher* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5e56
        using fn_Method_2 = void* (*)(LPVSItemAttacher* __this);
        // Method: tate() | Slot: 12394 | Token: 0x43b2c9
        using fn_tate = void* (*)(LPVSItemAttacher* __this);
        // Method: Method_4() | Slot: 24150 | Token: 0x1ffff
        using fn_Method_4 = void* (*)(LPVSItemAttacher* __this);
        // Method: gInternal() | Slot: 45815 | Token: 0x81
        using fn_gInternal = void* (*)(LPVSItemAttacher* __this);
        // Method: (void* category) | Slot: 65535 | Token: 0x6028df0
        using fn_unnamed = void* (*)(LPVSItemAttacher* __this, void* category);
        // Method: DeepCloneSetting() | Slot: 129 | Token: 0xffffffff
        using fn_DeepCloneSetting = void* (*)(LPVSItemAttacher* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36338 | Token: 0x17533
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(LPVSItemAttacher* __this);
        // Method: Code() | Slot: 191 | Token: 0x8000000
        using fn_Code = void* (*)(LPVSItemAttacher* __this);
        // Method: Method_10() | Slot: 30008 | Token: 0x12545
        using fn_Method_10 = void* (*)(LPVSItemAttacher* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x5e56
        using fn_Method_11 = void* (*)(LPVSItemAttacher* __this);
        // Method: nAttached() | Slot: 15179 | Token: 0x43b36a
        using fn_nAttached = void* (*)(LPVSItemAttacher* __this);
        // Method: Method_13() | Slot: 24150 | Token: 0x1ffff
        using fn_Method_13 = void* (*)(LPVSItemAttacher* __this);
        // Method: awnPoints() | Slot: 46008 | Token: 0x86
        using fn_awnPoints = void* (*)(LPVSItemAttacher* __this);
    };

    // TypeDefIndex: 29062 | Original: COW.CustomPVS.PVSDeserializer | Token: 0x2007187
    struct PVSDeserializer : Il2Cpp::Object {
        // Fields (34)
        void* m_CurTileBytes; // m_CurTileBytes | Token: 0x4038d9d
        void* m_CurTileTextAsset; // m_CurTileTextAsset | Token: 0x4038d9e
        void* m_CurTileNativeArray; // m_CurTileNativeArray | Token: 0x4038d9f
        void* m_PortalIndexs; // m_PortalIndexs | Token: 0x4038da0
        void* m_PortalGroundHeights; // m_PortalGroundHeights | Token: 0x4038da1
        void* m_PortalIDs; // m_PortalIDs | Token: 0x4038da2
        void* m_PositionIDRemapper; // m_PositionIDRemapper | Token: 0x4038da3
        void* m_CustomTileGroups; // m_CustomTileGroups | Token: 0x4038da4
        void* m_CustomTileBounds; // m_CustomTileBounds | Token: 0x4038da5
        void* m_RelatedIDCount; // m_RelatedIDCount | Token: 0x4038da6
        void* m_RelatedIDPC; // m_RelatedIDPC | Token: 0x4038da7
        void* m_PortalBufferCount; // m_PortalBufferCount | Token: 0x4038da8
        void* m_PortalBufferPC; // m_PortalBufferPC | Token: 0x4038da9
        void* m_BinaryCache; // m_BinaryCache | Token: 0x4038daa
        void* m_NativeBinaryCache; // m_NativeBinaryCache | Token: 0x4038dab
        void* m_ResIDCache; // m_ResIDCache | Token: 0x4038dac
        void* strip_int; // strip_int | Token: 0x4038dad
        void* step_ushort; // step_ushort | Token: 0x4038dae
        void* step_int; // step_int | Token: 0x4038daf
        void* step_float; // step_float | Token: 0x4038db0
        void* BINARY_VERSION; // BINARY_VERSION | Token: 0x4038db1
        void* BINARY_SCENE_CONFIG; // BINARY_SCENE_CONFIG | Token: 0x4038db2
        void* BINARY_REMAPPER; // BINARY_REMAPPER | Token: 0x4038db3
        void* BINARY_CUSTOM_TILE_CONFIG; // BINARY_CUSTOM_TILE_CONFIG | Token: 0x4038db4
        void* m_CurTileIndex; // m_CurTileIndex | Token: 0x4038db5
        void* m_CurPortalIndex; // m_CurPortalIndex | Token: 0x4038db6
        void* m_CurPortalHeight; // m_CurPortalHeight | Token: 0x4038db7
        void* m_CurPortalCount; // m_CurPortalCount | Token: 0x4038db8
        void* m_SceneName; // m_SceneName | Token: 0x4038db9
        void* m_AsyncLoadingTicket; // m_AsyncLoadingTicket | Token: 0x4038dba
        void* m_AsyncLoadingTileID; // m_AsyncLoadingTileID | Token: 0x4038dbb
        void* m_OnCheckTileDataHandle; // m_OnCheckTileDataHandle | Token: 0x4038dbc
        void* m_AsyncABRequest; // m_AsyncABRequest | Token: 0x4038dbd
        void* m_AB; // m_AB | Token: 0x4038dbe

        // Methods (34)
        // Method: () | Slot: 65535 | Token: 0x6028df8
        using fn_unnamed = void* (*)(PVSDeserializer* __this);
        // Method: ReplaceFakeIdToInvalidMagId() | Slot: 129 | Token: 0xffffffff
        using fn_ReplaceFakeIdToInvalidMagId = void* (*)(PVSDeserializer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36346 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(PVSDeserializer* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(PVSDeserializer* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(PVSDeserializer* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5e56
        using fn_Method_5 = void* (*)(PVSDeserializer* __this);
        // Method: Method_6(void* strAPPSecret) | Slot: 9541 | Token: 0x43b427
        using fn_Method_6 = void* (*)(PVSDeserializer* __this, void* strAPPSecret);
        // Method: Method_7() | Slot: 24150 | Token: 0x2ffff
        using fn_Method_7 = void* (*)(PVSDeserializer* __this);
        // Method: bum() | Slot: 18858 | Token: 0x6
        using fn_bum = void* (*)(PVSDeserializer* __this);
        // Method: ct() | Slot: 65535 | Token: 0x6028e00
        using fn_ct = void* (*)(PVSDeserializer* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(PVSDeserializer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36354 | Token: 0x17540
        using fn_GetExchangeCurrencySubType = void* (*)(PVSDeserializer* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(PVSDeserializer* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(PVSDeserializer* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x5e55
        using fn_Method_14 = void* (*)(PVSDeserializer* __this);
        // Method: d(void* instCount) | Slot: 8434 | Token: 0x21a46a
        using fn_d = void* (*)(PVSDeserializer* __this, void* instCount);
        // Method: Method_16() | Slot: 24151 | Token: 0x6
        using fn_Method_16 = void* (*)(PVSDeserializer* __this);
        // Method: pEventUI() | Slot: 41806 | Token: 0x1e6
        using fn_pEventUI = void* (*)(PVSDeserializer* __this);
        // Method: OnEnterTransform() | Slot: 16 | Token: 0x6028e08
        using fn_OnEnterTransform = void* (*)(PVSDeserializer* __this);
        // Method: IgnoreCheckOptionalDownload() | Slot: 486 | Token: 0xffffffff
        using fn_IgnoreCheckOptionalDownload = void* (*)(PVSDeserializer* __this);
        // Method: () | Slot: 36362 | Token: 0xffffffff
        using fn_unnamed = void* (*)(PVSDeserializer* __this);
        // Method: t() | Slot: 65535 | Token: 0x8000000
        using fn_t = void* (*)(PVSDeserializer* __this);
        // Method: Method_22() | Slot: 30020 | Token: 0x69c4
        using fn_Method_22 = void* (*)(PVSDeserializer* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x5e57
        using fn_Method_23 = void* (*)(PVSDeserializer* __this);
        // Method: nableBrakeLightsEffect() | Slot: 27076 | Token: 0x21a382
        using fn_nableBrakeLightsEffect = void* (*)(PVSDeserializer* __this);
        // Method: Method_25() | Slot: 24151 | Token: 0x13
        using fn_Method_25 = void* (*)(PVSDeserializer* __this);
        // Method: hIconTexture() | Slot: 48175 | Token: 0x1e6
        using fn_hIconTexture = void* (*)(PVSDeserializer* __this);
        // Method: OnEnterTransform(void* data) | Slot: 9 | Token: 0x6028e10
        using fn_OnEnterTransform = void* (*)(PVSDeserializer* __this, void* data);
        // Method: GetSelfSideType() | Slot: 134 | Token: 0xffffffff
        using fn_GetSelfSideType = void* (*)(PVSDeserializer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36370 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(PVSDeserializer* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(PVSDeserializer* __this);
        // Method: Method_31() | Slot: 65535 | Token: 0x12545
        using fn_Method_31 = void* (*)(PVSDeserializer* __this);
        // Method: Method_32() | Slot: 0 | Token: 0x5e57
        using fn_Method_32 = void* (*)(PVSDeserializer* __this);
        // Method: Method_33(void* priority) | Slot: 8434 | Token: 0x43b5ee
        using fn_Method_33 = void* (*)(PVSDeserializer* __this, void* priority);
    };

    // TypeDefIndex: 29063 | Original: COW.CustomPVS.PVSIndexer | Token: 0x2007188
    struct PVSIndexer : Il2Cpp::Object {
        // Fields (14)
        void* m_MapBounds; // m_MapBounds | Token: 0x4038dbf
        void* m_TileCount; // m_TileCount | Token: 0x4038dc0
        void* m_PortalCount; // m_PortalCount | Token: 0x4038dc1
        void* m_TileSize; // m_TileSize | Token: 0x4038dc2
        void* m_PortalSize; // m_PortalSize | Token: 0x4038dc3
        void* m_InverseTileSize; // m_InverseTileSize | Token: 0x4038dc4
        void* m_InversePortalSize; // m_InversePortalSize | Token: 0x4038dc5
        void* m_TotalTileCount; // m_TotalTileCount | Token: 0x4038dc6
        void* m_TotalPortalCount; // m_TotalPortalCount | Token: 0x4038dc7
        void* m_PortalHeightY; // m_PortalHeightY | Token: 0x4038dc8
        void* m_PortalGroundHeights; // m_PortalGroundHeights | Token: 0x4038dc9
        void* m_CustomTileBounds; // m_CustomTileBounds | Token: 0x4038dca
        void* m_CustomTileGroups; // m_CustomTileGroups | Token: 0x4038dcb
        void* m_UseCustomTile; // m_UseCustomTile | Token: 0x4038dcc

        // Methods (10)
        // Method: Method_0() | Slot: 24151 | Token: 0xffff
        using fn_Method_0 = void* (*)(PVSIndexer* __this);
        // Method: bum() | Slot: 46606 | Token: 0x86
        using fn_bum = void* (*)(PVSIndexer* __this);
        // Method: OnEnterTransform(void* points) | Slot: 65535 | Token: 0x6028e18
        using fn_OnEnterTransform = void* (*)(PVSIndexer* __this, void* points);
        // Method: UpdateSelfRank() | Slot: 129 | Token: 0xffffffff
        using fn_UpdateSelfRank = void* (*)(PVSIndexer* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36378 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(PVSIndexer* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(PVSIndexer* __this);
        // Method: Method_6() | Slot: 30032 | Token: 0x12545
        using fn_Method_6 = void* (*)(PVSIndexer* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x5e57
        using fn_Method_7 = void* (*)(PVSIndexer* __this);
        // Method: ghtsEffect(void* priority) | Slot: 9541 | Token: 0x43b677
        using fn_ghtsEffect = void* (*)(PVSIndexer* __this, void* priority);
        // Method: Method_9() | Slot: 24151 | Token: 0x1ffff
        using fn_Method_9 = void* (*)(PVSIndexer* __this);
    };

    // TypeDefIndex: 29064 | Original: COW.CustomPVS.PVSManager | Token: 0x2007189
    struct PVSManager : Il2Cpp::Object {
        // Fields (14)
        void* EnableInABMapPatch; // EnableInABMapPatch | Token: 0x4038dcd
        void* m_Indexer; // m_Indexer | Token: 0x4038dce
        void* m_Deserializer; // m_Deserializer | Token: 0x4038dcf
        void* m_PVSItems; // m_PVSItems | Token: 0x4038dd0
        void* m_DynamicPVSItems; // m_DynamicPVSItems | Token: 0x4038dd1
        void* m_CachePool; // m_CachePool | Token: 0x4038dd2
        void* m_IsValid; // m_IsValid | Token: 0x4038dd3
        void* m_IsInited; // m_IsInited | Token: 0x4038dd4
        void* m_MainCamera; // m_MainCamera | Token: 0x4038dd5
        void* m_CurTileIndex; // m_CurTileIndex | Token: 0x4038dd6
        void* m_CurPortalIndex; // m_CurPortalIndex | Token: 0x4038dd7
        void* m_LastCameraPos; // m_LastCameraPos | Token: 0x4038dd8
        void* m_InternalIsRunning; // m_InternalIsRunning | Token: 0x4038dd9
        void* m_InternalRefreshVisibleDirty; // m_InternalRefreshVisibleDirty | Token: 0x4038dda

        // Methods (31)
        // Method: bum() | Slot: 46751 | Token: 0x86
        using fn_bum = void* (*)(PVSManager* __this);
        // Method: OnEnterTransform(void* num) | Slot: 65535 | Token: 0x6028e20
        using fn_OnEnterTransform = void* (*)(PVSManager* __this, void* num);
        // Method: OnProcessEventOpenInfo() | Slot: 486 | Token: 0xffffffff
        using fn_OnProcessEventOpenInfo = void* (*)(PVSManager* __this);
        // Method: p() | Slot: 36386 | Token: 0xffffffff
        using fn_p = void* (*)(PVSManager* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(PVSManager* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(PVSManager* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5e5c
        using fn_Method_6 = void* (*)(PVSManager* __this);
        // Method: ffect(void* circlePlane) | Slot: 8434 | Token: 0x21a46a
        using fn_ffect = void* (*)(PVSManager* __this, void* circlePlane);
        // Method: Method_8() | Slot: 24156 | Token: 0x6
        using fn_Method_8 = void* (*)(PVSManager* __this);
        // Method: Interval() | Slot: 47150 | Token: 0x86
        using fn_Interval = void* (*)(PVSManager* __this);
        // Method: erTransform(void* weaponID) | Slot: 65535 | Token: 0x6028e28
        using fn_erTransform = void* (*)(PVSManager* __this, void* weaponID);
        // Method: GetEquipBtnState() | Slot: 134 | Token: 0xffffffff
        using fn_GetEquipBtnState = void* (*)(PVSManager* __this);
        // Method: _WAIT() | Slot: 36394 | Token: 0x1755b
        using fn__WAIT = void* (*)(PVSManager* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(PVSManager* __this);
        // Method: Method_14() | Slot: 30046 | Token: 0xa52f
        using fn_Method_14 = void* (*)(PVSManager* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x5e5c
        using fn_Method_15 = void* (*)(PVSManager* __this);
        // Method: bleTailAimi(void* priority) | Slot: 8458 | Token: 0x43b8bf
        using fn_bleTailAimi = void* (*)(PVSManager* __this, void* priority);
        // Method: Method_17() | Slot: 24156 | Token: 0xffff
        using fn_Method_17 = void* (*)(PVSManager* __this);
        // Method: Video() | Slot: 47329 | Token: 0x81
        using fn_Video = void* (*)(PVSManager* __this);
        // Method: erTransform(void* temp) | Slot: 65535 | Token: 0x6028e30
        using fn_erTransform = void* (*)(PVSManager* __this, void* temp);
        // Method: GetWeaponIDBySkinID() | Slot: 129 | Token: 0xffffffff
        using fn_GetWeaponIDBySkinID = void* (*)(PVSManager* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36402 | Token: 0x17563
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(PVSManager* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(PVSManager* __this);
        // Method: Method_23() | Slot: 30055 | Token: 0x69c4
        using fn_Method_23 = void* (*)(PVSManager* __this);
        // Method: Method_24() | Slot: 0 | Token: 0x5e5c
        using fn_Method_24 = void* (*)(PVSManager* __this);
        // Method: i() | Slot: 27076 | Token: 0x43b991
        using fn_i = void* (*)(PVSManager* __this);
        // Method: Method_26() | Slot: 24156 | Token: 0x2ffff
        using fn_Method_26 = void* (*)(PVSManager* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 47560 | Token: 0x86
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(PVSManager* __this);
        // Method: erTransform(void* uniqueID) | Slot: 65535 | Token: 0x6028e38
        using fn_erTransform = void* (*)(PVSManager* __this, void* uniqueID);
        // Method: ChangeMultiOrSelectStateInCustomForRandom() | Slot: 134 | Token: 0xffffffff
        using fn_ChangeMultiOrSelectStateInCustomForRandom = void* (*)(PVSManager* __this);
        // Method: _WAIT() | Slot: 36410 | Token: 0x17570
        using fn__WAIT = void* (*)(PVSManager* __this);
    };

} // namespace COW_CustomPVS
