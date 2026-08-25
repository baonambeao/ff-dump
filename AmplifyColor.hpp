#pragma once
#include "Il2CppBase.hpp"

namespace AmplifyColor {

    // TypeDefIndex: 1532 | Original: AmplifyColor.Quality | Token: 0x20005fd
    struct Quality : Il2Cpp::Object {
        // Fields (3)
        void* value__; // value__ | Token: 0x40021ea
        void* Mobile; // Mobile | Token: 0x40021eb
        void* Standard; // Standard | Token: 0x40021ec
    };

    // TypeDefIndex: 1533 | Original: AmplifyColor.Tonemapping | Token: 0x20005fe
    struct Tonemapping : Il2Cpp::Object {
        // Fields (5)
        void* value__; // value__ | Token: 0x40021ed
        void* Disabled; // Disabled | Token: 0x40021ee
        void* Photographic; // Photographic | Token: 0x40021ef
        void* FilmicHable; // FilmicHable | Token: 0x40021f0
        void* FilmicACES; // FilmicACES | Token: 0x40021f1
    };

    // TypeDefIndex: 1534 | Original: AmplifyColor.EffectType | Token: 0x20005ff
    struct EffectType : Il2Cpp::Object {
        // Fields (16)
        void* value__; // value__ | Token: 0x40021f2
        void* FastSSAO; // FastSSAO | Token: 0x40021f3
        void* ColorGrading; // ColorGrading | Token: 0x40021f4
        void* DepthBlur; // DepthBlur | Token: 0x40021f5
        void* Bloom; // Bloom | Token: 0x40021f6
        void* ACES; // ACES | Token: 0x40021f7
        void* RimLighting; // RimLighting | Token: 0x40021f8
        void* Fog; // Fog | Token: 0x40021f9
        void* LinearToGamma; // LinearToGamma | Token: 0x40021fa
        void* HDR; // HDR | Token: 0x40021fb
        void* BlackWhite; // BlackWhite | Token: 0x40021fc
        void* Distort; // Distort | Token: 0x40021fd
        void* UGCPhotoFilter; // UGCPhotoFilter | Token: 0x40021fe
        void* Outline; // Outline | Token: 0x40021ff
        void* FXAA; // FXAA | Token: 0x4002200
        void* Max; // Max | Token: 0x4002201
    };

} // namespace AmplifyColor
