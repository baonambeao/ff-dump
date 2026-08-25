#pragma once
#include "Il2CppBase.hpp"

namespace COW_PotentiallyVisible {

    // TypeDefIndex: 29045 | Original: COW.PotentiallyVisible.PotentiallRootNodeSetting | Token: 0x2007176
    struct PotentiallRootNodeSetting : Il2Cpp::Object {
        // Fields (8)
        void* WolrdBoundsCollider; // WolrdBoundsCollider | Token: 0x4038d2c
        void* Index; // Index | Token: 0x4038d2d
        void* visibleGroup; // visibleGroup | Token: 0x4038d2e
        void* visibleGroupResourceID; // visibleGroupResourceID | Token: 0x4038d2f
        void* NeedLoadComposeData; // NeedLoadComposeData | Token: 0x4038d30
        void* WolrdBounds; // WolrdBounds | Token: 0x4038d31
        void* potentiallyVisibleSetItems; // potentiallyVisibleSetItems | Token: 0x4038d32
        void* notActivePotentiallyVisibleSetItems; // notActivePotentiallyVisibleSetItems | Token: 0x4038d33

        // Methods (10)
        // Method: bum() | Slot: 18858 | Token: 0x1886
        using fn_bum = void* (*)(PotentiallRootNodeSetting* __this);
        // Method: able() | Slot: 65535 | Token: 0x6028da0
        using fn_able = void* (*)(PotentiallRootNodeSetting* __this);
        // Method: <RequestUploadCacheWhenDirty>b__64_0() | Slot: 129 | Token: 0xffffffff
        using fn__RequestUploadCacheWhenDirty_b__64_0 = void* (*)(PotentiallRootNodeSetting* __this);
        // Method: _WAIT() | Slot: 36258 | Token: 0x174ee
        using fn__WAIT = void* (*)(PotentiallRootNodeSetting* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(PotentiallRootNodeSetting* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(PotentiallRootNodeSetting* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5e47
        using fn_Method_6 = void* (*)(PotentiallRootNodeSetting* __this);
        // Method: rcyleSkinInfo(void* cam) | Slot: 9541 | Token: 0x67
        using fn_rcyleSkinInfo = void* (*)(PotentiallRootNodeSetting* __this, void* cam);
        // Method: Method_8() | Slot: 24128 | Token: 0xffff
        using fn_Method_8 = void* (*)(PotentiallRootNodeSetting* __this);
        // Method: bum() | Slot: 44577 | Token: 0x1886
        using fn_bum = void* (*)(PotentiallRootNodeSetting* __this);
    };

    // TypeDefIndex: 29046 | Original: COW.PotentiallyVisible.PortalData | Token: 0x2007177
    struct PortalData : Il2Cpp::Object {
        // Fields (1)
        void* cellList; // cellList | Token: 0x4038d34

        // Methods (1)
        // Method: mtionEnable(void* result) | Slot: 65535 | Token: 0x6028da8
        using fn_mtionEnable = void* (*)(PortalData* __this, void* result);
    };

    // TypeDefIndex: 29047 | Original: COW.PotentiallyVisible.TileData | Token: 0x2007178
    struct TileData : Il2Cpp::Object {
        // Fields (4)
        void* shared64portalList; // shared64portalList | Token: 0x4038d35
        void* shared16portalList; // shared16portalList | Token: 0x4038d36
        void* sharedportalList; // sharedportalList | Token: 0x4038d37
        void* portalList; // portalList | Token: 0x4038d38

        // Methods (1)
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(TileData* __this);
    };

    // TypeDefIndex: 29048 | Original: COW.PotentiallyVisible.PotentiallyVisibleGroup | Token: 0x2007179
    struct PotentiallyVisibleGroup : Il2Cpp::Object {
        // Fields (7)
        void* StartX; // StartX | Token: 0x4038d39
        void* StartZ; // StartZ | Token: 0x4038d3a
        void* EndX; // EndX | Token: 0x4038d3b
        void* EndZ; // EndZ | Token: 0x4038d3c
        void* TileSize; // TileSize | Token: 0x4038d3d
        void* PortalSize; // PortalSize | Token: 0x4038d3e
        void* tileList; // tileList | Token: 0x4038d3f

        // Methods (1)
        // Method: GetExchangeCurrencySubType() | Slot: 36266 | Token: 0x174f3
        using fn_GetExchangeCurrencySubType = void* (*)(PotentiallyVisibleGroup* __this);
    };

    // TypeDefIndex: 29049 | Original: COW.PotentiallyVisible.PVSItemData | Token: 0x200717a
    struct PVSItemData : Il2Cpp::Object {
        // Fields (3)
        void* index; // index | Token: 0x4038d40
        void* size; // size | Token: 0x4038d41
        void* cellList; // cellList | Token: 0x4038d42

        // Methods (1)
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(PVSItemData* __this);
    };

    // TypeDefIndex: 29050 | Original: COW.PotentiallyVisible.PotentiallyVisibleScene | Token: 0x200717b
    struct PotentiallyVisibleScene : Il2Cpp::Object {
        // Fields (9)
        void* RootNode; // RootNode | Token: 0x4038d43
        void* CenterX; // CenterX | Token: 0x4038d44
        void* CenterY; // CenterY | Token: 0x4038d45
        void* CenterZ; // CenterZ | Token: 0x4038d46
        void* SizeX; // SizeX | Token: 0x4038d47
        void* SizeY; // SizeY | Token: 0x4038d48
        void* SizeZ; // SizeZ | Token: 0x4038d49
        void* TotalTransCount; // TotalTransCount | Token: 0x4038d4a
        void* portalList; // portalList | Token: 0x4038d4b

        // Methods (1)
        // Method: Method_0() | Slot: 29940 | Token: 0x12545
        using fn_Method_0 = void* (*)(PotentiallyVisibleScene* __this);
    };

    // TypeDefIndex: 29051 | Original: COW.PotentiallyVisible.MapItemType | Token: 0x200717c
    struct MapItemType : Il2Cpp::Object {
        // Fields (10)
        void* value__; // value__ | Token: 0x4038d4c
        void* Occluder; // Occluder | Token: 0x4038d4d
        void* Occludee; // Occludee | Token: 0x4038d4e
        void* Container; // Container | Token: 0x4038d4f
        void* Vehicle; // Vehicle | Token: 0x4038d50
        void* LuckyBox; // LuckyBox | Token: 0x4038d51
        void* InGameShop; // InGameShop | Token: 0x4038d52
        void* OilDrum; // OilDrum | Token: 0x4038d53
        void* TreasureContainer; // TreasureContainer | Token: 0x4038d54
        void* MissionSupply; // MissionSupply | Token: 0x4038d55
    };

    // TypeDefIndex: 29052 | Original: COW.PotentiallyVisible.MapItemSize | Token: 0x200717d
    struct MapItemSize : Il2Cpp::Object {
        // Fields (5)
        void* value__; // value__ | Token: 0x4038d56
        void* Big; // Big | Token: 0x4038d57
        void* Middle; // Middle | Token: 0x4038d58
        void* Small; // Small | Token: 0x4038d59
        void* None; // None | Token: 0x4038d5a
    };

    // TypeDefIndex: 29053 | Original: COW.PotentiallyVisible.IPVSItemActive | Token: 0x200717e
    struct IPVSItemActive : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 0 | Token: 0x5e43
        using fn_Method_0 = void* (*)(IPVSItemActive* __this);
    };

    // TypeDefIndex: 29054 | Original: COW.PotentiallyVisible.PotentiallyVisibleSetItem | Token: 0x200717f
    struct PotentiallyVisibleSetItem : Il2Cpp::Object {
        // Fields (10)
        void* RootIndex; // RootIndex | Token: 0x4038d5b
        void* size; // size | Token: 0x4038d5c
        void* ownerCellIdList; // ownerCellIdList | Token: 0x4038d5d
        void* occlusionType; // occlusionType | Token: 0x4038d5e
        void* setvisible; // setvisible | Token: 0x4038d5f
        void* visible; // visible | Token: 0x4038d60
        void* go; // go | Token: 0x4038d61
        void* active; // active | Token: 0x4038d62
        void* renders; // renders | Token: 0x4038d63
        void* itemActive; // itemActive | Token: 0x4038d64

        // Methods (18)
        // Method: Method_0(void* strAPPSecret) | Slot: 9541 | Token: 0x43ae86
        using fn_Method_0 = void* (*)(PotentiallyVisibleSetItem* __this, void* strAPPSecret);
        // Method: Method_1() | Slot: 24132 | Token: 0xffff
        using fn_Method_1 = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: bum() | Slot: 44749 | Token: 0x1886
        using fn_bum = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: nEnable(void* errorCode, void* res) | Slot: 65535 | Token: 0x6028db0
        using fn_nEnable = void* (*)(PotentiallyVisibleSetItem* __this, void* errorCode, void* res);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36274 | Token: 0x174f8
        using fn_GetExchangeCurrencySubType = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: Method_7() | Slot: 29945 | Token: 0x69c4
        using fn_Method_7 = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x5e4a
        using fn_Method_8 = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: Method_9(void* circlePlane) | Slot: 9541 | Token: 0x9b8db
        using fn_Method_9 = void* (*)(PotentiallyVisibleSetItem* __this, void* circlePlane);
        // Method: Method_10() | Slot: 24138 | Token: 0x10008
        using fn_Method_10 = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: bum() | Slot: 44857 | Token: 0xc6
        using fn_bum = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: e() | Slot: 65535 | Token: 0x6028db8
        using fn_e = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: AvatarDefaultWeapon() | Slot: 134 | Token: 0xffffffff
        using fn_AvatarDefaultWeapon = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36282 | Token: 0x174fd
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: Method_16() | Slot: 29953 | Token: 0x12545
        using fn_Method_16 = void* (*)(PotentiallyVisibleSetItem* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x5e4a
        using fn_Method_17 = void* (*)(PotentiallyVisibleSetItem* __this);
    };

} // namespace COW_PotentiallyVisible
