#pragma once
#include "Il2CppBase.hpp"

namespace COW_Gameplay_LevelObject {

    // TypeDefIndex: 30479 | Original: COW.Gameplay.LevelObject.ILevelObjectUserDataProvider | Token: 0x2007710
    struct ILevelObjectUserDataProvider : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 25689 | Token: 0x1ffff
        using fn_Method_0 = void* (*)(ILevelObjectUserDataProvider* __this);
    };

    // TypeDefIndex: 30481 | Original: COW.Gameplay.LevelObject.LevelUGCSupplyBoxTrigger | Token: 0x2007711
    struct LevelUGCSupplyBoxTrigger : Il2Cpp::Object {
        // Fields (5)
        void* m_UGCEntityRepItem; // m_UGCEntityRepItem | Token: 0x403ace1
        void* m_ComponentData; // m_ComponentData | Token: 0x403ace2
        void* m_Model; // m_Model | Token: 0x403ace3
        void* _modelOldValue; // _modelOldValue | Token: 0x403ace4
        void* _enableOldValue; // _enableOldValue | Token: 0x403ace5

        // Methods (11)
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(LevelUGCSupplyBoxTrigger* __this);
        // Method: es() | Slot: 65535 | Token: 0x602b540
        using fn_es = void* (*)(LevelUGCSupplyBoxTrigger* __this);
        // Method: <>iFixBaseProxy_OnInit() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnInit = void* (*)(LevelUGCSupplyBoxTrigger* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 46402 | Token: 0x192a8
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(LevelUGCSupplyBoxTrigger* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(LevelUGCSupplyBoxTrigger* __this);
        // Method: Method_5() | Slot: 37545 | Token: 0x12545
        using fn_Method_5 = void* (*)(LevelUGCSupplyBoxTrigger* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x645b
        using fn_Method_6 = void* (*)(LevelUGCSupplyBoxTrigger* __this);
        // Method: originalNormal(void* d) | Slot: 9541 | Token: 0x67
        using fn_originalNormal = void* (*)(LevelUGCSupplyBoxTrigger* __this, void* d);
        // Method: Method_8() | Slot: 25691 | Token: 0xffff
        using fn_Method_8 = void* (*)(LevelUGCSupplyBoxTrigger* __this);
        // Method: bum() | Slot: 2517 | Token: 0x6
        using fn_bum = void* (*)(LevelUGCSupplyBoxTrigger* __this);
        // Method: TargetObject(void* holder) | Slot: 4 | Token: 0x602b548
        using fn_TargetObject = void* (*)(LevelUGCSupplyBoxTrigger* __this, void* holder);
    };

} // namespace COW_Gameplay_LevelObject
