#pragma once
#include "Il2CppBase.hpp"

namespace AnimationOrTween {

    // TypeDefIndex: 40084 | Original: AnimationOrTween.Trigger | Token: 0x2000256
    struct Trigger : Il2Cpp::Object {
        // Fields (15)
        void* value__; // value__ | Token: 0x4000ef9
        void* OnClick; // OnClick | Token: 0x4000efa
        void* OnHover; // OnHover | Token: 0x4000efb
        void* OnPress; // OnPress | Token: 0x4000efc
        void* OnHoverTrue; // OnHoverTrue | Token: 0x4000efd
        void* OnHoverFalse; // OnHoverFalse | Token: 0x4000efe
        void* OnPressTrue; // OnPressTrue | Token: 0x4000eff
        void* OnPressFalse; // OnPressFalse | Token: 0x4000f00
        void* OnActivate; // OnActivate | Token: 0x4000f01
        void* OnActivateTrue; // OnActivateTrue | Token: 0x4000f02
        void* OnActivateFalse; // OnActivateFalse | Token: 0x4000f03
        void* OnDoubleClick; // OnDoubleClick | Token: 0x4000f04
        void* OnSelect; // OnSelect | Token: 0x4000f05
        void* OnSelectTrue; // OnSelectTrue | Token: 0x4000f06
        void* OnSelectFalse; // OnSelectFalse | Token: 0x4000f07
    };

    // TypeDefIndex: 40085 | Original: AnimationOrTween.Direction | Token: 0x2000257
    struct Direction : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x4000f08
        void* Reverse; // Reverse | Token: 0x4000f09
        void* Toggle; // Toggle | Token: 0x4000f0a
        void* Forward; // Forward | Token: 0x4000f0b
    };

    // TypeDefIndex: 40086 | Original: AnimationOrTween.EnableCondition | Token: 0x2000258
    struct EnableCondition : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x4000f0c
        void* DoNothing; // DoNothing | Token: 0x4000f0d
        void* EnableThenPlay; // EnableThenPlay | Token: 0x4000f0e
        void* IgnoreDisabledState; // IgnoreDisabledState | Token: 0x4000f0f
    };

    // TypeDefIndex: 40087 | Original: AnimationOrTween.DisableCondition | Token: 0x2000259
    struct DisableCondition : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x4000f10
        void* DisableAfterReverse; // DisableAfterReverse | Token: 0x4000f11
        void* DoNotDisable; // DoNotDisable | Token: 0x4000f12
        void* DisableAfterForward; // DisableAfterForward | Token: 0x4000f13
    };

} // namespace AnimationOrTween
