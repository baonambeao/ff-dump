#pragma once
#include "Il2CppBase.hpp"

namespace Cinemachine {

    // TypeDefIndex: 1406 | Original: Cinemachine.CinemachineBlendListCamera | Token: 0x200057e
    struct CinemachineBlendListCamera : Il2Cpp::Object {
        // Fields (12)
        void* m_LookAt; // m_LookAt | Token: 0x4001fc3
        void* m_Follow; // m_Follow | Token: 0x4001fc4
        void* m_ShowDebugText; // m_ShowDebugText | Token: 0x4001fc5
        void* m_Loop; // m_Loop | Token: 0x4001fc6
        void* m_ChildCameras; // m_ChildCameras | Token: 0x4001fc7
        void* m_Instructions; // m_Instructions | Token: 0x4001fc8
        void* _LiveChild_k__BackingField; // <LiveChild>k__BackingField | Token: 0x4001fc9
        void* _TransitioningFrom_k__BackingField; // <TransitioningFrom>k__BackingField | Token: 0x4001fca
        void* m_State; // m_State | Token: 0x4001fcb
        void* mActivationTime; // mActivationTime | Token: 0x4001fcc
        void* mCurrentInstruction; // mCurrentInstruction | Token: 0x4001fcd
        void* mActiveBlend; // mActiveBlend | Token: 0x4001fce

        // Methods (24)
        // Method: Unindent() | Slot: 129 | Token: 0xffffffff
        using fn_Unindent = void* (*)(CinemachineBlendListCamera* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7386 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineBlendListCamera* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(CinemachineBlendListCamera* __this);
        // Method: Method_3() | Slot: 5960 | Token: 0x12545
        using fn_Method_3 = void* (*)(CinemachineBlendListCamera* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x51d
        using fn_Method_4 = void* (*)(CinemachineBlendListCamera* __this);
        // Method: Time(void* priority) | Slot: 9541 | Token: 0x1fa70
        using fn_Time = void* (*)(CinemachineBlendListCamera* __this, void* priority);
        // Method: Method_6() | Slot: 1309 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(CinemachineBlendListCamera* __this);
        // Method: bum() | Slot: 64112 | Token: 0x86
        using fn_bum = void* (*)(CinemachineBlendListCamera* __this);
        // Method: sfemale(void* number) | Slot: 65535 | Token: 0x6001ce0
        using fn_sfemale = void* (*)(CinemachineBlendListCamera* __this, void* number);
        // Method: Write() | Slot: 134 | Token: 0xffffffff
        using fn_Write = void* (*)(CinemachineBlendListCamera* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7394 | Token: 0x174e
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CinemachineBlendListCamera* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CinemachineBlendListCamera* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0x12545
        using fn_Method_12 = void* (*)(CinemachineBlendListCamera* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x51d
        using fn_Method_13 = void* (*)(CinemachineBlendListCamera* __this);
        // Method: Method_14(void* priority) | Slot: 9541 | Token: 0x2e110
        using fn_Method_14 = void* (*)(CinemachineBlendListCamera* __this, void* priority);
        // Method: Method_15() | Slot: 1309 | Token: 0xffff
        using fn_Method_15 = void* (*)(CinemachineBlendListCamera* __this);
        // Method: bum() | Slot: 57677 | Token: 0x86
        using fn_bum = void* (*)(CinemachineBlendListCamera* __this);
        // Method: sfemale(void* ignore_type) | Slot: 65535 | Token: 0x6001ce8
        using fn_sfemale = void* (*)(CinemachineBlendListCamera* __this, void* ignore_type);
        // Method: IsIgnoreType() | Slot: 134 | Token: 0xffffffff
        using fn_IsIgnoreType = void* (*)(CinemachineBlendListCamera* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7402 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CinemachineBlendListCamera* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(CinemachineBlendListCamera* __this);
        // Method: Method_21() | Slot: 5970 | Token: 0x12545
        using fn_Method_21 = void* (*)(CinemachineBlendListCamera* __this);
        // Method: Method_22() | Slot: 0 | Token: 0x520
        using fn_Method_22 = void* (*)(CinemachineBlendListCamera* __this);
        // Method: Method_23(void* pos) | Slot: 9541 | Token: 0x2dd92
        using fn_Method_23 = void* (*)(CinemachineBlendListCamera* __this, void* pos);
    };

    // TypeDefIndex: 1412 | Original: Cinemachine.CinemachineBrain | Token: 0x2000580
    struct CinemachineBrain : Il2Cpp::Object {
        // Fields (20)
        void* m_ShowDebugText; // m_ShowDebugText | Token: 0x4001fd2
        void* m_ShowCameraFrustum; // m_ShowCameraFrustum | Token: 0x4001fd3
        void* m_IgnoreTimeScale; // m_IgnoreTimeScale | Token: 0x4001fd4
        void* m_FixFovToScreen; // m_FixFovToScreen | Token: 0x4001fd5
        void* m_WorldUpOverride; // m_WorldUpOverride | Token: 0x4001fd6
        void* m_UpdateMethod; // m_UpdateMethod | Token: 0x4001fd7
        void* m_DefaultBlend; // m_DefaultBlend | Token: 0x4001fd8
        void* m_CustomBlends; // m_CustomBlends | Token: 0x4001fd9
        void* m_OutputCamera; // m_OutputCamera | Token: 0x4001fda
        void* m_OutputCameraVirtualFov; // m_OutputCameraVirtualFov | Token: 0x4001fdb
        void* m_CameraCutEvent; // m_CameraCutEvent | Token: 0x4001fdc
        void* m_CameraActivatedEvent; // m_CameraActivatedEvent | Token: 0x4001fdd
        void* mSoloCamera; // mSoloCamera | Token: 0x4001fde
        void* mPhysicsCoroutine; // mPhysicsCoroutine | Token: 0x4001fdf
        void* mWaitForFixedUpdate; // mWaitForFixedUpdate | Token: 0x4001fe0
        void* mFrameStack; // mFrameStack | Token: 0x4001fe1
        void* mNextFrameId; // mNextFrameId | Token: 0x4001fe2
        void* mCurrentLiveCameras; // mCurrentLiveCameras | Token: 0x4001fe3
        void* mActiveCameraPreviousFrame; // mActiveCameraPreviousFrame | Token: 0x4001fe4
        void* _CurrentCameraState_k__BackingField; // <CurrentCameraState>k__BackingField | Token: 0x4001fe5

        // Methods (30)
        // Method: t() | Slot: 56818 | Token: 0x886
        using fn_t = void* (*)(CinemachineBrain* __this);
        // Method: male() | Slot: 65535 | Token: 0x6001cf0
        using fn_male = void* (*)(CinemachineBrain* __this);
        // Method: get_StringValue() | Slot: 2182 | Token: 0xffffffff
        using fn_get_StringValue = void* (*)(CinemachineBrain* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7410 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineBrain* __this);
        // Method: () | Slot: 65535 | Token: 0x8000000
        using fn_unnamed = void* (*)(CinemachineBrain* __this);
        // Method: Method_5() | Slot: 5973 | Token: 0xa52f
        using fn_Method_5 = void* (*)(CinemachineBrain* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x520
        using fn_Method_6 = void* (*)(CinemachineBrain* __this);
        // Method: Method_7() | Slot: 30764 | Token: 0x2e2a9
        using fn_Method_7 = void* (*)(CinemachineBrain* __this);
        // Method: Method_8() | Slot: 1312 | Token: 0x1ffff
        using fn_Method_8 = void* (*)(CinemachineBrain* __this);
        // Method: t() | Slot: 58047 | Token: 0x91
        using fn_t = void* (*)(CinemachineBrain* __this);
        // Method: male(void* ctx) | Slot: 65535 | Token: 0x6001cf8
        using fn_male = void* (*)(CinemachineBrain* __this, void* ctx);
        // Method: State3() | Slot: 145 | Token: 0xffffffff
        using fn_State3 = void* (*)(CinemachineBrain* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7418 | Token: 0x175a
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CinemachineBrain* __this);
        // Method: nfo>i__Field() | Slot: 65535 | Token: 0x8000000
        using fn_nfo_i__Field = void* (*)(CinemachineBrain* __this);
        // Method: Method_14() | Slot: 5980 | Token: 0x69c4
        using fn_Method_14 = void* (*)(CinemachineBrain* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x520
        using fn_Method_15 = void* (*)(CinemachineBrain* __this);
        // Method: urBlackMaskIndex() | Slot: 27076 | Token: 0x2e2e9
        using fn_urBlackMaskIndex = void* (*)(CinemachineBrain* __this);
        // Method: Method_17() | Slot: 1312 | Token: 0x1ffff
        using fn_Method_17 = void* (*)(CinemachineBrain* __this);
        // Method: t() | Slot: 58103 | Token: 0x91
        using fn_t = void* (*)(CinemachineBrain* __this);
        // Method: male(void* ctx) | Slot: 65535 | Token: 0x6001d00
        using fn_male = void* (*)(CinemachineBrain* __this, void* ctx);
        // Method: State11() | Slot: 145 | Token: 0xffffffff
        using fn_State11 = void* (*)(CinemachineBrain* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7426 | Token: 0x1762
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CinemachineBrain* __this);
        // Method: nfo>i__Field() | Slot: 65535 | Token: 0x8000000
        using fn_nfo_i__Field = void* (*)(CinemachineBrain* __this);
        // Method: Method_23() | Slot: 5988 | Token: 0x69c4
        using fn_Method_23 = void* (*)(CinemachineBrain* __this);
        // Method: Method_24() | Slot: 0 | Token: 0x520
        using fn_Method_24 = void* (*)(CinemachineBrain* __this);
        // Method: askIndex() | Slot: 27076 | Token: 0x2e327
        using fn_askIndex = void* (*)(CinemachineBrain* __this);
        // Method: Method_26() | Slot: 1312 | Token: 0x1ffff
        using fn_Method_26 = void* (*)(CinemachineBrain* __this);
        // Method: t() | Slot: 58167 | Token: 0x91
        using fn_t = void* (*)(CinemachineBrain* __this);
        // Method: male(void* ctx) | Slot: 65535 | Token: 0x6001d08
        using fn_male = void* (*)(CinemachineBrain* __this, void* ctx);
        // Method: State19() | Slot: 145 | Token: 0xffffffff
        using fn_State19 = void* (*)(CinemachineBrain* __this);
    };

    // TypeDefIndex: 1414 | Original: Cinemachine.CinemachineDollyCart | Token: 0x2000586
    struct CinemachineDollyCart : Il2Cpp::Object {
        // Fields (5)
        void* m_Path; // m_Path | Token: 0x4001ff3
        void* m_UpdateMethod; // m_UpdateMethod | Token: 0x4001ff4
        void* m_PositionUnits; // m_PositionUnits | Token: 0x4001ff5
        void* m_Speed; // m_Speed | Token: 0x4001ff6
        void* m_Position; // m_Position | Token: 0x4001ff7

        // Methods (5)
        // Method: Method_0() | Slot: 65535 | Token: 0xa52f
        using fn_Method_0 = void* (*)(CinemachineDollyCart* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x520
        using fn_Method_1 = void* (*)(CinemachineDollyCart* __this);
        // Method: Method_2(void* priority) | Slot: 9541 | Token: 0x2e3aa
        using fn_Method_2 = void* (*)(CinemachineDollyCart* __this, void* priority);
        // Method: Method_3() | Slot: 1311 | Token: 0xffff
        using fn_Method_3 = void* (*)(CinemachineDollyCart* __this);
        // Method: bum() | Slot: 6032 | Token: 0x31886
        using fn_bum = void* (*)(CinemachineDollyCart* __this);
    };

    // TypeDefIndex: 1416 | Original: Cinemachine.CinemachinePath | Token: 0x2000588
    struct CinemachinePath : Il2Cpp::Object {
        // Fields (2)
        void* m_Looped; // m_Looped | Token: 0x4001ffc
        void* m_Waypoints; // m_Waypoints | Token: 0x4001ffd

        // Methods (10)
        // Method: emale(void* ctx) | Slot: 13 | Token: 0x6001d18
        using fn_emale = void* (*)(CinemachinePath* __this, void* ctx);
        // Method: BeginInvoke() | Slot: 454 | Token: 0xffffffff
        using fn_BeginInvoke = void* (*)(CinemachinePath* __this);
        // Method: VENT_GRABMIC_RELEASE_OK() | Slot: 7450 | Token: 0x1779
        using fn_VENT_GRABMIC_RELEASE_OK = void* (*)(CinemachinePath* __this);
        // Method: ONSE_FAILED() | Slot: 65535 | Token: 0x8000000
        using fn_ONSE_FAILED = void* (*)(CinemachinePath* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(CinemachinePath* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x524
        using fn_Method_5 = void* (*)(CinemachinePath* __this);
        // Method: bject(void* cutscene) | Slot: 9541 | Token: 0x67
        using fn_bject = void* (*)(CinemachinePath* __this, void* cutscene);
        // Method: Method_7() | Slot: 1315 | Token: 0x2ffff
        using fn_Method_7 = void* (*)(CinemachinePath* __this);
        // Method: bum() | Slot: 6048 | Token: 0x301c6
        using fn_bum = void* (*)(CinemachinePath* __this);
        // Method: e(void* data, void* request_ptr, void* data_size, void* error_code, void* callback, void* object) | Slot: 14 | Token: 0x6001d20
        using fn_e = void* (*)(CinemachinePath* __this, void* data, void* request_ptr, void* data_size, void* error_code, void* callback, void* object);
    };

    // TypeDefIndex: 1417 | Original: Cinemachine.CinemachinePipeline | Token: 0x200058a
    struct CinemachinePipeline : Il2Cpp::Object {

        // Methods (1)
        // Method: ncySubType() | Slot: 7458 | Token: 0x178b
        using fn_ncySubType = void* (*)(CinemachinePipeline* __this);
    };

    // TypeDefIndex: 1419 | Original: Cinemachine.CinemachineSmoothPath | Token: 0x200058b
    struct CinemachineSmoothPath : Il2Cpp::Object {
        // Fields (5)
        void* m_Looped; // m_Looped | Token: 0x4002001
        void* m_Waypoints; // m_Waypoints | Token: 0x4002002
        void* m_ControlPoints1; // m_ControlPoints1 | Token: 0x4002003
        void* m_ControlPoints2; // m_ControlPoints2 | Token: 0x4002004
        void* m_IsLoopedCache; // m_IsLoopedCache | Token: 0x4002005

        // Methods (12)
        // Method: __Field() | Slot: 65535 | Token: 0x8000000
        using fn___Field = void* (*)(CinemachineSmoothPath* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x9126
        using fn_Method_1 = void* (*)(CinemachineSmoothPath* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x528
        using fn_Method_2 = void* (*)(CinemachineSmoothPath* __this);
        // Method: ne(void* cutscene) | Slot: 9541 | Token: 0x2edc0
        using fn_ne = void* (*)(CinemachineSmoothPath* __this, void* cutscene);
        // Method: Method_4() | Slot: 1320 | Token: 0xffff
        using fn_Method_4 = void* (*)(CinemachineSmoothPath* __this);
        // Method: bum() | Slot: 53051 | Token: 0x1e6
        using fn_bum = void* (*)(CinemachineSmoothPath* __this);
        // Method: wType() | Slot: 65535 | Token: 0x6001d28
        using fn_wType = void* (*)(CinemachineSmoothPath* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(CinemachineSmoothPath* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7466 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineSmoothPath* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(CinemachineSmoothPath* __this);
        // Method: Method_10() | Slot: 6030 | Token: 0x12545
        using fn_Method_10 = void* (*)(CinemachineSmoothPath* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x528
        using fn_Method_11 = void* (*)(CinemachineSmoothPath* __this);
    };

    // TypeDefIndex: 1424 | Original: Cinemachine.CinemachineTargetGroup | Token: 0x200058d
    struct CinemachineTargetGroup : Il2Cpp::Object {
        // Fields (7)
        void* m_PositionMode; // m_PositionMode | Token: 0x4002008
        void* m_RotationMode; // m_RotationMode | Token: 0x4002009
        void* m_UpdateMethod; // m_UpdateMethod | Token: 0x400200a
        void* m_Targets; // m_Targets | Token: 0x400200b
        void* _BoundingBox_k__BackingField; // <BoundingBox>k__BackingField | Token: 0x400200c
        void* mMaxWeight; // mMaxWeight | Token: 0x400200d
        void* mAveragePos; // mAveragePos | Token: 0x400200e

        // Methods (18)
        // Method: wType(void* trans_info, void* error_code) | Slot: 65535 | Token: 0x6001d30
        using fn_wType = void* (*)(CinemachineTargetGroup* __this, void* trans_info, void* error_code);
        // Method: UpdateErrorCode() | Slot: 134 | Token: 0xffffffff
        using fn_UpdateErrorCode = void* (*)(CinemachineTargetGroup* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7474 | Token: 0x179a
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CinemachineTargetGroup* __this);
        // Method: __Field() | Slot: 65535 | Token: 0x8000000
        using fn___Field = void* (*)(CinemachineTargetGroup* __this);
        // Method: Method_4() | Slot: 6043 | Token: 0x12545
        using fn_Method_4 = void* (*)(CinemachineTargetGroup* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x528
        using fn_Method_5 = void* (*)(CinemachineTargetGroup* __this);
        // Method: k() | Slot: 42287 | Token: 0x2ee98
        using fn_k = void* (*)(CinemachineTargetGroup* __this);
        // Method: Method_7() | Slot: 1320 | Token: 0xffff
        using fn_Method_7 = void* (*)(CinemachineTargetGroup* __this);
        // Method: bum() | Slot: 9043 | Token: 0x1891
        using fn_bum = void* (*)(CinemachineTargetGroup* __this);
        // Method: showType() | Slot: 65535 | Token: 0x6001d38
        using fn_showType = void* (*)(CinemachineTargetGroup* __this);
        // Method: Init() | Slot: 134 | Token: 0xffffffff
        using fn_Init = void* (*)(CinemachineTargetGroup* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7482 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineTargetGroup* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CinemachineTargetGroup* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(CinemachineTargetGroup* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x525
        using fn_Method_14 = void* (*)(CinemachineTargetGroup* __this);
        // Method: Method_15(void* strAPPSecret) | Slot: 9541 | Token: 0x67
        using fn_Method_15 = void* (*)(CinemachineTargetGroup* __this, void* strAPPSecret);
        // Method: Method_16() | Slot: 1319 | Token: 0x2ffff
        using fn_Method_16 = void* (*)(CinemachineTargetGroup* __this);
        // Method: bum() | Slot: 6048 | Token: 0x301c6
        using fn_bum = void* (*)(CinemachineTargetGroup* __this);
    };

    // TypeDefIndex: 1428 | Original: Cinemachine.CinemachineVirtualCamera | Token: 0x2000592
    struct CinemachineVirtualCamera : Il2Cpp::Object {
        // Fields (14)
        void* m_LookAt; // m_LookAt | Token: 0x400201c
        void* m_Follow; // m_Follow | Token: 0x400201d
        void* m_Lens; // m_Lens | Token: 0x400201e
        void* m_Transitions; // m_Transitions | Token: 0x400201f
        void* m_LegacyBlendHint; // m_LegacyBlendHint | Token: 0x4002020
        void* PipelineName; // PipelineName | Token: 0x4002021
        void* CreatePipelineOverride; // CreatePipelineOverride | Token: 0x4002022
        void* DestroyPipelineOverride; // DestroyPipelineOverride | Token: 0x4002023
        void* _UserIsDragging_k__BackingField; // <UserIsDragging>k__BackingField | Token: 0x4002024
        void* m_State; // m_State | Token: 0x4002025
        void* m_ComponentPipeline; // m_ComponentPipeline | Token: 0x4002026
        void* m_ComponentOwner; // m_ComponentOwner | Token: 0x4002027
        void* mCachedLookAtTarget; // mCachedLookAtTarget | Token: 0x4002028
        void* mCachedLookAtTargetVcam; // mCachedLookAtTargetVcam | Token: 0x4002029

        // Methods (29)
        // Method: EndInvoke() | Slot: 454 | Token: 0xffffffff
        using fn_EndInvoke = void* (*)(CinemachineVirtualCamera* __this);
        // Method: ncySubType() | Slot: 7490 | Token: 0xffffffff
        using fn_ncySubType = void* (*)(CinemachineVirtualCamera* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_3() | Slot: 6066 | Token: 0xa52f
        using fn_Method_3 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x52c
        using fn_Method_4 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_5() | Slot: 27076 | Token: 0x2f0db
        using fn_Method_5 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_6() | Slot: 1324 | Token: 0xffff
        using fn_Method_6 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: () | Slot: 61703 | Token: 0x802091
        using fn_unnamed = void* (*)(CinemachineVirtualCamera* __this);
        // Method: e() | Slot: 65535 | Token: 0x6001d48
        using fn_e = void* (*)(CinemachineVirtualCamera* __this);
        // Method: ffmv_setMagicVoiceInfo() | Slot: 8337 | Token: 0xffffffff
        using fn_ffmv_setMagicVoiceInfo = void* (*)(CinemachineVirtualCamera* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7498 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0xa52f
        using fn_Method_12 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x52c
        using fn_Method_13 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_14() | Slot: 42287 | Token: 0x2f1ca
        using fn_Method_14 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_15() | Slot: 1324 | Token: 0x1ffff
        using fn_Method_15 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Interval() | Slot: 61960 | Token: 0x802091
        using fn_Interval = void* (*)(CinemachineVirtualCamera* __this);
        // Method: e() | Slot: 65535 | Token: 0x6001d50
        using fn_e = void* (*)(CinemachineVirtualCamera* __this);
        // Method: ffmv_stopPreviewMagicVoiceEffect() | Slot: 8337 | Token: 0xffffffff
        using fn_ffmv_stopPreviewMagicVoiceEffect = void* (*)(CinemachineVirtualCamera* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7506 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineVirtualCamera* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_21() | Slot: 6080 | Token: 0x12545
        using fn_Method_21 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_22() | Slot: 0 | Token: 0x52c
        using fn_Method_22 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: meCutsceneManager() | Slot: 37074 | Token: 0x2b801
        using fn_meCutsceneManager = void* (*)(CinemachineVirtualCamera* __this);
        // Method: Method_24() | Slot: 1324 | Token: 0xffff
        using fn_Method_24 = void* (*)(CinemachineVirtualCamera* __this);
        // Method: a() | Slot: 62131 | Token: 0x86
        using fn_a = void* (*)(CinemachineVirtualCamera* __this);
        // Method: e(void* callback) | Slot: 65535 | Token: 0x6001d58
        using fn_e = void* (*)(CinemachineVirtualCamera* __this, void* callback);
        // Method: SetUserInfo() | Slot: 134 | Token: 0xffffffff
        using fn_SetUserInfo = void* (*)(CinemachineVirtualCamera* __this);
        // Method: pe_GB_GP_SoccerGoal() | Slot: 7514 | Token: 0xffffffff
        using fn_pe_GB_GP_SoccerGoal = void* (*)(CinemachineVirtualCamera* __this);
    };

    // TypeDefIndex: 1430 | Original: Cinemachine.CinemachineComposer | Token: 0x2000596
    struct CinemachineComposer : Il2Cpp::Object {
        // Fields (22)
        void* m_TrackedObjectOffset; // m_TrackedObjectOffset | Token: 0x400202c
        void* m_LookaheadTime; // m_LookaheadTime | Token: 0x400202d
        void* m_LookaheadSmoothing; // m_LookaheadSmoothing | Token: 0x400202e
        void* m_LookaheadIgnoreY; // m_LookaheadIgnoreY | Token: 0x400202f
        void* m_HorizontalDamping; // m_HorizontalDamping | Token: 0x4002030
        void* m_VerticalDamping; // m_VerticalDamping | Token: 0x4002031
        void* m_ScreenX; // m_ScreenX | Token: 0x4002032
        void* m_ScreenY; // m_ScreenY | Token: 0x4002033
        void* m_DeadZoneWidth; // m_DeadZoneWidth | Token: 0x4002034
        void* m_DeadZoneHeight; // m_DeadZoneHeight | Token: 0x4002035
        void* m_SoftZoneWidth; // m_SoftZoneWidth | Token: 0x4002036
        void* m_SoftZoneHeight; // m_SoftZoneHeight | Token: 0x4002037
        void* m_BiasX; // m_BiasX | Token: 0x4002038
        void* m_BiasY; // m_BiasY | Token: 0x4002039
        void* m_CenterOnActivate; // m_CenterOnActivate | Token: 0x400203a
        void* _TrackedPoint_k__BackingField; // <TrackedPoint>k__BackingField | Token: 0x400203b
        void* m_CameraPosPrevFrame; // m_CameraPosPrevFrame | Token: 0x400203c
        void* m_LookAtPrevFrame; // m_LookAtPrevFrame | Token: 0x400203d
        void* m_ScreenOffsetPrevFrame; // m_ScreenOffsetPrevFrame | Token: 0x400203e
        void* m_CameraOrientationPrevFrame; // m_CameraOrientationPrevFrame | Token: 0x400203f
        void* m_Predictor; // m_Predictor | Token: 0x4002040
        void* mCache; // mCache | Token: 0x4002041

        // Methods (15)
        // Method: Method_0() | Slot: 0 | Token: 0x52c
        using fn_Method_0 = void* (*)(CinemachineComposer* __this);
        // Method: Method_1() | Slot: 37068 | Token: 0x2f407
        using fn_Method_1 = void* (*)(CinemachineComposer* __this);
        // Method: Method_2() | Slot: 1324 | Token: 0xffff
        using fn_Method_2 = void* (*)(CinemachineComposer* __this);
        // Method: a() | Slot: 103 | Token: 0x86
        using fn_a = void* (*)(CinemachineComposer* __this);
        // Method: e() | Slot: 65535 | Token: 0x6001d68
        using fn_e = void* (*)(CinemachineComposer* __this);
        // Method: Start() | Slot: 129 | Token: 0xffffffff
        using fn_Start = void* (*)(CinemachineComposer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7530 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineComposer* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(CinemachineComposer* __this);
        // Method: Method_8() | Slot: 65535 | Token: 0xa52f
        using fn_Method_8 = void* (*)(CinemachineComposer* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x532
        using fn_Method_9 = void* (*)(CinemachineComposer* __this);
        // Method: Method_10() | Slot: 27076 | Token: 0x2f9ba
        using fn_Method_10 = void* (*)(CinemachineComposer* __this);
        // Method: Method_11() | Slot: 1330 | Token: 0xffff
        using fn_Method_11 = void* (*)(CinemachineComposer* __this);
        // Method: t() | Slot: 64013 | Token: 0x86
        using fn_t = void* (*)(CinemachineComposer* __this);
        // Method: formVFXIngame1pStep1(void* evt, void* errorCode, void* param) | Slot: 0 | Token: 0x6001d70
        using fn_formVFXIngame1pStep1 = void* (*)(CinemachineComposer* __this, void* evt, void* errorCode, void* param);
        // Method: onGetVipInfo() | Slot: 1478 | Token: 0xffffffff
        using fn_onGetVipInfo = void* (*)(CinemachineComposer* __this);
    };

    // TypeDefIndex: 1433 | Original: Cinemachine.CinemachineTrackedDolly | Token: 0x2000598
    struct CinemachineTrackedDolly : Il2Cpp::Object {
        // Fields (15)
        void* m_Path; // m_Path | Token: 0x400204a
        void* m_PathPosition; // m_PathPosition | Token: 0x400204b
        void* m_PositionUnits; // m_PositionUnits | Token: 0x400204c
        void* m_PathOffset; // m_PathOffset | Token: 0x400204d
        void* m_XDamping; // m_XDamping | Token: 0x400204e
        void* m_YDamping; // m_YDamping | Token: 0x400204f
        void* m_ZDamping; // m_ZDamping | Token: 0x4002050
        void* m_CameraUp; // m_CameraUp | Token: 0x4002051
        void* m_PitchDamping; // m_PitchDamping | Token: 0x4002052
        void* m_YawDamping; // m_YawDamping | Token: 0x4002053
        void* m_RollDamping; // m_RollDamping | Token: 0x4002054
        void* m_AutoDolly; // m_AutoDolly | Token: 0x4002055
        void* m_PreviousPathPosition; // m_PreviousPathPosition | Token: 0x4002056
        void* m_PreviousOrientation; // m_PreviousOrientation | Token: 0x4002057
        void* m_PreviousCameraPosition; // m_PreviousCameraPosition | Token: 0x4002058

        // Methods (6)
        // Method: Method_0() | Slot: 65535 | Token: 0x69c4
        using fn_Method_0 = void* (*)(CinemachineTrackedDolly* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x552
        using fn_Method_1 = void* (*)(CinemachineTrackedDolly* __this);
        // Method: atchGame() | Slot: 42287 | Token: 0x311f5
        using fn_atchGame = void* (*)(CinemachineTrackedDolly* __this);
        // Method: Method_3() | Slot: 1362 | Token: 0x5ffff
        using fn_Method_3 = void* (*)(CinemachineTrackedDolly* __this);
        // Method: Interval() | Slot: 4647 | Token: 0x802091
        using fn_Interval = void* (*)(CinemachineTrackedDolly* __this);
        // Method: FXIngame1pStep2() | Slot: 65535 | Token: 0x6001d78
        using fn_FXIngame1pStep2 = void* (*)(CinemachineTrackedDolly* __this);
    };

    // TypeDefIndex: 1436 | Original: Cinemachine.CinemachineTransposer | Token: 0x200059b
    struct CinemachineTransposer : Il2Cpp::Object {
        // Fields (15)
        void* m_BindingMode; // m_BindingMode | Token: 0x4002063
        void* m_FollowOffset; // m_FollowOffset | Token: 0x4002064
        void* m_XDamping; // m_XDamping | Token: 0x4002065
        void* m_YDamping; // m_YDamping | Token: 0x4002066
        void* m_ZDamping; // m_ZDamping | Token: 0x4002067
        void* m_AngularDampingMode; // m_AngularDampingMode | Token: 0x4002068
        void* m_PitchDamping; // m_PitchDamping | Token: 0x4002069
        void* m_YawDamping; // m_YawDamping | Token: 0x400206a
        void* m_RollDamping; // m_RollDamping | Token: 0x400206b
        void* m_AngularDamping; // m_AngularDamping | Token: 0x400206c
        void* _HideOffsetInInspector_k__BackingField; // <HideOffsetInInspector>k__BackingField | Token: 0x400206d
        void* m_PreviousTargetPosition; // m_PreviousTargetPosition | Token: 0x400206e
        void* m_PreviousReferenceOrientation; // m_PreviousReferenceOrientation | Token: 0x400206f
        void* m_targetOrientationOnAssign; // m_targetOrientationOnAssign | Token: 0x4002070
        void* m_previousTarget; // m_previousTarget | Token: 0x4002071

        // Methods (16)
        // Method: _WAIT() | Slot: 7546 | Token: 0x17eb
        using fn__WAIT = void* (*)(CinemachineTransposer* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(CinemachineTransposer* __this);
        // Method: Method_2() | Slot: 6125 | Token: 0xa52f
        using fn_Method_2 = void* (*)(CinemachineTransposer* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x552
        using fn_Method_3 = void* (*)(CinemachineTransposer* __this);
        // Method: eneFinished() | Slot: 42287 | Token: 0x312d7
        using fn_eneFinished = void* (*)(CinemachineTransposer* __this);
        // Method: Method_5() | Slot: 1362 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(CinemachineTransposer* __this);
        // Method: Interval() | Slot: 4901 | Token: 0x802091
        using fn_Interval = void* (*)(CinemachineTransposer* __this);
        // Method: FXIngame1pStep2(void* bOutputToSpeaker) | Slot: 65535 | Token: 0x6001d80
        using fn_FXIngame1pStep2 = void* (*)(CinemachineTransposer* __this, void* bOutputToSpeaker);
        // Method: FFVoice_setSpeakerMute() | Slot: 8337 | Token: 0xffffffff
        using fn_FFVoice_setSpeakerMute = void* (*)(CinemachineTransposer* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7554 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CinemachineTransposer* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(CinemachineTransposer* __this);
        // Method: Method_11() | Slot: 6130 | Token: 0xa52f
        using fn_Method_11 = void* (*)(CinemachineTransposer* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x552
        using fn_Method_12 = void* (*)(CinemachineTransposer* __this);
        // Method: nished() | Slot: 42287 | Token: 0x313cf
        using fn_nished = void* (*)(CinemachineTransposer* __this);
        // Method: Method_14() | Slot: 1362 | Token: 0xffff
        using fn_Method_14 = void* (*)(CinemachineTransposer* __this);
        // Method: bum() | Slot: 5116 | Token: 0x802091
        using fn_bum = void* (*)(CinemachineTransposer* __this);
    };

    // TypeDefIndex: 1438 | Original: Cinemachine.AxisState | Token: 0x200059e
    struct AxisState : Il2Cpp::Object {
        // Fields (15)
        void* Value; // Value | Token: 0x400207c
        void* m_MaxSpeed; // m_MaxSpeed | Token: 0x400207d
        void* m_AccelTime; // m_AccelTime | Token: 0x400207e
        void* m_DecelTime; // m_DecelTime | Token: 0x400207f
        void* m_InputAxisName; // m_InputAxisName | Token: 0x4002080
        void* m_InputAxisValue; // m_InputAxisValue | Token: 0x4002081
        void* m_InvertInput; // m_InvertInput | Token: 0x4002082
        void* m_MinValue; // m_MinValue | Token: 0x4002083
        void* m_MaxValue; // m_MaxValue | Token: 0x4002084
        void* m_Wrap; // m_Wrap | Token: 0x4002085
        void* m_Recentering; // m_Recentering | Token: 0x4002086
        void* mCurrentSpeed; // mCurrentSpeed | Token: 0x4002087
        void* Epsilon; // Epsilon | Token: 0x4002088
        void* m_ValueRangeLocked; // m_ValueRangeLocked | Token: 0x4002089
        void* m_HasRecentering; // m_HasRecentering | Token: 0x400208a

        // Methods (9)
        // Method: FXIngame1pStep2() | Slot: 65535 | Token: 0x6001d88
        using fn_FXIngame1pStep2 = void* (*)(AxisState* __this);
        // Method: FFVoice_setMicVolume() | Slot: 8337 | Token: 0xffffffff
        using fn_FFVoice_setMicVolume = void* (*)(AxisState* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7562 | Token: 0x17f6
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(AxisState* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(AxisState* __this);
        // Method: Method_4() | Slot: 6136 | Token: 0x12545
        using fn_Method_4 = void* (*)(AxisState* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x552
        using fn_Method_5 = void* (*)(AxisState* __this);
        // Method: () | Slot: 42287 | Token: 0x31507
        using fn_unnamed = void* (*)(AxisState* __this);
        // Method: Method_7() | Slot: 1362 | Token: 0x7ffff
        using fn_Method_7 = void* (*)(AxisState* __this);
        // Method: Interval() | Slot: 5435 | Token: 0x802091
        using fn_Interval = void* (*)(AxisState* __this);
    };

    // TypeDefIndex: 1441 | Original: Cinemachine.CameraState | Token: 0x20005a0
    struct CameraState : Il2Cpp::Object {
        // Fields (17)
        void* _Lens_k__BackingField; // <Lens>k__BackingField | Token: 0x4002092
        void* _ReferenceUp_k__BackingField; // <ReferenceUp>k__BackingField | Token: 0x4002093
        void* _ReferenceLookAt_k__BackingField; // <ReferenceLookAt>k__BackingField | Token: 0x4002094
        void* kNoPoint; // kNoPoint | Token: 0x4002095
        void* _RawPosition_k__BackingField; // <RawPosition>k__BackingField | Token: 0x4002096
        void* _RawOrientation_k__BackingField; // <RawOrientation>k__BackingField | Token: 0x4002097
        void* _PositionDampingBypass_k__BackingField; // <PositionDampingBypass>k__BackingField | Token: 0x4002098
        void* _ShotQuality_k__BackingField; // <ShotQuality>k__BackingField | Token: 0x4002099
        void* _PositionCorrection_k__BackingField; // <PositionCorrection>k__BackingField | Token: 0x400209a
        void* _OrientationCorrection_k__BackingField; // <OrientationCorrection>k__BackingField | Token: 0x400209b
        void* _BlendHint_k__BackingField; // <BlendHint>k__BackingField | Token: 0x400209c
        void* mCustom0; // mCustom0 | Token: 0x400209d
        void* mCustom1; // mCustom1 | Token: 0x400209e
        void* mCustom2; // mCustom2 | Token: 0x400209f
        void* mCustom3; // mCustom3 | Token: 0x40020a0
        void* m_CustomOverflow; // m_CustomOverflow | Token: 0x40020a1
        void* _NumCustomBlendables_k__BackingField; // <NumCustomBlendables>k__BackingField | Token: 0x40020a2

        // Methods (37)
        // Method: Method_0() | Slot: 1362 | Token: 0x2ffff
        using fn_Method_0 = void* (*)(CameraState* __this);
        // Method: Interval() | Slot: 5705 | Token: 0x802091
        using fn_Interval = void* (*)(CameraState* __this);
        // Method: FXIngame1pStep2(void* regionId, void* strExtRegionId, void* bAppend) | Slot: 65535 | Token: 0x6001d98
        using fn_FXIngame1pStep2 = void* (*)(CameraState* __this, void* regionId, void* strExtRegionId, void* bAppend);
        // Method: FFVoice_playBackgroundMusic() | Slot: 8337 | Token: 0xffffffff
        using fn_FFVoice_playBackgroundMusic = void* (*)(CameraState* __this);
        // Method: _WAIT() | Slot: 7578 | Token: 0xffffffff
        using fn__WAIT = void* (*)(CameraState* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(CameraState* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0xa52f
        using fn_Method_6 = void* (*)(CameraState* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x552
        using fn_Method_7 = void* (*)(CameraState* __this);
        // Method: () | Slot: 42287 | Token: 0x31707
        using fn_unnamed = void* (*)(CameraState* __this);
        // Method: Method_9() | Slot: 1362 | Token: 0xffff
        using fn_Method_9 = void* (*)(CameraState* __this);
        // Method: Interval() | Slot: 5978 | Token: 0x802091
        using fn_Interval = void* (*)(CameraState* __this);
        // Method: FXIngame1pStep2(void* enabled) | Slot: 65535 | Token: 0x6001da0
        using fn_FXIngame1pStep2 = void* (*)(CameraState* __this, void* enabled);
        // Method: FFVoice_setVadCallbackEnabled() | Slot: 8337 | Token: 0xffffffff
        using fn_FFVoice_setVadCallbackEnabled = void* (*)(CameraState* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7586 | Token: 0x181b
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CameraState* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(CameraState* __this);
        // Method: Method_15() | Slot: 65535 | Token: 0x69c4
        using fn_Method_15 = void* (*)(CameraState* __this);
        // Method: Method_16() | Slot: 0 | Token: 0x552
        using fn_Method_16 = void* (*)(CameraState* __this);
        // Method: Method_17() | Slot: 42287 | Token: 0x317ef
        using fn_Method_17 = void* (*)(CameraState* __this);
        // Method: Method_18() | Slot: 1362 | Token: 0xffff
        using fn_Method_18 = void* (*)(CameraState* __this);
        // Method: Interval() | Slot: 6204 | Token: 0x802091
        using fn_Interval = void* (*)(CameraState* __this);
        // Method: FXIngame1pStep2(void* channelID, void* volLevel) | Slot: 65535 | Token: 0x6001da8
        using fn_FXIngame1pStep2 = void* (*)(CameraState* __this, void* channelID, void* volLevel);
        // Method: FFVoice_setFarendVolumeLevel() | Slot: 8337 | Token: 0xffffffff
        using fn_FFVoice_setFarendVolumeLevel = void* (*)(CameraState* __this);
        // Method: _WAIT() | Slot: 7594 | Token: 0x1821
        using fn__WAIT = void* (*)(CameraState* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(CameraState* __this);
        // Method: Method_24() | Slot: 6181 | Token: 0xa52f
        using fn_Method_24 = void* (*)(CameraState* __this);
        // Method: Method_25() | Slot: 0 | Token: 0x552
        using fn_Method_25 = void* (*)(CameraState* __this);
        // Method: Method_26() | Slot: 42287 | Token: 0x31967
        using fn_Method_26 = void* (*)(CameraState* __this);
        // Method: Method_27() | Slot: 1362 | Token: 0xffff
        using fn_Method_27 = void* (*)(CameraState* __this);
        // Method: _0() | Slot: 6577 | Token: 0x802091
        using fn__0 = void* (*)(CameraState* __this);
        // Method: FXIngame1pStep2(void* fPitchSemiTones) | Slot: 65535 | Token: 0x6001db0
        using fn_FXIngame1pStep2 = void* (*)(CameraState* __this, void* fPitchSemiTones);
        // Method: FFVoice_setRecordingTimeMs() | Slot: 8337 | Token: 0xffffffff
        using fn_FFVoice_setRecordingTimeMs = void* (*)(CameraState* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7602 | Token: 0x182e
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CameraState* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(CameraState* __this);
        // Method: Method_33() | Slot: 6191 | Token: 0xa52f
        using fn_Method_33 = void* (*)(CameraState* __this);
        // Method: Method_34() | Slot: 0 | Token: 0x552
        using fn_Method_34 = void* (*)(CameraState* __this);
        // Method: tsceneFinishOrStoped() | Slot: 42287 | Token: 0x31a93
        using fn_tsceneFinishOrStoped = void* (*)(CameraState* __this);
        // Method: Method_36() | Slot: 1362 | Token: 0x1ffff
        using fn_Method_36 = void* (*)(CameraState* __this);
    };

    // TypeDefIndex: 1442 | Original: Cinemachine.CinemachineBlend | Token: 0x20005a3
    struct CinemachineBlend : Il2Cpp::Object {
        // Fields (5)
        void* _CamA_k__BackingField; // <CamA>k__BackingField | Token: 0x40020af
        void* _CamB_k__BackingField; // <CamB>k__BackingField | Token: 0x40020b0
        void* _BlendCurve_k__BackingField; // <BlendCurve>k__BackingField | Token: 0x40020b1
        void* _TimeInBlend_k__BackingField; // <TimeInBlend>k__BackingField | Token: 0x40020b2
        void* _Duration_k__BackingField; // <Duration>k__BackingField | Token: 0x40020b3

        // Methods (18)
        // Method: FXIngame1pStep2(void* enabled) | Slot: 65535 | Token: 0x6001db8
        using fn_FXIngame1pStep2 = void* (*)(CinemachineBlend* __this, void* enabled);
        // Method: FFVoice_setGrabMicOption() | Slot: 8337 | Token: 0xffffffff
        using fn_FFVoice_setGrabMicOption = void* (*)(CinemachineBlend* __this);
        // Method: ER() | Slot: 7610 | Token: 0x183d
        using fn_ER = void* (*)(CinemachineBlend* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(CinemachineBlend* __this);
        // Method: Method_4() | Slot: 6209 | Token: 0xa52f
        using fn_Method_4 = void* (*)(CinemachineBlend* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x552
        using fn_Method_5 = void* (*)(CinemachineBlend* __this);
        // Method: d() | Slot: 42287 | Token: 0x31bb8
        using fn_d = void* (*)(CinemachineBlend* __this);
        // Method: Method_7() | Slot: 1362 | Token: 0x3ffff
        using fn_Method_7 = void* (*)(CinemachineBlend* __this);
        // Method: Interval() | Slot: 7165 | Token: 0x802091
        using fn_Interval = void* (*)(CinemachineBlend* __this);
        // Method: FXIngame1pStep2(void* pUserID, void* isAccept, void* pContent) | Slot: 65535 | Token: 0x6001dc0
        using fn_FXIngame1pStep2 = void* (*)(CinemachineBlend* __this, void* pUserID, void* isAccept, void* pContent);
        // Method: FFVoice_stopInviteMic() | Slot: 8337 | Token: 0xffffffff
        using fn_FFVoice_stopInviteMic = void* (*)(CinemachineBlend* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7618 | Token: 0x184f
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineBlend* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(CinemachineBlend* __this);
        // Method: Method_13() | Slot: 6228 | Token: 0xa52f
        using fn_Method_13 = void* (*)(CinemachineBlend* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x552
        using fn_Method_14 = void* (*)(CinemachineBlend* __this);
        // Method: Method_15() | Slot: 42287 | Token: 0x31c91
        using fn_Method_15 = void* (*)(CinemachineBlend* __this);
        // Method: Method_16() | Slot: 1362 | Token: 0x3ffff
        using fn_Method_16 = void* (*)(CinemachineBlend* __this);
        // Method: t() | Slot: 7365 | Token: 0x802091
        using fn_t = void* (*)(CinemachineBlend* __this);
    };

    // TypeDefIndex: 1444 | Original: Cinemachine.CinemachineBlendDefinition | Token: 0x20005a4
    struct CinemachineBlendDefinition : Il2Cpp::Object {
        // Fields (4)
        void* m_Style; // m_Style | Token: 0x40020b4
        void* m_Time; // m_Time | Token: 0x40020b5
        void* m_CustomCurve; // m_CustomCurve | Token: 0x40020b6
        void* sStandardCurves; // sStandardCurves | Token: 0x40020b7

        // Methods (3)
        // Method: FXIngame1pStep2() | Slot: 65535 | Token: 0x6001dc8
        using fn_FXIngame1pStep2 = void* (*)(CinemachineBlendDefinition* __this);
        // Method: FFVoice_setMagicVoiceEnable() | Slot: 8337 | Token: 0xffffffff
        using fn_FFVoice_setMagicVoiceEnable = void* (*)(CinemachineBlendDefinition* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7626 | Token: 0x1859
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CinemachineBlendDefinition* __this);
    };

    // TypeDefIndex: 1445 | Original: Cinemachine.StaticPointVirtualCamera | Token: 0x20005a6
    struct StaticPointVirtualCamera : Il2Cpp::Object {
        // Fields (5)
        void* _Name_k__BackingField; // <Name>k__BackingField | Token: 0x40020c1
        void* _Priority_k__BackingField; // <Priority>k__BackingField | Token: 0x40020c2
        void* _LookAt_k__BackingField; // <LookAt>k__BackingField | Token: 0x40020c3
        void* _Follow_k__BackingField; // <Follow>k__BackingField | Token: 0x40020c4
        void* _State_k__BackingField; // <State>k__BackingField | Token: 0x40020c5

        // Methods (20)
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(StaticPointVirtualCamera* __this);
        // Method: Method_1() | Slot: 6236 | Token: 0xa52f
        using fn_Method_1 = void* (*)(StaticPointVirtualCamera* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x552
        using fn_Method_2 = void* (*)(StaticPointVirtualCamera* __this);
        // Method: dCutsceneAnimPrfeb() | Slot: 42287 | Token: 0x31db7
        using fn_dCutsceneAnimPrfeb = void* (*)(StaticPointVirtualCamera* __this);
        // Method: Method_4() | Slot: 1362 | Token: 0xffff
        using fn_Method_4 = void* (*)(StaticPointVirtualCamera* __this);
        // Method: Interval() | Slot: 7691 | Token: 0x802091
        using fn_Interval = void* (*)(StaticPointVirtualCamera* __this);
        // Method: FXIngame1pStep2() | Slot: 65535 | Token: 0x6001dd0
        using fn_FXIngame1pStep2 = void* (*)(StaticPointVirtualCamera* __this);
        // Method: UnityGetMicrophoneModeCallbackFunc() | Slot: 145 | Token: 0xffffffff
        using fn_UnityGetMicrophoneModeCallbackFunc = void* (*)(StaticPointVirtualCamera* __this);
        // Method: imable() | Slot: 7634 | Token: 0x1869
        using fn_imable = void* (*)(StaticPointVirtualCamera* __this);
        // Method: p-CheckShowClanRecommendInGroup0() | Slot: 65535 | Token: 0x8000000
        using fn_p_CheckShowClanRecommendInGroup0 = void* (*)(StaticPointVirtualCamera* __this);
        // Method: Method_10() | Slot: 6254 | Token: 0x12545
        using fn_Method_10 = void* (*)(StaticPointVirtualCamera* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x552
        using fn_Method_11 = void* (*)(StaticPointVirtualCamera* __this);
        // Method: (void* priority) | Slot: 9541 | Token: 0x31efe
        using fn_unnamed = void* (*)(StaticPointVirtualCamera* __this, void* priority);
        // Method: Method_13() | Slot: 1362 | Token: 0x2ffff
        using fn_Method_13 = void* (*)(StaticPointVirtualCamera* __this);
        // Method: bum() | Slot: 7982 | Token: 0x91
        using fn_bum = void* (*)(StaticPointVirtualCamera* __this);
        // Method: FXIngame1pStep2(void* channelID, void* userID, void* param) | Slot: 65535 | Token: 0x6001dd8
        using fn_FXIngame1pStep2 = void* (*)(StaticPointVirtualCamera* __this, void* channelID, void* userID, void* param);
        // Method: UnityFarendHighVoiceCallBackFunc() | Slot: 145 | Token: 0xffffffff
        using fn_UnityFarendHighVoiceCallBackFunc = void* (*)(StaticPointVirtualCamera* __this);
        // Method: imable() | Slot: 7642 | Token: 0x187c
        using fn_imable = void* (*)(StaticPointVirtualCamera* __this);
        // Method: nfo>i__Field() | Slot: 65535 | Token: 0x8000000
        using fn_nfo_i__Field = void* (*)(StaticPointVirtualCamera* __this);
        // Method: Method_19() | Slot: 6272 | Token: 0x12545
        using fn_Method_19 = void* (*)(StaticPointVirtualCamera* __this);
    };

    // TypeDefIndex: 1446 | Original: Cinemachine.BlendSourceVirtualCamera | Token: 0x20005a7
    struct BlendSourceVirtualCamera : Il2Cpp::Object {
        // Fields (5)
        void* _Blend_k__BackingField; // <Blend>k__BackingField | Token: 0x40020c6
        void* _Priority_k__BackingField; // <Priority>k__BackingField | Token: 0x40020c7
        void* _LookAt_k__BackingField; // <LookAt>k__BackingField | Token: 0x40020c8
        void* _Follow_k__BackingField; // <Follow>k__BackingField | Token: 0x40020c9
        void* _State_k__BackingField; // <State>k__BackingField | Token: 0x40020ca

        // Methods (21)
        // Method: Method_0() | Slot: 0 | Token: 0x552
        using fn_Method_0 = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: m_CutsceneList() | Slot: 37099 | Token: 0x2b801
        using fn_m_CutsceneList = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: Method_2() | Slot: 1362 | Token: 0xffff
        using fn_Method_2 = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: bum() | Slot: 62131 | Token: 0x1881
        using fn_bum = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: FXIngame1pStep2(void* strObjName) | Slot: 65535 | Token: 0x6001de0
        using fn_FXIngame1pStep2 = void* (*)(BlendSourceVirtualCamera* __this, void* strObjName);
        // Method: Init() | Slot: 134 | Token: 0xffffffff
        using fn_Init = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: AirdropTech() | Slot: 7650 | Token: 0xffffffff
        using fn_AirdropTech = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: Method_8() | Slot: 6284 | Token: 0x90f3
        using fn_Method_8 = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x552
        using fn_Method_9 = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: KeepInSceneRoot() | Slot: 37107 | Token: 0xf224
        using fn_KeepInSceneRoot = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: Method_11() | Slot: 1362 | Token: 0xffff
        using fn_Method_11 = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: bum() | Slot: 8318 | Token: 0x86
        using fn_bum = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: FXIngame1pStep2(void* cbServerPing) | Slot: 65535 | Token: 0x6001de8
        using fn_FXIngame1pStep2 = void* (*)(BlendSourceVirtualCamera* __this, void* cbServerPing);
        // Method: GetServerPing() | Slot: 134 | Token: 0xffffffff
        using fn_GetServerPing = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7658 | Token: 0x1897
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: Method_17() | Slot: 6296 | Token: 0x90f3
        using fn_Method_17 = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: Method_18() | Slot: 0 | Token: 0x552
        using fn_Method_18 = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: ceneRoot() | Slot: 37107 | Token: 0x32104
        using fn_ceneRoot = void* (*)(BlendSourceVirtualCamera* __this);
        // Method: Method_20() | Slot: 1362 | Token: 0x1ffff
        using fn_Method_20 = void* (*)(BlendSourceVirtualCamera* __this);
    };

    // TypeDefIndex: 1448 | Original: Cinemachine.CinemachineBlenderSettings | Token: 0x20005a8
    struct CinemachineBlenderSettings : Il2Cpp::Object {
        // Fields (2)
        void* m_CustomBlends; // m_CustomBlends | Token: 0x40020cb
        void* kBlendFromAnyCameraLabel; // kBlendFromAnyCameraLabel | Token: 0x40020cc

        // Methods (2)
        // Method: t() | Slot: 8482 | Token: 0x86
        using fn_t = void* (*)(CinemachineBlenderSettings* __this);
        // Method: FXIngame1pStep2(void* mute) | Slot: 65535 | Token: 0x6001df0
        using fn_FXIngame1pStep2 = void* (*)(CinemachineBlenderSettings* __this, void* mute);
    };

    // TypeDefIndex: 1449 | Original: Cinemachine.CinemachineComponentBase | Token: 0x20005aa
    struct CinemachineComponentBase : Il2Cpp::Object {
        // Fields (8)
        void* Epsilon; // Epsilon | Token: 0x40020d0
        void* m_vcamOwner; // m_vcamOwner | Token: 0x40020d1
        void* mCachedFollowTarget; // mCachedFollowTarget | Token: 0x40020d2
        void* mCachedFollowTargetVcam; // mCachedFollowTargetVcam | Token: 0x40020d3
        void* mCachedFollowTargetGroup; // mCachedFollowTargetGroup | Token: 0x40020d4
        void* mCachedLookAtTarget; // mCachedLookAtTarget | Token: 0x40020d5
        void* mCachedLookAtTargetVcam; // mCachedLookAtTargetVcam | Token: 0x40020d6
        void* mCachedLookAtTargetGroup; // mCachedLookAtTargetGroup | Token: 0x40020d7

        // Methods (19)
        // Method: GetExchangeCurrencySubType() | Slot: 7666 | Token: 0x189c
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineComponentBase* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CinemachineComponentBase* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0xa52f
        using fn_Method_2 = void* (*)(CinemachineComponentBase* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x552
        using fn_Method_3 = void* (*)(CinemachineComponentBase* __this);
        // Method: oot(void* priority) | Slot: 9541 | Token: 0x3216f
        using fn_oot = void* (*)(CinemachineComponentBase* __this, void* priority);
        // Method: Method_5() | Slot: 1362 | Token: 0x2ffff
        using fn_Method_5 = void* (*)(CinemachineComponentBase* __this);
        // Method: Interval() | Slot: 8586 | Token: 0x86
        using fn_Interval = void* (*)(CinemachineComponentBase* __this);
        // Method: FXIngame1pStep2(void* bEnabled) | Slot: 65535 | Token: 0x6001df8
        using fn_FXIngame1pStep2 = void* (*)(CinemachineComponentBase* __this, void* bEnabled);
        // Method: GetUseMobileNetworkEnabled() | Slot: 134 | Token: 0xffffffff
        using fn_GetUseMobileNetworkEnabled = void* (*)(CinemachineComponentBase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7674 | Token: 0x18a2
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineComponentBase* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CinemachineComponentBase* __this);
        // Method: Method_11() | Slot: 6319 | Token: 0x90f3
        using fn_Method_11 = void* (*)(CinemachineComponentBase* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x552
        using fn_Method_12 = void* (*)(CinemachineComponentBase* __this);
        // Method: lBack() | Slot: 37107 | Token: 0x321f6
        using fn_lBack = void* (*)(CinemachineComponentBase* __this);
        // Method: Method_14() | Slot: 1362 | Token: 0xffff
        using fn_Method_14 = void* (*)(CinemachineComponentBase* __this);
        // Method: der() | Slot: 8731 | Token: 0x86
        using fn_der = void* (*)(CinemachineComponentBase* __this);
        // Method: FXIngame1pStep2(void* callback, void* bOutputToSpeaker) | Slot: 65535 | Token: 0x6001e00
        using fn_FXIngame1pStep2 = void* (*)(CinemachineComponentBase* __this, void* callback, void* bOutputToSpeaker);
        // Method: SetOtherMicMute() | Slot: 134 | Token: 0xffffffff
        using fn_SetOtherMicMute = void* (*)(CinemachineComponentBase* __this);
        // Method: _WAIT() | Slot: 7682 | Token: 0x18b7
        using fn__WAIT = void* (*)(CinemachineComponentBase* __this);
    };

    // TypeDefIndex: 1455 | Original: Cinemachine.CinemachineCore | Token: 0x20005ab
    struct CinemachineCore : Il2Cpp::Object {
        // Fields (15)
        void* kStreamingVersion; // kStreamingVersion | Token: 0x40020d8
        void* kVersionString; // kVersionString | Token: 0x40020d9
        void* sInstance; // sInstance | Token: 0x40020da
        void* sShowHiddenObjects; // sShowHiddenObjects | Token: 0x40020db
        void* GetInputAxis; // GetInputAxis | Token: 0x40020dc
        void* GetBlendOverride; // GetBlendOverride | Token: 0x40020dd
        void* CameraUpdatedEvent; // CameraUpdatedEvent | Token: 0x40020de
        void* mActiveBrains; // mActiveBrains | Token: 0x40020df
        void* mActiveCameras; // mActiveCameras | Token: 0x40020e0
        void* mAllCameras; // mAllCameras | Token: 0x40020e1
        void* mRoundRobinVcamLastFrame; // mRoundRobinVcamLastFrame | Token: 0x40020e2
        void* mLastUpdateTime; // mLastUpdateTime | Token: 0x40020e3
        void* _FixedFrameCount_k__BackingField; // <FixedFrameCount>k__BackingField | Token: 0x40020e4
        void* mUpdateStatus; // mUpdateStatus | Token: 0x40020e5
        void* _CurrentUpdateFilter_k__BackingField; // <CurrentUpdateFilter>k__BackingField | Token: 0x40020e6

        // Methods (26)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CinemachineCore* __this);
        // Method: Method_1() | Slot: 6331 | Token: 0x90f3
        using fn_Method_1 = void* (*)(CinemachineCore* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x552
        using fn_Method_2 = void* (*)(CinemachineCore* __this);
        // Method: Method_3() | Slot: 37107 | Token: 0x32297
        using fn_Method_3 = void* (*)(CinemachineCore* __this);
        // Method: Method_4() | Slot: 1362 | Token: 0xffff
        using fn_Method_4 = void* (*)(CinemachineCore* __this);
        // Method: der() | Slot: 8897 | Token: 0x86
        using fn_der = void* (*)(CinemachineCore* __this);
        // Method: FXIngame1pStep2(void* volume) | Slot: 65535 | Token: 0x6001e08
        using fn_FXIngame1pStep2 = void* (*)(CinemachineCore* __this, void* volume);
        // Method: GetBackgroundMusicVolume() | Slot: 134 | Token: 0xffffffff
        using fn_GetBackgroundMusicVolume = void* (*)(CinemachineCore* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7690 | Token: 0x18be
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineCore* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CinemachineCore* __this);
        // Method: Method_10() | Slot: 6337 | Token: 0x90f3
        using fn_Method_10 = void* (*)(CinemachineCore* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x552
        using fn_Method_11 = void* (*)(CinemachineCore* __this);
        // Method: eIndex() | Slot: 27076 | Token: 0x32341
        using fn_eIndex = void* (*)(CinemachineCore* __this);
        // Method: Method_13() | Slot: 1362 | Token: 0xffff
        using fn_Method_13 = void* (*)(CinemachineCore* __this);
        // Method: der() | Slot: 9080 | Token: 0x86
        using fn_der = void* (*)(CinemachineCore* __this);
        // Method: FXIngame1pStep2(void* maxVolLevel) | Slot: 65535 | Token: 0x6001e10
        using fn_FXIngame1pStep2 = void* (*)(CinemachineCore* __this, void* maxVolLevel);
        // Method: SetFarendVolumeLevel() | Slot: 134 | Token: 0xffffffff
        using fn_SetFarendVolumeLevel = void* (*)(CinemachineCore* __this);
        // Method: _WAIT() | Slot: 7698 | Token: 0x18c6
        using fn__WAIT = void* (*)(CinemachineCore* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CinemachineCore* __this);
        // Method: Method_19() | Slot: 6346 | Token: 0x90f3
        using fn_Method_19 = void* (*)(CinemachineCore* __this);
        // Method: Method_20() | Slot: 0 | Token: 0x552
        using fn_Method_20 = void* (*)(CinemachineCore* __this);
        // Method: skAnimType() | Slot: 37107 | Token: 0x3241b
        using fn_skAnimType = void* (*)(CinemachineCore* __this);
        // Method: Method_22() | Slot: 1362 | Token: 0xffff
        using fn_Method_22 = void* (*)(CinemachineCore* __this);
        // Method: der() | Slot: 9270 | Token: 0x86
        using fn_der = void* (*)(CinemachineCore* __this);
        // Method: FXIngame1pStep2() | Slot: 65535 | Token: 0x6001e18
        using fn_FXIngame1pStep2 = void* (*)(CinemachineCore* __this);
        // Method: SetSoundtouchPitchSemiTones() | Slot: 134 | Token: 0xffffffff
        using fn_SetSoundtouchPitchSemiTones = void* (*)(CinemachineCore* __this);
    };

    // TypeDefIndex: 1456 | Original: Cinemachine.CinemachineExtension | Token: 0x20005b1
    struct CinemachineExtension : Il2Cpp::Object {
        // Fields (3)
        void* Epsilon; // Epsilon | Token: 0x40020f5
        void* m_vcamOwner; // m_vcamOwner | Token: 0x40020f6
        void* mExtraState; // mExtraState | Token: 0x40020f7

        // Methods (10)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 7714 | Token: 0x18df
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CinemachineExtension* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CinemachineExtension* __this);
        // Method: Method_2() | Slot: 6374 | Token: 0x90f3
        using fn_Method_2 = void* (*)(CinemachineExtension* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x552
        using fn_Method_3 = void* (*)(CinemachineExtension* __this);
        // Method: mType_Fade() | Slot: 37107 | Token: 0x3254b
        using fn_mType_Fade = void* (*)(CinemachineExtension* __this);
        // Method: Method_5() | Slot: 1362 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(CinemachineExtension* __this);
        // Method: der() | Slot: 9581 | Token: 0x86
        using fn_der = void* (*)(CinemachineExtension* __this);
        // Method: FXIngame1pStep2(void* pChannelID, void* pUserID, void* pContent) | Slot: 65535 | Token: 0x6001e28
        using fn_FXIngame1pStep2 = void* (*)(CinemachineExtension* __this, void* pChannelID, void* pUserID, void* pContent);
        // Method: responseInviteMic() | Slot: 134 | Token: 0xffffffff
        using fn_responseInviteMic = void* (*)(CinemachineExtension* __this);
        // Method: imable() | Slot: 7722 | Token: 0xffffffff
        using fn_imable = void* (*)(CinemachineExtension* __this);
    };

    // TypeDefIndex: 1459 | Original: Cinemachine.CinemachinePathBase | Token: 0x20005b2
    struct CinemachinePathBase : Il2Cpp::Object {
        // Fields (8)
        void* m_Resolution; // m_Resolution | Token: 0x40020f8
        void* m_Appearance; // m_Appearance | Token: 0x40020f9
        void* m_DistanceToPos; // m_DistanceToPos | Token: 0x40020fa
        void* m_PosToDistance; // m_PosToDistance | Token: 0x40020fb
        void* m_CachedSampleSteps; // m_CachedSampleSteps | Token: 0x40020fc
        void* m_PathLength; // m_PathLength | Token: 0x40020fd
        void* m_cachedPosStepSize; // m_cachedPosStepSize | Token: 0x40020fe
        void* m_cachedDistanceStepSize; // m_cachedDistanceStepSize | Token: 0x40020ff

        // Methods (21)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CinemachinePathBase* __this);
        // Method: Method_1() | Slot: 6393 | Token: 0x90f3
        using fn_Method_1 = void* (*)(CinemachinePathBase* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x552
        using fn_Method_2 = void* (*)(CinemachinePathBase* __this);
        // Method: _Light() | Slot: 37119 | Token: 0x325d5
        using fn__Light = void* (*)(CinemachinePathBase* __this);
        // Method: Method_4() | Slot: 1362 | Token: 0xffff
        using fn_Method_4 = void* (*)(CinemachinePathBase* __this);
        // Method: der() | Slot: 9718 | Token: 0x86
        using fn_der = void* (*)(CinemachinePathBase* __this);
        // Method: FXIngame1pStep2() | Slot: 65535 | Token: 0x6001e30
        using fn_FXIngame1pStep2 = void* (*)(CinemachinePathBase* __this);
        // Method: ResumeMicSync() | Slot: 134 | Token: 0xffffffff
        using fn_ResumeMicSync = void* (*)(CinemachinePathBase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7730 | Token: 0x18ff
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachinePathBase* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CinemachinePathBase* __this);
        // Method: Method_10() | Slot: 6401 | Token: 0x90f3
        using fn_Method_10 = void* (*)(CinemachinePathBase* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x552
        using fn_Method_11 = void* (*)(CinemachinePathBase* __this);
        // Method: nimType_FadeThenToLight() | Slot: 37107 | Token: 0x3265f
        using fn_nimType_FadeThenToLight = void* (*)(CinemachinePathBase* __this);
        // Method: Method_13() | Slot: 1362 | Token: 0x4ffff
        using fn_Method_13 = void* (*)(CinemachinePathBase* __this);
        // Method: der() | Slot: 9876 | Token: 0x86
        using fn_der = void* (*)(CinemachinePathBase* __this);
        // Method: FXIngame1pStep2(void* userID, void* timeout, void* cbProgress, void* msCdProgress) | Slot: 65535 | Token: 0x6001e38
        using fn_FXIngame1pStep2 = void* (*)(CinemachinePathBase* __this, void* userID, void* timeout, void* cbProgress, void* msCdProgress);
        // Method: AbortUploadLog() | Slot: 134 | Token: 0xffffffff
        using fn_AbortUploadLog = void* (*)(CinemachinePathBase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7738 | Token: 0x190d
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachinePathBase* __this);
        // Method: l() | Slot: 65535 | Token: 0x8000000
        using fn_l = void* (*)(CinemachinePathBase* __this);
        // Method: Method_19() | Slot: 6418 | Token: 0x9e54
        using fn_Method_19 = void* (*)(CinemachinePathBase* __this);
        // Method: Method_20() | Slot: 0 | Token: 0x544
        using fn_Method_20 = void* (*)(CinemachinePathBase* __this);
    };

    // TypeDefIndex: 1460 | Original: Cinemachine.AxisStatePropertyAttribute | Token: 0x20005b5
    struct AxisStatePropertyAttribute : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 1351 | Token: 0x6ffff
        using fn_Method_0 = void* (*)(AxisStatePropertyAttribute* __this);
    };

    // TypeDefIndex: 1461 | Original: Cinemachine.OrbitalTransposerHeadingPropertyAttribute | Token: 0x20005b6
    struct OrbitalTransposerHeadingPropertyAttribute : Il2Cpp::Object {

        // Methods (1)
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(OrbitalTransposerHeadingPropertyAttribute* __this);
    };

    // TypeDefIndex: 1462 | Original: Cinemachine.LensSettingsPropertyAttribute | Token: 0x20005b7
    struct LensSettingsPropertyAttribute : Il2Cpp::Object {

        // Methods (1)
        // Method: TransformVFXIngame1pStep2(void* object, void* method) | Slot: 65535 | Token: 0x6001e40
        using fn_TransformVFXIngame1pStep2 = void* (*)(LensSettingsPropertyAttribute* __this, void* object, void* method);
    };

    // TypeDefIndex: 1463 | Original: Cinemachine.CinemachineBlendDefinitionPropertyAttribute | Token: 0x20005b8
    struct CinemachineBlendDefinitionPropertyAttribute : Il2Cpp::Object {

        // Methods (1)
        // Method: Invoke() | Slot: 454 | Token: 0xffffffff
        using fn_Invoke = void* (*)(CinemachineBlendDefinitionPropertyAttribute* __this);
    };

    // TypeDefIndex: 1464 | Original: Cinemachine.SaveDuringPlayAttribute | Token: 0x20005b9
    struct SaveDuringPlayAttribute : Il2Cpp::Object {

        // Methods (1)
        // Method: rencySubType() | Slot: 7746 | Token: 0x1926
        using fn_rencySubType = void* (*)(SaveDuringPlayAttribute* __this);
    };

    // TypeDefIndex: 1465 | Original: Cinemachine.NoSaveDuringPlayAttribute | Token: 0x20005ba
    struct NoSaveDuringPlayAttribute : Il2Cpp::Object {

        // Methods (1)
        // Method: ONSE_FAILED() | Slot: 65535 | Token: 0x8000000
        using fn_ONSE_FAILED = void* (*)(NoSaveDuringPlayAttribute* __this);
    };

    // TypeDefIndex: 1466 | Original: Cinemachine.TagFieldAttribute | Token: 0x20005bb
    struct TagFieldAttribute : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 6442 | Token: 0x12545
        using fn_Method_0 = void* (*)(TagFieldAttribute* __this);
    };

    // TypeDefIndex: 1467 | Original: Cinemachine.NoiseSettingsPropertyAttribute | Token: 0x20005bc
    struct NoiseSettingsPropertyAttribute : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 0 | Token: 0x54b
        using fn_Method_0 = void* (*)(NoiseSettingsPropertyAttribute* __this);
    };

    // TypeDefIndex: 1468 | Original: Cinemachine.CinemachineEmbeddedAssetPropertyAttribute | Token: 0x20005bd
    struct CinemachineEmbeddedAssetPropertyAttribute : Il2Cpp::Object {
        // Fields (1)
        void* WarnIfNull; // WarnIfNull | Token: 0x4002107

        // Methods (1)
        // Method: Method_0(void* priority) | Slot: 9541 | Token: 0x132
        using fn_Method_0 = void* (*)(CinemachineEmbeddedAssetPropertyAttribute* __this, void* priority);
    };

    // TypeDefIndex: 1470 | Original: Cinemachine.DocumentationSortingAttribute | Token: 0x20005be
    struct DocumentationSortingAttribute : Il2Cpp::Object {
        // Fields (1)
        void* _Category_k__BackingField; // <Category>k__BackingField | Token: 0x4002108

        // Methods (3)
        // Method: Method_0() | Slot: 1355 | Token: 0xffff
        using fn_Method_0 = void* (*)(DocumentationSortingAttribute* __this);
        // Method: bum() | Slot: 10552 | Token: 0x81
        using fn_bum = void* (*)(DocumentationSortingAttribute* __this);
        // Method: nsformVFXIngame1pStep2() | Slot: 65535 | Token: 0x6001e48
        using fn_nsformVFXIngame1pStep2 = void* (*)(DocumentationSortingAttribute* __this);
    };

    // TypeDefIndex: 1474 | Original: Cinemachine.CinemachineVirtualCameraBase | Token: 0x20005c0
    struct CinemachineVirtualCameraBase : Il2Cpp::Object {
        // Fields (14)
        void* m_ExcludedPropertiesInInspector; // m_ExcludedPropertiesInInspector | Token: 0x400210d
        void* m_LockStageInInspector; // m_LockStageInInspector | Token: 0x400210e
        void* m_ValidatingStreamVersion; // m_ValidatingStreamVersion | Token: 0x400210f
        void* m_OnValidateCalled; // m_OnValidateCalled | Token: 0x4002110
        void* m_StreamingVersion; // m_StreamingVersion | Token: 0x4002111
        void* m_Priority; // m_Priority | Token: 0x4002112
        void* m_StandbyUpdate; // m_StandbyUpdate | Token: 0x4002113
        void* mExtensions; // mExtensions | Token: 0x4002114
        void* m_previousStateIsValid; // m_previousStateIsValid | Token: 0x4002115
        void* m_previousLookAtTarget; // m_previousLookAtTarget | Token: 0x4002116
        void* m_previousFollowTarget; // m_previousFollowTarget | Token: 0x4002117
        void* mSlaveStatusUpdated; // mSlaveStatusUpdated | Token: 0x4002118
        void* m_parentVcam; // m_parentVcam | Token: 0x4002119
        void* m_QueuePriority; // m_QueuePriority | Token: 0x400211a

        // Methods (39)
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7754 | Token: 0x192d
        using fn_GetExchangeCurrencySubType = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: l() | Slot: 65535 | Token: 0x8000000
        using fn_l = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Method_3() | Slot: 6450 | Token: 0x9e54
        using fn_Method_3 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x54c
        using fn_Method_4 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: utsceneBlackMask(void* P0) | Slot: 9541 | Token: 0x67
        using fn_utsceneBlackMask = void* (*)(CinemachineVirtualCameraBase* __this, void* P0);
        // Method: Method_6() | Slot: 1357 | Token: 0x2ffff
        using fn_Method_6 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: bum() | Slot: 6048 | Token: 0x301c6
        using fn_bum = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: formVFXIngame1pStep2(void* channelID, void* userID, void* volLevel, void* callback, void* object) | Slot: 14 | Token: 0x6001e50
        using fn_formVFXIngame1pStep2 = void* (*)(CinemachineVirtualCameraBase* __this, void* channelID, void* userID, void* volLevel, void* callback, void* object);
        // Method: EndInvoke() | Slot: 454 | Token: 0xffffffff
        using fn_EndInvoke = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: ncySubType() | Slot: 7762 | Token: 0x1943
        using fn_ncySubType = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: l() | Slot: 65535 | Token: 0x8000000
        using fn_l = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Method_12() | Slot: 6471 | Token: 0x9e54
        using fn_Method_12 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x54e
        using fn_Method_13 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: kAnimType(void* P0) | Slot: 9541 | Token: 0x67
        using fn_kAnimType = void* (*)(CinemachineVirtualCameraBase* __this, void* P0);
        // Method: Method_15() | Slot: 1359 | Token: 0x2ffff
        using fn_Method_15 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: bum() | Slot: 6048 | Token: 0x301c6
        using fn_bum = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: rmVFXIngame1pStep2(void* channelID, void* volLevel, void* callback, void* object) | Slot: 14 | Token: 0x6001e58
        using fn_rmVFXIngame1pStep2 = void* (*)(CinemachineVirtualCameraBase* __this, void* channelID, void* volLevel, void* callback, void* object);
        // Method: EndInvoke() | Slot: 454 | Token: 0xffffffff
        using fn_EndInvoke = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: ncySubType() | Slot: 7770 | Token: 0x1955
        using fn_ncySubType = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: l() | Slot: 65535 | Token: 0x8000000
        using fn_l = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Method_21() | Slot: 6490 | Token: 0x9e54
        using fn_Method_21 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Method_22() | Slot: 0 | Token: 0x550
        using fn_Method_22 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: ihDisableMask(void* P0) | Slot: 9541 | Token: 0x67
        using fn_ihDisableMask = void* (*)(CinemachineVirtualCameraBase* __this, void* P0);
        // Method: Method_24() | Slot: 1361 | Token: 0x2ffff
        using fn_Method_24 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: bum() | Slot: 6048 | Token: 0x301c6
        using fn_bum = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: VFXIngame1pStep2(void* result, void* callback, void* object) | Slot: 14 | Token: 0x6001e60
        using fn_VFXIngame1pStep2 = void* (*)(CinemachineVirtualCameraBase* __this, void* result, void* callback, void* object);
        // Method: EndInvoke() | Slot: 454 | Token: 0xffffffff
        using fn_EndInvoke = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: ncySubType() | Slot: 7778 | Token: 0xffffffff
        using fn_ncySubType = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: alueColor() | Slot: 65535 | Token: 0x8000000
        using fn_alueColor = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Method_30() | Slot: 65535 | Token: 0x69c4
        using fn_Method_30 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Method_31() | Slot: 0 | Token: 0x554
        using fn_Method_31 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Method_32() | Slot: 27076 | Token: 0x2c884
        using fn_Method_32 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Method_33() | Slot: 1364 | Token: 0x4
        using fn_Method_33 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: t() | Slot: 52397 | Token: 0xdc6
        using fn_t = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: Ingame1pStep2() | Slot: 6 | Token: 0x6001e68
        using fn_Ingame1pStep2 = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: GetBoolean() | Slot: 1478 | Token: 0xffffffff
        using fn_GetBoolean = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: y-CSharp() | Slot: 7786 | Token: 0xffffffff
        using fn_y_CSharp = void* (*)(CinemachineVirtualCameraBase* __this);
        // Method: ndGrade() | Slot: 65535 | Token: 0x8000000
        using fn_ndGrade = void* (*)(CinemachineVirtualCameraBase* __this);
    };

    // TypeDefIndex: 1475 | Original: Cinemachine.ICinemachineCamera | Token: 0x20005c4
    struct ICinemachineCamera : Il2Cpp::Object {

        // Methods (17)
        // Method: Method_0() | Slot: 65535 | Token: 0xa946
        using fn_Method_0 = void* (*)(ICinemachineCamera* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x554
        using fn_Method_1 = void* (*)(ICinemachineCamera* __this);
        // Method: Method_2() | Slot: 54255 | Token: 0x2c8bf
        using fn_Method_2 = void* (*)(ICinemachineCamera* __this);
        // Method: Method_3() | Slot: 1364 | Token: 0xc
        using fn_Method_3 = void* (*)(ICinemachineCamera* __this);
        // Method: bum() | Slot: 51412 | Token: 0x5c6
        using fn_bum = void* (*)(ICinemachineCamera* __this);
        // Method: Ingame1pStep2(void* val) | Slot: 14 | Token: 0x6001e70
        using fn_Ingame1pStep2 = void* (*)(ICinemachineCamera* __this, void* val);
        // Method: SetInt() | Slot: 1478 | Token: 0xffffffff
        using fn_SetInt = void* (*)(ICinemachineCamera* __this);
        // Method: ncySubType() | Slot: 7794 | Token: 0x196a
        using fn_ncySubType = void* (*)(ICinemachineCamera* __this);
        // Method: ndGrade() | Slot: 65535 | Token: 0x8000000
        using fn_ndGrade = void* (*)(ICinemachineCamera* __this);
        // Method: Method_9() | Slot: 6508 | Token: 0x12545
        using fn_Method_9 = void* (*)(ICinemachineCamera* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x554
        using fn_Method_10 = void* (*)(ICinemachineCamera* __this);
        // Method: Method_11(void* value) | Slot: 9541 | Token: 0x2c903
        using fn_Method_11 = void* (*)(ICinemachineCamera* __this, void* value);
        // Method: Method_12() | Slot: 1365 | Token: 0x10014
        using fn_Method_12 = void* (*)(ICinemachineCamera* __this);
        // Method: Interval() | Slot: 52435 | Token: 0x886
        using fn_Interval = void* (*)(ICinemachineCamera* __this);
        // Method: ngame1pStep2() | Slot: 65535 | Token: 0x6001e78
        using fn_ngame1pStep2 = void* (*)(ICinemachineCamera* __this);
        // Method: get_IsBoolean() | Slot: 2182 | Token: 0xffffffff
        using fn_get_IsBoolean = void* (*)(ICinemachineCamera* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 7802 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(ICinemachineCamera* __this);
    };

    // TypeDefIndex: 1476 | Original: Cinemachine.LensSettings | Token: 0x20005c5
    struct LensSettings : Il2Cpp::Object {
        // Fields (10)
        void* Default; // Default | Token: 0x4002127
        void* FieldOfView; // FieldOfView | Token: 0x4002128
        void* OrthographicSize; // OrthographicSize | Token: 0x4002129
        void* NearClipPlane; // NearClipPlane | Token: 0x400212a
        void* FarClipPlane; // FarClipPlane | Token: 0x400212b
        void* Dutch; // Dutch | Token: 0x400212c
        void* _Orthographic_k__BackingField; // <Orthographic>k__BackingField | Token: 0x400212d
        void* _IsPhysicalCamera_k__BackingField; // <IsPhysicalCamera>k__BackingField | Token: 0x400212e
        void* _SensorSize_k__BackingField; // <SensorSize>k__BackingField | Token: 0x400212f
        void* LensShift; // LensShift | Token: 0x4002130

        // Methods (14)
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(LensSettings* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x69c4
        using fn_Method_1 = void* (*)(LensSettings* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x555
        using fn_Method_2 = void* (*)(LensSettings* __this);
        // Method: Method_3() | Slot: 27076 | Token: 0x1ccad
        using fn_Method_3 = void* (*)(LensSettings* __this);
        // Method: Method_4() | Slot: 1365 | Token: 0xffff
        using fn_Method_4 = void* (*)(LensSettings* __this);
        // Method: tFollowing() | Slot: 51504 | Token: 0x886
        using fn_tFollowing = void* (*)(LensSettings* __this);
        // Method: ngame1pStep2() | Slot: 37 | Token: 0x6001e80
        using fn_ngame1pStep2 = void* (*)(LensSettings* __this);
        // Method: System.Collections.ICollection.get_IsSynchronized() | Slot: 2529 | Token: 0xffffffff
        using fn_System_Collections_ICollection_get_IsSynchronized = void* (*)(LensSettings* __this);
        // Method: () | Slot: 7810 | Token: 0xffffffff
        using fn_unnamed = void* (*)(LensSettings* __this);
        // Method: tEighthInfiniteEffectDataByID() | Slot: 65535 | Token: 0x8000000
        using fn_tEighthInfiniteEffectDataByID = void* (*)(LensSettings* __this);
        // Method: Method_10() | Slot: 65535 | Token: 0x69c4
        using fn_Method_10 = void* (*)(LensSettings* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x555
        using fn_Method_11 = void* (*)(LensSettings* __this);
        // Method: Method_12() | Slot: 40684 | Token: 0x2ca3c
        using fn_Method_12 = void* (*)(LensSettings* __this);
        // Method: Method_13() | Slot: 1365 | Token: 0x31
        using fn_Method_13 = void* (*)(LensSettings* __this);
    };

    // TypeDefIndex: 1477 | Original: Cinemachine.RuntimeUtility | Token: 0x20005c6
    struct RuntimeUtility : Il2Cpp::Object {

        // Methods (1)
        // Method: t() | Slot: 10832 | Token: 0x9e1
        using fn_t = void* (*)(RuntimeUtility* __this);
    };

    // TypeDefIndex: 1480 | Original: Cinemachine.UpdateTracker | Token: 0x20005c7
    struct UpdateTracker : Il2Cpp::Object {
        // Fields (3)
        void* mUpdateStatus; // mUpdateStatus | Token: 0x4002131
        void* sToDelete; // sToDelete | Token: 0x4002132
        void* mLastUpdateTime; // mLastUpdateTime | Token: 0x4002133

        // Methods (6)
        // Method: ngame1pStep2() | Slot: 5 | Token: 0x6001e88
        using fn_ngame1pStep2 = void* (*)(UpdateTracker* __this);
        // Method: FFVoice.IJsonWrapper.get_IsDouble() | Slot: 2529 | Token: 0xffffffff
        using fn_FFVoice_IJsonWrapper_get_IsDouble = void* (*)(UpdateTracker* __this);
        // Method: ly-CSharp() | Slot: 7818 | Token: 0xffffffff
        using fn_ly_CSharp = void* (*)(UpdateTracker* __this);
        // Method: tEighthInfiniteEffectDataByID() | Slot: 65535 | Token: 0x8000000
        using fn_tEighthInfiniteEffectDataByID = void* (*)(UpdateTracker* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x69c4
        using fn_Method_4 = void* (*)(UpdateTracker* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x555
        using fn_Method_5 = void* (*)(UpdateTracker* __this);
    };

} // namespace Cinemachine
