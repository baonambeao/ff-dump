#pragma once
#include "Il2CppBase.hpp"

namespace COW_TimelineEvents {

    // TypeDefIndex: 29311 | Original: COW.TimelineEvents.EventInvocationInfo | Token: 0x2007280
    struct EventInvocationInfo : Il2Cpp::Object {
        // Fields (4)
        void* TargetBehaviour; // TargetBehaviour | Token: 0x40392b2
        void* MethodInfo; // MethodInfo | Token: 0x40392b3
        void* SupportedTypes; // SupportedTypes | Token: 0x40392b4
        void* Key; // Key | Token: 0x40392b5

        // Methods (6)
        // Method: Method_0() | Slot: 31878 | Token: 0x12545
        using fn_Method_0 = void* (*)(EventInvocationInfo* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f48
        using fn_Method_1 = void* (*)(EventInvocationInfo* __this);
        // Method: Method_2(void* priority) | Slot: 9541 | Token: 0x44c5d5
        using fn_Method_2 = void* (*)(EventInvocationInfo* __this, void* priority);
        // Method: Method_3() | Slot: 24392 | Token: 0xffff
        using fn_Method_3 = void* (*)(EventInvocationInfo* __this);
        // Method: bum() | Slot: 50673 | Token: 0x81
        using fn_bum = void* (*)(EventInvocationInfo* __this);
        // Method: ResId() | Slot: 65535 | Token: 0x6029538
        using fn_ResId = void* (*)(EventInvocationInfo* __this);
    };

    // TypeDefIndex: 29313 | Original: COW.TimelineEvents.TimelineEventBehaviour | Token: 0x2007281
    struct TimelineEventBehaviour : Il2Cpp::Object {
        // Fields (10)
        void* HandlerKey; // HandlerKey | Token: 0x40392b6
        void* IsMethodWithParam; // IsMethodWithParam | Token: 0x40392b7
        void* InvokeEventsInEditMode; // InvokeEventsInEditMode | Token: 0x40392b8
        void* TargetObject; // TargetObject | Token: 0x40392b9
        void* ArgValue; // ArgValue | Token: 0x40392ba
        void* AudioBus; // AudioBus | Token: 0x40392bb
        void* AudioSource; // AudioSource | Token: 0x40392bc
        void* invocationInfo; // invocationInfo | Token: 0x40392bd
        void* DirectorName; // DirectorName | Token: 0x40392be
        void* EvaluateInvokeFunc; // EvaluateInvokeFunc | Token: 0x40392bf

        // Methods (6)
        // Method: LoadHudConfigFromPlayerPref() | Slot: 134 | Token: 0xffffffff
        using fn_LoadHudConfigFromPlayerPref = void* (*)(TimelineEventBehaviour* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38202 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(TimelineEventBehaviour* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(TimelineEventBehaviour* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x69c4
        using fn_Method_3 = void* (*)(TimelineEventBehaviour* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f48
        using fn_Method_4 = void* (*)(TimelineEventBehaviour* __this);
        // Method: Method_5(void* priority) | Slot: 9541 | Token: 0x44c682
        using fn_Method_5 = void* (*)(TimelineEventBehaviour* __this, void* priority);
    };

    // TypeDefIndex: 29314 | Original: COW.TimelineEvents.TimelineEventClip | Token: 0x2007283
    struct TimelineEventClip : Il2Cpp::Object {
        // Fields (4)
        void* _template; // template | Token: 0x40392c2
        void* _TrackTargetObject_k__BackingField; // <TrackTargetObject>k__BackingField | Token: 0x40392c3
        void* DirectorName; // DirectorName | Token: 0x40392c4
        void* EvaluateInvokeFunc; // EvaluateInvokeFunc | Token: 0x40392c5

        // Methods (5)
        // Method: ResId() | Slot: 65535 | Token: 0x6029540
        using fn_ResId = void* (*)(TimelineEventClip* __this);
        // Method: ShowGuestRestorePopUpDone() | Slot: 134 | Token: 0xffffffff
        using fn_ShowGuestRestorePopUpDone = void* (*)(TimelineEventClip* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38210 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(TimelineEventClip* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(TimelineEventClip* __this);
        // Method: Method_4() | Slot: 31884 | Token: 0x12545
        using fn_Method_4 = void* (*)(TimelineEventClip* __this);
    };

    // TypeDefIndex: 29315 | Original: COW.TimelineEvents.TimelineEventMixerBehaviour | Token: 0x2007284
    struct TimelineEventMixerBehaviour : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 0 | Token: 0x5f48
        using fn_Method_0 = void* (*)(TimelineEventMixerBehaviour* __this);
    };

    // TypeDefIndex: 29316 | Original: COW.TimelineEvents.TimelineEventTrack | Token: 0x2007285
    struct TimelineEventTrack : Il2Cpp::Object {

        // Methods (3)
        // Method: ordinate(void* priority) | Slot: 9541 | Token: 0x44c726
        using fn_ordinate = void* (*)(TimelineEventTrack* __this, void* priority);
        // Method: Method_1() | Slot: 24392 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(TimelineEventTrack* __this);
        // Method: bum() | Slot: 51025 | Token: 0x86
        using fn_bum = void* (*)(TimelineEventTrack* __this);
    };

} // namespace COW_TimelineEvents
