#pragma once
#include "Il2CppBase.hpp"

namespace Cinemachine_Timeline {

    // TypeDefIndex: 1482 | Original: Cinemachine.Timeline.CinemachineMixer | Token: 0x20005ca
    struct CinemachineMixer : Il2Cpp::Object {
        // Fields (4)
        void* mBrain; // mBrain | Token: 0x400213f
        void* mBrainOverrideId; // mBrainOverrideId | Token: 0x4002140
        void* mPlaying; // mPlaying | Token: 0x4002141
        void* mLastOverrideFrame; // mLastOverrideFrame | Token: 0x4002142

        // Methods (5)
        // Method: System.Collections.IDictionary.set_Item() | Slot: 2529 | Token: 0xffffffff
        using fn_System_Collections_IDictionary_set_Item = void* (*)(CinemachineMixer* __this);
        // Method: allback() | Slot: 7826 | Token: 0x1971
        using fn_allback = void* (*)(CinemachineMixer* __this);
        // Method: tEighthInfiniteEffectDataByID() | Slot: 65535 | Token: 0x8000000
        using fn_tEighthInfiniteEffectDataByID = void* (*)(CinemachineMixer* __this);
        // Method: Method_3() | Slot: 6516 | Token: 0xbee9
        using fn_Method_3 = void* (*)(CinemachineMixer* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x555
        using fn_Method_4 = void* (*)(CinemachineMixer* __this);
    };

    // TypeDefIndex: 1483 | Original: Cinemachine.Timeline.CinemachineShotPlayable | Token: 0x20005cc
    struct CinemachineShotPlayable : Il2Cpp::Object {
        // Fields (1)
        void* VirtualCamera; // VirtualCamera | Token: 0x4002147

        // Methods (2)
        // Method: kAnim() | Slot: 43262 | Token: 0x179b0
        using fn_kAnim = void* (*)(CinemachineShotPlayable* __this);
        // Method: Method_1() | Slot: 1365 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(CinemachineShotPlayable* __this);
    };

    // TypeDefIndex: 1484 | Original: Cinemachine.Timeline.CinemachineShot | Token: 0x20005cd
    struct CinemachineShot : Il2Cpp::Object {
        // Fields (1)
        void* VirtualCamera; // VirtualCamera | Token: 0x4002148

        // Methods (3)
        // Method: bum() | Slot: 31152 | Token: 0x886
        using fn_bum = void* (*)(CinemachineShot* __this);
        // Method: ngame1pStep2(void* index) | Slot: 65535 | Token: 0x6001e98
        using fn_ngame1pStep2 = void* (*)(CinemachineShot* __this, void* index);
        // Method: set_Item() | Slot: 2182 | Token: 0xffffffff
        using fn_set_Item = void* (*)(CinemachineShot* __this);
    };

    // TypeDefIndex: 1485 | Original: Cinemachine.Timeline.CinemachineTrack | Token: 0x20005ce
    struct CinemachineTrack : Il2Cpp::Object {

        // Methods (2)
        // Method: _WAIT() | Slot: 7834 | Token: 0xffffffff
        using fn__WAIT = void* (*)(CinemachineTrack* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(CinemachineTrack* __this);
    };

} // namespace Cinemachine_Timeline
