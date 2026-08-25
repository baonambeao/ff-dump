#pragma once
#include "Il2CppBase.hpp"

namespace COW_Audio {

    // TypeDefIndex: 29474 | Original: COW.Audio.AnimStateSFX | Token: 0x2007323
    struct AnimStateSFX : Il2Cpp::Object {
        // Fields (14)
        void* enterSoundID; // enterSoundID | Token: 0x403990b
        void* exitSoundID; // exitSoundID | Token: 0x403990c
        void* staySoundID; // staySoundID | Token: 0x403990d
        void* audioSourceID; // audioSourceID | Token: 0x403990e
        void* asyncPlay; // asyncPlay | Token: 0x403990f
        void* stopStaySoundOnExit; // stopStaySoundOnExit | Token: 0x4039910
        void* engineType; // engineType | Token: 0x4039911
        void* audioMixerGroup; // audioMixerGroup | Token: 0x4039912
        void* m_PlaybackParams; // m_PlaybackParams | Token: 0x4039913
        void* m_EnterSound; // m_EnterSound | Token: 0x4039914
        void* m_ExitSound; // m_ExitSound | Token: 0x4039915
        void* m_StaySound; // m_StaySound | Token: 0x4039916
        void* m_StaySoundPlayingID; // m_StaySoundPlayingID | Token: 0x4039917
        void* m_LastLoopIndex; // m_LastLoopIndex | Token: 0x4039918

        // Methods (8)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39162 | Token: 0x17fca
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(AnimStateSFX* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(AnimStateSFX* __this);
        // Method: Method_2() | Slot: 32717 | Token: 0x120f2
        using fn_Method_2 = void* (*)(AnimStateSFX* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5fc1
        using fn_Method_3 = void* (*)(AnimStateSFX* __this);
        // Method: IDList(void* priority) | Slot: 20579 | Token: 0x453d06
        using fn_IDList = void* (*)(AnimStateSFX* __this, void* priority);
        // Method: Method_5() | Slot: 24513 | Token: 0x2ffff
        using fn_Method_5 = void* (*)(AnimStateSFX* __this);
        // Method: uleInfo() | Slot: 15670 | Token: 0x86
        using fn_uleInfo = void* (*)(AnimStateSFX* __this);
        // Method: etData(void* tailorID) | Slot: 65535 | Token: 0x6029900
        using fn_etData = void* (*)(AnimStateSFX* __this, void* tailorID);
    };

    // TypeDefIndex: 29475 | Original: COW.Audio.AudioFlangerFilter | Token: 0x2007324
    struct AudioFlangerFilter : Il2Cpp::Object {
        // Fields (8)
        void* dryMix; // dryMix | Token: 0x4039919
        void* wetMix; // wetMix | Token: 0x403991a
        void* maxDelayTimeMs; // maxDelayTimeMs | Token: 0x403991b
        void* rate; // rate | Token: 0x403991c
        void* m_DelayBuffer; // m_DelayBuffer | Token: 0x403991d
        void* m_WritePos; // m_WritePos | Token: 0x403991e
        void* m_Phase; // m_Phase | Token: 0x403991f
        void* m_Channels; // m_Channels | Token: 0x4039920

        // Methods (3)
        // Method: GetTailorUnlockDescByItemID() | Slot: 134 | Token: 0xffffffff
        using fn_GetTailorUnlockDescByItemID = void* (*)(AudioFlangerFilter* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39170 | Token: 0x17fd6
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(AudioFlangerFilter* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(AudioFlangerFilter* __this);
    };

    // TypeDefIndex: 29476 | Original: COW.Audio.AudioPeakNotchFilter | Token: 0x2007325
    struct AudioPeakNotchFilter : Il2Cpp::Object {
        // Fields (10)
        void* gainOrCutDecibel; // gainOrCutDecibel | Token: 0x4039921
        void* centerFrequency; // centerFrequency | Token: 0x4039922
        void* bandwidthInOctaves; // bandwidthInOctaves | Token: 0x4039923
        void* a0; // a0 | Token: 0x4039924
        void* a1; // a1 | Token: 0x4039925
        void* a2; // a2 | Token: 0x4039926
        void* b1; // b1 | Token: 0x4039927
        void* b2; // b2 | Token: 0x4039928
        void* z1; // z1 | Token: 0x4039929
        void* z2; // z2 | Token: 0x403992a

        // Methods (3)
        // Method: Method_0() | Slot: 32728 | Token: 0x12545
        using fn_Method_0 = void* (*)(AudioPeakNotchFilter* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5fc1
        using fn_Method_1 = void* (*)(AudioPeakNotchFilter* __this);
        // Method: IndexList() | Slot: 54673 | Token: 0x453df8
        using fn_IndexList = void* (*)(AudioPeakNotchFilter* __this);
    };

    // TypeDefIndex: 29477 | Original: COW.Audio.GAudioComponentBase | Token: 0x2007326
    struct GAudioComponentBase : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 24513 | Token: 0x1ffff
        using fn_Method_0 = void* (*)(GAudioComponentBase* __this);
    };

    // TypeDefIndex: 29479 | Original: COW.Audio.GAudioEmitterBase | Token: 0x2007327
    struct GAudioEmitterBase : Il2Cpp::Object {
        // Fields (3)
        void* soundID; // soundID | Token: 0x403992b
        void* _SoundID_k__BackingField; // <SoundID>k__BackingField | Token: 0x403992c
        void* m_DelayPlayCoroutine; // m_DelayPlayCoroutine | Token: 0x403992d

        // Methods (8)
        // Method: () | Slot: 15902 | Token: 0x86
        using fn_unnamed = void* (*)(GAudioEmitterBase* __this);
        // Method: etData(void* tailorID) | Slot: 65535 | Token: 0x6029908
        using fn_etData = void* (*)(GAudioEmitterBase* __this, void* tailorID);
        // Method: GetTailorUnlockInfo() | Slot: 134 | Token: 0xffffffff
        using fn_GetTailorUnlockInfo = void* (*)(GAudioEmitterBase* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39178 | Token: 0x17fe3
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(GAudioEmitterBase* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(GAudioEmitterBase* __this);
        // Method: Method_5() | Slot: 32742 | Token: 0x12545
        using fn_Method_5 = void* (*)(GAudioEmitterBase* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5fc1
        using fn_Method_6 = void* (*)(GAudioEmitterBase* __this);
        // Method: Textures() | Slot: 27076 | Token: 0x453eb7
        using fn_Textures = void* (*)(GAudioEmitterBase* __this);
    };

    // TypeDefIndex: 29480 | Original: COW.Audio.GAudioEffectBase | Token: 0x2007329
    struct GAudioEffectBase : Il2Cpp::Object {
        // Fields (4)
        void* fadeInTime; // fadeInTime | Token: 0x4039931
        void* SampleRate; // SampleRate | Token: 0x4039932
        void* m_FadeStartTime; // m_FadeStartTime | Token: 0x4039933
        void* IsFadingIn; // IsFadingIn | Token: 0x4039934

        // Methods (5)
        // Method: Method_0() | Slot: 32750 | Token: 0x69c4
        using fn_Method_0 = void* (*)(GAudioEffectBase* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5fc1
        using fn_Method_1 = void* (*)(GAudioEffectBase* __this);
        // Method: (void* priority) | Slot: 9541 | Token: 0x453f68
        using fn_unnamed = void* (*)(GAudioEffectBase* __this, void* priority);
        // Method: Method_3() | Slot: 24513 | Token: 0x2ffff
        using fn_Method_3 = void* (*)(GAudioEffectBase* __this);
        // Method: bum() | Slot: 16268 | Token: 0x86
        using fn_bum = void* (*)(GAudioEffectBase* __this);
    };

    // TypeDefIndex: 29481 | Original: COW.Audio.MultiPositionSoundEmitter | Token: 0x200732a
    struct MultiPositionSoundEmitter : Il2Cpp::Object {
        // Fields (4)
        void* maxAttenuation; // maxAttenuation | Token: 0x4039935
        void* mixerGroupID; // mixerGroupID | Token: 0x4039936
        void* updateInterval; // updateInterval | Token: 0x4039937
        void* _PlayingID_k__BackingField; // <PlayingID>k__BackingField | Token: 0x4039938

        // Methods (6)
        // Method: etData(void* tailorID) | Slot: 65535 | Token: 0x6029918
        using fn_etData = void* (*)(MultiPositionSoundEmitter* __this, void* tailorID);
        // Method: GetAllTailorTipsCnt() | Slot: 134 | Token: 0xffffffff
        using fn_GetAllTailorTipsCnt = void* (*)(MultiPositionSoundEmitter* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39194 | Token: 0x17ff5
        using fn_GetExchangeCurrencySubType = void* (*)(MultiPositionSoundEmitter* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(MultiPositionSoundEmitter* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(MultiPositionSoundEmitter* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5fc1
        using fn_Method_5 = void* (*)(MultiPositionSoundEmitter* __this);
    };

    // TypeDefIndex: 29484 | Original: COW.Audio.VFXAudioComponent | Token: 0x200732b
    struct VFXAudioComponent : Il2Cpp::Object {
        // Fields (10)
        void* PlayType; // PlayType | Token: 0x4039939
        void* PlayScene; // PlayScene | Token: 0x403993a
        void* SourceResID; // SourceResID | Token: 0x403993b
        void* ClipResID; // ClipResID | Token: 0x403993c
        void* IsAsyncPlay; // IsAsyncPlay | Token: 0x403993d
        void* stopOnDisable; // stopOnDisable | Token: 0x403993e
        void* m_SourceResID; // m_SourceResID | Token: 0x403993f
        void* m_LoopPlayingID; // m_LoopPlayingID | Token: 0x4039940
        void* m_PlayParam; // m_PlayParam | Token: 0x4039941
        void* m_EmoteSoundPlayingID; // m_EmoteSoundPlayingID | Token: 0x4039942

        // Methods (9)
        // Method: Method_0(void* priority) | Slot: 9541 | Token: 0x454015
        using fn_Method_0 = void* (*)(VFXAudioComponent* __this, void* priority);
        // Method: Method_1() | Slot: 24513 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(VFXAudioComponent* __this);
        // Method: t() | Slot: 16432 | Token: 0x86
        using fn_t = void* (*)(VFXAudioComponent* __this);
        // Method: etData(void* tailorID) | Slot: 65535 | Token: 0x6029920
        using fn_etData = void* (*)(VFXAudioComponent* __this, void* tailorID);
        // Method: IsNewEffectDictItem() | Slot: 134 | Token: 0xffffffff
        using fn_IsNewEffectDictItem = void* (*)(VFXAudioComponent* __this);
        // Method: _WAIT() | Slot: 39202 | Token: 0x17ffd
        using fn__WAIT = void* (*)(VFXAudioComponent* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(VFXAudioComponent* __this);
        // Method: Method_7() | Slot: 32767 | Token: 0x69c4
        using fn_Method_7 = void* (*)(VFXAudioComponent* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x5fc1
        using fn_Method_8 = void* (*)(VFXAudioComponent* __this);
    };

    // TypeDefIndex: 29485 | Original: COW.Audio.PlaybackStatus | Token: 0x200732e
    struct PlaybackStatus : Il2Cpp::Object {
        // Fields (7)
        void* value__; // value__ | Token: 0x403994e
        void* Stopped; // Stopped | Token: 0x403994f
        void* Paused; // Paused | Token: 0x4039950
        void* Stopping; // Stopping | Token: 0x4039951
        void* Playing; // Playing | Token: 0x4039952
        void* Stinger; // Stinger | Token: 0x4039953
        void* Transitioning; // Transitioning | Token: 0x4039954
    };

    // TypeDefIndex: 29486 | Original: COW.Audio.RhythmSection | Token: 0x200732f
    struct RhythmSection : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x4039955
        void* Intro; // Intro | Token: 0x4039956
        void* Loop; // Loop | Token: 0x4039957
        void* Tail; // Tail | Token: 0x4039958
    };

    // TypeDefIndex: 29489 | Original: COW.Audio.MusicManager | Token: 0x2007330
    struct MusicManager : Il2Cpp::Object {
        // Fields (11)
        void* _CurrentMusic_k__BackingField; // <CurrentMusic>k__BackingField | Token: 0x4039959
        void* _NextMusic_k__BackingField; // <NextMusic>k__BackingField | Token: 0x403995a
        void* m_Stinger; // m_Stinger | Token: 0x403995b
        void* m_StoppedTimeDict; // m_StoppedTimeDict | Token: 0x403995c
        void* _PlaybackStatus_k__BackingField; // <PlaybackStatus>k__BackingField | Token: 0x403995d
        void* TransitionInitCallback; // TransitionInitCallback | Token: 0x403995e
        void* TransitionFinishCallback; // TransitionFinishCallback | Token: 0x403995f
        void* PlayCallback; // PlayCallback | Token: 0x4039960
        void* StopCallback; // StopCallback | Token: 0x4039961
        void* _TransitionData_k__BackingField; // <TransitionData>k__BackingField | Token: 0x4039962
        void* m_CachedMusicInQueue; // m_CachedMusicInQueue | Token: 0x4039963

        // Methods (40)
        // Method: Method_0(void* priority) | Slot: 9541 | Token: 0x40b6bb
        using fn_Method_0 = void* (*)(MusicManager* __this, void* priority);
        // Method: Method_1() | Slot: 24513 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(MusicManager* __this);
        // Method: t() | Slot: 16578 | Token: 0x86
        using fn_t = void* (*)(MusicManager* __this);
        // Method: etData(void* tailorID) | Slot: 65535 | Token: 0x6029928
        using fn_etData = void* (*)(MusicManager* __this, void* tailorID);
        // Method: GetTailorTabBySetting() | Slot: 129 | Token: 0xffffffff
        using fn_GetTailorTabBySetting = void* (*)(MusicManager* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39210 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(MusicManager* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(MusicManager* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x12545
        using fn_Method_7 = void* (*)(MusicManager* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x5fc1
        using fn_Method_8 = void* (*)(MusicManager* __this);
        // Method: getMeshIndex(void* cam) | Slot: 9541 | Token: 0x67
        using fn_getMeshIndex = void* (*)(MusicManager* __this, void* cam);
        // Method: Method_10() | Slot: 24505 | Token: 0xffff
        using fn_Method_10 = void* (*)(MusicManager* __this);
        // Method: bum() | Slot: 18858 | Token: 0x1886
        using fn_bum = void* (*)(MusicManager* __this);
        // Method: range() | Slot: 65535 | Token: 0x6029930
        using fn_range = void* (*)(MusicManager* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(MusicManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39218 | Token: 0x18006
        using fn_GetExchangeCurrencySubType = void* (*)(MusicManager* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(MusicManager* __this);
        // Method: Method_16() | Slot: 32775 | Token: 0x69c4
        using fn_Method_16 = void* (*)(MusicManager* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x5fbc
        using fn_Method_17 = void* (*)(MusicManager* __this);
        // Method: Method_18() | Slot: 27076 | Token: 0x454484
        using fn_Method_18 = void* (*)(MusicManager* __this);
        // Method: Method_19() | Slot: 24509 | Token: 0x1ffff
        using fn_Method_19 = void* (*)(MusicManager* __this);
        // Method: bum() | Slot: 17570 | Token: 0x1886
        using fn_bum = void* (*)(MusicManager* __this);
        // Method: ge(void* errorCode, void* res) | Slot: 65535 | Token: 0x6029938
        using fn_ge = void* (*)(MusicManager* __this, void* errorCode, void* res);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(MusicManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39226 | Token: 0x1800b
        using fn_GetExchangeCurrencySubType = void* (*)(MusicManager* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(MusicManager* __this);
        // Method: Method_25() | Slot: 32781 | Token: 0x12545
        using fn_Method_25 = void* (*)(MusicManager* __this);
        // Method: Method_26() | Slot: 0 | Token: 0x5fc0
        using fn_Method_26 = void* (*)(MusicManager* __this);
        // Method: Method_27() | Slot: 27076 | Token: 0x454504
        using fn_Method_27 = void* (*)(MusicManager* __this);
        // Method: Method_28() | Slot: 24516 | Token: 0x1ffff
        using fn_Method_28 = void* (*)(MusicManager* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(MusicManager* __this);
        // Method: ta() | Slot: 65535 | Token: 0x6029940
        using fn_ta = void* (*)(MusicManager* __this);
        // Method: GetTrueFilePath() | Slot: 134 | Token: 0xffffffff
        using fn_GetTrueFilePath = void* (*)(MusicManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39234 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(MusicManager* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(MusicManager* __this);
        // Method: Method_34() | Slot: 65535 | Token: 0x12545
        using fn_Method_34 = void* (*)(MusicManager* __this);
        // Method: Method_35() | Slot: 0 | Token: 0x5fc8
        using fn_Method_35 = void* (*)(MusicManager* __this);
        // Method: Method_36() | Slot: 39372 | Token: 0x454780
        using fn_Method_36 = void* (*)(MusicManager* __this);
        // Method: Method_37() | Slot: 24522 | Token: 0x1ffff
        using fn_Method_37 = void* (*)(MusicManager* __this);
        // Method: REPLAYKIT_VIDEO_NAME_LOBBY() | Slot: 18339 | Token: 0x86
        using fn_REPLAYKIT_VIDEO_NAME_LOBBY = void* (*)(MusicManager* __this);
        // Method: Mesh(void* pos_id) | Slot: 65535 | Token: 0x6029948
        using fn_Mesh = void* (*)(MusicManager* __this, void* pos_id);
    };

    // TypeDefIndex: 29490 | Original: COW.Audio.TransitionStatus | Token: 0x2007333
    struct TransitionStatus : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x4039969
        void* Waiting; // Waiting | Token: 0x403996a
        void* Fading; // Fading | Token: 0x403996b
        void* Finished; // Finished | Token: 0x403996c
    };

    // TypeDefIndex: 29491 | Original: COW.Audio.TransitionExitPosition | Token: 0x2007334
    struct TransitionExitPosition : Il2Cpp::Object {
        // Fields (6)
        void* value__; // value__ | Token: 0x403996d
        void* Immediate; // Immediate | Token: 0x403996e
        void* NextBeat; // NextBeat | Token: 0x403996f
        void* NextBar; // NextBar | Token: 0x4039970
        void* TailStart; // TailStart | Token: 0x4039971
        void* MusicEnd; // MusicEnd | Token: 0x4039972
    };

    // TypeDefIndex: 29492 | Original: COW.Audio.TransitionEnterPosition | Token: 0x2007335
    struct TransitionEnterPosition : Il2Cpp::Object {
        // Fields (5)
        void* value__; // value__ | Token: 0x4039973
        void* Beginning; // Beginning | Token: 0x4039974
        void* LastStopped; // LastStopped | Token: 0x4039975
        void* LoopStart; // LoopStart | Token: 0x4039976
        void* Synced; // Synced | Token: 0x4039977
    };

    // TypeDefIndex: 29493 | Original: COW.Audio.MusicTransitionData | Token: 0x2007336
    struct MusicTransitionData : Il2Cpp::Object {
        // Fields (10)
        void* m_TransitionRule; // m_TransitionRule | Token: 0x4039978
        void* ExitStatus; // ExitStatus | Token: 0x4039979
        void* EnterStatus; // EnterStatus | Token: 0x403997a
        void* ExitPosition; // ExitPosition | Token: 0x403997b
        void* EnterPosition; // EnterPosition | Token: 0x403997c
        void* m_BaseTimeStamp; // m_BaseTimeStamp | Token: 0x403997d
        void* m_ExitTimeStamp; // m_ExitTimeStamp | Token: 0x403997e
        void* m_EnterTimeStamp; // m_EnterTimeStamp | Token: 0x403997f
        void* EnterSample; // EnterSample | Token: 0x4039980
        void* LastCheckTime; // LastCheckTime | Token: 0x4039981

        // Methods (9)
        // Method: Method_0() | Slot: 0 | Token: 0x5fcb
        using fn_Method_0 = void* (*)(MusicTransitionData* __this);
        // Method: Method_1(void* strAPPSecret) | Slot: 9541 | Token: 0x67
        using fn_Method_1 = void* (*)(MusicTransitionData* __this, void* strAPPSecret);
        // Method: Method_2() | Slot: 24530 | Token: 0xffff
        using fn_Method_2 = void* (*)(MusicTransitionData* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(MusicTransitionData* __this);
        // Method: hers() | Slot: 65535 | Token: 0x6029950
        using fn_hers = void* (*)(MusicTransitionData* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(MusicTransitionData* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39250 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(MusicTransitionData* __this);
        // Method: thInfiniteEffectDataByID() | Slot: 65535 | Token: 0x8000000
        using fn_thInfiniteEffectDataByID = void* (*)(MusicTransitionData* __this);
        // Method: Method_8() | Slot: 32789 | Token: 0x12545
        using fn_Method_8 = void* (*)(MusicTransitionData* __this);
    };

    // TypeDefIndex: 29495 | Original: COW.Audio.MusicTransport | Token: 0x2007337
    struct MusicTransport : Il2Cpp::Object {
        // Fields (14)
        void* RhythmData; // RhythmData | Token: 0x4039982
        void* _AudioRes_k__BackingField; // <AudioRes>k__BackingField | Token: 0x4039983
        void* _BarNumber_k__BackingField; // <BarNumber>k__BackingField | Token: 0x4039984
        void* _BeatNumber_k__BackingField; // <BeatNumber>k__BackingField | Token: 0x4039985
        void* _LastBeatSample_k__BackingField; // <LastBeatSample>k__BackingField | Token: 0x4039986
        void* _LastBarSample_k__BackingField; // <LastBarSample>k__BackingField | Token: 0x4039987
        void* _LastPlayHeadSample_k__BackingField; // <LastPlayHeadSample>k__BackingField | Token: 0x4039988
        void* _RhythmSection_k__BackingField; // <RhythmSection>k__BackingField | Token: 0x4039989
        void* _Status_k__BackingField; // <Status>k__BackingField | Token: 0x403998a
        void* _BeatDurationSamples_k__BackingField; // <BeatDurationSamples>k__BackingField | Token: 0x403998b
        void* _BarDurationSamples_k__BackingField; // <BarDurationSamples>k__BackingField | Token: 0x403998c
        void* _IntroDurationSamples_k__BackingField; // <IntroDurationSamples>k__BackingField | Token: 0x403998d
        void* _TailDurationSamples_k__BackingField; // <TailDurationSamples>k__BackingField | Token: 0x403998e
        void* _BaseVolume_k__BackingField; // <BaseVolume>k__BackingField | Token: 0x403998f

        // Methods (59)
        // Method: Method_0() | Slot: 0 | Token: 0x5fd5
        using fn_Method_0 = void* (*)(MusicTransport* __this);
        // Method: etMesh(void* strAPPSecret) | Slot: 9541 | Token: 0x18bc9
        using fn_etMesh = void* (*)(MusicTransport* __this, void* strAPPSecret);
        // Method: Method_2() | Slot: 24534 | Token: 0x6
        using fn_Method_2 = void* (*)(MusicTransport* __this);
        // Method: bum() | Slot: 19139 | Token: 0x1886
        using fn_bum = void* (*)(MusicTransport* __this);
        // Method: tation() | Slot: 65535 | Token: 0x6029958
        using fn_tation = void* (*)(MusicTransport* __this);
        // Method: ClearProfileFilterIdCache() | Slot: 134 | Token: 0xffffffff
        using fn_ClearProfileFilterIdCache = void* (*)(MusicTransport* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39258 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(MusicTransport* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(MusicTransport* __this);
        // Method: Method_8() | Slot: 65535 | Token: 0x5fca
        using fn_Method_8 = void* (*)(MusicTransport* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x5fe3
        using fn_Method_9 = void* (*)(MusicTransport* __this);
        // Method: Method_10(void* circlePlane) | Slot: 9541 | Token: 0x14b9
        using fn_Method_10 = void* (*)(MusicTransport* __this, void* circlePlane);
        // Method: Method_11() | Slot: 24547 | Token: 0x4
        using fn_Method_11 = void* (*)(MusicTransport* __this);
        // Method: Cutscene() | Slot: 19296 | Token: 0x886
        using fn_Cutscene = void* (*)(MusicTransport* __this);
        // Method: tation(void* isVertical, void* minMemberCount) | Slot: 65535 | Token: 0x6029960
        using fn_tation = void* (*)(MusicTransport* __this, void* isVertical, void* minMemberCount);
        // Method: GetGroupPhotoTemplateById() | Slot: 134 | Token: 0xffffffff
        using fn_GetGroupPhotoTemplateById = void* (*)(MusicTransport* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39266 | Token: 0x1801a
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(MusicTransport* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(MusicTransport* __this);
        // Method: Method_17() | Slot: 32795 | Token: 0x12545
        using fn_Method_17 = void* (*)(MusicTransport* __this);
        // Method: Method_18() | Slot: 0 | Token: 0x5fe3
        using fn_Method_18 = void* (*)(MusicTransport* __this);
        // Method: dMeshFilter() | Slot: 14850 | Token: 0x454c7e
        using fn_dMeshFilter = void* (*)(MusicTransport* __this);
        // Method: Method_20() | Slot: 24547 | Token: 0x1ffff
        using fn_Method_20 = void* (*)(MusicTransport* __this);
        // Method: bum() | Slot: 19677 | Token: 0x86
        using fn_bum = void* (*)(MusicTransport* __this);
        // Method: tation(void* stickerId) | Slot: 65535 | Token: 0x6029968
        using fn_tation = void* (*)(MusicTransport* __this, void* stickerId);
        // Method: GetAllCanShowStickers() | Slot: 134 | Token: 0xffffffff
        using fn_GetAllCanShowStickers = void* (*)(MusicTransport* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39274 | Token: 0x18027
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(MusicTransport* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(MusicTransport* __this);
        // Method: Method_26() | Slot: 32809 | Token: 0x69c4
        using fn_Method_26 = void* (*)(MusicTransport* __this);
        // Method: Method_27() | Slot: 0 | Token: 0x5fe3
        using fn_Method_27 = void* (*)(MusicTransport* __this);
        // Method: er() | Slot: 27076 | Token: 0x454d77
        using fn_er = void* (*)(MusicTransport* __this);
        // Method: Method_29() | Slot: 24547 | Token: 0x1ffff
        using fn_Method_29 = void* (*)(MusicTransport* __this);
        // Method: bum() | Slot: 19870 | Token: 0x86
        using fn_bum = void* (*)(MusicTransport* __this);
        // Method: tation(void* desc) | Slot: 65535 | Token: 0x6029970
        using fn_tation = void* (*)(MusicTransport* __this, void* desc);
        // Method: IsActivityStickerGot() | Slot: 129 | Token: 0xffffffff
        using fn_IsActivityStickerGot = void* (*)(MusicTransport* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39282 | Token: 0x1802f
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(MusicTransport* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(MusicTransport* __this);
        // Method: Method_35() | Slot: 32817 | Token: 0x12545
        using fn_Method_35 = void* (*)(MusicTransport* __this);
        // Method: Method_36() | Slot: 0 | Token: 0x5fe3
        using fn_Method_36 = void* (*)(MusicTransport* __this);
        // Method: Method_37(void* priority) | Slot: 9541 | Token: 0x454e27
        using fn_Method_37 = void* (*)(MusicTransport* __this, void* priority);
        // Method: Method_38() | Slot: 24547 | Token: 0xffff
        using fn_Method_38 = void* (*)(MusicTransport* __this);
        // Method: bum() | Slot: 20076 | Token: 0x86
        using fn_bum = void* (*)(MusicTransport* __this);
        // Method: tation() | Slot: 65535 | Token: 0x6029978
        using fn_tation = void* (*)(MusicTransport* __this);
        // Method: IsGroupPhotoTemplateNew() | Slot: 134 | Token: 0xffffffff
        using fn_IsGroupPhotoTemplateNew = void* (*)(MusicTransport* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 39290 | Token: 0x18033
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(MusicTransport* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(MusicTransport* __this);
        // Method: Method_44() | Slot: 65535 | Token: 0x12545
        using fn_Method_44 = void* (*)(MusicTransport* __this);
        // Method: Method_45() | Slot: 0 | Token: 0x5fe3
        using fn_Method_45 = void* (*)(MusicTransport* __this);
        // Method: Method_46() | Slot: 13360 | Token: 0x454f1f
        using fn_Method_46 = void* (*)(MusicTransport* __this);
        // Method: Method_47() | Slot: 24547 | Token: 0x1ffff
        using fn_Method_47 = void* (*)(MusicTransport* __this);
        // Method: () | Slot: 20347 | Token: 0x86
        using fn_unnamed = void* (*)(MusicTransport* __this);
        // Method: tation() | Slot: 65535 | Token: 0x6029980
        using fn_tation = void* (*)(MusicTransport* __this);
        // Method: GetAlbumJsonPath() | Slot: 129 | Token: 0xffffffff
        using fn_GetAlbumJsonPath = void* (*)(MusicTransport* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39298 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(MusicTransport* __this);
        // Method: __Field() | Slot: 65535 | Token: 0x8000000
        using fn___Field = void* (*)(MusicTransport* __this);
        // Method: Method_53() | Slot: 32824 | Token: 0x12545
        using fn_Method_53 = void* (*)(MusicTransport* __this);
        // Method: Method_54() | Slot: 0 | Token: 0x5fe3
        using fn_Method_54 = void* (*)(MusicTransport* __this);
        // Method: Method_55(void* priority) | Slot: 9541 | Token: 0x455004
        using fn_Method_55 = void* (*)(MusicTransport* __this, void* priority);
        // Method: Method_56() | Slot: 24547 | Token: 0xffff
        using fn_Method_56 = void* (*)(MusicTransport* __this);
        // Method: bum() | Slot: 20561 | Token: 0x86
        using fn_bum = void* (*)(MusicTransport* __this);
        // Method: tation(void* info, void* isDeleteThumbnail) | Slot: 65535 | Token: 0x6029988
        using fn_tation = void* (*)(MusicTransport* __this, void* info, void* isDeleteThumbnail);
    };

    // TypeDefIndex: 29496 | Original: COW.Audio.TimelineAudioPlayBehaviour | Token: 0x2007339
    struct TimelineAudioPlayBehaviour : Il2Cpp::Object {
        // Fields (8)
        void* SoundID; // SoundID | Token: 0x4039995
        void* AudioSourceID; // AudioSourceID | Token: 0x4039996
        void* AudioMixerGroup; // AudioMixerGroup | Token: 0x4039997
        void* IsAuto3D; // IsAuto3D | Token: 0x4039998
        void* SeekOnLoop; // SeekOnLoop | Token: 0x4039999
        void* Emitter; // Emitter | Token: 0x403999a
        void* m_PlayingID; // m_PlayingID | Token: 0x403999b
        void* m_PreviousTime; // m_PreviousTime | Token: 0x403999c

        // Methods (8)
        // Method: UpdateLocalJson() | Slot: 129 | Token: 0xffffffff
        using fn_UpdateLocalJson = void* (*)(TimelineAudioPlayBehaviour* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39306 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(TimelineAudioPlayBehaviour* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(TimelineAudioPlayBehaviour* __this);
        // Method: Method_3() | Slot: 32831 | Token: 0x69c4
        using fn_Method_3 = void* (*)(TimelineAudioPlayBehaviour* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5fe3
        using fn_Method_4 = void* (*)(TimelineAudioPlayBehaviour* __this);
        // Method: llection(void* priority) | Slot: 9541 | Token: 0x4550f1
        using fn_llection = void* (*)(TimelineAudioPlayBehaviour* __this, void* priority);
        // Method: Method_6() | Slot: 24547 | Token: 0xffff
        using fn_Method_6 = void* (*)(TimelineAudioPlayBehaviour* __this);
        // Method: bum() | Slot: 20772 | Token: 0x86
        using fn_bum = void* (*)(TimelineAudioPlayBehaviour* __this);
    };

    // TypeDefIndex: 29497 | Original: COW.Audio.TimelineAudioPlayClip | Token: 0x200733a
    struct TimelineAudioPlayClip : Il2Cpp::Object {
        // Fields (5)
        void* soundID; // soundID | Token: 0x403999d
        void* audioSourceID; // audioSourceID | Token: 0x403999e
        void* audioMixerGroup; // audioMixerGroup | Token: 0x403999f
        void* isAuto3D; // isAuto3D | Token: 0x40399a0
        void* seekOnLoop; // seekOnLoop | Token: 0x40399a1

        // Methods (3)
        // Method: tation(void* path) | Slot: 65535 | Token: 0x6029990
        using fn_tation = void* (*)(TimelineAudioPlayClip* __this, void* path);
        // Method: OnSavePhotoAlbum() | Slot: 134 | Token: 0xffffffff
        using fn_OnSavePhotoAlbum = void* (*)(TimelineAudioPlayClip* __this);
        // Method: opVIPSrc_BACKPACK() | Slot: 39314 | Token: 0x1804f
        using fn_opVIPSrc_BACKPACK = void* (*)(TimelineAudioPlayClip* __this);
    };

    // TypeDefIndex: 29498 | Original: COW.Audio.TimelineAudioSnapshotBehaviour | Token: 0x200733b
    struct TimelineAudioSnapshotBehaviour : Il2Cpp::Object {
        // Fields (2)
        void* m_Clip; // m_Clip | Token: 0x40399a2
        void* m_SnapshotPushed; // m_SnapshotPushed | Token: 0x40399a3

        // Methods (6)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(TimelineAudioSnapshotBehaviour* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(TimelineAudioSnapshotBehaviour* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5fe3
        using fn_Method_2 = void* (*)(TimelineAudioSnapshotBehaviour* __this);
        // Method: treamerObjectRefInfo(void* priority) | Slot: 9541 | Token: 0x455235
        using fn_treamerObjectRefInfo = void* (*)(TimelineAudioSnapshotBehaviour* __this, void* priority);
        // Method: Method_4() | Slot: 24547 | Token: 0x2ffff
        using fn_Method_4 = void* (*)(TimelineAudioSnapshotBehaviour* __this);
        // Method: bum() | Slot: 21100 | Token: 0x81
        using fn_bum = void* (*)(TimelineAudioSnapshotBehaviour* __this);
    };

    // TypeDefIndex: 29499 | Original: COW.Audio.TimelineAudioSnapshotClip | Token: 0x200733c
    struct TimelineAudioSnapshotClip : Il2Cpp::Object {
        // Fields (3)
        void* snapshotType; // snapshotType | Token: 0x40399a4
        void* priorityLayer; // priorityLayer | Token: 0x40399a5
        void* transitionTime; // transitionTime | Token: 0x40399a6

        // Methods (3)
        // Method: tation() | Slot: 65535 | Token: 0x6029998
        using fn_tation = void* (*)(TimelineAudioSnapshotClip* __this);
        // Method: UpdateVideoMemory() | Slot: 134 | Token: 0xffffffff
        using fn_UpdateVideoMemory = void* (*)(TimelineAudioSnapshotClip* __this);
        // Method: BOKO() | Slot: 39322 | Token: 0x18064
        using fn_BOKO = void* (*)(TimelineAudioSnapshotClip* __this);
    };

    // TypeDefIndex: 29500 | Original: COW.Audio.TimelineAudioTrack | Token: 0x200733d
    struct TimelineAudioTrack : Il2Cpp::Object {

        // Methods (3)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(TimelineAudioTrack* __this);
        // Method: Method_1() | Slot: 32869 | Token: 0x2e48
        using fn_Method_1 = void* (*)(TimelineAudioTrack* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5fe3
        using fn_Method_2 = void* (*)(TimelineAudioTrack* __this);
    };

    // TypeDefIndex: 29501 | Original: COW.Audio.TimelineEmoteAudioPlayBehaviour | Token: 0x200733e
    struct TimelineEmoteAudioPlayBehaviour : Il2Cpp::Object {
        // Fields (5)
        void* SoundID; // SoundID | Token: 0x40399a7
        void* SeekOnLoop; // SeekOnLoop | Token: 0x40399a8
        void* Emitter; // Emitter | Token: 0x40399a9
        void* m_EmotePlayingID; // m_EmotePlayingID | Token: 0x40399aa
        void* m_PreviousTime; // m_PreviousTime | Token: 0x40399ab

        // Methods (10)
        // Method: efInfo(void* priority) | Slot: 9541 | Token: 0x455316
        using fn_efInfo = void* (*)(TimelineEmoteAudioPlayBehaviour* __this, void* priority);
        // Method: Method_1() | Slot: 24547 | Token: 0x3ffff
        using fn_Method_1 = void* (*)(TimelineEmoteAudioPlayBehaviour* __this);
        // Method: bum() | Slot: 21313 | Token: 0x84
        using fn_bum = void* (*)(TimelineEmoteAudioPlayBehaviour* __this);
        // Method: tation() | Slot: 65535 | Token: 0x60299a0
        using fn_tation = void* (*)(TimelineEmoteAudioPlayBehaviour* __this);
        // Method: GetBigEventBgItemController() | Slot: 134 | Token: 0xffffffff
        using fn_GetBigEventBgItemController = void* (*)(TimelineEmoteAudioPlayBehaviour* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 39330 | Token: 0x1806c
        using fn_GetExchangeCurrencySubType = void* (*)(TimelineEmoteAudioPlayBehaviour* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(TimelineEmoteAudioPlayBehaviour* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x12545
        using fn_Method_7 = void* (*)(TimelineEmoteAudioPlayBehaviour* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x5fe3
        using fn_Method_8 = void* (*)(TimelineEmoteAudioPlayBehaviour* __this);
        // Method: Method_9() | Slot: 27076 | Token: 0x4553d8
        using fn_Method_9 = void* (*)(TimelineEmoteAudioPlayBehaviour* __this);
    };

    // TypeDefIndex: 29502 | Original: COW.Audio.TimelineEmoteAudioPlayClip | Token: 0x200733f
    struct TimelineEmoteAudioPlayClip : Il2Cpp::Object {
        // Fields (3)
        void* soundID; // soundID | Token: 0x40399ac
        void* seekOnLoop; // seekOnLoop | Token: 0x40399ad
        void* m_Behaviour; // m_Behaviour | Token: 0x40399ae

        // Methods (4)
        // Method: Method_0() | Slot: 24547 | Token: 0xffff
        using fn_Method_0 = void* (*)(TimelineEmoteAudioPlayClip* __this);
        // Method: bum() | Slot: 21515 | Token: 0x86
        using fn_bum = void* (*)(TimelineEmoteAudioPlayClip* __this);
        // Method: tation() | Slot: 65535 | Token: 0x60299a8
        using fn_tation = void* (*)(TimelineEmoteAudioPlayClip* __this);
        // Method: GetBigEventGroupPhotoBackGrounds() | Slot: 134 | Token: 0xffffffff
        using fn_GetBigEventGroupPhotoBackGrounds = void* (*)(TimelineEmoteAudioPlayClip* __this);
    };

} // namespace COW_Audio
