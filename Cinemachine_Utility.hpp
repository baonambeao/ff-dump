#pragma once
#include "Il2CppBase.hpp"

namespace Cinemachine_Utility {

    // TypeDefIndex: 1487 | Original: Cinemachine.Utility.CinemachineDebug | Token: 0x20005cf
    struct CinemachineDebug : Il2Cpp::Object {
        // Fields (3)
        void* mClients; // mClients | Token: 0x4002149
        void* OnGUIHandlers; // OnGUIHandlers | Token: 0x400214a
        void* mAvailableStringBuilders; // mAvailableStringBuilders | Token: 0x400214b

        // Methods (5)
        // Method: Method_0() | Slot: 6526 | Token: 0x12545
        using fn_Method_0 = void* (*)(CinemachineDebug* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x555
        using fn_Method_1 = void* (*)(CinemachineDebug* __this);
        // Method: iceChangeAnim(void* strAPPSecret) | Slot: 9541 | Token: 0x67
        using fn_iceChangeAnim = void* (*)(CinemachineDebug* __this, void* strAPPSecret);
        // Method: Method_3() | Slot: 1365 | Token: 0x1ffff
        using fn_Method_3 = void* (*)(CinemachineDebug* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(CinemachineDebug* __this);
    };

    // TypeDefIndex: 1488 | Original: Cinemachine.Utility.GaussianWindow1d`1 | Token: 0x20005d1
    struct GaussianWindow1d_1 : Il2Cpp::Object {
        // Fields (5)
        void* mData; // mData | Token: 0x400214c
        void* mKernel; // mKernel | Token: 0x400214d
        void* mKernelSum; // mKernelSum | Token: 0x400214e
        void* mCurrentPos; // mCurrentPos | Token: 0x400214f
        void* _Sigma_k__BackingField; // <Sigma>k__BackingField | Token: 0x4002150

        // Methods (11)
        // Method: Method_0() | Slot: 6534 | Token: 0xa8fe
        using fn_Method_0 = void* (*)(GaussianWindow1d_1* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x555
        using fn_Method_1 = void* (*)(GaussianWindow1d_1* __this);
        // Method: eAnim() | Slot: 27076 | Token: 0x2ccc3
        using fn_eAnim = void* (*)(GaussianWindow1d_1* __this);
        // Method: Method_3() | Slot: 1365 | Token: 0x1ffff
        using fn_Method_3 = void* (*)(GaussianWindow1d_1* __this);
        // Method: ged() | Slot: 52419 | Token: 0x896
        using fn_ged = void* (*)(GaussianWindow1d_1* __this);
        // Method: ngame1pStep2(void* data) | Slot: 65535 | Token: 0x6001ea8
        using fn_ngame1pStep2 = void* (*)(GaussianWindow1d_1* __this, void* data);
        // Method: op_Explicit() | Slot: 2198 | Token: 0xffffffff
        using fn_op_Explicit = void* (*)(GaussianWindow1d_1* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7850 | Token: 0x198c
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(GaussianWindow1d_1* __this);
        // Method: ctor() | Slot: 65535 | Token: 0x8000000
        using fn_ctor = void* (*)(GaussianWindow1d_1* __this);
        // Method: Method_9() | Slot: 6543 | Token: 0x12545
        using fn_Method_9 = void* (*)(GaussianWindow1d_1* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x555
        using fn_Method_10 = void* (*)(GaussianWindow1d_1* __this);
    };

    // TypeDefIndex: 1489 | Original: Cinemachine.Utility.GaussianWindow1D_Vector3 | Token: 0x20005d2
    struct GaussianWindow1D_Vector3 : Il2Cpp::Object {

        // Methods (2)
        // Method: Method_0() | Slot: 27076 | Token: 0x2cd3d
        using fn_Method_0 = void* (*)(GaussianWindow1D_Vector3* __this);
        // Method: Method_1() | Slot: 1365 | Token: 0x10032
        using fn_Method_1 = void* (*)(GaussianWindow1D_Vector3* __this);
    };

    // TypeDefIndex: 1490 | Original: Cinemachine.Utility.GaussianWindow1D_Quaternion | Token: 0x20005d3
    struct GaussianWindow1D_Quaternion : Il2Cpp::Object {

        // Methods (2)
        // Method: bic() | Slot: 52626 | Token: 0x1e1
        using fn_bic = void* (*)(GaussianWindow1D_Quaternion* __this);
        // Method: ngame1pStep2(void* key) | Slot: 56 | Token: 0x6001eb0
        using fn_ngame1pStep2 = void* (*)(GaussianWindow1D_Quaternion* __this, void* key);
    };

    // TypeDefIndex: 1491 | Original: Cinemachine.Utility.GaussianWindow1D_CameraRotation | Token: 0x20005d4
    struct GaussianWindow1D_CameraRotation : Il2Cpp::Object {

        // Methods (2)
        // Method: System.Collections.IEnumerable.GetEnumerator() | Slot: 481 | Token: 0xffffffff
        using fn_System_Collections_IEnumerable_GetEnumerator = void* (*)(GaussianWindow1D_CameraRotation* __this);
        // Method: <Module>() | Slot: 7858 | Token: 0xffffffff
        using fn__Module_ = void* (*)(GaussianWindow1D_CameraRotation* __this);
    };

    // TypeDefIndex: 1492 | Original: Cinemachine.Utility.PositionPredictor | Token: 0x20005d5
    struct PositionPredictor : Il2Cpp::Object {
        // Fields (6)
        void* m_Position; // m_Position | Token: 0x4002151
        void* m_Velocity; // m_Velocity | Token: 0x4002152
        void* m_Accel; // m_Accel | Token: 0x4002153
        void* mLastVelAddedTime; // mLastVelAddedTime | Token: 0x4002154
        void* kSmoothingDefault; // kSmoothingDefault | Token: 0x4002155
        void* mSmoothing; // mSmoothing | Token: 0x4002156

        // Methods (8)
        // Method: ACount() | Slot: 65535 | Token: 0x8000000
        using fn_ACount = void* (*)(PositionPredictor* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0xa52f
        using fn_Method_1 = void* (*)(PositionPredictor* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x555
        using fn_Method_2 = void* (*)(PositionPredictor* __this);
        // Method: Method_3() | Slot: 54255 | Token: 0x32b90
        using fn_Method_3 = void* (*)(PositionPredictor* __this);
        // Method: Method_4() | Slot: 1365 | Token: 0x10
        using fn_Method_4 = void* (*)(PositionPredictor* __this);
        // Method: bum() | Slot: 11215 | Token: 0x1e1
        using fn_bum = void* (*)(PositionPredictor* __this);
        // Method: ngame1pStep2(void* val) | Slot: 18 | Token: 0x6001eb8
        using fn_ngame1pStep2 = void* (*)(PositionPredictor* __this, void* val);
        // Method: FFVoice.IJsonWrapper.SetInt() | Slot: 481 | Token: 0xffffffff
        using fn_FFVoice_IJsonWrapper_SetInt = void* (*)(PositionPredictor* __this);
    };

    // TypeDefIndex: 1493 | Original: Cinemachine.Utility.Damper | Token: 0x20005d6
    struct Damper : Il2Cpp::Object {
        // Fields (3)
        void* Epsilon; // Epsilon | Token: 0x4002157
        void* kNegligibleResidual; // kNegligibleResidual | Token: 0x4002158
        void* kLogNegligibleResidual; // kLogNegligibleResidual | Token: 0x4002159

        // Methods (3)
        // Method: ubType() | Slot: 7866 | Token: 0x1996
        using fn_ubType = void* (*)(Damper* __this);
        // Method: ACount() | Slot: 65535 | Token: 0x8000000
        using fn_ACount = void* (*)(Damper* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_2 = void* (*)(Damper* __this);
    };

    // TypeDefIndex: 1495 | Original: Cinemachine.Utility.HeadingTracker | Token: 0x20005d7
    struct HeadingTracker : Il2Cpp::Object {
        // Fields (9)
        void* mHistory; // mHistory | Token: 0x400215a
        void* mTop; // mTop | Token: 0x400215b
        void* mBottom; // mBottom | Token: 0x400215c
        void* mCount; // mCount | Token: 0x400215d
        void* mHeadingSum; // mHeadingSum | Token: 0x400215e
        void* mWeightSum; // mWeightSum | Token: 0x400215f
        void* mWeightTime; // mWeightTime | Token: 0x4002160
        void* mLastGoodHeading; // mLastGoodHeading | Token: 0x4002161
        void* mDecayExponent; // mDecayExponent | Token: 0x4002162

        // Methods (8)
        // Method: Method_0() | Slot: 0 | Token: 0x555
        using fn_Method_0 = void* (*)(HeadingTracker* __this);
        // Method: ange() | Slot: 42287 | Token: 0x2cf02
        using fn_ange = void* (*)(HeadingTracker* __this);
        // Method: Method_2() | Slot: 1365 | Token: 0x1001b
        using fn_Method_2 = void* (*)(HeadingTracker* __this);
        // Method: bum() | Slot: 53054 | Token: 0x1e1
        using fn_bum = void* (*)(HeadingTracker* __this);
        // Method: ngame1pStep2(void* value) | Slot: 28 | Token: 0x6001ec0
        using fn_ngame1pStep2 = void* (*)(HeadingTracker* __this, void* value);
        // Method: System.Collections.IList.IndexOf() | Slot: 481 | Token: 0xffffffff
        using fn_System_Collections_IList_IndexOf = void* (*)(HeadingTracker* __this);
        // Method: hangeCurrency() | Slot: 7874 | Token: 0x199c
        using fn_hangeCurrency = void* (*)(HeadingTracker* __this);
        // Method: ACount() | Slot: 65535 | Token: 0x8000000
        using fn_ACount = void* (*)(HeadingTracker* __this);
    };

    // TypeDefIndex: 1496 | Original: Cinemachine.Utility.SplineHelpers | Token: 0x20005d9
    struct SplineHelpers : Il2Cpp::Object {

        // Methods (6)
        // Method: Method_0() | Slot: 0 | Token: 0x555
        using fn_Method_0 = void* (*)(SplineHelpers* __this);
        // Method: Method_1(void* ghostTime) | Slot: 9541 | Token: 0x2d023
        using fn_Method_1 = void* (*)(SplineHelpers* __this, void* ghostTime);
        // Method: Method_2() | Slot: 1365 | Token: 0x3002c
        using fn_Method_2 = void* (*)(SplineHelpers* __this);
        // Method: bum() | Slot: 53399 | Token: 0x1e1
        using fn_bum = void* (*)(SplineHelpers* __this);
        // Method: ngame1pStep2() | Slot: 65535 | Token: 0x6001ec8
        using fn_ngame1pStep2 = void* (*)(SplineHelpers* __this);
        // Method: EnsureDictionary() | Slot: 129 | Token: 0xffffffff
        using fn_EnsureDictionary = void* (*)(SplineHelpers* __this);
    };

    // TypeDefIndex: 1497 | Original: Cinemachine.Utility.UnityVectorExtensions | Token: 0x20005da
    struct UnityVectorExtensions : Il2Cpp::Object {
        // Fields (1)
        void* Epsilon; // Epsilon | Token: 0x4002166

        // Methods (7)
        // Method: GetExchangeCurrencySubType() | Slot: 7882 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UnityVectorExtensions* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UnityVectorExtensions* __this);
        // Method: Method_2() | Slot: 6565 | Token: 0x12545
        using fn_Method_2 = void* (*)(UnityVectorExtensions* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x555
        using fn_Method_3 = void* (*)(UnityVectorExtensions* __this);
        // Method: Change(void* priority) | Slot: 9541 | Token: 0x2a36
        using fn_Change = void* (*)(UnityVectorExtensions* __this, void* priority);
        // Method: Method_5() | Slot: 1365 | Token: 0xffff
        using fn_Method_5 = void* (*)(UnityVectorExtensions* __this);
        // Method: t() | Slot: 51371 | Token: 0x1e6
        using fn_t = void* (*)(UnityVectorExtensions* __this);
    };

    // TypeDefIndex: 1498 | Original: Cinemachine.Utility.UnityQuaternionExtensions | Token: 0x20005db
    struct UnityQuaternionExtensions : Il2Cpp::Object {

        // Methods (4)
        // Method: ngame1pStep2() | Slot: 14 | Token: 0x6001ed0
        using fn_ngame1pStep2 = void* (*)(UnityQuaternionExtensions* __this);
        // Method: SetJsonType() | Slot: 486 | Token: 0xffffffff
        using fn_SetJsonType = void* (*)(UnityQuaternionExtensions* __this);
        // Method: bType() | Slot: 7890 | Token: 0xffffffff
        using fn_bType = void* (*)(UnityQuaternionExtensions* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UnityQuaternionExtensions* __this);
    };

    // TypeDefIndex: 1499 | Original: Cinemachine.Utility.UnityRectExtensions | Token: 0x20005dc
    struct UnityRectExtensions : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_0 = void* (*)(UnityRectExtensions* __this);
    };

} // namespace Cinemachine_Utility
