#pragma once
#include "Il2CppBase.hpp"

namespace COW_Graphics {

    // TypeDefIndex: 29318 | Original: COW.Graphics.PrefabAttacher | Token: 0x2007286
    struct PrefabAttacher : Il2Cpp::Object {
        // Fields (4)
        void* type; // type | Token: 0x40392c6
        void* TargetResourceID; // TargetResourceID | Token: 0x40392c7
        void* HideInEvent; // HideInEvent | Token: 0x40392c8
        void* m_Inst; // m_Inst | Token: 0x40392c9

        // Methods (3)
        // Method: ResId(void* platform) | Slot: 65535 | Token: 0x6029548
        using fn_ResId = void* (*)(PrefabAttacher* __this, void* platform);
        // Method: get_CurrentSyncStatus() | Slot: 2182 | Token: 0xffffffff
        using fn_get_CurrentSyncStatus = void* (*)(PrefabAttacher* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38218 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(PrefabAttacher* __this);
    };

    // TypeDefIndex: 29319 | Original: COW.Graphics.SceneEditEnvironment | Token: 0x2007288
    struct SceneEditEnvironment : Il2Cpp::Object {
        // Fields (2)
        void* PlaneAOMgr; // PlaneAOMgr | Token: 0x40392cd
        void* AOFieldsMgr; // AOFieldsMgr | Token: 0x40392ce

        // Methods (7)
        // Method: BuffFactor() | Slot: 65535 | Token: 0x8000000
        using fn_BuffFactor = void* (*)(SceneEditEnvironment* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0xa52f
        using fn_Method_1 = void* (*)(SceneEditEnvironment* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5f48
        using fn_Method_2 = void* (*)(SceneEditEnvironment* __this);
        // Method: nate() | Slot: 42287 | Token: 0x44c7e1
        using fn_nate = void* (*)(SceneEditEnvironment* __this);
        // Method: Method_4() | Slot: 24392 | Token: 0xffff
        using fn_Method_4 = void* (*)(SceneEditEnvironment* __this);
        // Method: bum() | Slot: 51217 | Token: 0x886
        using fn_bum = void* (*)(SceneEditEnvironment* __this);
        // Method: ResId() | Slot: 65535 | Token: 0x6029550
        using fn_ResId = void* (*)(SceneEditEnvironment* __this);
    };

    // TypeDefIndex: 29320 | Original: COW.Graphics.SceneEditEnvironmentAOFields | Token: 0x2007289
    struct SceneEditEnvironmentAOFields : Il2Cpp::Object {

        // Methods (6)
        // Method: TryAutoDownloadSetting() | Slot: 134 | Token: 0xffffffff
        using fn_TryAutoDownloadSetting = void* (*)(SceneEditEnvironmentAOFields* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38226 | Token: 0x17c94
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SceneEditEnvironmentAOFields* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SceneEditEnvironmentAOFields* __this);
        // Method: Method_3() | Slot: 31893 | Token: 0x12545
        using fn_Method_3 = void* (*)(SceneEditEnvironmentAOFields* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f48
        using fn_Method_4 = void* (*)(SceneEditEnvironmentAOFields* __this);
        // Method: r(void* priority) | Slot: 9541 | Token: 0x44c892
        using fn_r = void* (*)(SceneEditEnvironmentAOFields* __this, void* priority);
    };

    // TypeDefIndex: 29321 | Original: COW.Graphics.SceneEditEnvironmentPlaneAO | Token: 0x200728a
    struct SceneEditEnvironmentPlaneAO : Il2Cpp::Object {
        // Fields (2)
        void* m_LayerMask; // m_LayerMask | Token: 0x40392cf
        void* m_GoAoDic; // m_GoAoDic | Token: 0x40392d0

        // Methods (6)
        // Method: Method_0() | Slot: 24392 | Token: 0xffff
        using fn_Method_0 = void* (*)(SceneEditEnvironmentPlaneAO* __this);
        // Method: bum() | Slot: 47114 | Token: 0x86
        using fn_bum = void* (*)(SceneEditEnvironmentPlaneAO* __this);
        // Method: ResId(void* value) | Slot: 65535 | Token: 0x6029558
        using fn_ResId = void* (*)(SceneEditEnvironmentPlaneAO* __this, void* value);
        // Method: GetNewbieSettingValueByType() | Slot: 129 | Token: 0xffffffff
        using fn_GetNewbieSettingValueByType = void* (*)(SceneEditEnvironmentPlaneAO* __this);
        // Method: _WAIT() | Slot: 38234 | Token: 0x17c9c
        using fn__WAIT = void* (*)(SceneEditEnvironmentPlaneAO* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SceneEditEnvironmentPlaneAO* __this);
    };

    // TypeDefIndex: 29323 | Original: COW.Graphics.ColorGrading | Token: 0x200728b
    struct ColorGrading : Il2Cpp::Object {
        // Fields (22)
        void* LutSize; // LutSize | Token: 0x40392d1
        void* LutWidth; // LutWidth | Token: 0x40392d2
        void* LutHeight; // LutHeight | Token: 0x40392d3
        void* m_isInit; // m_isInit | Token: 0x40392d4
        void* shaderBase; // shaderBase | Token: 0x40392d5
        void* shaderProcessOnly; // shaderProcessOnly | Token: 0x40392d6
        void* blendCacheLut; // blendCacheLut | Token: 0x40392d7
        void* defaultLut; // defaultLut | Token: 0x40392d8
        void* depthCurveLut; // depthCurveLut | Token: 0x40392d9
        void* colorSpace; // colorSpace | Token: 0x40392da
        void* qualityLevel; // qualityLevel | Token: 0x40392db
        void* materialBase; // materialBase | Token: 0x40392dc
        void* materialBlend; // materialBlend | Token: 0x40392dd
        void* materialBlendCache; // materialBlendCache | Token: 0x40392de
        void* materialProcessOnly; // materialProcessOnly | Token: 0x40392df
        void* stylizedFilterShader; // stylizedFilterShader | Token: 0x40392e0
        void* stylizedFilterMaterial; // stylizedFilterMaterial | Token: 0x40392e1
        void* paperTexture; // paperTexture | Token: 0x40392e2
        void* pixelTexture; // pixelTexture | Token: 0x40392e3
        void* cyberpunkTexture; // cyberpunkTexture | Token: 0x40392e4
        void* blending; // blending | Token: 0x40392e5
        void* midBlendLUT; // midBlendLUT | Token: 0x40392e6

        // Methods (25)
        // Method: Method_0() | Slot: 31902 | Token: 0xd3ef
        using fn_Method_0 = void* (*)(ColorGrading* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f48
        using fn_Method_1 = void* (*)(ColorGrading* __this);
        // Method: Method_2() | Slot: 27076 | Token: 0x44c980
        using fn_Method_2 = void* (*)(ColorGrading* __this);
        // Method: Method_3() | Slot: 24392 | Token: 0x1ffff
        using fn_Method_3 = void* (*)(ColorGrading* __this);
        // Method: bum() | Slot: 51624 | Token: 0x86
        using fn_bum = void* (*)(ColorGrading* __this);
        // Method: ResId(void* hudName) | Slot: 65535 | Token: 0x6029560
        using fn_ResId = void* (*)(ColorGrading* __this, void* hudName);
        // Method: ReqGenetateHudShareCode() | Slot: 134 | Token: 0xffffffff
        using fn_ReqGenetateHudShareCode = void* (*)(ColorGrading* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38242 | Token: 0x17ca2
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(ColorGrading* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(ColorGrading* __this);
        // Method: Method_9() | Slot: 31910 | Token: 0x7d72
        using fn_Method_9 = void* (*)(ColorGrading* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x5f48
        using fn_Method_10 = void* (*)(ColorGrading* __this);
        // Method: amicEntity() | Slot: 27076 | Token: 0x44ca4e
        using fn_amicEntity = void* (*)(ColorGrading* __this);
        // Method: Method_12() | Slot: 24392 | Token: 0xffff
        using fn_Method_12 = void* (*)(ColorGrading* __this);
        // Method: t() | Slot: 51853 | Token: 0x86
        using fn_t = void* (*)(ColorGrading* __this);
        // Method: ResId(void* presetIndex) | Slot: 65535 | Token: 0x6029568
        using fn_ResId = void* (*)(ColorGrading* __this, void* presetIndex);
        // Method: GetCurrentHudPreset() | Slot: 134 | Token: 0xffffffff
        using fn_GetCurrentHudPreset = void* (*)(ColorGrading* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38250 | Token: 0x17ca9
        using fn_GetExchangeCurrencySubType = void* (*)(ColorGrading* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(ColorGrading* __this);
        // Method: Method_18() | Slot: 31918 | Token: 0x439f
        using fn_Method_18 = void* (*)(ColorGrading* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x5f48
        using fn_Method_19 = void* (*)(ColorGrading* __this);
        // Method: Method_20() | Slot: 42287 | Token: 0x44cb10
        using fn_Method_20 = void* (*)(ColorGrading* __this);
        // Method: Method_21() | Slot: 24392 | Token: 0xffff
        using fn_Method_21 = void* (*)(ColorGrading* __this);
        // Method: bum() | Slot: 103 | Token: 0x86
        using fn_bum = void* (*)(ColorGrading* __this);
        // Method: ResId() | Slot: 65535 | Token: 0x6029570
        using fn_ResId = void* (*)(ColorGrading* __this);
        // Method: .cctor() | Slot: 6289 | Token: 0xffffffff
        using fn__cctor = void* (*)(ColorGrading* __this);
    };

    // TypeDefIndex: 29325 | Original: COW.Graphics.EffectRTPool | Token: 0x200728d
    struct EffectRTPool : Il2Cpp::Object {
        // Fields (1)
        void* m_totalRT; // m_totalRT | Token: 0x40392ef

        // Methods (6)
        // Method: GetExchangeCurrencySubType() | Slot: 38258 | Token: 0x17caf
        using fn_GetExchangeCurrencySubType = void* (*)(EffectRTPool* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(EffectRTPool* __this);
        // Method: Method_2() | Slot: 31923 | Token: 0x12545
        using fn_Method_2 = void* (*)(EffectRTPool* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f48
        using fn_Method_3 = void* (*)(EffectRTPool* __this);
        // Method: cessStaticEntity(void* priority) | Slot: 9541 | Token: 0x44cbb7
        using fn_cessStaticEntity = void* (*)(EffectRTPool* __this, void* priority);
        // Method: Method_5() | Slot: 24392 | Token: 0x2ffff
        using fn_Method_5 = void* (*)(EffectRTPool* __this);
    };

    // TypeDefIndex: 29326 | Original: COW.Graphics.FastSSAO | Token: 0x200728f
    struct FastSSAO : Il2Cpp::Object {
        // Fields (6)
        void* m_isInit; // m_isInit | Token: 0x40392f2
        void* m_Shader; // m_Shader | Token: 0x40392f3
        void* m_Material; // m_Material | Token: 0x40392f4
        void* m_Width; // m_Width | Token: 0x40392f5
        void* m_Height; // m_Height | Token: 0x40392f6
        void* m_RayRotRads; // m_RayRotRads | Token: 0x40392f7

        // Methods (13)
        // Method: ResId(void* errorCode, void* res) | Slot: 65535 | Token: 0x6029578
        using fn_ResId = void* (*)(FastSSAO* __this, void* errorCode, void* res);
        // Method: <>iFixBaseProxy_Login() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Login = void* (*)(FastSSAO* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38266 | Token: 0x17cbe
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(FastSSAO* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(FastSSAO* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(FastSSAO* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5f44
        using fn_Method_5 = void* (*)(FastSSAO* __this);
        // Method: Method_6(void* strAPPSecret) | Slot: 9541 | Token: 0x44d343
        using fn_Method_6 = void* (*)(FastSSAO* __this, void* strAPPSecret);
        // Method: Method_7() | Slot: 24388 | Token: 0x1ffff
        using fn_Method_7 = void* (*)(FastSSAO* __this);
        // Method: bum() | Slot: 54152 | Token: 0x83
        using fn_bum = void* (*)(FastSSAO* __this);
        // Method: kSFXResId(void* a, void* b) | Slot: 65535 | Token: 0x6029580
        using fn_kSFXResId = void* (*)(FastSSAO* __this, void* a, void* b);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(FastSSAO* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38274 | Token: 0x17cc4
        using fn_GetExchangeCurrencySubType = void* (*)(FastSSAO* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(FastSSAO* __this);
    };

    // TypeDefIndex: 29327 | Original: COW.Graphics.FogPostEffect | Token: 0x2007290
    struct FogPostEffect : Il2Cpp::Object {
        // Fields (4)
        void* m_fogShader; // m_fogShader | Token: 0x40392f8
        void* m_fogMaterial; // m_fogMaterial | Token: 0x40392f9
        void* m_isInit; // m_isInit | Token: 0x40392fa
        void* camModeO; // camModeO | Token: 0x40392fb

        // Methods (20)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(FogPostEffect* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f46
        using fn_Method_1 = void* (*)(FogPostEffect* __this);
        // Method: rocessEntity(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_rocessEntity = void* (*)(FogPostEffect* __this, void* instCount);
        // Method: Method_3() | Slot: 24391 | Token: 0xffff
        using fn_Method_3 = void* (*)(FogPostEffect* __this);
        // Method: bum() | Slot: 42090 | Token: 0x83
        using fn_bum = void* (*)(FogPostEffect* __this);
        // Method: esId() | Slot: 6 | Token: 0x6029588
        using fn_esId = void* (*)(FogPostEffect* __this);
        // Method: ModifyTitleKey() | Slot: 129 | Token: 0xffffffff
        using fn_ModifyTitleKey = void* (*)(FogPostEffect* __this);
        // Method: _WAIT() | Slot: 38282 | Token: 0x17ccd
        using fn__WAIT = void* (*)(FogPostEffect* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(FogPostEffect* __this);
        // Method: Method_9() | Slot: 31953 | Token: 0xd3ef
        using fn_Method_9 = void* (*)(FogPostEffect* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x5f49
        using fn_Method_10 = void* (*)(FogPostEffect* __this);
        // Method: () | Slot: 27076 | Token: 0x44d463
        using fn_unnamed = void* (*)(FogPostEffect* __this);
        // Method: Method_12() | Slot: 24393 | Token: 0x1ffff
        using fn_Method_12 = void* (*)(FogPostEffect* __this);
        // Method: t() | Slot: 54401 | Token: 0x83
        using fn_t = void* (*)(FogPostEffect* __this);
        // Method: esId(void* shareUrlType, void* data) | Slot: 65535 | Token: 0x6029590
        using fn_esId = void* (*)(FogPostEffect* __this, void* shareUrlType, void* data);
        // Method: ShareInstagram() | Slot: 131 | Token: 0xffffffff
        using fn_ShareInstagram = void* (*)(FogPostEffect* __this);
        // Method: _WAIT() | Slot: 38290 | Token: 0x17cdd
        using fn__WAIT = void* (*)(FogPostEffect* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(FogPostEffect* __this);
        // Method: Method_18() | Slot: 31969 | Token: 0x69c4
        using fn_Method_18 = void* (*)(FogPostEffect* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x5f49
        using fn_Method_19 = void* (*)(FogPostEffect* __this);
    };

    // TypeDefIndex: 29328 | Original: COW.Graphics.HDR | Token: 0x2007291
    struct HDR : Il2Cpp::Object {

        // Methods (3)
        // Method: titys() | Slot: 53270 | Token: 0x3db9c3
        using fn_titys = void* (*)(HDR* __this);
        // Method: Method_1() | Slot: 24393 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(HDR* __this);
        // Method: bum() | Slot: 54502 | Token: 0xc6
        using fn_bum = void* (*)(HDR* __this);
    };

    // TypeDefIndex: 29329 | Original: COW.Graphics.LinearToGamma | Token: 0x2007292
    struct LinearToGamma : Il2Cpp::Object {
        // Fields (3)
        void* m_isInit; // m_isInit | Token: 0x40392fc
        void* m_Shader; // m_Shader | Token: 0x40392fd
        void* m_Material; // m_Material | Token: 0x40392fe

        // Methods (9)
        // Method: esId(void* data) | Slot: 65535 | Token: 0x6029598
        using fn_esId = void* (*)(LinearToGamma* __this, void* data);
        // Method: MakeInviteUrl() | Slot: 150 | Token: 0xffffffff
        using fn_MakeInviteUrl = void* (*)(LinearToGamma* __this);
        // Method: imable() | Slot: 38298 | Token: 0x17cea
        using fn_imable = void* (*)(LinearToGamma* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(LinearToGamma* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(LinearToGamma* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5f49
        using fn_Method_5 = void* (*)(LinearToGamma* __this);
        // Method: ocessStaticEntityCo>d__49(void* cam) | Slot: 8434 | Token: 0x44d5b5
        using fn_ocessStaticEntityCo_d__49 = void* (*)(LinearToGamma* __this, void* cam);
        // Method: Method_7() | Slot: 24398 | Token: 0xffff
        using fn_Method_7 = void* (*)(LinearToGamma* __this);
        // Method: t() | Slot: 42090 | Token: 0x886
        using fn_t = void* (*)(LinearToGamma* __this);
    };

    // TypeDefIndex: 29330 | Original: COW.Graphics.ParameterOverride | Token: 0x2007293
    struct ParameterOverride : Il2Cpp::Object {
        // Fields (1)
        void* overrideState; // overrideState | Token: 0x40392ff

        // Methods (7)
        // Method: AnimationBaseSpeed() | Slot: 6 | Token: 0x60295a0
        using fn_AnimationBaseSpeed = void* (*)(ParameterOverride* __this);
        // Method: Init() | Slot: 198 | Token: 0xffffffff
        using fn_Init = void* (*)(ParameterOverride* __this);
        // Method: mbly-CSharp() | Slot: 38306 | Token: 0x17ced
        using fn_mbly_CSharp = void* (*)(ParameterOverride* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(ParameterOverride* __this);
        // Method: Method_4() | Slot: 31982 | Token: 0xa52f
        using fn_Method_4 = void* (*)(ParameterOverride* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5f4e
        using fn_Method_5 = void* (*)(ParameterOverride* __this);
        // Method: sStaticEntityCo>d__49() | Slot: 27076 | Token: 0x44d61d
        using fn_sStaticEntityCo_d__49 = void* (*)(ParameterOverride* __this);
    };

    // TypeDefIndex: 29331 | Original: COW.Graphics.ParameterOverride`1 | Token: 0x2007294
    struct ParameterOverride_1 : Il2Cpp::Object {
        // Fields (1)
        void* value; // value | Token: 0x4039300

        // Methods (9)
        // Method: Method_0() | Slot: 24398 | Token: 0x2ffff
        using fn_Method_0 = void* (*)(ParameterOverride_1* __this);
        // Method: bum() | Slot: 54879 | Token: 0x81
        using fn_bum = void* (*)(ParameterOverride_1* __this);
        // Method: AnimationBaseSpeed() | Slot: 65535 | Token: 0x60295a8
        using fn_AnimationBaseSpeed = void* (*)(ParameterOverride_1* __this);
        // Method: GetShoppingMallItemInfoByIndexID() | Slot: 134 | Token: 0xffffffff
        using fn_GetShoppingMallItemInfoByIndexID = void* (*)(ParameterOverride_1* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38314 | Token: 0x17cf4
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(ParameterOverride_1* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(ParameterOverride_1* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0xd045
        using fn_Method_6 = void* (*)(ParameterOverride_1* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x5f4e
        using fn_Method_7 = void* (*)(ParameterOverride_1* __this);
        // Method: Method_8(void* priority) | Slot: 9541 | Token: 0x44d710
        using fn_Method_8 = void* (*)(ParameterOverride_1* __this, void* priority);
    };

    // TypeDefIndex: 29332 | Original: COW.Graphics.FloatParameter | Token: 0x2007295
    struct FloatParameter : Il2Cpp::Object {

        // Methods (2)
        // Method: Method_0() | Slot: 24398 | Token: 0x2ffff
        using fn_Method_0 = void* (*)(FloatParameter* __this);
        // Method: bum() | Slot: 103 | Token: 0x86
        using fn_bum = void* (*)(FloatParameter* __this);
    };

    // TypeDefIndex: 29333 | Original: COW.Graphics.IntParameter | Token: 0x2007296
    struct IntParameter : Il2Cpp::Object {

        // Methods (2)
        // Method: AnimationBaseSpeed() | Slot: 65535 | Token: 0x60295b0
        using fn_AnimationBaseSpeed = void* (*)(IntParameter* __this);
        // Method: <>iFixBaseProxy_Init() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Init = void* (*)(IntParameter* __this);
    };

    // TypeDefIndex: 29334 | Original: COW.Graphics.BoolParameter | Token: 0x2007297
    struct BoolParameter : Il2Cpp::Object {

        // Methods (1)
        // Method: GetExchangeCurrencySubType() | Slot: 38322 | Token: 0x17cf8
        using fn_GetExchangeCurrencySubType = void* (*)(BoolParameter* __this);
    };

    // TypeDefIndex: 29335 | Original: COW.Graphics.ColorParameter | Token: 0x2007298
    struct ColorParameter : Il2Cpp::Object {

        // Methods (3)
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(ColorParameter* __this);
        // Method: Method_1() | Slot: 31993 | Token: 0x12545
        using fn_Method_1 = void* (*)(ColorParameter* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5f50
        using fn_Method_2 = void* (*)(ColorParameter* __this);
    };

    // TypeDefIndex: 29336 | Original: COW.Graphics.Vector2Parameter | Token: 0x2007299
    struct Vector2Parameter : Il2Cpp::Object {

        // Methods (4)
        // Method: Method_0(void* circlePlane) | Slot: 9541 | Token: 0x9bc2f
        using fn_Method_0 = void* (*)(Vector2Parameter* __this, void* circlePlane);
        // Method: Method_1() | Slot: 24400 | Token: 0x10009
        using fn_Method_1 = void* (*)(Vector2Parameter* __this);
        // Method: bum() | Slot: 55459 | Token: 0x86
        using fn_bum = void* (*)(Vector2Parameter* __this);
        // Method: imationBaseSpeed(void* res) | Slot: 65535 | Token: 0x60295b8
        using fn_imationBaseSpeed = void* (*)(Vector2Parameter* __this, void* res);
    };

    // TypeDefIndex: 29337 | Original: COW.Graphics.Vector3Parameter | Token: 0x200729a
    struct Vector3Parameter : Il2Cpp::Object {

        // Methods (4)
        // Method: ReplaceAnimDataByAB() | Slot: 134 | Token: 0xffffffff
        using fn_ReplaceAnimDataByAB = void* (*)(Vector3Parameter* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38330 | Token: 0x17cff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(Vector3Parameter* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(Vector3Parameter* __this);
        // Method: Method_3() | Slot: 32001 | Token: 0x9519
        using fn_Method_3 = void* (*)(Vector3Parameter* __this);
    };

    // TypeDefIndex: 29338 | Original: COW.Graphics.Vector4Parameter | Token: 0x200729b
    struct Vector4Parameter : Il2Cpp::Object {

        // Methods (4)
        // Method: Method_0() | Slot: 0 | Token: 0x5f50
        using fn_Method_0 = void* (*)(Vector4Parameter* __this);
        // Method: _49() | Slot: 33503 | Token: 0x44d933
        using fn__49 = void* (*)(Vector4Parameter* __this);
        // Method: Method_2() | Slot: 24400 | Token: 0x1ffff
        using fn_Method_2 = void* (*)(Vector4Parameter* __this);
        // Method: bum() | Slot: 44165 | Token: 0x1886
        using fn_bum = void* (*)(Vector4Parameter* __this);
    };

    // TypeDefIndex: 29339 | Original: COW.Graphics.TextureParameterDefault | Token: 0x200729c
    struct TextureParameterDefault : Il2Cpp::Object {
        // Fields (6)
        void* value__; // value__ | Token: 0x4039301
        void* None; // None | Token: 0x4039302
        void* Black; // Black | Token: 0x4039303
        void* White; // White | Token: 0x4039304
        void* Transparent; // Transparent | Token: 0x4039305
        void* Lut2D; // Lut2D | Token: 0x4039306
    };

    // TypeDefIndex: 29340 | Original: COW.Graphics.TextureParameter | Token: 0x200729d
    struct TextureParameter : Il2Cpp::Object {
        // Fields (1)
        void* defaultState; // defaultState | Token: 0x4039307

        // Methods (1)
        // Method: imationBaseSpeed(void* P0) | Slot: 65535 | Token: 0x60295c0
        using fn_imationBaseSpeed = void* (*)(TextureParameter* __this, void* P0);
    };

    // TypeDefIndex: 29341 | Original: COW.Graphics.UGCCommonSettings | Token: 0x200729e
    struct UGCCommonSettings : Il2Cpp::Object {
        // Fields (3)
        void* brightness; // brightness | Token: 0x4039308
        void* saturation; // saturation | Token: 0x4039309
        void* contrast; // contrast | Token: 0x403930a

        // Methods (1)
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCCommonSettings* __this);
    };

    // TypeDefIndex: 29342 | Original: COW.Graphics.UGCComicSettings | Token: 0x200729f
    struct UGCComicSettings : Il2Cpp::Object {
        // Fields (8)
        void* threshold; // threshold | Token: 0x403930b
        void* range; // range | Token: 0x403930c
        void* flashSpeed; // flashSpeed | Token: 0x403930d
        void* lineIntensity; // lineIntensity | Token: 0x403930e
        void* lineSize; // lineSize | Token: 0x403930f
        void* pencilSize; // pencilSize | Token: 0x4039310
        void* pencilCorrection; // pencilCorrection | Token: 0x4039311
        void* pencilColor; // pencilColor | Token: 0x4039312

        // Methods (1)
        // Method: GetExchangeCurrencySubType() | Slot: 38338 | Token: 0x17d05
        using fn_GetExchangeCurrencySubType = void* (*)(UGCComicSettings* __this);
    };

    // TypeDefIndex: 29343 | Original: COW.Graphics.UGCDrawingSettings | Token: 0x20072a0
    struct UGCDrawingSettings : Il2Cpp::Object {
        // Fields (6)
        void* pencilSize; // pencilSize | Token: 0x4039313
        void* pencilCorrection; // pencilCorrection | Token: 0x4039314
        void* pencilColor; // pencilColor | Token: 0x4039315
        void* paperColor; // paperColor | Token: 0x4039316
        void* cornerLose; // cornerLose | Token: 0x4039317
        void* paperTex; // paperTex | Token: 0x4039318

        // Methods (1)
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UGCDrawingSettings* __this);
    };

    // TypeDefIndex: 29344 | Original: COW.Graphics.UGCPixelSettings | Token: 0x20072a1
    struct UGCPixelSettings : Il2Cpp::Object {
        // Fields (2)
        void* pixelisation; // pixelisation | Token: 0x4039319
        void* colorOffset; // colorOffset | Token: 0x403931a

        // Methods (1)
        // Method: Method_0() | Slot: 65535 | Token: 0x120f2
        using fn_Method_0 = void* (*)(UGCPixelSettings* __this);
    };

    // TypeDefIndex: 29345 | Original: COW.Graphics.UGCRGBSplitSettings | Token: 0x20072a2
    struct UGCRGBSplitSettings : Il2Cpp::Object {
        // Fields (1)
        void* splitOffset; // splitOffset | Token: 0x403931b

        // Methods (1)
        // Method: Method_0() | Slot: 0 | Token: 0x5f53
        using fn_Method_0 = void* (*)(UGCRGBSplitSettings* __this);
    };

    // TypeDefIndex: 29346 | Original: COW.Graphics.UGCGoldenAgeSettings | Token: 0x20072a3
    struct UGCGoldenAgeSettings : Il2Cpp::Object {
        // Fields (2)
        void* intensity; // intensity | Token: 0x403931c
        void* warmth; // warmth | Token: 0x403931d

        // Methods (1)
        // Method: <>m__Finally1(void* circlePlane) | Slot: 9541 | Token: 0x44d9bf
        using fn___m__Finally1 = void* (*)(UGCGoldenAgeSettings* __this, void* circlePlane);
    };

    // TypeDefIndex: 29347 | Original: COW.Graphics.UGCCyberpunkSettings | Token: 0x20072a4
    struct UGCCyberpunkSettings : Il2Cpp::Object {
        // Fields (8)
        void* edgeIntensity; // edgeIntensity | Token: 0x403931e
        void* edgeSize; // edgeSize | Token: 0x403931f
        void* edgeSensitivity; // edgeSensitivity | Token: 0x4039320
        void* glitchInterval; // glitchInterval | Token: 0x4039321
        void* glitchDuration; // glitchDuration | Token: 0x4039322
        void* edgeColor1; // edgeColor1 | Token: 0x4039323
        void* edgeColor2; // edgeColor2 | Token: 0x4039324
        void* edgeNoiseTex; // edgeNoiseTex | Token: 0x4039325

        // Methods (1)
        // Method: Method_0() | Slot: 24403 | Token: 0xffff
        using fn_Method_0 = void* (*)(UGCCyberpunkSettings* __this);
    };

    // TypeDefIndex: 29350 | Original: COW.Graphics.ACES | Token: 0x20072a5
    struct ACES : Il2Cpp::Object {

        // Methods (3)
        // Method: t() | Slot: 55763 | Token: 0x86
        using fn_t = void* (*)(ACES* __this);
        // Method: tionBaseSpeed() | Slot: 65535 | Token: 0x60295c8
        using fn_tionBaseSpeed = void* (*)(ACES* __this);
        // Method: PopUpCheck() | Slot: 134 | Token: 0xffffffff
        using fn_PopUpCheck = void* (*)(ACES* __this);
    };

    // TypeDefIndex: 29351 | Original: COW.Graphics.BlackWhite | Token: 0x20072a8
    struct BlackWhite : Il2Cpp::Object {
        // Fields (12)
        void* m_blackWhiteShader; // m_blackWhiteShader | Token: 0x403932c
        void* m_blackWhiteMaterial; // m_blackWhiteMaterial | Token: 0x403932d
        void* m_tint; // m_tint | Token: 0x403932e
        void* m_maxInput; // m_maxInput | Token: 0x403932f
        void* m_minInput; // m_minInput | Token: 0x4039330
        void* m_tintID; // m_tintID | Token: 0x4039331
        void* m_maxInputID; // m_maxInputID | Token: 0x4039332
        void* m_minInputID; // m_minInputID | Token: 0x4039333
        void* m_isInit; // m_isInit | Token: 0x4039334
        void* width; // width | Token: 0x4039335
        void* height; // height | Token: 0x4039336
        void* Effect_PASS_INDEX; // Effect_PASS_INDEX | Token: 0x4039337

        // Methods (13)
        // Method: GetExchangeCurrencySubType() | Slot: 38346 | Token: 0x17d07
        using fn_GetExchangeCurrencySubType = void* (*)(BlackWhite* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(BlackWhite* __this);
        // Method: Method_2() | Slot: 32012 | Token: 0x12545
        using fn_Method_2 = void* (*)(BlackWhite* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f53
        using fn_Method_3 = void* (*)(BlackWhite* __this);
        // Method: Method_4(void* priority) | Slot: 9541 | Token: 0x44da4d
        using fn_Method_4 = void* (*)(BlackWhite* __this, void* priority);
        // Method: Method_5() | Slot: 24403 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(BlackWhite* __this);
        // Method: bum() | Slot: 103 | Token: 0x86
        using fn_bum = void* (*)(BlackWhite* __this);
        // Method: tionBaseSpeed() | Slot: 65535 | Token: 0x60295d0
        using fn_tionBaseSpeed = void* (*)(BlackWhite* __this);
        // Method: <RequestHackerWarningInfo>b__10_0() | Slot: 129 | Token: 0xffffffff
        using fn__RequestHackerWarningInfo_b__10_0 = void* (*)(BlackWhite* __this);
        // Method: _WAIT() | Slot: 38354 | Token: 0x17d10
        using fn__WAIT = void* (*)(BlackWhite* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BlackWhite* __this);
        // Method: Method_11() | Slot: 32017 | Token: 0x12545
        using fn_Method_11 = void* (*)(BlackWhite* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x5f55
        using fn_Method_12 = void* (*)(BlackWhite* __this);
    };

    // TypeDefIndex: 29353 | Original: COW.Graphics.Bloom | Token: 0x20072a9
    struct Bloom : Il2Cpp::Object {
        // Fields (13)
        void* m_bloomShader; // m_bloomShader | Token: 0x4039338
        void* m_bloomMaterial; // m_bloomMaterial | Token: 0x4039339
        void* m_threshold; // m_threshold | Token: 0x403933a
        void* m_intensity; // m_intensity | Token: 0x403933b
        void* m_sampleScale; // m_sampleScale | Token: 0x403933c
        void* m_iterations; // m_iterations | Token: 0x403933d
        void* m_isInit; // m_isInit | Token: 0x403933e
        void* width; // width | Token: 0x403933f
        void* height; // height | Token: 0x4039340
        void* m_thresholdID; // m_thresholdID | Token: 0x4039341
        void* m_intensityID; // m_intensityID | Token: 0x4039342
        void* m_srcTexID; // m_srcTexID | Token: 0x4039343
        void* m_sampleScaleID; // m_sampleScaleID | Token: 0x4039344

        // Methods (13)
        // Method: Method_0(void* pos) | Slot: 9541 | Token: 0x40c610
        using fn_Method_0 = void* (*)(Bloom* __this, void* pos);
        // Method: Method_1() | Slot: 24405 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(Bloom* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 48175 | Token: 0xc6
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(Bloom* __this);
        // Method: onBaseSpeed(void* data) | Slot: 9 | Token: 0x60295d8
        using fn_onBaseSpeed = void* (*)(Bloom* __this, void* data);
        // Method: ProcessData() | Slot: 134 | Token: 0xffffffff
        using fn_ProcessData = void* (*)(Bloom* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38362 | Token: 0x17d15
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(Bloom* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(Bloom* __this);
        // Method: Method_7() | Slot: 32023 | Token: 0x12545
        using fn_Method_7 = void* (*)(Bloom* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x5f54
        using fn_Method_8 = void* (*)(Bloom* __this);
        // Method: Method_9(void* preferredMethod) | Slot: 9541 | Token: 0x67
        using fn_Method_9 = void* (*)(Bloom* __this, void* preferredMethod);
        // Method: Method_10() | Slot: 24404 | Token: 0xffff
        using fn_Method_10 = void* (*)(Bloom* __this);
        // Method: bum() | Slot: 56576 | Token: 0x83
        using fn_bum = void* (*)(Bloom* __this);
        // Method: eed() | Slot: 65535 | Token: 0x60295e0
        using fn_eed = void* (*)(Bloom* __this);
    };

    // TypeDefIndex: 29356 | Original: COW.Graphics.ControlUMAEffectLoop | Token: 0x20072ab
    struct ControlUMAEffectLoop : Il2Cpp::Object {
        // Fields (7)
        void* onTime; // onTime | Token: 0x403934b
        void* offTime; // offTime | Token: 0x403934c
        void* FirstOpenThenClose; // FirstOpenThenClose | Token: 0x403934d
        void* uvScripts; // uvScripts | Token: 0x403934e
        void* EffectsA; // EffectsA | Token: 0x403934f
        void* EffectsRootA; // EffectsRootA | Token: 0x4039350
        void* m_Coroutine; // m_Coroutine | Token: 0x4039351

        // Methods (6)
        // Method: get_AppearanceStage() | Slot: 2182 | Token: 0xffffffff
        using fn_get_AppearanceStage = void* (*)(ControlUMAEffectLoop* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38370 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(ControlUMAEffectLoop* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(ControlUMAEffectLoop* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x69c4
        using fn_Method_3 = void* (*)(ControlUMAEffectLoop* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f5d
        using fn_Method_4 = void* (*)(ControlUMAEffectLoop* __this);
        // Method: Method_5() | Slot: 27076 | Token: 0x44dd76
        using fn_Method_5 = void* (*)(ControlUMAEffectLoop* __this);
    };

    // TypeDefIndex: 29357 | Original: COW.Graphics.CustomEffectBase | Token: 0x20072ae
    struct CustomEffectBase : Il2Cpp::Object {
        // Fields (2)
        void* m_effectManager; // m_effectManager | Token: 0x4039358
        void* m_isEnable; // m_isEnable | Token: 0x4039359

        // Methods (14)
        // Method: GetColorID() | Slot: 134 | Token: 0xffffffff
        using fn_GetColorID = void* (*)(CustomEffectBase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38386 | Token: 0x17d1f
        using fn_GetExchangeCurrencySubType = void* (*)(CustomEffectBase* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(CustomEffectBase* __this);
        // Method: Method_3() | Slot: 32032 | Token: 0x12545
        using fn_Method_3 = void* (*)(CustomEffectBase* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f5d
        using fn_Method_4 = void* (*)(CustomEffectBase* __this);
        // Method: nStreamPreview(void* priority) | Slot: 9541 | Token: 0x44de53
        using fn_nStreamPreview = void* (*)(CustomEffectBase* __this, void* priority);
        // Method: Method_6() | Slot: 24413 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(CustomEffectBase* __this);
        // Method: bum() | Slot: 56962 | Token: 0x86
        using fn_bum = void* (*)(CustomEffectBase* __this);
        // Method: eed(void* sparkInfo) | Slot: 65535 | Token: 0x60295f8
        using fn_eed = void* (*)(CustomEffectBase* __this, void* sparkInfo);
        // Method: AppearanceItemsEqual() | Slot: 129 | Token: 0xffffffff
        using fn_AppearanceItemsEqual = void* (*)(CustomEffectBase* __this);
        // Method: _WAIT() | Slot: 38394 | Token: 0x17d27
        using fn__WAIT = void* (*)(CustomEffectBase* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(CustomEffectBase* __this);
        // Method: Method_12() | Slot: 32041 | Token: 0x69c4
        using fn_Method_12 = void* (*)(CustomEffectBase* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x5f5d
        using fn_Method_13 = void* (*)(CustomEffectBase* __this);
    };

    // TypeDefIndex: 29358 | Original: COW.Graphics.CustomShadow | Token: 0x20072af
    struct CustomShadow : Il2Cpp::Object {
        // Fields (19)
        void* m_light; // m_light | Token: 0x403935a
        void* m_camera; // m_camera | Token: 0x403935b
        void* m_depthRT; // m_depthRT | Token: 0x403935c
        void* m_shader; // m_shader | Token: 0x403935d
        void* m_lightTransform; // m_lightTransform | Token: 0x403935e
        void* followingCam; // followingCam | Token: 0x403935f
        void* m_bEnableRTShadow; // m_bEnableRTShadow | Token: 0x4039360
        void* m_CameraHeight; // m_CameraHeight | Token: 0x4039361
        void* m_CameraOffset; // m_CameraOffset | Token: 0x4039362
        void* m_LastAimTarget; // m_LastAimTarget | Token: 0x4039363
        void* m_LastLightForward; // m_LastLightForward | Token: 0x4039364
        void* nearClipPlane; // nearClipPlane | Token: 0x4039365
        void* farClipPlane; // farClipPlane | Token: 0x4039366
        void* rtResolution; // rtResolution | Token: 0x4039367
        void* shadowStrength; // shadowStrength | Token: 0x4039368
        void* s_MatPropIDRtName; // s_MatPropIDRtName | Token: 0x4039369
        void* s_MatPropIDMatrixName; // s_MatPropIDMatrixName | Token: 0x403936a
        void* s_castShadowRendererCache; // s_castShadowRendererCache | Token: 0x403936b
        void* _instance_k__BackingField; // <instance>k__BackingField | Token: 0x403936c

        // Methods (20)
        // Method: eview(void* priority) | Slot: 9541 | Token: 0x49aa
        using fn_eview = void* (*)(CustomShadow* __this, void* priority);
        // Method: Method_1() | Slot: 24412 | Token: 0xffff
        using fn_Method_1 = void* (*)(CustomShadow* __this);
        // Method: bum() | Slot: 57266 | Token: 0x1886
        using fn_bum = void* (*)(CustomShadow* __this);
        // Method: peed(void* x) | Slot: 65535 | Token: 0x6029600
        using fn_peed = void* (*)(CustomShadow* __this, void* x);
        // Method: <GetAppearanceItems>b__36_1() | Slot: 131 | Token: 0xffffffff
        using fn__GetAppearanceItems_b__36_1 = void* (*)(CustomShadow* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38402 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CustomShadow* __this);
        // Method: ctor() | Slot: 65535 | Token: 0x8000000
        using fn_ctor = void* (*)(CustomShadow* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x733f
        using fn_Method_7 = void* (*)(CustomShadow* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x5f66
        using fn_Method_8 = void* (*)(CustomShadow* __this);
        // Method: Method_9() | Slot: 7617 | Token: 0x44e047
        using fn_Method_9 = void* (*)(CustomShadow* __this);
        // Method: Method_10() | Slot: 24422 | Token: 0xffff
        using fn_Method_10 = void* (*)(CustomShadow* __this);
        // Method: neNameRefs() | Slot: 57465 | Token: 0x886
        using fn_neNameRefs = void* (*)(CustomShadow* __this);
        // Method: es(void* value) | Slot: 65535 | Token: 0x6029608
        using fn_es = void* (*)(CustomShadow* __this, void* value);
        // Method: get_ClaimeLevelUpRewards() | Slot: 2182 | Token: 0xffffffff
        using fn_get_ClaimeLevelUpRewards = void* (*)(CustomShadow* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38410 | Token: 0x17d2f
        using fn_GetExchangeCurrencySubType = void* (*)(CustomShadow* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(CustomShadow* __this);
        // Method: Method_16() | Slot: 32048 | Token: 0x12545
        using fn_Method_16 = void* (*)(CustomShadow* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x5f66
        using fn_Method_17 = void* (*)(CustomShadow* __this);
        // Method: Method_18(void* pos) | Slot: 9541 | Token: 0x44e138
        using fn_Method_18 = void* (*)(CustomShadow* __this, void* pos);
        // Method: Method_19() | Slot: 24422 | Token: 0x1ffff
        using fn_Method_19 = void* (*)(CustomShadow* __this);
    };

    // TypeDefIndex: 29360 | Original: COW.Graphics.DynamicGenerator | Token: 0x20072b0
    struct DynamicGenerator : Il2Cpp::Object {
        // Fields (3)
        void* m_type; // m_type | Token: 0x403936d
        void* m_streamCollider; // m_streamCollider | Token: 0x403936e
        void* m_isExclude; // m_isExclude | Token: 0x403936f

        // Methods (1)
        // Method: ne() | Slot: 57724 | Token: 0x881
        using fn_ne = void* (*)(DynamicGenerator* __this);
    };

    // TypeDefIndex: 29361 | Original: COW.Graphics.DynamicGeneratorCSVData | Token: 0x20072b2
    struct DynamicGeneratorCSVData : Il2Cpp::Object {
        // Fields (2)
        void* mapName; // mapName | Token: 0x4039379
        void* strResName; // strResName | Token: 0x403937a

        // Methods (5)
        // Method: es() | Slot: 65535 | Token: 0x6029610
        using fn_es = void* (*)(DynamicGeneratorCSVData* __this);
        // Method: get_ReadyFlag() | Slot: 2177 | Token: 0xffffffff
        using fn_get_ReadyFlag = void* (*)(DynamicGeneratorCSVData* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38418 | Token: 0x17d32
        using fn_GetExchangeCurrencySubType = void* (*)(DynamicGeneratorCSVData* __this);
        // Method: BuffFactor() | Slot: 65535 | Token: 0x8000000
        using fn_BuffFactor = void* (*)(DynamicGeneratorCSVData* __this);
        // Method: Method_4() | Slot: 32051 | Token: 0x12545
        using fn_Method_4 = void* (*)(DynamicGeneratorCSVData* __this);
    };

    // TypeDefIndex: 29362 | Original: COW.Graphics.DynamicGeneratorGroup | Token: 0x20072b3
    struct DynamicGeneratorGroup : Il2Cpp::Object {
        // Fields (3)
        void* m_dynamicPrefabList; // m_dynamicPrefabList | Token: 0x403937b
        void* m_dynamicGroupPrefabList; // m_dynamicGroupPrefabList | Token: 0x403937c
        void* m_distributionList; // m_distributionList | Token: 0x403937d

        // Methods (1)
        // Method: Method_0() | Slot: 0 | Token: 0x5f66
        using fn_Method_0 = void* (*)(DynamicGeneratorGroup* __this);
    };

    // TypeDefIndex: 29373 | Original: COW.Graphics.DynamicGeneratorManager | Token: 0x20072b4
    struct DynamicGeneratorManager : Il2Cpp::Object {
        // Fields (51)
        void* m_dynamicGenGroupList; // m_dynamicGenGroupList | Token: 0x403937e
        void* m_dynamicPrefabList; // m_dynamicPrefabList | Token: 0x403937f
        void* m_dynamicGroupPrefabList; // m_dynamicGroupPrefabList | Token: 0x4039380
        void* m_dynamicInstSet; // m_dynamicInstSet | Token: 0x4039381
        void* m_dynamicPrefabMeshList; // m_dynamicPrefabMeshList | Token: 0x4039382
        void* m_dynamicGroupPrefabMeshList; // m_dynamicGroupPrefabMeshList | Token: 0x4039383
        void* m_camera; // m_camera | Token: 0x4039384
        void* m_graphQualityConf; // m_graphQualityConf | Token: 0x4039385
        void* m_systemQualityID; // m_systemQualityID | Token: 0x4039386
        void* m_graphQualityID; // m_graphQualityID | Token: 0x4039387
        void* m_groupQualityID; // m_groupQualityID | Token: 0x4039388
        void* m_camForward; // m_camForward | Token: 0x4039389
        void* m_realCamPosition; // m_realCamPosition | Token: 0x403938a
        void* m_camPosition; // m_camPosition | Token: 0x403938b
        void* m_camCosHalfFov; // m_camCosHalfFov | Token: 0x403938c
        void* m_camLookingDown; // m_camLookingDown | Token: 0x403938d
        void* m_dynInstanceGroupNum; // m_dynInstanceGroupNum | Token: 0x403938e
        void* m_distToCamera; // m_distToCamera | Token: 0x403938f
        void* m_usedGroupMeshPoolNum; // m_usedGroupMeshPoolNum | Token: 0x4039390
        void* m_instGroupMeshPoolList; // m_instGroupMeshPoolList | Token: 0x4039391
        void* m_mapGridCount; // m_mapGridCount | Token: 0x4039392
        void* m_shaderRotateMatrix; // m_shaderRotateMatrix | Token: 0x4039393
        void* m_layerMask; // m_layerMask | Token: 0x4039394
        void* m_cachedGroupList; // m_cachedGroupList | Token: 0x4039395
        void* m_cachedGroupMeshList; // m_cachedGroupMeshList | Token: 0x4039396
        void* m_cachedGroupNum; // m_cachedGroupNum | Token: 0x4039397
        void* m_cachedGroupMeshNum; // m_cachedGroupMeshNum | Token: 0x4039398
        void* m_shadowMat; // m_shadowMat | Token: 0x4039399
        void* m_shadowRTMat; // m_shadowRTMat | Token: 0x403939a
        void* m_translateMatrix; // m_translateMatrix | Token: 0x403939b
        void* m_rotateMatrix; // m_rotateMatrix | Token: 0x403939c
        void* m_transRotateMatrix; // m_transRotateMatrix | Token: 0x403939d
        void* m_fadeFactor; // m_fadeFactor | Token: 0x403939e
        void* m_transformVec; // m_transformVec | Token: 0x403939f
        void* m_posMatrix0ID; // m_posMatrix0ID | Token: 0x40393a0
        void* m_posMatrix1ID; // m_posMatrix1ID | Token: 0x40393a1
        void* _CamRotDelta_k__BackingField; // <CamRotDelta>k__BackingField | Token: 0x40393a2
        void* _CamPosDelta_k__BackingField; // <CamPosDelta>k__BackingField | Token: 0x40393a3
        void* m_LastCamRotation; // m_LastCamRotation | Token: 0x40393a4
        void* m_LastCamPosition; // m_LastCamPosition | Token: 0x40393a5
        void* buildDynamics; // buildDynamics | Token: 0x40393a6
        void* m_EnablePreZPass; // m_EnablePreZPass | Token: 0x40393a7
        void* m_lastCamGridIDs; // m_lastCamGridIDs | Token: 0x40393a8
        void* m_visGrids; // m_visGrids | Token: 0x40393a9
        void* m_visGridList; // m_visGridList | Token: 0x40393aa
        void* m_invisGridList; // m_invisGridList | Token: 0x40393ab
        void* m_potentVisibleList; // m_potentVisibleList | Token: 0x40393ac
        void* m_gridVisibleList; // m_gridVisibleList | Token: 0x40393ad
        void* points; // points | Token: 0x40393ae
        void* m_posMatrix0; // m_posMatrix0 | Token: 0x40393af
        void* m_posMatrix1; // m_posMatrix1 | Token: 0x40393b0

        // Methods (37)
        // Method: iewGO(void* circlePlane) | Slot: 8434 | Token: 0x21a46a
        using fn_iewGO = void* (*)(DynamicGeneratorManager* __this, void* circlePlane);
        // Method: Method_1() | Slot: 24422 | Token: 0x6
        using fn_Method_1 = void* (*)(DynamicGeneratorManager* __this);
        // Method: bum() | Slot: 5305 | Token: 0xc6
        using fn_bum = void* (*)(DynamicGeneratorManager* __this);
        // Method: es() | Slot: 4 | Token: 0x6029618
        using fn_es = void* (*)(DynamicGeneratorManager* __this);
        // Method: EnsurePendingCustomInfoCache() | Slot: 129 | Token: 0xffffffff
        using fn_EnsurePendingCustomInfoCache = void* (*)(DynamicGeneratorManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38426 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(DynamicGeneratorManager* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x12545
        using fn_Method_7 = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x5f66
        using fn_Method_8 = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_9(void* priority) | Slot: 9541 | Token: 0x44e26a
        using fn_Method_9 = void* (*)(DynamicGeneratorManager* __this, void* priority);
        // Method: Method_10() | Slot: 24422 | Token: 0xffff
        using fn_Method_10 = void* (*)(DynamicGeneratorManager* __this);
        // Method: Interval() | Slot: 58006 | Token: 0x86
        using fn_Interval = void* (*)(DynamicGeneratorManager* __this);
        // Method: es(void* type) | Slot: 65535 | Token: 0x6029620
        using fn_es = void* (*)(DynamicGeneratorManager* __this, void* type);
        // Method: GetLuckDrawQualityBgSpriteName() | Slot: 150 | Token: 0xffffffff
        using fn_GetLuckDrawQualityBgSpriteName = void* (*)(DynamicGeneratorManager* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38434 | Token: 0x17d38
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(DynamicGeneratorManager* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_16() | Slot: 65535 | Token: 0x3c37
        using fn_Method_16 = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x5f66
        using fn_Method_17 = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_18(void* priority) | Slot: 9541 | Token: 0x442169
        using fn_Method_18 = void* (*)(DynamicGeneratorManager* __this, void* priority);
        // Method: Method_19() | Slot: 24422 | Token: 0xffff
        using fn_Method_19 = void* (*)(DynamicGeneratorManager* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 58149 | Token: 0x81
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(DynamicGeneratorManager* __this);
        // Method: es() | Slot: 65535 | Token: 0x6029628
        using fn_es = void* (*)(DynamicGeneratorManager* __this);
        // Method: SetHasShownRecoveryUIFX() | Slot: 134 | Token: 0xffffffff
        using fn_SetHasShownRecoveryUIFX = void* (*)(DynamicGeneratorManager* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38442 | Token: 0x17d3e
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(DynamicGeneratorManager* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_25() | Slot: 32063 | Token: 0x120f2
        using fn_Method_25 = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_26() | Slot: 0 | Token: 0x5f66
        using fn_Method_26 = void* (*)(DynamicGeneratorManager* __this);
        // Method: view() | Slot: 42287 | Token: 0x44e391
        using fn_view = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_28() | Slot: 24422 | Token: 0x1ffff
        using fn_Method_28 = void* (*)(DynamicGeneratorManager* __this);
        // Method: t() | Slot: 16486 | Token: 0x86
        using fn_t = void* (*)(DynamicGeneratorManager* __this);
        // Method: es() | Slot: 65535 | Token: 0x6029630
        using fn_es = void* (*)(DynamicGeneratorManager* __this);
        // Method: IsShowBuddy() | Slot: 134 | Token: 0xffffffff
        using fn_IsShowBuddy = void* (*)(DynamicGeneratorManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38450 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(DynamicGeneratorManager* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_34() | Slot: 65535 | Token: 0x120f2
        using fn_Method_34 = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_35() | Slot: 0 | Token: 0x5f66
        using fn_Method_35 = void* (*)(DynamicGeneratorManager* __this);
        // Method: Method_36() | Slot: 27076 | Token: 0x44e405
        using fn_Method_36 = void* (*)(DynamicGeneratorManager* __this);
    };

    // TypeDefIndex: 29374 | Original: COW.Graphics.DynamicMeshVisibleHelper | Token: 0x20072bf
    struct DynamicMeshVisibleHelper : Il2Cpp::Object {
        // Fields (1)
        void* ShowWithType; // ShowWithType | Token: 0x40393f0

        // Methods (2)
        // Method: Points() | Slot: 58597 | Token: 0x86
        using fn_Points = void* (*)(DynamicMeshVisibleHelper* __this);
        // Method: es(void* stage) | Slot: 65535 | Token: 0x6029640
        using fn_es = void* (*)(DynamicMeshVisibleHelper* __this, void* stage);
    };

    // TypeDefIndex: 29376 | Original: COW.Graphics.EnvChangeController | Token: 0x20072c0
    struct EnvChangeController : Il2Cpp::Object {
        // Fields (40)
        void* sEnvChangeCtrs; // sEnvChangeCtrs | Token: 0x40393f1
        void* sPendingWorkers; // sPendingWorkers | Token: 0x40393f2
        void* ControllerID; // ControllerID | Token: 0x40393f3
        void* SkyboxControllerID; // SkyboxControllerID | Token: 0x40393f4
        void* MIN_DIST; // MIN_DIST | Token: 0x40393f5
        void* MAX_DIST; // MAX_DIST | Token: 0x40393f6
        void* Distance; // Distance | Token: 0x40393f7
        void* BlendRate; // BlendRate | Token: 0x40393f8
        void* m_InvDistance; // m_InvDistance | Token: 0x40393f9
        void* AutoPlay; // AutoPlay | Token: 0x40393fa
        void* PlaySpeed; // PlaySpeed | Token: 0x40393fb
        void* StartPos; // StartPos | Token: 0x40393fc
        void* WaterChangeCtr; // WaterChangeCtr | Token: 0x40393fd
        void* FadeOutThreshold; // FadeOutThreshold | Token: 0x40393fe
        void* NeedDispatchEvent; // NeedDispatchEvent | Token: 0x40393ff
        void* m_WorkerArray; // m_WorkerArray | Token: 0x4039400
        void* m_DistPropertyID; // m_DistPropertyID | Token: 0x4039401
        void* m_BlendPropertyID; // m_BlendPropertyID | Token: 0x4039402
        void* m_PlayerPosPropertyID; // m_PlayerPosPropertyID | Token: 0x4039403
        void* m_SrcBlendPropertyID; // m_SrcBlendPropertyID | Token: 0x4039404
        void* m_DestBlendPropertyID; // m_DestBlendPropertyID | Token: 0x4039405
        void* m_ZWritePropertyID; // m_ZWritePropertyID | Token: 0x4039406
        void* KEYWORD_SWITCH_BEFORE; // KEYWORD_SWITCH_BEFORE | Token: 0x4039407
        void* KEYWORD_SWITCH_ING; // KEYWORD_SWITCH_ING | Token: 0x4039408
        void* KEYWORD_SWITCH_AFTER; // KEYWORD_SWITCH_AFTER | Token: 0x4039409
        void* KEYWORD_BLEND_ON; // KEYWORD_BLEND_ON | Token: 0x403940a
        void* m_BlendRateChanged; // m_BlendRateChanged | Token: 0x403940b
        void* m_LastDistance; // m_LastDistance | Token: 0x403940c
        void* m_IsBlendModeInited; // m_IsBlendModeInited | Token: 0x403940d
        void* m_IsBlendModeTransparent; // m_IsBlendModeTransparent | Token: 0x403940e
        void* m_EnvState; // m_EnvState | Token: 0x403940f
        void* m_LastEnvState; // m_LastEnvState | Token: 0x4039410
        void* m_FadeOutCb; // m_FadeOutCb | Token: 0x4039411
        void* m_IsFadeOutCbCalled; // m_IsFadeOutCbCalled | Token: 0x4039412
        void* m_EnvChangeDoneCb; // m_EnvChangeDoneCb | Token: 0x4039413
        void* m_IsEnvChangeDoneCbCalled; // m_IsEnvChangeDoneCbCalled | Token: 0x4039414
        void* m_IsEnvSwitchStartDispatched; // m_IsEnvSwitchStartDispatched | Token: 0x4039415
        void* m_IsEnvSwitchEndDispatched; // m_IsEnvSwitchEndDispatched | Token: 0x4039416
        void* m_GameCamOriCameraClearFlags; // m_GameCamOriCameraClearFlags | Token: 0x4039417
        void* m_GameCamOriCameraClearFlagsChanged; // m_GameCamOriCameraClearFlagsChanged | Token: 0x4039418

        // Methods (31)
        // Method: GetSelfSparkStage() | Slot: 134 | Token: 0xffffffff
        using fn_GetSelfSparkStage = void* (*)(EnvChangeController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38466 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(EnvChangeController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(EnvChangeController* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x8be5
        using fn_Method_3 = void* (*)(EnvChangeController* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f66
        using fn_Method_4 = void* (*)(EnvChangeController* __this);
        // Method: Method_5(void* priority) | Slot: 13815 | Token: 0x44e56b
        using fn_Method_5 = void* (*)(EnvChangeController* __this, void* priority);
        // Method: Method_6() | Slot: 24422 | Token: 0xffff
        using fn_Method_6 = void* (*)(EnvChangeController* __this);
        // Method: t() | Slot: 58788 | Token: 0x86
        using fn_t = void* (*)(EnvChangeController* __this);
        // Method: es() | Slot: 65535 | Token: 0x6029648
        using fn_es = void* (*)(EnvChangeController* __this);
        // Method: GetCollabSparkState() | Slot: 134 | Token: 0xffffffff
        using fn_GetCollabSparkState = void* (*)(EnvChangeController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38474 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(EnvChangeController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(EnvChangeController* __this);
        // Method: Method_12() | Slot: 32072 | Token: 0x69c4
        using fn_Method_12 = void* (*)(EnvChangeController* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x5f66
        using fn_Method_13 = void* (*)(EnvChangeController* __this);
        // Method: ePreview() | Slot: 27076 | Token: 0x44e635
        using fn_ePreview = void* (*)(EnvChangeController* __this);
        // Method: Method_15() | Slot: 24422 | Token: 0x1ffff
        using fn_Method_15 = void* (*)(EnvChangeController* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 58990 | Token: 0x86
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(EnvChangeController* __this);
        // Method: es(void* colorID) | Slot: 65535 | Token: 0x6029650
        using fn_es = void* (*)(EnvChangeController* __this, void* colorID);
        // Method: IsClientSparkColorUnlocked() | Slot: 129 | Token: 0xffffffff
        using fn_IsClientSparkColorUnlocked = void* (*)(EnvChangeController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38482 | Token: 0x17d4e
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(EnvChangeController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(EnvChangeController* __this);
        // Method: Method_21() | Slot: 32079 | Token: 0x69c4
        using fn_Method_21 = void* (*)(EnvChangeController* __this);
        // Method: Method_22() | Slot: 0 | Token: 0x5f66
        using fn_Method_22 = void* (*)(EnvChangeController* __this);
        // Method: ew() | Slot: 27076 | Token: 0x44e711
        using fn_ew = void* (*)(EnvChangeController* __this);
        // Method: Method_24() | Slot: 24422 | Token: 0x2ffff
        using fn_Method_24 = void* (*)(EnvChangeController* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 59203 | Token: 0x86
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(EnvChangeController* __this);
        // Method: es() | Slot: 65535 | Token: 0x6029658
        using fn_es = void* (*)(EnvChangeController* __this);
        // Method: GetSparkColorIDBySparkInfo() | Slot: 134 | Token: 0xffffffff
        using fn_GetSparkColorIDBySparkInfo = void* (*)(EnvChangeController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38490 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(EnvChangeController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(EnvChangeController* __this);
        // Method: Method_30() | Slot: 32085 | Token: 0xd21c
        using fn_Method_30 = void* (*)(EnvChangeController* __this);
    };

    // TypeDefIndex: 29377 | Original: COW.Graphics.EnvChangeWorker | Token: 0x20072c2
    struct EnvChangeWorker : Il2Cpp::Object {
        // Fields (8)
        void* ControllerID; // ControllerID | Token: 0x403941d
        void* AutoTransparentSWITCHING; // AutoTransparentSWITCHING | Token: 0x403941e
        void* SetRenderTypeOpaque; // SetRenderTypeOpaque | Token: 0x403941f
        void* DeactivateBeforeSwitchStart; // DeactivateBeforeSwitchStart | Token: 0x4039420
        void* DeactivateAfterSwitchEnd; // DeactivateAfterSwitchEnd | Token: 0x4039421
        void* EnableFasterBlend; // EnableFasterBlend | Token: 0x4039422
        void* MaterialArray; // MaterialArray | Token: 0x4039423
        void* ToHideRendererArray; // ToHideRendererArray | Token: 0x4039424

        // Methods (8)
        // Method: Method_0() | Slot: 0 | Token: 0x5f66
        using fn_Method_0 = void* (*)(EnvChangeWorker* __this);
        // Method: viewGameObjects() | Slot: 27076 | Token: 0x44e7d7
        using fn_viewGameObjects = void* (*)(EnvChangeWorker* __this);
        // Method: Method_2() | Slot: 24422 | Token: 0xffff
        using fn_Method_2 = void* (*)(EnvChangeWorker* __this);
        // Method: t() | Slot: 59379 | Token: 0x86
        using fn_t = void* (*)(EnvChangeWorker* __this);
        // Method: es() | Slot: 65535 | Token: 0x6029660
        using fn_es = void* (*)(EnvChangeWorker* __this);
        // Method: GetCollabAppearanceItemIds() | Slot: 134 | Token: 0xffffffff
        using fn_GetCollabAppearanceItemIds = void* (*)(EnvChangeWorker* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38498 | Token: 0x17d57
        using fn_GetExchangeCurrencySubType = void* (*)(EnvChangeWorker* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(EnvChangeWorker* __this);
    };

    // TypeDefIndex: 29378 | Original: COW.Graphics.GrassCellObject | Token: 0x20072c3
    struct GrassCellObject : Il2Cpp::Object {
        // Fields (1)
        void* m_grassCell; // m_grassCell | Token: 0x4039425

        // Methods (2)
        // Method: Method_0() | Slot: 65535 | Token: 0x59d2
        using fn_Method_0 = void* (*)(GrassCellObject* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f66
        using fn_Method_1 = void* (*)(GrassCellObject* __this);
    };

    // TypeDefIndex: 29379 | Original: COW.Graphics.GrassSubCell | Token: 0x20072c4
    struct GrassSubCell : Il2Cpp::Object {
        // Fields (6)
        void* m_grassList; // m_grassList | Token: 0x4039426
        void* m_bushList; // m_bushList | Token: 0x4039427
        void* m_position; // m_position | Token: 0x4039428
        void* m_vertCount; // m_vertCount | Token: 0x4039429
        void* m_hassGrass; // m_hassGrass | Token: 0x403942a
        void* m_updateCount; // m_updateCount | Token: 0x403942b

        // Methods (8)
        // Method: ewGameObjects() | Slot: 27076 | Token: 0x44e89f
        using fn_ewGameObjects = void* (*)(GrassSubCell* __this);
        // Method: Method_1() | Slot: 24422 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(GrassSubCell* __this);
        // Method: t() | Slot: 59597 | Token: 0x86
        using fn_t = void* (*)(GrassSubCell* __this);
        // Method: es(void* level) | Slot: 65535 | Token: 0x6029668
        using fn_es = void* (*)(GrassSubCell* __this, void* level);
        // Method: IsShowLevelUpVFX() | Slot: 134 | Token: 0xffffffff
        using fn_IsShowLevelUpVFX = void* (*)(GrassSubCell* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38506 | Token: 0x17d5d
        using fn_GetExchangeCurrencySubType = void* (*)(GrassSubCell* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(GrassSubCell* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x12545
        using fn_Method_7 = void* (*)(GrassSubCell* __this);
    };

    // TypeDefIndex: 29380 | Original: COW.Graphics.GrassCell | Token: 0x20072c5
    struct GrassCell : Il2Cpp::Object {
        // Fields (3)
        void* m_subCells; // m_subCells | Token: 0x403942c
        void* m_position; // m_position | Token: 0x403942d
        void* m_hassGrass; // m_hassGrass | Token: 0x403942e

        // Methods (8)
        // Method: Method_0() | Slot: 0 | Token: 0x5f66
        using fn_Method_0 = void* (*)(GrassCell* __this);
        // Method: Objects() | Slot: 54255 | Token: 0x44e968
        using fn_Objects = void* (*)(GrassCell* __this);
        // Method: Method_2() | Slot: 24422 | Token: 0x1ffff
        using fn_Method_2 = void* (*)(GrassCell* __this);
        // Method: g() | Slot: 59799 | Token: 0x86
        using fn_g = void* (*)(GrassCell* __this);
        // Method: es() | Slot: 65535 | Token: 0x6029670
        using fn_es = void* (*)(GrassCell* __this);
        // Method: FormatStageAppearanceItems() | Slot: 129 | Token: 0xffffffff
        using fn_FormatStageAppearanceItems = void* (*)(GrassCell* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38514 | Token: 0x17d61
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(GrassCell* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(GrassCell* __this);
    };

    // TypeDefIndex: 29381 | Original: COW.Graphics.BaseCustomSerializedObject | Token: 0x20072c6
    struct BaseCustomSerializedObject : Il2Cpp::Object {

        // Methods (19)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(BaseCustomSerializedObject* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f66
        using fn_Method_1 = void* (*)(BaseCustomSerializedObject* __this);
        // Method: ceneCollection(void* priority) | Slot: 9541 | Token: 0x44ea28
        using fn_ceneCollection = void* (*)(BaseCustomSerializedObject* __this, void* priority);
        // Method: Method_3() | Slot: 24422 | Token: 0x2ffff
        using fn_Method_3 = void* (*)(BaseCustomSerializedObject* __this);
        // Method: bum() | Slot: 60008 | Token: 0x86
        using fn_bum = void* (*)(BaseCustomSerializedObject* __this);
        // Method: es(void* buddyAccountID) | Slot: 65535 | Token: 0x6029678
        using fn_es = void* (*)(BaseCustomSerializedObject* __this, void* buddyAccountID);
        // Method: RequestDrawSparkGachaPool() | Slot: 134 | Token: 0xffffffff
        using fn_RequestDrawSparkGachaPool = void* (*)(BaseCustomSerializedObject* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38522 | Token: 0x17d6c
        using fn_GetExchangeCurrencySubType = void* (*)(BaseCustomSerializedObject* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(BaseCustomSerializedObject* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x12545
        using fn_Method_9 = void* (*)(BaseCustomSerializedObject* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x5f66
        using fn_Method_10 = void* (*)(BaseCustomSerializedObject* __this);
        // Method: lection() | Slot: 42287 | Token: 0x44eb16
        using fn_lection = void* (*)(BaseCustomSerializedObject* __this);
        // Method: Method_12() | Slot: 24422 | Token: 0x1ffff
        using fn_Method_12 = void* (*)(BaseCustomSerializedObject* __this);
        // Method: bum() | Slot: 18858 | Token: 0x1886
        using fn_bum = void* (*)(BaseCustomSerializedObject* __this);
        // Method: es() | Slot: 65535 | Token: 0x6029680
        using fn_es = void* (*)(BaseCustomSerializedObject* __this);
        // Method: <>iFixBaseProxy_Logout() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Logout = void* (*)(BaseCustomSerializedObject* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38530 | Token: 0x17d72
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(BaseCustomSerializedObject* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(BaseCustomSerializedObject* __this);
        // Method: Method_18() | Slot: 65535 | Token: 0x12545
        using fn_Method_18 = void* (*)(BaseCustomSerializedObject* __this);
    };

    // TypeDefIndex: 29382 | Original: COW.Graphics.GrassInstListObject | Token: 0x20072c7
    struct GrassInstListObject : Il2Cpp::Object {
        // Fields (1)
        void* m_grassInstList; // m_grassInstList | Token: 0x403942f

        // Methods (1)
        // Method: Method_0() | Slot: 0 | Token: 0x5f5e
        using fn_Method_0 = void* (*)(GrassInstListObject* __this);
    };

    // TypeDefIndex: 29383 | Original: COW.Graphics.GrassInst | Token: 0x20072c8
    struct GrassInst : Il2Cpp::Object {
        // Fields (4)
        void* m_spriteID; // m_spriteID | Token: 0x4039430
        void* m_isHide; // m_isHide | Token: 0x4039431
        void* m_pos; // m_pos | Token: 0x4039432
        void* m_NormalAndRotation; // m_NormalAndRotation | Token: 0x4039433

        // Methods (14)
        // Method: Method_0(void* strAPPSecret) | Slot: 8434 | Token: 0x44f02c
        using fn_Method_0 = void* (*)(GrassInst* __this, void* strAPPSecret);
        // Method: Method_1() | Slot: 24414 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(GrassInst* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 61571 | Token: 0x83
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(GrassInst* __this);
        // Method: ed(void* value) | Slot: 65535 | Token: 0x6029688
        using fn_ed = void* (*)(GrassInst* __this, void* value);
        // Method: <EnsureSparkTemperDatasLoaded>b__80_0() | Slot: 131 | Token: 0xffffffff
        using fn__EnsureSparkTemperDatasLoaded_b__80_0 = void* (*)(GrassInst* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38538 | Token: 0x17d77
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(GrassInst* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(GrassInst* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x12545
        using fn_Method_7 = void* (*)(GrassInst* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x5f5f
        using fn_Method_8 = void* (*)(GrassInst* __this);
        // Method: ixName(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_ixName = void* (*)(GrassInst* __this, void* instCount);
        // Method: Method_10() | Slot: 24416 | Token: 0xffff
        using fn_Method_10 = void* (*)(GrassInst* __this);
        // Method: bum() | Slot: 103 | Token: 0x83
        using fn_bum = void* (*)(GrassInst* __this);
        // Method: m_Bones() | Slot: 65535 | Token: 0x6029690
        using fn_m_Bones = void* (*)(GrassInst* __this);
        // Method: <RequestClaimSparkPet>b__0() | Slot: 131 | Token: 0xffffffff
        using fn__RequestClaimSparkPet_b__0 = void* (*)(GrassInst* __this);
    };

    // TypeDefIndex: 29384 | Original: COW.Graphics.FoliageUpdateFrameQueue | Token: 0x20072c9
    struct FoliageUpdateFrameQueue : Il2Cpp::Object {
        // Fields (6)
        void* value__; // value__ | Token: 0x4039434
        void* eGrass; // eGrass | Token: 0x4039435
        void* eGrassPrepareData; // eGrassPrepareData | Token: 0x4039436
        void* eTreeFindVisible; // eTreeFindVisible | Token: 0x4039437
        void* eTreeBuildVisible; // eTreeBuildVisible | Token: 0x4039438
        void* eMax; // eMax | Token: 0x4039439
    };

    // TypeDefIndex: 29388 | Original: COW.Graphics.GrassSystem | Token: 0x20072ca
    struct GrassSystem : Il2Cpp::Object {
        // Fields (107)
        void* m_mapName; // m_mapName | Token: 0x403943a
        void* m_grassPrefab0; // m_grassPrefab0 | Token: 0x403943b
        void* m_grassPrefab1; // m_grassPrefab1 | Token: 0x403943c
        void* m_grassPrefab2; // m_grassPrefab2 | Token: 0x403943d
        void* m_grassPrefabList; // m_grassPrefabList | Token: 0x403943e
        void* m_grassPrefabResNameList; // m_grassPrefabResNameList | Token: 0x403943f
        void* m_grassBillboardPrefab; // m_grassBillboardPrefab | Token: 0x4039440
        void* m_grassPrefab0_ResName; // m_grassPrefab0_ResName | Token: 0x4039441
        void* m_grassPrefab1_ResName; // m_grassPrefab1_ResName | Token: 0x4039442
        void* m_grassPrefab2_ResName; // m_grassPrefab2_ResName | Token: 0x4039443
        void* m_grassInstList; // m_grassInstList | Token: 0x4039444
        void* m_grassMaskStartX; // m_grassMaskStartX | Token: 0x4039445
        void* m_grassMaskStartZ; // m_grassMaskStartZ | Token: 0x4039446
        void* m_grassMaskStartY; // m_grassMaskStartY | Token: 0x4039447
        void* m_grassMaskSizeX; // m_grassMaskSizeX | Token: 0x4039448
        void* m_grassMaskSizeZ; // m_grassMaskSizeZ | Token: 0x4039449
        void* m_grassMaskSizeY; // m_grassMaskSizeY | Token: 0x403944a
        void* m_grassMaskCellSize; // m_grassMaskCellSize | Token: 0x403944b
        void* m_grassMaskSubCellSize; // m_grassMaskSubCellSize | Token: 0x403944c
        void* m_grassViewDist; // m_grassViewDist | Token: 0x403944d
        void* m_UseHoudiniData; // m_UseHoudiniData | Token: 0x403944e
        void* m_EnableUVOffset; // m_EnableUVOffset | Token: 0x403944f
        void* m_UseHoudiniPrefabRemapUV; // m_UseHoudiniPrefabRemapUV | Token: 0x4039450
        void* m_grassCellNumW; // m_grassCellNumW | Token: 0x4039451
        void* m_grassCellNumH; // m_grassCellNumH | Token: 0x4039452
        void* m_grassSubCellNumW; // m_grassSubCellNumW | Token: 0x4039453
        void* m_grassSubCellNumH; // m_grassSubCellNumH | Token: 0x4039454
        void* MAX_INST_NUM; // MAX_INST_NUM | Token: 0x4039455
        void* MAX_BILLBOARD_INST_NUM; // MAX_BILLBOARD_INST_NUM | Token: 0x4039456
        void* PREFAB_VERT_NUM; // PREFAB_VERT_NUM | Token: 0x4039457
        void* m_PrefabSizes; // m_PrefabSizes | Token: 0x4039458
        void* PREFAB_INDEX_NUM; // PREFAB_INDEX_NUM | Token: 0x4039459
        void* PREFAB_BILLBOARD_VERT_NUM; // PREFAB_BILLBOARD_VERT_NUM | Token: 0x403945a
        void* PREFAB_BILLBOARD_INDEX_NUM; // PREFAB_BILLBOARD_INDEX_NUM | Token: 0x403945b
        void* FAR_POS_Y; // FAR_POS_Y | Token: 0x403945c
        void* INST_QUALITY_STEP; // INST_QUALITY_STEP | Token: 0x403945d
        void* LOD_DIST_QUALITY; // LOD_DIST_QUALITY | Token: 0x403945e
        void* m_fadeSpeed; // m_fadeSpeed | Token: 0x403945f
        void* m_billboardDistSqr; // m_billboardDistSqr | Token: 0x4039460
        void* m_meshDistSqr; // m_meshDistSqr | Token: 0x4039461
        void* m_fadeDistSqr; // m_fadeDistSqr | Token: 0x4039462
        void* m_typeSpriteIDBias; // m_typeSpriteIDBias | Token: 0x4039463
        void* m_grassLayerMask; // m_grassLayerMask | Token: 0x4039464
        void* m_grassPrefabVertDict; // m_grassPrefabVertDict | Token: 0x4039465
        void* m_grassPrefabNormalDict; // m_grassPrefabNormalDict | Token: 0x4039466
        void* m_grassPrefabUVDict; // m_grassPrefabUVDict | Token: 0x4039467
        void* m_grassPrefabColorDict; // m_grassPrefabColorDict | Token: 0x4039468
        void* m_grassPrefabIndicesDict; // m_grassPrefabIndicesDict | Token: 0x4039469
        void* m_grassBillboardPrefabVertList; // m_grassBillboardPrefabVertList | Token: 0x403946a
        void* m_grassBillboardPrefabUVList; // m_grassBillboardPrefabUVList | Token: 0x403946b
        void* m_grassBillboardPrefabIndicesList; // m_grassBillboardPrefabIndicesList | Token: 0x403946c
        void* m_grassSimMat; // m_grassSimMat | Token: 0x403946d
        void* m_grassSimBillboardMat; // m_grassSimBillboardMat | Token: 0x403946e
        void* m_grassSimMeshVertList; // m_grassSimMeshVertList | Token: 0x403946f
        void* m_grassSimMeshColorList; // m_grassSimMeshColorList | Token: 0x4039470
        void* m_grassSimBillboardVertList; // m_grassSimBillboardVertList | Token: 0x4039471
        void* m_grassSimBillboardNormalList; // m_grassSimBillboardNormalList | Token: 0x4039472
        void* m_grassSimBillboardColorList; // m_grassSimBillboardColorList | Token: 0x4039473
        void* m_meshBufferDirty; // m_meshBufferDirty | Token: 0x4039474
        void* m_billboardBufferDirty; // m_billboardBufferDirty | Token: 0x4039475
        void* m_grassSimMesh; // m_grassSimMesh | Token: 0x4039476
        void* m_grassSimBillboardMesh; // m_grassSimBillboardMesh | Token: 0x4039477
        void* m_camera; // m_camera | Token: 0x4039478
        void* m_grassMatTextures; // m_grassMatTextures | Token: 0x4039479
        void* m_grassCell; // m_grassCell | Token: 0x403947a
        void* m_fadeInstFadeDict; // m_fadeInstFadeDict | Token: 0x403947b
        void* m_visibleGrassSimMeshDict; // m_visibleGrassSimMeshDict | Token: 0x403947c
        void* m_visibleGrassSimBillboardDict; // m_visibleGrassSimBillboardDict | Token: 0x403947d
        void* m_grassVisibleSubCellList; // m_grassVisibleSubCellList | Token: 0x403947e
        void* m_tmpFadeList; // m_tmpFadeList | Token: 0x403947f
        void* m_tmpRemoveMeshList; // m_tmpRemoveMeshList | Token: 0x4039480
        void* m_tmpRemoveBillboardList; // m_tmpRemoveBillboardList | Token: 0x4039481
        void* m_tmpRemoveFadeList; // m_tmpRemoveFadeList | Token: 0x4039482
        void* m_freeGrassBillboardBufferList; // m_freeGrassBillboardBufferList | Token: 0x4039483
        void* m_freeGrassMeshBufferList; // m_freeGrassMeshBufferList | Token: 0x4039484
        void* m_freeGrassBufferCompare; // m_freeGrassBufferCompare | Token: 0x4039485
        void* m_NeedMergeFreeBufferList; // m_NeedMergeFreeBufferList | Token: 0x4039486
        void* m_NeedMergeFreeBillboardBufferList; // m_NeedMergeFreeBillboardBufferList | Token: 0x4039487
        void* m_MergeFreeBufferListFuncOpen; // m_MergeFreeBufferListFuncOpen | Token: 0x4039488
        void* m_enableGrassCamHFOV; // m_enableGrassCamHFOV | Token: 0x4039489
        void* m_currentUpdateCount; // m_currentUpdateCount | Token: 0x403948a
        void* m_isDataReady; // m_isDataReady | Token: 0x403948b
        void* m_spriteScale; // m_spriteScale | Token: 0x403948c
        void* m_treeSystem; // m_treeSystem | Token: 0x403948d
        void* m_sceneGraphcisInst; // m_sceneGraphcisInst | Token: 0x403948e
        void* _FrameCount_k__BackingField; // <FrameCount>k__BackingField | Token: 0x403948f
        void* _UseFrameSplit_k__BackingField; // <UseFrameSplit>k__BackingField | Token: 0x4039490
        void* _CamRotDelta_k__BackingField; // <CamRotDelta>k__BackingField | Token: 0x4039491
        void* _CamPosDelta_k__BackingField; // <CamPosDelta>k__BackingField | Token: 0x4039492
        void* m_DelayUseFrameSplitCount; // m_DelayUseFrameSplitCount | Token: 0x4039493
        void* m_LastCamRotation; // m_LastCamRotation | Token: 0x4039494
        void* m_LastCamPosition; // m_LastCamPosition | Token: 0x4039495
        void* m_IsNeoParadise; // m_IsNeoParadise | Token: 0x4039496
        void* m_IsNeoParadiseMax; // m_IsNeoParadiseMax | Token: 0x4039497
        void* m_IsWorkShop; // m_IsWorkShop | Token: 0x4039498
        void* m_IsSonoran; // m_IsSonoran | Token: 0x4039499
        void* m_IsShangrila; // m_IsShangrila | Token: 0x403949a
        void* m_EnablePreZPass; // m_EnablePreZPass | Token: 0x403949b
        void* m_EnableMeshColor; // m_EnableMeshColor | Token: 0x403949c
        void* m_EnableNormal; // m_EnableNormal | Token: 0x403949d
        void* m_EnableSplitUpdate; // m_EnableSplitUpdate | Token: 0x403949e
        void* m_GrassHeightScale; // m_GrassHeightScale | Token: 0x403949f
        void* m_tmpSimDict; // m_tmpSimDict | Token: 0x40394a0
        void* m_tmpColorList; // m_tmpColorList | Token: 0x40394a1
        void* points; // points | Token: 0x40394a2
        void* m_UseFEData; // m_UseFEData | Token: 0x40394a3
        void* m_FEGrassData; // m_FEGrassData | Token: 0x40394a4

        // Methods (82)
        // Method: _WAIT() | Slot: 38546 | Token: 0xffffffff
        using fn__WAIT = void* (*)(GrassSystem* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(GrassSystem* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x12545
        using fn_Method_2 = void* (*)(GrassSystem* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f63
        using fn_Method_3 = void* (*)(GrassSystem* __this);
        // Method: refixScene(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_refixScene = void* (*)(GrassSystem* __this, void* instCount);
        // Method: Method_5() | Slot: 24420 | Token: 0xffff
        using fn_Method_5 = void* (*)(GrassSystem* __this);
        // Method: bum() | Slot: 103 | Token: 0x83
        using fn_bum = void* (*)(GrassSystem* __this);
        // Method: nes() | Slot: 65535 | Token: 0x6029698
        using fn_nes = void* (*)(GrassSystem* __this);
        // Method: <RequestDrawSparkGachaPool>b__0() | Slot: 131 | Token: 0xffffffff
        using fn__RequestDrawSparkGachaPool_b__0 = void* (*)(GrassSystem* __this);
        // Method: _WAIT() | Slot: 38554 | Token: 0x17d88
        using fn__WAIT = void* (*)(GrassSystem* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(GrassSystem* __this);
        // Method: Method_11() | Slot: 32137 | Token: 0x12545
        using fn_Method_11 = void* (*)(GrassSystem* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x5f67
        using fn_Method_12 = void* (*)(GrassSystem* __this);
        // Method: Method_13(void* pos) | Slot: 9541 | Token: 0x44f24f
        using fn_Method_13 = void* (*)(GrassSystem* __this, void* pos);
        // Method: Method_14() | Slot: 24423 | Token: 0x1ffff
        using fn_Method_14 = void* (*)(GrassSystem* __this);
        // Method: t() | Slot: 62078 | Token: 0x886
        using fn_t = void* (*)(GrassSystem* __this);
        // Method: s(void* value) | Slot: 65535 | Token: 0x60296a0
        using fn_s = void* (*)(GrassSystem* __this, void* value);
        // Method: get_IsOpenLobbyDialogue() | Slot: 2182 | Token: 0xffffffff
        using fn_get_IsOpenLobbyDialogue = void* (*)(GrassSystem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38562 | Token: 0x17d8c
        using fn_GetExchangeCurrencySubType = void* (*)(GrassSystem* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(GrassSystem* __this);
        // Method: Method_20() | Slot: 32141 | Token: 0x12545
        using fn_Method_20 = void* (*)(GrassSystem* __this);
        // Method: Method_21() | Slot: 0 | Token: 0x5f67
        using fn_Method_21 = void* (*)(GrassSystem* __this);
        // Method: Method_22(void* pos) | Slot: 9541 | Token: 0x44f2f8
        using fn_Method_22 = void* (*)(GrassSystem* __this, void* pos);
        // Method: Method_23() | Slot: 24423 | Token: 0x1ffff
        using fn_Method_23 = void* (*)(GrassSystem* __this);
        // Method: g() | Slot: 62237 | Token: 0x886
        using fn_g = void* (*)(GrassSystem* __this);
        // Method: s(void* value) | Slot: 65535 | Token: 0x60296a8
        using fn_s = void* (*)(GrassSystem* __this, void* value);
        // Method: get_OpenSparkPetAnimTest() | Slot: 2182 | Token: 0xffffffff
        using fn_get_OpenSparkPetAnimTest = void* (*)(GrassSystem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38570 | Token: 0x17d90
        using fn_GetExchangeCurrencySubType = void* (*)(GrassSystem* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(GrassSystem* __this);
        // Method: Method_29() | Slot: 32145 | Token: 0x12545
        using fn_Method_29 = void* (*)(GrassSystem* __this);
        // Method: Method_30() | Slot: 0 | Token: 0x5f67
        using fn_Method_30 = void* (*)(GrassSystem* __this);
        // Method: Method_31(void* pos) | Slot: 9541 | Token: 0x44f39f
        using fn_Method_31 = void* (*)(GrassSystem* __this, void* pos);
        // Method: Method_32() | Slot: 24423 | Token: 0x1ffff
        using fn_Method_32 = void* (*)(GrassSystem* __this);
        // Method: t() | Slot: 62415 | Token: 0x886
        using fn_t = void* (*)(GrassSystem* __this);
        // Method: s(void* value) | Slot: 65535 | Token: 0x60296b0
        using fn_s = void* (*)(GrassSystem* __this, void* value);
        // Method: get_SparkPetState() | Slot: 2182 | Token: 0xffffffff
        using fn_get_SparkPetState = void* (*)(GrassSystem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38578 | Token: 0x17d94
        using fn_GetExchangeCurrencySubType = void* (*)(GrassSystem* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(GrassSystem* __this);
        // Method: Method_38() | Slot: 65535 | Token: 0x12545
        using fn_Method_38 = void* (*)(GrassSystem* __this);
        // Method: Method_39() | Slot: 0 | Token: 0x5f67
        using fn_Method_39 = void* (*)(GrassSystem* __this);
        // Method: Method_40(void* strAPPSecret) | Slot: 9541 | Token: 0x21ac85
        using fn_Method_40 = void* (*)(GrassSystem* __this, void* strAPPSecret);
        // Method: Method_41() | Slot: 24424 | Token: 0x1ffff
        using fn_Method_41 = void* (*)(GrassSystem* __this);
        // Method: t() | Slot: 103 | Token: 0x896
        using fn_t = void* (*)(GrassSystem* __this);
        // Method: () | Slot: 65535 | Token: 0x60296b8
        using fn_unnamed = void* (*)(GrassSystem* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(GrassSystem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38586 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(GrassSystem* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(GrassSystem* __this);
        // Method: Method_47() | Slot: 65535 | Token: 0x12545
        using fn_Method_47 = void* (*)(GrassSystem* __this);
        // Method: Method_48() | Slot: 0 | Token: 0x5f6d
        using fn_Method_48 = void* (*)(GrassSystem* __this);
        // Method: Method_49(void* strAPPSecret) | Slot: 9541 | Token: 0x67
        using fn_Method_49 = void* (*)(GrassSystem* __this, void* strAPPSecret);
        // Method: Method_50() | Slot: 24431 | Token: 0xffff
        using fn_Method_50 = void* (*)(GrassSystem* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(GrassSystem* __this);
        // Method: olliderExportHelper() | Slot: 65535 | Token: 0x60296c0
        using fn_olliderExportHelper = void* (*)(GrassSystem* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(GrassSystem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38594 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(GrassSystem* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(GrassSystem* __this);
        // Method: Method_56() | Slot: 65535 | Token: 0x16a1f
        using fn_Method_56 = void* (*)(GrassSystem* __this);
        // Method: Method_57() | Slot: 0 | Token: 0x5f80
        using fn_Method_57 = void* (*)(GrassSystem* __this);
        // Method: itIs() | Slot: 12243 | Token: 0x44f8e6
        using fn_itIs = void* (*)(GrassSystem* __this);
        // Method: Method_59() | Slot: 24448 | Token: 0xffff
        using fn_Method_59 = void* (*)(GrassSystem* __this);
        // Method: estroy() | Slot: 63745 | Token: 0x886
        using fn_estroy = void* (*)(GrassSystem* __this);
        // Method: per() | Slot: 65535 | Token: 0x60296c8
        using fn_per = void* (*)(GrassSystem* __this);
        // Method: get_RankingTeamDataListByLiving() | Slot: 2182 | Token: 0xffffffff
        using fn_get_RankingTeamDataListByLiving = void* (*)(GrassSystem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38602 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(GrassSystem* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(GrassSystem* __this);
        // Method: Method_65() | Slot: 65535 | Token: 0x1691
        using fn_Method_65 = void* (*)(GrassSystem* __this);
        // Method: Method_66() | Slot: 0 | Token: 0x5f80
        using fn_Method_66 = void* (*)(GrassSystem* __this);
        // Method: tIs() | Slot: 14882 | Token: 0x44f990
        using fn_tIs = void* (*)(GrassSystem* __this);
        // Method: Method_68() | Slot: 24448 | Token: 0x1ffff
        using fn_Method_68 = void* (*)(GrassSystem* __this);
        // Method: rIconVfx() | Slot: 63940 | Token: 0x86
        using fn_rIconVfx = void* (*)(GrassSystem* __this);
        // Method: per(void* pId, void* gsStats) | Slot: 65535 | Token: 0x60296d0
        using fn_per = void* (*)(GrassSystem* __this, void* pId, void* gsStats);
        // Method: get_Airdrops() | Slot: 2182 | Token: 0xffffffff
        using fn_get_Airdrops = void* (*)(GrassSystem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38610 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(GrassSystem* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(GrassSystem* __this);
        // Method: Method_74() | Slot: 65535 | Token: 0xa52f
        using fn_Method_74 = void* (*)(GrassSystem* __this);
        // Method: Method_75() | Slot: 0 | Token: 0x5f80
        using fn_Method_75 = void* (*)(GrassSystem* __this);
        // Method: Method_76(void* pos) | Slot: 9541 | Token: 0x44fa32
        using fn_Method_76 = void* (*)(GrassSystem* __this, void* pos);
        // Method: Method_77() | Slot: 24448 | Token: 0x1ffff
        using fn_Method_77 = void* (*)(GrassSystem* __this);
        // Method: shEffect() | Slot: 64101 | Token: 0x886
        using fn_shEffect = void* (*)(GrassSystem* __this);
        // Method: per(void* value) | Slot: 65535 | Token: 0x60296d8
        using fn_per = void* (*)(GrassSystem* __this, void* value);
        // Method: GetModelType() | Slot: 198 | Token: 0xffffffff
        using fn_GetModelType = void* (*)(GrassSystem* __this);
        // Method: ly-CSharp() | Slot: 38618 | Token: 0xffffffff
        using fn_ly_CSharp = void* (*)(GrassSystem* __this);
    };

    // TypeDefIndex: 29389 | Original: COW.Graphics.GrassSystemAppendingData | Token: 0x20072ce
    struct GrassSystemAppendingData : Il2Cpp::Object {
        // Fields (21)
        void* _GrassDataId; // _GrassDataId | Token: 0x40394af
        void* m_grassDataId; // m_grassDataId | Token: 0x40394b0
        void* Name; // Name | Token: 0x40394b1
        void* m_grassCell; // m_grassCell | Token: 0x40394b2
        void* m_grassInstList; // m_grassInstList | Token: 0x40394b3
        void* m_grassSimMesh; // m_grassSimMesh | Token: 0x40394b4
        void* m_grassSimBillboardMesh; // m_grassSimBillboardMesh | Token: 0x40394b5
        void* m_grassSimMeshVertList; // m_grassSimMeshVertList | Token: 0x40394b6
        void* m_grassSimMeshColorList; // m_grassSimMeshColorList | Token: 0x40394b7
        void* m_grassSimBillboardVertList; // m_grassSimBillboardVertList | Token: 0x40394b8
        void* m_grassSimBillboardNormalList; // m_grassSimBillboardNormalList | Token: 0x40394b9
        void* m_grassSimBillboardColorList; // m_grassSimBillboardColorList | Token: 0x40394ba
        void* m_grassVisibleSubCellList; // m_grassVisibleSubCellList | Token: 0x40394bb
        void* m_fadeInstFadeDict; // m_fadeInstFadeDict | Token: 0x40394bc
        void* m_visibleGrassSimMeshDict; // m_visibleGrassSimMeshDict | Token: 0x40394bd
        void* m_visibleGrassSimBillboardDict; // m_visibleGrassSimBillboardDict | Token: 0x40394be
        void* m_freeGrassBillboardBufferList; // m_freeGrassBillboardBufferList | Token: 0x40394bf
        void* m_freeGrassMeshBufferList; // m_freeGrassMeshBufferList | Token: 0x40394c0
        void* m_NeedMergeFreeBufferList; // m_NeedMergeFreeBufferList | Token: 0x40394c1
        void* m_NeedMergeFreeBillboardBufferList; // m_NeedMergeFreeBillboardBufferList | Token: 0x40394c2
        void* m_currentUpdateCount; // m_currentUpdateCount | Token: 0x40394c3

        // Methods (4)
        // Method: Method_0() | Slot: 24448 | Token: 0xffff
        using fn_Method_0 = void* (*)(GrassSystemAppendingData* __this);
        // Method: bum() | Slot: 18518 | Token: 0x86
        using fn_bum = void* (*)(GrassSystemAppendingData* __this);
        // Method: per(void* id, void* killerId, void* last_position, void* last_forward, void* pendingRevive) | Slot: 65535 | Token: 0x60296e0
        using fn_per = void* (*)(GrassSystemAppendingData* __this, void* id, void* killerId, void* last_position, void* last_forward, void* pendingRevive);
        // Method: UpdateReviveInfo() | Slot: 134 | Token: 0xffffffff
        using fn_UpdateReviveInfo = void* (*)(GrassSystemAppendingData* __this);
    };

    // TypeDefIndex: 29390 | Original: COW.Graphics.IdleAnimationSwitcher | Token: 0x20072cf
    struct IdleAnimationSwitcher : Il2Cpp::Object {
        // Fields (13)
        void* IdleClip; // IdleClip | Token: 0x40394c4
        void* SpecialIdleClip; // SpecialIdleClip | Token: 0x40394c5
        void* IdleStateObjects; // IdleStateObjects | Token: 0x40394c6
        void* SpecialIdleStateObjects; // SpecialIdleStateObjects | Token: 0x40394c7
        void* TriggerInterval; // TriggerInterval | Token: 0x40394c8
        void* IntervalVariance; // IntervalVariance | Token: 0x40394c9
        void* AvoidBreakingIdleClip; // AvoidBreakingIdleClip | Token: 0x40394ca
        void* m_Animation; // m_Animation | Token: 0x40394cb
        void* m_IsPlayingSpecial; // m_IsPlayingSpecial | Token: 0x40394cc
        void* m_AccumulatedTime; // m_AccumulatedTime | Token: 0x40394cd
        void* m_CurrentThreshold; // m_CurrentThreshold | Token: 0x40394ce
        void* m_IdleLength; // m_IdleLength | Token: 0x40394cf
        void* m_SpecialIdleLength; // m_SpecialIdleLength | Token: 0x40394d0

        // Methods (14)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38626 | Token: 0x17daa
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(IdleAnimationSwitcher* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(IdleAnimationSwitcher* __this);
        // Method: Method_2() | Slot: 32173 | Token: 0x69c4
        using fn_Method_2 = void* (*)(IdleAnimationSwitcher* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f80
        using fn_Method_3 = void* (*)(IdleAnimationSwitcher* __this);
        // Method: xSize(void* priority) | Slot: 9541 | Token: 0x44fb4a
        using fn_xSize = void* (*)(IdleAnimationSwitcher* __this, void* priority);
        // Method: Method_5() | Slot: 24448 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(IdleAnimationSwitcher* __this);
        // Method: bum() | Slot: 64394 | Token: 0x86
        using fn_bum = void* (*)(IdleAnimationSwitcher* __this);
        // Method: per() | Slot: 65535 | Token: 0x60296e8
        using fn_per = void* (*)(IdleAnimationSwitcher* __this);
        // Method: GetTargetPlayerOtherSetting() | Slot: 134 | Token: 0xffffffff
        using fn_GetTargetPlayerOtherSetting = void* (*)(IdleAnimationSwitcher* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38634 | Token: 0x17db5
        using fn_GetExchangeCurrencySubType = void* (*)(IdleAnimationSwitcher* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(IdleAnimationSwitcher* __this);
        // Method: Method_11() | Slot: 32187 | Token: 0x12545
        using fn_Method_11 = void* (*)(IdleAnimationSwitcher* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x5f80
        using fn_Method_12 = void* (*)(IdleAnimationSwitcher* __this);
        // Method: e(void* priority) | Slot: 9541 | Token: 0x44fc07
        using fn_e = void* (*)(IdleAnimationSwitcher* __this, void* priority);
    };

    // TypeDefIndex: 29391 | Original: COW.Graphics.ImageDepthBlur | Token: 0x20072d0
    struct ImageDepthBlur : Il2Cpp::Object {
        // Fields (8)
        void* m_rimColor; // m_rimColor | Token: 0x40394d1
        void* m_blurShader; // m_blurShader | Token: 0x40394d2
        void* m_depthBlurShader; // m_depthBlurShader | Token: 0x40394d3
        void* m_blurMaterial; // m_blurMaterial | Token: 0x40394d4
        void* m_depthBlurMaterial; // m_depthBlurMaterial | Token: 0x40394d5
        void* m_isInit; // m_isInit | Token: 0x40394d6
        void* width; // width | Token: 0x40394d7
        void* height; // height | Token: 0x40394d8

        // Methods (15)
        // Method: Method_0() | Slot: 24448 | Token: 0x2ffff
        using fn_Method_0 = void* (*)(ImageDepthBlur* __this);
        // Method: bum() | Slot: 64572 | Token: 0x86
        using fn_bum = void* (*)(ImageDepthBlur* __this);
        // Method: per(void* id, void* oldValue, void* newValue) | Slot: 65535 | Token: 0x60296f0
        using fn_per = void* (*)(ImageDepthBlur* __this, void* id, void* oldValue, void* newValue);
        // Method: OnUpdatePlayerResurrectTeammateCount() | Slot: 134 | Token: 0xffffffff
        using fn_OnUpdatePlayerResurrectTeammateCount = void* (*)(ImageDepthBlur* __this);
        // Method: imable() | Slot: 38642 | Token: 0x17dcc
        using fn_imable = void* (*)(ImageDepthBlur* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(ImageDepthBlur* __this);
        // Method: Method_6() | Slot: 32210 | Token: 0x12545
        using fn_Method_6 = void* (*)(ImageDepthBlur* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x5f80
        using fn_Method_7 = void* (*)(ImageDepthBlur* __this);
        // Method: mitsx(void* priority) | Slot: 9541 | Token: 0x44fcec
        using fn_mitsx = void* (*)(ImageDepthBlur* __this, void* priority);
        // Method: Method_9() | Slot: 24448 | Token: 0x3ffff
        using fn_Method_9 = void* (*)(ImageDepthBlur* __this);
        // Method: bum() | Slot: 64795 | Token: 0x86
        using fn_bum = void* (*)(ImageDepthBlur* __this);
        // Method: per(void* id) | Slot: 65535 | Token: 0x60296f8
        using fn_per = void* (*)(ImageDepthBlur* __this, void* id);
        // Method: OnUpdateTeamWinNum() | Slot: 134 | Token: 0xffffffff
        using fn_OnUpdateTeamWinNum = void* (*)(ImageDepthBlur* __this);
        // Method: _WAIT() | Slot: 38650 | Token: 0x17de1
        using fn__WAIT = void* (*)(ImageDepthBlur* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(ImageDepthBlur* __this);
    };

    // TypeDefIndex: 29393 | Original: COW.Graphics.MaterialOverride | Token: 0x20072d1
    struct MaterialOverride : Il2Cpp::Object {
        // Fields (7)
        void* type; // type | Token: 0x40394d9
        void* useMultiMaterials; // useMultiMaterials | Token: 0x40394da
        void* materialPath; // materialPath | Token: 0x40394db
        void* materialOverridePath; // materialOverridePath | Token: 0x40394dc
        void* materialPaths; // materialPaths | Token: 0x40394dd
        void* materialOverridePaths; // materialOverridePaths | Token: 0x40394de
        void* renderer; // renderer | Token: 0x40394df

        // Methods (6)
        // Method: Method_0() | Slot: 32228 | Token: 0xc469
        using fn_Method_0 = void* (*)(MaterialOverride* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f80
        using fn_Method_1 = void* (*)(MaterialOverride* __this);
        // Method: Limitsx() | Slot: 50281 | Token: 0x44fd7c
        using fn_Limitsx = void* (*)(MaterialOverride* __this);
        // Method: Method_3() | Slot: 24448 | Token: 0x1ffff
        using fn_Method_3 = void* (*)(MaterialOverride* __this);
        // Method: tVideoInfo() | Slot: 64936 | Token: 0x86
        using fn_tVideoInfo = void* (*)(MaterialOverride* __this);
        // Method: per(void* playerId) | Slot: 65535 | Token: 0x6029700
        using fn_per = void* (*)(MaterialOverride* __this, void* playerId);
    };

    // TypeDefIndex: 29396 | Original: COW.Graphics.MipmapStreamingManager | Token: 0x20072d3
    struct MipmapStreamingManager : Il2Cpp::Object {
        // Fields (6)
        void* m_MipmapSel; // m_MipmapSel | Token: 0x40394e4
        void* m_Phase; // m_Phase | Token: 0x40394e5
        void* m_Objects; // m_Objects | Token: 0x40394e6
        void* m_Camera; // m_Camera | Token: 0x40394e7
        void* m_DistanceLevels; // m_DistanceLevels | Token: 0x40394e8
        void* m_TextureInfos; // m_TextureInfos | Token: 0x40394e9

        // Methods (10)
        // Method: GetRandomPlayer() | Slot: 134 | Token: 0xffffffff
        using fn_GetRandomPlayer = void* (*)(MipmapStreamingManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38658 | Token: 0x17de9
        using fn_GetExchangeCurrencySubType = void* (*)(MipmapStreamingManager* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(MipmapStreamingManager* __this);
        // Method: Method_3() | Slot: 32236 | Token: 0xc469
        using fn_Method_3 = void* (*)(MipmapStreamingManager* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f80
        using fn_Method_4 = void* (*)(MipmapStreamingManager* __this);
        // Method: Limitsy() | Slot: 50326 | Token: 0x248e83
        using fn_Limitsy = void* (*)(MipmapStreamingManager* __this);
        // Method: Method_6() | Slot: 24448 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(MipmapStreamingManager* __this);
        // Method: () | Slot: 24990 | Token: 0x86
        using fn_unnamed = void* (*)(MipmapStreamingManager* __this);
        // Method: per(void* id) | Slot: 65535 | Token: 0x6029708
        using fn_per = void* (*)(MipmapStreamingManager* __this, void* id);
        // Method: GetPlayerCount() | Slot: 134 | Token: 0xffffffff
        using fn_GetPlayerCount = void* (*)(MipmapStreamingManager* __this);
    };

    // TypeDefIndex: 29398 | Original: COW.Graphics.MipmapStreamingObj | Token: 0x20072d6
    struct MipmapStreamingObj : Il2Cpp::Object {
        // Fields (7)
        void* m_TextureInfos; // m_TextureInfos | Token: 0x40394f5
        void* m_TextureScale; // m_TextureScale | Token: 0x40394f6
        void* m_TextureOffset; // m_TextureOffset | Token: 0x40394f7
        void* m_MeshRenderer; // m_MeshRenderer | Token: 0x40394f8
        void* m_OriMaterial; // m_OriMaterial | Token: 0x40394f9
        void* m_OriMaterialInst; // m_OriMaterialInst | Token: 0x40394fa
        void* m_PreviewBlendMaterialInst; // m_PreviewBlendMaterialInst | Token: 0x40394fb

        // Methods (15)
        // Method: GetExchangeCurrencySubType() | Slot: 38666 | Token: 0x17df2
        using fn_GetExchangeCurrencySubType = void* (*)(MipmapStreamingObj* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(MipmapStreamingObj* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x2ef2
        using fn_Method_2 = void* (*)(MipmapStreamingObj* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f80
        using fn_Method_3 = void* (*)(MipmapStreamingObj* __this);
        // Method: Method_4(void* pos) | Slot: 9541 | Token: 0x44febd
        using fn_Method_4 = void* (*)(MipmapStreamingObj* __this, void* pos);
        // Method: Method_5() | Slot: 24448 | Token: 0x4ffff
        using fn_Method_5 = void* (*)(MipmapStreamingObj* __this);
        // Method: bum() | Slot: 65275 | Token: 0x86
        using fn_bum = void* (*)(MipmapStreamingObj* __this);
        // Method: per(void* teamWinRate) | Slot: 65535 | Token: 0x6029710
        using fn_per = void* (*)(MipmapStreamingObj* __this, void* teamWinRate);
        // Method: IsKingofKillPlayer() | Slot: 134 | Token: 0xffffffff
        using fn_IsKingofKillPlayer = void* (*)(MipmapStreamingObj* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38674 | Token: 0x17dfb
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(MipmapStreamingObj* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(MipmapStreamingObj* __this);
        // Method: Method_11() | Slot: 32255 | Token: 0x12545
        using fn_Method_11 = void* (*)(MipmapStreamingObj* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x5f80
        using fn_Method_12 = void* (*)(MipmapStreamingObj* __this);
        // Method: ayerNumber() | Slot: 42287 | Token: 0x44ff71
        using fn_ayerNumber = void* (*)(MipmapStreamingObj* __this);
        // Method: Method_14() | Slot: 24448 | Token: 0xffff
        using fn_Method_14 = void* (*)(MipmapStreamingObj* __this);
    };

    // TypeDefIndex: 29401 | Original: COW.Graphics.MipmapStreamingTextureCenter | Token: 0x20072d8
    struct MipmapStreamingTextureCenter : Il2Cpp::Object {
        // Fields (7)
        void* MAX_ACTIVE_COUNT; // MAX_ACTIVE_COUNT | Token: 0x4039502
        void* m_CurSceneIt; // m_CurSceneIt | Token: 0x4039503
        void* m_Path2Texture2D; // m_Path2Texture2D | Token: 0x4039504
        void* m_ActiveRequests; // m_ActiveRequests | Token: 0x4039505
        void* m_PendingRequest; // m_PendingRequest | Token: 0x4039506
        void* m_MaxMegaByte; // m_MaxMegaByte | Token: 0x4039507
        void* m_MinMegaByte; // m_MinMegaByte | Token: 0x4039508

        // Methods (9)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38682 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(MipmapStreamingTextureCenter* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(MipmapStreamingTextureCenter* __this);
        // Method: Method_2() | Slot: 32264 | Token: 0x12545
        using fn_Method_2 = void* (*)(MipmapStreamingTextureCenter* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f80
        using fn_Method_3 = void* (*)(MipmapStreamingTextureCenter* __this);
        // Method: er() | Slot: 14875 | Token: 0x450019
        using fn_er = void* (*)(MipmapStreamingTextureCenter* __this);
        // Method: Method_5() | Slot: 24448 | Token: 0xffff
        using fn_Method_5 = void* (*)(MipmapStreamingTextureCenter* __this);
        // Method: iveSpawnPoints() | Slot: 30618 | Token: 0x86
        using fn_iveSpawnPoints = void* (*)(MipmapStreamingTextureCenter* __this);
        // Method: per(void* player1, void* player2) | Slot: 65535 | Token: 0x6029720
        using fn_per = void* (*)(MipmapStreamingTextureCenter* __this, void* player1, void* player2);
        // Method: GetMatchMvpInfo() | Slot: 134 | Token: 0xffffffff
        using fn_GetMatchMvpInfo = void* (*)(MipmapStreamingTextureCenter* __this);
    };

    // TypeDefIndex: 29403 | Original: COW.Graphics.MultiBillboard | Token: 0x20072db
    struct MultiBillboard : Il2Cpp::Object {
        // Fields (7)
        void* m_BindSelf; // m_BindSelf | Token: 0x403950d
        void* m_Facing; // m_Facing | Token: 0x403950e
        void* m_IsMainCamera; // m_IsMainCamera | Token: 0x403950f
        void* m_TargetMainCameraTransform; // m_TargetMainCameraTransform | Token: 0x4039510
        void* m_MvpFirst; // m_MvpFirst | Token: 0x4039511
        void* m_TargetTransform; // m_TargetTransform | Token: 0x4039512
        void* m_BindedTransforms; // m_BindedTransforms | Token: 0x4039513

        // Methods (12)
        // Method: Method_0() | Slot: 24448 | Token: 0x1ffff
        using fn_Method_0 = void* (*)(MultiBillboard* __this);
        // Method: bum() | Slot: 182 | Token: 0x86
        using fn_bum = void* (*)(MultiBillboard* __this);
        // Method: per(void* msg) | Slot: 65535 | Token: 0x6029728
        using fn_per = void* (*)(MultiBillboard* __this, void* msg);
        // Method: OnBattleDetected() | Slot: 134 | Token: 0xffffffff
        using fn_OnBattleDetected = void* (*)(MultiBillboard* __this);
        // Method: imable() | Slot: 38698 | Token: 0x17e15
        using fn_imable = void* (*)(MultiBillboard* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(MultiBillboard* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0x12545
        using fn_Method_6 = void* (*)(MultiBillboard* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x5f80
        using fn_Method_7 = void* (*)(MultiBillboard* __this);
        // Method: s() | Slot: 15151 | Token: 0x1db5fb
        using fn_s = void* (*)(MultiBillboard* __this);
        // Method: Method_9() | Slot: 24448 | Token: 0xffff
        using fn_Method_9 = void* (*)(MultiBillboard* __this);
        // Method: Flare() | Slot: 295 | Token: 0x81
        using fn_Flare = void* (*)(MultiBillboard* __this);
        // Method: per() | Slot: 65535 | Token: 0x6029730
        using fn_per = void* (*)(MultiBillboard* __this);
    };

    // TypeDefIndex: 29404 | Original: COW.Graphics.ParticleEffectInRoomController | Token: 0x20072dd
    struct ParticleEffectInRoomController : Il2Cpp::Object {
        // Fields (3)
        void* m_ChildrenParticleSystem; // m_ChildrenParticleSystem | Token: 0x403951c
        void* m_ParticleEnable; // m_ParticleEnable | Token: 0x403951d
        void* m_LocalPlayer; // m_LocalPlayer | Token: 0x403951e

        // Methods (3)
        // Method: GetExchangeCurrencySubType() | Slot: 38706 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(ParticleEffectInRoomController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(ParticleEffectInRoomController* __this);
        // Method: Method_2() | Slot: 32287 | Token: 0x69c4
        using fn_Method_2 = void* (*)(ParticleEffectInRoomController* __this);
    };

    // TypeDefIndex: 29405 | Original: COW.Graphics.Distort | Token: 0x20072de
    struct Distort : Il2Cpp::Object {
        // Fields (6)
        void* m_distortShader; // m_distortShader | Token: 0x403951f
        void* m_distortMaterial; // m_distortMaterial | Token: 0x4039520
        void* m_DistortTexRGID; // m_DistortTexRGID | Token: 0x4039521
        void* m_DistortValID; // m_DistortValID | Token: 0x4039522
        void* m_isInit; // m_isInit | Token: 0x4039523
        void* Effect_PASS_INDEX; // Effect_PASS_INDEX | Token: 0x4039524

        // Methods (12)
        // Method: Method_0() | Slot: 0 | Token: 0x5f80
        using fn_Method_0 = void* (*)(Distort* __this);
        // Method: lectionExt() | Slot: 27076 | Token: 0x4501be
        using fn_lectionExt = void* (*)(Distort* __this);
        // Method: Method_2() | Slot: 24448 | Token: 0xffff
        using fn_Method_2 = void* (*)(Distort* __this);
        // Method: bum() | Slot: 103 | Token: 0x86
        using fn_bum = void* (*)(Distort* __this);
        // Method: per() | Slot: 65535 | Token: 0x6029738
        using fn_per = void* (*)(Distort* __this);
        // Method: <SortTeams>b__97_0() | Slot: 129 | Token: 0xffffffff
        using fn__SortTeams_b__97_0 = void* (*)(Distort* __this);
        // Method: _WAIT() | Slot: 38714 | Token: 0x17e28
        using fn__WAIT = void* (*)(Distort* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(Distort* __this);
        // Method: Method_8() | Slot: 65535 | Token: 0x12545
        using fn_Method_8 = void* (*)(Distort* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x5f77
        using fn_Method_9 = void* (*)(Distort* __this);
        // Method: Method_10() | Slot: 42287 | Token: 0x4507b4
        using fn_Method_10 = void* (*)(Distort* __this);
        // Method: Method_11() | Slot: 24439 | Token: 0x2ffff
        using fn_Method_11 = void* (*)(Distort* __this);
    };

    // TypeDefIndex: 29406 | Original: COW.Graphics.RimLighting | Token: 0x20072df
    struct RimLighting : Il2Cpp::Object {

        // Methods (9)
        // Method: PointInStatueRegion() | Slot: 2012 | Token: 0x83
        using fn_PointInStatueRegion = void* (*)(RimLighting* __this);
        // Method: ExportHelper(void* a, void* b) | Slot: 65535 | Token: 0x6029740
        using fn_ExportHelper = void* (*)(RimLighting* __this, void* a, void* b);
        // Method: <GenerateSpectatorMatchResult>b__159_0() | Slot: 131 | Token: 0xffffffff
        using fn__GenerateSpectatorMatchResult_b__159_0 = void* (*)(RimLighting* __this);
        // Method: _WAIT() | Slot: 38722 | Token: 0x17e31
        using fn__WAIT = void* (*)(RimLighting* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(RimLighting* __this);
        // Method: Method_5() | Slot: 32309 | Token: 0xa52f
        using fn_Method_5 = void* (*)(RimLighting* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5f77
        using fn_Method_6 = void* (*)(RimLighting* __this);
        // Method: (void* instCount) | Slot: 9541 | Token: 0x67
        using fn_unnamed = void* (*)(RimLighting* __this, void* instCount);
        // Method: Method_8() | Slot: 24440 | Token: 0xffff
        using fn_Method_8 = void* (*)(RimLighting* __this);
    };

    // TypeDefIndex: 29414 | Original: COW.Graphics.RockSystem | Token: 0x20072e0
    struct RockSystem : Il2Cpp::Object {
        // Fields (51)
        void* m_debugSwitchRock; // m_debugSwitchRock | Token: 0x4039525
        void* m_rockTypeList; // m_rockTypeList | Token: 0x4039526
        void* m_distributionDataList; // m_distributionDataList | Token: 0x4039527
        void* m_simulationDataList; // m_simulationDataList | Token: 0x4039528
        void* m_rockDataList; // m_rockDataList | Token: 0x4039529
        void* m_attachRockMeshParent; // m_attachRockMeshParent | Token: 0x403952a
        void* m_potentVisRockList; // m_potentVisRockList | Token: 0x403952b
        void* m_potentVisShadowRockList; // m_potentVisShadowRockList | Token: 0x403952c
        void* m_visibleRockGroupList; // m_visibleRockGroupList | Token: 0x403952d
        void* m_visibleShadowRockGroupList; // m_visibleShadowRockGroupList | Token: 0x403952e
        void* m_graphicsQualityRock; // m_graphicsQualityRock | Token: 0x403952f
        void* m_qualityRockID; // m_qualityRockID | Token: 0x4039530
        void* m_graphQualityRockID; // m_graphQualityRockID | Token: 0x4039531
        void* m_mapWidth; // m_mapWidth | Token: 0x4039532
        void* m_mapStartPosX; // m_mapStartPosX | Token: 0x4039533
        void* m_mapStartPosZ; // m_mapStartPosZ | Token: 0x4039534
        void* m_distToCamera; // m_distToCamera | Token: 0x4039535
        void* m_rockGroupIndNum; // m_rockGroupIndNum | Token: 0x4039536
        void* m_curRockGroupNum; // m_curRockGroupNum | Token: 0x4039537
        void* m_curShadowRockGroupNum; // m_curShadowRockGroupNum | Token: 0x4039538
        void* m_rockGroupFarClipPos; // m_rockGroupFarClipPos | Token: 0x4039539
        void* m_rockLayerMask; // m_rockLayerMask | Token: 0x403953a
        void* m_visRockGroupLOD0List; // m_visRockGroupLOD0List | Token: 0x403953b
        void* m_visRockGroupLOD1List; // m_visRockGroupLOD1List | Token: 0x403953c
        void* m_visLastRockGroupLOD1List; // m_visLastRockGroupLOD1List | Token: 0x403953d
        void* m_visRockGroupShadowList; // m_visRockGroupShadowList | Token: 0x403953e
        void* m_rockGroupLOD0Dict; // m_rockGroupLOD0Dict | Token: 0x403953f
        void* m_rockGroupLOD1Dict; // m_rockGroupLOD1Dict | Token: 0x4039540
        void* m_rockGroupShadowDict; // m_rockGroupShadowDict | Token: 0x4039541
        void* m_rockGridSize; // m_rockGridSize | Token: 0x4039542
        void* m_mapRockGridWidth; // m_mapRockGridWidth | Token: 0x4039543
        void* m_disGridRock0IDDict; // m_disGridRock0IDDict | Token: 0x4039544
        void* m_disGridRock1IDDict; // m_disGridRock1IDDict | Token: 0x4039545
        void* m_disGridRock2IDDict; // m_disGridRock2IDDict | Token: 0x4039546
        void* m_camera; // m_camera | Token: 0x4039547
        void* m_fadeSpeedCount; // m_fadeSpeedCount | Token: 0x4039548
        void* m_shadowMat; // m_shadowMat | Token: 0x4039549
        void* m_shadowRTMat; // m_shadowRTMat | Token: 0x403954a
        void* m_sceneGraphcisInst; // m_sceneGraphcisInst | Token: 0x403954b
        void* m_lightDir; // m_lightDir | Token: 0x403954c
        void* m_penLightDir; // m_penLightDir | Token: 0x403954d
        void* m_foundPotentialGridList; // m_foundPotentialGridList | Token: 0x403954e
        void* m_bigRockPreivewGO; // m_bigRockPreivewGO | Token: 0x403954f
        void* m_medRockPreivewGO; // m_medRockPreivewGO | Token: 0x4039550
        void* m_isPreviewDone; // m_isPreviewDone | Token: 0x4039551
        void* m_bigRocks; // m_bigRocks | Token: 0x4039552
        void* m_medRocks; // m_medRocks | Token: 0x4039553
        void* m_bigRocksRenderer; // m_bigRocksRenderer | Token: 0x4039554
        void* m_medRocksRenderer; // m_medRocksRenderer | Token: 0x4039555
        void* points; // points | Token: 0x4039556
        void* m_tmpVisCount; // m_tmpVisCount | Token: 0x4039557

        // Methods (22)
        // Method: t() | Slot: 103 | Token: 0x83
        using fn_t = void* (*)(RockSystem* __this);
        // Method: portHelper() | Slot: 65535 | Token: 0x6029748
        using fn_portHelper = void* (*)(RockSystem* __this);
        // Method: <GetTeamKillCount>b__0() | Slot: 131 | Token: 0xffffffff
        using fn__GetTeamKillCount_b__0 = void* (*)(RockSystem* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38730 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(RockSystem* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(RockSystem* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(RockSystem* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5f7b
        using fn_Method_6 = void* (*)(RockSystem* __this);
        // Method: eSplit(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_eSplit = void* (*)(RockSystem* __this, void* instCount);
        // Method: Method_8() | Slot: 24444 | Token: 0xffff
        using fn_Method_8 = void* (*)(RockSystem* __this);
        // Method: t() | Slot: 103 | Token: 0x83
        using fn_t = void* (*)(RockSystem* __this);
        // Method: Helper() | Slot: 65535 | Token: 0x6029750
        using fn_Helper = void* (*)(RockSystem* __this);
        // Method: <OnTeamScoreChanged>b__1() | Slot: 131 | Token: 0xffffffff
        using fn__OnTeamScoreChanged_b__1 = void* (*)(RockSystem* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38738 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(RockSystem* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(RockSystem* __this);
        // Method: Method_14() | Slot: 65535 | Token: 0x12545
        using fn_Method_14 = void* (*)(RockSystem* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x5f7f
        using fn_Method_15 = void* (*)(RockSystem* __this);
        // Method: it() | Slot: 53918 | Token: 0x1b78f
        using fn_it = void* (*)(RockSystem* __this);
        // Method: Method_17() | Slot: 24450 | Token: 0x1ffff
        using fn_Method_17 = void* (*)(RockSystem* __this);
        // Method: bum() | Slot: 42090 | Token: 0x1886
        using fn_bum = void* (*)(RockSystem* __this);
        // Method: ColliderList() | Slot: 6 | Token: 0x6029758
        using fn_ColliderList = void* (*)(RockSystem* __this);
        // Method: get_SplashBannerDataList() | Slot: 2182 | Token: 0xffffffff
        using fn_get_SplashBannerDataList = void* (*)(RockSystem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38746 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(RockSystem* __this);
    };

    // TypeDefIndex: 29420 | Original: COW.Graphics.SceneGraphics | Token: 0x20072e8
    struct SceneGraphics : Il2Cpp::Object {
        // Fields (165)
        void* m_terrainShadowTex; // m_terrainShadowTex | Token: 0x4039576
        void* m_waterGO; // m_waterGO | Token: 0x4039577
        void* m_waterMat; // m_waterMat | Token: 0x4039578
        void* m_lightDirection; // m_lightDirection | Token: 0x4039579
        void* m_waterPosition; // m_waterPosition | Token: 0x403957a
        void* m_mapWidth; // m_mapWidth | Token: 0x403957b
        void* m_mapHeight; // m_mapHeight | Token: 0x403957c
        void* m_mapStartPosX; // m_mapStartPosX | Token: 0x403957d
        void* m_mapStartPosZ; // m_mapStartPosZ | Token: 0x403957e
        void* m_mapCenterX; // m_mapCenterX | Token: 0x403957f
        void* m_mapCenterZ; // m_mapCenterZ | Token: 0x4039580
        void* m_shadowSizeX; // m_shadowSizeX | Token: 0x4039581
        void* m_shadowSizeZ; // m_shadowSizeZ | Token: 0x4039582
        void* m_hasProperties; // m_hasProperties | Token: 0x4039583
        void* m_forceOffFogSwitch; // m_forceOffFogSwitch | Token: 0x4039584
        void* m_landFogStartDensity; // m_landFogStartDensity | Token: 0x4039585
        void* m_landFogEndDensity; // m_landFogEndDensity | Token: 0x4039586
        void* m_landFogSwitchHeight; // m_landFogSwitchHeight | Token: 0x4039587
        void* m_landFogSwitchSpeed; // m_landFogSwitchSpeed | Token: 0x4039588
        void* m_switchDensInc; // m_switchDensInc | Token: 0x4039589
        void* m_curDensity; // m_curDensity | Token: 0x403958a
        void* m_fogDistantSwitch; // m_fogDistantSwitch | Token: 0x403958b
        void* m_fogDistantSwitchSpeed; // m_fogDistantSwitchSpeed | Token: 0x403958c
        void* m_skyFogDistantStart; // m_skyFogDistantStart | Token: 0x403958d
        void* m_skyFogDistantEnd; // m_skyFogDistantEnd | Token: 0x403958e
        void* m_landFogDistantStart; // m_landFogDistantStart | Token: 0x403958f
        void* m_landFogDistantEnd; // m_landFogDistantEnd | Token: 0x4039590
        void* m_switchStartDistInc; // m_switchStartDistInc | Token: 0x4039591
        void* m_switchEndDistInc; // m_switchEndDistInc | Token: 0x4039592
        void* m_curStartDistant; // m_curStartDistant | Token: 0x4039593
        void* m_curEndDistant; // m_curEndDistant | Token: 0x4039594
        void* m_switchFog; // m_switchFog | Token: 0x4039595
        void* m_vegPreviewHeight; // m_vegPreviewHeight | Token: 0x4039596
        void* m_treeGroupPSNum; // m_treeGroupPSNum | Token: 0x4039597
        void* m_isInVegPreview; // m_isInVegPreview | Token: 0x4039598
        void* lutTexture; // lutTexture | Token: 0x4039599
        void* skyboxColor; // skyboxColor | Token: 0x403959a
        void* charaLightIntensityOff; // charaLightIntensityOff | Token: 0x403959b
        void* charaLightIntensityOn; // charaLightIntensityOn | Token: 0x403959c
        void* _EnvLight; // _EnvLight | Token: 0x403959d
        void* m_dynamicGenGroupList; // m_dynamicGenGroupList | Token: 0x403959e
        void* m_camera; // m_camera | Token: 0x403959f
        void* m_switchWaterTrans; // m_switchWaterTrans | Token: 0x40395a0
        void* m_switchWaterTransSpeed; // m_switchWaterTransSpeed | Token: 0x40395a1
        void* m_waterTransThres; // m_waterTransThres | Token: 0x40395a2
        void* m_isWaterTransDone; // m_isWaterTransDone | Token: 0x40395a3
        void* m_posteffect; // m_posteffect | Token: 0x40395a4
        void* m_farWaterGO; // m_farWaterGO | Token: 0x40395a5
        void* m_farWaterColor; // m_farWaterColor | Token: 0x40395a6
        void* m_farWaterMat; // m_farWaterMat | Token: 0x40395a7
        void* m_farWaterFadeSpeed; // m_farWaterFadeSpeed | Token: 0x40395a8
        void* m_farWaterFadeCoeff; // m_farWaterFadeCoeff | Token: 0x40395a9
        void* m_isFarWaterFadeDone; // m_isFarWaterFadeDone | Token: 0x40395aa
        void* m_nearWaterGO; // m_nearWaterGO | Token: 0x40395ab
        void* skyboxOriginalColor; // skyboxOriginalColor | Token: 0x40395ac
        void* m_dynamicGeneratorMan; // m_dynamicGeneratorMan | Token: 0x40395ad
        void* m_Spectator; // m_Spectator | Token: 0x40395ae
        void* _SwitchCameraPerspective_k__BackingField; // <SwitchCameraPerspective>k__BackingField | Token: 0x40395af
        void* _SwitchCameraPerspectiveColor_k__BackingField; // <SwitchCameraPerspectiveColor>k__BackingField | Token: 0x40395b0
        void* m_graphQuality; // m_graphQuality | Token: 0x40395b1
        void* m_treeOrnamentGO; // m_treeOrnamentGO | Token: 0x40395b2
        void* m_nightSkyMat; // m_nightSkyMat | Token: 0x40395b3
        void* m_camTransform; // m_camTransform | Token: 0x40395b4
        void* m_snowFlakeGO; // m_snowFlakeGO | Token: 0x40395b5
        void* m_snowFlakeParticle; // m_snowFlakeParticle | Token: 0x40395b6
        void* m_snowFlakeEnable; // m_snowFlakeEnable | Token: 0x40395b7
        void* m_isNightMode; // m_isNightMode | Token: 0x40395b8
        void* m_forceOffNightMode; // m_forceOffNightMode | Token: 0x40395b9
        void* m_isDawnMode; // m_isDawnMode | Token: 0x40395ba
        void* m_forceOffDawnMode; // m_forceOffDawnMode | Token: 0x40395bb
        void* m_isSnowMode; // m_isSnowMode | Token: 0x40395bc
        void* m_forceOffSnowMode; // m_forceOffSnowMode | Token: 0x40395bd
        void* m_treeShadowMat; // m_treeShadowMat | Token: 0x40395be
        void* m_backLightEnabled; // m_backLightEnabled | Token: 0x40395bf
        void* m_backLightDir; // m_backLightDir | Token: 0x40395c0
        void* m_backLightColor; // m_backLightColor | Token: 0x40395c1
        void* m_terrainGO; // m_terrainGO | Token: 0x40395c2
        void* m_terrainRenderers; // m_terrainRenderers | Token: 0x40395c3
        void* m_terrainGOPreview; // m_terrainGOPreview | Token: 0x40395c4
        void* m_cloudGOPreview; // m_cloudGOPreview | Token: 0x40395c5
        void* m_buildingGOPreview; // m_buildingGOPreview | Token: 0x40395c6
        void* m_switchTerrainHeightStart; // m_switchTerrainHeightStart | Token: 0x40395c7
        void* m_switchTerrainHeightEnd; // m_switchTerrainHeightEnd | Token: 0x40395c8
        void* m_terrainMatDict; // m_terrainMatDict | Token: 0x40395c9
        void* m_previewTerrainLMDict; // m_previewTerrainLMDict | Token: 0x40395ca
        void* m_terrainMatList; // m_terrainMatList | Token: 0x40395cb
        void* m_terrainMatPreview; // m_terrainMatPreview | Token: 0x40395cc
        void* m_terrainMatPreviewOpaque; // m_terrainMatPreviewOpaque | Token: 0x40395cd
        void* m_terrainExchangeGO; // m_terrainExchangeGO | Token: 0x40395ce
        void* m_terrainExchangeRenderers; // m_terrainExchangeRenderers | Token: 0x40395cf
        void* m_terrainExchangeGOPreview; // m_terrainExchangeGOPreview | Token: 0x40395d0
        void* m_buildingExchangeGOPreview; // m_buildingExchangeGOPreview | Token: 0x40395d1
        void* m_terrainExchangeMatPreview; // m_terrainExchangeMatPreview | Token: 0x40395d2
        void* m_terrainExchangeMatPreviewOpaque; // m_terrainExchangeMatPreviewOpaque | Token: 0x40395d3
        void* m_terrainExchangeMatList; // m_terrainExchangeMatList | Token: 0x40395d4
        void* m_terrainExchangeMatDict; // m_terrainExchangeMatDict | Token: 0x40395d5
        void* m_previewTerrainExchangeLMDict; // m_previewTerrainExchangeLMDict | Token: 0x40395d6
        void* m_buildingExchangeMatPreviewArray; // m_buildingExchangeMatPreviewArray | Token: 0x40395d7
        void* m_blendingInnerRadius; // m_blendingInnerRadius | Token: 0x40395d8
        void* m_blendingOuterRadius; // m_blendingOuterRadius | Token: 0x40395d9
        void* m_cloudMatPreview; // m_cloudMatPreview | Token: 0x40395da
        void* m_buildingMatPreviewArray; // m_buildingMatPreviewArray | Token: 0x40395db
        void* m_buildMatNeedUnload; // m_buildMatNeedUnload | Token: 0x40395dc
        void* m_isHDMode; // m_isHDMode | Token: 0x40395dd
        void* m_switchTerrainDone; // m_switchTerrainDone | Token: 0x40395de
        void* m_unloadPreivewData; // m_unloadPreivewData | Token: 0x40395df
        void* m_sandStormGO; // m_sandStormGO | Token: 0x40395e0
        void* m_sandStormParticle; // m_sandStormParticle | Token: 0x40395e1
        void* m_sandStormEnable; // m_sandStormEnable | Token: 0x40395e2
        void* m_lowestFogDensity; // m_lowestFogDensity | Token: 0x40395e3
        void* m_IsDesertMap; // m_IsDesertMap | Token: 0x40395e4
        void* m_IsNeoParadiseMap; // m_IsNeoParadiseMap | Token: 0x40395e5
        void* m_IsWereWolvesMap; // m_IsWereWolvesMap | Token: 0x40395e6
        void* m_skyBoxSwitch; // m_skyBoxSwitch | Token: 0x40395e7
        void* m_sapSkyMat; // m_sapSkyMat | Token: 0x40395e8
        void* m_AvatarTraceMat; // m_AvatarTraceMat | Token: 0x40395e9
        void* m_TeammateMat; // m_TeammateMat | Token: 0x40395ea
        void* m_AvatarTraceSpecialMat; // m_AvatarTraceSpecialMat | Token: 0x40395eb
        void* m_TeammateSpecialMat; // m_TeammateSpecialMat | Token: 0x40395ec
        void* m_StencilMat; // m_StencilMat | Token: 0x40395ed
        void* m_AvatarTraceColorPropertyToID; // m_AvatarTraceColorPropertyToID | Token: 0x40395ee
        void* m_AvatarTraceMaxMinPropertyToID; // m_AvatarTraceMaxMinPropertyToID | Token: 0x40395ef
        void* m_AvatarTraceMaxWidthPropertyToID; // m_AvatarTraceMaxWidthPropertyToID | Token: 0x40395f0
        void* m_AvatarTraceMinWidthPropertyToID; // m_AvatarTraceMinWidthPropertyToID | Token: 0x40395f1
        void* m_AvatarTraceDepthlOpPropertyToID; // m_AvatarTraceDepthlOpPropertyToID | Token: 0x40395f2
        void* m_AvatarTraceStencilOpPropertyToID; // m_AvatarTraceStencilOpPropertyToID | Token: 0x40395f3
        void* CDNCONFIG_PONY_CDNID; // CDNCONFIG_PONY_CDNID | Token: 0x40395f4
        void* m_NeedOverridedTextures; // m_NeedOverridedTextures | Token: 0x40395f5
        void* m_RegistedDynamicMesh; // m_RegistedDynamicMesh | Token: 0x40395f6
        void* m_CurrentCDNUrl; // m_CurrentCDNUrl | Token: 0x40395f7
        void* m_NetworkMaterials; // m_NetworkMaterials | Token: 0x40395f8
        void* m_NetMatMap; // m_NetMatMap | Token: 0x40395f9
        void* m_IsRunningDownload; // m_IsRunningDownload | Token: 0x40395fa
        void* m_CurrentDownloadingGroup; // m_CurrentDownloadingGroup | Token: 0x40395fb
        void* m_CDNNetMatMap; // m_CDNNetMatMap | Token: 0x40395fc
        void* m_RegisteredCDNNetMatMap; // m_RegisteredCDNNetMatMap | Token: 0x40395fd
        void* m_ActivityTypeMatMap; // m_ActivityTypeMatMap | Token: 0x40395fe
        void* m_CDNUrlStyleAndTypeMap; // m_CDNUrlStyleAndTypeMap | Token: 0x40395ff
        void* m_AirTransPorterTextures; // m_AirTransPorterTextures | Token: 0x4039600
        void* m_CDNNetIdMap; // m_CDNNetIdMap | Token: 0x4039601
        void* InitTerrainPreviewProc; // InitTerrainPreviewProc | Token: 0x4039602
        void* PrepareTerrainPreviewOpaqueMatProc; // PrepareTerrainPreviewOpaqueMatProc | Token: 0x4039603
        void* TerrainPreviewBlendMatProc; // TerrainPreviewBlendMatProc | Token: 0x4039604
        void* ResumeTerrainMatProc; // ResumeTerrainMatProc | Token: 0x4039605
        void* NoPreviewInitTerrainProc; // NoPreviewInitTerrainProc | Token: 0x4039606
        void* m_EnableUpdateNearWaterForLowQuality; // m_EnableUpdateNearWaterForLowQuality | Token: 0x4039607
        void* m_TriggerUpdateNearWaterForLowQuality; // m_TriggerUpdateNearWaterForLowQuality | Token: 0x4039608
        void* m_PlayerHeight; // m_PlayerHeight | Token: 0x4039609
        void* m_UpdateNearWaterForLowQualityMats; // m_UpdateNearWaterForLowQualityMats | Token: 0x403960a
        void* EnvWeatherWaterMaterialsForABMap; // EnvWeatherWaterMaterialsForABMap | Token: 0x403960b
        void* CurTreeSystem; // CurTreeSystem | Token: 0x403960c
        void* CurGrassSystem; // CurGrassSystem | Token: 0x403960d
        void* CurVegetationManager; // CurVegetationManager | Token: 0x403960e
        void* m_NumStreamerCollider; // m_NumStreamerCollider | Token: 0x403960f
        void* m_FogColor; // m_FogColor | Token: 0x4039610
        void* m_FadeCoeff; // m_FadeCoeff | Token: 0x4039611
        void* m_MapPos; // m_MapPos | Token: 0x4039612
        void* m_NeedFade; // m_NeedFade | Token: 0x4039613
        void* m_TimeOverride; // m_TimeOverride | Token: 0x4039614
        void* m_FadeFactor; // m_FadeFactor | Token: 0x4039615
        void* m_ZWrite; // m_ZWrite | Token: 0x4039616
        void* m_WholeDiffuse; // m_WholeDiffuse | Token: 0x4039617
        void* m_Inited; // m_Inited | Token: 0x4039618
        void* m_backupSetting; // m_backupSetting | Token: 0x4039619
        void* m_overrideSetting; // m_overrideSetting | Token: 0x403961a

        // Methods (129)
        // Method: RecordSplashPopup() | Slot: 134 | Token: 0xffffffff
        using fn_RecordSplashPopup = void* (*)(SceneGraphics* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38754 | Token: 0x17e4a
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SceneGraphics* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(SceneGraphics* __this);
        // Method: Method_3() | Slot: 32332 | Token: 0x69c4
        using fn_Method_3 = void* (*)(SceneGraphics* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f84
        using fn_Method_4 = void* (*)(SceneGraphics* __this);
        // Method: posZ() | Slot: 27076 | Token: 0x450b80
        using fn_posZ = void* (*)(SceneGraphics* __this);
        // Method: Method_6() | Slot: 24452 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(SceneGraphics* __this);
        // Method: t() | Slot: 2989 | Token: 0x86
        using fn_t = void* (*)(SceneGraphics* __this);
        // Method: ColliderList() | Slot: 65535 | Token: 0x6029768
        using fn_ColliderList = void* (*)(SceneGraphics* __this);
        // Method: CheckCanShowByAccountID() | Slot: 134 | Token: 0xffffffff
        using fn_CheckCanShowByAccountID = void* (*)(SceneGraphics* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38762 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SceneGraphics* __this);
        // Method: __Field() | Slot: 65535 | Token: 0x8000000
        using fn___Field = void* (*)(SceneGraphics* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0x12545
        using fn_Method_12 = void* (*)(SceneGraphics* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x5f84
        using fn_Method_13 = void* (*)(SceneGraphics* __this);
        // Method: Z(void* cam) | Slot: 9541 | Token: 0x49aa
        using fn_Z = void* (*)(SceneGraphics* __this, void* cam);
        // Method: Method_15() | Slot: 24451 | Token: 0xffff
        using fn_Method_15 = void* (*)(SceneGraphics* __this);
        // Method: bum() | Slot: 3303 | Token: 0x1886
        using fn_bum = void* (*)(SceneGraphics* __this);
        // Method: (void* a, void* b) | Slot: 65535 | Token: 0x6029770
        using fn_unnamed = void* (*)(SceneGraphics* __this, void* a, void* b);
        // Method: get_IsJoinTeamSuccess() | Slot: 2182 | Token: 0xffffffff
        using fn_get_IsJoinTeamSuccess = void* (*)(SceneGraphics* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38770 | Token: 0x17e53
        using fn_GetExchangeCurrencySubType = void* (*)(SceneGraphics* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(SceneGraphics* __this);
        // Method: Method_21() | Slot: 65535 | Token: 0xd886
        using fn_Method_21 = void* (*)(SceneGraphics* __this);
        // Method: Method_22() | Slot: 0 | Token: 0x5f93
        using fn_Method_22 = void* (*)(SceneGraphics* __this);
        // Method: Method_23(void* pos) | Slot: 9541 | Token: 0x450eda
        using fn_Method_23 = void* (*)(SceneGraphics* __this, void* pos);
        // Method: Method_24() | Slot: 24467 | Token: 0x1ffff
        using fn_Method_24 = void* (*)(SceneGraphics* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 3843 | Token: 0x886
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(SceneGraphics* __this);
        // Method: portName() | Slot: 65535 | Token: 0x6029778
        using fn_portName = void* (*)(SceneGraphics* __this);
        // Method: get_LastTeamListRefreshTimeStamp() | Slot: 2182 | Token: 0xffffffff
        using fn_get_LastTeamListRefreshTimeStamp = void* (*)(SceneGraphics* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38778 | Token: 0x17e55
        using fn_GetExchangeCurrencySubType = void* (*)(SceneGraphics* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(SceneGraphics* __this);
        // Method: Method_30() | Slot: 32342 | Token: 0x12545
        using fn_Method_30 = void* (*)(SceneGraphics* __this);
        // Method: Method_31() | Slot: 0 | Token: 0x5f93
        using fn_Method_31 = void* (*)(SceneGraphics* __this);
        // Method: Method_32(void* pos) | Slot: 8434 | Token: 0x450fa6
        using fn_Method_32 = void* (*)(SceneGraphics* __this, void* pos);
        // Method: Method_33() | Slot: 24467 | Token: 0xffff
        using fn_Method_33 = void* (*)(SceneGraphics* __this);
        // Method: ntTriggerSpawnPointsObj() | Slot: 4063 | Token: 0x886
        using fn_ntTriggerSpawnPointsObj = void* (*)(SceneGraphics* __this);
        // Method: portName() | Slot: 65535 | Token: 0x6029780
        using fn_portName = void* (*)(SceneGraphics* __this);
        // Method: MarkValidInvitationDirty() | Slot: 129 | Token: 0xffffffff
        using fn_MarkValidInvitationDirty = void* (*)(SceneGraphics* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38786 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(SceneGraphics* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(SceneGraphics* __this);
        // Method: Method_39() | Slot: 65535 | Token: 0x69c4
        using fn_Method_39 = void* (*)(SceneGraphics* __this);
        // Method: Method_40() | Slot: 0 | Token: 0x5f93
        using fn_Method_40 = void* (*)(SceneGraphics* __this);
        // Method: Name() | Slot: 27076 | Token: 0x45108d
        using fn_Name = void* (*)(SceneGraphics* __this);
        // Method: Method_42() | Slot: 24467 | Token: 0x1ffff
        using fn_Method_42 = void* (*)(SceneGraphics* __this);
        // Method: bum() | Slot: 4275 | Token: 0x86
        using fn_bum = void* (*)(SceneGraphics* __this);
        // Method: portName() | Slot: 65535 | Token: 0x6029788
        using fn_portName = void* (*)(SceneGraphics* __this);
        // Method: ShouldShowLobbyV2PaymentRedDot() | Slot: 134 | Token: 0xffffffff
        using fn_ShouldShowLobbyV2PaymentRedDot = void* (*)(SceneGraphics* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38794 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(SceneGraphics* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(SceneGraphics* __this);
        // Method: Method_48() | Slot: 32346 | Token: 0x12545
        using fn_Method_48 = void* (*)(SceneGraphics* __this);
        // Method: Method_49() | Slot: 0 | Token: 0x5f93
        using fn_Method_49 = void* (*)(SceneGraphics* __this);
        // Method: Method_50() | Slot: 54036 | Token: 0x45112b
        using fn_Method_50 = void* (*)(SceneGraphics* __this);
        // Method: Method_51() | Slot: 24467 | Token: 0x1ffff
        using fn_Method_51 = void* (*)(SceneGraphics* __this);
        // Method: kSafeDoorId() | Slot: 4479 | Token: 0x86
        using fn_kSafeDoorId = void* (*)(SceneGraphics* __this);
        // Method: portName(void* recommendType) | Slot: 65535 | Token: 0x6029790
        using fn_portName = void* (*)(SceneGraphics* __this, void* recommendType);
        // Method: GetSquadTreasureRecommendInfoByGroupId() | Slot: 134 | Token: 0xffffffff
        using fn_GetSquadTreasureRecommendInfoByGroupId = void* (*)(SceneGraphics* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38802 | Token: 0x17e5f
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SceneGraphics* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SceneGraphics* __this);
        // Method: Method_57() | Slot: 32353 | Token: 0x69c4
        using fn_Method_57 = void* (*)(SceneGraphics* __this);
        // Method: Method_58() | Slot: 0 | Token: 0x5f93
        using fn_Method_58 = void* (*)(SceneGraphics* __this);
        // Method: Method_59() | Slot: 27076 | Token: 0x45123d
        using fn_Method_59 = void* (*)(SceneGraphics* __this);
        // Method: Method_60() | Slot: 24467 | Token: 0xffff
        using fn_Method_60 = void* (*)(SceneGraphics* __this);
        // Method: t() | Slot: 4704 | Token: 0x86
        using fn_t = void* (*)(SceneGraphics* __this);
        // Method: portName(void* topUpTeam) | Slot: 65535 | Token: 0x6029798
        using fn_portName = void* (*)(SceneGraphics* __this, void* topUpTeam);
        // Method: GetCanClaimRewardIdList() | Slot: 134 | Token: 0xffffffff
        using fn_GetCanClaimRewardIdList = void* (*)(SceneGraphics* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38810 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(SceneGraphics* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SceneGraphics* __this);
        // Method: Method_66() | Slot: 65535 | Token: 0x69c4
        using fn_Method_66 = void* (*)(SceneGraphics* __this);
        // Method: Method_67() | Slot: 0 | Token: 0x5f93
        using fn_Method_67 = void* (*)(SceneGraphics* __this);
        // Method: loaded(void* priority) | Slot: 9541 | Token: 0x4512ef
        using fn_loaded = void* (*)(SceneGraphics* __this, void* priority);
        // Method: Method_69() | Slot: 24467 | Token: 0x1ffff
        using fn_Method_69 = void* (*)(SceneGraphics* __this);
        // Method: bum() | Slot: 4891 | Token: 0x86
        using fn_bum = void* (*)(SceneGraphics* __this);
        // Method: portName() | Slot: 65535 | Token: 0x60297a0
        using fn_portName = void* (*)(SceneGraphics* __this);
        // Method: GetCurrentSquadTreasureTitleCDN() | Slot: 134 | Token: 0xffffffff
        using fn_GetCurrentSquadTreasureTitleCDN = void* (*)(SceneGraphics* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38818 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(SceneGraphics* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SceneGraphics* __this);
        // Method: Method_75() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_75 = void* (*)(SceneGraphics* __this);
        // Method: Method_76() | Slot: 0 | Token: 0x5f93
        using fn_Method_76 = void* (*)(SceneGraphics* __this);
        // Method: Method_77() | Slot: 27076 | Token: 0x4513d6
        using fn_Method_77 = void* (*)(SceneGraphics* __this);
        // Method: Method_78() | Slot: 24467 | Token: 0xffff
        using fn_Method_78 = void* (*)(SceneGraphics* __this);
        // Method: t() | Slot: 5131 | Token: 0x86
        using fn_t = void* (*)(SceneGraphics* __this);
        // Method: portName() | Slot: 65535 | Token: 0x60297a8
        using fn_portName = void* (*)(SceneGraphics* __this);
        // Method: ShouldShowSquadTreasureSticker() | Slot: 134 | Token: 0xffffffff
        using fn_ShouldShowSquadTreasureSticker = void* (*)(SceneGraphics* __this);
        // Method: _WAIT() | Slot: 38826 | Token: 0x17e6a
        using fn__WAIT = void* (*)(SceneGraphics* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SceneGraphics* __this);
        // Method: Method_84() | Slot: 65535 | Token: 0x1210a
        using fn_Method_84 = void* (*)(SceneGraphics* __this);
        // Method: Method_85() | Slot: 0 | Token: 0x5f93
        using fn_Method_85 = void* (*)(SceneGraphics* __this);
        // Method: Method_86(void* priority) | Slot: 9541 | Token: 0x4514ca
        using fn_Method_86 = void* (*)(SceneGraphics* __this, void* priority);
        // Method: Method_87() | Slot: 24467 | Token: 0xffff
        using fn_Method_87 = void* (*)(SceneGraphics* __this);
        // Method: g() | Slot: 5365 | Token: 0x86
        using fn_g = void* (*)(SceneGraphics* __this);
        // Method: portName(void* team) | Slot: 65535 | Token: 0x60297b0
        using fn_portName = void* (*)(SceneGraphics* __this, void* team);
        // Method: CheckMyTopupTeamIsFull() | Slot: 134 | Token: 0xffffffff
        using fn_CheckMyTopupTeamIsFull = void* (*)(SceneGraphics* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38834 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(SceneGraphics* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SceneGraphics* __this);
        // Method: Method_93() | Slot: 32366 | Token: 0xd3ef
        using fn_Method_93 = void* (*)(SceneGraphics* __this);
        // Method: Method_94() | Slot: 0 | Token: 0x5f93
        using fn_Method_94 = void* (*)(SceneGraphics* __this);
        // Method: Method_95(void* priority) | Slot: 9541 | Token: 0x45158b
        using fn_Method_95 = void* (*)(SceneGraphics* __this, void* priority);
        // Method: Method_96() | Slot: 24467 | Token: 0x1ffff
        using fn_Method_96 = void* (*)(SceneGraphics* __this);
        // Method: bum() | Slot: 5555 | Token: 0x86
        using fn_bum = void* (*)(SceneGraphics* __this);
        // Method: portName() | Slot: 65535 | Token: 0x60297b8
        using fn_portName = void* (*)(SceneGraphics* __this);
        // Method: CheckIsInvitationByFriendId() | Slot: 134 | Token: 0xffffffff
        using fn_CheckIsInvitationByFriendId = void* (*)(SceneGraphics* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38842 | Token: 0x17e71
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SceneGraphics* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SceneGraphics* __this);
        // Method: Method_102() | Slot: 32371 | Token: 0x69c4
        using fn_Method_102 = void* (*)(SceneGraphics* __this);
        // Method: Method_103() | Slot: 0 | Token: 0x5f93
        using fn_Method_103 = void* (*)(SceneGraphics* __this);
        // Method: Method_104(void* priority) | Slot: 8458 | Token: 0x45163f
        using fn_Method_104 = void* (*)(SceneGraphics* __this, void* priority);
        // Method: Method_105() | Slot: 24467 | Token: 0xffff
        using fn_Method_105 = void* (*)(SceneGraphics* __this);
        // Method: t() | Slot: 5741 | Token: 0x86
        using fn_t = void* (*)(SceneGraphics* __this);
        // Method: portName() | Slot: 65535 | Token: 0x60297c0
        using fn_portName = void* (*)(SceneGraphics* __this);
        // Method: HasTeamCreateCDFinished() | Slot: 134 | Token: 0xffffffff
        using fn_HasTeamCreateCDFinished = void* (*)(SceneGraphics* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38850 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(SceneGraphics* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SceneGraphics* __this);
        // Method: Method_111() | Slot: 65535 | Token: 0x12545
        using fn_Method_111 = void* (*)(SceneGraphics* __this);
        // Method: Method_112() | Slot: 0 | Token: 0x5f93
        using fn_Method_112 = void* (*)(SceneGraphics* __this);
        // Method: Method_113(void* priority) | Slot: 9541 | Token: 0x4516fa
        using fn_Method_113 = void* (*)(SceneGraphics* __this, void* priority);
        // Method: Method_114() | Slot: 24467 | Token: 0xffff
        using fn_Method_114 = void* (*)(SceneGraphics* __this);
        // Method: bum() | Slot: 5961 | Token: 0x81
        using fn_bum = void* (*)(SceneGraphics* __this);
        // Method: portName(void* createdTeamCount, void* lastCreatedTeamTimestamp) | Slot: 65535 | Token: 0x60297c8
        using fn_portName = void* (*)(SceneGraphics* __this, void* createdTeamCount, void* lastCreatedTeamTimestamp);
        // Method: RequestCreateTopUpTeam() | Slot: 134 | Token: 0xffffffff
        using fn_RequestCreateTopUpTeam = void* (*)(SceneGraphics* __this);
        // Method: _WAIT() | Slot: 38858 | Token: 0xffffffff
        using fn__WAIT = void* (*)(SceneGraphics* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SceneGraphics* __this);
        // Method: Method_120() | Slot: 32379 | Token: 0x12545
        using fn_Method_120 = void* (*)(SceneGraphics* __this);
        // Method: Method_121() | Slot: 0 | Token: 0x5f93
        using fn_Method_121 = void* (*)(SceneGraphics* __this);
        // Method: loadLimit(void* priority) | Slot: 9541 | Token: 0x451810
        using fn_loadLimit = void* (*)(SceneGraphics* __this, void* priority);
        // Method: Method_123() | Slot: 24467 | Token: 0x2ffff
        using fn_Method_123 = void* (*)(SceneGraphics* __this);
        // Method: bum() | Slot: 6208 | Token: 0x86
        using fn_bum = void* (*)(SceneGraphics* __this);
        // Method: portName(void* team, void* friendAccountId) | Slot: 65535 | Token: 0x60297d0
        using fn_portName = void* (*)(SceneGraphics* __this, void* team, void* friendAccountId);
        // Method: UpdateMyTeamData() | Slot: 129 | Token: 0xffffffff
        using fn_UpdateMyTeamData = void* (*)(SceneGraphics* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38866 | Token: 0x17e85
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SceneGraphics* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(SceneGraphics* __this);
    };

    // TypeDefIndex: 29421 | Original: COW.Graphics.SceneGraphicsParameters | Token: 0x20072ee
    struct SceneGraphicsParameters : Il2Cpp::Object {
        // Fields (3)
        void* FarWaterColor; // FarWaterColor | Token: 0x403962f
        void* Height; // Height | Token: 0x4039630
        void* FadeSpeed; // FadeSpeed | Token: 0x4039631
    };

    // TypeDefIndex: 29422 | Original: COW.Graphics.SceneGraphicsExtData | Token: 0x20072ef
    struct SceneGraphicsExtData : Il2Cpp::Object {
        // Fields (10)
        void* PreviewTerrainGO; // PreviewTerrainGO | Token: 0x4039632
        void* PreviewHouseGO; // PreviewHouseGO | Token: 0x4039633
        void* TerrainGO; // TerrainGO | Token: 0x4039634
        void* FarSeaWaterGO; // FarSeaWaterGO | Token: 0x4039635
        void* NearSeaWaterGO; // NearSeaWaterGO | Token: 0x4039636
        void* NearWaterGOList; // NearWaterGOList | Token: 0x4039637
        void* CloudPreviewGO; // CloudPreviewGO | Token: 0x4039638
        void* Parameters; // Parameters | Token: 0x4039639
        void* isBaseExtData; // isBaseExtData | Token: 0x403963a
        void* hasUpdated; // hasUpdated | Token: 0x403963b

        // Methods (2)
        // Method: Method_0(void* priority) | Slot: 9541 | Token: 0x4519cc
        using fn_Method_0 = void* (*)(SceneGraphicsExtData* __this, void* priority);
        // Method: Method_1() | Slot: 24467 | Token: 0xffff
        using fn_Method_1 = void* (*)(SceneGraphicsExtData* __this);
    };

    // TypeDefIndex: 29423 | Original: COW.Graphics.SceneObjectQualityManager | Token: 0x20072f0
    struct SceneObjectQualityManager : Il2Cpp::Object {
        // Fields (4)
        void* m_goList; // m_goList | Token: 0x403963c
        void* ActiveLowest; // ActiveLowest | Token: 0x403963d
        void* ActiveLow; // ActiveLow | Token: 0x403963e
        void* ActiveUltra; // ActiveUltra | Token: 0x403963f

        // Methods (3)
        // Method: bum() | Slot: 6666 | Token: 0x86
        using fn_bum = void* (*)(SceneObjectQualityManager* __this);
        // Method: portName() | Slot: 65535 | Token: 0x60297e0
        using fn_portName = void* (*)(SceneObjectQualityManager* __this);
        // Method: GetAllCachedCompletedTopUpTeamsCount() | Slot: 134 | Token: 0xffffffff
        using fn_GetAllCachedCompletedTopUpTeamsCount = void* (*)(SceneObjectQualityManager* __this);
    };

    // TypeDefIndex: 29424 | Original: COW.Graphics.TerrainTextureOverride | Token: 0x20072f1
    struct TerrainTextureOverride : Il2Cpp::Object {
        // Fields (6)
        void* textureNames; // textureNames | Token: 0x4039640
        void* texturePaths; // texturePaths | Token: 0x4039641
        void* textureHDPaths; // textureHDPaths | Token: 0x4039642
        void* textureSnowPaths; // textureSnowPaths | Token: 0x4039643
        void* sharedMat; // sharedMat | Token: 0x4039644
        void* renderer; // renderer | Token: 0x4039645

        // Methods (8)
        // Method: GetExchangeCurrencySubType() | Slot: 38882 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(TerrainTextureOverride* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(TerrainTextureOverride* __this);
        // Method: Method_2() | Slot: 32407 | Token: 0xd3ef
        using fn_Method_2 = void* (*)(TerrainTextureOverride* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f93
        using fn_Method_3 = void* (*)(TerrainTextureOverride* __this);
        // Method: adLimit(void* cutscene) | Slot: 9541 | Token: 0x451ab5
        using fn_adLimit = void* (*)(TerrainTextureOverride* __this, void* cutscene);
        // Method: Method_5() | Slot: 24467 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(TerrainTextureOverride* __this);
        // Method: bum() | Slot: 6901 | Token: 0x81
        using fn_bum = void* (*)(TerrainTextureOverride* __this);
        // Method: portName(void* ntf) | Slot: 65535 | Token: 0x60297e8
        using fn_portName = void* (*)(TerrainTextureOverride* __this, void* ntf);
    };

    // TypeDefIndex: 29428 | Original: COW.Graphics.TextureOverride | Token: 0x20072f2
    struct TextureOverride : Il2Cpp::Object {
        // Fields (6)
        void* materialIndex; // materialIndex | Token: 0x4039646
        void* textureNames; // textureNames | Token: 0x4039647
        void* texturePaths; // texturePaths | Token: 0x4039648
        void* overrideModeList; // overrideModeList | Token: 0x4039649
        void* renderer; // renderer | Token: 0x403964a
        void* needRegistActivityChanged; // needRegistActivityChanged | Token: 0x403964b

        // Methods (9)
        // Method: ProcessTopUpTeamInvitationNtf() | Slot: 129 | Token: 0xffffffff
        using fn_ProcessTopUpTeamInvitationNtf = void* (*)(TextureOverride* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38890 | Token: 0x17e9e
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(TextureOverride* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(TextureOverride* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(TextureOverride* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f93
        using fn_Method_4 = void* (*)(TextureOverride* __this);
        // Method: Method_5(void* priority) | Slot: 9541 | Token: 0x451b8d
        using fn_Method_5 = void* (*)(TextureOverride* __this, void* priority);
        // Method: Method_6() | Slot: 24467 | Token: 0xffff
        using fn_Method_6 = void* (*)(TextureOverride* __this);
        // Method: t() | Slot: 7097 | Token: 0x86
        using fn_t = void* (*)(TextureOverride* __this);
        // Method: portName() | Slot: 65535 | Token: 0x60297f0
        using fn_portName = void* (*)(TextureOverride* __this);
    };

    // TypeDefIndex: 29429 | Original: COW.Graphics.TreePreZ | Token: 0x20072f6
    struct TreePreZ : Il2Cpp::Object {
        // Fields (5)
        void* ShaderDepth; // ShaderDepth | Token: 0x4039656
        void* ShaderColor; // ShaderColor | Token: 0x4039657
        void* PREZV2; // PREZV2 | Token: 0x4039658
        void* m_EnablePreZPass; // m_EnablePreZPass | Token: 0x4039659
        void* m_EnablePreZV2Pass; // m_EnablePreZV2Pass | Token: 0x403965a

        // Methods (3)
        // Method: Method_0() | Slot: 32417 | Token: 0x12545
        using fn_Method_0 = void* (*)(TreePreZ* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f93
        using fn_Method_1 = void* (*)(TreePreZ* __this);
        // Method: osZLimitMove() | Slot: 55430 | Token: 0x451c51
        using fn_osZLimitMove = void* (*)(TreePreZ* __this);
    };

    // TypeDefIndex: 29443 | Original: COW.Graphics.TreeSystem | Token: 0x20072f7
    struct TreeSystem : Il2Cpp::Object {
        // Fields (156)
        void* m_instancingMatrix; // m_instancingMatrix | Token: 0x403965b
        void* m_debugSwitchTree; // m_debugSwitchTree | Token: 0x403965c
        void* m_debugSwitchVeg; // m_debugSwitchVeg | Token: 0x403965d
        void* m_vegetationTypeList; // m_vegetationTypeList | Token: 0x403965e
        void* m_distributionDataList; // m_distributionDataList | Token: 0x403965f
        void* m_BillboardList; // m_BillboardList | Token: 0x4039660
        void* m_vegetationTypeResIDList; // m_vegetationTypeResIDList | Token: 0x4039661
        void* m_vegetationBillboardResIDList; // m_vegetationBillboardResIDList | Token: 0x4039662
        void* m_vegetationPSBillboardResIDLIst; // m_vegetationPSBillboardResIDLIst | Token: 0x4039663
        void* m_cactusBillboard; // m_cactusBillboard | Token: 0x4039664
        void* m_palmBillboard; // m_palmBillboard | Token: 0x4039665
        void* m_whiteBirchBillboard; // m_whiteBirchBillboard | Token: 0x4039666
        void* m_shrub1Billboard; // m_shrub1Billboard | Token: 0x4039667
        void* m_shrub2Billboard; // m_shrub2Billboard | Token: 0x4039668
        void* m_shrub3Billboard; // m_shrub3Billboard | Token: 0x4039669
        void* m_shrub4Billboard; // m_shrub4Billboard | Token: 0x403966a
        void* m_cactusPSBillboard; // m_cactusPSBillboard | Token: 0x403966b
        void* m_palmPSBillboard; // m_palmPSBillboard | Token: 0x403966c
        void* m_whiteBirchPSBillboard; // m_whiteBirchPSBillboard | Token: 0x403966d
        void* m_shrub1PSBillboard; // m_shrub1PSBillboard | Token: 0x403966e
        void* m_shrub2PSBillboard; // m_shrub2PSBillboard | Token: 0x403966f
        void* m_shrub3PSBillboard; // m_shrub3PSBillboard | Token: 0x4039670
        void* m_shrub4PSBillboard; // m_shrub4PSBillboard | Token: 0x4039671
        void* m_simulationDataList; // m_simulationDataList | Token: 0x4039672
        void* m_vegetationDataList; // m_vegetationDataList | Token: 0x4039673
        void* m_ScaleTypeList; // m_ScaleTypeList | Token: 0x4039674
        void* m_RotationTypeList; // m_RotationTypeList | Token: 0x4039675
        void* m_TreeTypeRandMaskList; // m_TreeTypeRandMaskList | Token: 0x4039676
        void* m_TreeTypeRandList; // m_TreeTypeRandList | Token: 0x4039677
        void* m_maxScaleIDType; // m_maxScaleIDType | Token: 0x4039678
        void* m_attachTreeMeshParent; // m_attachTreeMeshParent | Token: 0x4039679
        void* m_potentVisTreeList; // m_potentVisTreeList | Token: 0x403967a
        void* m_potentVisShadowTreeList; // m_potentVisShadowTreeList | Token: 0x403967b
        void* m_visibleTreeGroupList; // m_visibleTreeGroupList | Token: 0x403967c
        void* m_visibleShadowTreeGroupList; // m_visibleShadowTreeGroupList | Token: 0x403967d
        void* m_visibleTreeInstanceList; // m_visibleTreeInstanceList | Token: 0x403967e
        void* m_visibleShadowTreeInstanceList; // m_visibleShadowTreeInstanceList | Token: 0x403967f
        void* m_graphicsQualityVeg; // m_graphicsQualityVeg | Token: 0x4039680
        void* m_qualityVegID; // m_qualityVegID | Token: 0x4039681
        void* m_graphQualityVegID; // m_graphQualityVegID | Token: 0x4039682
        void* m_mapWidth; // m_mapWidth | Token: 0x4039683
        void* m_mapHeight; // m_mapHeight | Token: 0x4039684
        void* m_mapStartPosX; // m_mapStartPosX | Token: 0x4039685
        void* m_mapStartPosZ; // m_mapStartPosZ | Token: 0x4039686
        void* m_distToCamera; // m_distToCamera | Token: 0x4039687
        void* m_globalTreeColorList; // m_globalTreeColorList | Token: 0x4039688
        void* m_treeBillboardNum; // m_treeBillboardNum | Token: 0x4039689
        void* m_treeBillboardVertsNum; // m_treeBillboardVertsNum | Token: 0x403968a
        void* m_newTreeBillboardNum; // m_newTreeBillboardNum | Token: 0x403968b
        void* m_newTreeBillboardVertsNum; // m_newTreeBillboardVertsNum | Token: 0x403968c
        void* m_treeGroupIndNum; // m_treeGroupIndNum | Token: 0x403968d
        void* m_curTreeGroupNum; // m_curTreeGroupNum | Token: 0x403968e
        void* m_curShadowTreeGroupNum; // m_curShadowTreeGroupNum | Token: 0x403968f
        void* m_treeInstanceIndNum; // m_treeInstanceIndNum | Token: 0x4039690
        void* m_curTreeInstancingNum; // m_curTreeInstancingNum | Token: 0x4039691
        void* m_curShadowTreeInstancingNum; // m_curShadowTreeInstancingNum | Token: 0x4039692
        void* m_curBillboardTreeInstancingNum; // m_curBillboardTreeInstancingNum | Token: 0x4039693
        void* m_curPSBillboardTreeInstancingNum; // m_curPSBillboardTreeInstancingNum | Token: 0x4039694
        void* m_treeGroupMax; // m_treeGroupMax | Token: 0x4039695
        void* m_treeGroupLowPSTotal; // m_treeGroupLowPSTotal | Token: 0x4039696
        void* m_treeGroupLowTotal; // m_treeGroupLowTotal | Token: 0x4039697
        void* m_treeGroupFarClipPos; // m_treeGroupFarClipPos | Token: 0x4039698
        void* m_treeGroupRandomScale; // m_treeGroupRandomScale | Token: 0x4039699
        void* m_treeGroupLowInfoDict; // m_treeGroupLowInfoDict | Token: 0x403969a
        void* m_PStreeGroupLowInfoDict; // m_PStreeGroupLowInfoDict | Token: 0x403969b
        void* m_treeGroupLowIndices; // m_treeGroupLowIndices | Token: 0x403969c
        void* m_treeGroupLowPSIndices; // m_treeGroupLowPSIndices | Token: 0x403969d
        void* m_treeGroupLowVertsTmp; // m_treeGroupLowVertsTmp | Token: 0x403969e
        void* m_treeGroupLowPSVertsTmp; // m_treeGroupLowPSVertsTmp | Token: 0x403969f
        void* m_treeGroupLowUVsTmp; // m_treeGroupLowUVsTmp | Token: 0x40396a0
        void* m_treeGroupLowPSUVsTmp; // m_treeGroupLowPSUVsTmp | Token: 0x40396a1
        void* m_treeGroupLowMesh; // m_treeGroupLowMesh | Token: 0x40396a2
        void* m_treeGroupLowPSMesh; // m_treeGroupLowPSMesh | Token: 0x40396a3
        void* m_treeInstanceLowMesh; // m_treeInstanceLowMesh | Token: 0x40396a4
        void* m_treeGroupLowPos; // m_treeGroupLowPos | Token: 0x40396a5
        void* m_treeFarMat; // m_treeFarMat | Token: 0x40396a6
        void* m_treeFarDepthMat; // m_treeFarDepthMat | Token: 0x40396a7
        void* m_treeLayerMask; // m_treeLayerMask | Token: 0x40396a8
        void* m_treeFarLayerMask; // m_treeFarLayerMask | Token: 0x40396a9
        void* m_visTreeGroupLOD0List; // m_visTreeGroupLOD0List | Token: 0x40396aa
        void* m_visTreeGroupLOD1List; // m_visTreeGroupLOD1List | Token: 0x40396ab
        void* m_visTreeGroupFarList; // m_visTreeGroupFarList | Token: 0x40396ac
        void* m_visTreeGroupShadowList; // m_visTreeGroupShadowList | Token: 0x40396ad
        void* m_visBushGroupLOD0List; // m_visBushGroupLOD0List | Token: 0x40396ae
        void* m_visBushGroupLOD1List; // m_visBushGroupLOD1List | Token: 0x40396af
        void* m_treeGroupLOD0Dict; // m_treeGroupLOD0Dict | Token: 0x40396b0
        void* m_treeGroupLOD1Dict; // m_treeGroupLOD1Dict | Token: 0x40396b1
        void* m_treeGroupShadowDict; // m_treeGroupShadowDict | Token: 0x40396b2
        void* m_treeGridSize; // m_treeGridSize | Token: 0x40396b3
        void* m_mapTreeGridWidth; // m_mapTreeGridWidth | Token: 0x40396b4
        void* m_disGridTreeIDDict; // m_disGridTreeIDDict | Token: 0x40396b5
        void* m_camera; // m_camera | Token: 0x40396b6
        void* m_fadeSpeedCount; // m_fadeSpeedCount | Token: 0x40396b7
        void* m_maxfadeSpeedCount; // m_maxfadeSpeedCount | Token: 0x40396b8
        void* m_lastCamPos; // m_lastCamPos | Token: 0x40396b9
        void* BASE_START_LERP_SPEED; // BASE_START_LERP_SPEED | Token: 0x40396ba
        void* BASE_MAX_LERP_SPEED; // BASE_MAX_LERP_SPEED | Token: 0x40396bb
        void* START_LERP_SPEED; // START_LERP_SPEED | Token: 0x40396bc
        void* MAX_LERP_SPEED; // MAX_LERP_SPEED | Token: 0x40396bd
        void* m_treeScaleBias; // m_treeScaleBias | Token: 0x40396be
        void* m_treeTypeBias; // m_treeTypeBias | Token: 0x40396bf
        void* m_IsVariableTreeTypeBias; // m_IsVariableTreeTypeBias | Token: 0x40396c0
        void* m_allTreeArray; // m_allTreeArray | Token: 0x40396c1
        void* m_newTreeList; // m_newTreeList | Token: 0x40396c2
        void* m_visTreePosID; // m_visTreePosID | Token: 0x40396c3
        void* m_shadowMat; // m_shadowMat | Token: 0x40396c4
        void* m_shadowRTMat; // m_shadowRTMat | Token: 0x40396c5
        void* m_sceneGraphcisInst; // m_sceneGraphcisInst | Token: 0x40396c6
        void* m_lightDir; // m_lightDir | Token: 0x40396c7
        void* m_penLightDir; // m_penLightDir | Token: 0x40396c8
        void* m_treeGroupLowMeshDirty; // m_treeGroupLowMeshDirty | Token: 0x40396c9
        void* m_foundPotentialGridList; // m_foundPotentialGridList | Token: 0x40396ca
        void* m_isRecalculateBound; // m_isRecalculateBound | Token: 0x40396cb
        void* m_freeGroupInoList; // m_freeGroupInoList | Token: 0x40396cc
        void* m_usedGroupInoList; // m_usedGroupInoList | Token: 0x40396cd
        void* m_treeRootGO; // m_treeRootGO | Token: 0x40396ce
        void* m_grassSystem; // m_grassSystem | Token: 0x40396cf
        void* m_EnablePreZPass; // m_EnablePreZPass | Token: 0x40396d0
        void* m_EnablePreZV2Pass; // m_EnablePreZV2Pass | Token: 0x40396d1
        void* m_UseHoudiniData; // m_UseHoudiniData | Token: 0x40396d2
        void* m_FadeInOutRatio; // m_FadeInOutRatio | Token: 0x40396d3
        void* FadeInSpeed; // FadeInSpeed | Token: 0x40396d4
        void* FadeOutSpeed; // FadeOutSpeed | Token: 0x40396d5
        void* m_FadeInSpeed; // m_FadeInSpeed | Token: 0x40396d6
        void* m_FadeOutSpeed; // m_FadeOutSpeed | Token: 0x40396d7
        void* STARDFRAMRATE; // STARDFRAMRATE | Token: 0x40396d8
        void* m_frameRatio; // m_frameRatio | Token: 0x40396d9
        void* m_SpeedInterval; // m_SpeedInterval | Token: 0x40396da
        void* m_treeMatTextures; // m_treeMatTextures | Token: 0x40396db
        void* s_MatPropIDPosMatrix0; // s_MatPropIDPosMatrix0 | Token: 0x40396dc
        void* s_MatPropIDPosMatrix1; // s_MatPropIDPosMatrix1 | Token: 0x40396dd
        void* s_MatPropIDPosBias; // s_MatPropIDPosBias | Token: 0x40396de
        void* m_ponyMapChangeTreeMaxNum; // m_ponyMapChangeTreeMaxNum | Token: 0x40396df
        void* m_ponyTreeGridSort; // m_ponyTreeGridSort | Token: 0x40396e0
        void* m_ponyMapViewFarRatio; // m_ponyMapViewFarRatio | Token: 0x40396e1
        void* m_GirdList; // m_GirdList | Token: 0x40396e2
        void* m_GridInfoPool; // m_GridInfoPool | Token: 0x40396e3
        void* m_firstTreeID; // m_firstTreeID | Token: 0x40396e4
        void* m_IsNeoParadise; // m_IsNeoParadise | Token: 0x40396e5
        void* m_IsNeoParadiseMax; // m_IsNeoParadiseMax | Token: 0x40396e6
        void* m_IsWorkShop; // m_IsWorkShop | Token: 0x40396e7
        void* m_IsSonoran; // m_IsSonoran | Token: 0x40396e8
        void* m_IsShangrila; // m_IsShangrila | Token: 0x40396e9
        void* m_IsHippo; // m_IsHippo | Token: 0x40396ea
        void* m_IsPony; // m_IsPony | Token: 0x40396eb
        void* m_UseSecondRotMatrix; // m_UseSecondRotMatrix | Token: 0x40396ec
        void* m_SupportedInstancing; // m_SupportedInstancing | Token: 0x40396ed
        void* m_EnableSplitUpdate; // m_EnableSplitUpdate | Token: 0x40396ee
        void* bFindPotention; // bFindPotention | Token: 0x40396ef
        void* points; // points | Token: 0x40396f0
        void* bBuildTree; // bBuildTree | Token: 0x40396f1
        void* bDrawTree; // bDrawTree | Token: 0x40396f2
        void* m_tmpVisCount; // m_tmpVisCount | Token: 0x40396f3
        void* m_tmpVisTreeID; // m_tmpVisTreeID | Token: 0x40396f4
        void* m_UseFEData; // m_UseFEData | Token: 0x40396f5
        void* m_FETreeData; // m_FETreeData | Token: 0x40396f6

        // Methods (75)
        // Method: Method_0() | Slot: 24467 | Token: 0x1ffff
        using fn_Method_0 = void* (*)(TreeSystem* __this);
        // Method: bum() | Slot: 18858 | Token: 0x1886
        using fn_bum = void* (*)(TreeSystem* __this);
        // Method: portName() | Slot: 65535 | Token: 0x60297f8
        using fn_portName = void* (*)(TreeSystem* __this);
        // Method: <GetCurrentSquadTreasureTitleCDN>b__129_0() | Slot: 129 | Token: 0xffffffff
        using fn__GetCurrentSquadTreasureTitleCDN_b__129_0 = void* (*)(TreeSystem* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38906 | Token: 0x17ea5
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(TreeSystem* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(TreeSystem* __this);
        // Method: Method_6() | Slot: 32423 | Token: 0x69c4
        using fn_Method_6 = void* (*)(TreeSystem* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x5f93
        using fn_Method_7 = void* (*)(TreeSystem* __this);
        // Method: itMove(void* priority) | Slot: 9541 | Token: 0x451d33
        using fn_itMove = void* (*)(TreeSystem* __this, void* priority);
        // Method: Method_9() | Slot: 24467 | Token: 0x2ffff
        using fn_Method_9 = void* (*)(TreeSystem* __this);
        // Method: bum() | Slot: 7549 | Token: 0x81
        using fn_bum = void* (*)(TreeSystem* __this);
        // Method: portName(void* errorCode, void* res) | Slot: 65535 | Token: 0x6029800
        using fn_portName = void* (*)(TreeSystem* __this, void* errorCode, void* res);
        // Method: <RequestLeaveTopUpTeam>b__182_0() | Slot: 129 | Token: 0xffffffff
        using fn__RequestLeaveTopUpTeam_b__182_0 = void* (*)(TreeSystem* __this);
        // Method: _WAIT() | Slot: 38914 | Token: 0x17eb1
        using fn__WAIT = void* (*)(TreeSystem* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(TreeSystem* __this);
        // Method: Method_15() | Slot: 32437 | Token: 0x12545
        using fn_Method_15 = void* (*)(TreeSystem* __this);
        // Method: Method_16() | Slot: 0 | Token: 0x5f8a
        using fn_Method_16 = void* (*)(TreeSystem* __this);
        // Method: Method_17(void* preferredMethod) | Slot: 9541 | Token: 0x67
        using fn_Method_17 = void* (*)(TreeSystem* __this, void* preferredMethod);
        // Method: Method_18() | Slot: 24458 | Token: 0xffff
        using fn_Method_18 = void* (*)(TreeSystem* __this);
        // Method: Interval() | Slot: 9815 | Token: 0x83
        using fn_Interval = void* (*)(TreeSystem* __this);
        // Method: erList(void* a, void* b) | Slot: 65535 | Token: 0x6029808
        using fn_erList = void* (*)(TreeSystem* __this, void* a, void* b);
        // Method: <RequestClaimTopUpTeamAward>b__183_0() | Slot: 131 | Token: 0xffffffff
        using fn__RequestClaimTopUpTeamAward_b__183_0 = void* (*)(TreeSystem* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38922 | Token: 0x17ebb
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(TreeSystem* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(TreeSystem* __this);
        // Method: Method_24() | Slot: 32446 | Token: 0xa52f
        using fn_Method_24 = void* (*)(TreeSystem* __this);
        // Method: Method_25() | Slot: 0 | Token: 0x5f8a
        using fn_Method_25 = void* (*)(TreeSystem* __this);
        // Method: eNameID(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_eNameID = void* (*)(TreeSystem* __this, void* instCount);
        // Method: Method_27() | Slot: 24459 | Token: 0xffff
        using fn_Method_27 = void* (*)(TreeSystem* __this);
        // Method: bum() | Slot: 103 | Token: 0x83
        using fn_bum = void* (*)(TreeSystem* __this);
        // Method: List() | Slot: 65535 | Token: 0x6029810
        using fn_List = void* (*)(TreeSystem* __this);
        // Method: <RequestJoinTopUpTeam>b__0() | Slot: 131 | Token: 0xffffffff
        using fn__RequestJoinTopUpTeam_b__0 = void* (*)(TreeSystem* __this);
        // Method: _WAIT() | Slot: 38930 | Token: 0xffffffff
        using fn__WAIT = void* (*)(TreeSystem* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(TreeSystem* __this);
        // Method: Method_33() | Slot: 65535 | Token: 0x12545
        using fn_Method_33 = void* (*)(TreeSystem* __this);
        // Method: Method_34() | Slot: 0 | Token: 0x5f8e
        using fn_Method_34 = void* (*)(TreeSystem* __this);
        // Method: (void* instCount) | Slot: 9541 | Token: 0x67
        using fn_unnamed = void* (*)(TreeSystem* __this, void* instCount);
        // Method: Method_36() | Slot: 24463 | Token: 0xffff
        using fn_Method_36 = void* (*)(TreeSystem* __this);
        // Method: bum() | Slot: 103 | Token: 0x83
        using fn_bum = void* (*)(TreeSystem* __this);
        // Method: () | Slot: 65535 | Token: 0x6029818
        using fn_unnamed = void* (*)(TreeSystem* __this);
        // Method: <RequestSendTopUpTeamInvitations>b__0() | Slot: 131 | Token: 0xffffffff
        using fn__RequestSendTopUpTeamInvitations_b__0 = void* (*)(TreeSystem* __this);
        // Method: _WAIT() | Slot: 38938 | Token: 0xffffffff
        using fn__WAIT = void* (*)(TreeSystem* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(TreeSystem* __this);
        // Method: Method_42() | Slot: 65535 | Token: 0x12545
        using fn_Method_42 = void* (*)(TreeSystem* __this);
        // Method: Method_43() | Slot: 0 | Token: 0x5f92
        using fn_Method_43 = void* (*)(TreeSystem* __this);
        // Method: ildID() | Slot: 6636 | Token: 0x452867
        using fn_ildID = void* (*)(TreeSystem* __this);
        // Method: Method_45() | Slot: 24472 | Token: 0xffff
        using fn_Method_45 = void* (*)(TreeSystem* __this);
        // Method: t() | Slot: 35637 | Token: 0x86
        using fn_t = void* (*)(TreeSystem* __this);
        // Method: ame(void* bundleID) | Slot: 65535 | Token: 0x6029820
        using fn_ame = void* (*)(TreeSystem* __this, void* bundleID);
        // Method: get_StoreOptionalBundleDict() | Slot: 2182 | Token: 0xffffffff
        using fn_get_StoreOptionalBundleDict = void* (*)(TreeSystem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38946 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(TreeSystem* __this);
        // Method: BuffFactor() | Slot: 65535 | Token: 0x8000000
        using fn_BuffFactor = void* (*)(TreeSystem* __this);
        // Method: Method_51() | Slot: 32469 | Token: 0x69c4
        using fn_Method_51 = void* (*)(TreeSystem* __this);
        // Method: Method_52() | Slot: 0 | Token: 0x5f98
        using fn_Method_52 = void* (*)(TreeSystem* __this);
        // Method: eneStreamerInfo(void* priority) | Slot: 8434 | Token: 0x21a46a
        using fn_eneStreamerInfo = void* (*)(TreeSystem* __this, void* priority);
        // Method: Method_54() | Slot: 24472 | Token: 0x6
        using fn_Method_54 = void* (*)(TreeSystem* __this);
        // Method: bum() | Slot: 10546 | Token: 0x86
        using fn_bum = void* (*)(TreeSystem* __this);
        // Method: ame() | Slot: 65535 | Token: 0x6029828
        using fn_ame = void* (*)(TreeSystem* __this);
        // Method: FindData() | Slot: 129 | Token: 0xffffffff
        using fn_FindData = void* (*)(TreeSystem* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38954 | Token: 0x17eda
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(TreeSystem* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(TreeSystem* __this);
        // Method: Method_60() | Slot: 32476 | Token: 0x12545
        using fn_Method_60 = void* (*)(TreeSystem* __this);
        // Method: Method_61() | Slot: 0 | Token: 0x5f98
        using fn_Method_61 = void* (*)(TreeSystem* __this);
        // Method: amerInfo(void* priority) | Slot: 9541 | Token: 0x4529b3
        using fn_amerInfo = void* (*)(TreeSystem* __this, void* priority);
        // Method: Method_63() | Slot: 24472 | Token: 0x1ffff
        using fn_Method_63 = void* (*)(TreeSystem* __this);
        // Method: bum() | Slot: 10737 | Token: 0x86
        using fn_bum = void* (*)(TreeSystem* __this);
        // Method: ame() | Slot: 65535 | Token: 0x6029830
        using fn_ame = void* (*)(TreeSystem* __this);
        // Method: ProcessBundleUpdateLocal() | Slot: 134 | Token: 0xffffffff
        using fn_ProcessBundleUpdateLocal = void* (*)(TreeSystem* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 38962 | Token: 0x17ee3
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(TreeSystem* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(TreeSystem* __this);
        // Method: Method_69() | Slot: 32486 | Token: 0x12545
        using fn_Method_69 = void* (*)(TreeSystem* __this);
        // Method: Method_70() | Slot: 0 | Token: 0x5f98
        using fn_Method_70 = void* (*)(TreeSystem* __this);
        // Method: sceneUnloadOperation(void* priority) | Slot: 9541 | Token: 0x452a9a
        using fn_sceneUnloadOperation = void* (*)(TreeSystem* __this, void* priority);
        // Method: Method_72() | Slot: 24472 | Token: 0xffff
        using fn_Method_72 = void* (*)(TreeSystem* __this);
        // Method: bum() | Slot: 10961 | Token: 0x86
        using fn_bum = void* (*)(TreeSystem* __this);
        // Method: ame(void* bundleId, void* includeTailorAdvance) | Slot: 65535 | Token: 0x6029838
        using fn_ame = void* (*)(TreeSystem* __this, void* bundleId, void* includeTailorAdvance);
    };

    // TypeDefIndex: 29444 | Original: COW.Graphics.TreeSystemAppendingData | Token: 0x2007305
    struct TreeSystemAppendingData : Il2Cpp::Object {
        // Fields (51)
        void* _TreeDataId; // _TreeDataId | Token: 0x403973c
        void* m_treeDataId; // m_treeDataId | Token: 0x403973d
        void* Name; // Name | Token: 0x403973e
        void* m_treeDistributionDataList; // m_treeDistributionDataList | Token: 0x403973f
        void* m_shrubDistributionDataList; // m_shrubDistributionDataList | Token: 0x4039740
        void* m_distributionDataList; // m_distributionDataList | Token: 0x4039741
        void* m_potentVisTreeList; // m_potentVisTreeList | Token: 0x4039742
        void* m_foundPotentialGridList; // m_foundPotentialGridList | Token: 0x4039743
        void* m_disGridTreeIDDict; // m_disGridTreeIDDict | Token: 0x4039744
        void* m_potentVisShadowTreeList; // m_potentVisShadowTreeList | Token: 0x4039745
        void* m_visTreeGroupLOD0List; // m_visTreeGroupLOD0List | Token: 0x4039746
        void* m_visTreeGroupLOD1List; // m_visTreeGroupLOD1List | Token: 0x4039747
        void* m_visTreeGroupShadowList; // m_visTreeGroupShadowList | Token: 0x4039748
        void* m_visTreeGroupFarList; // m_visTreeGroupFarList | Token: 0x4039749
        void* m_treeGroupLOD0Dict; // m_treeGroupLOD0Dict | Token: 0x403974a
        void* m_treeGroupLOD1Dict; // m_treeGroupLOD1Dict | Token: 0x403974b
        void* m_treeGroupShadowDict; // m_treeGroupShadowDict | Token: 0x403974c
        void* m_simulationDataList; // m_simulationDataList | Token: 0x403974d
        void* m_visBushGroupLOD0List; // m_visBushGroupLOD0List | Token: 0x403974e
        void* m_visBushGroupLOD1List; // m_visBushGroupLOD1List | Token: 0x403974f
        void* m_visibleTreeGroupList; // m_visibleTreeGroupList | Token: 0x4039750
        void* m_visibleShadowTreeGroupList; // m_visibleShadowTreeGroupList | Token: 0x4039751
        void* m_freeGroupInoList; // m_freeGroupInoList | Token: 0x4039752
        void* m_usedGroupInoList; // m_usedGroupInoList | Token: 0x4039753
        void* m_treeGroupMax; // m_treeGroupMax | Token: 0x4039754
        void* m_treeGroupLowTotal; // m_treeGroupLowTotal | Token: 0x4039755
        void* m_newTreeList; // m_newTreeList | Token: 0x4039756
        void* m_allTreeArray; // m_allTreeArray | Token: 0x4039757
        void* m_visTreePosID; // m_visTreePosID | Token: 0x4039758
        void* m_treeGroupLowVertsTmp; // m_treeGroupLowVertsTmp | Token: 0x4039759
        void* m_treeGroupLowPSVertsTmp; // m_treeGroupLowPSVertsTmp | Token: 0x403975a
        void* m_treeGroupLowUVsTmp; // m_treeGroupLowUVsTmp | Token: 0x403975b
        void* m_treeGroupLowPSUVsTmp; // m_treeGroupLowPSUVsTmp | Token: 0x403975c
        void* m_treeGroupLowMesh; // m_treeGroupLowMesh | Token: 0x403975d
        void* m_treeGroupLowPSMesh; // m_treeGroupLowPSMesh | Token: 0x403975e
        void* m_treeGroupLowIndices; // m_treeGroupLowIndices | Token: 0x403975f
        void* m_treeGroupLowPSIndices; // m_treeGroupLowPSIndices | Token: 0x4039760
        void* m_curTreeGroupNum; // m_curTreeGroupNum | Token: 0x4039761
        void* m_curShadowTreeGroupNum; // m_curShadowTreeGroupNum | Token: 0x4039762
        void* m_curTreeInstancingNum; // m_curTreeInstancingNum | Token: 0x4039763
        void* m_curShadowTreeInstancingNum; // m_curShadowTreeInstancingNum | Token: 0x4039764
        void* m_curBillboardTreeInstancingNum; // m_curBillboardTreeInstancingNum | Token: 0x4039765
        void* m_curPSBillboardTreeInstancingNum; // m_curPSBillboardTreeInstancingNum | Token: 0x4039766
        void* m_visibleTreeInstanceList; // m_visibleTreeInstanceList | Token: 0x4039767
        void* m_visibleShadowTreeInstanceList; // m_visibleShadowTreeInstanceList | Token: 0x4039768
        void* m_tmpVisCount; // m_tmpVisCount | Token: 0x4039769
        void* m_tmpVisTreeID; // m_tmpVisTreeID | Token: 0x403976a
        void* m_treeTypeBias; // m_treeTypeBias | Token: 0x403976b
        void* m_isRecalculateBound; // m_isRecalculateBound | Token: 0x403976c
        void* m_HasShrub; // m_HasShrub | Token: 0x403976d
        void* m_HasTree; // m_HasTree | Token: 0x403976e

        // Methods (7)
        // Method: Method_0() | Slot: 24471 | Token: 0x2ffff
        using fn_Method_0 = void* (*)(TreeSystemAppendingData* __this);
        // Method: bum() | Slot: 11859 | Token: 0x1886
        using fn_bum = void* (*)(TreeSystemAppendingData* __this);
        // Method: Name(void* errorCode, void* res) | Slot: 65535 | Token: 0x6029850
        using fn_Name = void* (*)(TreeSystemAppendingData* __this, void* errorCode, void* res);
        // Method: GetModelType() | Slot: 198 | Token: 0xffffffff
        using fn_GetModelType = void* (*)(TreeSystemAppendingData* __this);
        // Method: ly-CSharp() | Slot: 38994 | Token: 0xffffffff
        using fn_ly_CSharp = void* (*)(TreeSystemAppendingData* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(TreeSystemAppendingData* __this);
        // Method: Method_6() | Slot: 32511 | Token: 0x12545
        using fn_Method_6 = void* (*)(TreeSystemAppendingData* __this);
    };

    // TypeDefIndex: 29446 | Original: COW.Graphics.UGCPhotoFilter | Token: 0x2007306
    struct UGCPhotoFilter : Il2Cpp::Object {
        // Fields (38)
        void* SHADER_NAME; // SHADER_NAME | Token: 0x403976f
        void* SHADER_RESOURCE_NAME; // SHADER_RESOURCE_NAME | Token: 0x4039770
        void* ID_Brightness; // ID_Brightness | Token: 0x4039771
        void* ID_Saturation; // ID_Saturation | Token: 0x4039772
        void* ID_Contrast; // ID_Contrast | Token: 0x4039773
        void* ID_Threshold; // ID_Threshold | Token: 0x4039774
        void* ID_Range; // ID_Range | Token: 0x4039775
        void* ID_FlashSpeed; // ID_FlashSpeed | Token: 0x4039776
        void* ID_LineIntensity; // ID_LineIntensity | Token: 0x4039777
        void* ID_LineSize; // ID_LineSize | Token: 0x4039778
        void* ID_PencilSize; // ID_PencilSize | Token: 0x4039779
        void* ID_PencilCorrection; // ID_PencilCorrection | Token: 0x403977a
        void* ID_PencilColor; // ID_PencilColor | Token: 0x403977b
        void* ID_PaperTex; // ID_PaperTex | Token: 0x403977c
        void* ID_PaperColor; // ID_PaperColor | Token: 0x403977d
        void* ID_CornerLose; // ID_CornerLose | Token: 0x403977e
        void* ID_Pixelisation; // ID_Pixelisation | Token: 0x403977f
        void* ID_ColorOffset; // ID_ColorOffset | Token: 0x4039780
        void* ID_RGBSplitOffset; // ID_RGBSplitOffset | Token: 0x4039781
        void* ID_GoldenIntensity; // ID_GoldenIntensity | Token: 0x4039782
        void* ID_GoldenWarmth; // ID_GoldenWarmth | Token: 0x4039783
        void* ID_EdgeIntensity; // ID_EdgeIntensity | Token: 0x4039784
        void* ID_EdgeSize; // ID_EdgeSize | Token: 0x4039785
        void* ID_EdgeSensitivity; // ID_EdgeSensitivity | Token: 0x4039786
        void* ID_GlitchInterval; // ID_GlitchInterval | Token: 0x4039787
        void* ID_GlitchDuration; // ID_GlitchDuration | Token: 0x4039788
        void* ID_EdgeColor1; // ID_EdgeColor1 | Token: 0x4039789
        void* ID_EdgeColor2; // ID_EdgeColor2 | Token: 0x403978a
        void* ID_EdgeNoiseTex; // ID_EdgeNoiseTex | Token: 0x403978b
        void* m_shader; // m_shader | Token: 0x403978c
        void* m_material; // m_material | Token: 0x403978d
        void* m_paperTexFallback; // m_paperTexFallback | Token: 0x403978e
        void* m_noiseTexFallback; // m_noiseTexFallback | Token: 0x403978f
        void* m_isInit; // m_isInit | Token: 0x4039790
        void* m_lensFlareGO; // m_lensFlareGO | Token: 0x4039791
        void* m_flareLayer; // m_flareLayer | Token: 0x4039792
        void* m_savedFlareLayerEnabled; // m_savedFlareLayerEnabled | Token: 0x4039793
        void* m_lensFlareActive; // m_lensFlareActive | Token: 0x4039794

        // Methods (19)
        // Method: Method_0() | Slot: 0 | Token: 0x5fb3
        using fn_Method_0 = void* (*)(UGCPhotoFilter* __this);
        // Method: ceLabelOffset(void* priority) | Slot: 9541 | Token: 0x213eac
        using fn_ceLabelOffset = void* (*)(UGCPhotoFilter* __this, void* priority);
        // Method: Method_2() | Slot: 24499 | Token: 0x4ffff
        using fn_Method_2 = void* (*)(UGCPhotoFilter* __this);
        // Method: bum() | Slot: 12041 | Token: 0x86
        using fn_bum = void* (*)(UGCPhotoFilter* __this);
        // Method: nt(void* eventInfo, void* requestPermissionIfNeeded, void* callback) | Slot: 65535 | Token: 0x6029858
        using fn_nt = void* (*)(UGCPhotoFilter* __this, void* eventInfo, void* requestPermissionIfNeeded, void* callback);
        // Method: DeleteEvent() | Slot: 134 | Token: 0xffffffff
        using fn_DeleteEvent = void* (*)(UGCPhotoFilter* __this);
        // Method: imable() | Slot: 39002 | Token: 0x17f14
        using fn_imable = void* (*)(UGCPhotoFilter* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCPhotoFilter* __this);
        // Method: Method_8() | Slot: 32539 | Token: 0x12545
        using fn_Method_8 = void* (*)(UGCPhotoFilter* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x5fb3
        using fn_Method_9 = void* (*)(UGCPhotoFilter* __this);
        // Method: ger(void* priority) | Slot: 9541 | Token: 0x452fb7
        using fn_ger = void* (*)(UGCPhotoFilter* __this, void* priority);
        // Method: Method_11() | Slot: 24499 | Token: 0x5ffff
        using fn_Method_11 = void* (*)(UGCPhotoFilter* __this);
        // Method: bum() | Slot: 12242 | Token: 0x81
        using fn_bum = void* (*)(UGCPhotoFilter* __this);
        // Method: nt(void* requestPermissionIfNeeded, void* callback) | Slot: 65535 | Token: 0x6029860
        using fn_nt = void* (*)(UGCPhotoFilter* __this, void* requestPermissionIfNeeded, void* callback);
        // Method: EnsureWritePermission() | Slot: 129 | Token: 0xffffffff
        using fn_EnsureWritePermission = void* (*)(UGCPhotoFilter* __this);
        // Method: _WAIT() | Slot: 39010 | Token: 0x17f2c
        using fn__WAIT = void* (*)(UGCPhotoFilter* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCPhotoFilter* __this);
        // Method: Method_17() | Slot: 32561 | Token: 0x130b7
        using fn_Method_17 = void* (*)(UGCPhotoFilter* __this);
        // Method: Method_18() | Slot: 0 | Token: 0x5fb3
        using fn_Method_18 = void* (*)(UGCPhotoFilter* __this);
    };

    // TypeDefIndex: 29448 | Original: COW.Graphics.UGCRockSystem | Token: 0x2007308
    struct UGCRockSystem : Il2Cpp::Object {
        // Fields (5)
        void* m_RockTypes; // m_RockTypes | Token: 0x403979d
        void* m_SceneRocks; // m_SceneRocks | Token: 0x403979e
        void* m_SceneRockDistributionDatas; // m_SceneRockDistributionDatas | Token: 0x403979f
        void* Rocks; // Rocks | Token: 0x40397a0
        void* RockInst; // RockInst | Token: 0x40397a1

        // Methods (5)
        // Method: ted(void* priority) | Slot: 12458 | Token: 0x453047
        using fn_ted = void* (*)(UGCRockSystem* __this, void* priority);
        // Method: Method_1() | Slot: 24499 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(UGCRockSystem* __this);
        // Method: Position() | Slot: 12396 | Token: 0x91
        using fn_Position = void* (*)(UGCRockSystem* __this);
        // Method: nt(void* p, void* calendarParams, void* nativeEventId) | Slot: 65535 | Token: 0x6029868
        using fn_nt = void* (*)(UGCRockSystem* __this, void* p, void* calendarParams, void* nativeEventId);
        // Method: ToSystemCalendarEventInfo() | Slot: 145 | Token: 0xffffffff
        using fn_ToSystemCalendarEventInfo = void* (*)(UGCRockSystem* __this);
    };

    // TypeDefIndex: 29453 | Original: COW.Graphics.UMATweenProperty | Token: 0x200730a
    struct UMATweenProperty : Il2Cpp::Object {
        // Fields (40)
        void* targets; // targets | Token: 0x40397a6
        void* propType; // propType | Token: 0x40397a7
        void* fromFloat; // fromFloat | Token: 0x40397a8
        void* toFloat; // toFloat | Token: 0x40397a9
        void* vec4Idx; // vec4Idx | Token: 0x40397aa
        void* fromToColor; // fromToColor | Token: 0x40397ab
        void* colorHDR; // colorHDR | Token: 0x40397ac
        void* changeAlpha; // changeAlpha | Token: 0x40397ad
        void* UseForUMA; // UseForUMA | Token: 0x40397ae
        void* IsTriggeredByPrefab; // IsTriggeredByPrefab | Token: 0x40397af
        void* influencedByUI; // influencedByUI | Token: 0x40397b0
        void* uiParent; // uiParent | Token: 0x40397b1
        void* typeError; // typeError | Token: 0x40397b2
        void* ShowEffectsBetweenChange; // ShowEffectsBetweenChange | Token: 0x40397b3
        void* EffectsRootBeforeChange; // EffectsRootBeforeChange | Token: 0x40397b4
        void* EffectsRootAfterChange; // EffectsRootAfterChange | Token: 0x40397b5
        void* EffectsBeforeChange; // EffectsBeforeChange | Token: 0x40397b6
        void* EffectsAfterChange; // EffectsAfterChange | Token: 0x40397b7
        void* ShowEffectExitChange; // ShowEffectExitChange | Token: 0x40397b8
        void* m_LoopWithRestart; // m_LoopWithRestart | Token: 0x40397b9
        void* m_TinyFactor; // m_TinyFactor | Token: 0x40397ba
        void* m_umaData; // m_umaData | Token: 0x40397bb
        void* m_StatusBeforeChange; // m_StatusBeforeChange | Token: 0x40397bc
        void* m_MainTexID; // m_MainTexID | Token: 0x40397bd
        void* m_IsFromUIMaleAvatar; // m_IsFromUIMaleAvatar | Token: 0x40397be
        void* staticMats; // staticMats | Token: 0x40397bf
        void* nameCache; // nameCache | Token: 0x40397c0
        void* method; // method | Token: 0x40397c1
        void* style; // style | Token: 0x40397c2
        void* animationCurve; // animationCurve | Token: 0x40397c3
        void* ignoreTimeScale; // ignoreTimeScale | Token: 0x40397c4
        void* delay; // delay | Token: 0x40397c5
        void* duration; // duration | Token: 0x40397c6
        void* steeperCurves; // steeperCurves | Token: 0x40397c7
        void* tweenGroup; // tweenGroup | Token: 0x40397c8
        void* mStarted; // mStarted | Token: 0x40397c9
        void* mStartTime; // mStartTime | Token: 0x40397ca
        void* mDuration; // mDuration | Token: 0x40397cb
        void* mAmountPerDelta; // mAmountPerDelta | Token: 0x40397cc
        void* mFactor; // mFactor | Token: 0x40397cd

        // Methods (48)
        // Method: nt(void* eventParams, void* appCalendarId, void* expectedEventName, void* expectedEventId) | Slot: 65535 | Token: 0x6029870
        using fn_nt = void* (*)(UMATweenProperty* __this, void* eventParams, void* appCalendarId, void* expectedEventName, void* expectedEventId);
        // Method: TryGetTrackingParamsFromDeeplink() | Slot: 150 | Token: 0xffffffff
        using fn_TryGetTrackingParamsFromDeeplink = void* (*)(UMATweenProperty* __this);
        // Method: imable() | Slot: 39026 | Token: 0x17f4f
        using fn_imable = void* (*)(UMATweenProperty* __this);
        // Method: nfo>i__Field() | Slot: 65535 | Token: 0x8000000
        using fn_nfo_i__Field = void* (*)(UMATweenProperty* __this);
        // Method: Method_4() | Slot: 32597 | Token: 0xd3ef
        using fn_Method_4 = void* (*)(UMATweenProperty* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5fb3
        using fn_Method_5 = void* (*)(UMATweenProperty* __this);
        // Method: refabPath(void* node) | Slot: 9541 | Token: 0x4531c8
        using fn_refabPath = void* (*)(UMATweenProperty* __this, void* node);
        // Method: Method_7() | Slot: 24499 | Token: 0x4ffff
        using fn_Method_7 = void* (*)(UMATweenProperty* __this);
        // Method: bum() | Slot: 12781 | Token: 0x91
        using fn_bum = void* (*)(UMATweenProperty* __this);
        // Method: nt(void* utcTime) | Slot: 65535 | Token: 0x6029878
        using fn_nt = void* (*)(UMATweenProperty* __this, void* utcTime);
        // Method: GetCachedNativeEventId() | Slot: 129 | Token: 0xffffffff
        using fn_GetCachedNativeEventId = void* (*)(UMATweenProperty* __this);
        // Method: _WAIT() | Slot: 39034 | Token: 0x17f64
        using fn__WAIT = void* (*)(UMATweenProperty* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UMATweenProperty* __this);
        // Method: Method_13() | Slot: 32617 | Token: 0xd3ef
        using fn_Method_13 = void* (*)(UMATweenProperty* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x5fb3
        using fn_Method_14 = void* (*)(UMATweenProperty* __this);
        // Method: h(void* priority) | Slot: 9541 | Token: 0x453262
        using fn_h = void* (*)(UMATweenProperty* __this, void* priority);
        // Method: Method_16() | Slot: 24499 | Token: 0xffff
        using fn_Method_16 = void* (*)(UMATweenProperty* __this);
        // Method: g() | Slot: 12917 | Token: 0x91
        using fn_g = void* (*)(UMATweenProperty* __this);
        // Method: nt(void* parameters) | Slot: 65535 | Token: 0x6029880
        using fn_nt = void* (*)(UMATweenProperty* __this, void* parameters);
        // Method: SafeEventId() | Slot: 145 | Token: 0xffffffff
        using fn_SafeEventId = void* (*)(UMATweenProperty* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39042 | Token: 0x17f6e
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UMATweenProperty* __this);
        // Method: nfo>i__Field() | Slot: 65535 | Token: 0x8000000
        using fn_nfo_i__Field = void* (*)(UMATweenProperty* __this);
        // Method: Method_22() | Slot: 65535 | Token: 0x69c4
        using fn_Method_22 = void* (*)(UMATweenProperty* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x5fb3
        using fn_Method_23 = void* (*)(UMATweenProperty* __this);
        // Method: neStreamerInfo(void* node) | Slot: 9541 | Token: 0x4532c7
        using fn_neStreamerInfo = void* (*)(UMATweenProperty* __this, void* node);
        // Method: Method_25() | Slot: 24499 | Token: 0x2ffff
        using fn_Method_25 = void* (*)(UMATweenProperty* __this);
        // Method: bum() | Slot: 13010 | Token: 0x91
        using fn_bum = void* (*)(UMATweenProperty* __this);
        // Method: nt(void* operation, void* ff_event_name, void* ff_event_id, void* brief, void* detail) | Slot: 65535 | Token: 0x6029888
        using fn_nt = void* (*)(UMATweenProperty* __this, void* operation, void* ff_event_name, void* ff_event_id, void* brief, void* detail);
        // Method: LogResult() | Slot: 145 | Token: 0xffffffff
        using fn_LogResult = void* (*)(UMATweenProperty* __this);
        // Method: ER() | Slot: 39050 | Token: 0x17f80
        using fn_ER = void* (*)(UMATweenProperty* __this);
        // Method: nfo>i__Field() | Slot: 65535 | Token: 0x8000000
        using fn_nfo_i__Field = void* (*)(UMATweenProperty* __this);
        // Method: Method_31() | Slot: 32647 | Token: 0xd3ef
        using fn_Method_31 = void* (*)(UMATweenProperty* __this);
        // Method: Method_32() | Slot: 0 | Token: 0x5fb3
        using fn_Method_32 = void* (*)(UMATweenProperty* __this);
        // Method: nfos() | Slot: 54255 | Token: 0x453330
        using fn_nfos = void* (*)(UMATweenProperty* __this);
        // Method: Method_34() | Slot: 24499 | Token: 0x1ffff
        using fn_Method_34 = void* (*)(UMATweenProperty* __this);
        // Method: g() | Slot: 13153 | Token: 0x91
        using fn_g = void* (*)(UMATweenProperty* __this);
        // Method: nt(void* groups) | Slot: 65535 | Token: 0x6029890
        using fn_nt = void* (*)(UMATweenProperty* __this, void* groups);
        // Method: OkResult() | Slot: 145 | Token: 0xffffffff
        using fn_OkResult = void* (*)(UMATweenProperty* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39058 | Token: 0x17f8c
        using fn_GetExchangeCurrencySubType = void* (*)(UMATweenProperty* __this);
        // Method: nfo>i__Field() | Slot: 65535 | Token: 0x8000000
        using fn_nfo_i__Field = void* (*)(UMATweenProperty* __this);
        // Method: Method_40(void* key) | Slot: 32655 | Token: 0x12545
        using fn_Method_40 = void* (*)(UMATweenProperty* __this, void* key);
        // Method: Method_41() | Slot: 0 | Token: 0x5fb3
        using fn_Method_41 = void* (*)(UMATweenProperty* __this);
        // Method: Infos(void* node) | Slot: 9541 | Token: 0x1790
        using fn_Infos = void* (*)(UMATweenProperty* __this, void* node);
        // Method: Method_43() | Slot: 24499 | Token: 0x3ffff
        using fn_Method_43 = void* (*)(UMATweenProperty* __this);
        // Method: bum() | Slot: 18858 | Token: 0x1886
        using fn_bum = void* (*)(UMATweenProperty* __this);
        // Method: nt() | Slot: 65535 | Token: 0x6029898
        using fn_nt = void* (*)(UMATweenProperty* __this);
        // Method: <Init>b__13_0() | Slot: 129 | Token: 0xffffffff
        using fn__Init_b__13_0 = void* (*)(UMATweenProperty* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39066 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UMATweenProperty* __this);
    };

    // TypeDefIndex: 29457 | Original: COW.Graphics.UVSeqPlayer | Token: 0x200730f
    struct UVSeqPlayer : Il2Cpp::Object {
        // Fields (41)
        void* columnRow; // columnRow | Token: 0x40397ee
        void* playVelocity; // playVelocity | Token: 0x40397ef
        void* durationTime; // durationTime | Token: 0x40397f0
        void* m_OneDurationFrameCount; // m_OneDurationFrameCount | Token: 0x40397f1
        void* m_PingPongForward; // m_PingPongForward | Token: 0x40397f2
        void* startIndex; // startIndex | Token: 0x40397f3
        void* useInterval; // useInterval | Token: 0x40397f4
        void* intervals; // intervals | Token: 0x40397f5
        void* propertyNames; // propertyNames | Token: 0x40397f6
        void* propertyScale; // propertyScale | Token: 0x40397f7
        void* useForUMA; // useForUMA | Token: 0x40397f8
        void* shaderName; // shaderName | Token: 0x40397f9
        void* textureName; // textureName | Token: 0x40397fa
        void* texPropertyName; // texPropertyName | Token: 0x40397fb
        void* DataInitialized; // DataInitialized | Token: 0x40397fc
        void* MaterialIndex; // MaterialIndex | Token: 0x40397fd
        void* MaxMaterialIndex; // MaxMaterialIndex | Token: 0x40397fe
        void* IsTriggeredByPrefab; // IsTriggeredByPrefab | Token: 0x40397ff
        void* changePropertyInGame; // changePropertyInGame | Token: 0x4039800
        void* propertyIndex; // propertyIndex | Token: 0x4039801
        void* propertyName; // propertyName | Token: 0x4039802
        void* propType; // propType | Token: 0x4039803
        void* newFloat; // newFloat | Token: 0x4039804
        void* vec4Idx; // vec4Idx | Token: 0x4039805
        void* newColor; // newColor | Token: 0x4039806
        void* m_index; // m_index | Token: 0x4039807
        void* m_intervalDuration; // m_intervalDuration | Token: 0x4039808
        void* m_playType; // m_playType | Token: 0x4039809
        void* m_renderer; // m_renderer | Token: 0x403980a
        void* m_material; // m_material | Token: 0x403980b
        void* m_umaData; // m_umaData | Token: 0x403980c
        void* m_frameCount; // m_frameCount | Token: 0x403980d
        void* m_count; // m_count | Token: 0x403980e
        void* m_shuffleCounter; // m_shuffleCounter | Token: 0x403980f
        void* m_valid; // m_valid | Token: 0x4039810
        void* ONEFRAMETIME; // ONEFRAMETIME | Token: 0x4039811
        void* MAXTIMESUM; // MAXTIMESUM | Token: 0x4039812
        void* m_timeRecord; // m_timeRecord | Token: 0x4039813
        void* m_playedOnce; // m_playedOnce | Token: 0x4039814
        void* nameCache; // nameCache | Token: 0x4039815
        void* staticMats; // staticMats | Token: 0x4039816

        // Methods (26)
        // Method: <EnsureAppCalendar>b__0() | Slot: 131 | Token: 0xffffffff
        using fn__EnsureAppCalendar_b__0 = void* (*)(UVSeqPlayer* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39074 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UVSeqPlayer* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UVSeqPlayer* __this);
        // Method: Method_3() | Slot: 32664 | Token: 0x12545
        using fn_Method_3 = void* (*)(UVSeqPlayer* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f9e
        using fn_Method_4 = void* (*)(UVSeqPlayer* __this);
        // Method: Method_5(void* strAPPSecret) | Slot: 9541 | Token: 0x4535e6
        using fn_Method_5 = void* (*)(UVSeqPlayer* __this, void* strAPPSecret);
        // Method: Method_6() | Slot: 24479 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(UVSeqPlayer* __this);
        // Method: bum() | Slot: 13838 | Token: 0x1886
        using fn_bum = void* (*)(UVSeqPlayer* __this);
        // Method: ectHealingDance() | Slot: 65535 | Token: 0x60298a8
        using fn_ectHealingDance = void* (*)(UVSeqPlayer* __this);
        // Method: <CreateEvent>b__4() | Slot: 131 | Token: 0xffffffff
        using fn__CreateEvent_b__4 = void* (*)(UVSeqPlayer* __this);
        // Method: _WAIT() | Slot: 39082 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UVSeqPlayer* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UVSeqPlayer* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0x12545
        using fn_Method_12 = void* (*)(UVSeqPlayer* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x5fa1
        using fn_Method_13 = void* (*)(UVSeqPlayer* __this);
        // Method: eshInfos(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_eshInfos = void* (*)(UVSeqPlayer* __this, void* instCount);
        // Method: Method_15() | Slot: 24482 | Token: 0xffff
        using fn_Method_15 = void* (*)(UVSeqPlayer* __this);
        // Method: g() | Slot: 13963 | Token: 0x83
        using fn_g = void* (*)(UVSeqPlayer* __this);
        // Method: HealingDance(void* ownershipResult) | Slot: 65535 | Token: 0x60298b0
        using fn_HealingDance = void* (*)(UVSeqPlayer* __this, void* ownershipResult);
        // Method: <UpdateEvent>b__2() | Slot: 131 | Token: 0xffffffff
        using fn__UpdateEvent_b__2 = void* (*)(UVSeqPlayer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39090 | Token: 0x17fa0
        using fn_GetExchangeCurrencySubType = void* (*)(UVSeqPlayer* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UVSeqPlayer* __this);
        // Method: Method_21() | Slot: 65535 | Token: 0x12545
        using fn_Method_21 = void* (*)(UVSeqPlayer* __this);
        // Method: Method_22() | Slot: 0 | Token: 0x5fa3
        using fn_Method_22 = void* (*)(UVSeqPlayer* __this);
        // Method: Method_23(void* instCount) | Slot: 9541 | Token: 0x4536e5
        using fn_Method_23 = void* (*)(UVSeqPlayer* __this, void* instCount);
        // Method: Method_24() | Slot: 24484 | Token: 0x1ffff
        using fn_Method_24 = void* (*)(UVSeqPlayer* __this);
        // Method: bum() | Slot: 14071 | Token: 0x1886
        using fn_bum = void* (*)(UVSeqPlayer* __this);
    };

    // TypeDefIndex: 29458 | Original: COW.Graphics.VegColorRatio | Token: 0x2007313
    struct VegColorRatio : Il2Cpp::Object {
        // Fields (3)
        void* m_color; // m_color | Token: 0x4039825
        void* m_ratio; // m_ratio | Token: 0x4039826
        void* m_scale; // m_scale | Token: 0x4039827

        // Methods (1)
        // Method: Method_0() | Slot: 32676 | Token: 0x12545
        using fn_Method_0 = void* (*)(VegColorRatio* __this);
    };

    // TypeDefIndex: 29459 | Original: COW.Graphics.VegColorComponent | Token: 0x2007314
    struct VegColorComponent : Il2Cpp::Object {
        // Fields (4)
        void* m_vegColorRatioList; // m_vegColorRatioList | Token: 0x4039828
        void* m_randomScaleSize; // m_randomScaleSize | Token: 0x4039829
        void* m_hasReplacement; // m_hasReplacement | Token: 0x403982a
        void* m_vegColorRatioListReplace; // m_vegColorRatioListReplace | Token: 0x403982b

        // Methods (3)
        // Method: Method_0() | Slot: 0 | Token: 0x5fa4
        using fn_Method_0 = void* (*)(VegColorComponent* __this);
        // Method: Method_1(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_Method_1 = void* (*)(VegColorComponent* __this, void* instCount);
        // Method: Method_2() | Slot: 24485 | Token: 0xffff
        using fn_Method_2 = void* (*)(VegColorComponent* __this);
    };

    // TypeDefIndex: 29461 | Original: COW.Graphics.VegetationGenerator | Token: 0x2007315
    struct VegetationGenerator : Il2Cpp::Object {
        // Fields (1)
        void* m_type; // m_type | Token: 0x403982c

        // Methods (1)
        // Method: bum() | Slot: 103 | Token: 0x83
        using fn_bum = void* (*)(VegetationGenerator* __this);
    };

    // TypeDefIndex: 29473 | Original: COW.Graphics.VegetationManager | Token: 0x2007317
    struct VegetationManager : Il2Cpp::Object {
        // Fields (143)
        void* m_debugSwitchGrass; // m_debugSwitchGrass | Token: 0x4039837
        void* m_debugSwitchTree; // m_debugSwitchTree | Token: 0x4039838
        void* m_debugSwitchVeg; // m_debugSwitchVeg | Token: 0x4039839
        void* EnableHide; // EnableHide | Token: 0x403983a
        void* EnablePreZPass; // EnablePreZPass | Token: 0x403983b
        void* EnableGrass; // EnableGrass | Token: 0x403983c
        void* s_forceDisabled; // s_forceDisabled | Token: 0x403983d
        void* m_vegetationTypeList; // m_vegetationTypeList | Token: 0x403983e
        void* m_distributionDataList; // m_distributionDataList | Token: 0x403983f
        void* m_simulationSetting; // m_simulationSetting | Token: 0x4039840
        void* m_ReplaceDataList; // m_ReplaceDataList | Token: 0x4039841
        void* m_posInsertReplaceData; // m_posInsertReplaceData | Token: 0x4039842
        void* m_simulationDataList; // m_simulationDataList | Token: 0x4039843
        void* m_vegetationDataList; // m_vegetationDataList | Token: 0x4039844
        void* m_attachGrassMeshParent; // m_attachGrassMeshParent | Token: 0x4039845
        void* m_attachTreeMeshParent; // m_attachTreeMeshParent | Token: 0x4039846
        void* m_potentVisGrassList; // m_potentVisGrassList | Token: 0x4039847
        void* m_potentVisTreeList; // m_potentVisTreeList | Token: 0x4039848
        void* m_potentVisShadowTreeList; // m_potentVisShadowTreeList | Token: 0x4039849
        void* m_visibleGrassInstList; // m_visibleGrassInstList | Token: 0x403984a
        void* m_visibleGrassLowInstDict; // m_visibleGrassLowInstDict | Token: 0x403984b
        void* m_visibleGrassGroupDict; // m_visibleGrassGroupDict | Token: 0x403984c
        void* m_visibleTreeGroupList; // m_visibleTreeGroupList | Token: 0x403984d
        void* m_visibleShadowTreeGroupList; // m_visibleShadowTreeGroupList | Token: 0x403984e
        void* m_vegetationHeight; // m_vegetationHeight | Token: 0x403984f
        void* m_graphicsQualityVeg; // m_graphicsQualityVeg | Token: 0x4039850
        void* m_qualityVegID; // m_qualityVegID | Token: 0x4039851
        void* m_graphQualityVegID; // m_graphQualityVegID | Token: 0x4039852
        void* m_grassGroupID; // m_grassGroupID | Token: 0x4039853
        void* m_mapWidth; // m_mapWidth | Token: 0x4039854
        void* m_mapHeight; // m_mapHeight | Token: 0x4039855
        void* m_mapStartPosX; // m_mapStartPosX | Token: 0x4039856
        void* m_mapStartPosZ; // m_mapStartPosZ | Token: 0x4039857
        void* m_distToCamera; // m_distToCamera | Token: 0x4039858
        void* m_vegTypeDict; // m_vegTypeDict | Token: 0x4039859
        void* m_replaceShadowMapBias; // m_replaceShadowMapBias | Token: 0x403985a
        void* m_globalGrassColorList; // m_globalGrassColorList | Token: 0x403985b
        void* m_globalTreeColorList; // m_globalTreeColorList | Token: 0x403985c
        void* m_treeGroupIndNum; // m_treeGroupIndNum | Token: 0x403985d
        void* m_curTreeGroupNum; // m_curTreeGroupNum | Token: 0x403985e
        void* m_curShadowTreeGroupNum; // m_curShadowTreeGroupNum | Token: 0x403985f
        void* m_treeGroupMax; // m_treeGroupMax | Token: 0x4039860
        void* m_treeGroupLowPSTotal; // m_treeGroupLowPSTotal | Token: 0x4039861
        void* m_treeGroupLowTotal; // m_treeGroupLowTotal | Token: 0x4039862
        void* m_treeGroupFarClipPos; // m_treeGroupFarClipPos | Token: 0x4039863
        void* m_treeGroupLowVertsDict; // m_treeGroupLowVertsDict | Token: 0x4039864
        void* m_treeGroupLowUVsDict; // m_treeGroupLowUVsDict | Token: 0x4039865
        void* m_treeGroupLowIndices; // m_treeGroupLowIndices | Token: 0x4039866
        void* m_treeGroupLowPSIndices; // m_treeGroupLowPSIndices | Token: 0x4039867
        void* m_treeGroupLowVertsTmp; // m_treeGroupLowVertsTmp | Token: 0x4039868
        void* m_treeGroupLowPSVertsTmp; // m_treeGroupLowPSVertsTmp | Token: 0x4039869
        void* m_treeGroupLowUVsTmp; // m_treeGroupLowUVsTmp | Token: 0x403986a
        void* m_treeGroupLowPSUVsTmp; // m_treeGroupLowPSUVsTmp | Token: 0x403986b
        void* m_treeGroupLowColorsTmp; // m_treeGroupLowColorsTmp | Token: 0x403986c
        void* m_treeGroupLowPSColorsTmp; // m_treeGroupLowPSColorsTmp | Token: 0x403986d
        void* m_treeGroupLowBillboradNumDict; // m_treeGroupLowBillboradNumDict | Token: 0x403986e
        void* m_hidVegBias; // m_hidVegBias | Token: 0x403986f
        void* m_hasHideVeg; // m_hasHideVeg | Token: 0x4039870
        void* m_treeGroupLowMesh; // m_treeGroupLowMesh | Token: 0x4039871
        void* m_treeGroupLowPSMesh; // m_treeGroupLowPSMesh | Token: 0x4039872
        void* m_PsMeshDelayClearCount; // m_PsMeshDelayClearCount | Token: 0x4039873
        void* m_treeGroupLowPos; // m_treeGroupLowPos | Token: 0x4039874
        void* m_treeFarMat; // m_treeFarMat | Token: 0x4039875
        void* m_treeMainTex; // m_treeMainTex | Token: 0x4039876
        void* m_treeLayerMask; // m_treeLayerMask | Token: 0x4039877
        void* m_treeScaleVec; // m_treeScaleVec | Token: 0x4039878
        void* m_treeScaleVecSec; // m_treeScaleVecSec | Token: 0x4039879
        void* m_treeScaleArray; // m_treeScaleArray | Token: 0x403987a
        void* m_visTreeGroupLOD0List; // m_visTreeGroupLOD0List | Token: 0x403987b
        void* m_visTreeGroupLOD1List; // m_visTreeGroupLOD1List | Token: 0x403987c
        void* m_visTreeGroupFarList; // m_visTreeGroupFarList | Token: 0x403987d
        void* m_visTreeGroupShadowList; // m_visTreeGroupShadowList | Token: 0x403987e
        void* m_chekedVisTreeIDList; // m_chekedVisTreeIDList | Token: 0x403987f
        void* m_treeGroupLOD0Dict; // m_treeGroupLOD0Dict | Token: 0x4039880
        void* m_treeGroupLOD1Dict; // m_treeGroupLOD1Dict | Token: 0x4039881
        void* m_treeGroupShadowDict; // m_treeGroupShadowDict | Token: 0x4039882
        void* m_grassGroupTypeNum; // m_grassGroupTypeNum | Token: 0x4039883
        void* m_grassGroupIndNum; // m_grassGroupIndNum | Token: 0x4039884
        void* m_curGrassGroupNum; // m_curGrassGroupNum | Token: 0x4039885
        void* m_pineTreeBillboard; // m_pineTreeBillboard | Token: 0x4039886
        void* m_greenTreeBillboard; // m_greenTreeBillboard | Token: 0x4039887
        void* m_cocoTreeBillboard; // m_cocoTreeBillboard | Token: 0x4039888
        void* m_grassGroupGOType0; // m_grassGroupGOType0 | Token: 0x4039889
        void* m_grassGroupGOType1; // m_grassGroupGOType1 | Token: 0x403988a
        void* m_grassGroupGOType2; // m_grassGroupGOType2 | Token: 0x403988b
        void* m_grassGroupGOType3; // m_grassGroupGOType3 | Token: 0x403988c
        void* m_grassGroupMesh; // m_grassGroupMesh | Token: 0x403988d
        void* m_grassGroupMaterial; // m_grassGroupMaterial | Token: 0x403988e
        void* m_grassGroupMatPropBlock; // m_grassGroupMatPropBlock | Token: 0x403988f
        void* m_grassGroupTypeDict; // m_grassGroupTypeDict | Token: 0x4039890
        void* m_grassGridSize; // m_grassGridSize | Token: 0x4039891
        void* m_treeGridSize; // m_treeGridSize | Token: 0x4039892
        void* m_mapGrassGridWidth; // m_mapGrassGridWidth | Token: 0x4039893
        void* m_mapTreeGridWidth; // m_mapTreeGridWidth | Token: 0x4039894
        void* m_disGridGrassIDDict; // m_disGridGrassIDDict | Token: 0x4039895
        void* m_disGridTreeIDDict; // m_disGridTreeIDDict | Token: 0x4039896
        void* m_camera; // m_camera | Token: 0x4039897
        void* m_fadeSpeedCount; // m_fadeSpeedCount | Token: 0x4039898
        void* m_treeScaleBias; // m_treeScaleBias | Token: 0x4039899
        void* m_isSpeedGameMode; // m_isSpeedGameMode | Token: 0x403989a
        void* m_allTreeArray; // m_allTreeArray | Token: 0x403989b
        void* m_newTreeList; // m_newTreeList | Token: 0x403989c
        void* m_visTreePosID; // m_visTreePosID | Token: 0x403989d
        void* m_shadowMat; // m_shadowMat | Token: 0x403989e
        void* m_shadowRTMat; // m_shadowRTMat | Token: 0x403989f
        void* m_sceneGraphcisInst; // m_sceneGraphcisInst | Token: 0x40398a0
        void* m_lightDir; // m_lightDir | Token: 0x40398a1
        void* m_penLightDir; // m_penLightDir | Token: 0x40398a2
        void* m_foundPotentialGridList; // m_foundPotentialGridList | Token: 0x40398a3
        void* m_isRecalculateBound; // m_isRecalculateBound | Token: 0x40398a4
        void* _CamRotDelta_k__BackingField; // <CamRotDelta>k__BackingField | Token: 0x40398a5
        void* _CamPosDelta_k__BackingField; // <CamPosDelta>k__BackingField | Token: 0x40398a6
        void* m_LastCamRotation; // m_LastCamRotation | Token: 0x40398a7
        void* m_LastCamPosition; // m_LastCamPosition | Token: 0x40398a8
        void* m_isInit; // m_isInit | Token: 0x40398a9
        void* m_vegRootGO; // m_vegRootGO | Token: 0x40398aa
        void* originRootName; // originRootName | Token: 0x40398ab
        void* replaceRootName; // replaceRootName | Token: 0x40398ac
        void* m_treeGroupLowMeshDirty; // m_treeGroupLowMeshDirty | Token: 0x40398ad
        void* s_MatPropIDBias; // s_MatPropIDBias | Token: 0x40398ae
        void* s_MatPropIDWindVec; // s_MatPropIDWindVec | Token: 0x40398af
        void* s_MatPropIDVegColor; // s_MatPropIDVegColor | Token: 0x40398b0
        void* s_MatPropIDPosMatrix0; // s_MatPropIDPosMatrix0 | Token: 0x40398b1
        void* s_MatPropIDPosMatrix1; // s_MatPropIDPosMatrix1 | Token: 0x40398b2
        void* s_MatPropIDScaleVec; // s_MatPropIDScaleVec | Token: 0x40398b3
        void* s_MatPropIDTransformVec; // s_MatPropIDTransformVec | Token: 0x40398b4
        void* s_MatPropIDPosBias; // s_MatPropIDPosBias | Token: 0x40398b5
        void* m_firstTreeID; // m_firstTreeID | Token: 0x40398b6
        void* bFindPotention; // bFindPotention | Token: 0x40398b7
        void* m_gridVisibleList; // m_gridVisibleList | Token: 0x40398b8
        void* m_tmpVisibleList; // m_tmpVisibleList | Token: 0x40398b9
        void* m_StandAloneBackCamPos; // m_StandAloneBackCamPos | Token: 0x40398ba
        void* points; // points | Token: 0x40398bb
        void* bBuildGrass; // bBuildGrass | Token: 0x40398bc
        void* bBuildTree; // bBuildTree | Token: 0x40398bd
        void* bDrawGrass; // bDrawGrass | Token: 0x40398be
        void* bDrawTree; // bDrawTree | Token: 0x40398bf
        void* m_tmpVisCount; // m_tmpVisCount | Token: 0x40398c0
        void* lowMeshBias; // lowMeshBias | Token: 0x40398c1
        void* buffPosIDOld; // buffPosIDOld | Token: 0x40398c2
        void* buffPosIDNew; // buffPosIDNew | Token: 0x40398c3
        void* maxBuffPos; // maxBuffPos | Token: 0x40398c4
        void* m_tmpVisTreeID; // m_tmpVisTreeID | Token: 0x40398c5

        // Methods (54)
        // Method: ingDance() | Slot: 65535 | Token: 0x60298c0
        using fn_ingDance = void* (*)(VegetationManager* __this);
        // Method: <ValidateOwnedNativeEvent>b__1() | Slot: 131 | Token: 0xffffffff
        using fn__ValidateOwnedNativeEvent_b__1 = void* (*)(VegetationManager* __this);
        // Method: _WAIT() | Slot: 39106 | Token: 0xffffffff
        using fn__WAIT = void* (*)(VegetationManager* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(VegetationManager* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_4 = void* (*)(VegetationManager* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5fa8
        using fn_Method_5 = void* (*)(VegetationManager* __this);
        // Method: Method_6() | Slot: 54255 | Token: 0x453801
        using fn_Method_6 = void* (*)(VegetationManager* __this);
        // Method: Method_7() | Slot: 24488 | Token: 0xffff
        using fn_Method_7 = void* (*)(VegetationManager* __this);
        // Method: bum() | Slot: 14397 | Token: 0x83
        using fn_bum = void* (*)(VegetationManager* __this);
        // Method: gDance(void* calendars, void* result) | Slot: 65535 | Token: 0x60298c8
        using fn_gDance = void* (*)(VegetationManager* __this, void* calendars, void* result);
        // Method: <FindExistingAppCalendar>b__4() | Slot: 131 | Token: 0xffffffff
        using fn__FindExistingAppCalendar_b__4 = void* (*)(VegetationManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39114 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(VegetationManager* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(VegetationManager* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(VegetationManager* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x5faa
        using fn_Method_14 = void* (*)(VegetationManager* __this);
        // Method: Method_15(void* instCount) | Slot: 9541 | Token: 0x4538b8
        using fn_Method_15 = void* (*)(VegetationManager* __this, void* instCount);
        // Method: Method_16() | Slot: 24490 | Token: 0x2ffff
        using fn_Method_16 = void* (*)(VegetationManager* __this);
        // Method: g() | Slot: 14586 | Token: 0x83
        using fn_g = void* (*)(VegetationManager* __this);
        // Method: ance(void* writeResult) | Slot: 65535 | Token: 0x60298d0
        using fn_ance = void* (*)(VegetationManager* __this, void* writeResult);
        // Method: <RestoreOrCreateAppCalendar>b__6() | Slot: 131 | Token: 0xffffffff
        using fn__RestoreOrCreateAppCalendar_b__6 = void* (*)(VegetationManager* __this);
        // Method: _WAIT() | Slot: 39122 | Token: 0xffffffff
        using fn__WAIT = void* (*)(VegetationManager* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(VegetationManager* __this);
        // Method: Method_22() | Slot: 65535 | Token: 0x12545
        using fn_Method_22 = void* (*)(VegetationManager* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x5fac
        using fn_Method_23 = void* (*)(VegetationManager* __this);
        // Method: Method_24(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_Method_24 = void* (*)(VegetationManager* __this, void* instCount);
        // Method: Method_25() | Slot: 24493 | Token: 0xffff
        using fn_Method_25 = void* (*)(VegetationManager* __this);
        // Method: g() | Slot: 14769 | Token: 0x83
        using fn_g = void* (*)(VegetationManager* __this);
        // Method: e(void* calendarEvent, void* result) | Slot: 65535 | Token: 0x60298d8
        using fn_e = void* (*)(VegetationManager* __this, void* calendarEvent, void* result);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(VegetationManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39130 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(VegetationManager* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(VegetationManager* __this);
        // Method: Method_31() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_31 = void* (*)(VegetationManager* __this);
        // Method: Method_32() | Slot: 0 | Token: 0x5faf
        using fn_Method_32 = void* (*)(VegetationManager* __this);
        // Method: nfos(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_nfos = void* (*)(VegetationManager* __this, void* instCount);
        // Method: Method_34() | Slot: 24496 | Token: 0xffff
        using fn_Method_34 = void* (*)(VegetationManager* __this);
        // Method: g() | Slot: 103 | Token: 0x83
        using fn_g = void* (*)(VegetationManager* __this);
        // Method: rent() | Slot: 65535 | Token: 0x60298e0
        using fn_rent = void* (*)(VegetationManager* __this);
        // Method: <FindEventByQuery>b__3() | Slot: 131 | Token: 0xffffffff
        using fn__FindEventByQuery_b__3 = void* (*)(VegetationManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39138 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(VegetationManager* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(VegetationManager* __this);
        // Method: Method_40() | Slot: 32694 | Token: 0x12545
        using fn_Method_40 = void* (*)(VegetationManager* __this);
        // Method: Method_41() | Slot: 0 | Token: 0x5fc1
        using fn_Method_41 = void* (*)(VegetationManager* __this);
        // Method: () | Slot: 5139 | Token: 0x453b2a
        using fn_unnamed = void* (*)(VegetationManager* __this);
        // Method: Method_43() | Slot: 24513 | Token: 0xffff
        using fn_Method_43 = void* (*)(VegetationManager* __this);
        // Method: e() | Slot: 15210 | Token: 0x886
        using fn_e = void* (*)(VegetationManager* __this);
        // Method: etData() | Slot: 65535 | Token: 0x60298e8
        using fn_etData = void* (*)(VegetationManager* __this);
        // Method: Init() | Slot: 198 | Token: 0xffffffff
        using fn_Init = void* (*)(VegetationManager* __this);
        // Method: mbly-CSharp() | Slot: 39146 | Token: 0x17fb8
        using fn_mbly_CSharp = void* (*)(VegetationManager* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(VegetationManager* __this);
        // Method: Method_49() | Slot: 32697 | Token: 0x69c4
        using fn_Method_49 = void* (*)(VegetationManager* __this);
        // Method: Method_50() | Slot: 0 | Token: 0x5fc1
        using fn_Method_50 = void* (*)(VegetationManager* __this);
        // Method: terialInfo() | Slot: 9299 | Token: 0x453baf
        using fn_terialInfo = void* (*)(VegetationManager* __this);
        // Method: Method_52() | Slot: 24513 | Token: 0x1ffff
        using fn_Method_52 = void* (*)(VegetationManager* __this);
        // Method: Component() | Slot: 15309 | Token: 0x86
        using fn_Component = void* (*)(VegetationManager* __this);
    };

} // namespace COW_Graphics
