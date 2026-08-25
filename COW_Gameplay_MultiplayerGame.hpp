#pragma once
#include "Il2CppBase.hpp"

namespace COW_Gameplay_MultiplayerGame {

    // TypeDefIndex: 29556 | Original: COW.Gameplay.MultiplayerGame.UGCScoreBlackboard | Token: 0x2007375
    struct UGCScoreBlackboard : Il2Cpp::Object {
        // Fields (2)
        void* _playerScores; // _playerScores | Token: 0x4039a7e
        void* _teamScores; // _teamScores | Token: 0x4039a7f

        // Methods (7)
        // Method: GenerateHudLogicEntityData() | Slot: 129 | Token: 0xffffffff
        using fn_GenerateHudLogicEntityData = void* (*)(UGCScoreBlackboard* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39690 | Token: 0x181b4
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCScoreBlackboard* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCScoreBlackboard* __this);
        // Method: Method_3() | Slot: 33209 | Token: 0x12545
        using fn_Method_3 = void* (*)(UGCScoreBlackboard* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x601b
        using fn_Method_4 = void* (*)(UGCScoreBlackboard* __this);
        // Method: reate(void* priority) | Slot: 9541 | Token: 0x45827c
        using fn_reate = void* (*)(UGCScoreBlackboard* __this, void* priority);
        // Method: Method_6() | Slot: 24603 | Token: 0x2ffff
        using fn_Method_6 = void* (*)(UGCScoreBlackboard* __this);
    };

} // namespace COW_Gameplay_MultiplayerGame
