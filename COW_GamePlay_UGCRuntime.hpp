#pragma once
#include "Il2CppBase.hpp"

namespace COW_GamePlay_UGCRuntime {

    // TypeDefIndex: 34572 | Original: COW.GamePlay.UGCRuntime.UGCAnimationModule | Token: 0x200870d
    struct UGCAnimationModule : Il2Cpp::Object {
        // Fields (6)
        void* ControllerMap; // ControllerMap | Token: 0x4041207
        void* StateMap; // StateMap | Token: 0x4041208
        void* ClipMap; // ClipMap | Token: 0x4041209
        void* ugcRuntime; // ugcRuntime | Token: 0x404120a
        void* dataStore; // dataStore | Token: 0x404120b
        void* lastTickGameTime; // lastTickGameTime | Token: 0x404120c

        // Methods (24)
        // Method: Method_0() | Slot: 0 | Token: 0x7d5e
        using fn_Method_0 = void* (*)(UGCAnimationModule* __this);
        // Method: sources(void* object) | Slot: 9541 | Token: 0x4534
        using fn_sources = void* (*)(UGCAnimationModule* __this, void* object);
        // Method: Method_2() | Slot: 32094 | Token: 0x18
        using fn_Method_2 = void* (*)(UGCAnimationModule* __this);
        // Method: bum() | Slot: 63231 | Token: 0x1c6
        using fn_bum = void* (*)(UGCAnimationModule* __this);
        // Method: dBlendPropertyID() | Slot: 92 | Token: 0x6035b68
        using fn_dBlendPropertyID = void* (*)(UGCAnimationModule* __this);
        // Method: CLGNCKPACLM() | Slot: 452 | Token: 0xffffffff
        using fn_CLGNCKPACLM = void* (*)(UGCAnimationModule* __this);
        // Method: fo() | Slot: 23402 | Token: 0xffffffff
        using fn_fo = void* (*)(UGCAnimationModule* __this);
        // Method: Index() | Slot: 65535 | Token: 0x8000000
        using fn_Index = void* (*)(UGCAnimationModule* __this);
        // Method: Method_8(void* headers, void* values) | Slot: 5329 | Token: 0x12545
        using fn_Method_8 = void* (*)(UGCAnimationModule* __this, void* headers, void* values);
        // Method: Method_9() | Slot: 0 | Token: 0x7d5e
        using fn_Method_9 = void* (*)(UGCAnimationModule* __this);
        // Method: s(void* priority) | Slot: 9541 | Token: 0x58bfd8
        using fn_s = void* (*)(UGCAnimationModule* __this, void* priority);
        // Method: Method_11() | Slot: 32094 | Token: 0x1ffff
        using fn_Method_11 = void* (*)(UGCAnimationModule* __this);
        // Method: bum() | Slot: 49138 | Token: 0x1c4
        using fn_bum = void* (*)(UGCAnimationModule* __this);
        // Method: dBlendPropertyID(void* GLJGHEAPBOF) | Slot: 65535 | Token: 0x6035b70
        using fn_dBlendPropertyID = void* (*)(UGCAnimationModule* __this, void* GLJGHEAPBOF);
        // Method: NPHFMBFGNOG() | Slot: 129 | Token: 0xffffffff
        using fn_NPHFMBFGNOG = void* (*)(UGCAnimationModule* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23410 | Token: 0x214d6
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCAnimationModule* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCAnimationModule* __this);
        // Method: Method_17() | Slot: 65535 | Token: 0x69c4
        using fn_Method_17 = void* (*)(UGCAnimationModule* __this);
        // Method: Method_18() | Slot: 0 | Token: 0x7d5e
        using fn_Method_18 = void* (*)(UGCAnimationModule* __this);
        // Method: Method_19(void* object) | Slot: 9541 | Token: 0x58c00b
        using fn_Method_19 = void* (*)(UGCAnimationModule* __this, void* object);
        // Method: Method_20() | Slot: 32094 | Token: 0xffff
        using fn_Method_20 = void* (*)(UGCAnimationModule* __this);
        // Method: t() | Slot: 32151 | Token: 0x84
        using fn_t = void* (*)(UGCAnimationModule* __this);
        // Method: dBlendPropertyID() | Slot: 65535 | Token: 0x6035b78
        using fn_dBlendPropertyID = void* (*)(UGCAnimationModule* __this);
        // Method: OECHPGECOKF() | Slot: 129 | Token: 0xffffffff
        using fn_OECHPGECOKF = void* (*)(UGCAnimationModule* __this);
    };

    // TypeDefIndex: 34573 | Original: COW.GamePlay.UGCRuntime.E_UGC_HOSTILITY_OPTION | Token: 0x200870e
    struct E_UGC_HOSTILITY_OPTION : Il2Cpp::Object {
        // Fields (5)
        void* value__; // value__ | Token: 0x404120d
        void* invalid; // invalid | Token: 0x404120e
        void* yes; // yes | Token: 0x404120f
        void* no; // no | Token: 0x4041210
        void* _default; // _default | Token: 0x4041211
    };

    // TypeDefIndex: 34574 | Original: COW.GamePlay.UGCRuntime.UGCHostilityModule | Token: 0x200870f
    struct UGCHostilityModule : Il2Cpp::Object {
        // Fields (5)
        void* ugcRuntime; // ugcRuntime | Token: 0x4041212
        void* m_Entity2AttackableEntity; // m_Entity2AttackableEntity | Token: 0x4041213
        void* m_Faction2AttackableFaction; // m_Faction2AttackableFaction | Token: 0x4041214
        void* m_Team2AttackableTeam; // m_Team2AttackableTeam | Token: 0x4041215
        void* cacheGameTime; // cacheGameTime | Token: 0x4041216

        // Methods (20)
        // Method: GetExchangeCurrencySubType() | Slot: 23418 | Token: 0x214d7
        using fn_GetExchangeCurrencySubType = void* (*)(UGCHostilityModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCHostilityModule* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0xa52f
        using fn_Method_2 = void* (*)(UGCHostilityModule* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7d61
        using fn_Method_3 = void* (*)(UGCHostilityModule* __this);
        // Method: Method_4() | Slot: 42375 | Token: 0x1df875
        using fn_Method_4 = void* (*)(UGCHostilityModule* __this);
        // Method: Method_5() | Slot: 32097 | Token: 0x7e
        using fn_Method_5 = void* (*)(UGCHostilityModule* __this);
        // Method: Interval() | Slot: 10662 | Token: 0x9e6
        using fn_Interval = void* (*)(UGCHostilityModule* __this);
        // Method: endPropertyID() | Slot: 19 | Token: 0x6035b80
        using fn_endPropertyID = void* (*)(UGCHostilityModule* __this);
        // Method: OnStart() | Slot: 196 | Token: 0xffffffff
        using fn_OnStart = void* (*)(UGCHostilityModule* __this);
        // Method: Assembly-CSharp.dll() | Slot: 23426 | Token: 0x214d8
        using fn_Assembly_CSharp_dll = void* (*)(UGCHostilityModule* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCHostilityModule* __this);
        // Method: Method_11(void* bR, void* P0) | Slot: 5339 | Token: 0x12545
        using fn_Method_11 = void* (*)(UGCHostilityModule* __this, void* bR, void* P0);
        // Method: Method_12() | Slot: 0 | Token: 0x7d61
        using fn_Method_12 = void* (*)(UGCHostilityModule* __this);
        // Method: Method_13(void* circlePlane) | Slot: 9541 | Token: 0x58373f
        using fn_Method_13 = void* (*)(UGCHostilityModule* __this, void* circlePlane);
        // Method: Method_14() | Slot: 32097 | Token: 0x20070
        using fn_Method_14 = void* (*)(UGCHostilityModule* __this);
        // Method: bum() | Slot: 13865 | Token: 0xc4
        using fn_bum = void* (*)(UGCHostilityModule* __this);
        // Method: endPropertyID(void* OJEPOBEENEK, void* EIOKHLKJEEL) | Slot: 99 | Token: 0x6035b88
        using fn_endPropertyID = void* (*)(UGCHostilityModule* __this, void* OJEPOBEENEK, void* EIOKHLKJEEL);
        // Method: CAPEKCLPLAC() | Slot: 196 | Token: 0xffffffff
        using fn_CAPEKCLPLAC = void* (*)(UGCHostilityModule* __this);
        // Method: stopRecordAvailableCallback() | Slot: 23434 | Token: 0x214e3
        using fn_stopRecordAvailableCallback = void* (*)(UGCHostilityModule* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCHostilityModule* __this);
    };

    // TypeDefIndex: 34575 | Original: COW.GamePlay.UGCRuntime.IUGCValue | Token: 0x2008710
    struct IUGCValue : Il2Cpp::Object {

        // Methods (20)
        // Method: Method_0() | Slot: 5348 | Token: 0x12545
        using fn_Method_0 = void* (*)(IUGCValue* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7d61
        using fn_Method_1 = void* (*)(IUGCValue* __this);
        // Method: Method_2() | Slot: 52008 | Token: 0x58544d
        using fn_Method_2 = void* (*)(IUGCValue* __this);
        // Method: Method_3() | Slot: 32097 | Token: 0x84
        using fn_Method_3 = void* (*)(IUGCValue* __this);
        // Method: t() | Slot: 45840 | Token: 0x1c4
        using fn_t = void* (*)(IUGCValue* __this);
        // Method: endPropertyID() | Slot: 65535 | Token: 0x6035b90
        using fn_endPropertyID = void* (*)(IUGCValue* __this);
        // Method: OnOnDestroy() | Slot: 196 | Token: 0xffffffff
        using fn_OnOnDestroy = void* (*)(IUGCValue* __this);
        // Method: mbly-CSharp.dll() | Slot: 23442 | Token: 0xffffffff
        using fn_mbly_CSharp_dll = void* (*)(IUGCValue* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(IUGCValue* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x69c4
        using fn_Method_9 = void* (*)(IUGCValue* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x7d61
        using fn_Method_10 = void* (*)(IUGCValue* __this);
        // Method: terSystem(void* rid) | Slot: 9541 | Token: 0x545d88
        using fn_terSystem = void* (*)(IUGCValue* __this, void* rid);
        // Method: Method_12() | Slot: 32097 | Token: 0x2001f
        using fn_Method_12 = void* (*)(IUGCValue* __this);
        // Method: bum() | Slot: 18858 | Token: 0x1886
        using fn_bum = void* (*)(IUGCValue* __this);
        // Method: endPropertyID() | Slot: 65535 | Token: 0x6035b98
        using fn_endPropertyID = void* (*)(IUGCValue* __this);
        // Method: <>iFixBaseProxy_OnStart() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnStart = void* (*)(IUGCValue* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23450 | Token: 0x214e9
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCValue* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IUGCValue* __this);
        // Method: Method_18() | Slot: 65535 | Token: 0x12545
        using fn_Method_18 = void* (*)(IUGCValue* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x7d61
        using fn_Method_19 = void* (*)(IUGCValue* __this);
    };

    // TypeDefIndex: 34576 | Original: COW.GamePlay.UGCRuntime.UGCEntityRepData | Token: 0x2008711
    struct UGCEntityRepData : Il2Cpp::Object {
        // Fields (7)
        void* _EntityID_k__BackingField; // <EntityID>k__BackingField | Token: 0x4041217
        void* _RepItem_k__BackingField; // <RepItem>k__BackingField | Token: 0x4041218
        void* _ArchTypeID_k__BackingField; // <ArchTypeID>k__BackingField | Token: 0x4041219
        void* _SyncSubLevelID_k__BackingField; // <SyncSubLevelID>k__BackingField | Token: 0x404121a
        void* _Attribute_k__BackingField; // <Attribute>k__BackingField | Token: 0x404121b
        void* _IsRemote_k__BackingField; // <IsRemote>k__BackingField | Token: 0x404121c
        void* _IsEnableClientModify_k__BackingField; // <IsEnableClientModify>k__BackingField | Token: 0x404121d

        // Methods (18)
        // Method: em(void* cam) | Slot: 9541 | Token: 0x50d7a7
        using fn_em = void* (*)(UGCEntityRepData* __this, void* cam);
        // Method: Method_1() | Slot: 32097 | Token: 0xffff
        using fn_Method_1 = void* (*)(UGCEntityRepData* __this);
        // Method: eatherChanged() | Slot: 22168 | Token: 0x6
        using fn_eatherChanged = void* (*)(UGCEntityRepData* __this);
        // Method: endPropertyID(void* P0, void* P1) | Slot: 65535 | Token: 0x6035ba0
        using fn_endPropertyID = void* (*)(UGCEntityRepData* __this, void* P0, void* P1);
        // Method: <>iFixBaseProxy_CLJNEGBICON() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_CLJNEGBICON = void* (*)(UGCEntityRepData* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23458 | Token: 0x214f2
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCEntityRepData* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCEntityRepData* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x12545
        using fn_Method_7 = void* (*)(UGCEntityRepData* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x7d61
        using fn_Method_8 = void* (*)(UGCEntityRepData* __this);
        // Method: Method_9(void* cam) | Slot: 9541 | Token: 0x1d58ab
        using fn_Method_9 = void* (*)(UGCEntityRepData* __this, void* cam);
        // Method: Method_10() | Slot: 32097 | Token: 0xffff
        using fn_Method_10 = void* (*)(UGCEntityRepData* __this);
        // Method: t() | Slot: 9338 | Token: 0x6
        using fn_t = void* (*)(UGCEntityRepData* __this);
        // Method: endPropertyID(void* P0, void* P1) | Slot: 65535 | Token: 0x6035ba8
        using fn_endPropertyID = void* (*)(UGCEntityRepData* __this, void* P0, void* P1);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCEntityRepData* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23466 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCEntityRepData* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UGCEntityRepData* __this);
        // Method: Method_16() | Slot: 65535 | Token: 0x12545
        using fn_Method_16 = void* (*)(UGCEntityRepData* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x7d62
        using fn_Method_17 = void* (*)(UGCEntityRepData* __this);
    };

    // TypeDefIndex: 34578 | Original: COW.GamePlay.UGCRuntime.UGCEntityRepDataItem | Token: 0x2008712
    struct UGCEntityRepDataItem : Il2Cpp::Object {
        // Fields (10)
        void* owner; // owner | Token: 0x404121e
        void* ugcRuntime; // ugcRuntime | Token: 0x404121f
        void* onlyServer; // onlyServer | Token: 0x4041220
        void* propID; // propID | Token: 0x4041221
        void* typeID; // typeID | Token: 0x4041222
        void* value; // value | Token: 0x4041223
        void* tempValueContainer; // tempValueContainer | Token: 0x4041224
        void* isDirty; // isDirty | Token: 0x4041225
        void* flag; // flag | Token: 0x4041226
        void* isDefaultValue; // isDefaultValue | Token: 0x4041227

        // Methods (32)
        // Method: Types(void* circlePlane) | Slot: 9541 | Token: 0x44fb
        using fn_Types = void* (*)(UGCEntityRepDataItem* __this, void* circlePlane);
        // Method: Method_1() | Slot: 32098 | Token: 0x16
        using fn_Method_1 = void* (*)(UGCEntityRepDataItem* __this);
        // Method: t() | Slot: 49583 | Token: 0xc6
        using fn_t = void* (*)(UGCEntityRepDataItem* __this);
        // Method: ndPropertyID() | Slot: 65535 | Token: 0x6035bb0
        using fn_ndPropertyID = void* (*)(UGCEntityRepDataItem* __this);
        // Method: OnLocalPlayerRevived() | Slot: 134 | Token: 0xffffffff
        using fn_OnLocalPlayerRevived = void* (*)(UGCEntityRepDataItem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23474 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCEntityRepDataItem* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCEntityRepDataItem* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x12545
        using fn_Method_7 = void* (*)(UGCEntityRepDataItem* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x7d62
        using fn_Method_8 = void* (*)(UGCEntityRepDataItem* __this);
        // Method: es(void* priority) | Slot: 9541 | Token: 0x585291
        using fn_es = void* (*)(UGCEntityRepDataItem* __this, void* priority);
        // Method: Method_10() | Slot: 32098 | Token: 0x3ffff
        using fn_Method_10 = void* (*)(UGCEntityRepDataItem* __this);
        // Method: bum() | Slot: 21244 | Token: 0x81
        using fn_bum = void* (*)(UGCEntityRepDataItem* __this);
        // Method: ndPropertyID() | Slot: 65535 | Token: 0x6035bb8
        using fn_ndPropertyID = void* (*)(UGCEntityRepDataItem* __this);
        // Method: OnReachUnlockThres() | Slot: 134 | Token: 0xffffffff
        using fn_OnReachUnlockThres = void* (*)(UGCEntityRepDataItem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23482 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCEntityRepDataItem* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCEntityRepDataItem* __this);
        // Method: Method_16() | Slot: 65535 | Token: 0x972e
        using fn_Method_16 = void* (*)(UGCEntityRepDataItem* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x7d62
        using fn_Method_17 = void* (*)(UGCEntityRepDataItem* __this);
        // Method: Method_18(void* priority) | Slot: 9541 | Token: 0x67
        using fn_Method_18 = void* (*)(UGCEntityRepDataItem* __this, void* priority);
        // Method: Method_19() | Slot: 32098 | Token: 0xffff
        using fn_Method_19 = void* (*)(UGCEntityRepDataItem* __this);
        // Method: bum() | Slot: 22421 | Token: 0x6
        using fn_bum = void* (*)(UGCEntityRepDataItem* __this);
        // Method: ndPropertyID(void* P0) | Slot: 65535 | Token: 0x6035bc0
        using fn_ndPropertyID = void* (*)(UGCEntityRepDataItem* __this, void* P0);
        // Method: <>iFixBaseProxy_OnRecycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnRecycle = void* (*)(UGCEntityRepDataItem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23490 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCEntityRepDataItem* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCEntityRepDataItem* __this);
        // Method: Method_25() | Slot: 65535 | Token: 0x12545
        using fn_Method_25 = void* (*)(UGCEntityRepDataItem* __this);
        // Method: Method_26() | Slot: 0 | Token: 0x7d63
        using fn_Method_26 = void* (*)(UGCEntityRepDataItem* __this);
        // Method: Method_27(void* circlePlane) | Slot: 9541 | Token: 0x5835b0
        using fn_Method_27 = void* (*)(UGCEntityRepDataItem* __this, void* circlePlane);
        // Method: Method_28() | Slot: 32099 | Token: 0x5005c
        using fn_Method_28 = void* (*)(UGCEntityRepDataItem* __this);
        // Method: bum() | Slot: 14105 | Token: 0xc4
        using fn_bum = void* (*)(UGCEntityRepDataItem* __this);
        // Method: dPropertyID(void* PKGCDGIPAGE, void* KANPFIDIJCI, void* IDAHCFCBLBA, void* HOLPKMJOFKG) | Slot: 110 | Token: 0x6035bc8
        using fn_dPropertyID = void* (*)(UGCEntityRepDataItem* __this, void* PKGCDGIPAGE, void* KANPFIDIJCI, void* IDAHCFCBLBA, void* HOLPKMJOFKG);
        // Method: OnUpdateVisibleStateByStreamer() | Slot: 196 | Token: 0xffffffff
        using fn_OnUpdateVisibleStateByStreamer = void* (*)(UGCEntityRepDataItem* __this);
    };

    // TypeDefIndex: 34579 | Original: COW.GamePlay.UGCRuntime.UGCSimpleValue | Token: 0x2008714
    struct UGCSimpleValue : Il2Cpp::Object {
        // Fields (10)
        void* value; // value | Token: 0x404122b
        void* floatValue; // floatValue | Token: 0x404122c
        void* int64Value; // int64Value | Token: 0x404122d
        void* vectorValue; // vectorValue | Token: 0x404122e
        void* valueType; // valueType | Token: 0x404122f
        void* defType; // defType | Token: 0x4041230
        void* NULL; // NULL | Token: 0x4041231
        void* emptyList; // emptyList | Token: 0x4041232
        void* emptyListF; // emptyListF | Token: 0x4041233
        void* emptyDic; // emptyDic | Token: 0x4041234

        // Methods (47)
        // Method: ce() | Slot: 23498 | Token: 0x2150f
        using fn_ce = void* (*)(UGCSimpleValue* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCSimpleValue* __this);
        // Method: Method_2() | Slot: 5392 | Token: 0x12545
        using fn_Method_2 = void* (*)(UGCSimpleValue* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7d63
        using fn_Method_3 = void* (*)(UGCSimpleValue* __this);
        // Method: et_data(void* priority) | Slot: 9541 | Token: 0x44fb
        using fn_et_data = void* (*)(UGCSimpleValue* __this, void* priority);
        // Method: Method_5() | Slot: 32099 | Token: 0x16
        using fn_Method_5 = void* (*)(UGCSimpleValue* __this);
        // Method: bum() | Slot: 14115 | Token: 0xc6
        using fn_bum = void* (*)(UGCSimpleValue* __this);
        // Method: dPropertyID() | Slot: 111 | Token: 0x6035bd0
        using fn_dPropertyID = void* (*)(UGCSimpleValue* __this);
        // Method: FCFHNAOBNMP() | Slot: 196 | Token: 0xffffffff
        using fn_FCFHNAOBNMP = void* (*)(UGCSimpleValue* __this);
        // Method: NGE() | Slot: 23506 | Token: 0x21514
        using fn_NGE = void* (*)(UGCSimpleValue* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCSimpleValue* __this);
        // Method: Method_11() | Slot: 5400 | Token: 0x12545
        using fn_Method_11 = void* (*)(UGCSimpleValue* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x7d63
        using fn_Method_12 = void* (*)(UGCSimpleValue* __this);
        // Method: Method_13(void* cutscene) | Slot: 9541 | Token: 0x58c1ff
        using fn_Method_13 = void* (*)(UGCSimpleValue* __this, void* cutscene);
        // Method: Method_14() | Slot: 32099 | Token: 0xffff
        using fn_Method_14 = void* (*)(UGCSimpleValue* __this);
        // Method: bum() | Slot: 49695 | Token: 0x81
        using fn_bum = void* (*)(UGCSimpleValue* __this);
        // Method: dPropertyID() | Slot: 65535 | Token: 0x6035bd8
        using fn_dPropertyID = void* (*)(UGCSimpleValue* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCSimpleValue* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23514 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCSimpleValue* __this);
        // Method: () | Slot: 65535 | Token: 0x8000000
        using fn_unnamed = void* (*)(UGCSimpleValue* __this);
        // Method: Method_20() | Slot: 5401 | Token: 0x12545
        using fn_Method_20 = void* (*)(UGCSimpleValue* __this);
        // Method: Method_21() | Slot: 0 | Token: 0x7d63
        using fn_Method_21 = void* (*)(UGCSimpleValue* __this);
        // Method: Method_22(void* cam) | Slot: 9541 | Token: 0x5854ab
        using fn_Method_22 = void* (*)(UGCSimpleValue* __this, void* cam);
        // Method: Method_23() | Slot: 32099 | Token: 0x4ffff
        using fn_Method_23 = void* (*)(UGCSimpleValue* __this);
        // Method: bum() | Slot: 50417 | Token: 0x6
        using fn_bum = void* (*)(UGCSimpleValue* __this);
        // Method: dPropertyID(void* P0) | Slot: 65535 | Token: 0x6035be0
        using fn_dPropertyID = void* (*)(UGCSimpleValue* __this, void* P0);
        // Method: <>iFixBaseProxy_OnModelShowed() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnModelShowed = void* (*)(UGCSimpleValue* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23522 | Token: 0x21525
        using fn_GetExchangeCurrencySubType = void* (*)(UGCSimpleValue* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCSimpleValue* __this);
        // Method: Method_29() | Slot: 65535 | Token: 0x12545
        using fn_Method_29 = void* (*)(UGCSimpleValue* __this);
        // Method: Method_30() | Slot: 0 | Token: 0x7d63
        using fn_Method_30 = void* (*)(UGCSimpleValue* __this);
        // Method: Method_31(void* cam) | Slot: 9541 | Token: 0x5855a9
        using fn_Method_31 = void* (*)(UGCSimpleValue* __this, void* cam);
        // Method: Method_32() | Slot: 32099 | Token: 0x1ffff
        using fn_Method_32 = void* (*)(UGCSimpleValue* __this);
        // Method: bum() | Slot: 16681 | Token: 0x6
        using fn_bum = void* (*)(UGCSimpleValue* __this);
        // Method: PropertyID() | Slot: 68 | Token: 0x6035be8
        using fn_PropertyID = void* (*)(UGCSimpleValue* __this);
        // Method: OnStart() | Slot: 196 | Token: 0xffffffff
        using fn_OnStart = void* (*)(UGCSimpleValue* __this);
        // Method: Assembly-CSharp.dll() | Slot: 23530 | Token: 0xffffffff
        using fn_Assembly_CSharp_dll = void* (*)(UGCSimpleValue* __this);
        // Method: e() | Slot: 65535 | Token: 0x8000000
        using fn_e = void* (*)(UGCSimpleValue* __this);
        // Method: Method_38() | Slot: 65535 | Token: 0x12545
        using fn_Method_38 = void* (*)(UGCSimpleValue* __this);
        // Method: Method_39() | Slot: 0 | Token: 0x7d64
        using fn_Method_39 = void* (*)(UGCSimpleValue* __this);
        // Method: Method_40(void* cam) | Slot: 9541 | Token: 0x1d59bc
        using fn_Method_40 = void* (*)(UGCSimpleValue* __this, void* cam);
        // Method: Method_41() | Slot: 32101 | Token: 0xffff
        using fn_Method_41 = void* (*)(UGCSimpleValue* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(UGCSimpleValue* __this);
        // Method: opertyID() | Slot: 65535 | Token: 0x6035bf0
        using fn_opertyID = void* (*)(UGCSimpleValue* __this);
        // Method: get_IsLocalPlayerEnter() | Slot: 2182 | Token: 0xffffffff
        using fn_get_IsLocalPlayerEnter = void* (*)(UGCSimpleValue* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23538 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCSimpleValue* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UGCSimpleValue* __this);
    };

    // TypeDefIndex: 34581 | Original: COW.GamePlay.UGCRuntime.UGCCubicBezierV2 | Token: 0x2008715
    struct UGCCubicBezierV2 : Il2Cpp::Object {
        // Fields (5)
        void* SAMPLE_RESOLUTION; // SAMPLE_RESOLUTION | Token: 0x4041235
        void* WEIGHTED_INV_RATIO; // WEIGHTED_INV_RATIO | Token: 0x4041236
        void* WEIGHTED_RATIO; // WEIGHTED_RATIO | Token: 0x4041237
        void* m_floats; // m_floats | Token: 0x4041238
        void* m_clips; // m_clips | Token: 0x4041239

        // Methods (11)
        // Method: Method_0() | Slot: 65535 | Token: 0xd8fc
        using fn_Method_0 = void* (*)(UGCCubicBezierV2* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7d6a
        using fn_Method_1 = void* (*)(UGCCubicBezierV2* __this);
        // Method: Method_2(void* priority) | Slot: 8434 | Token: 0x5213ab
        using fn_Method_2 = void* (*)(UGCCubicBezierV2* __this, void* priority);
        // Method: Method_3() | Slot: 32106 | Token: 0xffff
        using fn_Method_3 = void* (*)(UGCCubicBezierV2* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 50061 | Token: 0x86
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(UGCCubicBezierV2* __this);
        // Method: tyID() | Slot: 65535 | Token: 0x6035bf8
        using fn_tyID = void* (*)(UGCCubicBezierV2* __this);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(UGCCubicBezierV2* __this);
        // Method: `2() | Slot: 23546 | Token: 0xffffffff
        using fn__2 = void* (*)(UGCCubicBezierV2* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCCubicBezierV2* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x12545
        using fn_Method_9 = void* (*)(UGCCubicBezierV2* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x7d6a
        using fn_Method_10 = void* (*)(UGCCubicBezierV2* __this);
    };

    // TypeDefIndex: 34582 | Original: COW.GamePlay.UGCRuntime.BezierSegment | Token: 0x2008717
    struct BezierSegment : Il2Cpp::Object {
        // Fields (5)
        void* p0; // p0 | Token: 0x4041242
        void* c1; // c1 | Token: 0x4041243
        void* c2; // c2 | Token: 0x4041244
        void* p3; // p3 | Token: 0x4041245
        void* sampleCount; // sampleCount | Token: 0x4041246

        // Methods (8)
        // Method: Method_0() | Slot: 32106 | Token: 0x12
        using fn_Method_0 = void* (*)(BezierSegment* __this);
        // Method: bum() | Slot: 50082 | Token: 0xc4
        using fn_bum = void* (*)(BezierSegment* __this);
        // Method: tyID(void* GNBOOELAHNP, void* LAHMCKAGGCO) | Slot: 65535 | Token: 0x6035c00
        using fn_tyID = void* (*)(BezierSegment* __this, void* GNBOOELAHNP, void* LAHMCKAGGCO);
        // Method: IsUseByOtherPlayer() | Slot: 134 | Token: 0xffffffff
        using fn_IsUseByOtherPlayer = void* (*)(BezierSegment* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23554 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(BezierSegment* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(BezierSegment* __this);
        // Method: Method_6() | Slot: 5421 | Token: 0x12545
        using fn_Method_6 = void* (*)(BezierSegment* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7d6a
        using fn_Method_7 = void* (*)(BezierSegment* __this);
    };

    // TypeDefIndex: 34583 | Original: COW.GamePlay.UGCRuntime.PositiveInfinityBezierSegment | Token: 0x2008718
    struct PositiveInfinityBezierSegment : Il2Cpp::Object {

        // Methods (5)
        // Method: achedRaceDatas(void* priority) | Slot: 9541 | Token: 0x58c3e5
        using fn_achedRaceDatas = void* (*)(PositiveInfinityBezierSegment* __this, void* priority);
        // Method: Method_1() | Slot: 32106 | Token: 0x3ffff
        using fn_Method_1 = void* (*)(PositiveInfinityBezierSegment* __this);
        // Method: bum() | Slot: 63012 | Token: 0x81
        using fn_bum = void* (*)(PositiveInfinityBezierSegment* __this);
        // Method: tyID() | Slot: 83 | Token: 0x6035c08
        using fn_tyID = void* (*)(PositiveInfinityBezierSegment* __this);
        // Method: OPDFOLOPHBB() | Slot: 196 | Token: 0xffffffff
        using fn_OPDFOLOPHBB = void* (*)(PositiveInfinityBezierSegment* __this);
    };

    // TypeDefIndex: 34584 | Original: COW.GamePlay.UGCRuntime.MinusInfinityBezierSegment | Token: 0x2008719
    struct MinusInfinityBezierSegment : Il2Cpp::Object {

        // Methods (5)
        // Method: player() | Slot: 23562 | Token: 0x21535
        using fn_player = void* (*)(MinusInfinityBezierSegment* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(MinusInfinityBezierSegment* __this);
        // Method: Method_2() | Slot: 5431 | Token: 0x9fca
        using fn_Method_2 = void* (*)(MinusInfinityBezierSegment* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7d6a
        using fn_Method_3 = void* (*)(MinusInfinityBezierSegment* __this);
        // Method: Method_4(void* d) | Slot: 9541 | Token: 0x5690ee
        using fn_Method_4 = void* (*)(MinusInfinityBezierSegment* __this, void* d);
    };

    // TypeDefIndex: 34585 | Original: COW.GamePlay.UGCRuntime.UGCTweenUtil | Token: 0x200871a
    struct UGCTweenUtil : Il2Cpp::Object {
        // Fields (1)
        void* S_TWEEN_PROPERTIES; // S_TWEEN_PROPERTIES | Token: 0x4041247

        // Methods (6)
        // Method: Method_0() | Slot: 32106 | Token: 0x52
        using fn_Method_0 = void* (*)(UGCTweenUtil* __this);
        // Method: bum() | Slot: 5403 | Token: 0x81
        using fn_bum = void* (*)(UGCTweenUtil* __this);
        // Method: tyID() | Slot: 65535 | Token: 0x6035c10
        using fn_tyID = void* (*)(UGCTweenUtil* __this);
        // Method: EEDDNGGLHFN() | Slot: 132 | Token: 0xffffffff
        using fn_EEDDNGGLHFN = void* (*)(UGCTweenUtil* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23570 | Token: 0x2153a
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTweenUtil* __this);
        // Method: t() | Slot: 65535 | Token: 0x8000000
        using fn_t = void* (*)(UGCTweenUtil* __this);
    };

    // TypeDefIndex: 34586 | Original: COW.GamePlay.UGCRuntime.UGCPlayableModule | Token: 0x200871b
    struct UGCPlayableModule : Il2Cpp::Object {
        // Fields (10)
        void* C_PLAYABLE_FLAG_RESET; // C_PLAYABLE_FLAG_RESET | Token: 0x4041248
        void* C_PLAYABLE_FLAG_PLAYED; // C_PLAYABLE_FLAG_PLAYED | Token: 0x4041249
        void* C_PLAYABLE_FLAG_WAIT; // C_PLAYABLE_FLAG_WAIT | Token: 0x404124a
        void* ugcRuntime; // ugcRuntime | Token: 0x404124b
        void* entityModule; // entityModule | Token: 0x404124c
        void* guid; // guid | Token: 0x404124d
        void* prevGameTime; // prevGameTime | Token: 0x404124e
        void* m_playableSystem; // m_playableSystem | Token: 0x404124f
        void* m_uGCCubicBezierV2; // m_uGCCubicBezierV2 | Token: 0x4041250
        void* m_uGCCubicBezier; // m_uGCCubicBezier | Token: 0x4041251

        // Methods (24)
        // Method: Method_0(void* data, void* data) | Slot: 5436 | Token: 0x12545
        using fn_Method_0 = void* (*)(UGCPlayableModule* __this, void* data, void* data);
        // Method: Method_1() | Slot: 0 | Token: 0x7d6a
        using fn_Method_1 = void* (*)(UGCPlayableModule* __this);
        // Method: (void* circlePlane) | Slot: 9541 | Token: 0x58c451
        using fn_unnamed = void* (*)(UGCPlayableModule* __this, void* circlePlane);
        // Method: Method_3() | Slot: 32106 | Token: 0x1ffff
        using fn_Method_3 = void* (*)(UGCPlayableModule* __this);
        // Method: bum() | Slot: 50281 | Token: 0x81
        using fn_bum = void* (*)(UGCPlayableModule* __this);
        // Method: tyID() | Slot: 65535 | Token: 0x6035c18
        using fn_tyID = void* (*)(UGCPlayableModule* __this);
        // Method: OnLocalPlayerEnter() | Slot: 134 | Token: 0xffffffff
        using fn_OnLocalPlayerEnter = void* (*)(UGCPlayableModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23578 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPlayableModule* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCPlayableModule* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x12545
        using fn_Method_9 = void* (*)(UGCPlayableModule* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x7d6a
        using fn_Method_10 = void* (*)(UGCPlayableModule* __this);
        // Method: Method_11(void* priority) | Slot: 9541 | Token: 0x58c498
        using fn_Method_11 = void* (*)(UGCPlayableModule* __this, void* priority);
        // Method: Method_12() | Slot: 32106 | Token: 0xffff
        using fn_Method_12 = void* (*)(UGCPlayableModule* __this);
        // Method: bum() | Slot: 16131 | Token: 0x1886
        using fn_bum = void* (*)(UGCPlayableModule* __this);
        // Method: tyID() | Slot: 65535 | Token: 0x6035c20
        using fn_tyID = void* (*)(UGCPlayableModule* __this);
        // Method: <>iFixBaseProxy_OnAwake() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnAwake = void* (*)(UGCPlayableModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23586 | Token: 0x2153f
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPlayableModule* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCPlayableModule* __this);
        // Method: Method_18() | Slot: 65535 | Token: 0x12545
        using fn_Method_18 = void* (*)(UGCPlayableModule* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x7d6a
        using fn_Method_19 = void* (*)(UGCPlayableModule* __this);
        // Method: Method_20(void* cam) | Slot: 9541 | Token: 0x50d7a7
        using fn_Method_20 = void* (*)(UGCPlayableModule* __this, void* cam);
        // Method: Method_21() | Slot: 32106 | Token: 0xffff
        using fn_Method_21 = void* (*)(UGCPlayableModule* __this);
        // Method: Interval() | Slot: 50340 | Token: 0x6
        using fn_Interval = void* (*)(UGCPlayableModule* __this);
        // Method: tyID() | Slot: 65535 | Token: 0x6035c28
        using fn_tyID = void* (*)(UGCPlayableModule* __this);
    };

    // TypeDefIndex: 34587 | Original: COW.GamePlay.UGCRuntime.UGCSkeletonPartControllerModule | Token: 0x200871c
    struct UGCSkeletonPartControllerModule : Il2Cpp::Object {
        // Fields (6)
        void* m_ugcRuntime; // m_ugcRuntime | Token: 0x4041252
        void* m_entityModule; // m_entityModule | Token: 0x4041253
        void* m_guid; // m_guid | Token: 0x4041254
        void* m_prevGameTime; // m_prevGameTime | Token: 0x4041255
        void* m_skeletonOwners; // m_skeletonOwners | Token: 0x4041256
        void* m_skeletonPartControllerMap; // m_skeletonPartControllerMap | Token: 0x4041257

        // Methods (17)
        // Method: <>iFixBaseProxy_OPDFOLOPHBB() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OPDFOLOPHBB = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23594 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: Method_3() | Slot: 5440 | Token: 0x12545
        using fn_Method_3 = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7d6a
        using fn_Method_4 = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: edata(void* cam) | Slot: 9541 | Token: 0x67
        using fn_edata = void* (*)(UGCSkeletonPartControllerModule* __this, void* cam);
        // Method: Method_6() | Slot: 32104 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: bum() | Slot: 8587 | Token: 0x1e1
        using fn_bum = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: ertyID() | Slot: 6 | Token: 0x6035c30
        using fn_ertyID = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: System.Collections.Generic.IEnumerator<System.Object>.get_Current() | Slot: 2529 | Token: 0xffffffff
        using fn_System_Collections_Generic_IEnumerator_System_Object__get_Current = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: mbly-CSharp() | Slot: 23602 | Token: 0xffffffff
        using fn_mbly_CSharp = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: ACount() | Slot: 65535 | Token: 0x8000000
        using fn_ACount = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: Method_12(void* values, void* index) | Slot: 5443 | Token: 0x12545
        using fn_Method_12 = void* (*)(UGCSkeletonPartControllerModule* __this, void* values, void* index);
        // Method: Method_13() | Slot: 0 | Token: 0x7d69
        using fn_Method_13 = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: Method_14() | Slot: 27076 | Token: 0x218b
        using fn_Method_14 = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: Method_15() | Slot: 32105 | Token: 0x6
        using fn_Method_15 = void* (*)(UGCSkeletonPartControllerModule* __this);
        // Method: Arm() | Slot: 8662 | Token: 0x9e1
        using fn_Arm = void* (*)(UGCSkeletonPartControllerModule* __this);
    };

    // TypeDefIndex: 34588 | Original: COW.GamePlay.UGCRuntime.IUGCTweenCurve | Token: 0x200871d
    struct IUGCTweenCurve : Il2Cpp::Object {

        // Methods (1)
        // Method: rtyID() | Slot: 8 | Token: 0x6035c38
        using fn_rtyID = void* (*)(IUGCTweenCurve* __this);
    };

    // TypeDefIndex: 34589 | Original: COW.GamePlay.UGCRuntime.UGCCubicBezier | Token: 0x200871e
    struct UGCCubicBezier : Il2Cpp::Object {
        // Fields (7)
        void* SAMPLE_RESOLUTION; // SAMPLE_RESOLUTION | Token: 0x4041258
        void* x1; // x1 | Token: 0x4041259
        void* y1; // y1 | Token: 0x404125a
        void* x2; // x2 | Token: 0x404125b
        void* y2; // y2 | Token: 0x404125c
        void* presampled; // presampled | Token: 0x404125d
        void* clips; // clips | Token: 0x404125e

        // Methods (5)
        // Method: System.Collections.IEnumerator.get_Current() | Slot: 2529 | Token: 0xffffffff
        using fn_System_Collections_IEnumerator_get_Current = void* (*)(UGCCubicBezier* __this);
        // Method: y-CSharp() | Slot: 23610 | Token: 0xffffffff
        using fn_y_CSharp = void* (*)(UGCCubicBezier* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCCubicBezier* __this);
        // Method: Method_3() | Slot: 5445 | Token: 0x69c4
        using fn_Method_3 = void* (*)(UGCCubicBezier* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7d6b
        using fn_Method_4 = void* (*)(UGCCubicBezier* __this);
    };

    // TypeDefIndex: 34590 | Original: COW.GamePlay.UGCRuntime.UGCProfilerDataIO | Token: 0x200871f
    struct UGCProfilerDataIO : Il2Cpp::Object {
        // Fields (1)
        void* CSV_HEADER; // CSV_HEADER | Token: 0x404125f

        // Methods (4)
        // Method: (void* circlePlane) | Slot: 9541 | Token: 0x67
        using fn_unnamed = void* (*)(UGCProfilerDataIO* __this, void* circlePlane);
        // Method: Method_1() | Slot: 32107 | Token: 0xffff
        using fn_Method_1 = void* (*)(UGCProfilerDataIO* __this);
        // Method: bum() | Slot: 50725 | Token: 0x6
        using fn_bum = void* (*)(UGCProfilerDataIO* __this);
        // Method: yID(void* P0) | Slot: 65535 | Token: 0x6035c40
        using fn_yID = void* (*)(UGCProfilerDataIO* __this, void* P0);
    };

    // TypeDefIndex: 34591 | Original: COW.GamePlay.UGCRuntime.ProfilerEntityInfo | Token: 0x2008720
    struct ProfilerEntityInfo : Il2Cpp::Object {
        // Fields (3)
        void* entityId; // entityId | Token: 0x4041260
        void* sourceID; // sourceID | Token: 0x4041261
        void* codeID; // codeID | Token: 0x4041262

        // Methods (1)
        // Method: DoAction() | Slot: 198 | Token: 0xffffffff
        using fn_DoAction = void* (*)(ProfilerEntityInfo* __this);
    };

    // TypeDefIndex: 34592 | Original: COW.GamePlay.UGCRuntime.UGCProfilerFrameExtraData | Token: 0x2008721
    struct UGCProfilerFrameExtraData : Il2Cpp::Object {
        // Fields (8)
        void* addEntityData; // addEntityData | Token: 0x4041263
        void* removeEntityData; // removeEntityData | Token: 0x4041264
        void* sceneDrawCalls; // sceneDrawCalls | Token: 0x4041265
        void* physicsCostMs; // physicsCostMs | Token: 0x4041266
        void* triangleCount; // triangleCount | Token: 0x4041267
        void* effectCount; // effectCount | Token: 0x4041268
        void* particleCount; // particleCount | Token: 0x4041269
        void* totalUsedBytes; // totalUsedBytes | Token: 0x404126a

        // Methods (1)
        // Method: changeCurrencyType() | Slot: 23618 | Token: 0xffffffff
        using fn_changeCurrencyType = void* (*)(UGCProfilerFrameExtraData* __this);
    };

    // TypeDefIndex: 34593 | Original: COW.GamePlay.UGCRuntime.ProfilerSample | Token: 0x2008722
    struct ProfilerSample : Il2Cpp::Object {
        // Fields (7)
        void* name; // name | Token: 0x404126b
        void* parentIndex; // parentIndex | Token: 0x404126c
        void* depth; // depth | Token: 0x404126d
        void* callCount; // callCount | Token: 0x404126e
        void* totalTicks; // totalTicks | Token: 0x404126f
        void* totalMemoryDelta; // totalMemoryDelta | Token: 0x4041270
        void* codeID; // codeID | Token: 0x4041271

        // Methods (4)
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(ProfilerSample* __this);
        // Method: Method_1() | Slot: 5450 | Token: 0x12545
        using fn_Method_1 = void* (*)(ProfilerSample* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7d74
        using fn_Method_2 = void* (*)(ProfilerSample* __this);
        // Method: Method_3(void* d) | Slot: 9110 | Token: 0x58c674
        using fn_Method_3 = void* (*)(ProfilerSample* __this, void* d);
    };

    // TypeDefIndex: 34594 | Original: COW.GamePlay.UGCRuntime.ProfilerFrame | Token: 0x2008723
    struct ProfilerFrame : Il2Cpp::Object {
        // Fields (6)
        void* frameIndex; // frameIndex | Token: 0x4041272
        void* timeOffsetMs; // timeOffsetMs | Token: 0x4041273
        void* totalCpuMs; // totalCpuMs | Token: 0x4041274
        void* totalMemoryDelta; // totalMemoryDelta | Token: 0x4041275
        void* samples; // samples | Token: 0x4041276
        void* extraData; // extraData | Token: 0x4041277

        // Methods (2)
        // Method: Method_0() | Slot: 32116 | Token: 0xffff
        using fn_Method_0 = void* (*)(ProfilerFrame* __this);
        // Method: Data() | Slot: 17772 | Token: 0x881
        using fn_Data = void* (*)(ProfilerFrame* __this);
    };

    // TypeDefIndex: 34595 | Original: COW.GamePlay.UGCRuntime.UGCRuntimeProfiler | Token: 0x2008724
    struct UGCRuntimeProfiler : Il2Cpp::Object {
        // Fields (31)
        void* isRecording; // isRecording | Token: 0x4041278
        void* stopwatch; // stopwatch | Token: 0x4041279
        void* maxFrameCount; // maxFrameCount | Token: 0x404127a
        void* maxCallDepth; // maxCallDepth | Token: 0x404127b
        void* frameBuffer; // frameBuffer | Token: 0x404127c
        void* frameWriteIndex; // frameWriteIndex | Token: 0x404127d
        void* frameCount; // frameCount | Token: 0x404127e
        void* globalFrameIndex; // globalFrameIndex | Token: 0x404127f
        void* currentFrame; // currentFrame | Token: 0x4041280
        void* parentStack; // parentStack | Token: 0x4041281
        void* beginTicks; // beginTicks | Token: 0x4041282
        void* beginMemory; // beginMemory | Token: 0x4041283
        void* sampleIdxStack; // sampleIdxStack | Token: 0x4041284
        void* mergeLookup; // mergeLookup | Token: 0x4041285
        void* lastWarningFrame; // lastWarningFrame | Token: 0x4041286
        void* skippedDepthCount; // skippedDepthCount | Token: 0x4041287
        void* SKIPPED_SAMPLE_IDX; // SKIPPED_SAMPLE_IDX | Token: 0x4041288
        void* allEntitySnapshot; // allEntitySnapshot | Token: 0x4041289
        void* pendingAddEntities; // pendingAddEntities | Token: 0x404128a
        void* pendingRemoveEntities; // pendingRemoveEntities | Token: 0x404128b
        void* registeredDataStore; // registeredDataStore | Token: 0x404128c
        void* effectEntityIds; // effectEntityIds | Token: 0x404128d
        void* particleEntityIds; // particleEntityIds | Token: 0x404128e
        void* particleSystemCache; // particleSystemCache | Token: 0x404128f
        void* particleSystemBuffer; // particleSystemBuffer | Token: 0x4041290
        void* trianglesRecorder; // trianglesRecorder | Token: 0x4041291
        void* drawCallsRecorder; // drawCallsRecorder | Token: 0x4041292
        void* physicsSimulateRecorder; // physicsSimulateRecorder | Token: 0x4041293
        void* lastNonZeroTriangles; // lastNonZeroTriangles | Token: 0x4041294
        void* lastNonZeroDrawCalls; // lastNonZeroDrawCalls | Token: 0x4041295
        void* NANOSEC_TO_MILLISEC; // NANOSEC_TO_MILLISEC | Token: 0x4041296

        // Methods (26)
        // Method: erFogColorID() | Slot: 117 | Token: 0x6035c48
        using fn_erFogColorID = void* (*)(UGCRuntimeProfiler* __this);
        // Method: OnAwake() | Slot: 196 | Token: 0xffffffff
        using fn_OnAwake = void* (*)(UGCRuntimeProfiler* __this);
        // Method: () | Slot: 23626 | Token: 0xffffffff
        using fn_unnamed = void* (*)(UGCRuntimeProfiler* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCRuntimeProfiler* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(UGCRuntimeProfiler* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7d74
        using fn_Method_5 = void* (*)(UGCRuntimeProfiler* __this);
        // Method: obeRecipeListItem(void* priority) | Slot: 9541 | Token: 0x545d88
        using fn_obeRecipeListItem = void* (*)(UGCRuntimeProfiler* __this, void* priority);
        // Method: Method_7() | Slot: 32116 | Token: 0x2001f
        using fn_Method_7 = void* (*)(UGCRuntimeProfiler* __this);
        // Method: bum() | Slot: 50852 | Token: 0xc4
        using fn_bum = void* (*)(UGCRuntimeProfiler* __this);
        // Method: erFogColorID(void* JCONDDPFBKK) | Slot: 65535 | Token: 0x6035c50
        using fn_erFogColorID = void* (*)(UGCRuntimeProfiler* __this, void* JCONDDPFBKK);
        // Method: OnDead() | Slot: 198 | Token: 0xffffffff
        using fn_OnDead = void* (*)(UGCRuntimeProfiler* __this);
        // Method: NONE() | Slot: 23634 | Token: 0xffffffff
        using fn_NONE = void* (*)(UGCRuntimeProfiler* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCRuntimeProfiler* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(UGCRuntimeProfiler* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x7d74
        using fn_Method_14 = void* (*)(UGCRuntimeProfiler* __this);
        // Method: Method_15(void* rid) | Slot: 9541 | Token: 0x567da3
        using fn_Method_15 = void* (*)(UGCRuntimeProfiler* __this, void* rid);
        // Method: Method_16() | Slot: 32116 | Token: 0xffff
        using fn_Method_16 = void* (*)(UGCRuntimeProfiler* __this);
        // Method: Interval() | Slot: 55008 | Token: 0xc4
        using fn_Interval = void* (*)(UGCRuntimeProfiler* __this);
        // Method: erFogColorID() | Slot: 34 | Token: 0x6035c58
        using fn_erFogColorID = void* (*)(UGCRuntimeProfiler* __this);
        // Method: GIGMKAAMOCK() | Slot: 129 | Token: 0xffffffff
        using fn_GIGMKAAMOCK = void* (*)(UGCRuntimeProfiler* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23642 | Token: 0x21553
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCRuntimeProfiler* __this);
        // Method: e() | Slot: 65535 | Token: 0x8000000
        using fn_e = void* (*)(UGCRuntimeProfiler* __this);
        // Method: Method_22() | Slot: 5461 | Token: 0x12545
        using fn_Method_22 = void* (*)(UGCRuntimeProfiler* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x7d74
        using fn_Method_23 = void* (*)(UGCRuntimeProfiler* __this);
        // Method: stItem(void* priority) | Slot: 9541 | Token: 0x58c6f8
        using fn_stItem = void* (*)(UGCRuntimeProfiler* __this, void* priority);
        // Method: Method_25() | Slot: 32116 | Token: 0x2ffff
        using fn_Method_25 = void* (*)(UGCRuntimeProfiler* __this);
    };

    // TypeDefIndex: 34596 | Original: COW.GamePlay.UGCRuntime.FCHDNHHCHBI | Token: 0x2008725
    struct FCHDNHHCHBI : Il2Cpp::Object {
        // Fields (3)
        void* GPEKIAJGHOD; // GPEKIAJGHOD | Token: 0x4041297
        void* FAPBIEBAJHJ; // FAPBIEBAJHJ | Token: 0x4041298
        void* MKGPJLAAFCA; // MKGPJLAAFCA | Token: 0x4041299

        // Methods (9)
        // Method: bum() | Slot: 31230 | Token: 0xc6
        using fn_bum = void* (*)(FCHDNHHCHBI* __this);
        // Method: erFogColorID(void* PGEGMKJKOKI, void* HDGIHCBAOEN) | Slot: 65535 | Token: 0x6035c60
        using fn_erFogColorID = void* (*)(FCHDNHHCHBI* __this, void* PGEGMKJKOKI, void* HDGIHCBAOEN);
        // Method: EIAEKGAFINL() | Slot: 129 | Token: 0xffffffff
        using fn_EIAEKGAFINL = void* (*)(FCHDNHHCHBI* __this);
        // Method: _WAIT() | Slot: 23650 | Token: 0x21560
        using fn__WAIT = void* (*)(FCHDNHHCHBI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(FCHDNHHCHBI* __this);
        // Method: Method_5() | Slot: 5476 | Token: 0xd09f
        using fn_Method_5 = void* (*)(FCHDNHHCHBI* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7d74
        using fn_Method_6 = void* (*)(FCHDNHHCHBI* __this);
        // Method: ame(void* priority) | Slot: 9541 | Token: 0x58c728
        using fn_ame = void* (*)(FCHDNHHCHBI* __this, void* priority);
        // Method: Method_8() | Slot: 32116 | Token: 0x3ffff
        using fn_Method_8 = void* (*)(FCHDNHHCHBI* __this);
    };

    // TypeDefIndex: 34597 | Original: COW.GamePlay.UGCRuntime.UGCAvatarModule | Token: 0x2008726
    struct UGCAvatarModule : Il2Cpp::Object {
        // Fields (5)
        void* ugcRuntime; // ugcRuntime | Token: 0x404129a
        void* dataStore; // dataStore | Token: 0x404129b
        void* avatarMap; // avatarMap | Token: 0x404129c
        void* lastTickGameTime; // lastTickGameTime | Token: 0x404129d
        void* m_materialOverride; // m_materialOverride | Token: 0x404129e

        // Methods (20)
        // Method: bum() | Slot: 23937 | Token: 0x81
        using fn_bum = void* (*)(UGCAvatarModule* __this);
        // Method: erFogColorID(void* GGAOIPIHOBP, void* BBPCHCNOECP, void* HACIJIFIDKM) | Slot: 65535 | Token: 0x6035c68
        using fn_erFogColorID = void* (*)(UGCAvatarModule* __this, void* GGAOIPIHOBP, void* BBPCHCNOECP, void* HACIJIFIDKM);
        // Method: DNENKHFBFNL() | Slot: 129 | Token: 0xffffffff
        using fn_DNENKHFBFNL = void* (*)(UGCAvatarModule* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23658 | Token: 0x2156f
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCAvatarModule* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCAvatarModule* __this);
        // Method: Method_5() | Slot: 5490 | Token: 0x12545
        using fn_Method_5 = void* (*)(UGCAvatarModule* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7d74
        using fn_Method_6 = void* (*)(UGCAvatarModule* __this);
        // Method: ompatibleRaces(void* priority) | Slot: 9541 | Token: 0x53501
        using fn_ompatibleRaces = void* (*)(UGCAvatarModule* __this, void* priority);
        // Method: Method_8() | Slot: 32116 | Token: 0xffff
        using fn_Method_8 = void* (*)(UGCAvatarModule* __this);
        // Method: bum() | Slot: 28322 | Token: 0x81
        using fn_bum = void* (*)(UGCAvatarModule* __this);
        // Method: erFogColorID() | Slot: 65535 | Token: 0x6035c70
        using fn_erFogColorID = void* (*)(UGCAvatarModule* __this);
        // Method: NAMCMPDHOAM() | Slot: 129 | Token: 0xffffffff
        using fn_NAMCMPDHOAM = void* (*)(UGCAvatarModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23666 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCAvatarModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCAvatarModule* __this);
        // Method: Method_14() | Slot: 65535 | Token: 0x12545
        using fn_Method_14 = void* (*)(UGCAvatarModule* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x7d74
        using fn_Method_15 = void* (*)(UGCAvatarModule* __this);
        // Method: atibleRaces(void* priority) | Slot: 9541 | Token: 0x58c79b
        using fn_atibleRaces = void* (*)(UGCAvatarModule* __this, void* priority);
        // Method: Method_17() | Slot: 32116 | Token: 0x4ffff
        using fn_Method_17 = void* (*)(UGCAvatarModule* __this);
        // Method: bum() | Slot: 103 | Token: 0x81
        using fn_bum = void* (*)(UGCAvatarModule* __this);
        // Method: erFogColorID() | Slot: 65535 | Token: 0x6035c78
        using fn_erFogColorID = void* (*)(UGCAvatarModule* __this);
    };

    // TypeDefIndex: 34598 | Original: COW.GamePlay.UGCRuntime.UGCAvatarPartInfo | Token: 0x2008727
    struct UGCAvatarPartInfo : Il2Cpp::Object {

        // Methods (1)
        // Method: <>iFixBaseProxy_OnAwake() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnAwake = void* (*)(UGCAvatarPartInfo* __this);
    };

    // TypeDefIndex: 34600 | Original: COW.GamePlay.UGCRuntime.UGCAvatarController | Token: 0x2008728
    struct UGCAvatarController : Il2Cpp::Object {
        // Fields (10)
        void* ugcRuntime; // ugcRuntime | Token: 0x404129f
        void* resController; // resController | Token: 0x40412a0
        void* partList; // partList | Token: 0x40412a1
        void* ControllerEntity; // ControllerEntity | Token: 0x40412a2
        void* entityModule; // entityModule | Token: 0x40412a3
        void* tempDisableGroupList; // tempDisableGroupList | Token: 0x40412a4
        void* ControllerEntityName; // ControllerEntityName | Token: 0x40412a5
        void* m_linkedAvatarSystem; // m_linkedAvatarSystem | Token: 0x40412a6
        void* m_onPartCreatedHandler; // m_onPartCreatedHandler | Token: 0x40412a7
        void* m_avatarAbleID; // m_avatarAbleID | Token: 0x40412a8

        // Methods (19)
        // Method: GetExchangeCurrencySubType() | Slot: 23674 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCAvatarController* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCAvatarController* __this);
        // Method: Method_2() | Slot: 5504 | Token: 0x12545
        using fn_Method_2 = void* (*)(UGCAvatarController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7d74
        using fn_Method_3 = void* (*)(UGCAvatarController* __this);
        // Method: (void* cam) | Slot: 9541 | Token: 0x58c625
        using fn_unnamed = void* (*)(UGCAvatarController* __this, void* cam);
        // Method: Method_5() | Slot: 32116 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(UGCAvatarController* __this);
        // Method: bum() | Slot: 22699 | Token: 0x6
        using fn_bum = void* (*)(UGCAvatarController* __this);
        // Method: erFogColorID() | Slot: 65535 | Token: 0x6035c80
        using fn_erFogColorID = void* (*)(UGCAvatarController* __this);
        // Method: <>iFixBaseProxy_GetMaxRepDataCount() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_GetMaxRepDataCount = void* (*)(UGCAvatarController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23682 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCAvatarController* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCAvatarController* __this);
        // Method: Method_11() | Slot: 5509 | Token: 0x12545
        using fn_Method_11 = void* (*)(UGCAvatarController* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x7d74
        using fn_Method_12 = void* (*)(UGCAvatarController* __this);
        // Method: robeRecipeList(void* cam) | Slot: 9541 | Token: 0x67
        using fn_robeRecipeList = void* (*)(UGCAvatarController* __this, void* cam);
        // Method: Method_14() | Slot: 32111 | Token: 0xffff
        using fn_Method_14 = void* (*)(UGCAvatarController* __this);
        // Method: bum() | Slot: 103 | Token: 0x83
        using fn_bum = void* (*)(UGCAvatarController* __this);
        // Method: _WaterFogColorID() | Slot: 65535 | Token: 0x6035c88
        using fn__WaterFogColorID = void* (*)(UGCAvatarController* __this);
        // Method: JMOFBAGFHCA() | Slot: 131 | Token: 0xffffffff
        using fn_JMOFBAGFHCA = void* (*)(UGCAvatarController* __this);
        // Method: imable() | Slot: 23690 | Token: 0xffffffff
        using fn_imable = void* (*)(UGCAvatarController* __this);
    };

    // TypeDefIndex: 34607 | Original: COW.GamePlay.UGCRuntime.UGCAvatarMaterialOverride | Token: 0x200872a
    struct UGCAvatarMaterialOverride : Il2Cpp::Object {
        // Fields (6)
        void* MAX_OVERRIDE_PER_ENTITY; // MAX_OVERRIDE_PER_ENTITY | Token: 0x40412af
        void* m_overrideMap; // m_overrideMap | Token: 0x40412b0
        void* m_partIndex; // m_partIndex | Token: 0x40412b1
        void* m_entityOverrideCount; // m_entityOverrideCount | Token: 0x40412b2
        void* m_loadedMatCache; // m_loadedMatCache | Token: 0x40412b3
        void* m_defaultMaterialSnapshot; // m_defaultMaterialSnapshot | Token: 0x40412b4

        // Methods (15)
        // Method: Method_0(void* strAPPSecret) | Slot: 9541 | Token: 0x58c91e
        using fn_Method_0 = void* (*)(UGCAvatarMaterialOverride* __this, void* strAPPSecret);
        // Method: Method_1() | Slot: 32117 | Token: 0x3ffff
        using fn_Method_1 = void* (*)(UGCAvatarMaterialOverride* __this);
        // Method: bum() | Slot: 32902 | Token: 0x5c6
        using fn_bum = void* (*)(UGCAvatarMaterialOverride* __this);
        // Method: rFogColorID(void* NIBBKONKPHP, void* KECDHKLPGFL) | Slot: 1 | Token: 0x6035c90
        using fn_rFogColorID = void* (*)(UGCAvatarMaterialOverride* __this, void* NIBBKONKPHP, void* KECDHKLPGFL);
        // Method: ReleaseMounted() | Slot: 1478 | Token: 0xffffffff
        using fn_ReleaseMounted = void* (*)(UGCAvatarMaterialOverride* __this);
        // Method: sembly-CSharp() | Slot: 23698 | Token: 0xffffffff
        using fn_sembly_CSharp = void* (*)(UGCAvatarMaterialOverride* __this);
        // Method: BuffFactor() | Slot: 65535 | Token: 0x8000000
        using fn_BuffFactor = void* (*)(UGCAvatarMaterialOverride* __this);
        // Method: Method_7(void* info, void* context) | Slot: 5529 | Token: 0x12545
        using fn_Method_7 = void* (*)(UGCAvatarMaterialOverride* __this, void* info, void* context);
        // Method: Method_8() | Slot: 0 | Token: 0x7d7a
        using fn_Method_8 = void* (*)(UGCAvatarMaterialOverride* __this);
        // Method: Method_9(void* d) | Slot: 9541 | Token: 0x44fb
        using fn_Method_9 = void* (*)(UGCAvatarMaterialOverride* __this, void* d);
        // Method: Method_10() | Slot: 32122 | Token: 0x16
        using fn_Method_10 = void* (*)(UGCAvatarMaterialOverride* __this);
        // Method: bum() | Slot: 51573 | Token: 0xc4
        using fn_bum = void* (*)(UGCAvatarMaterialOverride* __this);
        // Method: olorID(void* LIKPJDHGPFG) | Slot: 65535 | Token: 0x6035c98
        using fn_olorID = void* (*)(UGCAvatarMaterialOverride* __this, void* LIKPJDHGPFG);
        // Method: Mount() | Slot: 134 | Token: 0xffffffff
        using fn_Mount = void* (*)(UGCAvatarMaterialOverride* __this);
        // Method: _WAIT() | Slot: 23706 | Token: 0x215a0
        using fn__WAIT = void* (*)(UGCAvatarMaterialOverride* __this);
    };

    // TypeDefIndex: 34608 | Original: COW.GamePlay.UGCRuntime.UGCCommerceIAPModule | Token: 0x2008731
    struct UGCCommerceIAPModule : Il2Cpp::Object {
        // Fields (3)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x40412d1
        void* m_CommerceIAPModel; // m_CommerceIAPModel | Token: 0x40412d2
        void* m_PurchaseRegionSwitch; // m_PurchaseRegionSwitch | Token: 0x40412d3

        // Methods (8)
        // Method: _WAIT() | Slot: 23722 | Token: 0x215d7
        using fn__WAIT = void* (*)(UGCCommerceIAPModule* __this);
        // Method: e() | Slot: 65535 | Token: 0x8000000
        using fn_e = void* (*)(UGCCommerceIAPModule* __this);
        // Method: Method_2() | Slot: 5596 | Token: 0x12545
        using fn_Method_2 = void* (*)(UGCCommerceIAPModule* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7d7a
        using fn_Method_3 = void* (*)(UGCCommerceIAPModule* __this);
        // Method: olor(void* rid) | Slot: 9541 | Token: 0x58caad
        using fn_olor = void* (*)(UGCCommerceIAPModule* __this, void* rid);
        // Method: Method_5() | Slot: 32122 | Token: 0x2ffff
        using fn_Method_5 = void* (*)(UGCCommerceIAPModule* __this);
        // Method: t() | Slot: 51933 | Token: 0x84
        using fn_t = void* (*)(UGCCommerceIAPModule* __this);
        // Method: olorID(void* CBCAJJJCKLH, void* FOMFBNLLOOA) | Slot: 65535 | Token: 0x6035cb0
        using fn_olorID = void* (*)(UGCCommerceIAPModule* __this, void* CBCAJJJCKLH, void* FOMFBNLLOOA);
    };

    // TypeDefIndex: 34609 | Original: COW.GamePlay.UGCRuntime.CallStackMem | Token: 0x2008732
    struct CallStackMem : Il2Cpp::Object {
        // Fields (2)
        void* objPoolMgr; // objPoolMgr | Token: 0x40412d4
        void* callStack; // callStack | Token: 0x40412d5

        // Methods (7)
        // Method: ILLAMGAMCOG() | Slot: 132 | Token: 0xffffffff
        using fn_ILLAMGAMCOG = void* (*)(CallStackMem* __this);
        // Method: _WAIT() | Slot: 23730 | Token: 0x215ea
        using fn__WAIT = void* (*)(CallStackMem* __this);
        // Method: e() | Slot: 65535 | Token: 0x8000000
        using fn_e = void* (*)(CallStackMem* __this);
        // Method: Method_3() | Slot: 5616 | Token: 0xd09f
        using fn_Method_3 = void* (*)(CallStackMem* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7d7a
        using fn_Method_4 = void* (*)(CallStackMem* __this);
        // Method: allicGloss(void* priority) | Slot: 9541 | Token: 0x58cb3d
        using fn_allicGloss = void* (*)(CallStackMem* __this, void* priority);
        // Method: Method_6() | Slot: 32122 | Token: 0x3ffff
        using fn_Method_6 = void* (*)(CallStackMem* __this);
    };

    // TypeDefIndex: 34610 | Original: COW.GamePlay.UGCRuntime.PCaller | Token: 0x2008733
    struct PCaller : Il2Cpp::Object {
        // Fields (11)
        void* target; // target | Token: 0x40412d6
        void* runIndex; // runIndex | Token: 0x40412d7
        void* intCache1; // intCache1 | Token: 0x40412d8
        void* intCache2; // intCache2 | Token: 0x40412d9
        void* intCache3; // intCache3 | Token: 0x40412da
        void* loopCntInOneFrame; // loopCntInOneFrame | Token: 0x40412db
        void* stringCache1; // stringCache1 | Token: 0x40412dc
        void* stringCache2; // stringCache2 | Token: 0x40412dd
        void* interfaceCache1; // interfaceCache1 | Token: 0x40412de
        void* interfaceCache2; // interfaceCache2 | Token: 0x40412df
        void* PopLayerWhenPop; // PopLayerWhenPop | Token: 0x40412e0

        // Methods (10)
        // Method: _0() | Slot: 52053 | Token: 0x84
        using fn__0 = void* (*)(PCaller* __this);
        // Method: olorID(void* NPBFFOOGPGG, void* DHKBGHMNHIO, void* HOGHEFNINAE) | Slot: 65535 | Token: 0x6035cb8
        using fn_olorID = void* (*)(PCaller* __this, void* NPBFFOOGPGG, void* DHKBGHMNHIO, void* HOGHEFNINAE);
        // Method: JCIKFONBADB() | Slot: 129 | Token: 0xffffffff
        using fn_JCIKFONBADB = void* (*)(PCaller* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23738 | Token: 0x21601
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(PCaller* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(PCaller* __this);
        // Method: Method_5() | Slot: 5634 | Token: 0x12545
        using fn_Method_5 = void* (*)(PCaller* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7d7a
        using fn_Method_6 = void* (*)(PCaller* __this);
        // Method: Method_7(void* priority) | Slot: 9541 | Token: 0x58cb9d
        using fn_Method_7 = void* (*)(PCaller* __this, void* priority);
        // Method: Method_8() | Slot: 32122 | Token: 0x3ffff
        using fn_Method_8 = void* (*)(PCaller* __this);
        // Method: bum() | Slot: 52149 | Token: 0x81
        using fn_bum = void* (*)(PCaller* __this);
    };

    // TypeDefIndex: 34611 | Original: COW.GamePlay.UGCRuntime.UGCCoroutine | Token: 0x2008734
    struct UGCCoroutine : Il2Cpp::Object {
        // Fields (1)
        void* stackContext; // stackContext | Token: 0x40412e1

        // Methods (5)
        // Method: olorID() | Slot: 65535 | Token: 0x6035cc0
        using fn_olorID = void* (*)(UGCCoroutine* __this);
        // Method: IFPNOBDDAHC() | Slot: 129 | Token: 0xffffffff
        using fn_IFPNOBDDAHC = void* (*)(UGCCoroutine* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23746 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCCoroutine* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCCoroutine* __this);
        // Method: Method_4() | Slot: 5643 | Token: 0x12545
        using fn_Method_4 = void* (*)(UGCCoroutine* __this);
    };

    // TypeDefIndex: 34612 | Original: COW.GamePlay.UGCRuntime.UGCEventRecord | Token: 0x2008735
    struct UGCEventRecord : Il2Cpp::Object {
        // Fields (2)
        void* EventType; // EventType | Token: 0x40412e2
        void* EventHandler; // EventHandler | Token: 0x40412e3

        // Methods (1)
        // Method: Method_0() | Slot: 0 | Token: 0x7d7a
        using fn_Method_0 = void* (*)(UGCEventRecord* __this);
    };

    // TypeDefIndex: 34613 | Original: COW.GamePlay.UGCRuntime.UGCEventCallBack | Token: 0x2008736
    struct UGCEventCallBack : Il2Cpp::Object {
        // Fields (2)
        void* ownerGraph; // ownerGraph | Token: 0x40412e4
        void* ruleData; // ruleData | Token: 0x40412e5

        // Methods (3)
        // Method: Method_0(void* priority) | Slot: 9541 | Token: 0x58cbfd
        using fn_Method_0 = void* (*)(UGCEventCallBack* __this, void* priority);
        // Method: Method_1() | Slot: 32122 | Token: 0xffff
        using fn_Method_1 = void* (*)(UGCEventCallBack* __this);
        // Method: bum() | Slot: 44144 | Token: 0x1886
        using fn_bum = void* (*)(UGCEventCallBack* __this);
    };

    // TypeDefIndex: 34614 | Original: COW.GamePlay.UGCRuntime.ScriptScope | Token: 0x2008737
    struct ScriptScope : Il2Cpp::Object {
        // Fields (13)
        void* scriptData; // scriptData | Token: 0x40412e6
        void* objPoolMgr; // objPoolMgr | Token: 0x40412e7
        void* concurrencyMax; // concurrencyMax | Token: 0x40412e8
        void* scriptVars; // scriptVars | Token: 0x40412e9
        void* functions; // functions | Token: 0x40412ea
        void* eventRecords; // eventRecords | Token: 0x40412eb
        void* coroutines; // coroutines | Token: 0x40412ec
        void* coroutineCnt; // coroutineCnt | Token: 0x40412ed
        void* lastCoroutineErrorTick; // lastCoroutineErrorTick | Token: 0x40412ee
        void* tickCount; // tickCount | Token: 0x40412ef
        void* isDone; // isDone | Token: 0x40412f0
        void* owner; // owner | Token: 0x40412f1
        void* runtime; // runtime | Token: 0x40412f2

        // Methods (33)
        // Method: olorID(void* P0, void* P1) | Slot: 65535 | Token: 0x6035cc8
        using fn_olorID = void* (*)(ScriptScope* __this, void* P0, void* P1);
        // Method: <>iFixBaseProxy_OnOnDestroy() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnOnDestroy = void* (*)(ScriptScope* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23754 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(ScriptScope* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(ScriptScope* __this);
        // Method: Method_4() | Slot: 5648 | Token: 0x12545
        using fn_Method_4 = void* (*)(ScriptScope* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7d7a
        using fn_Method_5 = void* (*)(ScriptScope* __this);
        // Method: ameVal(void* cam) | Slot: 9541 | Token: 0x1d5752
        using fn_ameVal = void* (*)(ScriptScope* __this, void* cam);
        // Method: Method_7() | Slot: 32122 | Token: 0x2ffff
        using fn_Method_7 = void* (*)(ScriptScope* __this);
        // Method: bum() | Slot: 18858 | Token: 0x6
        using fn_bum = void* (*)(ScriptScope* __this);
        // Method: FogColorID() | Slot: 65535 | Token: 0x6035cd0
        using fn_FogColorID = void* (*)(ScriptScope* __this);
        // Method: GJDNJFAPKGM() | Slot: 134 | Token: 0xffffffff
        using fn_GJDNJFAPKGM = void* (*)(ScriptScope* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23762 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(ScriptScope* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(ScriptScope* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(ScriptScope* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x7d79
        using fn_Method_14 = void* (*)(ScriptScope* __this);
        // Method: Method_15(void* strAPPSecret) | Slot: 9541 | Token: 0x67
        using fn_Method_15 = void* (*)(ScriptScope* __this, void* strAPPSecret);
        // Method: Method_16() | Slot: 32124 | Token: 0xffff
        using fn_Method_16 = void* (*)(ScriptScope* __this);
        // Method: bum() | Slot: 53228 | Token: 0x1886
        using fn_bum = void* (*)(ScriptScope* __this);
        // Method: ID(void* PFJFADHEJLJ) | Slot: 65535 | Token: 0x6035cd8
        using fn_ID = void* (*)(ScriptScope* __this, void* PFJFADHEJLJ);
        // Method: KAPCBDMMGPE() | Slot: 150 | Token: 0xffffffff
        using fn_KAPCBDMMGPE = void* (*)(ScriptScope* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23770 | Token: 0x2161b
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(ScriptScope* __this);
        // Method: __Field() | Slot: 65535 | Token: 0x8000000
        using fn___Field = void* (*)(ScriptScope* __this);
        // Method: Method_22() | Slot: 5663 | Token: 0x123d9
        using fn_Method_22 = void* (*)(ScriptScope* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x7d7e
        using fn_Method_23 = void* (*)(ScriptScope* __this);
        // Method: l() | Slot: 34812 | Token: 0x58d028
        using fn_l = void* (*)(ScriptScope* __this);
        // Method: Method_25() | Slot: 32126 | Token: 0x1ffff
        using fn_Method_25 = void* (*)(ScriptScope* __this);
        // Method: exture_index2() | Slot: 53312 | Token: 0x96
        using fn_exture_index2 = void* (*)(ScriptScope* __this);
        // Method: ID(void* LKHIALHNOLD, void* MNMNPHFFFNE, void* HIDANNMJCDP) | Slot: 65535 | Token: 0x6035ce0
        using fn_ID = void* (*)(ScriptScope* __this, void* LKHIALHNOLD, void* MNMNPHFFFNE, void* HIDANNMJCDP);
        // Method: BIPGAIFNLIN() | Slot: 150 | Token: 0xffffffff
        using fn_BIPGAIFNLIN = void* (*)(ScriptScope* __this);
        // Method: imable() | Slot: 23778 | Token: 0x21629
        using fn_imable = void* (*)(ScriptScope* __this);
        // Method: __Field() | Slot: 65535 | Token: 0x8000000
        using fn___Field = void* (*)(ScriptScope* __this);
        // Method: Method_31() | Slot: 5678 | Token: 0x12545
        using fn_Method_31 = void* (*)(ScriptScope* __this);
        // Method: Method_32() | Slot: 0 | Token: 0x7d7f
        using fn_Method_32 = void* (*)(ScriptScope* __this);
    };

    // TypeDefIndex: 34615 | Original: COW.GamePlay.UGCRuntime.StackContext | Token: 0x2008738
    struct StackContext : Il2Cpp::Object {
        // Fields (13)
        void* scope; // scope | Token: 0x40412f3
        void* objPoolMgr; // objPoolMgr | Token: 0x40412f4
        void* invokeState; // invokeState | Token: 0x40412f5
        void* invokeValue; // invokeValue | Token: 0x40412f6
        void* invokeIter; // invokeIter | Token: 0x40412f7
        void* invokeArgs; // invokeArgs | Token: 0x40412f8
        void* callStacks; // callStacks | Token: 0x40412f9
        void* variables; // variables | Token: 0x40412fa
        void* upStack; // upStack | Token: 0x40412fb
        void* generation; // generation | Token: 0x40412fc
        void* vmDebugger; // vmDebugger | Token: 0x40412fd
        void* CanRecycle; // CanRecycle | Token: 0x40412fe
        void* LoopMax; // LoopMax | Token: 0x40412ff

        // Methods (75)
        // Method: Method_0(void* message) | Slot: 9541 | Token: 0x58d085
        using fn_Method_0 = void* (*)(StackContext* __this, void* message);
        // Method: Method_1() | Slot: 32131 | Token: 0x10001
        using fn_Method_1 = void* (*)(StackContext* __this);
        // Method: g() | Slot: 53443 | Token: 0xc4
        using fn_g = void* (*)(StackContext* __this);
        // Method: Islerp() | Slot: 65535 | Token: 0x6035ce8
        using fn_Islerp = void* (*)(StackContext* __this);
        // Method: set_Param() | Slot: 2182 | Token: 0xffffffff
        using fn_set_Param = void* (*)(StackContext* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23786 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(StackContext* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(StackContext* __this);
        // Method: Method_7() | Slot: 5682 | Token: 0x12545
        using fn_Method_7 = void* (*)(StackContext* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x7d83
        using fn_Method_8 = void* (*)(StackContext* __this);
        // Method: Method_9(void* pos) | Slot: 9541 | Token: 0x58d0f9
        using fn_Method_9 = void* (*)(StackContext* __this, void* pos);
        // Method: Method_10() | Slot: 32131 | Token: 0x1ffff
        using fn_Method_10 = void* (*)(StackContext* __this);
        // Method: bum() | Slot: 5305 | Token: 0x84
        using fn_bum = void* (*)(StackContext* __this);
        // Method: Islerp(void* GGMIDNEJGNO, void* DJAPBCKDFKA) | Slot: 91 | Token: 0x6035cf0
        using fn_Islerp = void* (*)(StackContext* __this, void* GGMIDNEJGNO, void* DJAPBCKDFKA);
        // Method: JLFJAJPKOIF() | Slot: 132 | Token: 0xffffffff
        using fn_JLFJAJPKOIF = void* (*)(StackContext* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23794 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(StackContext* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(StackContext* __this);
        // Method: Method_16() | Slot: 5687 | Token: 0x12545
        using fn_Method_16 = void* (*)(StackContext* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x7d83
        using fn_Method_17 = void* (*)(StackContext* __this);
        // Method: New(void* circlePlane) | Slot: 9541 | Token: 0x90f5e
        using fn_New = void* (*)(StackContext* __this, void* circlePlane);
        // Method: Method_19() | Slot: 32131 | Token: 0x2005d
        using fn_Method_19 = void* (*)(StackContext* __this);
        // Method: bum() | Slot: 50888 | Token: 0x84
        using fn_bum = void* (*)(StackContext* __this);
        // Method: Islerp(void* IMBILFMCIAJ, void* PHGIDALCPPO) | Slot: 94 | Token: 0x6035cf8
        using fn_Islerp = void* (*)(StackContext* __this, void* IMBILFMCIAJ, void* PHGIDALCPPO);
        // Method: AKHIIHGOPAA() | Slot: 131 | Token: 0xffffffff
        using fn_AKHIIHGOPAA = void* (*)(StackContext* __this);
        // Method: imable() | Slot: 23802 | Token: 0x21641
        using fn_imable = void* (*)(StackContext* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(StackContext* __this);
        // Method: Method_25() | Slot: 5701 | Token: 0x12545
        using fn_Method_25 = void* (*)(StackContext* __this);
        // Method: Method_26() | Slot: 0 | Token: 0x7d83
        using fn_Method_26 = void* (*)(StackContext* __this);
        // Method: r(void* object) | Slot: 9541 | Token: 0x58ca41
        using fn_r = void* (*)(StackContext* __this, void* object);
        // Method: Method_28() | Slot: 32131 | Token: 0x10062
        using fn_Method_28 = void* (*)(StackContext* __this);
        // Method: bum() | Slot: 53605 | Token: 0x1c4
        using fn_bum = void* (*)(StackContext* __this);
        // Method: Islerp(void* KPDCILHJOBF, void* HOGHEFNINAE, void* IMKNJGHAHPI, void* FJHPCEDFDEI, void* OGKEEKCIGEC) | Slot: 65535 | Token: 0x6035d00
        using fn_Islerp = void* (*)(StackContext* __this, void* KPDCILHJOBF, void* HOGHEFNINAE, void* IMKNJGHAHPI, void* FJHPCEDFDEI, void* OGKEEKCIGEC);
        // Method: Explode() | Slot: 454 | Token: 0xffffffff
        using fn_Explode = void* (*)(StackContext* __this);
        // Method: stopRecordAvailableCallback() | Slot: 23810 | Token: 0x21651
        using fn_stopRecordAvailableCallback = void* (*)(StackContext* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(StackContext* __this);
        // Method: Method_34() | Slot: 5717 | Token: 0x12545
        using fn_Method_34 = void* (*)(StackContext* __this);
        // Method: Method_35() | Slot: 0 | Token: 0x7d83
        using fn_Method_35 = void* (*)(StackContext* __this);
        // Method: Method_36(void* object) | Slot: 9541 | Token: 0x58d1ad
        using fn_Method_36 = void* (*)(StackContext* __this, void* object);
        // Method: Method_37() | Slot: 32131 | Token: 0x1ffff
        using fn_Method_37 = void* (*)(StackContext* __this);
        // Method: bum() | Slot: 22699 | Token: 0x1884
        using fn_bum = void* (*)(StackContext* __this);
        // Method: Islerp() | Slot: 65535 | Token: 0x6035d08
        using fn_Islerp = void* (*)(StackContext* __this);
        // Method: <>iFixBaseProxy_Recycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Recycle = void* (*)(StackContext* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23818 | Token: 0x21657
        using fn_GetExchangeCurrencySubType = void* (*)(StackContext* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(StackContext* __this);
        // Method: Method_43() | Slot: 65535 | Token: 0x69c4
        using fn_Method_43 = void* (*)(StackContext* __this);
        // Method: Method_44() | Slot: 0 | Token: 0x7d80
        using fn_Method_44 = void* (*)(StackContext* __this);
        // Method: Method_45(void* pos) | Slot: 9110 | Token: 0x58d2ae
        using fn_Method_45 = void* (*)(StackContext* __this, void* pos);
        // Method: Method_46() | Slot: 32128 | Token: 0x1ffff
        using fn_Method_46 = void* (*)(StackContext* __this);
        // Method: RecordingInternal() | Slot: 103 | Token: 0x86
        using fn_RecordingInternal = void* (*)(StackContext* __this);
        // Method: () | Slot: 65535 | Token: 0x6035d10
        using fn_unnamed = void* (*)(StackContext* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(StackContext* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23826 | Token: 0x2165c
        using fn_GetExchangeCurrencySubType = void* (*)(StackContext* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(StackContext* __this);
        // Method: Method_52() | Slot: 65535 | Token: 0x12545
        using fn_Method_52 = void* (*)(StackContext* __this);
        // Method: Method_53() | Slot: 0 | Token: 0x7d82
        using fn_Method_53 = void* (*)(StackContext* __this);
        // Method: Method_54() | Slot: 48873 | Token: 0x2194
        using fn_Method_54 = void* (*)(StackContext* __this);
        // Method: Method_55() | Slot: 32130 | Token: 0x4
        using fn_Method_55 = void* (*)(StackContext* __this);
        // Method: bum() | Slot: 8699 | Token: 0x1e1
        using fn_bum = void* (*)(StackContext* __this);
        // Method: _Islerp() | Slot: 7 | Token: 0x6035d18
        using fn__Islerp = void* (*)(StackContext* __this);
        // Method: OnAwake() | Slot: 196 | Token: 0xffffffff
        using fn_OnAwake = void* (*)(StackContext* __this);
        // Method: () | Slot: 23834 | Token: 0xffffffff
        using fn_unnamed = void* (*)(StackContext* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(StackContext* __this);
        // Method: Method_61(void* bR, void* P0) | Slot: 5728 | Token: 0x12545
        using fn_Method_61 = void* (*)(StackContext* __this, void* bR, void* P0);
        // Method: Method_62() | Slot: 0 | Token: 0x7d85
        using fn_Method_62 = void* (*)(StackContext* __this);
        // Method: verted(void* d) | Slot: 9541 | Token: 0x58d14d
        using fn_verted = void* (*)(StackContext* __this, void* d);
        // Method: Method_64() | Slot: 32133 | Token: 0x10063
        using fn_Method_64 = void* (*)(StackContext* __this);
        // Method: bum() | Slot: 53653 | Token: 0xc4
        using fn_bum = void* (*)(StackContext* __this);
        // Method: lerp(void* HDFILHFDBKB) | Slot: 102 | Token: 0x6035d20
        using fn_lerp = void* (*)(StackContext* __this, void* HDFILHFDBKB);
        // Method: Explode() | Slot: 198 | Token: 0xffffffff
        using fn_Explode = void* (*)(StackContext* __this);
        // Method: stopRecordAvailableCallback() | Slot: 23842 | Token: 0xffffffff
        using fn_stopRecordAvailableCallback = void* (*)(StackContext* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(StackContext* __this);
        // Method: Method_70() | Slot: 5736 | Token: 0x12545
        using fn_Method_70 = void* (*)(StackContext* __this);
        // Method: Method_71() | Slot: 0 | Token: 0x7d85
        using fn_Method_71 = void* (*)(StackContext* __this);
        // Method: etallicGloss(void* cam) | Slot: 9541 | Token: 0x58d349
        using fn_etallicGloss = void* (*)(StackContext* __this, void* cam);
        // Method: Method_73() | Slot: 32133 | Token: 0x1ffff
        using fn_Method_73 = void* (*)(StackContext* __this);
        // Method: bum() | Slot: 54117 | Token: 0x6
        using fn_bum = void* (*)(StackContext* __this);
    };

    // TypeDefIndex: 34616 | Original: COW.GamePlay.UGCRuntime.StackVar | Token: 0x2008739
    struct StackVar : Il2Cpp::Object {
        // Fields (6)
        void* LayerIndex; // LayerIndex | Token: 0x4041300
        void* Name; // Name | Token: 0x4041301
        void* value; // value | Token: 0x4041302
        void* upValueName; // upValueName | Token: 0x4041303
        void* upStack; // upStack | Token: 0x4041304
        void* upStackGeneration; // upStackGeneration | Token: 0x4041305

        // Methods (21)
        // Method: lerp(void* P0) | Slot: 65535 | Token: 0x6035d28
        using fn_lerp = void* (*)(StackVar* __this, void* P0);
        // Method: <>iFixBaseProxy_Explode() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Explode = void* (*)(StackVar* __this);
        // Method: _WAIT() | Slot: 23850 | Token: 0xffffffff
        using fn__WAIT = void* (*)(StackVar* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(StackVar* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_4 = void* (*)(StackVar* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7d87
        using fn_Method_5 = void* (*)(StackVar* __this);
        // Method: Method_6() | Slot: 43994 | Token: 0x58d412
        using fn_Method_6 = void* (*)(StackVar* __this);
        // Method: Method_7() | Slot: 32135 | Token: 0xffff
        using fn_Method_7 = void* (*)(StackVar* __this);
        // Method: t() | Slot: 2471 | Token: 0x8c6
        using fn_t = void* (*)(StackVar* __this);
        // Method: rp(void* HDFILHFDBKB, void* IPKKCHLDJMA) | Slot: 65535 | Token: 0x6035d30
        using fn_rp = void* (*)(StackVar* __this, void* HDFILHFDBKB, void* IPKKCHLDJMA);
        // Method: OnInit() | Slot: 198 | Token: 0xffffffff
        using fn_OnInit = void* (*)(StackVar* __this);
        // Method: harp.dll() | Slot: 23858 | Token: 0xffffffff
        using fn_harp_dll = void* (*)(StackVar* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(StackVar* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(StackVar* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x7d87
        using fn_Method_14 = void* (*)(StackVar* __this);
        // Method: Method_15() | Slot: 31277 | Token: 0x58d439
        using fn_Method_15 = void* (*)(StackVar* __this);
        // Method: Method_16() | Slot: 32135 | Token: 0x39
        using fn_Method_16 = void* (*)(StackVar* __this);
        // Method: t() | Slot: 55008 | Token: 0xc6
        using fn_t = void* (*)(StackVar* __this);
        // Method: rp() | Slot: 45 | Token: 0x6035d38
        using fn_rp = void* (*)(StackVar* __this);
        // Method: GetMaxRepDataCount() | Slot: 196 | Token: 0xffffffff
        using fn_GetMaxRepDataCount = void* (*)(StackVar* __this);
        // Method: >() | Slot: 23866 | Token: 0xffffffff
        using fn__ = void* (*)(StackVar* __this);
    };

    // TypeDefIndex: 34617 | Original: COW.GamePlay.UGCRuntime.StackVarsMem | Token: 0x200873a
    struct StackVarsMem : Il2Cpp::Object {
        // Fields (7)
        void* objPoolMgr; // objPoolMgr | Token: 0x4041306
        void* scope; // scope | Token: 0x4041307
        void* name2Index; // name2Index | Token: 0x4041308
        void* items; // items | Token: 0x4041309
        void* topLayer; // topLayer | Token: 0x404130a
        void* lastKey; // lastKey | Token: 0x404130b
        void* lastItem; // lastItem | Token: 0x404130c

        // Methods (21)
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(StackVarsMem* __this);
        // Method: Method_1() | Slot: 5749 | Token: 0x12545
        using fn_Method_1 = void* (*)(StackVarsMem* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7d87
        using fn_Method_2 = void* (*)(StackVarsMem* __this);
        // Method: ColorValueList(void* circlePlane) | Slot: 9541 | Token: 0x583629
        using fn_ColorValueList = void* (*)(StackVarsMem* __this, void* circlePlane);
        // Method: Method_4() | Slot: 32135 | Token: 0x2ffff
        using fn_Method_4 = void* (*)(StackVarsMem* __this);
        // Method: bum() | Slot: 54365 | Token: 0x81
        using fn_bum = void* (*)(StackVarsMem* __this);
        // Method: rp() | Slot: 65535 | Token: 0x6035d40
        using fn_rp = void* (*)(StackVarsMem* __this);
        // Method: HMPDLKNNPCK() | Slot: 129 | Token: 0xffffffff
        using fn_HMPDLKNNPCK = void* (*)(StackVarsMem* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23874 | Token: 0x2167a
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(StackVarsMem* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(StackVarsMem* __this);
        // Method: Method_10() | Slot: 65535 | Token: 0x12545
        using fn_Method_10 = void* (*)(StackVarsMem* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x7d87
        using fn_Method_11 = void* (*)(StackVarsMem* __this);
        // Method: eList(void* priority) | Slot: 9541 | Token: 0x58d48d
        using fn_eList = void* (*)(StackVarsMem* __this, void* priority);
        // Method: Method_13() | Slot: 32135 | Token: 0xffff
        using fn_Method_13 = void* (*)(StackVarsMem* __this);
        // Method: bum() | Slot: 2591 | Token: 0x1886
        using fn_bum = void* (*)(StackVarsMem* __this);
        // Method: rp() | Slot: 65535 | Token: 0x6035d48
        using fn_rp = void* (*)(StackVarsMem* __this);
        // Method: <>iFixBaseProxy_get_EnableAsyncLoad() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_get_EnableAsyncLoad = void* (*)(StackVarsMem* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23882 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(StackVarsMem* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(StackVarsMem* __this);
        // Method: Method_19() | Slot: 65535 | Token: 0x12545
        using fn_Method_19 = void* (*)(StackVarsMem* __this);
        // Method: Method_20() | Slot: 0 | Token: 0x7d87
        using fn_Method_20 = void* (*)(StackVarsMem* __this);
    };

    // TypeDefIndex: 34619 | Original: COW.GamePlay.UGCRuntime.Utils | Token: 0x200873b
    struct Utils : Il2Cpp::Object {
        // Fields (1)
        void* LOC_STRING_V2; // LOC_STRING_V2 | Token: 0x404130d

        // Methods (77)
        // Method: Method_0(void* cam) | Slot: 9541 | Token: 0x58d4b7
        using fn_Method_0 = void* (*)(Utils* __this, void* cam);
        // Method: Method_1() | Slot: 32135 | Token: 0xffff
        using fn_Method_1 = void* (*)(Utils* __this);
        // Method: ance() | Slot: 54512 | Token: 0x6
        using fn_ance = void* (*)(Utils* __this);
        // Method: rp(void* P0) | Slot: 65535 | Token: 0x6035d50
        using fn_rp = void* (*)(Utils* __this, void* P0);
        // Method: <>iFixBaseProxy_OnUserDefineReplicationInfo() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnUserDefineReplicationInfo = void* (*)(Utils* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23890 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(Utils* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(Utils* __this);
        // Method: Method_7() | Slot: 5761 | Token: 0x12545
        using fn_Method_7 = void* (*)(Utils* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x7d87
        using fn_Method_8 = void* (*)(Utils* __this);
        // Method: t(void* cam) | Slot: 9541 | Token: 0x58d50c
        using fn_t = void* (*)(Utils* __this, void* cam);
        // Method: Method_10() | Slot: 32135 | Token: 0x1ffff
        using fn_Method_10 = void* (*)(Utils* __this);
        // Method: bum() | Slot: 103 | Token: 0x6
        using fn_bum = void* (*)(Utils* __this);
        // Method: p() | Slot: 65535 | Token: 0x6035d58
        using fn_p = void* (*)(Utils* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(Utils* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23898 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(Utils* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(Utils* __this);
        // Method: Method_16() | Slot: 65535 | Token: 0x12545
        using fn_Method_16 = void* (*)(Utils* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x7d8c
        using fn_Method_17 = void* (*)(Utils* __this);
        // Method: Method_18(void* object) | Slot: 9541 | Token: 0x587592
        using fn_Method_18 = void* (*)(Utils* __this, void* object);
        // Method: Method_19() | Slot: 32140 | Token: 0xffff
        using fn_Method_19 = void* (*)(Utils* __this);
        // Method: bum() | Slot: 29586 | Token: 0x81
        using fn_bum = void* (*)(Utils* __this);
        // Method: EnvWeatherZones(void* MBIKGEPEJEJ) | Slot: 65535 | Token: 0x6035d60
        using fn_EnvWeatherZones = void* (*)(Utils* __this, void* MBIKGEPEJEJ);
        // Method: OnFixedUpdate() | Slot: 198 | Token: 0xffffffff
        using fn_OnFixedUpdate = void* (*)(Utils* __this);
        // Method: _service() | Slot: 23906 | Token: 0xffffffff
        using fn__service = void* (*)(Utils* __this);
        // Method: e() | Slot: 65535 | Token: 0x8000000
        using fn_e = void* (*)(Utils* __this);
        // Method: Method_25() | Slot: 5773 | Token: 0x12545
        using fn_Method_25 = void* (*)(Utils* __this);
        // Method: Method_26() | Slot: 0 | Token: 0x7d8c
        using fn_Method_26 = void* (*)(Utils* __this);
        // Method: s(void* priority) | Slot: 9541 | Token: 0x58d62e
        using fn_s = void* (*)(Utils* __this, void* priority);
        // Method: Method_28() | Slot: 32140 | Token: 0xffff
        using fn_Method_28 = void* (*)(Utils* __this);
        // Method: bum() | Slot: 103 | Token: 0x86
        using fn_bum = void* (*)(Utils* __this);
        // Method: EnvWeatherZones() | Slot: 65535 | Token: 0x6035d68
        using fn_EnvWeatherZones = void* (*)(Utils* __this);
        // Method: <>iFixBaseProxy_GetObjectTag() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_GetObjectTag = void* (*)(Utils* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23914 | Token: 0x21694
        using fn_GetExchangeCurrencySubType = void* (*)(Utils* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(Utils* __this);
        // Method: Method_34() | Slot: 65535 | Token: 0x12545
        using fn_Method_34 = void* (*)(Utils* __this);
        // Method: Method_35() | Slot: 0 | Token: 0x7d8d
        using fn_Method_35 = void* (*)(Utils* __this);
        // Method: Method_36(void* priority) | Slot: 9541 | Token: 0x67
        using fn_Method_36 = void* (*)(Utils* __this, void* priority);
        // Method: Method_37() | Slot: 32144 | Token: 0xffff
        using fn_Method_37 = void* (*)(Utils* __this);
        // Method: g() | Slot: 62948 | Token: 0xc4
        using fn_g = void* (*)(Utils* __this);
        // Method: eatherZones(void* CCNBNLAPJFM, void* LIKPJDHGPFG) | Slot: 75 | Token: 0x6035d70
        using fn_eatherZones = void* (*)(Utils* __this, void* CCNBNLAPJFM, void* LIKPJDHGPFG);
        // Method: OnAwake() | Slot: 196 | Token: 0xffffffff
        using fn_OnAwake = void* (*)(Utils* __this);
        // Method: () | Slot: 23922 | Token: 0xffffffff
        using fn_unnamed = void* (*)(Utils* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(Utils* __this);
        // Method: Method_43() | Slot: 5786 | Token: 0x12545
        using fn_Method_43 = void* (*)(Utils* __this);
        // Method: Method_44() | Slot: 0 | Token: 0x7d90
        using fn_Method_44 = void* (*)(Utils* __this);
        // Method: colorValueList(void* priority) | Slot: 9541 | Token: 0x4513
        using fn_colorValueList = void* (*)(Utils* __this, void* priority);
        // Method: Method_46() | Slot: 32144 | Token: 0x10049
        using fn_Method_46 = void* (*)(Utils* __this);
        // Method: bum() | Slot: 55166 | Token: 0x86
        using fn_bum = void* (*)(Utils* __this);
        // Method: eatherZones() | Slot: 65535 | Token: 0x6035d78
        using fn_eatherZones = void* (*)(Utils* __this);
        // Method: ChangeAudioVolumeBySetting() | Slot: 134 | Token: 0xffffffff
        using fn_ChangeAudioVolumeBySetting = void* (*)(Utils* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23930 | Token: 0x216a0
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(Utils* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(Utils* __this);
        // Method: Method_52() | Slot: 5794 | Token: 0x12545
        using fn_Method_52 = void* (*)(Utils* __this);
        // Method: Method_53() | Slot: 0 | Token: 0x7d90
        using fn_Method_53 = void* (*)(Utils* __this);
        // Method: Method_54(void* cam) | Slot: 9541 | Token: 0x1d588f
        using fn_Method_54 = void* (*)(Utils* __this, void* cam);
        // Method: Method_55() | Slot: 32144 | Token: 0xffff
        using fn_Method_55 = void* (*)(Utils* __this);
        // Method: bum() | Slot: 22421 | Token: 0x6
        using fn_bum = void* (*)(Utils* __this);
        // Method: eatherZones(void* P0) | Slot: 65535 | Token: 0x6035d80
        using fn_eatherZones = void* (*)(Utils* __this, void* P0);
        // Method: <>iFixBaseProxy_OnSyncUGCEntityProperty() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnSyncUGCEntityProperty = void* (*)(Utils* __this);
        // Method: _WAIT() | Slot: 23938 | Token: 0xffffffff
        using fn__WAIT = void* (*)(Utils* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(Utils* __this);
        // Method: Method_61() | Slot: 65535 | Token: 0x12545
        using fn_Method_61 = void* (*)(Utils* __this);
        // Method: Method_62() | Slot: 0 | Token: 0x7d91
        using fn_Method_62 = void* (*)(Utils* __this);
        // Method: Method_63() | Slot: 27076 | Token: 0x4505
        using fn_Method_63 = void* (*)(Utils* __this);
        // Method: Method_64() | Slot: 32145 | Token: 0x12
        using fn_Method_64 = void* (*)(Utils* __this);
        // Method: bum() | Slot: 23937 | Token: 0xc6
        using fn_bum = void* (*)(Utils* __this);
        // Method: atherZones(void* GGAOIPIHOBP, void* BBPCHCNOECP, void* HACIJIFIDKM) | Slot: 65535 | Token: 0x6035d88
        using fn_atherZones = void* (*)(Utils* __this, void* GGAOIPIHOBP, void* BBPCHCNOECP, void* HACIJIFIDKM);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(Utils* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23946 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(Utils* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(Utils* __this);
        // Method: Method_70() | Slot: 65535 | Token: 0x69c4
        using fn_Method_70 = void* (*)(Utils* __this);
        // Method: Method_71() | Slot: 0 | Token: 0x7d91
        using fn_Method_71 = void* (*)(Utils* __this);
        // Method: ColorValue(void* cam) | Slot: 9541 | Token: 0x188
        using fn_ColorValue = void* (*)(Utils* __this, void* cam);
        // Method: Method_73() | Slot: 32147 | Token: 0xffff
        using fn_Method_73 = void* (*)(Utils* __this);
        // Method: bum() | Slot: 10685 | Token: 0x81
        using fn_bum = void* (*)(Utils* __this);
        // Method: herZones(void* ALJJGIDFMGL) | Slot: 65535 | Token: 0x6035d90
        using fn_herZones = void* (*)(Utils* __this, void* ALJJGIDFMGL);
        // Method: BMDJBGDENFI() | Slot: 129 | Token: 0xffffffff
        using fn_BMDJBGDENFI = void* (*)(Utils* __this);
    };

    // TypeDefIndex: 34620 | Original: COW.GamePlay.UGCRuntime.BaseWaitFor | Token: 0x200873d
    struct BaseWaitFor : Il2Cpp::Object {
        // Fields (1)
        void* isDone; // isDone | Token: 0x404130f

        // Methods (5)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(BaseWaitFor* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7d93
        using fn_Method_1 = void* (*)(BaseWaitFor* __this);
        // Method: Method_2() | Slot: 53407 | Token: 0x58d8ba
        using fn_Method_2 = void* (*)(BaseWaitFor* __this);
        // Method: Method_3() | Slot: 32147 | Token: 0x2ffff
        using fn_Method_3 = void* (*)(BaseWaitFor* __this);
        // Method: bum() | Slot: 103 | Token: 0x81
        using fn_bum = void* (*)(BaseWaitFor* __this);
    };

    // TypeDefIndex: 34621 | Original: COW.GamePlay.UGCRuntime.WaitForNextFrame | Token: 0x200873e
    struct WaitForNextFrame : Il2Cpp::Object {
        // Fields (2)
        void* waitEndTick; // waitEndTick | Token: 0x4041310
        void* stackContext; // stackContext | Token: 0x4041311

        // Methods (5)
        // Method: herZones() | Slot: 65535 | Token: 0x6035d98
        using fn_herZones = void* (*)(WaitForNextFrame* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(WaitForNextFrame* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 23962 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(WaitForNextFrame* __this);
        // Method: ACount() | Slot: 65535 | Token: 0x8000000
        using fn_ACount = void* (*)(WaitForNextFrame* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0xbee9
        using fn_Method_4 = void* (*)(WaitForNextFrame* __this);
    };

    // TypeDefIndex: 34622 | Original: COW.GamePlay.UGCRuntime.UGCWaitForSecondsV2 | Token: 0x200873f
    struct UGCWaitForSecondsV2 : Il2Cpp::Object {
        // Fields (2)
        void* waitEndTimeMs; // waitEndTimeMs | Token: 0x4041312
        void* stackContext; // stackContext | Token: 0x4041313

        // Methods (5)
        // Method: Method_0() | Slot: 0 | Token: 0x7d92
        using fn_Method_0 = void* (*)(UGCWaitForSecondsV2* __this);
        // Method: Method_1() | Slot: 48873 | Token: 0x21fb
        using fn_Method_1 = void* (*)(UGCWaitForSecondsV2* __this);
        // Method: Method_2() | Slot: 32148 | Token: 0x7
        using fn_Method_2 = void* (*)(UGCWaitForSecondsV2* __this);
        // Method: g() | Slot: 19398 | Token: 0xc4
        using fn_g = void* (*)(UGCWaitForSecondsV2* __this);
        // Method: erZones() | Slot: 65535 | Token: 0x6035da0
        using fn_erZones = void* (*)(UGCWaitForSecondsV2* __this);
    };

    // TypeDefIndex: 34623 | Original: COW.GamePlay.UGCRuntime.WaitForConditionFunc | Token: 0x2008740
    struct WaitForConditionFunc : Il2Cpp::Object {

        // Methods (4)
        // Method: OnLocalPlayerExitTrigger() | Slot: 134 | Token: 0xffffffff
        using fn_OnLocalPlayerExitTrigger = void* (*)(WaitForConditionFunc* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 23970 | Token: 0x216b4
        using fn_GetExchangeCurrencySubType = void* (*)(WaitForConditionFunc* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(WaitForConditionFunc* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_3 = void* (*)(WaitForConditionFunc* __this);
    };

    // TypeDefIndex: 34624 | Original: COW.GamePlay.UGCRuntime.WaitForCondition | Token: 0x2008741
    struct WaitForCondition : Il2Cpp::Object {
        // Fields (2)
        void* startWaitTimeMs; // startWaitTimeMs | Token: 0x4041314
        void* conditionFunc; // conditionFunc | Token: 0x4041315

        // Methods (5)
        // Method: Method_0() | Slot: 0 | Token: 0x7d95
        using fn_Method_0 = void* (*)(WaitForCondition* __this);
        // Method: Method_1(void* d) | Slot: 9541 | Token: 0x5835b0
        using fn_Method_1 = void* (*)(WaitForCondition* __this, void* d);
        // Method: Method_2() | Slot: 32149 | Token: 0xffff
        using fn_Method_2 = void* (*)(WaitForCondition* __this);
        // Method: bum() | Slot: 17683 | Token: 0xc6
        using fn_bum = void* (*)(WaitForCondition* __this);
        // Method: rZones(void* DJAPBCKDFKA) | Slot: 73 | Token: 0x6035da8
        using fn_rZones = void* (*)(WaitForCondition* __this, void* DJAPBCKDFKA);
    };

    // TypeDefIndex: 34625 | Original: COW.GamePlay.UGCRuntime.LogicEntitiesMemory | Token: 0x2008742
    struct LogicEntitiesMemory : Il2Cpp::Object {
        // Fields (2)
        void* pairs; // pairs | Token: 0x4041316
        void* cache; // cache | Token: 0x4041317

        // Methods (12)
        // Method: Recycle() | Slot: 198 | Token: 0xffffffff
        using fn_Recycle = void* (*)(LogicEntitiesMemory* __this);
        // Method: () | Slot: 23978 | Token: 0xffffffff
        using fn_unnamed = void* (*)(LogicEntitiesMemory* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(LogicEntitiesMemory* __this);
        // Method: Method_3() | Slot: 5815 | Token: 0x12545
        using fn_Method_3 = void* (*)(LogicEntitiesMemory* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7d95
        using fn_Method_4 = void* (*)(LogicEntitiesMemory* __this);
        // Method: ToOverlayColors(void* priority) | Slot: 9541 | Token: 0x31cb
        using fn_ToOverlayColors = void* (*)(LogicEntitiesMemory* __this, void* priority);
        // Method: Method_6() | Slot: 32149 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(LogicEntitiesMemory* __this);
        // Method: t() | Slot: 55662 | Token: 0x81
        using fn_t = void* (*)(LogicEntitiesMemory* __this);
        // Method: rZones() | Slot: 65535 | Token: 0x6035db0
        using fn_rZones = void* (*)(LogicEntitiesMemory* __this);
        // Method: OnUpdateVisibleStateByStreamer() | Slot: 196 | Token: 0xffffffff
        using fn_OnUpdateVisibleStateByStreamer = void* (*)(LogicEntitiesMemory* __this);
        // Method: ce() | Slot: 23986 | Token: 0xffffffff
        using fn_ce = void* (*)(LogicEntitiesMemory* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(LogicEntitiesMemory* __this);
    };

    // TypeDefIndex: 34627 | Original: COW.GamePlay.UGCRuntime.QuickObjectPoolMap | Token: 0x2008743
    struct QuickObjectPoolMap : Il2Cpp::Object {
        // Fields (18)
        void* ugcRuntime; // ugcRuntime | Token: 0x4041318
        void* archTypeFilterPool; // archTypeFilterPool | Token: 0x4041319
        void* ugcValuePool; // ugcValuePool | Token: 0x404131a
        void* entityRepDataPool; // entityRepDataPool | Token: 0x404131b
        void* entityRepDataItemPool; // entityRepDataItemPool | Token: 0x404131c
        void* stackVarPool; // stackVarPool | Token: 0x404131d
        void* pCallerPool; // pCallerPool | Token: 0x404131e
        void* stackVarsMemPool; // stackVarsMemPool | Token: 0x404131f
        void* callStackMemPool; // callStackMemPool | Token: 0x4041320
        void* stackContextInterpreterPool; // stackContextInterpreterPool | Token: 0x4041321
        void* coroutinePool; // coroutinePool | Token: 0x4041322
        void* waitForNextFrameAdapterPool; // waitForNextFrameAdapterPool | Token: 0x4041323
        void* waitForSecondsAdapterPool; // waitForSecondsAdapterPool | Token: 0x4041324
        void* waitForConditionAdapterPool; // waitForConditionAdapterPool | Token: 0x4041325
        void* paramListPool; // paramListPool | Token: 0x4041326
        void* entityListPool; // entityListPool | Token: 0x4041327
        void* lastListCapcity; // lastListCapcity | Token: 0x4041328
        void* lastList; // lastList | Token: 0x4041329

        // Methods (39)
        // Method: Method_0() | Slot: 5821 | Token: 0x12545
        using fn_Method_0 = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7d95
        using fn_Method_1 = void* (*)(QuickObjectPoolMap* __this);
        // Method: layColors() | Slot: 27076 | Token: 0x1d58c5
        using fn_layColors = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_3() | Slot: 32149 | Token: 0xffff
        using fn_Method_3 = void* (*)(QuickObjectPoolMap* __this);
        // Method: bum() | Slot: 9338 | Token: 0x6
        using fn_bum = void* (*)(QuickObjectPoolMap* __this);
        // Method: rZones(void* P0, void* P1) | Slot: 65535 | Token: 0x6035db8
        using fn_rZones = void* (*)(QuickObjectPoolMap* __this, void* P0, void* P1);
        // Method: OnStart() | Slot: 196 | Token: 0xffffffff
        using fn_OnStart = void* (*)(QuickObjectPoolMap* __this);
        // Method: Assembly-CSharp.dll() | Slot: 23994 | Token: 0xffffffff
        using fn_Assembly_CSharp_dll = void* (*)(QuickObjectPoolMap* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_9(void* data, void* type) | Slot: 5826 | Token: 0x12545
        using fn_Method_9 = void* (*)(QuickObjectPoolMap* __this, void* data, void* type);
        // Method: Method_10() | Slot: 0 | Token: 0x7d97
        using fn_Method_10 = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_11(void* circlePlane) | Slot: 9541 | Token: 0x44fb
        using fn_Method_11 = void* (*)(QuickObjectPoolMap* __this, void* circlePlane);
        // Method: Method_12() | Slot: 32151 | Token: 0x16
        using fn_Method_12 = void* (*)(QuickObjectPoolMap* __this);
        // Method: bum() | Slot: 19913 | Token: 0x86
        using fn_bum = void* (*)(QuickObjectPoolMap* __this);
        // Method: ones() | Slot: 65535 | Token: 0x6035dc0
        using fn_ones = void* (*)(QuickObjectPoolMap* __this);
        // Method: PlayChargingAudio() | Slot: 134 | Token: 0xffffffff
        using fn_PlayChargingAudio = void* (*)(QuickObjectPoolMap* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24002 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(QuickObjectPoolMap* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_18() | Slot: 65535 | Token: 0x12545
        using fn_Method_18 = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x7d97
        using fn_Method_19 = void* (*)(QuickObjectPoolMap* __this);
        // Method: ors(void* cam) | Slot: 9541 | Token: 0x1d5752
        using fn_ors = void* (*)(QuickObjectPoolMap* __this, void* cam);
        // Method: Method_21() | Slot: 32151 | Token: 0x2ffff
        using fn_Method_21 = void* (*)(QuickObjectPoolMap* __this);
        // Method: t() | Slot: 22699 | Token: 0x6
        using fn_t = void* (*)(QuickObjectPoolMap* __this);
        // Method: ones() | Slot: 65535 | Token: 0x6035dc8
        using fn_ones = void* (*)(QuickObjectPoolMap* __this);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(QuickObjectPoolMap* __this);
        // Method: `2() | Slot: 24010 | Token: 0x216c7
        using fn__2 = void* (*)(QuickObjectPoolMap* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_27() | Slot: 65535 | Token: 0x69c4
        using fn_Method_27 = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_28() | Slot: 0 | Token: 0x7d99
        using fn_Method_28 = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_29(void* priority) | Slot: 9541 | Token: 0x585d81
        using fn_Method_29 = void* (*)(QuickObjectPoolMap* __this, void* priority);
        // Method: Method_30() | Slot: 32153 | Token: 0x3ffff
        using fn_Method_30 = void* (*)(QuickObjectPoolMap* __this);
        // Method: bum() | Slot: 55766 | Token: 0xc4
        using fn_bum = void* (*)(QuickObjectPoolMap* __this);
        // Method: es() | Slot: 65535 | Token: 0x6035dd0
        using fn_es = void* (*)(QuickObjectPoolMap* __this);
        // Method: StopChargingAudio() | Slot: 134 | Token: 0xffffffff
        using fn_StopChargingAudio = void* (*)(QuickObjectPoolMap* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24018 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(QuickObjectPoolMap* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_36() | Slot: 65535 | Token: 0x12545
        using fn_Method_36 = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_37() | Slot: 0 | Token: 0x7d99
        using fn_Method_37 = void* (*)(QuickObjectPoolMap* __this);
        // Method: Method_38(void* cam) | Slot: 9541 | Token: 0x1d588f
        using fn_Method_38 = void* (*)(QuickObjectPoolMap* __this, void* cam);
    };

    // TypeDefIndex: 34628 | Original: COW.GamePlay.UGCRuntime.UGCAnalyser | Token: 0x2008745
    struct UGCAnalyser : Il2Cpp::Object {

        // Methods (2)
        // Method: SyncAction() | Slot: 198 | Token: 0xffffffff
        using fn_SyncAction = void* (*)(UGCAnalyser* __this);
        // Method: hangeCurrencyType() | Slot: 24026 | Token: 0x216cd
        using fn_hangeCurrencyType = void* (*)(UGCAnalyser* __this);
    };

    // TypeDefIndex: 34629 | Original: COW.GamePlay.UGCRuntime.UGCAssembly | Token: 0x2008746
    struct UGCAssembly : Il2Cpp::Object {
        // Fields (2)
        void* TypeMap; // TypeMap | Token: 0x404132c
        void* EventDesc; // EventDesc | Token: 0x404132d

        // Methods (4)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCAssembly* __this);
        // Method: Method_1() | Slot: 5842 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCAssembly* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7d9c
        using fn_Method_2 = void* (*)(UGCAssembly* __this);
        // Method: ColorData(void* rid) | Slot: 9541 | Token: 0x1014d
        using fn_ColorData = void* (*)(UGCAssembly* __this, void* rid);
    };

    // TypeDefIndex: 34630 | Original: COW.GamePlay.UGCRuntime.ECmpPropAccessType | Token: 0x2008747
    struct ECmpPropAccessType : Il2Cpp::Object {
        // Fields (5)
        void* value__; // value__ | Token: 0x404132e
        void* ECmpPropAccessType_Unknown; // ECmpPropAccessType_Unknown | Token: 0x404132f
        void* ECmpPropAccessType_Bridging; // ECmpPropAccessType_Bridging | Token: 0x4041330
        void* ECmpPropAccessType_Calculate; // ECmpPropAccessType_Calculate | Token: 0x4041331
        void* ECmpPropAccessType_DataDriven; // ECmpPropAccessType_DataDriven | Token: 0x4041332
    };

    // TypeDefIndex: 34631 | Original: COW.GamePlay.UGCRuntime.UGCComponentProp | Token: 0x2008748
    struct UGCComponentProp : Il2Cpp::Object {
        // Fields (7)
        void* SyncID; // SyncID | Token: 0x4041333
        void* CmpID; // CmpID | Token: 0x4041334
        void* ID; // ID | Token: 0x4041335
        void* Name; // Name | Token: 0x4041336
        void* Type; // Type | Token: 0x4041337
        void* DefaultValue; // DefaultValue | Token: 0x4041338
        void* Attributes; // Attributes | Token: 0x4041339

        // Methods (7)
        // Method: Method_0() | Slot: 32156 | Token: 0x10048
        using fn_Method_0 = void* (*)(UGCComponentProp* __this);
        // Method: bum() | Slot: 55941 | Token: 0x81
        using fn_bum = void* (*)(UGCComponentProp* __this);
        // Method: m_EnvWeatherZonesToUnRegister() | Slot: 65535 | Token: 0x6035de0
        using fn_m_EnvWeatherZonesToUnRegister = void* (*)(UGCComponentProp* __this);
        // Method: EAAPEFNKBHD() | Slot: 129 | Token: 0xffffffff
        using fn_EAAPEFNKBHD = void* (*)(UGCComponentProp* __this);
        // Method: imable() | Slot: 24034 | Token: 0xffffffff
        using fn_imable = void* (*)(UGCComponentProp* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCComponentProp* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_6 = void* (*)(UGCComponentProp* __this);
    };

    // TypeDefIndex: 34632 | Original: COW.GamePlay.UGCRuntime.U2V_LOG | Token: 0x2008749
    struct U2V_LOG : Il2Cpp::Object {
        // Fields (3)
        void* _GraphID_k__BackingField; // <GraphID>k__BackingField | Token: 0x404133a
        void* _LogType_k__BackingField; // <LogType>k__BackingField | Token: 0x404133b
        void* _Content_k__BackingField; // <Content>k__BackingField | Token: 0x404133c

        // Methods (7)
        // Method: Method_0() | Slot: 0 | Token: 0x7d9c
        using fn_Method_0 = void* (*)(U2V_LOG* __this);
        // Method: Method_1(void* cam) | Slot: 9541 | Token: 0x1d5795
        using fn_Method_1 = void* (*)(U2V_LOG* __this, void* cam);
        // Method: Method_2() | Slot: 32156 | Token: 0x1ffff
        using fn_Method_2 = void* (*)(U2V_LOG* __this);
        // Method: bum() | Slot: 26422 | Token: 0x6
        using fn_bum = void* (*)(U2V_LOG* __this);
        // Method: m_EnvWeatherZonesToUnRegister(void* P0, void* P1) | Slot: 65535 | Token: 0x6035de8
        using fn_m_EnvWeatherZonesToUnRegister = void* (*)(U2V_LOG* __this, void* P0, void* P1);
        // Method: <>iFixBaseProxy_DoAction() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_DoAction = void* (*)(U2V_LOG* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24042 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(U2V_LOG* __this);
    };

    // TypeDefIndex: 34633 | Original: COW.GamePlay.UGCRuntime.LOGGER_CHANNEL | Token: 0x200874a
    struct LOGGER_CHANNEL : Il2Cpp::Object {
        // Fields (8)
        void* value__; // value__ | Token: 0x404133d
        void* DEFAULT; // DEFAULT | Token: 0x404133e
        void* DEBUG; // DEBUG | Token: 0x404133f
        void* INFO; // INFO | Token: 0x4041340
        void* WARNING; // WARNING | Token: 0x4041341
        void* ERROR; // ERROR | Token: 0x4041342
        void* WHITELIST; // WHITELIST | Token: 0x4041343
        void* ALL; // ALL | Token: 0x4041344
    };

    // TypeDefIndex: 34634 | Original: COW.GamePlay.UGCRuntime.UGCDebugLogger | Token: 0x200874b
    struct UGCDebugLogger : Il2Cpp::Object {
        // Fields (14)
        void* UGC_COMMON; // UGC_COMMON | Token: 0x4041345
        void* IsLogEnabled; // IsLogEnabled | Token: 0x4041346
        void* IsLog2ClientConsole; // IsLog2ClientConsole | Token: 0x4041347
        void* ugcRuntime; // ugcRuntime | Token: 0x4041348
        void* bridgingGame; // bridgingGame | Token: 0x4041349
        void* debugEvent; // debugEvent | Token: 0x404134a
        void* debugFunction; // debugFunction | Token: 0x404134b
        void* debugEventWhitelist; // debugEventWhitelist | Token: 0x404134c
        void* debugEventBlacklist; // debugEventBlacklist | Token: 0x404134d
        void* debugFunctionWhitelist; // debugFunctionWhitelist | Token: 0x404134e
        void* debugFunctionBlacklist; // debugFunctionBlacklist | Token: 0x404134f
        void* perFrameLogsLimit; // perFrameLogsLimit | Token: 0x4041350
        void* curStack; // curStack | Token: 0x4041351
        void* debugger; // debugger | Token: 0x4041352

        // Methods (18)
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCDebugLogger* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCDebugLogger* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7d9b
        using fn_Method_2 = void* (*)(UGCDebugLogger* __this);
        // Method: eColor() | Slot: 54255 | Token: 0x4129
        using fn_eColor = void* (*)(UGCDebugLogger* __this);
        // Method: Method_4() | Slot: 32161 | Token: 0x44
        using fn_Method_4 = void* (*)(UGCDebugLogger* __this);
        // Method: bum() | Slot: 17683 | Token: 0xc4
        using fn_bum = void* (*)(UGCDebugLogger* __this);
        // Method: WeatherZonesToUnRegister(void* DJAPBCKDFKA) | Slot: 73 | Token: 0x6035df0
        using fn_WeatherZonesToUnRegister = void* (*)(UGCDebugLogger* __this, void* DJAPBCKDFKA);
        // Method: MPGLMIDLLPA() | Slot: 129 | Token: 0xffffffff
        using fn_MPGLMIDLLPA = void* (*)(UGCDebugLogger* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24050 | Token: 0x216e6
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCDebugLogger* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCDebugLogger* __this);
        // Method: Method_10(void* data, void* type) | Slot: 5864 | Token: 0x12545
        using fn_Method_10 = void* (*)(UGCDebugLogger* __this, void* data, void* type);
        // Method: Method_11() | Slot: 0 | Token: 0x7da1
        using fn_Method_11 = void* (*)(UGCDebugLogger* __this);
        // Method: Method_12(void* circlePlane) | Slot: 9541 | Token: 0x5609bf
        using fn_Method_12 = void* (*)(UGCDebugLogger* __this, void* circlePlane);
        // Method: Method_13() | Slot: 32161 | Token: 0xffff
        using fn_Method_13 = void* (*)(UGCDebugLogger* __this);
        // Method: t() | Slot: 56090 | Token: 0x81
        using fn_t = void* (*)(UGCDebugLogger* __this);
        // Method: WeatherZonesToUnRegister() | Slot: 65535 | Token: 0x6035df8
        using fn_WeatherZonesToUnRegister = void* (*)(UGCDebugLogger* __this);
        // Method: HEFCMCAMFKK() | Slot: 129 | Token: 0xffffffff
        using fn_HEFCMCAMFKK = void* (*)(UGCDebugLogger* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24058 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCDebugLogger* __this);
    };

    // TypeDefIndex: 34635 | Original: COW.GamePlay.UGCRuntime.UGCEventNoParamsHandle | Token: 0x200874c
    struct UGCEventNoParamsHandle : Il2Cpp::Object {

        // Methods (4)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCEventNoParamsHandle* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCEventNoParamsHandle* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7da1
        using fn_Method_2 = void* (*)(UGCEventNoParamsHandle* __this);
        // Method: olors(void* priority) | Slot: 9541 | Token: 0x67
        using fn_olors = void* (*)(UGCEventNoParamsHandle* __this, void* priority);
    };

    // TypeDefIndex: 34636 | Original: COW.GamePlay.UGCRuntime.UGCEventVariadicHandle | Token: 0x200874d
    struct UGCEventVariadicHandle : Il2Cpp::Object {

        // Methods (4)
        // Method: Method_0() | Slot: 32161 | Token: 0xffff
        using fn_Method_0 = void* (*)(UGCEventVariadicHandle* __this);
        // Method: bum() | Slot: 62404 | Token: 0x81
        using fn_bum = void* (*)(UGCEventVariadicHandle* __this);
        // Method: WeatherZonesToUnRegister() | Slot: 65535 | Token: 0x6035e00
        using fn_WeatherZonesToUnRegister = void* (*)(UGCEventVariadicHandle* __this);
        // Method: <>iFixBaseProxy_SyncAction() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_SyncAction = void* (*)(UGCEventVariadicHandle* __this);
    };

    // TypeDefIndex: 34637 | Original: COW.GamePlay.UGCRuntime.UGCEventBus | Token: 0x200874e
    struct UGCEventBus : Il2Cpp::Object {
        // Fields (7)
        void* ugcRuntime; // ugcRuntime | Token: 0x4041353
        void* entityIndex; // entityIndex | Token: 0x4041354
        void* registerHandlers; // registerHandlers | Token: 0x4041355
        void* dispatchEventCountPerFrame; // dispatchEventCountPerFrame | Token: 0x4041356
        void* dispatchEventMaxCountPerFrame; // dispatchEventMaxCountPerFrame | Token: 0x4041357
        void* distpatchCnt; // distpatchCnt | Token: 0x4041358
        void* removedHandlers; // removedHandlers | Token: 0x4041359

        // Methods (15)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24066 | Token: 0x216f1
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCEventBus* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCEventBus* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x12545
        using fn_Method_2 = void* (*)(UGCEventBus* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7d9f
        using fn_Method_3 = void* (*)(UGCEventBus* __this);
        // Method: Method_4(void* strAPPSecret) | Slot: 9541 | Token: 0x58dbff
        using fn_Method_4 = void* (*)(UGCEventBus* __this, void* strAPPSecret);
        // Method: Method_5() | Slot: 32160 | Token: 0x3ffff
        using fn_Method_5 = void* (*)(UGCEventBus* __this);
        // Method: bum() | Slot: 56331 | Token: 0x1886
        using fn_bum = void* (*)(UGCEventBus* __this);
        // Method: vWeatherZonesToUnRegister() | Slot: 65535 | Token: 0x6035e08
        using fn_vWeatherZonesToUnRegister = void* (*)(UGCEventBus* __this);
        // Method: LMNGOJOJFNM() | Slot: 134 | Token: 0xffffffff
        using fn_LMNGOJOJFNM = void* (*)(UGCEventBus* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24074 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCEventBus* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCEventBus* __this);
        // Method: Method_11() | Slot: 5878 | Token: 0x12545
        using fn_Method_11 = void* (*)(UGCEventBus* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x7da3
        using fn_Method_12 = void* (*)(UGCEventBus* __this);
        // Method: s(void* priority) | Slot: 9541 | Token: 0x67
        using fn_s = void* (*)(UGCEventBus* __this, void* priority);
        // Method: Method_14() | Slot: 32162 | Token: 0xffff
        using fn_Method_14 = void* (*)(UGCEventBus* __this);
    };

    // TypeDefIndex: 34640 | Original: COW.GamePlay.UGCRuntime.UGCGame | Token: 0x200874f
    struct UGCGame : Il2Cpp::Object {
        // Fields (41)
        void* internalLibraryData; // internalLibraryData | Token: 0x404135a
        void* gameData; // gameData | Token: 0x404135b
        void* graphDataCacheByGraphID; // graphDataCacheByGraphID | Token: 0x404135c
        void* staticGraphDataCacheByGraphID; // staticGraphDataCacheByGraphID | Token: 0x404135d
        void* graphNameToGraphID; // graphNameToGraphID | Token: 0x404135e
        void* ugcRuntime; // ugcRuntime | Token: 0x404135f
        void* entityExportDataCache; // entityExportDataCache | Token: 0x4041360
        void* globalEntity; // globalEntity | Token: 0x4041361
        void* moduleMap; // moduleMap | Token: 0x4041362
        void* indexRecyclePool; // indexRecyclePool | Token: 0x4041363
        void* allEntities; // allEntities | Token: 0x4041364
        void* archTypeChunks; // archTypeChunks | Token: 0x4041365
        void* hasGraphEntities; // hasGraphEntities | Token: 0x4041366
        void* pendingCreateRemoteEntities; // pendingCreateRemoteEntities | Token: 0x4041367
        void* OnPreTickEvent; // OnPreTickEvent | Token: 0x4041368
        void* removedPreTickEvent; // removedPreTickEvent | Token: 0x4041369
        void* OnVisualTickEvent; // OnVisualTickEvent | Token: 0x404136a
        void* removedVisualTickEvent; // removedVisualTickEvent | Token: 0x404136b
        void* OnTickEvent; // OnTickEvent | Token: 0x404136c
        void* removedTickEvent; // removedTickEvent | Token: 0x404136d
        void* OnPostTickEvent; // OnPostTickEvent | Token: 0x404136e
        void* removedPostTickEvent; // removedPostTickEvent | Token: 0x404136f
        void* OnFrameworkPostTickEvent; // OnFrameworkPostTickEvent | Token: 0x4041370
        void* removedFrameworkPostTickEvent; // removedFrameworkPostTickEvent | Token: 0x4041371
        void* OnFixedTickEvent; // OnFixedTickEvent | Token: 0x4041372
        void* removedFixedTickEvent; // removedFixedTickEvent | Token: 0x4041373
        void* onCreateEntityNeedBridging; // onCreateEntityNeedBridging | Token: 0x4041374
        void* entitiesCreatedInPerFrame; // entitiesCreatedInPerFrame | Token: 0x4041375
        void* entitiesCreatedPerFrameMax; // entitiesCreatedPerFrameMax | Token: 0x4041376
        void* entitiesCreateBeRejectedInPerFrame; // entitiesCreateBeRejectedInPerFrame | Token: 0x4041377
        void* dynamicCreatedEntityCountInMatch; // dynamicCreatedEntityCountInMatch | Token: 0x4041378
        void* dynamicCreatedEntityCountInMatchMax; // dynamicCreatedEntityCountInMatchMax | Token: 0x4041379
        void* entitiesCreateBeRejectedInMatch; // entitiesCreateBeRejectedInMatch | Token: 0x404137a
        void* entitiesCountWarningRecord; // entitiesCountWarningRecord | Token: 0x404137b
        void* entitiesCountWarningCDRecord; // entitiesCountWarningCDRecord | Token: 0x404137c
        void* entitiesCountWarningCDInterval; // entitiesCountWarningCDInterval | Token: 0x404137d
        void* entitiesCountWarningThreshold; // entitiesCountWarningThreshold | Token: 0x404137e
        void* entitiesCountWarningSegmentInterval; // entitiesCountWarningSegmentInterval | Token: 0x404137f
        void* filterEntitiesResult; // filterEntitiesResult | Token: 0x4041380
        void* AsyncLoadEntity; // AsyncLoadEntity | Token: 0x4041381
        void* isTicking; // isTicking | Token: 0x4041382

        // Methods (92)
        // Method: bum() | Slot: 103 | Token: 0x1891
        using fn_bum = void* (*)(UGCGame* __this);
        // Method: eatherZonesToUnRegister() | Slot: 65535 | Token: 0x6035e10
        using fn_eatherZonesToUnRegister = void* (*)(UGCGame* __this);
        // Method: NKIJNFPICLH() | Slot: 131 | Token: 0xffffffff
        using fn_NKIJNFPICLH = void* (*)(UGCGame* __this);
        // Method: _WAIT() | Slot: 24082 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UGCGame* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCGame* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x69c4
        using fn_Method_5 = void* (*)(UGCGame* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7da5
        using fn_Method_6 = void* (*)(UGCGame* __this);
        // Method: Method_7(void* circlePlane) | Slot: 9541 | Token: 0x58dc90
        using fn_Method_7 = void* (*)(UGCGame* __this, void* circlePlane);
        // Method: Method_8() | Slot: 32165 | Token: 0x3ffff
        using fn_Method_8 = void* (*)(UGCGame* __this);
        // Method: bum() | Slot: 312 | Token: 0x81
        using fn_bum = void* (*)(UGCGame* __this);
        // Method: herZonesToUnRegister() | Slot: 65535 | Token: 0x6035e18
        using fn_herZonesToUnRegister = void* (*)(UGCGame* __this);
        // Method: OnOnDestroy() | Slot: 196 | Token: 0xffffffff
        using fn_OnOnDestroy = void* (*)(UGCGame* __this);
        // Method: mbly-CSharp.dll() | Slot: 24090 | Token: 0xffffffff
        using fn_mbly_CSharp_dll = void* (*)(UGCGame* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCGame* __this);
        // Method: Method_14() | Slot: 65535 | Token: 0x69c4
        using fn_Method_14 = void* (*)(UGCGame* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x7da5
        using fn_Method_15 = void* (*)(UGCGame* __this);
        // Method: Method_16(void* cam) | Slot: 9541 | Token: 0x1d588f
        using fn_Method_16 = void* (*)(UGCGame* __this, void* cam);
        // Method: Method_17() | Slot: 32167 | Token: 0xffff
        using fn_Method_17 = void* (*)(UGCGame* __this);
        // Method: g() | Slot: 17683 | Token: 0xc4
        using fn_g = void* (*)(UGCGame* __this);
        // Method: rZonesToUnRegister(void* DJAPBCKDFKA) | Slot: 73 | Token: 0x6035e20
        using fn_rZonesToUnRegister = void* (*)(UGCGame* __this, void* DJAPBCKDFKA);
        // Method: MPGLMIDLLPA() | Slot: 129 | Token: 0xffffffff
        using fn_MPGLMIDLLPA = void* (*)(UGCGame* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24098 | Token: 0x21702
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCGame* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCGame* __this);
        // Method: Method_23() | Slot: 65535 | Token: 0x12545
        using fn_Method_23 = void* (*)(UGCGame* __this);
        // Method: Method_24() | Slot: 0 | Token: 0x7da7
        using fn_Method_24 = void* (*)(UGCGame* __this);
        // Method: Method_25(void* strAPPSecret) | Slot: 9541 | Token: 0x1d5795
        using fn_Method_25 = void* (*)(UGCGame* __this, void* strAPPSecret);
        // Method: Method_26() | Slot: 32167 | Token: 0x1ffff
        using fn_Method_26 = void* (*)(UGCGame* __this);
        // Method: t() | Slot: 22699 | Token: 0x6
        using fn_t = void* (*)(UGCGame* __this);
        // Method: rZonesToUnRegister() | Slot: 65535 | Token: 0x6035e28
        using fn_rZonesToUnRegister = void* (*)(UGCGame* __this);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(UGCGame* __this);
        // Method: `2() | Slot: 24106 | Token: 0xffffffff
        using fn__2 = void* (*)(UGCGame* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCGame* __this);
        // Method: Method_32(void* bR, void* P0) | Slot: 5892 | Token: 0x12545
        using fn_Method_32 = void* (*)(UGCGame* __this, void* bR, void* P0);
        // Method: Method_33() | Slot: 0 | Token: 0x7da9
        using fn_Method_33 = void* (*)(UGCGame* __this);
        // Method: terWhenReady>d__68(void* priority) | Slot: 9541 | Token: 0x5879e8
        using fn_terWhenReady_d__68 = void* (*)(UGCGame* __this, void* priority);
        // Method: Method_35() | Slot: 32169 | Token: 0xffff
        using fn_Method_35 = void* (*)(UGCGame* __this);
        // Method: t() | Slot: 17659 | Token: 0xc6
        using fn_t = void* (*)(UGCGame* __this);
        // Method: onesToUnRegister() | Slot: 22 | Token: 0x6035e30
        using fn_onesToUnRegister = void* (*)(UGCGame* __this);
        // Method: BNKABHFELIP() | Slot: 129 | Token: 0xffffffff
        using fn_BNKABHFELIP = void* (*)(UGCGame* __this);
        // Method: _WAIT() | Slot: 24114 | Token: 0x21708
        using fn__WAIT = void* (*)(UGCGame* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCGame* __this);
        // Method: Method_41() | Slot: 5898 | Token: 0x12545
        using fn_Method_41 = void* (*)(UGCGame* __this);
        // Method: Method_42() | Slot: 0 | Token: 0x7da9
        using fn_Method_42 = void* (*)(UGCGame* __this);
        // Method: Method_43(void* priority) | Slot: 9541 | Token: 0x58a003
        using fn_Method_43 = void* (*)(UGCGame* __this, void* priority);
        // Method: Method_44() | Slot: 32169 | Token: 0xffff
        using fn_Method_44 = void* (*)(UGCGame* __this);
        // Method: bum() | Slot: 40987 | Token: 0x81
        using fn_bum = void* (*)(UGCGame* __this);
        // Method: onesToUnRegister() | Slot: 65535 | Token: 0x6035e38
        using fn_onesToUnRegister = void* (*)(UGCGame* __this);
        // Method: AFBDBACOMID() | Slot: 129 | Token: 0xffffffff
        using fn_AFBDBACOMID = void* (*)(UGCGame* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24122 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCGame* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCGame* __this);
        // Method: Method_50() | Slot: 65535 | Token: 0xa52f
        using fn_Method_50 = void* (*)(UGCGame* __this);
        // Method: Method_51() | Slot: 0 | Token: 0x7da9
        using fn_Method_51 = void* (*)(UGCGame* __this);
        // Method: nReady>d__68() | Slot: 27076 | Token: 0x1d58c5
        using fn_nReady_d__68 = void* (*)(UGCGame* __this);
        // Method: Method_53() | Slot: 32169 | Token: 0xffff
        using fn_Method_53 = void* (*)(UGCGame* __this);
        // Method: bum() | Slot: 56695 | Token: 0x6
        using fn_bum = void* (*)(UGCGame* __this);
        // Method: esToUnRegister() | Slot: 65535 | Token: 0x6035e40
        using fn_esToUnRegister = void* (*)(UGCGame* __this);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(UGCGame* __this);
        // Method: `2() | Slot: 24130 | Token: 0x2170c
        using fn__2 = void* (*)(UGCGame* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCGame* __this);
        // Method: Method_59(void* data, void* data) | Slot: 5902 | Token: 0x12545
        using fn_Method_59 = void* (*)(UGCGame* __this, void* data, void* data);
        // Method: Method_60() | Slot: 0 | Token: 0x7dab
        using fn_Method_60 = void* (*)(UGCGame* __this);
        // Method: Method_61() | Slot: 27076 | Token: 0x58dda6
        using fn_Method_61 = void* (*)(UGCGame* __this);
        // Method: Method_62() | Slot: 32171 | Token: 0xffff
        using fn_Method_62 = void* (*)(UGCGame* __this);
        // Method: bum() | Slot: 17603 | Token: 0x86
        using fn_bum = void* (*)(UGCGame* __this);
        // Method: esToUnRegister() | Slot: 65535 | Token: 0x6035e48
        using fn_esToUnRegister = void* (*)(UGCGame* __this);
        // Method: OnRecycle() | Slot: 198 | Token: 0xffffffff
        using fn_OnRecycle = void* (*)(UGCGame* __this);
        // Method: sembly-CSharp.dll() | Slot: 24138 | Token: 0xffffffff
        using fn_sembly_CSharp_dll = void* (*)(UGCGame* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCGame* __this);
        // Method: Method_68() | Slot: 5903 | Token: 0x12545
        using fn_Method_68 = void* (*)(UGCGame* __this);
        // Method: Method_69() | Slot: 0 | Token: 0x7dab
        using fn_Method_69 = void* (*)(UGCGame* __this);
        // Method: y>d__68(void* cam) | Slot: 9541 | Token: 0x1d58ab
        using fn_y_d__68 = void* (*)(UGCGame* __this, void* cam);
        // Method: Method_71() | Slot: 32171 | Token: 0xffff
        using fn_Method_71 = void* (*)(UGCGame* __this);
        // Method: t() | Slot: 16681 | Token: 0x6
        using fn_t = void* (*)(UGCGame* __this);
        // Method: oUnRegister() | Slot: 68 | Token: 0x6035e50
        using fn_oUnRegister = void* (*)(UGCGame* __this);
        // Method: OnAwake() | Slot: 196 | Token: 0xffffffff
        using fn_OnAwake = void* (*)(UGCGame* __this);
        // Method: () | Slot: 24146 | Token: 0xffffffff
        using fn_unnamed = void* (*)(UGCGame* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCGame* __this);
        // Method: Method_77(void* bR, void* P0) | Slot: 5906 | Token: 0x12545
        using fn_Method_77 = void* (*)(UGCGame* __this, void* bR, void* P0);
        // Method: Method_78() | Slot: 0 | Token: 0x7dae
        using fn_Method_78 = void* (*)(UGCGame* __this);
        // Method: Method_79(void* circlePlane) | Slot: 9541 | Token: 0x44fb
        using fn_Method_79 = void* (*)(UGCGame* __this, void* circlePlane);
        // Method: Method_80() | Slot: 32174 | Token: 0x16
        using fn_Method_80 = void* (*)(UGCGame* __this);
        // Method: bum() | Slot: 56834 | Token: 0x86
        using fn_bum = void* (*)(UGCGame* __this);
        // Method: oUnRegister() | Slot: 65535 | Token: 0x6035e58
        using fn_oUnRegister = void* (*)(UGCGame* __this);
        // Method: OLBOPJBAELJ() | Slot: 129 | Token: 0xffffffff
        using fn_OLBOPJBAELJ = void* (*)(UGCGame* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24154 | Token: 0x21714
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCGame* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCGame* __this);
        // Method: Method_86() | Slot: 65535 | Token: 0x69c4
        using fn_Method_86 = void* (*)(UGCGame* __this);
        // Method: Method_87() | Slot: 0 | Token: 0x7dae
        using fn_Method_87 = void* (*)(UGCGame* __this);
        // Method: Method_88(void* priority) | Slot: 9541 | Token: 0x58de3e
        using fn_Method_88 = void* (*)(UGCGame* __this, void* priority);
        // Method: Method_89() | Slot: 32174 | Token: 0x3ffff
        using fn_Method_89 = void* (*)(UGCGame* __this);
        // Method: ype_NPCAnimClipSelector() | Slot: 56918 | Token: 0x81
        using fn_ype_NPCAnimClipSelector = void* (*)(UGCGame* __this);
        // Method: oUnRegister() | Slot: 65535 | Token: 0x6035e60
        using fn_oUnRegister = void* (*)(UGCGame* __this);
    };

    // TypeDefIndex: 34641 | Original: COW.GamePlay.UGCRuntime.UGCLogicEntityInternal | Token: 0x2008752
    struct UGCLogicEntityInternal : Il2Cpp::Object {
        // Fields (12)
        void* entityIndex; // entityIndex | Token: 0x4041384
        void* container; // container | Token: 0x4041385
        void* entityBridgingType; // entityBridgingType | Token: 0x4041386
        void* archTypeID; // archTypeID | Token: 0x4041387
        void* eventbus; // eventbus | Token: 0x4041388
        void* ugcRuntime; // ugcRuntime | Token: 0x4041389
        void* graphMap; // graphMap | Token: 0x404138a
        void* hasAwaken; // hasAwaken | Token: 0x404138b
        void* isEnableDirtyCheckCache; // isEnableDirtyCheckCache | Token: 0x404138c
        void* isDestroyed; // isDestroyed | Token: 0x404138d
        void* bridgingEntityCache; // bridgingEntityCache | Token: 0x404138e
        void* tickGraph; // tickGraph | Token: 0x404138f

        // Methods (38)
        // Method: Method_0() | Slot: 32174 | Token: 0xffff
        using fn_Method_0 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: bum() | Slot: 37186 | Token: 0x6
        using fn_bum = void* (*)(UGCLogicEntityInternal* __this);
        // Method: oUnRegister() | Slot: 65535 | Token: 0x6035e68
        using fn_oUnRegister = void* (*)(UGCLogicEntityInternal* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCLogicEntityInternal* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24170 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: ACount() | Slot: 65535 | Token: 0x8000000
        using fn_ACount = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0xbee9
        using fn_Method_6 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7dad
        using fn_Method_7 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_8() | Slot: 48873 | Token: 0x21fb
        using fn_Method_8 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_9() | Slot: 32175 | Token: 0x7
        using fn_Method_9 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: g() | Slot: 57105 | Token: 0xc4
        using fn_g = void* (*)(UGCLogicEntityInternal* __this);
        // Method: UnRegister() | Slot: 91 | Token: 0x6035e70
        using fn_UnRegister = void* (*)(UGCLogicEntityInternal* __this);
        // Method: ENBDBKBLCFM() | Slot: 196 | Token: 0xffffffff
        using fn_ENBDBKBLCFM = void* (*)(UGCLogicEntityInternal* __this);
        // Method: allback() | Slot: 24178 | Token: 0xffffffff
        using fn_allback = void* (*)(UGCLogicEntityInternal* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_15() | Slot: 65535 | Token: 0x12545
        using fn_Method_15 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_16() | Slot: 0 | Token: 0x7daf
        using fn_Method_16 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: dFromComponentSettingsCO>d__38(void* circlePlane) | Slot: 9541 | Token: 0x67
        using fn_dFromComponentSettingsCO_d__38 = void* (*)(UGCLogicEntityInternal* __this, void* circlePlane);
        // Method: Method_18() | Slot: 32175 | Token: 0xffff
        using fn_Method_18 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: bum() | Slot: 37216 | Token: 0x6
        using fn_bum = void* (*)(UGCLogicEntityInternal* __this);
        // Method: UnRegister() | Slot: 65535 | Token: 0x6035e78
        using fn_UnRegister = void* (*)(UGCLogicEntityInternal* __this);
        // Method: <>iFixBaseProxy_OnModelShowed() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnModelShowed = void* (*)(UGCLogicEntityInternal* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24186 | Token: 0x21721
        using fn_GetExchangeCurrencySubType = void* (*)(UGCLogicEntityInternal* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_24() | Slot: 65535 | Token: 0x2453
        using fn_Method_24 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_25() | Slot: 0 | Token: 0x7db1
        using fn_Method_25 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_26(void* d) | Slot: 9541 | Token: 0x58df86
        using fn_Method_26 = void* (*)(UGCLogicEntityInternal* __this, void* d);
        // Method: Method_27() | Slot: 32177 | Token: 0xffff
        using fn_Method_27 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: _0() | Slot: 17694 | Token: 0x84
        using fn__0 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Register() | Slot: 81 | Token: 0x6035e80
        using fn_Register = void* (*)(UGCLogicEntityInternal* __this);
        // Method: LAPPENCPCGA() | Slot: 129 | Token: 0xffffffff
        using fn_LAPPENCPCGA = void* (*)(UGCLogicEntityInternal* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24194 | Token: 0x21723
        using fn_GetExchangeCurrencySubType = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_33() | Slot: 65535 | Token: 0x12545
        using fn_Method_33 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_34() | Slot: 0 | Token: 0x7db1
        using fn_Method_34 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: Method_35(void* priority) | Slot: 9541 | Token: 0x44fb
        using fn_Method_35 = void* (*)(UGCLogicEntityInternal* __this, void* priority);
        // Method: Method_36() | Slot: 32177 | Token: 0x16
        using fn_Method_36 = void* (*)(UGCLogicEntityInternal* __this);
        // Method: t() | Slot: 57270 | Token: 0xc6
        using fn_t = void* (*)(UGCLogicEntityInternal* __this);
    };

    // TypeDefIndex: 34642 | Original: COW.GamePlay.UGCRuntime.UGCLogicEntityLinkInfo | Token: 0x2008753
    struct UGCLogicEntityLinkInfo : Il2Cpp::Object {
        // Fields (4)
        void* ugcRuntime; // ugcRuntime | Token: 0x4041390
        void* entityID; // entityID | Token: 0x4041391
        void* entityBridgingType; // entityBridgingType | Token: 0x4041392
        void* archTypeID; // archTypeID | Token: 0x4041393

        // Methods (4)
        // Method: Register() | Slot: 65535 | Token: 0x6035e88
        using fn_Register = void* (*)(UGCLogicEntityLinkInfo* __this);
        // Method: FFEJMEPHEAJ() | Slot: 2180 | Token: 0xffffffff
        using fn_FFEJMEPHEAJ = void* (*)(UGCLogicEntityLinkInfo* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24202 | Token: 0x21725
        using fn_GetExchangeCurrencySubType = void* (*)(UGCLogicEntityLinkInfo* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCLogicEntityLinkInfo* __this);
    };

    // TypeDefIndex: 34643 | Original: COW.GamePlay.UGCRuntime.UGCLogicEntity | Token: 0x2008754
    struct UGCLogicEntity : Il2Cpp::Object {
        // Fields (5)
        void* internalEntity; // internalEntity | Token: 0x4041394
        void* linkInfo; // linkInfo | Token: 0x4041395
        void* isLink; // isLink | Token: 0x4041396
        void* isRemote; // isRemote | Token: 0x4041397
        void* attribute; // attribute | Token: 0x4041398

        // Methods (75)
        // Method: Method_0() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_0 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7db1
        using fn_Method_1 = void* (*)(UGCLogicEntity* __this);
        // Method: onentSettingsCO>d__38(void* circlePlane) | Slot: 9541 | Token: 0x50d6e0
        using fn_onentSettingsCO_d__38 = void* (*)(UGCLogicEntity* __this, void* circlePlane);
        // Method: Method_3() | Slot: 32177 | Token: 0x22
        using fn_Method_3 = void* (*)(UGCLogicEntity* __this);
        // Method: bum() | Slot: 57306 | Token: 0x81
        using fn_bum = void* (*)(UGCLogicEntity* __this);
        // Method: Register(void* GNBOOELAHNP, void* LAHMCKAGGCO) | Slot: 65535 | Token: 0x6035e90
        using fn_Register = void* (*)(UGCLogicEntity* __this, void* GNBOOELAHNP, void* LAHMCKAGGCO);
        // Method: OCHDAAKJPDJ() | Slot: 129 | Token: 0xffffffff
        using fn_OCHDAAKJPDJ = void* (*)(UGCLogicEntity* __this);
        // Method: _WAIT() | Slot: 24210 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UGCLogicEntity* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCLogicEntity* __this);
        // Method: Method_9() | Slot: 5933 | Token: 0x69c4
        using fn_Method_9 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x7db1
        using fn_Method_10 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_11(void* priority) | Slot: 9541 | Token: 0x58e004
        using fn_Method_11 = void* (*)(UGCLogicEntity* __this, void* priority);
        // Method: Method_12() | Slot: 32177 | Token: 0x2ffff
        using fn_Method_12 = void* (*)(UGCLogicEntity* __this);
        // Method: t() | Slot: 57368 | Token: 0x86
        using fn_t = void* (*)(UGCLogicEntity* __this);
        // Method: Register() | Slot: 65535 | Token: 0x6035e98
        using fn_Register = void* (*)(UGCLogicEntity* __this);
        // Method: ShowCantOpenTips() | Slot: 134 | Token: 0xffffffff
        using fn_ShowCantOpenTips = void* (*)(UGCLogicEntity* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24218 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCLogicEntity* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCLogicEntity* __this);
        // Method: Method_18() | Slot: 65535 | Token: 0x12545
        using fn_Method_18 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x7db1
        using fn_Method_19 = void* (*)(UGCLogicEntity* __this);
        // Method: gsCO>d__38(void* cam) | Slot: 9541 | Token: 0x1d58ab
        using fn_gsCO_d__38 = void* (*)(UGCLogicEntity* __this, void* cam);
        // Method: Method_21() | Slot: 32177 | Token: 0xffff
        using fn_Method_21 = void* (*)(UGCLogicEntity* __this);
        // Method: t() | Slot: 50417 | Token: 0x6
        using fn_t = void* (*)(UGCLogicEntity* __this);
        // Method: Register(void* P0) | Slot: 65535 | Token: 0x6035ea0
        using fn_Register = void* (*)(UGCLogicEntity* __this, void* P0);
        // Method: <>iFixBaseProxy_DoAction() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_DoAction = void* (*)(UGCLogicEntity* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24226 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCLogicEntity* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCLogicEntity* __this);
        // Method: Method_27() | Slot: 65535 | Token: 0x12545
        using fn_Method_27 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_28() | Slot: 0 | Token: 0x7db2
        using fn_Method_28 = void* (*)(UGCLogicEntity* __this);
        // Method: O>d__38(void* priority) | Slot: 9541 | Token: 0x58e104
        using fn_O_d__38 = void* (*)(UGCLogicEntity* __this, void* priority);
        // Method: Method_30() | Slot: 32178 | Token: 0x3ffff
        using fn_Method_30 = void* (*)(UGCLogicEntity* __this);
        // Method: bum() | Slot: 57647 | Token: 0x81
        using fn_bum = void* (*)(UGCLogicEntity* __this);
        // Method: egister(void* HCLGHJNEFIC, void* EEFLCGEOIFN, void* EEIHKGIELLK) | Slot: 65535 | Token: 0x6035ea8
        using fn_egister = void* (*)(UGCLogicEntity* __this, void* HCLGHJNEFIC, void* EEFLCGEOIFN, void* EEIHKGIELLK);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCLogicEntity* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24234 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCLogicEntity* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UGCLogicEntity* __this);
        // Method: Method_36() | Slot: 65535 | Token: 0x12545
        using fn_Method_36 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_37() | Slot: 0 | Token: 0x7db4
        using fn_Method_37 = void* (*)(UGCLogicEntity* __this);
        // Method: mportSettingsCO>d__67(void* priority) | Slot: 9541 | Token: 0x58e1b5
        using fn_mportSettingsCO_d__67 = void* (*)(UGCLogicEntity* __this, void* priority);
        // Method: Method_39() | Slot: 32180 | Token: 0x59
        using fn_Method_39 = void* (*)(UGCLogicEntity* __this);
        // Method: g() | Slot: 57105 | Token: 0xc4
        using fn_g = void* (*)(UGCLogicEntity* __this);
        // Method: ister() | Slot: 91 | Token: 0x6035eb0
        using fn_ister = void* (*)(UGCLogicEntity* __this);
        // Method: get_IsActive() | Slot: 2182 | Token: 0xffffffff
        using fn_get_IsActive = void* (*)(UGCLogicEntity* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24242 | Token: 0x2173f
        using fn_GetExchangeCurrencySubType = void* (*)(UGCLogicEntity* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UGCLogicEntity* __this);
        // Method: Method_45() | Slot: 5952 | Token: 0x12545
        using fn_Method_45 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_46() | Slot: 0 | Token: 0x7db4
        using fn_Method_46 = void* (*)(UGCLogicEntity* __this);
        // Method: rtSettingsCO>d__67(void* priority) | Slot: 9541 | Token: 0x451e
        using fn_rtSettingsCO_d__67 = void* (*)(UGCLogicEntity* __this, void* priority);
        // Method: Method_48() | Slot: 32180 | Token: 0x51
        using fn_Method_48 = void* (*)(UGCLogicEntity* __this);
        // Method: bum() | Slot: 42807 | Token: 0xc4
        using fn_bum = void* (*)(UGCLogicEntity* __this);
        // Method: ister() | Slot: 65535 | Token: 0x6035eb8
        using fn_ister = void* (*)(UGCLogicEntity* __this);
        // Method: ENBDBKBLCFM() | Slot: 196 | Token: 0xffffffff
        using fn_ENBDBKBLCFM = void* (*)(UGCLogicEntity* __this);
        // Method: allback() | Slot: 24250 | Token: 0xffffffff
        using fn_allback = void* (*)(UGCLogicEntity* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCLogicEntity* __this);
        // Method: Method_54(void* data, void* type) | Slot: 5956 | Token: 0x12545
        using fn_Method_54 = void* (*)(UGCLogicEntity* __this, void* data, void* type);
        // Method: Method_55() | Slot: 0 | Token: 0x7db4
        using fn_Method_55 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_56(void* strAPPSecret) | Slot: 9541 | Token: 0x1bf3c4
        using fn_Method_56 = void* (*)(UGCLogicEntity* __this, void* strAPPSecret);
        // Method: Method_57() | Slot: 32180 | Token: 0xffff
        using fn_Method_57 = void* (*)(UGCLogicEntity* __this);
        // Method: bum() | Slot: 37186 | Token: 0x6
        using fn_bum = void* (*)(UGCLogicEntity* __this);
        // Method: ister() | Slot: 65535 | Token: 0x6035ec0
        using fn_ister = void* (*)(UGCLogicEntity* __this);
        // Method: <>iFixBaseProxy_JHEFLJNCBPJ() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_JHEFLJNCBPJ = void* (*)(UGCLogicEntity* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24258 | Token: 0x21746
        using fn_GetExchangeCurrencySubType = void* (*)(UGCLogicEntity* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCLogicEntity* __this);
        // Method: Method_63() | Slot: 5960 | Token: 0x12545
        using fn_Method_63 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_64() | Slot: 0 | Token: 0x7db5
        using fn_Method_64 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_65(void* priority) | Slot: 9541 | Token: 0x5fc0
        using fn_Method_65 = void* (*)(UGCLogicEntity* __this, void* priority);
        // Method: Method_66() | Slot: 32181 | Token: 0x2ffff
        using fn_Method_66 = void* (*)(UGCLogicEntity* __this);
        // Method: bum() | Slot: 103 | Token: 0x86
        using fn_bum = void* (*)(UGCLogicEntity* __this);
        // Method: ster() | Slot: 65535 | Token: 0x6035ec8
        using fn_ster = void* (*)(UGCLogicEntity* __this);
        // Method: SyncAction() | Slot: 198 | Token: 0xffffffff
        using fn_SyncAction = void* (*)(UGCLogicEntity* __this);
        // Method: hangeCurrencyType() | Slot: 24266 | Token: 0xffffffff
        using fn_hangeCurrencyType = void* (*)(UGCLogicEntity* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCLogicEntity* __this);
        // Method: Method_72(void* info, void* context) | Slot: 5966 | Token: 0x12545
        using fn_Method_72 = void* (*)(UGCLogicEntity* __this, void* info, void* context);
        // Method: Method_73() | Slot: 0 | Token: 0x7db6
        using fn_Method_73 = void* (*)(UGCLogicEntity* __this);
        // Method: Method_74() | Slot: 27076 | Token: 0x4505
        using fn_Method_74 = void* (*)(UGCLogicEntity* __this);
    };

    // TypeDefIndex: 34645 | Original: COW.GamePlay.UGCRuntime.UGCObjectPool`1 | Token: 0x2008755
    struct UGCObjectPool_1 : Il2Cpp::Object {
        // Fields (3)
        void* simplePool; // simplePool | Token: 0x4041399
        void* InitCountPerFrame; // InitCountPerFrame | Token: 0x404139a
        void* initLeft; // initLeft | Token: 0x404139b

        // Methods (13)
        // Method: Method_0() | Slot: 32182 | Token: 0x12
        using fn_Method_0 = void* (*)(UGCObjectPool_1* __this);
        // Method: bum() | Slot: 55008 | Token: 0x1c4
        using fn_bum = void* (*)(UGCObjectPool_1* __this);
        // Method: ter() | Slot: 34 | Token: 0x6035ed0
        using fn_ter = void* (*)(UGCObjectPool_1* __this);
        // Method: ENBDBKBLCFM() | Slot: 452 | Token: 0xffffffff
        using fn_ENBDBKBLCFM = void* (*)(UGCObjectPool_1* __this);
        // Method: allback() | Slot: 24274 | Token: 0x21751
        using fn_allback = void* (*)(UGCObjectPool_1* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCObjectPool_1* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0x64d6
        using fn_Method_6 = void* (*)(UGCObjectPool_1* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7db6
        using fn_Method_7 = void* (*)(UGCObjectPool_1* __this);
        // Method: Method_8() | Slot: 53407 | Token: 0x58e2f3
        using fn_Method_8 = void* (*)(UGCObjectPool_1* __this);
        // Method: Method_9() | Slot: 32182 | Token: 0xffff
        using fn_Method_9 = void* (*)(UGCObjectPool_1* __this);
        // Method: Interval() | Slot: 58137 | Token: 0x86
        using fn_Interval = void* (*)(UGCObjectPool_1* __this);
        // Method: ter(void* OBMFMAKFDDL, void* PNLDKNOFPNG) | Slot: 65535 | Token: 0x6035ed8
        using fn_ter = void* (*)(UGCObjectPool_1* __this, void* OBMFMAKFDDL, void* PNLDKNOFPNG);
        // Method: LPNOGKIHCBD() | Slot: 132 | Token: 0xffffffff
        using fn_LPNOGKIHCBD = void* (*)(UGCObjectPool_1* __this);
    };

    // TypeDefIndex: 34646 | Original: COW.GamePlay.UGCRuntime.RegisteredAssetType | Token: 0x2008757
    struct RegisteredAssetType : Il2Cpp::Object {
        // Fields (2)
        void* value__; // value__ | Token: 0x404139e
        void* Prefab; // Prefab | Token: 0x404139f
    };

    // TypeDefIndex: 34647 | Original: COW.GamePlay.UGCRuntime.UGCFunctionDelegate | Token: 0x2008758
    struct UGCFunctionDelegate : Il2Cpp::Object {

        // Methods (4)
        // Method: Method_0() | Slot: 0 | Token: 0x7db6
        using fn_Method_0 = void* (*)(UGCFunctionDelegate* __this);
        // Method: Method_1() | Slot: 27076 | Token: 0x1d58c5
        using fn_Method_1 = void* (*)(UGCFunctionDelegate* __this);
        // Method: Method_2() | Slot: 32182 | Token: 0xffff
        using fn_Method_2 = void* (*)(UGCFunctionDelegate* __this);
        // Method: bum() | Slot: 37126 | Token: 0x6
        using fn_bum = void* (*)(UGCFunctionDelegate* __this);
    };

    // TypeDefIndex: 34648 | Original: COW.GamePlay.UGCRuntime.DelayFrameTask | Token: 0x2008759
    struct DelayFrameTask : Il2Cpp::Object {
        // Fields (3)
        void* delayFrames; // delayFrames | Token: 0x40413a0
        void* action; // action | Token: 0x40413a1
        void* taskId; // taskId | Token: 0x40413a2

        // Methods (1)
        // Method: ter() | Slot: 65535 | Token: 0x6035ee0
        using fn_ter = void* (*)(DelayFrameTask* __this);
    };

    // TypeDefIndex: 34649 | Original: COW.GamePlay.UGCRuntime.IUGCRuntimeMatch | Token: 0x200875a
    struct IUGCRuntimeMatch : Il2Cpp::Object {

        // Methods (1)
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(IUGCRuntimeMatch* __this);
    };

    // TypeDefIndex: 34651 | Original: COW.GamePlay.UGCRuntime.UGCRuntime | Token: 0x200875b
    struct UGCRuntime : Il2Cpp::Object {
        // Fields (15)
        void* entityDataStore; // entityDataStore | Token: 0x40413a3
        void* m_trs; // m_trs | Token: 0x40413a4
        void* aniModule; // aniModule | Token: 0x40413a5
        void* bridgingGame; // bridgingGame | Token: 0x40413a6
        void* debugLogger; // debugLogger | Token: 0x40413a7
        void* vmDebugger; // vmDebugger | Token: 0x40413a8
        void* objectPool; // objectPool | Token: 0x40413a9
        void* getFuncDelegateByFuncType; // getFuncDelegateByFuncType | Token: 0x40413aa
        void* ugcGame; // ugcGame | Token: 0x40413ab
        void* archTypeMgr; // archTypeMgr | Token: 0x40413ac
        void* assembly; // assembly | Token: 0x40413ad
        void* enableEnergySavingMode; // enableEnergySavingMode | Token: 0x40413ae
        void* delayFrameTasks; // delayFrameTasks | Token: 0x40413af
        void* nextTaskId; // nextTaskId | Token: 0x40413b0
        void* delegateCache; // delegateCache | Token: 0x40413b1

        // Methods (80)
        // Method: `2() | Slot: 24290 | Token: 0xffffffff
        using fn__2 = void* (*)(UGCRuntime* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCRuntime* __this);
        // Method: Method_2(void* data, void* data) | Slot: 5977 | Token: 0x12545
        using fn_Method_2 = void* (*)(UGCRuntime* __this, void* data, void* data);
        // Method: Method_3() | Slot: 0 | Token: 0x7db8
        using fn_Method_3 = void* (*)(UGCRuntime* __this);
        // Method: Method_4() | Slot: 32269 | Token: 0x236404
        using fn_Method_4 = void* (*)(UGCRuntime* __this);
        // Method: Method_5() | Slot: 32184 | Token: 0xffff
        using fn_Method_5 = void* (*)(UGCRuntime* __this);
        // Method: bum() | Slot: 11742 | Token: 0xc4
        using fn_bum = void* (*)(UGCRuntime* __this);
        // Method: r() | Slot: 36 | Token: 0x6035ee8
        using fn_r = void* (*)(UGCRuntime* __this);
        // Method: LNPFBIKECBO() | Slot: 129 | Token: 0xffffffff
        using fn_LNPFBIKECBO = void* (*)(UGCRuntime* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24298 | Token: 0x2175a
        using fn_GetExchangeCurrencySubType = void* (*)(UGCRuntime* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCRuntime* __this);
        // Method: Method_11() | Slot: 5981 | Token: 0x12545
        using fn_Method_11 = void* (*)(UGCRuntime* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x7db8
        using fn_Method_12 = void* (*)(UGCRuntime* __this);
        // Method: Method_13(void* priority) | Slot: 9541 | Token: 0x58e387
        using fn_Method_13 = void* (*)(UGCRuntime* __this, void* priority);
        // Method: Method_14() | Slot: 32184 | Token: 0xffff
        using fn_Method_14 = void* (*)(UGCRuntime* __this);
        // Method: bum() | Slot: 17669 | Token: 0xc6
        using fn_bum = void* (*)(UGCRuntime* __this);
        // Method: r() | Slot: 18 | Token: 0x6035ef0
        using fn_r = void* (*)(UGCRuntime* __this);
        // Method: NEIPHNKAELF() | Slot: 129 | Token: 0xffffffff
        using fn_NEIPHNKAELF = void* (*)(UGCRuntime* __this);
        // Method: imable() | Slot: 24306 | Token: 0x21761
        using fn_imable = void* (*)(UGCRuntime* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCRuntime* __this);
        // Method: Method_20() | Slot: 65535 | Token: 0x12545
        using fn_Method_20 = void* (*)(UGCRuntime* __this);
        // Method: Method_21() | Slot: 0 | Token: 0x7db8
        using fn_Method_21 = void* (*)(UGCRuntime* __this);
        // Method: Method_22() | Slot: 27076 | Token: 0x58e3d8
        using fn_Method_22 = void* (*)(UGCRuntime* __this);
        // Method: Method_23() | Slot: 32184 | Token: 0xffff
        using fn_Method_23 = void* (*)(UGCRuntime* __this);
        // Method: bum() | Slot: 22972 | Token: 0x1886
        using fn_bum = void* (*)(UGCRuntime* __this);
        // Method: r() | Slot: 65535 | Token: 0x6035ef8
        using fn_r = void* (*)(UGCRuntime* __this);
        // Method: <>iFixBaseProxy_SyncAction() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_SyncAction = void* (*)(UGCRuntime* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24314 | Token: 0x21763
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCRuntime* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCRuntime* __this);
        // Method: Method_29() | Slot: 65535 | Token: 0x12545
        using fn_Method_29 = void* (*)(UGCRuntime* __this);
        // Method: Method_30() | Slot: 0 | Token: 0x7db8
        using fn_Method_30 = void* (*)(UGCRuntime* __this);
        // Method: Method_31(void* cam) | Slot: 9541 | Token: 0x1d58ab
        using fn_Method_31 = void* (*)(UGCRuntime* __this, void* cam);
        // Method: Method_32() | Slot: 32184 | Token: 0xffff
        using fn_Method_32 = void* (*)(UGCRuntime* __this);
        // Method: t() | Slot: 58617 | Token: 0x6
        using fn_t = void* (*)(UGCRuntime* __this);
        // Method: m_IsZoneBlend() | Slot: 65535 | Token: 0x6035f00
        using fn_m_IsZoneBlend = void* (*)(UGCRuntime* __this);
        // Method: get_IsFinished() | Slot: 2182 | Token: 0xffffffff
        using fn_get_IsFinished = void* (*)(UGCRuntime* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24322 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCRuntime* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UGCRuntime* __this);
        // Method: Method_38() | Slot: 65535 | Token: 0x12545
        using fn_Method_38 = void* (*)(UGCRuntime* __this);
        // Method: Method_39() | Slot: 0 | Token: 0x7dba
        using fn_Method_39 = void* (*)(UGCRuntime* __this);
        // Method: Method_40(void* d) | Slot: 9541 | Token: 0x4513
        using fn_Method_40 = void* (*)(UGCRuntime* __this, void* d);
        // Method: Method_41() | Slot: 32186 | Token: 0x10049
        using fn_Method_41 = void* (*)(UGCRuntime* __this);
        // Method: bum() | Slot: 17669 | Token: 0xc6
        using fn_bum = void* (*)(UGCRuntime* __this);
        // Method: m_IsZoneBlend() | Slot: 18 | Token: 0x6035f08
        using fn_m_IsZoneBlend = void* (*)(UGCRuntime* __this);
        // Method: Remove() | Slot: 134 | Token: 0xffffffff
        using fn_Remove = void* (*)(UGCRuntime* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24330 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCRuntime* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCRuntime* __this);
        // Method: Method_47() | Slot: 5989 | Token: 0x12545
        using fn_Method_47 = void* (*)(UGCRuntime* __this);
        // Method: Method_48() | Slot: 0 | Token: 0x7dba
        using fn_Method_48 = void* (*)(UGCRuntime* __this);
        // Method: _2(void* priority) | Slot: 9541 | Token: 0x5851f4
        using fn__2 = void* (*)(UGCRuntime* __this, void* priority);
        // Method: Method_50() | Slot: 32186 | Token: 0x1ffff
        using fn_Method_50 = void* (*)(UGCRuntime* __this);
        // Method: bum() | Slot: 58691 | Token: 0x86
        using fn_bum = void* (*)(UGCRuntime* __this);
        // Method: m_IsZoneBlend() | Slot: 65535 | Token: 0x6035f10
        using fn_m_IsZoneBlend = void* (*)(UGCRuntime* __this);
        // Method: FAPAMLBNBLJ() | Slot: 129 | Token: 0xffffffff
        using fn_FAPAMLBNBLJ = void* (*)(UGCRuntime* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24338 | Token: 0x2176a
        using fn_GetExchangeCurrencySubType = void* (*)(UGCRuntime* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCRuntime* __this);
        // Method: Method_56() | Slot: 65535 | Token: 0x12545
        using fn_Method_56 = void* (*)(UGCRuntime* __this);
        // Method: Method_57() | Slot: 0 | Token: 0x7dba
        using fn_Method_57 = void* (*)(UGCRuntime* __this);
        // Method: Method_58(void* strAPPSecret) | Slot: 9541 | Token: 0x1d59bc
        using fn_Method_58 = void* (*)(UGCRuntime* __this, void* strAPPSecret);
        // Method: Method_59() | Slot: 32186 | Token: 0xffff
        using fn_Method_59 = void* (*)(UGCRuntime* __this);
        // Method: bum() | Slot: 22421 | Token: 0x6
        using fn_bum = void* (*)(UGCRuntime* __this);
        // Method: m_IsZoneBlend(void* P0) | Slot: 65535 | Token: 0x6035f18
        using fn_m_IsZoneBlend = void* (*)(UGCRuntime* __this, void* P0);
        // Method: <>iFixBaseProxy_OnRecycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnRecycle = void* (*)(UGCRuntime* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24346 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCRuntime* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCRuntime* __this);
        // Method: Method_65() | Slot: 65535 | Token: 0xa52f
        using fn_Method_65 = void* (*)(UGCRuntime* __this);
        // Method: Method_66() | Slot: 0 | Token: 0x7dba
        using fn_Method_66 = void* (*)(UGCRuntime* __this);
        // Method: Method_67(void* cam) | Slot: 9541 | Token: 0x1d58dd
        using fn_Method_67 = void* (*)(UGCRuntime* __this, void* cam);
        // Method: Method_68() | Slot: 32189 | Token: 0xffff
        using fn_Method_68 = void* (*)(UGCRuntime* __this);
        // Method: REPLAYKIT_VIDEO_NAME_LOBBY() | Slot: 57282 | Token: 0x884
        using fn_REPLAYKIT_VIDEO_NAME_LOBBY = void* (*)(UGCRuntime* __this);
        // Method: sZoneBlend() | Slot: 65535 | Token: 0x6035f20
        using fn_sZoneBlend = void* (*)(UGCRuntime* __this);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(UGCRuntime* __this);
        // Method: `2() | Slot: 24354 | Token: 0x2176e
        using fn__2 = void* (*)(UGCRuntime* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCRuntime* __this);
        // Method: Method_74() | Slot: 5999 | Token: 0x12545
        using fn_Method_74 = void* (*)(UGCRuntime* __this);
        // Method: Method_75() | Slot: 0 | Token: 0x7dbd
        using fn_Method_75 = void* (*)(UGCRuntime* __this);
        // Method: Method_76(void* priority) | Slot: 9541 | Token: 0x44fb
        using fn_Method_76 = void* (*)(UGCRuntime* __this, void* priority);
        // Method: Method_77() | Slot: 32189 | Token: 0x16
        using fn_Method_77 = void* (*)(UGCRuntime* __this);
        // Method: bum() | Slot: 17669 | Token: 0x81
        using fn_bum = void* (*)(UGCRuntime* __this);
        // Method: sZoneBlend() | Slot: 18 | Token: 0x6035f28
        using fn_sZoneBlend = void* (*)(UGCRuntime* __this);
    };

    // TypeDefIndex: 34652 | Original: COW.GamePlay.UGCRuntime.UGCCoreFunc | Token: 0x200875d
    struct UGCCoreFunc : Il2Cpp::Object {
        // Fields (4)
        void* TypeCheckLegalityLevel_None; // TypeCheckLegalityLevel_None | Token: 0x40413b4
        void* TypeCheckLegalityLevel_AntiHack; // TypeCheckLegalityLevel_AntiHack | Token: 0x40413b5
        void* TypeCheckLegalityLevel_ValueTypeProtect; // TypeCheckLegalityLevel_ValueTypeProtect | Token: 0x40413b6
        void* TypeCheckLegalityLevel_TypeMatch; // TypeCheckLegalityLevel_TypeMatch | Token: 0x40413b7

        // Methods (38)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCCoreFunc* __this);
        // Method: Method_1() | Slot: 6000 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCCoreFunc* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dbd
        using fn_Method_2 = void* (*)(UGCCoreFunc* __this);
        // Method: ldCharacterEnabled>5__3(void* d) | Slot: 9541 | Token: 0x58c698
        using fn_ldCharacterEnabled_5__3 = void* (*)(UGCCoreFunc* __this, void* d);
        // Method: Method_4() | Slot: 32189 | Token: 0xffff
        using fn_Method_4 = void* (*)(UGCCoreFunc* __this);
        // Method: bum() | Slot: 17694 | Token: 0xc6
        using fn_bum = void* (*)(UGCCoreFunc* __this);
        // Method: sZoneBlend() | Slot: 81 | Token: 0x6035f30
        using fn_sZoneBlend = void* (*)(UGCCoreFunc* __this);
        // Method: JHEFLJNCBPJ() | Slot: 196 | Token: 0xffffffff
        using fn_JHEFLJNCBPJ = void* (*)(UGCCoreFunc* __this);
        // Method: t_player() | Slot: 24370 | Token: 0xffffffff
        using fn_t_player = void* (*)(UGCCoreFunc* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCCoreFunc* __this);
        // Method: Method_10() | Slot: 65535 | Token: 0x12545
        using fn_Method_10 = void* (*)(UGCCoreFunc* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x7dbd
        using fn_Method_11 = void* (*)(UGCCoreFunc* __this);
        // Method: Method_12(void* cam) | Slot: 9541 | Token: 0x1d588f
        using fn_Method_12 = void* (*)(UGCCoreFunc* __this, void* cam);
        // Method: Method_13() | Slot: 32189 | Token: 0xffff
        using fn_Method_13 = void* (*)(UGCCoreFunc* __this);
        // Method: bum() | Slot: 37161 | Token: 0x6
        using fn_bum = void* (*)(UGCCoreFunc* __this);
        // Method: sZoneBlend(void* P0) | Slot: 65535 | Token: 0x6035f38
        using fn_sZoneBlend = void* (*)(UGCCoreFunc* __this, void* P0);
        // Method: <>iFixBaseProxy_OnModelShowed() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnModelShowed = void* (*)(UGCCoreFunc* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24378 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCCoreFunc* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCCoreFunc* __this);
        // Method: Method_19() | Slot: 6006 | Token: 0x12545
        using fn_Method_19 = void* (*)(UGCCoreFunc* __this);
        // Method: Method_20() | Slot: 0 | Token: 0x7dbf
        using fn_Method_20 = void* (*)(UGCCoreFunc* __this);
        // Method: cterEnabled>5__3(void* priority) | Slot: 9541 | Token: 0x58e680
        using fn_cterEnabled_5__3 = void* (*)(UGCCoreFunc* __this, void* priority);
        // Method: Method_22() | Slot: 32191 | Token: 0xffff
        using fn_Method_22 = void* (*)(UGCCoreFunc* __this);
        // Method: bum() | Slot: 103 | Token: 0x81
        using fn_bum = void* (*)(UGCCoreFunc* __this);
        // Method: oneBlend() | Slot: 65535 | Token: 0x6035f40
        using fn_oneBlend = void* (*)(UGCCoreFunc* __this);
        // Method: .cctor() | Slot: 6289 | Token: 0xffffffff
        using fn__cctor = void* (*)(UGCCoreFunc* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24386 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCCoreFunc* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCCoreFunc* __this);
        // Method: Method_28() | Slot: 65535 | Token: 0x2f3b
        using fn_Method_28 = void* (*)(UGCCoreFunc* __this);
        // Method: Method_29() | Slot: 0 | Token: 0x7dc7
        using fn_Method_29 = void* (*)(UGCCoreFunc* __this);
        // Method: Method_30() | Slot: 13630 | Token: 0x58e7ab
        using fn_Method_30 = void* (*)(UGCCoreFunc* __this);
        // Method: Method_31() | Slot: 32199 | Token: 0xffff
        using fn_Method_31 = void* (*)(UGCCoreFunc* __this);
        // Method: IN_FOV() | Slot: 59331 | Token: 0x886
        using fn_IN_FOV = void* (*)(UGCCoreFunc* __this);
        // Method: () | Slot: 65535 | Token: 0x6035f48
        using fn_unnamed = void* (*)(UGCCoreFunc* __this);
        // Method: LFMMLCGLIFN() | Slot: 2182 | Token: 0xffffffff
        using fn_LFMMLCGLIFN = void* (*)(UGCCoreFunc* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24394 | Token: 0x2177d
        using fn_GetExchangeCurrencySubType = void* (*)(UGCCoreFunc* __this);
        // Method: BuffFactor() | Slot: 65535 | Token: 0x8000000
        using fn_BuffFactor = void* (*)(UGCCoreFunc* __this);
        // Method: Method_37() | Slot: 6014 | Token: 0xb024
        using fn_Method_37 = void* (*)(UGCCoreFunc* __this);
    };

    // TypeDefIndex: 34653 | Original: COW.GamePlay.UGCRuntime.UGCBreakPointWait | Token: 0x200875e
    struct UGCBreakPointWait : Il2Cpp::Object {
        // Fields (1)
        void* _DebuggerContext_k__BackingField; // <DebuggerContext>k__BackingField | Token: 0x40413b8

        // Methods (8)
        // Method: Method_0() | Slot: 0 | Token: 0x7dc7
        using fn_Method_0 = void* (*)(UGCBreakPointWait* __this);
        // Method: Method_1() | Slot: 14090 | Token: 0x58e80b
        using fn_Method_1 = void* (*)(UGCBreakPointWait* __this);
        // Method: Method_2() | Slot: 32199 | Token: 0xffff
        using fn_Method_2 = void* (*)(UGCBreakPointWait* __this);
        // Method: ntiated() | Slot: 59427 | Token: 0x886
        using fn_ntiated = void* (*)(UGCBreakPointWait* __this);
        // Method: () | Slot: 65535 | Token: 0x6035f50
        using fn_unnamed = void* (*)(UGCBreakPointWait* __this);
        // Method: JKABLKFKHMF() | Slot: 2182 | Token: 0xffffffff
        using fn_JKABLKFKHMF = void* (*)(UGCBreakPointWait* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24402 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCBreakPointWait* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UGCBreakPointWait* __this);
    };

    // TypeDefIndex: 34654 | Original: COW.GamePlay.UGCRuntime.UGCVMDebuggerBreakPointStatus | Token: 0x200875f
    struct UGCVMDebuggerBreakPointStatus : Il2Cpp::Object {
        // Fields (3)
        void* _IsEnable_k__BackingField; // <IsEnable>k__BackingField | Token: 0x40413b9
        void* _CurContinueStack_k__BackingField; // <CurContinueStack>k__BackingField | Token: 0x40413ba
        void* _CurContinueStackID_k__BackingField; // <CurContinueStackID>k__BackingField | Token: 0x40413bb

        // Methods (7)
        // Method: Method_0() | Slot: 65535 | Token: 0x69c4
        using fn_Method_0 = void* (*)(UGCVMDebuggerBreakPointStatus* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7dc7
        using fn_Method_1 = void* (*)(UGCVMDebuggerBreakPointStatus* __this);
        // Method: Method_2() | Slot: 45139 | Token: 0x58e86b
        using fn_Method_2 = void* (*)(UGCVMDebuggerBreakPointStatus* __this);
        // Method: Method_3() | Slot: 32199 | Token: 0xffff
        using fn_Method_3 = void* (*)(UGCVMDebuggerBreakPointStatus* __this);
        // Method: bum() | Slot: 59523 | Token: 0x886
        using fn_bum = void* (*)(UGCVMDebuggerBreakPointStatus* __this);
        // Method: () | Slot: 65535 | Token: 0x6035f58
        using fn_unnamed = void* (*)(UGCVMDebuggerBreakPointStatus* __this);
        // Method: ELCGLBIAING() | Slot: 2182 | Token: 0xffffffff
        using fn_ELCGLBIAING = void* (*)(UGCVMDebuggerBreakPointStatus* __this);
    };

    // TypeDefIndex: 34655 | Original: COW.GamePlay.UGCRuntime.UGCVMDebugCodeParamQueryResult | Token: 0x2008760
    struct UGCVMDebugCodeParamQueryResult : Il2Cpp::Object {
        // Fields (4)
        void* _VarValueList_k__BackingField; // <VarValueList>k__BackingField | Token: 0x40413bc
        void* _VarTypeList_k__BackingField; // <VarTypeList>k__BackingField | Token: 0x40413bd
        void* _VarCodeIDList_k__BackingField; // <VarCodeIDList>k__BackingField | Token: 0x40413be
        void* _CallStackIDs_k__BackingField; // <CallStackIDs>k__BackingField | Token: 0x40413bf

        // Methods (9)
        // Method: GetExchangeCurrencySubType() | Slot: 24410 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCVMDebugCodeParamQueryResult* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UGCVMDebugCodeParamQueryResult* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x371b
        using fn_Method_2 = void* (*)(UGCVMDebugCodeParamQueryResult* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7dc7
        using fn_Method_3 = void* (*)(UGCVMDebugCodeParamQueryResult* __this);
        // Method: Method_4() | Slot: 14120 | Token: 0x58e8d7
        using fn_Method_4 = void* (*)(UGCVMDebugCodeParamQueryResult* __this);
        // Method: Method_5() | Slot: 32199 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(UGCVMDebugCodeParamQueryResult* __this);
        // Method: bum() | Slot: 59631 | Token: 0x86
        using fn_bum = void* (*)(UGCVMDebugCodeParamQueryResult* __this);
        // Method: () | Slot: 65535 | Token: 0x6035f60
        using fn_unnamed = void* (*)(UGCVMDebugCodeParamQueryResult* __this);
        // Method: BOMJMCJDKKP() | Slot: 2182 | Token: 0xffffffff
        using fn_BOMJMCJDKKP = void* (*)(UGCVMDebugCodeParamQueryResult* __this);
    };

    // TypeDefIndex: 34656 | Original: COW.GamePlay.UGCRuntime.UGCVMDebugVariableQueryResult | Token: 0x2008761
    struct UGCVMDebugVariableQueryResult : Il2Cpp::Object {
        // Fields (3)
        void* _VarNameList_k__BackingField; // <VarNameList>k__BackingField | Token: 0x40413c0
        void* _VarValueList_k__BackingField; // <VarValueList>k__BackingField | Token: 0x40413c1
        void* _VarTypeList_k__BackingField; // <VarTypeList>k__BackingField | Token: 0x40413c2

        // Methods (7)
        // Method: GetExchangeCurrencySubType() | Slot: 24418 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCVMDebugVariableQueryResult* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UGCVMDebugVariableQueryResult* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0xb04c
        using fn_Method_2 = void* (*)(UGCVMDebugVariableQueryResult* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7dc7
        using fn_Method_3 = void* (*)(UGCVMDebugVariableQueryResult* __this);
        // Method: Method_4(void* strAPPSecret) | Slot: 9541 | Token: 0x583ac7
        using fn_Method_4 = void* (*)(UGCVMDebugVariableQueryResult* __this, void* strAPPSecret);
        // Method: Method_5() | Slot: 32199 | Token: 0xffff
        using fn_Method_5 = void* (*)(UGCVMDebugVariableQueryResult* __this);
        // Method: bum() | Slot: 59703 | Token: 0x86
        using fn_bum = void* (*)(UGCVMDebugVariableQueryResult* __this);
    };

    // TypeDefIndex: 34657 | Original: COW.GamePlay.UGCRuntime.UGCVMDebuggerContext | Token: 0x2008762
    struct UGCVMDebuggerContext : Il2Cpp::Object {
        // Fields (8)
        void* _CurStack_k__BackingField; // <CurStack>k__BackingField | Token: 0x40413c3
        void* _CurStackID_k__BackingField; // <CurStackID>k__BackingField | Token: 0x40413c4
        void* _CurBreakpointCodeID_k__BackingField; // <CurBreakpointCodeID>k__BackingField | Token: 0x40413c5
        void* _CurCode_k__BackingField; // <CurCode>k__BackingField | Token: 0x40413c6
        void* _Client_k__BackingField; // <Client>k__BackingField | Token: 0x40413c7
        void* _IsNextCodeBreak_k__BackingField; // <IsNextCodeBreak>k__BackingField | Token: 0x40413c8
        void* _IsContinueRun_k__BackingField; // <IsContinueRun>k__BackingField | Token: 0x40413c9
        void* _ID_k__BackingField; // <ID>k__BackingField | Token: 0x40413ca

        // Methods (20)
        // Method: () | Slot: 65535 | Token: 0x6035f68
        using fn_unnamed = void* (*)(UGCVMDebuggerContext* __this);
        // Method: PBBDLCKDEEM() | Slot: 129 | Token: 0xffffffff
        using fn_PBBDLCKDEEM = void* (*)(UGCVMDebuggerContext* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24426 | Token: 0x21784
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCVMDebuggerContext* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCVMDebuggerContext* __this);
        // Method: Method_4() | Slot: 6026 | Token: 0x12545
        using fn_Method_4 = void* (*)(UGCVMDebuggerContext* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7dc7
        using fn_Method_5 = void* (*)(UGCVMDebuggerContext* __this);
        // Method: micCharacterSystem(void* priority) | Slot: 9541 | Token: 0x58e9af
        using fn_micCharacterSystem = void* (*)(UGCVMDebuggerContext* __this, void* priority);
        // Method: Method_7() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_7 = void* (*)(UGCVMDebuggerContext* __this);
        // Method: AvatarExtraAmbient() | Slot: 59847 | Token: 0x86
        using fn_AvatarExtraAmbient = void* (*)(UGCVMDebuggerContext* __this);
        // Method: (void* CCNBNLAPJFM) | Slot: 65535 | Token: 0x6035f70
        using fn_unnamed = void* (*)(UGCVMDebuggerContext* __this, void* CCNBNLAPJFM);
        // Method: JDAAHIKCDLF() | Slot: 134 | Token: 0xffffffff
        using fn_JDAAHIKCDLF = void* (*)(UGCVMDebuggerContext* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24434 | Token: 0x2179e
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCVMDebuggerContext* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCVMDebuggerContext* __this);
        // Method: Method_13() | Slot: 6048 | Token: 0x12545
        using fn_Method_13 = void* (*)(UGCVMDebuggerContext* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x7dc7
        using fn_Method_14 = void* (*)(UGCVMDebuggerContext* __this);
        // Method: setManualInitAndEnsureInitd() | Slot: 48538 | Token: 0x58ea0f
        using fn_setManualInitAndEnsureInitd = void* (*)(UGCVMDebuggerContext* __this);
        // Method: Method_16() | Slot: 32199 | Token: 0x2ffff
        using fn_Method_16 = void* (*)(UGCVMDebuggerContext* __this);
        // Method: _TrainMatList() | Slot: 59919 | Token: 0x86
        using fn__TrainMatList = void* (*)(UGCVMDebuggerContext* __this);
        // Method: (void* CCNBNLAPJFM, void* CBLHPNLLCMB) | Slot: 65535 | Token: 0x6035f78
        using fn_unnamed = void* (*)(UGCVMDebuggerContext* __this, void* CCNBNLAPJFM, void* CBLHPNLLCMB);
        // Method: DPKIBJDOOLD() | Slot: 134 | Token: 0xffffffff
        using fn_DPKIBJDOOLD = void* (*)(UGCVMDebuggerContext* __this);
    };

    // TypeDefIndex: 34658 | Original: COW.GamePlay.UGCRuntime.IUGCVMDebuggerClientNotify | Token: 0x2008763
    struct IUGCVMDebuggerClientNotify : Il2Cpp::Object {

        // Methods (9)
        // Method: _WAIT() | Slot: 24442 | Token: 0x217ab
        using fn__WAIT = void* (*)(IUGCVMDebuggerClientNotify* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(IUGCVMDebuggerClientNotify* __this);
        // Method: Method_2() | Slot: 6062 | Token: 0x120f2
        using fn_Method_2 = void* (*)(IUGCVMDebuggerClientNotify* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7dc7
        using fn_Method_3 = void* (*)(IUGCVMDebuggerClientNotify* __this);
        // Method: ndEnsureInitd(void* priority) | Slot: 8434 | Token: 0x58ea6f
        using fn_ndEnsureInitd = void* (*)(IUGCVMDebuggerClientNotify* __this, void* priority);
        // Method: Method_5() | Slot: 32199 | Token: 0xffff
        using fn_Method_5 = void* (*)(IUGCVMDebuggerClientNotify* __this);
        // Method: bum() | Slot: 60027 | Token: 0x86
        using fn_bum = void* (*)(IUGCVMDebuggerClientNotify* __this);
        // Method: (void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035f80
        using fn_unnamed = void* (*)(IUGCVMDebuggerClientNotify* __this, void* DJAPBCKDFKA);
        // Method: ABMIGBOHHEL() | Slot: 134 | Token: 0xffffffff
        using fn_ABMIGBOHHEL = void* (*)(IUGCVMDebuggerClientNotify* __this);
    };

    // TypeDefIndex: 34659 | Original: COW.GamePlay.UGCRuntime.UGCDebgguerNotifyNull | Token: 0x2008764
    struct UGCDebgguerNotifyNull : Il2Cpp::Object {

        // Methods (10)
        // Method: _WAIT() | Slot: 24450 | Token: 0x217b6
        using fn__WAIT = void* (*)(UGCDebgguerNotifyNull* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCDebgguerNotifyNull* __this);
        // Method: Method_2() | Slot: 6072 | Token: 0x12545
        using fn_Method_2 = void* (*)(UGCDebgguerNotifyNull* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7dc7
        using fn_Method_3 = void* (*)(UGCDebgguerNotifyNull* __this);
        // Method: d() | Slot: 27076 | Token: 0x58eae7
        using fn_d = void* (*)(UGCDebgguerNotifyNull* __this);
        // Method: Method_5() | Slot: 32199 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(UGCDebgguerNotifyNull* __this);
        // Method: t() | Slot: 60159 | Token: 0x91
        using fn_t = void* (*)(UGCDebgguerNotifyNull* __this);
        // Method: (void* FHJABHNPFME) | Slot: 65535 | Token: 0x6035f88
        using fn_unnamed = void* (*)(UGCDebgguerNotifyNull* __this, void* FHJABHNPFME);
        // Method: IAJDJKCGMOJ() | Slot: 129 | Token: 0xffffffff
        using fn_IAJDJKCGMOJ = void* (*)(UGCDebgguerNotifyNull* __this);
        // Method: imable() | Slot: 24458 | Token: 0x217c6
        using fn_imable = void* (*)(UGCDebgguerNotifyNull* __this);
    };

    // TypeDefIndex: 34660 | Original: COW.GamePlay.UGCRuntime.UGCVMDebuggerClient | Token: 0x2008765
    struct UGCVMDebuggerClient : Il2Cpp::Object {
        // Fields (8)
        void* _UserID_k__BackingField; // <UserID>k__BackingField | Token: 0x40413cb
        void* _NextContextID_k__BackingField; // <NextContextID>k__BackingField | Token: 0x40413cc
        void* _CurrentBreakpoints_k__BackingField; // <CurrentBreakpoints>k__BackingField | Token: 0x40413cd
        void* _ActiveDebuggerContext_k__BackingField; // <ActiveDebuggerContext>k__BackingField | Token: 0x40413ce
        void* _Notify_k__BackingField; // <Notify>k__BackingField | Token: 0x40413cf
        void* _LastStepDebuggerContextID_k__BackingField; // <LastStepDebuggerContextID>k__BackingField | Token: 0x40413d0
        void* _AutoHealingTime_k__BackingField; // <AutoHealingTime>k__BackingField | Token: 0x40413d1
        void* _AutoHealingUserID_k__BackingField; // <AutoHealingUserID>k__BackingField | Token: 0x40413d2

        // Methods (28)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCVMDebuggerClient* __this);
        // Method: Method_1() | Slot: 6092 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCVMDebuggerClient* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dc7
        using fn_Method_2 = void* (*)(UGCVMDebuggerClient* __this);
        // Method: reshRaceKeys(void* priority) | Slot: 9541 | Token: 0x58eb47
        using fn_reshRaceKeys = void* (*)(UGCVMDebuggerClient* __this, void* priority);
        // Method: Method_4() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_4 = void* (*)(UGCVMDebuggerClient* __this);
        // Method: bum() | Slot: 60255 | Token: 0x81
        using fn_bum = void* (*)(UGCVMDebuggerClient* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035f90
        using fn_unnamed = void* (*)(UGCVMDebuggerClient* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: LNIEAMBFBAL() | Slot: 129 | Token: 0xffffffff
        using fn_LNIEAMBFBAL = void* (*)(UGCVMDebuggerClient* __this);
        // Method: imable() | Slot: 24466 | Token: 0x217de
        using fn_imable = void* (*)(UGCVMDebuggerClient* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCVMDebuggerClient* __this);
        // Method: Method_10() | Slot: 6116 | Token: 0x12545
        using fn_Method_10 = void* (*)(UGCVMDebuggerClient* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x7dc7
        using fn_Method_11 = void* (*)(UGCVMDebuggerClient* __this);
        // Method: RaceLibrary(void* priority) | Slot: 9541 | Token: 0x58eba7
        using fn_RaceLibrary = void* (*)(UGCVMDebuggerClient* __this, void* priority);
        // Method: Method_13() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_13 = void* (*)(UGCVMDebuggerClient* __this);
        // Method: bum() | Slot: 60351 | Token: 0x81
        using fn_bum = void* (*)(UGCVMDebuggerClient* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035f98
        using fn_unnamed = void* (*)(UGCVMDebuggerClient* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: IHGIJJGNGGG() | Slot: 129 | Token: 0xffffffff
        using fn_IHGIJJGNGGG = void* (*)(UGCVMDebuggerClient* __this);
        // Method: imable() | Slot: 24474 | Token: 0x217f6
        using fn_imable = void* (*)(UGCVMDebuggerClient* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCVMDebuggerClient* __this);
        // Method: Method_19() | Slot: 6140 | Token: 0x12545
        using fn_Method_19 = void* (*)(UGCVMDebuggerClient* __this);
        // Method: Method_20() | Slot: 0 | Token: 0x7dc7
        using fn_Method_20 = void* (*)(UGCVMDebuggerClient* __this);
        // Method: er(void* priority) | Slot: 9541 | Token: 0x58ec07
        using fn_er = void* (*)(UGCVMDebuggerClient* __this, void* priority);
        // Method: Method_22() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_22 = void* (*)(UGCVMDebuggerClient* __this);
        // Method: bum() | Slot: 60447 | Token: 0x81
        using fn_bum = void* (*)(UGCVMDebuggerClient* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035fa0
        using fn_unnamed = void* (*)(UGCVMDebuggerClient* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: CBHOCBHIBMA() | Slot: 129 | Token: 0xffffffff
        using fn_CBHOCBHIBMA = void* (*)(UGCVMDebuggerClient* __this);
        // Method: imable() | Slot: 24482 | Token: 0x2180e
        using fn_imable = void* (*)(UGCVMDebuggerClient* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCVMDebuggerClient* __this);
    };

    // TypeDefIndex: 34662 | Original: COW.GamePlay.UGCRuntime.UGCVMDebugger | Token: 0x2008766
    struct UGCVMDebugger : Il2Cpp::Object {
        // Fields (14)
        void* _CurrentClient_k__BackingField; // <CurrentClient>k__BackingField | Token: 0x40413d3
        void* _DefaultClientNotify_k__BackingField; // <DefaultClientNotify>k__BackingField | Token: 0x40413d4
        void* _InitTime_k__BackingField; // <InitTime>k__BackingField | Token: 0x40413d5
        void* _isDebugSettingApplyed_k__BackingField; // <isDebugSettingApplyed>k__BackingField | Token: 0x40413d6
        void* _applyDebugSettingTimeout_k__BackingField; // <applyDebugSettingTimeout>k__BackingField | Token: 0x40413d7
        void* _debugSettings_k__BackingField; // <debugSettings>k__BackingField | Token: 0x40413d8
        void* _startDebugTimeSecond_k__BackingField; // <startDebugTimeSecond>k__BackingField | Token: 0x40413d9
        void* _debugUserQuited_k__BackingField; // <debugUserQuited>k__BackingField | Token: 0x40413da
        void* _gamecore_k__BackingField; // <gamecore>k__BackingField | Token: 0x40413db
        void* _isPaused_k__BackingField; // <isPaused>k__BackingField | Token: 0x40413dc
        void* _currentExecCodeID_k__BackingField; // <currentExecCodeID>k__BackingField | Token: 0x40413dd
        void* _guessPlayerGroupID_k__BackingField; // <guessPlayerGroupID>k__BackingField | Token: 0x40413de
        void* _isBotLoaded_k__BackingField; // <isBotLoaded>k__BackingField | Token: 0x40413df
        void* _log2ClientMaxLength_k__BackingField; // <log2ClientMaxLength>k__BackingField | Token: 0x40413e0

        // Methods (60)
        // Method: Method_0() | Slot: 6164 | Token: 0x12545
        using fn_Method_0 = void* (*)(UGCVMDebugger* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7dc7
        using fn_Method_1 = void* (*)(UGCVMDebugger* __this);
        // Method: s(void* priority) | Slot: 9541 | Token: 0x58ec67
        using fn_s = void* (*)(UGCVMDebugger* __this, void* priority);
        // Method: Method_3() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_3 = void* (*)(UGCVMDebugger* __this);
        // Method: bum() | Slot: 60543 | Token: 0x81
        using fn_bum = void* (*)(UGCVMDebugger* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035fa8
        using fn_unnamed = void* (*)(UGCVMDebugger* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: LKGFOLMLDFN() | Slot: 129 | Token: 0xffffffff
        using fn_LKGFOLMLDFN = void* (*)(UGCVMDebugger* __this);
        // Method: imable() | Slot: 24490 | Token: 0x21826
        using fn_imable = void* (*)(UGCVMDebugger* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCVMDebugger* __this);
        // Method: Method_9() | Slot: 6188 | Token: 0x12545
        using fn_Method_9 = void* (*)(UGCVMDebugger* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x7dc7
        using fn_Method_10 = void* (*)(UGCVMDebugger* __this);
        // Method: ecipeFiles(void* priority) | Slot: 9541 | Token: 0x58ecd3
        using fn_ecipeFiles = void* (*)(UGCVMDebugger* __this, void* priority);
        // Method: Method_12() | Slot: 32199 | Token: 0x4ffff
        using fn_Method_12 = void* (*)(UGCVMDebugger* __this);
        // Method: Interval() | Slot: 60663 | Token: 0x81
        using fn_Interval = void* (*)(UGCVMDebugger* __this);
        // Method: (void* EILJPLGANJG, void* JAHDDOKLJON, void* AOONEDOLAOF, void* FDCBHCJIJBL, void* CFIEHNJIGAG, void* CBCAJJJCKLH, void* IFDHHGECCCM, void* HDFILHFDBKB, void* HDEHKNMMPHC, void* MDPGBPLMAFO, void* KFNLJJNHCLB, void* OBAECCINFEM) | Slot: 65535 | Token: 0x6035fb0
        using fn_unnamed = void* (*)(UGCVMDebugger* __this, void* EILJPLGANJG, void* JAHDDOKLJON, void* AOONEDOLAOF, void* FDCBHCJIJBL, void* CFIEHNJIGAG, void* CBCAJJJCKLH, void* IFDHHGECCCM, void* HDFILHFDBKB, void* HDEHKNMMPHC, void* MDPGBPLMAFO, void* KFNLJJNHCLB, void* OBAECCINFEM);
        // Method: NFGLFDMPAAE() | Slot: 134 | Token: 0xffffffff
        using fn_NFGLFDMPAAE = void* (*)(UGCVMDebugger* __this);
        // Method: opVIPSrc_BACKPACK() | Slot: 24498 | Token: 0x2184c
        using fn_opVIPSrc_BACKPACK = void* (*)(UGCVMDebugger* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCVMDebugger* __this);
        // Method: Method_18() | Slot: 6225 | Token: 0x12545
        using fn_Method_18 = void* (*)(UGCVMDebugger* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x7dc7
        using fn_Method_19 = void* (*)(UGCVMDebugger* __this);
        // Method: Method_20(void* priority) | Slot: 9541 | Token: 0x58ed63
        using fn_Method_20 = void* (*)(UGCVMDebugger* __this, void* priority);
        // Method: Method_21() | Slot: 32199 | Token: 0x1ffff
        using fn_Method_21 = void* (*)(UGCVMDebugger* __this);
        // Method: bum() | Slot: 60795 | Token: 0x81
        using fn_bum = void* (*)(UGCVMDebugger* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035fb8
        using fn_unnamed = void* (*)(UGCVMDebugger* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: MJJFNFCPOGP() | Slot: 129 | Token: 0xffffffff
        using fn_MJJFNFCPOGP = void* (*)(UGCVMDebugger* __this);
        // Method: imable() | Slot: 24506 | Token: 0x2185c
        using fn_imable = void* (*)(UGCVMDebugger* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCVMDebugger* __this);
        // Method: Method_27() | Slot: 6242 | Token: 0x12545
        using fn_Method_27 = void* (*)(UGCVMDebugger* __this);
        // Method: Method_28() | Slot: 0 | Token: 0x7dc7
        using fn_Method_28 = void* (*)(UGCVMDebugger* __this);
        // Method: cipes(void* priority) | Slot: 9541 | Token: 0x58edc3
        using fn_cipes = void* (*)(UGCVMDebugger* __this, void* priority);
        // Method: Method_30() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_30 = void* (*)(UGCVMDebugger* __this);
        // Method: bum() | Slot: 60891 | Token: 0x81
        using fn_bum = void* (*)(UGCVMDebugger* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035fc0
        using fn_unnamed = void* (*)(UGCVMDebugger* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: NGDPBOACKPD() | Slot: 129 | Token: 0xffffffff
        using fn_NGDPBOACKPD = void* (*)(UGCVMDebugger* __this);
        // Method: imable() | Slot: 24514 | Token: 0x21874
        using fn_imable = void* (*)(UGCVMDebugger* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCVMDebugger* __this);
        // Method: Method_36() | Slot: 6266 | Token: 0x12545
        using fn_Method_36 = void* (*)(UGCVMDebugger* __this);
        // Method: Method_37() | Slot: 0 | Token: 0x7dc7
        using fn_Method_37 = void* (*)(UGCVMDebugger* __this);
        // Method: Recipe(void* priority) | Slot: 9541 | Token: 0x58ee23
        using fn_Recipe = void* (*)(UGCVMDebugger* __this, void* priority);
        // Method: Method_39() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_39 = void* (*)(UGCVMDebugger* __this);
        // Method: bum() | Slot: 60987 | Token: 0x81
        using fn_bum = void* (*)(UGCVMDebugger* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035fc8
        using fn_unnamed = void* (*)(UGCVMDebugger* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: DENKGDBPDKD() | Slot: 129 | Token: 0xffffffff
        using fn_DENKGDBPDKD = void* (*)(UGCVMDebugger* __this);
        // Method: imable() | Slot: 24522 | Token: 0x2188c
        using fn_imable = void* (*)(UGCVMDebugger* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCVMDebugger* __this);
        // Method: Method_45() | Slot: 6290 | Token: 0x12545
        using fn_Method_45 = void* (*)(UGCVMDebugger* __this);
        // Method: Method_46() | Slot: 0 | Token: 0x7dc7
        using fn_Method_46 = void* (*)(UGCVMDebugger* __this);
        // Method: RaceSlot(void* priority) | Slot: 9541 | Token: 0x58ee83
        using fn_RaceSlot = void* (*)(UGCVMDebugger* __this, void* priority);
        // Method: Method_48() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_48 = void* (*)(UGCVMDebugger* __this);
        // Method: bum() | Slot: 61083 | Token: 0x81
        using fn_bum = void* (*)(UGCVMDebugger* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035fd0
        using fn_unnamed = void* (*)(UGCVMDebugger* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: ECHOOMPMBEG() | Slot: 129 | Token: 0xffffffff
        using fn_ECHOOMPMBEG = void* (*)(UGCVMDebugger* __this);
        // Method: imable() | Slot: 24530 | Token: 0x218a4
        using fn_imable = void* (*)(UGCVMDebugger* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCVMDebugger* __this);
        // Method: Method_54() | Slot: 6314 | Token: 0x12545
        using fn_Method_54 = void* (*)(UGCVMDebugger* __this);
        // Method: Method_55() | Slot: 0 | Token: 0x7dc7
        using fn_Method_55 = void* (*)(UGCVMDebugger* __this);
        // Method: ceSlot(void* priority) | Slot: 9541 | Token: 0x58eee3
        using fn_ceSlot = void* (*)(UGCVMDebugger* __this, void* priority);
        // Method: Method_57() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_57 = void* (*)(UGCVMDebugger* __this);
        // Method: bum() | Slot: 61179 | Token: 0x81
        using fn_bum = void* (*)(UGCVMDebugger* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035fd8
        using fn_unnamed = void* (*)(UGCVMDebugger* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
    };

    // TypeDefIndex: 34663 | Original: COW.GamePlay.UGCRuntime.UGCCustomPlayerManager | Token: 0x2008768
    struct UGCCustomPlayerManager : Il2Cpp::Object {
        // Fields (1)
        void* m_CustomPlayers; // m_CustomPlayers | Token: 0x40413e4

        // Methods (5)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCCustomPlayerManager* __this);
        // Method: Method_1() | Slot: 6338 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCCustomPlayerManager* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dc7
        using fn_Method_2 = void* (*)(UGCCustomPlayerManager* __this);
        // Method: bility(void* priority) | Slot: 9541 | Token: 0x58ef43
        using fn_bility = void* (*)(UGCCustomPlayerManager* __this, void* priority);
        // Method: Method_4() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_4 = void* (*)(UGCCustomPlayerManager* __this);
    };

    // TypeDefIndex: 34664 | Original: COW.GamePlay.UGCRuntime.ArchType | Token: 0x2008769
    struct ArchType : Il2Cpp::Object {
        // Fields (2)
        void* id; // id | Token: 0x40413e5
        void* buf; // buf | Token: 0x40413e6

        // Methods (13)
        // Method: bum() | Slot: 61275 | Token: 0x81
        using fn_bum = void* (*)(ArchType* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035fe0
        using fn_unnamed = void* (*)(ArchType* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: OJFKMDGKPFA() | Slot: 129 | Token: 0xffffffff
        using fn_OJFKMDGKPFA = void* (*)(ArchType* __this);
        // Method: imable() | Slot: 24546 | Token: 0x218d4
        using fn_imable = void* (*)(ArchType* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(ArchType* __this);
        // Method: Method_5() | Slot: 6362 | Token: 0x12545
        using fn_Method_5 = void* (*)(ArchType* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7dc7
        using fn_Method_6 = void* (*)(ArchType* __this);
        // Method: ipeIndex(void* priority) | Slot: 9541 | Token: 0x58efa3
        using fn_ipeIndex = void* (*)(ArchType* __this, void* priority);
        // Method: Method_8() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_8 = void* (*)(ArchType* __this);
        // Method: bum() | Slot: 61371 | Token: 0x81
        using fn_bum = void* (*)(ArchType* __this);
        // Method: () | Slot: 65535 | Token: 0x6035fe8
        using fn_unnamed = void* (*)(ArchType* __this);
        // Method: KBBJGKMCKDN() | Slot: 129 | Token: 0xffffffff
        using fn_KBBJGKMCKDN = void* (*)(ArchType* __this);
        // Method: imable() | Slot: 24554 | Token: 0x218e9
        using fn_imable = void* (*)(ArchType* __this);
    };

    // TypeDefIndex: 34665 | Original: COW.GamePlay.UGCRuntime.DirtyNotifyHandle | Token: 0x200876a
    struct DirtyNotifyHandle : Il2Cpp::Object {

        // Methods (4)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(DirtyNotifyHandle* __this);
        // Method: Method_1() | Slot: 6383 | Token: 0x12545
        using fn_Method_1 = void* (*)(DirtyNotifyHandle* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dc7
        using fn_Method_2 = void* (*)(DirtyNotifyHandle* __this);
        // Method: acterRecipes(void* priority) | Slot: 9541 | Token: 0x58f003
        using fn_acterRecipes = void* (*)(DirtyNotifyHandle* __this, void* priority);
    };

    // TypeDefIndex: 34666 | Original: COW.GamePlay.UGCRuntime.IDirtyNotify | Token: 0x200876b
    struct IDirtyNotify : Il2Cpp::Object {

        // Methods (3)
        // Method: Method_0() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_0 = void* (*)(IDirtyNotify* __this);
        // Method: bum() | Slot: 61467 | Token: 0x81
        using fn_bum = void* (*)(IDirtyNotify* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035ff0
        using fn_unnamed = void* (*)(IDirtyNotify* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
    };

    // TypeDefIndex: 34667 | Original: COW.GamePlay.UGCRuntime.DirtyNotify | Token: 0x200876c
    struct DirtyNotify : Il2Cpp::Object {
        // Fields (3)
        void* _Target_k__BackingField; // <Target>k__BackingField | Token: 0x40413e7
        void* _PropID_k__BackingField; // <PropID>k__BackingField | Token: 0x40413e8
        void* _Handler_k__BackingField; // <Handler>k__BackingField | Token: 0x40413e9

        // Methods (10)
        // Method: HBAMIBJLJIN() | Slot: 129 | Token: 0xffffffff
        using fn_HBAMIBJLJIN = void* (*)(DirtyNotify* __this);
        // Method: imable() | Slot: 24562 | Token: 0x21901
        using fn_imable = void* (*)(DirtyNotify* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(DirtyNotify* __this);
        // Method: Method_3() | Slot: 6407 | Token: 0x12545
        using fn_Method_3 = void* (*)(DirtyNotify* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7dc7
        using fn_Method_4 = void* (*)(DirtyNotify* __this);
        // Method: nAwake(void* priority) | Slot: 9541 | Token: 0x58f063
        using fn_nAwake = void* (*)(DirtyNotify* __this, void* priority);
        // Method: Method_6() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_6 = void* (*)(DirtyNotify* __this);
        // Method: bum() | Slot: 61563 | Token: 0x81
        using fn_bum = void* (*)(DirtyNotify* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6035ff8
        using fn_unnamed = void* (*)(DirtyNotify* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: EADANNMDMPE() | Slot: 129 | Token: 0xffffffff
        using fn_EADANNMDMPE = void* (*)(DirtyNotify* __this);
    };

    // TypeDefIndex: 34668 | Original: COW.GamePlay.UGCRuntime.EntityIndex | Token: 0x200876d
    struct EntityIndex : Il2Cpp::Object {
        // Fields (2)
        void* _ID_k__BackingField; // <ID>k__BackingField | Token: 0x40413ea
        void* _Index_k__BackingField; // <Index>k__BackingField | Token: 0x40413eb

        // Methods (13)
        // Method: imable() | Slot: 24570 | Token: 0x21919
        using fn_imable = void* (*)(EntityIndex* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(EntityIndex* __this);
        // Method: Method_2() | Slot: 6431 | Token: 0x12545
        using fn_Method_2 = void* (*)(EntityIndex* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7dc7
        using fn_Method_3 = void* (*)(EntityIndex* __this);
        // Method: sourcesCharactersFolder(void* priority) | Slot: 9541 | Token: 0x58f0c3
        using fn_sourcesCharactersFolder = void* (*)(EntityIndex* __this, void* priority);
        // Method: Method_5() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_5 = void* (*)(EntityIndex* __this);
        // Method: bum() | Slot: 61659 | Token: 0x81
        using fn_bum = void* (*)(EntityIndex* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6036000
        using fn_unnamed = void* (*)(EntityIndex* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: FNIFEEKAFBB() | Slot: 129 | Token: 0xffffffff
        using fn_FNIFEEKAFBB = void* (*)(EntityIndex* __this);
        // Method: imable() | Slot: 24578 | Token: 0x21931
        using fn_imable = void* (*)(EntityIndex* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(EntityIndex* __this);
        // Method: Method_11() | Slot: 6455 | Token: 0x12545
        using fn_Method_11 = void* (*)(EntityIndex* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x7dc7
        using fn_Method_12 = void* (*)(EntityIndex* __this);
    };

    // TypeDefIndex: 34669 | Original: COW.GamePlay.UGCRuntime.EntityIndexConstants | Token: 0x200876e
    struct EntityIndexConstants : Il2Cpp::Object {
        // Fields (1)
        void* ENTITYINDEX_INVALID; // ENTITYINDEX_INVALID | Token: 0x40413ec

        // Methods (1)
        // Method: resourcesRecipesFolder(void* priority) | Slot: 9541 | Token: 0x58f123
        using fn_resourcesRecipesFolder = void* (*)(EntityIndexConstants* __this, void* priority);
    };

    // TypeDefIndex: 34670 | Original: COW.GamePlay.UGCRuntime.ExactNumberCmpType | Token: 0x200876f
    struct ExactNumberCmpType : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x40413ed
        void* GT; // GT | Token: 0x40413ee
        void* EQ; // EQ | Token: 0x40413ef
        void* LT; // LT | Token: 0x40413f0
    };

    // TypeDefIndex: 34671 | Original: COW.GamePlay.UGCRuntime.ExactNumber | Token: 0x2008770
    struct ExactNumber : Il2Cpp::Object {
        // Fields (1)
        void* number; // number | Token: 0x40413f1

        // Methods (16)
        // Method: Method_0() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_0 = void* (*)(ExactNumber* __this);
        // Method: bum() | Slot: 61767 | Token: 0x81
        using fn_bum = void* (*)(ExactNumber* __this);
        // Method: (void* NNOMFOBGPFL, void* FDJBPCFOEHM, void* ONFPCIABJJC, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6036008
        using fn_unnamed = void* (*)(ExactNumber* __this, void* NNOMFOBGPFL, void* FDJBPCFOEHM, void* ONFPCIABJJC, void* DJAPBCKDFKA);
        // Method: DIFDEOGABLG() | Slot: 129 | Token: 0xffffffff
        using fn_DIFDEOGABLG = void* (*)(ExactNumber* __this);
        // Method: _WAIT() | Slot: 24586 | Token: 0x21949
        using fn__WAIT = void* (*)(ExactNumber* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(ExactNumber* __this);
        // Method: Method_6() | Slot: 6478 | Token: 0x12545
        using fn_Method_6 = void* (*)(ExactNumber* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7dc7
        using fn_Method_7 = void* (*)(ExactNumber* __this);
        // Method: assetBundlesForCharactersToSearch(void* priority) | Slot: 9541 | Token: 0x58f177
        using fn_assetBundlesForCharactersToSearch = void* (*)(ExactNumber* __this, void* priority);
        // Method: Method_9() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_9 = void* (*)(ExactNumber* __this);
        // Method: bum() | Slot: 61839 | Token: 0x81
        using fn_bum = void* (*)(ExactNumber* __this);
        // Method: (void* HECIGLHICGH, void* ONFPCIABJJC, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6036010
        using fn_unnamed = void* (*)(ExactNumber* __this, void* HECIGLHICGH, void* ONFPCIABJJC, void* DJAPBCKDFKA);
        // Method: LALJKAENPJL() | Slot: 129 | Token: 0xffffffff
        using fn_LALJKAENPJL = void* (*)(ExactNumber* __this);
        // Method: imable() | Slot: 24594 | Token: 0x21960
        using fn_imable = void* (*)(ExactNumber* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(ExactNumber* __this);
        // Method: Method_15() | Slot: 6504 | Token: 0x12545
        using fn_Method_15 = void* (*)(ExactNumber* __this);
    };

    // TypeDefIndex: 34672 | Original: COW.GamePlay.UGCRuntime.FuncPoint | Token: 0x2008771
    struct FuncPoint : Il2Cpp::Object {
        // Fields (4)
        void* Entity; // Entity | Token: 0x40413f2
        void* GraphID; // GraphID | Token: 0x40413f3
        void* FuncIndex; // FuncIndex | Token: 0x40413f4
        void* CachedFunc; // CachedFunc | Token: 0x40413f5

        // Methods (6)
        // Method: Method_0() | Slot: 0 | Token: 0x7dc7
        using fn_Method_0 = void* (*)(FuncPoint* __this);
        // Method: oSearch(void* priority) | Slot: 9541 | Token: 0x58f1e3
        using fn_oSearch = void* (*)(FuncPoint* __this, void* priority);
        // Method: Method_2() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_2 = void* (*)(FuncPoint* __this);
        // Method: bum() | Slot: 61947 | Token: 0x81
        using fn_bum = void* (*)(FuncPoint* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6036018
        using fn_unnamed = void* (*)(FuncPoint* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: GEBOMBFEDGJ() | Slot: 129 | Token: 0xffffffff
        using fn_GEBOMBFEDGJ = void* (*)(FuncPoint* __this);
    };

    // TypeDefIndex: 34673 | Original: COW.GamePlay.UGCRuntime.IndexRecyclePool | Token: 0x2008772
    struct IndexRecyclePool : Il2Cpp::Object {
        // Fields (5)
        void* IndexRecyclePool_InvalidIndex; // IndexRecyclePool_InvalidIndex | Token: 0x40413f6
        void* IndexRecyclePool_StartIndex; // IndexRecyclePool_StartIndex | Token: 0x40413f7
        void* IndexRecyclePool_MaxPrioritySeed; // IndexRecyclePool_MaxPrioritySeed | Token: 0x40413f8
        void* seed; // seed | Token: 0x40413f9
        void* pool; // pool | Token: 0x40413fa

        // Methods (5)
        // Method: imable() | Slot: 24602 | Token: 0x2197a
        using fn_imable = void* (*)(IndexRecyclePool* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(IndexRecyclePool* __this);
        // Method: Method_2() | Slot: 6528 | Token: 0x12545
        using fn_Method_2 = void* (*)(IndexRecyclePool* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7dc7
        using fn_Method_3 = void* (*)(IndexRecyclePool* __this);
        // Method: ecipesToSearch(void* priority) | Slot: 9541 | Token: 0x58f243
        using fn_ecipesToSearch = void* (*)(IndexRecyclePool* __this, void* priority);
    };

    // TypeDefIndex: 34674 | Original: COW.GamePlay.UGCRuntime.LocString | Token: 0x2008773
    struct LocString : Il2Cpp::Object {
        // Fields (2)
        void* key; // key | Token: 0x40413fb
        void* param; // param | Token: 0x40413fc

        // Methods (10)
        // Method: Method_0() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_0 = void* (*)(LocString* __this);
        // Method: bum() | Slot: 62043 | Token: 0x81
        using fn_bum = void* (*)(LocString* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6036020
        using fn_unnamed = void* (*)(LocString* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: AMENAMIFMCD() | Slot: 129 | Token: 0xffffffff
        using fn_AMENAMIFMCD = void* (*)(LocString* __this);
        // Method: imable() | Slot: 24610 | Token: 0x21992
        using fn_imable = void* (*)(LocString* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(LocString* __this);
        // Method: Method_6() | Slot: 6552 | Token: 0x12545
        using fn_Method_6 = void* (*)(LocString* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7dc7
        using fn_Method_7 = void* (*)(LocString* __this);
        // Method: ipesFromDownloadedBundles(void* priority) | Slot: 9541 | Token: 0x58f2a3
        using fn_ipesFromDownloadedBundles = void* (*)(LocString* __this, void* priority);
        // Method: Method_9() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_9 = void* (*)(LocString* __this);
    };

    // TypeDefIndex: 34675 | Original: COW.GamePlay.UGCRuntime.MapOperateType | Token: 0x2008774
    struct MapOperateType : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x40413fd
        void* Set; // Set | Token: 0x40413fe
        void* Del; // Del | Token: 0x40413ff
        void* Clean; // Clean | Token: 0x4041400
    };

    // TypeDefIndex: 34677 | Original: COW.GamePlay.UGCRuntime.SimpleMap | Token: 0x2008775
    struct SimpleMap : Il2Cpp::Object {
        // Fields (3)
        void* pairs; // pairs | Token: 0x4041401
        void* diffCache; // diffCache | Token: 0x4041402
        void* diff2Clean; // diff2Clean | Token: 0x4041403

        // Methods (22)
        // Method: bum() | Slot: 62139 | Token: 0x81
        using fn_bum = void* (*)(SimpleMap* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6036028
        using fn_unnamed = void* (*)(SimpleMap* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: IGABNOJGJHA() | Slot: 145 | Token: 0xffffffff
        using fn_IGABNOJGJHA = void* (*)(SimpleMap* __this);
        // Method: imable() | Slot: 24618 | Token: 0x219aa
        using fn_imable = void* (*)(SimpleMap* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(SimpleMap* __this);
        // Method: Method_5() | Slot: 6576 | Token: 0x12545
        using fn_Method_5 = void* (*)(SimpleMap* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7dc7
        using fn_Method_6 = void* (*)(SimpleMap* __this);
        // Method: s(void* node) | Slot: 9541 | Token: 0x58f303
        using fn_s = void* (*)(SimpleMap* __this, void* node);
        // Method: Method_8() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_8 = void* (*)(SimpleMap* __this);
        // Method: bum() | Slot: 62235 | Token: 0x81
        using fn_bum = void* (*)(SimpleMap* __this);
        // Method: (void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA) | Slot: 65535 | Token: 0x6036030
        using fn_unnamed = void* (*)(SimpleMap* __this, void* HECIGLHICGH, void* KFMNLPAHBJA, void* DJAPBCKDFKA);
        // Method: KIBILNGLILE() | Slot: 129 | Token: 0xffffffff
        using fn_KIBILNGLILE = void* (*)(SimpleMap* __this);
        // Method: imable() | Slot: 24626 | Token: 0x219c2
        using fn_imable = void* (*)(SimpleMap* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SimpleMap* __this);
        // Method: Method_14() | Slot: 6598 | Token: 0xb040
        using fn_Method_14 = void* (*)(SimpleMap* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x7dc7
        using fn_Method_15 = void* (*)(SimpleMap* __this);
        // Method: nsions(void* priority) | Slot: 9541 | Token: 0x58f363
        using fn_nsions = void* (*)(SimpleMap* __this, void* priority);
        // Method: Method_17() | Slot: 32199 | Token: 0x1ffff
        using fn_Method_17 = void* (*)(SimpleMap* __this);
        // Method: bum() | Slot: 62331 | Token: 0x86
        using fn_bum = void* (*)(SimpleMap* __this);
        // Method: (void* LIKPJDHGPFG) | Slot: 65535 | Token: 0x6036038
        using fn_unnamed = void* (*)(SimpleMap* __this, void* LIKPJDHGPFG);
        // Method: IAJLKFJAGCO() | Slot: 134 | Token: 0xffffffff
        using fn_IAJLKFJAGCO = void* (*)(SimpleMap* __this);
        // Method: _WAIT() | Slot: 24634 | Token: 0x219cd
        using fn__WAIT = void* (*)(SimpleMap* __this);
    };

    // TypeDefIndex: 34678 | Original: COW.GamePlay.UGCRuntime.SimplePool | Token: 0x2008777
    struct SimplePool : Il2Cpp::Object {
        // Fields (5)
        void* buf; // buf | Token: 0x4041405
        void* _New_k__BackingField; // <New>k__BackingField | Token: 0x4041406
        void* enableStatistics; // enableStatistics | Token: 0x4041407
        void* poolHitCount; // poolHitCount | Token: 0x4041408
        void* newCreateCount; // newCreateCount | Token: 0x4041409

        // Methods (11)
        // Method: Method_0() | Slot: 0 | Token: 0x7dc7
        using fn_Method_0 = void* (*)(SimplePool* __this);
        // Method: lagsAttribute(void* priority) | Slot: 9541 | Token: 0x58f3e7
        using fn_lagsAttribute = void* (*)(SimplePool* __this, void* priority);
        // Method: Method_2() | Slot: 32199 | Token: 0xfffff
        using fn_Method_2 = void* (*)(SimplePool* __this);
        // Method: bum() | Slot: 62523 | Token: 0x86
        using fn_bum = void* (*)(SimplePool* __this);
        // Method: (void* FKPOAJIBBLL, void* KJLFMPOFELA, void* IDBMLLFFLGF, void* LOFEFIGEKBH, void* HJDLJFPHEIL, void* OBJKBCAFBMA, void* FNEMHNNNHJN, void* DDPDAHCLNIB) | Slot: 65535 | Token: 0x6036040
        using fn_unnamed = void* (*)(SimplePool* __this, void* FKPOAJIBBLL, void* KJLFMPOFELA, void* IDBMLLFFLGF, void* LOFEFIGEKBH, void* HJDLJFPHEIL, void* OBJKBCAFBMA, void* FNEMHNNNHJN, void* DDPDAHCLNIB);
        // Method: JHIGDDDLJOF() | Slot: 134 | Token: 0xffffffff
        using fn_JHIGDDDLJOF = void* (*)(SimplePool* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24642 | Token: 0x219f4
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(SimplePool* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SimplePool* __this);
        // Method: Method_8() | Slot: 6647 | Token: 0x12545
        using fn_Method_8 = void* (*)(SimplePool* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x7dc7
        using fn_Method_9 = void* (*)(SimplePool* __this);
        // Method: tem(void* priority) | Slot: 9541 | Token: 0x58f48f
        using fn_tem = void* (*)(SimplePool* __this, void* priority);
    };

    // TypeDefIndex: 34680 | Original: COW.GamePlay.UGCRuntime.SortedMap | Token: 0x2008778
    struct SortedMap : Il2Cpp::Object {
        // Fields (2)
        void* pairs; // pairs | Token: 0x404140a
        void* keys; // keys | Token: 0x404140b

        // Methods (13)
        // Method: Method_0() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_0 = void* (*)(SortedMap* __this);
        // Method: bum() | Slot: 62643 | Token: 0x86
        using fn_bum = void* (*)(SortedMap* __this);
        // Method: (void* FDBNLGKMEGG, void* PKMKBKPMJIK) | Slot: 65535 | Token: 0x6036048
        using fn_unnamed = void* (*)(SortedMap* __this, void* FDBNLGKMEGG, void* PKMKBKPMJIK);
        // Method: EGNOOJODHDH() | Slot: 134 | Token: 0xffffffff
        using fn_EGNOOJODHDH = void* (*)(SortedMap* __this);
        // Method: _WAIT() | Slot: 24650 | Token: 0x21a07
        using fn__WAIT = void* (*)(SortedMap* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(SortedMap* __this);
        // Method: Method_6() | Slot: 6673 | Token: 0x12545
        using fn_Method_6 = void* (*)(SortedMap* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7dc7
        using fn_Method_7 = void* (*)(SortedMap* __this);
        // Method: (void* priority) | Slot: 9541 | Token: 0x58f4fb
        using fn_unnamed = void* (*)(SortedMap* __this, void* priority);
        // Method: Method_9() | Slot: 32199 | Token: 0x1ffff
        using fn_Method_9 = void* (*)(SortedMap* __this);
        // Method: bum() | Slot: 62739 | Token: 0x86
        using fn_bum = void* (*)(SortedMap* __this);
        // Method: (void* JDHNCLHNJIP, void* OINKNIGKDMO) | Slot: 65535 | Token: 0x6036050
        using fn_unnamed = void* (*)(SortedMap* __this, void* JDHNCLHNJIP, void* OINKNIGKDMO);
        // Method: MMFGHPMIDFH() | Slot: 134 | Token: 0xffffffff
        using fn_MMFGHPMIDFH = void* (*)(SortedMap* __this);
    };

    // TypeDefIndex: 34681 | Original: COW.GamePlay.UGCRuntime.SynRandom | Token: 0x200877a
    struct SynRandom : Il2Cpp::Object {
        // Fields (1)
        void* mSeed; // mSeed | Token: 0x404140d

        // Methods (3)
        // Method: Method_0() | Slot: 6693 | Token: 0x12545
        using fn_Method_0 = void* (*)(SynRandom* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7dc7
        using fn_Method_1 = void* (*)(SynRandom* __this);
        // Method: Method_2(void* pos) | Slot: 9541 | Token: 0x58f567
        using fn_Method_2 = void* (*)(SynRandom* __this, void* pos);
    };

    // TypeDefIndex: 34682 | Original: COW.GamePlay.UGCRuntime.TimestampLocString | Token: 0x200877b
    struct TimestampLocString : Il2Cpp::Object {
        // Fields (2)
        void* timestamp; // timestamp | Token: 0x404140e
        void* formatStyle; // formatStyle | Token: 0x404140f

        // Methods (7)
        // Method: Method_0() | Slot: 32199 | Token: 0x1ffff
        using fn_Method_0 = void* (*)(TimestampLocString* __this);
        // Method: bum() | Slot: 62859 | Token: 0x86
        using fn_bum = void* (*)(TimestampLocString* __this);
        // Method: () | Slot: 65535 | Token: 0x6036058
        using fn_unnamed = void* (*)(TimestampLocString* __this);
        // Method: DPLDGAPNFCL() | Slot: 134 | Token: 0xffffffff
        using fn_DPLDGAPNFCL = void* (*)(TimestampLocString* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24666 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(TimestampLocString* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(TimestampLocString* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0x12545
        using fn_Method_6 = void* (*)(TimestampLocString* __this);
    };

    // TypeDefIndex: 34683 | Original: COW.GamePlay.UGCRuntime.TimestampMsLocString | Token: 0x200877c
    struct TimestampMsLocString : Il2Cpp::Object {
        // Fields (2)
        void* timestamp; // timestamp | Token: 0x4041410
        void* formatStyle; // formatStyle | Token: 0x4041411

        // Methods (7)
        // Method: Method_0() | Slot: 0 | Token: 0x7dc7
        using fn_Method_0 = void* (*)(TimestampMsLocString* __this);
        // Method: emBase(void* priority) | Slot: 9541 | Token: 0x58f5d3
        using fn_emBase = void* (*)(TimestampMsLocString* __this, void* priority);
        // Method: Method_2() | Slot: 32199 | Token: 0x1ffff
        using fn_Method_2 = void* (*)(TimestampMsLocString* __this);
        // Method: bum() | Slot: 62955 | Token: 0x86
        using fn_bum = void* (*)(TimestampMsLocString* __this);
        // Method: (void* LOPJCNOKJDO, void* CBCAJJJCKLH, void* LIKPJDHGPFG) | Slot: 65535 | Token: 0x6036060
        using fn_unnamed = void* (*)(TimestampMsLocString* __this, void* LOPJCNOKJDO, void* CBCAJJJCKLH, void* LIKPJDHGPFG);
        // Method: LDBCMGIBHDB() | Slot: 134 | Token: 0xffffffff
        using fn_LDBCMGIBHDB = void* (*)(TimestampMsLocString* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24674 | Token: 0x21a2f
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(TimestampMsLocString* __this);
    };

    // TypeDefIndex: 34684 | Original: COW.GamePlay.UGCRuntime.UGCEntityExportDataCache | Token: 0x200877d
    struct UGCEntityExportDataCache : Il2Cpp::Object {
        // Fields (5)
        void* m_EntityDataCache; // m_EntityDataCache | Token: 0x4041412
        void* m_EntityDataCacheByArchType; // m_EntityDataCacheByArchType | Token: 0x4041413
        void* m_PrefabDataCache; // m_PrefabDataCache | Token: 0x4041414
        void* m_PrefabEntityData; // m_PrefabEntityData | Token: 0x4041415
        void* ugcRuntime; // ugcRuntime | Token: 0x4041416

        // Methods (9)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCEntityExportDataCache* __this);
        // Method: Method_1() | Slot: 6705 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCEntityExportDataCache* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dc7
        using fn_Method_2 = void* (*)(UGCEntityExportDataCache* __this);
        // Method: rlayDataAssetWithAtlas(void* priority) | Slot: 9541 | Token: 0x58f633
        using fn_rlayDataAssetWithAtlas = void* (*)(UGCEntityExportDataCache* __this, void* priority);
        // Method: Method_4() | Slot: 32199 | Token: 0x1ffff
        using fn_Method_4 = void* (*)(UGCEntityExportDataCache* __this);
        // Method: bum() | Slot: 63075 | Token: 0x86
        using fn_bum = void* (*)(UGCEntityExportDataCache* __this);
        // Method: (void* APHHNHEDHKD) | Slot: 65535 | Token: 0x6036068
        using fn_unnamed = void* (*)(UGCEntityExportDataCache* __this, void* APHHNHEDHKD);
        // Method: KMDLOKHJCDG() | Slot: 134 | Token: 0xffffffff
        using fn_KMDLOKHJCDG = void* (*)(UGCEntityExportDataCache* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24682 | Token: 0x21a38
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCEntityExportDataCache* __this);
    };

    // TypeDefIndex: 34685 | Original: COW.GamePlay.UGCRuntime.UGCFactionModule | Token: 0x200877e
    struct UGCFactionModule : Il2Cpp::Object {
        // Fields (2)
        void* ugcRuntime; // ugcRuntime | Token: 0x4041417
        void* m_Entity2Faction; // m_Entity2Faction | Token: 0x4041418

        // Methods (7)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCFactionModule* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x1dcc
        using fn_Method_1 = void* (*)(UGCFactionModule* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dc7
        using fn_Method_2 = void* (*)(UGCFactionModule* __this);
        // Method: Method_3() | Slot: 7628 | Token: 0x58f6b7
        using fn_Method_3 = void* (*)(UGCFactionModule* __this);
        // Method: Method_4() | Slot: 32199 | Token: 0xffff
        using fn_Method_4 = void* (*)(UGCFactionModule* __this);
        // Method: bum() | Slot: 63183 | Token: 0x86
        using fn_bum = void* (*)(UGCFactionModule* __this);
        // Method: (void* APHHNHEDHKD) | Slot: 65535 | Token: 0x6036070
        using fn_unnamed = void* (*)(UGCFactionModule* __this, void* APHHNHEDHKD);
    };

    // TypeDefIndex: 34686 | Original: COW.GamePlay.UGCRuntime.UGCFFPlatformModule | Token: 0x200877f
    struct UGCFFPlatformModule : Il2Cpp::Object {
        // Fields (2)
        void* m_ugcRuntime; // m_ugcRuntime | Token: 0x4041419
        void* m_ShowSocialChooseBox; // m_ShowSocialChooseBox | Token: 0x404141a

        // Methods (6)
        // Method: LBJBDGNCAMB() | Slot: 134 | Token: 0xffffffff
        using fn_LBJBDGNCAMB = void* (*)(UGCFFPlatformModule* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24690 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCFFPlatformModule* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCFFPlatformModule* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x2724
        using fn_Method_3 = void* (*)(UGCFFPlatformModule* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7dc7
        using fn_Method_4 = void* (*)(UGCFFPlatformModule* __this);
        // Method: ithAtlas() | Slot: 10083 | Token: 0x58f73b
        using fn_ithAtlas = void* (*)(UGCFFPlatformModule* __this);
    };

    // TypeDefIndex: 34688 | Original: COW.GamePlay.UGCRuntime.UGCGameObjectManager | Token: 0x2008780
    struct UGCGameObjectManager : Il2Cpp::Object {
        // Fields (7)
        void* Empty; // Empty | Token: 0x404141b
        void* m_Runtime; // m_Runtime | Token: 0x404141c
        void* m_TransformModule; // m_TransformModule | Token: 0x404141d
        void* m_TransformModuleBound; // m_TransformModuleBound | Token: 0x404141e
        void* m_AllGameObject; // m_AllGameObject | Token: 0x404141f
        void* m_OnGameObjectAddEvent; // m_OnGameObjectAddEvent | Token: 0x4041420
        void* m_OnGameObjectRemoveEvent; // m_OnGameObjectRemoveEvent | Token: 0x4041421

        // Methods (15)
        // Method: Method_0() | Slot: 32199 | Token: 0x1ffff
        using fn_Method_0 = void* (*)(UGCGameObjectManager* __this);
        // Method: bum() | Slot: 63327 | Token: 0x86
        using fn_bum = void* (*)(UGCGameObjectManager* __this);
        // Method: (void* LIKPJDHGPFG, void* HACIJIFIDKM) | Slot: 65535 | Token: 0x6036078
        using fn_unnamed = void* (*)(UGCGameObjectManager* __this, void* LIKPJDHGPFG, void* HACIJIFIDKM);
        // Method: KJJPPFMPFGK() | Slot: 134 | Token: 0xffffffff
        using fn_KJJPPFMPFGK = void* (*)(UGCGameObjectManager* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24698 | Token: 0x21a46
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCGameObjectManager* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCGameObjectManager* __this);
        // Method: Method_6() | Slot: 6732 | Token: 0x12545
        using fn_Method_6 = void* (*)(UGCGameObjectManager* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7dc7
        using fn_Method_7 = void* (*)(UGCGameObjectManager* __this);
        // Method: (void* priority) | Slot: 9541 | Token: 0x58f7a7
        using fn_unnamed = void* (*)(UGCGameObjectManager* __this, void* priority);
        // Method: Method_9() | Slot: 32199 | Token: 0xffff
        using fn_Method_9 = void* (*)(UGCGameObjectManager* __this);
        // Method: bum() | Slot: 63423 | Token: 0x86
        using fn_bum = void* (*)(UGCGameObjectManager* __this);
        // Method: () | Slot: 65535 | Token: 0x6036080
        using fn_unnamed = void* (*)(UGCGameObjectManager* __this);
        // Method: BKFEHMLGCMB() | Slot: 134 | Token: 0xffffffff
        using fn_BKFEHMLGCMB = void* (*)(UGCGameObjectManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24706 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCGameObjectManager* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCGameObjectManager* __this);
    };

    // TypeDefIndex: 34689 | Original: COW.GamePlay.UGCRuntime.UGCConst | Token: 0x2008782
    struct UGCConst : Il2Cpp::Object {
        // Fields (83)
        void* EUGCModuleType_StdLibrary; // EUGCModuleType_StdLibrary | Token: 0x4041427
        void* EUGCModuleType_List; // EUGCModuleType_List | Token: 0x4041428
        void* EUGCModuleType_Map; // EUGCModuleType_Map | Token: 0x4041429
        void* EUGCModuleType_Math; // EUGCModuleType_Math | Token: 0x404142a
        void* EUGCModuleType_Strings; // EUGCModuleType_Strings | Token: 0x404142b
        void* EUGCModuleType_Convert; // EUGCModuleType_Convert | Token: 0x404142c
        void* EUGCModuleType_Football; // EUGCModuleType_Football | Token: 0x404142d
        void* EUGCModuleType_Camera; // EUGCModuleType_Camera | Token: 0x404142e
        void* EUGCModuleType_AI; // EUGCModuleType_AI | Token: 0x404142f
        void* EUGCModuleType_Other; // EUGCModuleType_Other | Token: 0x4041430
        void* EUGCModuleType_Player; // EUGCModuleType_Player | Token: 0x4041431
        void* EUGCModuleType_Buff; // EUGCModuleType_Buff | Token: 0x4041432
        void* EUGCModuleType_Scene; // EUGCModuleType_Scene | Token: 0x4041433
        void* EUGCModuleType_FF_Platform; // EUGCModuleType_FF_Platform | Token: 0x4041434
        void* EUGCModuleType_Items; // EUGCModuleType_Items | Token: 0x4041435
        void* EUGCModuleType_Combat; // EUGCModuleType_Combat | Token: 0x4041436
        void* EUGCModuleType_Collection; // EUGCModuleType_Collection | Token: 0x4041437
        void* EUGCModuleType_Offline; // EUGCModuleType_Offline | Token: 0x4041438
        void* EUGCModuleType_CSVData; // EUGCModuleType_CSVData | Token: 0x4041439
        void* EUGCModuleType_Matchmaking; // EUGCModuleType_Matchmaking | Token: 0x404143a
        void* EUGCModuleType_AntiHack; // EUGCModuleType_AntiHack | Token: 0x404143b
        void* EUGCModuleType_Workflow; // EUGCModuleType_Workflow | Token: 0x404143c
        void* EUGCModuleType_RoundBlackboard; // EUGCModuleType_RoundBlackboard | Token: 0x404143d
        void* EUGCModuleType_ScoreBlackboard; // EUGCModuleType_ScoreBlackboard | Token: 0x404143e
        void* EUGCModuleType_RankBlackboard; // EUGCModuleType_RankBlackboard | Token: 0x404143f
        void* EUGCModuleType_SafeZone; // EUGCModuleType_SafeZone | Token: 0x4041440
        void* EUGCModuleType_GenerateSpawnPosMgr; // EUGCModuleType_GenerateSpawnPosMgr | Token: 0x4041441
        void* EUGCModuleType_EntityRepDataBlackboard; // EUGCModuleType_EntityRepDataBlackboard | Token: 0x4041442
        void* EUGCModuleType_CheckPoint; // EUGCModuleType_CheckPoint | Token: 0x4041443
        void* EUGCModuleType_Team; // EUGCModuleType_Team | Token: 0x4041444
        void* EUGCModuleType_MatchResult; // EUGCModuleType_MatchResult | Token: 0x4041445
        void* EUGCModuleType_HudPrefabMgr; // EUGCModuleType_HudPrefabMgr | Token: 0x4041446
        void* EUGCModuleType_StatisticalReport; // EUGCModuleType_StatisticalReport | Token: 0x4041447
        void* EUGCModuleType_PropertyFormulaMgr; // EUGCModuleType_PropertyFormulaMgr | Token: 0x4041448
        void* EUGCModuleType_ShopMgr; // EUGCModuleType_ShopMgr | Token: 0x4041449
        void* EUGCModuleType_WalletModule; // EUGCModuleType_WalletModule | Token: 0x404144a
        void* EUGCModuleType_LevelObjectMgr; // EUGCModuleType_LevelObjectMgr | Token: 0x404144b
        void* EUGCModuleType_MorphMgr; // EUGCModuleType_MorphMgr | Token: 0x404144c
        void* EUGCModuleType_ArchTypeMgr; // EUGCModuleType_ArchTypeMgr | Token: 0x404144d
        void* EUGCModuleType_ChatChannelMgr; // EUGCModuleType_ChatChannelMgr | Token: 0x404144e
        void* EUGCModuleType_Faction; // EUGCModuleType_Faction | Token: 0x404144f
        void* EUGCModuleType_Hostility; // EUGCModuleType_Hostility | Token: 0x4041450
        void* EUGCModuleType_KDA; // EUGCModuleType_KDA | Token: 0x4041451
        void* EUGCModuleType_Transform; // EUGCModuleType_Transform | Token: 0x4041452
        void* EUGCModuleType_Playable; // EUGCModuleType_Playable | Token: 0x4041453
        void* EUGCModuleType_Database; // EUGCModuleType_Database | Token: 0x4041454
        void* EUGCModuleType_InternalHudMgr; // EUGCModuleType_InternalHudMgr | Token: 0x4041455
        void* EUGCModuleType_Dyeing; // EUGCModuleType_Dyeing | Token: 0x4041456
        void* EUGCModuleType_Physics; // EUGCModuleType_Physics | Token: 0x4041457
        void* EUGCModuleType_MiniMap; // EUGCModuleType_MiniMap | Token: 0x4041458
        void* EUGCModuleType_Animation; // EUGCModuleType_Animation | Token: 0x4041459
        void* EUGCModuleType_BehaviourTree; // EUGCModuleType_BehaviourTree | Token: 0x404145a
        void* EUGCModuleType_PathFinding; // EUGCModuleType_PathFinding | Token: 0x404145b
        void* EUGCModuleType_Avatar; // EUGCModuleType_Avatar | Token: 0x404145c
        void* EUGCModuleType_Profile; // EUGCModuleType_Profile | Token: 0x404145d
        void* EUGCModuleType_AirDrop; // EUGCModuleType_AirDrop | Token: 0x404145e
        void* EUGCModuleType_Time; // EUGCModuleType_Time | Token: 0x404145f
        void* EUGCModuleType_Premium; // EUGCModuleType_Premium | Token: 0x4041460
        void* EUGCModuleType_LLM; // EUGCModuleType_LLM | Token: 0x4041461
        void* EUGCModuleType_TimeLine; // EUGCModuleType_TimeLine | Token: 0x4041462
        void* EUGCModuleType_Plot; // EUGCModuleType_Plot | Token: 0x4041463
        void* EUGCModuleType_Skeleton; // EUGCModuleType_Skeleton | Token: 0x4041464
        void* EUGCModuleType_Device; // EUGCModuleType_Device | Token: 0x4041465
        void* EUGCModuleType_CommerceIAP; // EUGCModuleType_CommerceIAP | Token: 0x4041466
        void* EUGCModuleType_MapResource; // EUGCModuleType_MapResource | Token: 0x4041467
        void* PROFILE_GETREPITEM; // PROFILE_GETREPITEM | Token: 0x4041468
        void* PROFILE_SETREPITEM; // PROFILE_SETREPITEM | Token: 0x4041469
        void* PROFILE_DISPATCH; // PROFILE_DISPATCH | Token: 0x404146a
        void* PROPERTY_NAME; // PROPERTY_NAME | Token: 0x404146b
        void* ENTITY_CUSTOM_REPDATA_MAX; // ENTITY_CUSTOM_REPDATA_MAX | Token: 0x404146c
        void* CUSTOM_TYPE_ID_START; // CUSTOM_TYPE_ID_START | Token: 0x404146d
        void* CUSTOM_EVENT_START; // CUSTOM_EVENT_START | Token: 0x404146e
        void* PROFILER_ENABLE; // PROFILER_ENABLE | Token: 0x404146f
        void* TRS_LOG_ENABLE; // TRS_LOG_ENABLE | Token: 0x4041470
        void* PHASE_ENTITY_ID_FORMAT; // PHASE_ENTITY_ID_FORMAT | Token: 0x4041471
        void* CurrentItemCountInMatch; // CurrentItemCountInMatch | Token: 0x4041472
        void* MaxItemCountInMatch; // MaxItemCountInMatch | Token: 0x4041473
        void* EUGCInternalEntityID_Global; // EUGCInternalEntityID_Global | Token: 0x4041474
        void* EUGCInternalEntityID_ForType; // EUGCInternalEntityID_ForType | Token: 0x4041475
        void* SIZE_FLOAT; // SIZE_FLOAT | Token: 0x4041476
        void* SIZE_INT64; // SIZE_INT64 | Token: 0x4041477
        void* SIZE_INT; // SIZE_INT | Token: 0x4041478
        void* GLOBAL_TERRAIN_ENTITY_ID; // GLOBAL_TERRAIN_ENTITY_ID | Token: 0x4041479

        // Methods (3)
        // Method: Method_0() | Slot: 6763 | Token: 0x12545
        using fn_Method_0 = void* (*)(UGCConst* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7dc7
        using fn_Method_1 = void* (*)(UGCConst* __this);
        // Method: Method_2(void* priority) | Slot: 9541 | Token: 0x58f87f
        using fn_Method_2 = void* (*)(UGCConst* __this, void* priority);
    };

    // TypeDefIndex: 34690 | Original: COW.GamePlay.UGCRuntime.UGCGraphicsManager | Token: 0x2008783
    struct UGCGraphicsManager : Il2Cpp::Object {
        // Fields (1)
        void* m_ds; // m_ds | Token: 0x404147a

        // Methods (8)
        // Method: Method_0() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_0 = void* (*)(UGCGraphicsManager* __this);
        // Method: bum() | Slot: 63639 | Token: 0x86
        using fn_bum = void* (*)(UGCGraphicsManager* __this);
        // Method: (void* FKPOAJIBBLL) | Slot: 65535 | Token: 0x6036090
        using fn_unnamed = void* (*)(UGCGraphicsManager* __this, void* FKPOAJIBBLL);
        // Method: ADNBAJKEDHM() | Slot: 134 | Token: 0xffffffff
        using fn_ADNBAJKEDHM = void* (*)(UGCGraphicsManager* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24722 | Token: 0x21a72
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCGraphicsManager* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCGraphicsManager* __this);
        // Method: Method_6() | Slot: 6774 | Token: 0x12545
        using fn_Method_6 = void* (*)(UGCGraphicsManager* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7dc7
        using fn_Method_7 = void* (*)(UGCGraphicsManager* __this);
    };

    // TypeDefIndex: 34691 | Original: COW.GamePlay.UGCRuntime.UGCHudWidgetType | Token: 0x2008784
    struct UGCHudWidgetType : Il2Cpp::Object {
        // Fields (17)
        void* value__; // value__ | Token: 0x404147b
        void* EmptyWidget; // EmptyWidget | Token: 0x404147c
        void* ImageWidget; // ImageWidget | Token: 0x404147d
        void* LabelWidget; // LabelWidget | Token: 0x404147e
        void* ButtonWidget; // ButtonWidget | Token: 0x404147f
        void* InputWidget; // InputWidget | Token: 0x4041480
        void* EmptyPanel; // EmptyPanel | Token: 0x4041481
        void* ScrollView; // ScrollView | Token: 0x4041482
        void* Grid; // Grid | Token: 0x4041483
        void* Layout; // Layout | Token: 0x4041484
        void* Container3D; // Container3D | Token: 0x4041485
        void* Texture; // Texture | Token: 0x4041486
        void* ProfileInfo; // ProfileInfo | Token: 0x4041487
        void* Toggle; // Toggle | Token: 0x4041488
        void* TouchPad; // TouchPad | Token: 0x4041489
        void* Joystick; // Joystick | Token: 0x404148a
        void* SocialButtonWidget; // SocialButtonWidget | Token: 0x404148b
    };

    // TypeDefIndex: 34692 | Original: COW.GamePlay.UGCRuntime.Rect | Token: 0x2008785
    struct Rect : Il2Cpp::Object {
        // Fields (5)
        void* anchorMin; // anchorMin | Token: 0x404148c
        void* anchorMax; // anchorMax | Token: 0x404148d
        void* pivot; // pivot | Token: 0x404148e
        void* sizeDelta; // sizeDelta | Token: 0x404148f
        void* size; // size | Token: 0x4041490

        // Methods (2)
        // Method: ources(void* priority) | Slot: 9541 | Token: 0x58f8df
        using fn_ources = void* (*)(Rect* __this, void* priority);
        // Method: Method_1() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_1 = void* (*)(Rect* __this);
    };

    // TypeDefIndex: 34693 | Original: COW.GamePlay.UGCRuntime.UGCHudNode | Token: 0x2008786
    struct UGCHudNode : Il2Cpp::Object {
        // Fields (6)
        void* entityID; // entityID | Token: 0x4041491
        void* parent; // parent | Token: 0x4041492
        void* _childList; // _childList | Token: 0x4041493
        void* rect; // rect | Token: 0x4041494
        void* hudEntityID; // hudEntityID | Token: 0x4041495
        void* fileID; // fileID | Token: 0x4041496

        // Methods (5)
        // Method: t() | Slot: 63759 | Token: 0x86
        using fn_t = void* (*)(UGCHudNode* __this);
        // Method: (void* OKPBKKDHBPA) | Slot: 65535 | Token: 0x6036098
        using fn_unnamed = void* (*)(UGCHudNode* __this, void* OKPBKKDHBPA);
        // Method: FLIGOJGLEOK() | Slot: 150 | Token: 0xffffffff
        using fn_FLIGOJGLEOK = void* (*)(UGCHudNode* __this);
        // Method: imable() | Slot: 24730 | Token: 0x21a84
        using fn_imable = void* (*)(UGCHudNode* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudNode* __this);
    };

    // TypeDefIndex: 34694 | Original: COW.GamePlay.UGCRuntime.UGCHudPrefabMgr | Token: 0x2008787
    struct UGCHudPrefabMgr : Il2Cpp::Object {
        // Fields (9)
        void* ugcRuntime; // ugcRuntime | Token: 0x4041497
        void* prefabList; // prefabList | Token: 0x4041498
        void* hudChildren; // hudChildren | Token: 0x4041499
        void* hudPathToId; // hudPathToId | Token: 0x404149a
        void* hudNodeMap; // hudNodeMap | Token: 0x404149b
        void* widgetEntityIDGen; // widgetEntityIDGen | Token: 0x404149c
        void* hudDepth; // hudDepth | Token: 0x404149d
        void* hudOwner; // hudOwner | Token: 0x404149e
        void* hudProfileInfo; // hudProfileInfo | Token: 0x404149f

        // Methods (68)
        // Method: Method_0() | Slot: 6793 | Token: 0x67b4
        using fn_Method_0 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7dc7
        using fn_Method_1 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: es(void* priority) | Slot: 8434 | Token: 0x58f987
        using fn_es = void* (*)(UGCHudPrefabMgr* __this, void* priority);
        // Method: Method_3() | Slot: 32199 | Token: 0x3ffff
        using fn_Method_3 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: bum() | Slot: 63903 | Token: 0x86
        using fn_bum = void* (*)(UGCHudPrefabMgr* __this);
        // Method: (void* PLNDNBINKOA, void* CICBIIJABAP, void* CLACOPMJHDI) | Slot: 65535 | Token: 0x60360a0
        using fn_unnamed = void* (*)(UGCHudPrefabMgr* __this, void* PLNDNBINKOA, void* CICBIIJABAP, void* CLACOPMJHDI);
        // Method: DJJCJGPLDFJ() | Slot: 129 | Token: 0xffffffff
        using fn_DJJCJGPLDFJ = void* (*)(UGCHudPrefabMgr* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24738 | Token: 0x21a93
        using fn_GetExchangeCurrencySubType = void* (*)(UGCHudPrefabMgr* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x12545
        using fn_Method_9 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x7dc2
        using fn_Method_10 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_11(void* preferredMethod) | Slot: 9541 | Token: 0x67
        using fn_Method_11 = void* (*)(UGCHudPrefabMgr* __this, void* preferredMethod);
        // Method: Method_12() | Slot: 32194 | Token: 0xffff
        using fn_Method_12 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Interval() | Slot: 103 | Token: 0x83
        using fn_Interval = void* (*)(UGCHudPrefabMgr* __this);
        // Method: lend() | Slot: 65535 | Token: 0x60360a8
        using fn_lend = void* (*)(UGCHudPrefabMgr* __this);
        // Method: ONEHDJOMGEM() | Slot: 131 | Token: 0xffffffff
        using fn_ONEHDJOMGEM = void* (*)(UGCHudPrefabMgr* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24746 | Token: 0x21a97
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_18() | Slot: 6808 | Token: 0x12545
        using fn_Method_18 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x7dc5
        using fn_Method_19 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_20(void* strAPPSecret) | Slot: 9541 | Token: 0x58fe8f
        using fn_Method_20 = void* (*)(UGCHudPrefabMgr* __this, void* strAPPSecret);
        // Method: Method_21() | Slot: 32198 | Token: 0xffff
        using fn_Method_21 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: bum() | Slot: 65215 | Token: 0x1886
        using fn_bum = void* (*)(UGCHudPrefabMgr* __this);
        // Method: d(void* EBGHHGNFLCE) | Slot: 65535 | Token: 0x60360b0
        using fn_d = void* (*)(UGCHudPrefabMgr* __this, void* EBGHHGNFLCE);
        // Method: KDPIMBLIAMD() | Slot: 131 | Token: 0xffffffff
        using fn_KDPIMBLIAMD = void* (*)(UGCHudPrefabMgr* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24754 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_27() | Slot: 65535 | Token: 0xd09f
        using fn_Method_27 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_28() | Slot: 0 | Token: 0x7dc9
        using fn_Method_28 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_29() | Slot: 27076 | Token: 0x58ff56
        using fn_Method_29 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_30() | Slot: 32201 | Token: 0xffff
        using fn_Method_30 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: g() | Slot: 17716 | Token: 0xc4
        using fn_g = void* (*)(UGCHudPrefabMgr* __this);
        // Method: _savedLensFlareEnabled() | Slot: 24 | Token: 0x60360b8
        using fn__savedLensFlareEnabled = void* (*)(UGCHudPrefabMgr* __this);
        // Method: OnRecycle() | Slot: 198 | Token: 0xffffffff
        using fn_OnRecycle = void* (*)(UGCHudPrefabMgr* __this);
        // Method: sembly-CSharp.dll() | Slot: 24762 | Token: 0xffffffff
        using fn_sembly_CSharp_dll = void* (*)(UGCHudPrefabMgr* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_36() | Slot: 65535 | Token: 0xa52f
        using fn_Method_36 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_37() | Slot: 0 | Token: 0x7dc9
        using fn_Method_37 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: ch(void* priority) | Slot: 9541 | Token: 0x9446e
        using fn_ch = void* (*)(UGCHudPrefabMgr* __this, void* priority);
        // Method: Method_39() | Slot: 32201 | Token: 0xffff
        using fn_Method_39 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: bum() | Slot: 65377 | Token: 0xc6
        using fn_bum = void* (*)(UGCHudPrefabMgr* __this);
        // Method: _savedLensFlareEnabled() | Slot: 65535 | Token: 0x60360c0
        using fn__savedLensFlareEnabled = void* (*)(UGCHudPrefabMgr* __this);
        // Method: EJPCIAPFMAF() | Slot: 129 | Token: 0xffffffff
        using fn_EJPCIAPFMAF = void* (*)(UGCHudPrefabMgr* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24770 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_45(void* data, void* data) | Slot: 6815 | Token: 0x12545
        using fn_Method_45 = void* (*)(UGCHudPrefabMgr* __this, void* data, void* data);
        // Method: Method_46() | Slot: 0 | Token: 0x7dc9
        using fn_Method_46 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_47(void* circlePlane) | Slot: 9541 | Token: 0x545d88
        using fn_Method_47 = void* (*)(UGCHudPrefabMgr* __this, void* circlePlane);
        // Method: Method_48() | Slot: 32201 | Token: 0x2001f
        using fn_Method_48 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: bum() | Slot: 20980 | Token: 0xc4
        using fn_bum = void* (*)(UGCHudPrefabMgr* __this);
        // Method: _savedLensFlareEnabled(void* EOGOGFLCEHL) | Slot: 65535 | Token: 0x60360c8
        using fn__savedLensFlareEnabled = void* (*)(UGCHudPrefabMgr* __this, void* EOGOGFLCEHL);
        // Method: FMMIHKHLPCB() | Slot: 129 | Token: 0xffffffff
        using fn_FMMIHKHLPCB = void* (*)(UGCHudPrefabMgr* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24778 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_54(void* checkAuthType, void* info) | Slot: 6820 | Token: 0x12545
        using fn_Method_54 = void* (*)(UGCHudPrefabMgr* __this, void* checkAuthType, void* info);
        // Method: Method_55() | Slot: 0 | Token: 0x7dc9
        using fn_Method_55 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: eHash(void* d) | Slot: 9541 | Token: 0x58c698
        using fn_eHash = void* (*)(UGCHudPrefabMgr* __this, void* d);
        // Method: Method_57() | Slot: 32201 | Token: 0xffff
        using fn_Method_57 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: t() | Slot: 65473 | Token: 0x86
        using fn_t = void* (*)(UGCHudPrefabMgr* __this);
        // Method: _savedLensFlareEnabled() | Slot: 65535 | Token: 0x60360d0
        using fn__savedLensFlareEnabled = void* (*)(UGCHudPrefabMgr* __this);
        // Method: PEADODIDPGA() | Slot: 129 | Token: 0xffffffff
        using fn_PEADODIDPGA = void* (*)(UGCHudPrefabMgr* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24786 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_63() | Slot: 65535 | Token: 0x12545
        using fn_Method_63 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_64() | Slot: 0 | Token: 0x7dc9
        using fn_Method_64 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_65() | Slot: 27076 | Token: 0x1d58c5
        using fn_Method_65 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: Method_66() | Slot: 32201 | Token: 0xffff
        using fn_Method_66 = void* (*)(UGCHudPrefabMgr* __this);
        // Method: bum() | Slot: 37126 | Token: 0x6
        using fn_bum = void* (*)(UGCHudPrefabMgr* __this);
    };

    // TypeDefIndex: 34695 | Original: COW.GamePlay.UGCRuntime.IBridgingEntity | Token: 0x2008788
    struct IBridgingEntity : Il2Cpp::Object {

        // Methods (5)
        // Method: _savedLensFlareEnabled() | Slot: 65535 | Token: 0x60360d8
        using fn__savedLensFlareEnabled = void* (*)(IBridgingEntity* __this);
        // Method: <>iFixBaseProxy_SyncAction() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_SyncAction = void* (*)(IBridgingEntity* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24794 | Token: 0x21aa8
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(IBridgingEntity* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IBridgingEntity* __this);
        // Method: Method_4() | Slot: 6825 | Token: 0x12545
        using fn_Method_4 = void* (*)(IBridgingEntity* __this);
    };

    // TypeDefIndex: 34696 | Original: COW.GamePlay.UGCRuntime.IGameBridge | Token: 0x2008789
    struct IGameBridge : Il2Cpp::Object {

        // Methods (16)
        // Method: Method_0() | Slot: 0 | Token: 0x7dc9
        using fn_Method_0 = void* (*)(IGameBridge* __this);
        // Method: Method_1(void* cam) | Slot: 9541 | Token: 0x1c5107
        using fn_Method_1 = void* (*)(IGameBridge* __this, void* cam);
        // Method: Method_2() | Slot: 32201 | Token: 0x2ffff
        using fn_Method_2 = void* (*)(IGameBridge* __this);
        // Method: bum() | Slot: 16681 | Token: 0x6
        using fn_bum = void* (*)(IGameBridge* __this);
        // Method: savedLensFlareEnabled() | Slot: 68 | Token: 0x60360e0
        using fn_savedLensFlareEnabled = void* (*)(IGameBridge* __this);
        // Method: GetMaxRepDataCount() | Slot: 196 | Token: 0xffffffff
        using fn_GetMaxRepDataCount = void* (*)(IGameBridge* __this);
        // Method: dll() | Slot: 24802 | Token: 0xffffffff
        using fn_dll = void* (*)(IGameBridge* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(IGameBridge* __this);
        // Method: Method_8() | Slot: 6832 | Token: 0x69c4
        using fn_Method_8 = void* (*)(IGameBridge* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x7dca
        using fn_Method_9 = void* (*)(IGameBridge* __this);
        // Method: Method_10(void* priority) | Slot: 9541 | Token: 0x5900a8
        using fn_Method_10 = void* (*)(IGameBridge* __this, void* priority);
        // Method: Method_11() | Slot: 32202 | Token: 0x1ffff
        using fn_Method_11 = void* (*)(IGameBridge* __this);
        // Method: bum() | Slot: 17708 | Token: 0x81
        using fn_bum = void* (*)(IGameBridge* __this);
        // Method: savedLensFlareEnabled() | Slot: 20 | Token: 0x60360e8
        using fn_savedLensFlareEnabled = void* (*)(IGameBridge* __this);
        // Method: OJPEAOEHADD() | Slot: 129 | Token: 0xffffffff
        using fn_OJPEAOEHADD = void* (*)(IGameBridge* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24810 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(IGameBridge* __this);
    };

    // TypeDefIndex: 34697 | Original: COW.GamePlay.UGCRuntime.IMatchTeam | Token: 0x200878a
    struct IMatchTeam : Il2Cpp::Object {

        // Methods (4)
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(IMatchTeam* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(IMatchTeam* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dca
        using fn_Method_2 = void* (*)(IMatchTeam* __this);
        // Method: Method_3(void* circlePlane) | Slot: 9541 | Token: 0x4513
        using fn_Method_3 = void* (*)(IMatchTeam* __this, void* circlePlane);
    };

    // TypeDefIndex: 34698 | Original: COW.GamePlay.UGCRuntime.IMetaConfigHelper | Token: 0x200878b
    struct IMetaConfigHelper : Il2Cpp::Object {
    };

    // TypeDefIndex: 34699 | Original: COW.GamePlay.UGCRuntime.IModeConfig | Token: 0x200878c
    struct IModeConfig : Il2Cpp::Object {

        // Methods (4)
        // Method: Method_0() | Slot: 32202 | Token: 0x10049
        using fn_Method_0 = void* (*)(IModeConfig* __this);
        // Method: bum() | Slot: 50405 | Token: 0xc4
        using fn_bum = void* (*)(IModeConfig* __this);
        // Method: savedLensFlareEnabled(void* GMLCCOIKJGD) | Slot: 85 | Token: 0x60360f0
        using fn_savedLensFlareEnabled = void* (*)(IModeConfig* __this, void* GMLCCOIKJGD);
        // Method: EBNKGOIGEBE() | Slot: 129 | Token: 0xffffffff
        using fn_EBNKGOIGEBE = void* (*)(IModeConfig* __this);
    };

    // TypeDefIndex: 34700 | Original: COW.GamePlay.UGCRuntime.IUGCEnumerator | Token: 0x200878d
    struct IUGCEnumerator : Il2Cpp::Object {

        // Methods (6)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24818 | Token: 0x21ab9
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(IUGCEnumerator* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(IUGCEnumerator* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0xd09f
        using fn_Method_2 = void* (*)(IUGCEnumerator* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7dca
        using fn_Method_3 = void* (*)(IUGCEnumerator* __this);
        // Method: Method_4() | Slot: 42287 | Token: 0x569106
        using fn_Method_4 = void* (*)(IUGCEnumerator* __this);
        // Method: Method_5() | Slot: 32202 | Token: 0xffff
        using fn_Method_5 = void* (*)(IUGCEnumerator* __this);
    };

    // TypeDefIndex: 34701 | Original: COW.GamePlay.UGCRuntime.IIterator | Token: 0x200878e
    struct IIterator : Il2Cpp::Object {

        // Methods (2)
        // Method: bum() | Slot: 22972 | Token: 0x6
        using fn_bum = void* (*)(IIterator* __this);
        // Method: savedLensFlareEnabled() | Slot: 65535 | Token: 0x60360f8
        using fn_savedLensFlareEnabled = void* (*)(IIterator* __this);
    };

    // TypeDefIndex: 34702 | Original: COW.GamePlay.UGCRuntime.IUGCGraph | Token: 0x200878f
    struct IUGCGraph : Il2Cpp::Object {

        // Methods (20)
        // Method: <>iFixBaseProxy_OnOnDestroy() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnOnDestroy = void* (*)(IUGCGraph* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24826 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCGraph* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IUGCGraph* __this);
        // Method: Method_3() | Slot: 6842 | Token: 0x12545
        using fn_Method_3 = void* (*)(IUGCGraph* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7dca
        using fn_Method_4 = void* (*)(IUGCGraph* __this);
        // Method: l(void* cam) | Slot: 9541 | Token: 0x56c4f1
        using fn_l = void* (*)(IUGCGraph* __this, void* cam);
        // Method: Method_6() | Slot: 32203 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(IUGCGraph* __this);
        // Method: bum() | Slot: 532 | Token: 0x1886
        using fn_bum = void* (*)(IUGCGraph* __this);
        // Method: edLensFlareEnabled() | Slot: 65535 | Token: 0x6036100
        using fn_edLensFlareEnabled = void* (*)(IUGCGraph* __this);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(IUGCGraph* __this);
        // Method: `2() | Slot: 24834 | Token: 0xffffffff
        using fn__2 = void* (*)(IUGCGraph* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(IUGCGraph* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0x12545
        using fn_Method_12 = void* (*)(IUGCGraph* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x7dcd
        using fn_Method_13 = void* (*)(IUGCGraph* __this);
        // Method: Method_14(void* priority) | Slot: 9541 | Token: 0x590234
        using fn_Method_14 = void* (*)(IUGCGraph* __this, void* priority);
        // Method: Method_15() | Slot: 32205 | Token: 0xffff
        using fn_Method_15 = void* (*)(IUGCGraph* __this);
        // Method: bum() | Slot: 588 | Token: 0x81
        using fn_bum = void* (*)(IUGCGraph* __this);
        // Method: edLensFlareEnabled() | Slot: 65535 | Token: 0x6036108
        using fn_edLensFlareEnabled = void* (*)(IUGCGraph* __this);
        // Method: DLECBJJFGED() | Slot: 129 | Token: 0xffffffff
        using fn_DLECBJJFGED = void* (*)(IUGCGraph* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24842 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCGraph* __this);
    };

    // TypeDefIndex: 34703 | Original: COW.GamePlay.UGCRuntime.IUGCLevelObject | Token: 0x2008790
    struct IUGCLevelObject : Il2Cpp::Object {

        // Methods (8)
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(IUGCLevelObject* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x6adb
        using fn_Method_1 = void* (*)(IUGCLevelObject* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dcd
        using fn_Method_2 = void* (*)(IUGCLevelObject* __this);
        // Method: Method_3() | Slot: 27076 | Token: 0x2066c3
        using fn_Method_3 = void* (*)(IUGCLevelObject* __this);
        // Method: Method_4() | Slot: 32205 | Token: 0xffff
        using fn_Method_4 = void* (*)(IUGCLevelObject* __this);
        // Method: bum() | Slot: 664 | Token: 0x81
        using fn_bum = void* (*)(IUGCLevelObject* __this);
        // Method: edLensFlareEnabled() | Slot: 65535 | Token: 0x6036110
        using fn_edLensFlareEnabled = void* (*)(IUGCLevelObject* __this);
        // Method: OGGPHIPHIDM() | Slot: 129 | Token: 0xffffffff
        using fn_OGGPHIPHIDM = void* (*)(IUGCLevelObject* __this);
    };

    // TypeDefIndex: 34704 | Original: COW.GamePlay.UGCRuntime.IUGCTransform | Token: 0x2008791
    struct IUGCTransform : Il2Cpp::Object {

        // Methods (3)
        // Method: pe_GB_GP_SoccerGoal() | Slot: 24850 | Token: 0x21ac6
        using fn_pe_GB_GP_SoccerGoal = void* (*)(IUGCTransform* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(IUGCTransform* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x12545
        using fn_Method_2 = void* (*)(IUGCTransform* __this);
    };

    // TypeDefIndex: 34705 | Original: COW.GamePlay.UGCRuntime.IUGCMatchHumanPlayer | Token: 0x2008792
    struct IUGCMatchHumanPlayer : Il2Cpp::Object {

        // Methods (98)
        // Method: Method_0() | Slot: 0 | Token: 0x7dcd
        using fn_Method_0 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: tsToReturn(void* priority) | Slot: 9541 | Token: 0x5902f8
        using fn_tsToReturn = void* (*)(IUGCMatchHumanPlayer* __this, void* priority);
        // Method: Method_2() | Slot: 32205 | Token: 0xffff
        using fn_Method_2 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: t() | Slot: 57368 | Token: 0x86
        using fn_t = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: edLensFlareEnabled() | Slot: 65535 | Token: 0x6036118
        using fn_edLensFlareEnabled = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: GetCanUseReason() | Slot: 134 | Token: 0xffffffff
        using fn_GetCanUseReason = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24858 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_8(void* value, void* value) | Slot: 6861 | Token: 0x12545
        using fn_Method_8 = void* (*)(IUGCMatchHumanPlayer* __this, void* value, void* value);
        // Method: Method_9() | Slot: 0 | Token: 0x7dcd
        using fn_Method_9 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_10(void* d) | Slot: 9541 | Token: 0x44fb
        using fn_Method_10 = void* (*)(IUGCMatchHumanPlayer* __this, void* d);
        // Method: Method_11() | Slot: 32205 | Token: 0x16
        using fn_Method_11 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: bum() | Slot: 23944 | Token: 0xc4
        using fn_bum = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: edLensFlareEnabled(void* MHAAFMCMHAC, void* PAFBAHJAAGC) | Slot: 31 | Token: 0x6036120
        using fn_edLensFlareEnabled = void* (*)(IUGCMatchHumanPlayer* __this, void* MHAAFMCMHAC, void* PAFBAHJAAGC);
        // Method: NBAGGJOGJIE() | Slot: 129 | Token: 0xffffffff
        using fn_NBAGGJOGJIE = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: _WAIT() | Slot: 24866 | Token: 0x21ad8
        using fn__WAIT = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_17() | Slot: 65535 | Token: 0x12545
        using fn_Method_17 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_18() | Slot: 0 | Token: 0x7dcd
        using fn_Method_18 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_19(void* priority) | Slot: 9541 | Token: 0x67
        using fn_Method_19 = void* (*)(IUGCMatchHumanPlayer* __this, void* priority);
        // Method: Method_20() | Slot: 32205 | Token: 0xffff
        using fn_Method_20 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: bum() | Slot: 20743 | Token: 0x6
        using fn_bum = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: edLensFlareEnabled(void* P0, void* P1) | Slot: 65535 | Token: 0x6036128
        using fn_edLensFlareEnabled = void* (*)(IUGCMatchHumanPlayer* __this, void* P0, void* P1);
        // Method: <>iFixBaseProxy_GetMaxRepDataCount() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_GetMaxRepDataCount = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24874 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_26() | Slot: 6875 | Token: 0x12545
        using fn_Method_26 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_27() | Slot: 0 | Token: 0x7dcd
        using fn_Method_27 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_28(void* cam) | Slot: 9541 | Token: 0x569160
        using fn_Method_28 = void* (*)(IUGCMatchHumanPlayer* __this, void* cam);
        // Method: Method_29() | Slot: 32206 | Token: 0xffff
        using fn_Method_29 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: bum() | Slot: 64214 | Token: 0x1c6
        using fn_bum = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: dLensFlareEnabled(void* PICOEEONMOE) | Slot: 5 | Token: 0x6036130
        using fn_dLensFlareEnabled = void* (*)(IUGCMatchHumanPlayer* __this, void* PICOEEONMOE);
        // Method: PMPJCDGJBKF() | Slot: 1476 | Token: 0xffffffff
        using fn_PMPJCDGJBKF = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: angeCurrencySubType() | Slot: 24882 | Token: 0xffffffff
        using fn_angeCurrencySubType = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: condGrade() | Slot: 65535 | Token: 0x8000000
        using fn_condGrade = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_35() | Slot: 65535 | Token: 0x12545
        using fn_Method_35 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_36() | Slot: 0 | Token: 0x7dce
        using fn_Method_36 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_37(void* priority) | Slot: 9541 | Token: 0x138
        using fn_Method_37 = void* (*)(IUGCMatchHumanPlayer* __this, void* priority);
        // Method: Method_38() | Slot: 32206 | Token: 0xa
        using fn_Method_38 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: bum() | Slot: 103 | Token: 0x1c4
        using fn_bum = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: dLensFlareEnabled() | Slot: 65535 | Token: 0x6036138
        using fn_dLensFlareEnabled = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: CEFOBGMCABA() | Slot: 150 | Token: 0x168
        using fn_CEFOBGMCABA = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: imable() | Slot: 24890 | Token: 0xffffffff
        using fn_imable = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: BuffFactor() | Slot: 65535 | Token: 0x8000000
        using fn_BuffFactor = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_44() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_44 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_45() | Slot: 0 | Token: 0x7dd1
        using fn_Method_45 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: rPathArray(void* circlePlane) | Slot: 9541 | Token: 0x1014d
        using fn_rPathArray = void* (*)(IUGCMatchHumanPlayer* __this, void* circlePlane);
        // Method: Method_47() | Slot: 32209 | Token: 0x10048
        using fn_Method_47 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: bum() | Slot: 17621 | Token: 0x81
        using fn_bum = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: nsFlareEnabled() | Slot: 65535 | Token: 0x6036140
        using fn_nsFlareEnabled = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: OnLocalPlayerExit() | Slot: 134 | Token: 0xffffffff
        using fn_OnLocalPlayerExit = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24898 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_53() | Slot: 65535 | Token: 0x12545
        using fn_Method_53 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_54() | Slot: 0 | Token: 0x7dd1
        using fn_Method_54 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_55(void* priority) | Slot: 9541 | Token: 0x58de0e
        using fn_Method_55 = void* (*)(IUGCMatchHumanPlayer* __this, void* priority);
        // Method: Method_56() | Slot: 32209 | Token: 0x1ffff
        using fn_Method_56 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: bum() | Slot: 1349 | Token: 0x81
        using fn_bum = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: nsFlareEnabled() | Slot: 65535 | Token: 0x6036148
        using fn_nsFlareEnabled = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: GJAIOEMFNAB() | Slot: 129 | Token: 0xffffffff
        using fn_GJAIOEMFNAB = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24906 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_62() | Slot: 65535 | Token: 0x12545
        using fn_Method_62 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_63() | Slot: 0 | Token: 0x7dd1
        using fn_Method_63 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: thArray(void* cam) | Slot: 9541 | Token: 0x569129
        using fn_thArray = void* (*)(IUGCMatchHumanPlayer* __this, void* cam);
        // Method: Method_65() | Slot: 32209 | Token: 0x1ffff
        using fn_Method_65 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: bum() | Slot: 22725 | Token: 0x6
        using fn_bum = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: nsFlareEnabled() | Slot: 65535 | Token: 0x6036150
        using fn_nsFlareEnabled = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: <>iFixBaseProxy_OnModelShowed() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnModelShowed = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24914 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_71() | Slot: 65535 | Token: 0x12396
        using fn_Method_71 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_72() | Slot: 0 | Token: 0x7dd5
        using fn_Method_72 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_73(void* object) | Slot: 9110 | Token: 0x5906af
        using fn_Method_73 = void* (*)(IUGCMatchHumanPlayer* __this, void* object);
        // Method: Method_74() | Slot: 32213 | Token: 0x5a
        using fn_Method_74 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: g() | Slot: 10662 | Token: 0xc4
        using fn_g = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: areEnabled() | Slot: 19 | Token: 0x6036158
        using fn_areEnabled = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: SyncAction() | Slot: 198 | Token: 0xffffffff
        using fn_SyncAction = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: hangeCurrencyType() | Slot: 24922 | Token: 0x21aea
        using fn_hangeCurrencyType = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_80() | Slot: 6894 | Token: 0x12545
        using fn_Method_80 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_81() | Slot: 0 | Token: 0x7dd5
        using fn_Method_81 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_82(void* priority) | Slot: 9541 | Token: 0x5906e6
        using fn_Method_82 = void* (*)(IUGCMatchHumanPlayer* __this, void* priority);
        // Method: Method_83() | Slot: 32213 | Token: 0x3ffff
        using fn_Method_83 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: bum() | Slot: 103 | Token: 0x91
        using fn_bum = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: areEnabled() | Slot: 65535 | Token: 0x6036160
        using fn_areEnabled = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: <>iFixBaseProxy_OnAwake() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnAwake = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24930 | Token: 0x21af8
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_89() | Slot: 65535 | Token: 0x69c4
        using fn_Method_89 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_90() | Slot: 0 | Token: 0x7dd6
        using fn_Method_90 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: mResourcesIndex() | Slot: 54255 | Token: 0x4129
        using fn_mResourcesIndex = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Method_92() | Slot: 32214 | Token: 0x44
        using fn_Method_92 = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: bum() | Slot: 17708 | Token: 0xc6
        using fn_bum = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: reEnabled() | Slot: 20 | Token: 0x6036168
        using fn_reEnabled = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: CheckAsyncLoad() | Slot: 134 | Token: 0xffffffff
        using fn_CheckAsyncLoad = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24938 | Token: 0x21afd
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCMatchHumanPlayer* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(IUGCMatchHumanPlayer* __this);
    };

    // TypeDefIndex: 34706 | Original: COW.GamePlay.UGCRuntime.IUGCModule | Token: 0x2008793
    struct IUGCModule : Il2Cpp::Object {

        // Methods (3)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(IUGCModule* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7dd6
        using fn_Method_1 = void* (*)(IUGCModule* __this);
        // Method: Method_2(void* circlePlane) | Slot: 9541 | Token: 0x67
        using fn_Method_2 = void* (*)(IUGCModule* __this, void* circlePlane);
    };

    // TypeDefIndex: 34707 | Original: COW.GamePlay.UGCRuntime.IUGCModuleAnimation | Token: 0x2008794
    struct IUGCModuleAnimation : Il2Cpp::Object {

        // Methods (6)
        // Method: Method_0() | Slot: 32214 | Token: 0xffff
        using fn_Method_0 = void* (*)(IUGCModuleAnimation* __this);
        // Method: bum() | Slot: 22972 | Token: 0x6
        using fn_bum = void* (*)(IUGCModuleAnimation* __this);
        // Method: reEnabled() | Slot: 65535 | Token: 0x6036170
        using fn_reEnabled = void* (*)(IUGCModuleAnimation* __this);
        // Method: <>iFixBaseProxy_OnRecycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnRecycle = void* (*)(IUGCModuleAnimation* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24946 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCModuleAnimation* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IUGCModuleAnimation* __this);
    };

    // TypeDefIndex: 34708 | Original: COW.GamePlay.UGCRuntime.IUGCModuleArchTypeMgr | Token: 0x2008795
    struct IUGCModuleArchTypeMgr : Il2Cpp::Object {

        // Methods (11)
        // Method: Method_0() | Slot: 6913 | Token: 0x12545
        using fn_Method_0 = void* (*)(IUGCModuleArchTypeMgr* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7dd7
        using fn_Method_1 = void* (*)(IUGCModuleArchTypeMgr* __this);
        // Method: Method_2(void* object) | Slot: 9541 | Token: 0x586e92
        using fn_Method_2 = void* (*)(IUGCModuleArchTypeMgr* __this, void* object);
        // Method: Method_3() | Slot: 32215 | Token: 0xffff
        using fn_Method_3 = void* (*)(IUGCModuleArchTypeMgr* __this);
        // Method: bum() | Slot: 35488 | Token: 0x84
        using fn_bum = void* (*)(IUGCModuleArchTypeMgr* __this);
        // Method: eEnabled(void* JCONDDPFBKK) | Slot: 90 | Token: 0x6036178
        using fn_eEnabled = void* (*)(IUGCModuleArchTypeMgr* __this, void* JCONDDPFBKK);
        // Method: OnDead() | Slot: 454 | Token: 0xffffffff
        using fn_OnDead = void* (*)(IUGCModuleArchTypeMgr* __this);
        // Method: NONE() | Slot: 24954 | Token: 0xffffffff
        using fn_NONE = void* (*)(IUGCModuleArchTypeMgr* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(IUGCModuleArchTypeMgr* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x12545
        using fn_Method_9 = void* (*)(IUGCModuleArchTypeMgr* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x7dd7
        using fn_Method_10 = void* (*)(IUGCModuleArchTypeMgr* __this);
    };

    // TypeDefIndex: 34709 | Original: COW.GamePlay.UGCRuntime.IUGCModuleAvatar | Token: 0x2008796
    struct IUGCModuleAvatar : Il2Cpp::Object {

        // Methods (9)
        // Method: Method_0(void* rid) | Slot: 9541 | Token: 0x53dc2d
        using fn_Method_0 = void* (*)(IUGCModuleAvatar* __this, void* rid);
        // Method: Method_1() | Slot: 32215 | Token: 0x27
        using fn_Method_1 = void* (*)(IUGCModuleAvatar* __this);
        // Method: t() | Slot: 56088 | Token: 0x1c6
        using fn_t = void* (*)(IUGCModuleAvatar* __this);
        // Method: eEnabled() | Slot: 94 | Token: 0x6036180
        using fn_eEnabled = void* (*)(IUGCModuleAvatar* __this);
        // Method: BENDFKJKGPP() | Slot: 132 | Token: 0xffffffff
        using fn_BENDFKJKGPP = void* (*)(IUGCModuleAvatar* __this);
        // Method: imable() | Slot: 24962 | Token: 0x21b0c
        using fn_imable = void* (*)(IUGCModuleAvatar* __this);
        // Method: e() | Slot: 65535 | Token: 0x8000000
        using fn_e = void* (*)(IUGCModuleAvatar* __this);
        // Method: Method_7() | Slot: 6929 | Token: 0x12545
        using fn_Method_7 = void* (*)(IUGCModuleAvatar* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x7dd7
        using fn_Method_8 = void* (*)(IUGCModuleAvatar* __this);
    };

    // TypeDefIndex: 34710 | Original: COW.GamePlay.UGCRuntime.IUGCModuleHudPrefab | Token: 0x2008797
    struct IUGCModuleHudPrefab : Il2Cpp::Object {

        // Methods (11)
        // Method: tring(void* rid) | Slot: 9541 | Token: 0x533f9
        using fn_tring = void* (*)(IUGCModuleHudPrefab* __this, void* rid);
        // Method: Method_1() | Slot: 32215 | Token: 0x2ffff
        using fn_Method_1 = void* (*)(IUGCModuleHudPrefab* __this);
        // Method: bum() | Slot: 22699 | Token: 0x1884
        using fn_bum = void* (*)(IUGCModuleHudPrefab* __this);
        // Method: eEnabled() | Slot: 65535 | Token: 0x6036188
        using fn_eEnabled = void* (*)(IUGCModuleHudPrefab* __this);
        // Method: <>iFixBaseProxy_Recycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Recycle = void* (*)(IUGCModuleHudPrefab* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 24970 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCModuleHudPrefab* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IUGCModuleHudPrefab* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x12545
        using fn_Method_7 = void* (*)(IUGCModuleHudPrefab* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x7dd8
        using fn_Method_8 = void* (*)(IUGCModuleHudPrefab* __this);
        // Method: Method_9(void* d) | Slot: 9541 | Token: 0x4534
        using fn_Method_9 = void* (*)(IUGCModuleHudPrefab* __this, void* d);
        // Method: Method_10() | Slot: 32216 | Token: 0x18
        using fn_Method_10 = void* (*)(IUGCModuleHudPrefab* __this);
    };

    // TypeDefIndex: 34711 | Original: COW.GamePlay.UGCRuntime.IUGCModuleTimeLine | Token: 0x2008798
    struct IUGCModuleTimeLine : Il2Cpp::Object {

        // Methods (5)
        // Method: bum() | Slot: 55845 | Token: 0x84
        using fn_bum = void* (*)(IUGCModuleTimeLine* __this);
        // Method: Enabled() | Slot: 100 | Token: 0x6036190
        using fn_Enabled = void* (*)(IUGCModuleTimeLine* __this);
        // Method: DNCBJIODPGG() | Slot: 2177 | Token: 0xffffffff
        using fn_DNCBJIODPGG = void* (*)(IUGCModuleTimeLine* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 24978 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(IUGCModuleTimeLine* __this);
        // Method: Index() | Slot: 65535 | Token: 0x8000000
        using fn_Index = void* (*)(IUGCModuleTimeLine* __this);
    };

    // TypeDefIndex: 34712 | Original: COW.GamePlay.UGCRuntime.IUGCModuleTransform | Token: 0x2008799
    struct IUGCModuleTransform : Il2Cpp::Object {

        // Methods (19)
        // Method: Method_0() | Slot: 65535 | Token: 0xd09f
        using fn_Method_0 = void* (*)(IUGCModuleTransform* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7dd8
        using fn_Method_1 = void* (*)(IUGCModuleTransform* __this);
        // Method: Method_2(void* crtManager) | Slot: 9110 | Token: 0x53da65
        using fn_Method_2 = void* (*)(IUGCModuleTransform* __this, void* crtManager);
        // Method: Method_3() | Slot: 32216 | Token: 0x7a
        using fn_Method_3 = void* (*)(IUGCModuleTransform* __this);
        // Method: t() | Slot: 56014 | Token: 0x1c6
        using fn_t = void* (*)(IUGCModuleTransform* __this);
        // Method: Enabled() | Slot: 104 | Token: 0x6036198
        using fn_Enabled = void* (*)(IUGCModuleTransform* __this);
        // Method: set_LockedAimingCollider() | Slot: 2534 | Token: 0xffffffff
        using fn_set_LockedAimingCollider = void* (*)(IUGCModuleTransform* __this);
        // Method: XCHANGE() | Slot: 24986 | Token: 0xffffffff
        using fn_XCHANGE = void* (*)(IUGCModuleTransform* __this);
        // Method: Index() | Slot: 65535 | Token: 0x8000000
        using fn_Index = void* (*)(IUGCModuleTransform* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_9 = void* (*)(IUGCModuleTransform* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x7dd8
        using fn_Method_10 = void* (*)(IUGCModuleTransform* __this);
        // Method: archStringToArray() | Slot: 46039 | Token: 0x590839
        using fn_archStringToArray = void* (*)(IUGCModuleTransform* __this);
        // Method: Method_12() | Slot: 32216 | Token: 0xffff
        using fn_Method_12 = void* (*)(IUGCModuleTransform* __this);
        // Method: bum() | Slot: 11860 | Token: 0x1c6
        using fn_bum = void* (*)(IUGCModuleTransform* __this);
        // Method: Enabled(void* PMMCGNJHOOA, void* AOJANNHGCEA, void* LFLPGCMLPFM, void* FKDEIFDNMJD) | Slot: 129 | Token: 0x60361a0
        using fn_Enabled = void* (*)(IUGCModuleTransform* __this, void* PMMCGNJHOOA, void* AOJANNHGCEA, void* LFLPGCMLPFM, void* FKDEIFDNMJD);
        // Method: TakeHealing() | Slot: 454 | Token: 0xffffffff
        using fn_TakeHealing = void* (*)(IUGCModuleTransform* __this);
        // Method: saveVideoCallback() | Slot: 24994 | Token: 0xffffffff
        using fn_saveVideoCallback = void* (*)(IUGCModuleTransform* __this);
        // Method: ager() | Slot: 65535 | Token: 0x8000000
        using fn_ager = void* (*)(IUGCModuleTransform* __this);
        // Method: Method_18() | Slot: 65535 | Token: 0x12545
        using fn_Method_18 = void* (*)(IUGCModuleTransform* __this);
    };

    // TypeDefIndex: 34713 | Original: COW.GamePlay.UGCRuntime.IUGCObjectPoolItem | Token: 0x200879a
    struct IUGCObjectPoolItem : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 0 | Token: 0x7dd8
        using fn_Method_0 = void* (*)(IUGCObjectPoolItem* __this);
    };

    // TypeDefIndex: 34714 | Original: COW.GamePlay.UGCRuntime.IUGCPlayable | Token: 0x200879b
    struct IUGCPlayable : Il2Cpp::Object {

        // Methods (2)
        // Method: Method_0() | Slot: 38918 | Token: 0x53db63
        using fn_Method_0 = void* (*)(IUGCPlayable* __this);
        // Method: Method_1() | Slot: 32216 | Token: 0x61
        using fn_Method_1 = void* (*)(IUGCPlayable* __this);
    };

    // TypeDefIndex: 34715 | Original: COW.GamePlay.UGCRuntime.IUGCPlayer | Token: 0x200879c
    struct IUGCPlayer : Il2Cpp::Object {

        // Methods (4)
        // Method: bum() | Slot: 22671 | Token: 0x6
        using fn_bum = void* (*)(IUGCPlayer* __this);
        // Method: Enabled() | Slot: 65535 | Token: 0x60361a8
        using fn_Enabled = void* (*)(IUGCPlayer* __this);
        // Method: <>iFixBaseProxy_HHIFACHHBAH() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_HHIFACHHBAH = void* (*)(IUGCPlayer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25002 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCPlayer* __this);
    };

    // TypeDefIndex: 34716 | Original: COW.GamePlay.UGCRuntime.IUGCTypeMap | Token: 0x200879d
    struct IUGCTypeMap : Il2Cpp::Object {

        // Methods (24)
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IUGCTypeMap* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(IUGCTypeMap* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dda
        using fn_Method_2 = void* (*)(IUGCTypeMap* __this);
        // Method: oArray(void* circlePlane) | Slot: 9541 | Token: 0x482d
        using fn_oArray = void* (*)(IUGCTypeMap* __this, void* circlePlane);
        // Method: Method_4() | Slot: 32218 | Token: 0xffff
        using fn_Method_4 = void* (*)(IUGCTypeMap* __this);
        // Method: t() | Slot: 103 | Token: 0xc6
        using fn_t = void* (*)(IUGCTypeMap* __this);
        // Method: abled() | Slot: 65535 | Token: 0x60361b0
        using fn_abled = void* (*)(IUGCTypeMap* __this);
        // Method: <>iFixBaseProxy_OnModelShowed() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnModelShowed = void* (*)(IUGCTypeMap* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25010 | Token: 0x21b26
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCTypeMap* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IUGCTypeMap* __this);
        // Method: Method_10() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_10 = void* (*)(IUGCTypeMap* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x7ddc
        using fn_Method_11 = void* (*)(IUGCTypeMap* __this);
        // Method: Method_12(void* d) | Slot: 9541 | Token: 0x38aa0
        using fn_Method_12 = void* (*)(IUGCTypeMap* __this, void* d);
        // Method: Method_13() | Slot: 32220 | Token: 0xffff
        using fn_Method_13 = void* (*)(IUGCTypeMap* __this);
        // Method: bum() | Slot: 17716 | Token: 0xc4
        using fn_bum = void* (*)(IUGCTypeMap* __this);
        // Method: led() | Slot: 24 | Token: 0x60361b8
        using fn_led = void* (*)(IUGCTypeMap* __this);
        // Method: OnReUse() | Slot: 198 | Token: 0xffffffff
        using fn_OnReUse = void* (*)(IUGCTypeMap* __this);
        // Method: ssembly-CSharp.dll() | Slot: 25018 | Token: 0xffffffff
        using fn_ssembly_CSharp_dll = void* (*)(IUGCTypeMap* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(IUGCTypeMap* __this);
        // Method: Method_19(void* bR, void* P0) | Slot: 6951 | Token: 0x12545
        using fn_Method_19 = void* (*)(IUGCTypeMap* __this, void* bR, void* P0);
        // Method: Method_20() | Slot: 0 | Token: 0x7ddc
        using fn_Method_20 = void* (*)(IUGCTypeMap* __this);
        // Method: Method_21(void* d) | Slot: 9541 | Token: 0x5908ea
        using fn_Method_21 = void* (*)(IUGCTypeMap* __this, void* d);
        // Method: Method_22() | Slot: 32220 | Token: 0x2ffff
        using fn_Method_22 = void* (*)(IUGCTypeMap* __this);
        // Method: bum() | Slot: 11742 | Token: 0x81
        using fn_bum = void* (*)(IUGCTypeMap* __this);
    };

    // TypeDefIndex: 34717 | Original: COW.GamePlay.UGCRuntime.IUGCUser | Token: 0x200879e
    struct IUGCUser : Il2Cpp::Object {

        // Methods (4)
        // Method: led() | Slot: 36 | Token: 0x60361c0
        using fn_led = void* (*)(IUGCUser* __this);
        // Method: OnUpdateVisibleStateByStreamer() | Slot: 196 | Token: 0xffffffff
        using fn_OnUpdateVisibleStateByStreamer = void* (*)(IUGCUser* __this);
        // Method: ce() | Slot: 25026 | Token: 0x21b2d
        using fn_ce = void* (*)(IUGCUser* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(IUGCUser* __this);
    };

    // TypeDefIndex: 34718 | Original: COW.GamePlay.UGCRuntime.UGCLevelObjectModule | Token: 0x200879f
    struct UGCLevelObjectModule : Il2Cpp::Object {
        // Fields (3)
        void* ugcRuntime; // ugcRuntime | Token: 0x40414a0
        void* entityModule; // entityModule | Token: 0x40414a1
        void* itemIDToTypeName; // itemIDToTypeName | Token: 0x40414a2

        // Methods (10)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(UGCLevelObjectModule* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7ddc
        using fn_Method_1 = void* (*)(UGCLevelObjectModule* __this);
        // Method: WardrobeRecipes(void* priority) | Slot: 9541 | Token: 0x59091a
        using fn_WardrobeRecipes = void* (*)(UGCLevelObjectModule* __this, void* priority);
        // Method: Method_3() | Slot: 32220 | Token: 0x1ffff
        using fn_Method_3 = void* (*)(UGCLevelObjectModule* __this);
        // Method: REPLAYKIT_VIDEO_NAME_LOBBY() | Slot: 2347 | Token: 0x81
        using fn_REPLAYKIT_VIDEO_NAME_LOBBY = void* (*)(UGCLevelObjectModule* __this);
        // Method: led(void* IKMGPLIHPFE) | Slot: 65535 | Token: 0x60361c8
        using fn_led = void* (*)(UGCLevelObjectModule* __this, void* IKMGPLIHPFE);
        // Method: GFEFBBJBEOD() | Slot: 129 | Token: 0xffffffff
        using fn_GFEFBBJBEOD = void* (*)(UGCLevelObjectModule* __this);
        // Method: imable() | Slot: 25034 | Token: 0x21b35
        using fn_imable = void* (*)(UGCLevelObjectModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCLevelObjectModule* __this);
        // Method: Method_9() | Slot: 6969 | Token: 0x12545
        using fn_Method_9 = void* (*)(UGCLevelObjectModule* __this);
    };

    // TypeDefIndex: 34732 | Original: COW.GamePlay.UGCRuntime.UGCMapResourceModule | Token: 0x20087a0
    struct UGCMapResourceModule : Il2Cpp::Object {
        // Fields (23)
        void* DownloadStateNotDownloaded; // DownloadStateNotDownloaded | Token: 0x40414a3
        void* DownloadStateDownloading; // DownloadStateDownloading | Token: 0x40414a4
        void* DownloadStateSuccess; // DownloadStateSuccess | Token: 0x40414a5
        void* DownloadStateFailed; // DownloadStateFailed | Token: 0x40414a6
        void* StatusCodeNoError; // StatusCodeNoError | Token: 0x40414a7
        void* StatusCodeParamError; // StatusCodeParamError | Token: 0x40414a8
        void* StatusCodeMapResourceNotFound; // StatusCodeMapResourceNotFound | Token: 0x40414a9
        void* StatusCodeMapResourceTargetUnavailable; // StatusCodeMapResourceTargetUnavailable | Token: 0x40414aa
        void* StatusCodeMapResourceAccessDenied; // StatusCodeMapResourceAccessDenied | Token: 0x40414ab
        void* StatusCodeMapResourceBusy; // StatusCodeMapResourceBusy | Token: 0x40414ac
        void* StatusCodeMapResourceDownloadFailed; // StatusCodeMapResourceDownloadFailed | Token: 0x40414ad
        void* StatusCodeMapResourceVerifyFailed; // StatusCodeMapResourceVerifyFailed | Token: 0x40414ae
        void* StatusCodeMapResourceNetworkRestricted; // StatusCodeMapResourceNetworkRestricted | Token: 0x40414af
        void* CheckProgressCacheDuration; // CheckProgressCacheDuration | Token: 0x40414b0
        void* DownloadPurpose; // DownloadPurpose | Token: 0x40414b1
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x40414b2
        void* m_ExportUrlCachesByMapCode; // m_ExportUrlCachesByMapCode | Token: 0x40414b3
        void* m_GameDataWaitersByExportUrl; // m_GameDataWaitersByExportUrl | Token: 0x40414b4
        void* m_DownloadSessionsByExportUrl; // m_DownloadSessionsByExportUrl | Token: 0x40414b5
        void* m_ActiveDownloadSessionsByMapCode; // m_ActiveDownloadSessionsByMapCode | Token: 0x40414b6
        void* m_CheckProbesByExportUrl; // m_CheckProbesByExportUrl | Token: 0x40414b7
        void* m_RegisteredDispatcher; // m_RegisteredDispatcher | Token: 0x40414b8
        void* m_Destroyed; // m_Destroyed | Token: 0x40414b9

        // Methods (63)
        // Method: Method_0() | Slot: 0 | Token: 0x7ddc
        using fn_Method_0 = void* (*)(UGCMapResourceModule* __this);
        // Method: ipes() | Slot: 27076 | Token: 0x590981
        using fn_ipes = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_2() | Slot: 32220 | Token: 0xffff
        using fn_Method_2 = void* (*)(UGCMapResourceModule* __this);
        // Method: bum() | Slot: 2445 | Token: 0x81
        using fn_bum = void* (*)(UGCMapResourceModule* __this);
        // Method: led() | Slot: 65535 | Token: 0x60361d0
        using fn_led = void* (*)(UGCMapResourceModule* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCMapResourceModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25042 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCMapResourceModule* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_8() | Slot: 65535 | Token: 0x12545
        using fn_Method_8 = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x7ddc
        using fn_Method_9 = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_10(void* cam) | Slot: 9541 | Token: 0x1d58ab
        using fn_Method_10 = void* (*)(UGCMapResourceModule* __this, void* cam);
        // Method: Method_11() | Slot: 32220 | Token: 0xffff
        using fn_Method_11 = void* (*)(UGCMapResourceModule* __this);
        // Method: t() | Slot: 22421 | Token: 0x6
        using fn_t = void* (*)(UGCMapResourceModule* __this);
        // Method: led(void* P0) | Slot: 65535 | Token: 0x60361d8
        using fn_led = void* (*)(UGCMapResourceModule* __this, void* P0);
        // Method: <>iFixBaseProxy_OnUserDefineReplicationInfo() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnUserDefineReplicationInfo = void* (*)(UGCMapResourceModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25050 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCMapResourceModule* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_17() | Slot: 65535 | Token: 0x12545
        using fn_Method_17 = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_18() | Slot: 0 | Token: 0x7dde
        using fn_Method_18 = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_19() | Slot: 25814 | Token: 0x58df11
        using fn_Method_19 = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_20() | Slot: 32222 | Token: 0x5b
        using fn_Method_20 = void* (*)(UGCMapResourceModule* __this);
        // Method: bum() | Slot: 55008 | Token: 0xc4
        using fn_bum = void* (*)(UGCMapResourceModule* __this);
        // Method: d() | Slot: 34 | Token: 0x60361e0
        using fn_d = void* (*)(UGCMapResourceModule* __this);
        // Method: IMKNMEAONFG() | Slot: 129 | Token: 0xffffffff
        using fn_IMKNMEAONFG = void* (*)(UGCMapResourceModule* __this);
        // Method: _WAIT() | Slot: 25058 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UGCMapResourceModule* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_26() | Slot: 65535 | Token: 0x12545
        using fn_Method_26 = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_27() | Slot: 0 | Token: 0x7dde
        using fn_Method_27 = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_28(void* priority) | Slot: 9541 | Token: 0xb4f3
        using fn_Method_28 = void* (*)(UGCMapResourceModule* __this, void* priority);
        // Method: Method_29() | Slot: 32222 | Token: 0x20019
        using fn_Method_29 = void* (*)(UGCMapResourceModule* __this);
        // Method: bum() | Slot: 57141 | Token: 0x1886
        using fn_bum = void* (*)(UGCMapResourceModule* __this);
        // Method: d(void* P0, void* P1) | Slot: 65535 | Token: 0x60361e8
        using fn_d = void* (*)(UGCMapResourceModule* __this, void* P0, void* P1);
        // Method: <>iFixBaseProxy_OnUserDefineReplicationInfo() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnUserDefineReplicationInfo = void* (*)(UGCMapResourceModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25066 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCMapResourceModule* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_35() | Slot: 65535 | Token: 0x12545
        using fn_Method_35 = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_36() | Slot: 0 | Token: 0x7dde
        using fn_Method_36 = void* (*)(UGCMapResourceModule* __this);
        // Method: ed() | Slot: 54255 | Token: 0x4129
        using fn_ed = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_38() | Slot: 32225 | Token: 0x44
        using fn_Method_38 = void* (*)(UGCMapResourceModule* __this);
        // Method: Interval() | Slot: 2626 | Token: 0xc4
        using fn_Interval = void* (*)(UGCMapResourceModule* __this);
        // Method: _lensFlareSuppressed() | Slot: 65535 | Token: 0x60361f0
        using fn__lensFlareSuppressed = void* (*)(UGCMapResourceModule* __this);
        // Method: MOJMACCMGIH() | Slot: 2177 | Token: 0xffffffff
        using fn_MOJMACCMGIH = void* (*)(UGCMapResourceModule* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25074 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCMapResourceModule* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_44() | Slot: 65535 | Token: 0x120f2
        using fn_Method_44 = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_45() | Slot: 0 | Token: 0x7de1
        using fn_Method_45 = void* (*)(UGCMapResourceModule* __this);
        // Method: laceholderRace(void* rotation) | Slot: 9541 | Token: 0x452c
        using fn_laceholderRace = void* (*)(UGCMapResourceModule* __this, void* rotation);
        // Method: Method_47() | Slot: 32225 | Token: 0x14
        using fn_Method_47 = void* (*)(UGCMapResourceModule* __this);
        // Method: bum() | Slot: 2702 | Token: 0xc4
        using fn_bum = void* (*)(UGCMapResourceModule* __this);
        // Method: _lensFlareSuppressed() | Slot: 65535 | Token: 0x60361f8
        using fn__lensFlareSuppressed = void* (*)(UGCMapResourceModule* __this);
        // Method: OnActionCancel() | Slot: 134 | Token: 0xffffffff
        using fn_OnActionCancel = void* (*)(UGCMapResourceModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25082 | Token: 0x21b4f
        using fn_GetExchangeCurrencySubType = void* (*)(UGCMapResourceModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_53() | Slot: 6993 | Token: 0x12545
        using fn_Method_53 = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_54() | Slot: 0 | Token: 0x7de1
        using fn_Method_54 = void* (*)(UGCMapResourceModule* __this);
        // Method: olderRace(void* priority) | Slot: 9541 | Token: 0x590adb
        using fn_olderRace = void* (*)(UGCMapResourceModule* __this, void* priority);
        // Method: Method_56() | Slot: 32225 | Token: 0xffff
        using fn_Method_56 = void* (*)(UGCMapResourceModule* __this);
        // Method: bum() | Slot: 17669 | Token: 0xc4
        using fn_bum = void* (*)(UGCMapResourceModule* __this);
        // Method: _lensFlareSuppressed() | Slot: 18 | Token: 0x6036200
        using fn__lensFlareSuppressed = void* (*)(UGCMapResourceModule* __this);
        // Method: KFGMPHEHHEC() | Slot: 129 | Token: 0xffffffff
        using fn_KFGMPHEHHEC = void* (*)(UGCMapResourceModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25090 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCMapResourceModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCMapResourceModule* __this);
        // Method: Method_62() | Slot: 6998 | Token: 0x12545
        using fn_Method_62 = void* (*)(UGCMapResourceModule* __this);
    };

    // TypeDefIndex: 34733 | Original: COW.GamePlay.UGCRuntime.IUGCBehaviourTreeModule | Token: 0x20087ae
    struct IUGCBehaviourTreeModule : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 32229 | Token: 0xffff
        using fn_Method_0 = void* (*)(IUGCBehaviourTreeModule* __this);
    };

    // TypeDefIndex: 34734 | Original: COW.GamePlay.UGCRuntime.IUGCBTree | Token: 0x20087af
    struct IUGCBTree : Il2Cpp::Object {

        // Methods (7)
        // Method: tAngle() | Slot: 3180 | Token: 0x886
        using fn_tAngle = void* (*)(IUGCBTree* __this);
        // Method: sFlareSuppressed() | Slot: 65535 | Token: 0x6036218
        using fn_sFlareSuppressed = void* (*)(IUGCBTree* __this);
        // Method: GetSnowSlideWayCfgData() | Slot: 486 | Token: 0xffffffff
        using fn_GetSnowSlideWayCfgData = void* (*)(IUGCBTree* __this);
        // Method: r() | Slot: 25114 | Token: 0xffffffff
        using fn_r = void* (*)(IUGCBTree* __this);
        // Method: t() | Slot: 65535 | Token: 0x8000000
        using fn_t = void* (*)(IUGCBTree* __this);
        // Method: Method_5() | Slot: 7007 | Token: 0x69c4
        using fn_Method_5 = void* (*)(IUGCBTree* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7de5
        using fn_Method_6 = void* (*)(IUGCBTree* __this);
    };

    // TypeDefIndex: 34735 | Original: COW.GamePlay.UGCRuntime.IUGCBTreeNode | Token: 0x20087b0
    struct IUGCBTreeNode : Il2Cpp::Object {

        // Methods (7)
        // Method: Method_0(void* d) | Slot: 9541 | Token: 0x590c90
        using fn_Method_0 = void* (*)(IUGCBTreeNode* __this, void* d);
        // Method: Method_1() | Slot: 32229 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(IUGCBTreeNode* __this);
        // Method: bum() | Slot: 46323 | Token: 0xc6
        using fn_bum = void* (*)(IUGCBTreeNode* __this);
        // Method: sFlareSuppressed(void* OKJIFBCMDAD, void* HOGHEFNINAE) | Slot: 25 | Token: 0x6036220
        using fn_sFlareSuppressed = void* (*)(IUGCBTreeNode* __this, void* OKJIFBCMDAD, void* HOGHEFNINAE);
        // Method: MNEFOPPHJJN() | Slot: 129 | Token: 0xffffffff
        using fn_MNEFOPPHJJN = void* (*)(IUGCBTreeNode* __this);
        // Method: _WAIT() | Slot: 25122 | Token: 0x21b66
        using fn__WAIT = void* (*)(IUGCBTreeNode* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(IUGCBTreeNode* __this);
    };

    // TypeDefIndex: 34736 | Original: COW.GamePlay.UGCRuntime.IUGCBTreeBlackboard | Token: 0x20087b1
    struct IUGCBTreeBlackboard : Il2Cpp::Object {

        // Methods (3)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(IUGCBTreeBlackboard* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7de5
        using fn_Method_1 = void* (*)(IUGCBTreeBlackboard* __this);
        // Method: Method_2(void* priority) | Slot: 9541 | Token: 0x590cdd
        using fn_Method_2 = void* (*)(IUGCBTreeBlackboard* __this, void* priority);
    };

    // TypeDefIndex: 34737 | Original: COW.GamePlay.UGCRuntime.IAttachUGCBTreeNode | Token: 0x20087b2
    struct IAttachUGCBTreeNode : Il2Cpp::Object {

        // Methods (2)
        // Method: Method_0() | Slot: 32229 | Token: 0xffff
        using fn_Method_0 = void* (*)(IAttachUGCBTreeNode* __this);
        // Method: bum() | Slot: 17659 | Token: 0xc4
        using fn_bum = void* (*)(IAttachUGCBTreeNode* __this);
    };

    // TypeDefIndex: 34738 | Original: COW.GamePlay.UGCRuntime.IGSTBTAction | Token: 0x20087b3
    struct IGSTBTAction : Il2Cpp::Object {

        // Methods (2)
        // Method: sFlareSuppressed() | Slot: 22 | Token: 0x6036228
        using fn_sFlareSuppressed = void* (*)(IGSTBTAction* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(IGSTBTAction* __this);
    };

    // TypeDefIndex: 34740 | Original: COW.GamePlay.UGCRuntime.UGCBehaviourTreeModule | Token: 0x20087b4
    struct UGCBehaviourTreeModule : Il2Cpp::Object {
        // Fields (2)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x40414ea
        void* m_TreeMap; // m_TreeMap | Token: 0x40414eb

        // Methods (11)
        // Method: GetExchangeCurrencySubType() | Slot: 25130 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCBehaviourTreeModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCBehaviourTreeModule* __this);
        // Method: Method_2() | Slot: 7017 | Token: 0x12545
        using fn_Method_2 = void* (*)(UGCBehaviourTreeModule* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7de5
        using fn_Method_3 = void* (*)(UGCBehaviourTreeModule* __this);
        // Method: rdrobeRecipe(void* cam) | Slot: 9541 | Token: 0x1d588f
        using fn_rdrobeRecipe = void* (*)(UGCBehaviourTreeModule* __this, void* cam);
        // Method: Method_5() | Slot: 32229 | Token: 0xffff
        using fn_Method_5 = void* (*)(UGCBehaviourTreeModule* __this);
        // Method: bum() | Slot: 103 | Token: 0x6
        using fn_bum = void* (*)(UGCBehaviourTreeModule* __this);
        // Method: ensFlareSuppressed() | Slot: 65535 | Token: 0x6036230
        using fn_ensFlareSuppressed = void* (*)(UGCBehaviourTreeModule* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCBehaviourTreeModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25138 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCBehaviourTreeModule* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UGCBehaviourTreeModule* __this);
    };

    // TypeDefIndex: 34741 | Original: COW.GamePlay.UGCRuntime.UGCBtNodeData | Token: 0x20087b6
    struct UGCBtNodeData : Il2Cpp::Object {
        // Fields (7)
        void* id; // id | Token: 0x40414ed
        void* name; // name | Token: 0x40414ee
        void* title; // title | Token: 0x40414ef
        void* description; // description | Token: 0x40414f0
        void* children; // children | Token: 0x40414f1
        void* child; // child | Token: 0x40414f2
        void* properties; // properties | Token: 0x40414f3

        // Methods (6)
        // Method: Method_0() | Slot: 54255 | Token: 0x4129
        using fn_Method_0 = void* (*)(UGCBtNodeData* __this);
        // Method: Method_1() | Slot: 32231 | Token: 0x44
        using fn_Method_1 = void* (*)(UGCBtNodeData* __this);
        // Method: bum() | Slot: 11742 | Token: 0xc4
        using fn_bum = void* (*)(UGCBtNodeData* __this);
        // Method: lareSuppressed() | Slot: 36 | Token: 0x6036238
        using fn_lareSuppressed = void* (*)(UGCBtNodeData* __this);
        // Method: EEGCOCHBLJJ() | Slot: 129 | Token: 0xffffffff
        using fn_EEGCOCHBLJJ = void* (*)(UGCBtNodeData* __this);
        // Method: _WAIT() | Slot: 25146 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UGCBtNodeData* __this);
    };

    // TypeDefIndex: 34742 | Original: COW.GamePlay.UGCRuntime.UGCBtTreeData | Token: 0x20087b7
    struct UGCBtTreeData : Il2Cpp::Object {
        // Fields (5)
        void* title; // title | Token: 0x40414f4
        void* description; // description | Token: 0x40414f5
        void* root; // root | Token: 0x40414f6
        void* properties; // properties | Token: 0x40414f7
        void* nodes; // nodes | Token: 0x40414f8

        // Methods (1)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCBtTreeData* __this);
    };

    // TypeDefIndex: 34743 | Original: COW.GamePlay.UGCRuntime.UGCBtFactory | Token: 0x20087b8
    struct UGCBtFactory : Il2Cpp::Object {

        // Methods (3)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(UGCBtFactory* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7de7
        using fn_Method_1 = void* (*)(UGCBtFactory* __this);
        // Method: Method_2(void* circlePlane) | Slot: 9541 | Token: 0x44c3
        using fn_Method_2 = void* (*)(UGCBtFactory* __this, void* circlePlane);
    };

    // TypeDefIndex: 34744 | Original: COW.GamePlay.UGCRuntime.UGCBTree | Token: 0x20087b9
    struct UGCBTree : Il2Cpp::Object {
        // Fields (6)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x40414f9
        void* m_UGCEntityID; // m_UGCEntityID | Token: 0x40414fa
        void* m_AttachableEntityID; // m_AttachableEntityID | Token: 0x40414fb
        void* m_Root; // m_Root | Token: 0x40414fc
        void* m_Blackboard; // m_Blackboard | Token: 0x40414fd
        void* m_Nodes; // m_Nodes | Token: 0x40414fe

        // Methods (17)
        // Method: Method_0() | Slot: 32231 | Token: 0xffff
        using fn_Method_0 = void* (*)(UGCBTree* __this);
        // Method: bum() | Slot: 17683 | Token: 0x86
        using fn_bum = void* (*)(UGCBTree* __this);
        // Method: lareSuppressed(void* DJAPBCKDFKA) | Slot: 73 | Token: 0x6036240
        using fn_lareSuppressed = void* (*)(UGCBTree* __this, void* DJAPBCKDFKA);
        // Method: DoAction() | Slot: 198 | Token: 0xffffffff
        using fn_DoAction = void* (*)(UGCBTree* __this);
        // Method: changeCurrencyType() | Slot: 25154 | Token: 0x21b71
        using fn_changeCurrencyType = void* (*)(UGCBTree* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCBTree* __this);
        // Method: Method_6() | Slot: 7026 | Token: 0x12545
        using fn_Method_6 = void* (*)(UGCBTree* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7de7
        using fn_Method_7 = void* (*)(UGCBTree* __this);
        // Method: ipe(void* priority) | Slot: 9541 | Token: 0x590551
        using fn_ipe = void* (*)(UGCBTree* __this, void* priority);
        // Method: Method_9() | Slot: 32231 | Token: 0xffff
        using fn_Method_9 = void* (*)(UGCBTree* __this);
        // Method: bum() | Slot: 103 | Token: 0xc4
        using fn_bum = void* (*)(UGCBTree* __this);
        // Method: lareSuppressed() | Slot: 65535 | Token: 0x6036248
        using fn_lareSuppressed = void* (*)(UGCBTree* __this);
        // Method: <>iFixBaseProxy_OnAwake() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnAwake = void* (*)(UGCBTree* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25162 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCBTree* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCBTree* __this);
        // Method: Method_15() | Slot: 65535 | Token: 0x12545
        using fn_Method_15 = void* (*)(UGCBTree* __this);
        // Method: Method_16() | Slot: 0 | Token: 0x7de7
        using fn_Method_16 = void* (*)(UGCBTree* __this);
    };

    // TypeDefIndex: 34745 | Original: COW.GamePlay.UGCRuntime.UGCBTreeBlackboard | Token: 0x20087ba
    struct UGCBTreeBlackboard : Il2Cpp::Object {
        // Fields (3)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x40414ff
        void* m_Values; // m_Values | Token: 0x4041500
        void* m_TreeAttachableEntityID; // m_TreeAttachableEntityID | Token: 0x4041501

        // Methods (6)
        // Method: Method_0(void* cam) | Slot: 9541 | Token: 0x1d5795
        using fn_Method_0 = void* (*)(UGCBTreeBlackboard* __this, void* cam);
        // Method: Method_1() | Slot: 32231 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(UGCBTreeBlackboard* __this);
        // Method: bum() | Slot: 9338 | Token: 0x6
        using fn_bum = void* (*)(UGCBTreeBlackboard* __this);
        // Method: lareSuppressed(void* P0, void* P1) | Slot: 65535 | Token: 0x6036250
        using fn_lareSuppressed = void* (*)(UGCBTreeBlackboard* __this, void* P0, void* P1);
        // Method: OnAwake() | Slot: 196 | Token: 0xffffffff
        using fn_OnAwake = void* (*)(UGCBTreeBlackboard* __this);
        // Method: () | Slot: 25170 | Token: 0xffffffff
        using fn_unnamed = void* (*)(UGCBTreeBlackboard* __this);
    };

    // TypeDefIndex: 34746 | Original: COW.GamePlay.UGCRuntime.UGCBTreeNode | Token: 0x20087bb
    struct UGCBTreeNode : Il2Cpp::Object {
        // Fields (6)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x4041502
        void* m_Node; // m_Node | Token: 0x4041503
        void* m_NodeData; // m_NodeData | Token: 0x4041504
        void* m_Blackboard; // m_Blackboard | Token: 0x4041505
        void* m_UGCEntityID; // m_UGCEntityID | Token: 0x4041506
        void* m_UGCEntity; // m_UGCEntity | Token: 0x4041507

        // Methods (13)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCBTreeNode* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCBTreeNode* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dea
        using fn_Method_2 = void* (*)(UGCBTreeNode* __this);
        // Method: ceholderSlot() | Slot: 54255 | Token: 0x4129
        using fn_ceholderSlot = void* (*)(UGCBTreeNode* __this);
        // Method: Method_4() | Slot: 32234 | Token: 0x44
        using fn_Method_4 = void* (*)(UGCBTreeNode* __this);
        // Method: bum() | Slot: 3862 | Token: 0x81
        using fn_bum = void* (*)(UGCBTreeNode* __this);
        // Method: eSuppressed() | Slot: 65535 | Token: 0x6036258
        using fn_eSuppressed = void* (*)(UGCBTreeNode* __this);
        // Method: TakeDamage() | Slot: 198 | Token: 0xffffffff
        using fn_TakeDamage = void* (*)(UGCBTreeNode* __this);
        // Method: f() | Slot: 25178 | Token: 0xffffffff
        using fn_f = void* (*)(UGCBTreeNode* __this);
        // Method: wardId1() | Slot: 65535 | Token: 0x8000000
        using fn_wardId1 = void* (*)(UGCBTreeNode* __this);
        // Method: Method_10() | Slot: 65535 | Token: 0x69c4
        using fn_Method_10 = void* (*)(UGCBTreeNode* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x7dea
        using fn_Method_11 = void* (*)(UGCBTreeNode* __this);
        // Method: Method_12() | Slot: 42287 | Token: 0x58456c
        using fn_Method_12 = void* (*)(UGCBTreeNode* __this);
    };

    // TypeDefIndex: 34747 | Original: COW.GamePlay.UGCRuntime.IUGCDatabaseModule | Token: 0x20087bc
    struct IUGCDatabaseModule : Il2Cpp::Object {

        // Methods (6)
        // Method: Method_0() | Slot: 32234 | Token: 0x75
        using fn_Method_0 = void* (*)(IUGCDatabaseModule* __this);
        // Method: t() | Slot: 29825 | Token: 0x8c6
        using fn_t = void* (*)(IUGCDatabaseModule* __this);
        // Method: eSuppressed() | Slot: 118 | Token: 0x6036260
        using fn_eSuppressed = void* (*)(IUGCDatabaseModule* __this);
        // Method: GetAttackableRadius() | Slot: 198 | Token: 0xffffffff
        using fn_GetAttackableRadius = void* (*)(IUGCDatabaseModule* __this);
        // Method: s() | Slot: 25186 | Token: 0x21b7f
        using fn_s = void* (*)(IUGCDatabaseModule* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(IUGCDatabaseModule* __this);
    };

    // TypeDefIndex: 34748 | Original: COW.GamePlay.UGCRuntime.IUGCLocalDatabase | Token: 0x20087bd
    struct IUGCLocalDatabase : Il2Cpp::Object {

        // Methods (5)
        // Method: Method_0() | Slot: 65535 | Token: 0x69c4
        using fn_Method_0 = void* (*)(IUGCLocalDatabase* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7dea
        using fn_Method_1 = void* (*)(IUGCLocalDatabase* __this);
        // Method: Method_2(void* priority) | Slot: 9541 | Token: 0x44fb
        using fn_Method_2 = void* (*)(IUGCLocalDatabase* __this, void* priority);
        // Method: Method_3() | Slot: 32234 | Token: 0x16
        using fn_Method_3 = void* (*)(IUGCLocalDatabase* __this);
        // Method: bum() | Slot: 17716 | Token: 0x86
        using fn_bum = void* (*)(IUGCLocalDatabase* __this);
    };

    // TypeDefIndex: 34749 | Original: COW.GamePlay.UGCRuntime.UGCDatabaseModule | Token: 0x20087be
    struct UGCDatabaseModule : Il2Cpp::Object {
        // Fields (5)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x4041508
        void* m_ReqIDGen; // m_ReqIDGen | Token: 0x4041509
        void* m_Operations; // m_Operations | Token: 0x404150a
        void* m_OperationPool; // m_OperationPool | Token: 0x404150b
        void* m_Server; // m_Server | Token: 0x404150c

        // Methods (15)
        // Method: eSuppressed() | Slot: 24 | Token: 0x6036268
        using fn_eSuppressed = void* (*)(UGCDatabaseModule* __this);
        // Method: SyncAction() | Slot: 198 | Token: 0xffffffff
        using fn_SyncAction = void* (*)(UGCDatabaseModule* __this);
        // Method: hangeCurrencyType() | Slot: 25194 | Token: 0x21b82
        using fn_hangeCurrencyType = void* (*)(UGCDatabaseModule* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCDatabaseModule* __this);
        // Method: Method_4() | Slot: 7046 | Token: 0x12545
        using fn_Method_4 = void* (*)(UGCDatabaseModule* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7dea
        using fn_Method_5 = void* (*)(UGCDatabaseModule* __this);
        // Method: laceholderOverlay(void* priority) | Slot: 9541 | Token: 0x590f5c
        using fn_laceholderOverlay = void* (*)(UGCDatabaseModule* __this, void* priority);
        // Method: Method_7() | Slot: 32234 | Token: 0x2ffff
        using fn_Method_7 = void* (*)(UGCDatabaseModule* __this);
        // Method: bum() | Slot: 3944 | Token: 0x81
        using fn_bum = void* (*)(UGCDatabaseModule* __this);
        // Method: eSuppressed() | Slot: 65535 | Token: 0x6036270
        using fn_eSuppressed = void* (*)(UGCDatabaseModule* __this);
        // Method: EJGEBFPICBA() | Slot: 129 | Token: 0xffffffff
        using fn_EJGEBFPICBA = void* (*)(UGCDatabaseModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25202 | Token: 0x21b8b
        using fn_GetExchangeCurrencySubType = void* (*)(UGCDatabaseModule* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCDatabaseModule* __this);
        // Method: Method_13() | Slot: 7053 | Token: 0xc469
        using fn_Method_13 = void* (*)(UGCDatabaseModule* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x7dea
        using fn_Method_14 = void* (*)(UGCDatabaseModule* __this);
    };

    // TypeDefIndex: 34750 | Original: COW.GamePlay.UGCRuntime.EUGCDatabaseOperationType | Token: 0x20087bf
    struct EUGCDatabaseOperationType : Il2Cpp::Object {
        // Fields (5)
        void* value__; // value__ | Token: 0x404150d
        void* None; // None | Token: 0x404150e
        void* GetNormalData; // GetNormalData | Token: 0x404150f
        void* SetNormalData; // SetNormalData | Token: 0x4041510
        void* DeleteNormalData; // DeleteNormalData | Token: 0x4041511
    };

    // TypeDefIndex: 34751 | Original: COW.GamePlay.UGCRuntime.GetUGCDatabaseNormalDataRequest | Token: 0x20087c0
    struct GetUGCDatabaseNormalDataRequest : Il2Cpp::Object {
        // Fields (6)
        void* ReqId; // ReqId | Token: 0x4041512
        void* WorkshopCode; // WorkshopCode | Token: 0x4041513
        void* TableName; // TableName | Token: 0x4041514
        void* AccountId; // AccountId | Token: 0x4041515
        void* Key; // Key | Token: 0x4041516
        void* ColumnIndex; // ColumnIndex | Token: 0x4041517

        // Methods (1)
        // Method: Method_0(void* d) | Slot: 9541 | Token: 0x5690ee
        using fn_Method_0 = void* (*)(GetUGCDatabaseNormalDataRequest* __this, void* d);
    };

    // TypeDefIndex: 34752 | Original: COW.GamePlay.UGCRuntime.SetUGCDatabaseNormalDataRequest | Token: 0x20087c1
    struct SetUGCDatabaseNormalDataRequest : Il2Cpp::Object {
        // Fields (6)
        void* ReqId; // ReqId | Token: 0x4041518
        void* WorkshopCode; // WorkshopCode | Token: 0x4041519
        void* TableName; // TableName | Token: 0x404151a
        void* AccountId; // AccountId | Token: 0x404151b
        void* key; // key | Token: 0x404151c
        void* Value; // Value | Token: 0x404151d

        // Methods (1)
        // Method: Method_0() | Slot: 32234 | Token: 0x52
        using fn_Method_0 = void* (*)(SetUGCDatabaseNormalDataRequest* __this);
    };

    // TypeDefIndex: 34753 | Original: COW.GamePlay.UGCRuntime.DeleteUGCDatabaseNormalDataRequest | Token: 0x20087c2
    struct DeleteUGCDatabaseNormalDataRequest : Il2Cpp::Object {
        // Fields (5)
        void* ReqId; // ReqId | Token: 0x404151e
        void* WorkshopCode; // WorkshopCode | Token: 0x404151f
        void* TableName; // TableName | Token: 0x4041520
        void* AccountId; // AccountId | Token: 0x4041521
        void* Key; // Key | Token: 0x4041522

        // Methods (1)
        // Method: bum() | Slot: 3992 | Token: 0x81
        using fn_bum = void* (*)(DeleteUGCDatabaseNormalDataRequest* __this);
    };

    // TypeDefIndex: 34754 | Original: COW.GamePlay.UGCRuntime.UGCDatabaseOperationRequest | Token: 0x20087c3
    struct UGCDatabaseOperationRequest : Il2Cpp::Object {
        // Fields (5)
        void* ReqId; // ReqId | Token: 0x4041523
        void* IsDone; // IsDone | Token: 0x4041524
        void* OperationType; // OperationType | Token: 0x4041525
        void* ErrorCode; // ErrorCode | Token: 0x4041526
        void* Result; // Result | Token: 0x4041527

        // Methods (7)
        // Method: eSuppressed() | Slot: 65535 | Token: 0x6036278
        using fn_eSuppressed = void* (*)(UGCDatabaseOperationRequest* __this);
        // Method: DHBFDFEPEJG() | Slot: 129 | Token: 0xffffffff
        using fn_DHBFDFEPEJG = void* (*)(UGCDatabaseOperationRequest* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25210 | Token: 0x21b8f
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCDatabaseOperationRequest* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCDatabaseOperationRequest* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x58b7
        using fn_Method_4 = void* (*)(UGCDatabaseOperationRequest* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7dea
        using fn_Method_5 = void* (*)(UGCDatabaseOperationRequest* __this);
        // Method: Method_6(void* priority) | Slot: 9541 | Token: 0x590ff8
        using fn_Method_6 = void* (*)(UGCDatabaseOperationRequest* __this, void* priority);
    };

    // TypeDefIndex: 34755 | Original: COW.GamePlay.UGCRuntime.UGCDatabaseServer | Token: 0x20087c4
    struct UGCDatabaseServer : Il2Cpp::Object {
        // Fields (6)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x4041528
        void* m_WorkshopCode; // m_WorkshopCode | Token: 0x4041529
        void* m_DatabaseProxyMap; // m_DatabaseProxyMap | Token: 0x404152a
        void* CHECK_DATABASE_DIRTY_TIME_MS; // CHECK_DATABASE_DIRTY_TIME_MS | Token: 0x404152b
        void* m_CurrentGameTimeMs; // m_CurrentGameTimeMs | Token: 0x404152c
        void* onGetNormalDataAction; // onGetNormalDataAction | Token: 0x404152d

        // Methods (7)
        // Method: Method_0() | Slot: 32234 | Token: 0xffff
        using fn_Method_0 = void* (*)(UGCDatabaseServer* __this);
        // Method: bum() | Slot: 4112 | Token: 0x81
        using fn_bum = void* (*)(UGCDatabaseServer* __this);
        // Method: eSuppressed() | Slot: 65535 | Token: 0x6036280
        using fn_eSuppressed = void* (*)(UGCDatabaseServer* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCDatabaseServer* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25218 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCDatabaseServer* __this);
        // Method: () | Slot: 65535 | Token: 0x8000000
        using fn_unnamed = void* (*)(UGCDatabaseServer* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0x69c4
        using fn_Method_6 = void* (*)(UGCDatabaseServer* __this);
    };

    // TypeDefIndex: 34759 | Original: COW.GamePlay.UGCRuntime.UGCLocalDatabase | Token: 0x20087c5
    struct UGCLocalDatabase : Il2Cpp::Object {
        // Fields (4)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x404152e
        void* m_WorkshopCode; // m_WorkshopCode | Token: 0x404152f
        void* m_NormalTables; // m_NormalTables | Token: 0x4041530
        void* m_DirtyMap; // m_DirtyMap | Token: 0x4041531

        // Methods (10)
        // Method: Method_0() | Slot: 0 | Token: 0x7dea
        using fn_Method_0 = void* (*)(UGCLocalDatabase* __this);
        // Method: Method_1() | Slot: 27076 | Token: 0x5523fe
        using fn_Method_1 = void* (*)(UGCLocalDatabase* __this);
        // Method: Method_2() | Slot: 32234 | Token: 0xffff
        using fn_Method_2 = void* (*)(UGCLocalDatabase* __this);
        // Method: t() | Slot: 29995 | Token: 0x6
        using fn_t = void* (*)(UGCLocalDatabase* __this);
        // Method: eSuppressed() | Slot: 65535 | Token: 0x6036288
        using fn_eSuppressed = void* (*)(UGCLocalDatabase* __this);
        // Method: <>iFixBaseProxy_GetAttackableRadius() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_GetAttackableRadius = void* (*)(UGCLocalDatabase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25226 | Token: 0x21b95
        using fn_GetExchangeCurrencySubType = void* (*)(UGCLocalDatabase* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCLocalDatabase* __this);
        // Method: Method_8() | Slot: 65535 | Token: 0x69c4
        using fn_Method_8 = void* (*)(UGCLocalDatabase* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x7dea
        using fn_Method_9 = void* (*)(UGCLocalDatabase* __this);
    };

    // TypeDefIndex: 34760 | Original: COW.GamePlay.UGCRuntime.UGCLocalDatabaseCache | Token: 0x20087c9
    struct UGCLocalDatabaseCache : Il2Cpp::Object {
        // Fields (4)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x4041535
        void* m_Dirty; // m_Dirty | Token: 0x4041536
        void* m_WorkshopCode; // m_WorkshopCode | Token: 0x4041537
        void* m_NormalTableDatas; // m_NormalTableDatas | Token: 0x4041538

        // Methods (10)
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCLocalDatabaseCache* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCLocalDatabaseCache* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7dec
        using fn_Method_2 = void* (*)(UGCLocalDatabaseCache* __this);
        // Method: Method_3(void* pos) | Slot: 8434 | Token: 0x5910d9
        using fn_Method_3 = void* (*)(UGCLocalDatabaseCache* __this, void* pos);
        // Method: Method_4() | Slot: 32236 | Token: 0xffff
        using fn_Method_4 = void* (*)(UGCLocalDatabaseCache* __this);
        // Method: g() | Slot: 55008 | Token: 0xc4
        using fn_g = void* (*)(UGCLocalDatabaseCache* __this);
        // Method: uppressed() | Slot: 34 | Token: 0x6036298
        using fn_uppressed = void* (*)(UGCLocalDatabaseCache* __this);
        // Method: GetMaxRepDataCount() | Slot: 196 | Token: 0xffffffff
        using fn_GetMaxRepDataCount = void* (*)(UGCLocalDatabaseCache* __this);
        // Method: dll() | Slot: 25242 | Token: 0x21b9d
        using fn_dll = void* (*)(UGCLocalDatabaseCache* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCLocalDatabaseCache* __this);
    };

    // TypeDefIndex: 34761 | Original: COW.GamePlay.UGCRuntime.UGCLocalDatabaseProxy | Token: 0x20087ca
    struct UGCLocalDatabaseProxy : Il2Cpp::Object {
        // Fields (2)
        void* m_LocalDB; // m_LocalDB | Token: 0x4041539
        void* m_CacheDB; // m_CacheDB | Token: 0x404153a

        // Methods (6)
        // Method: Method_0() | Slot: 7071 | Token: 0x69c4
        using fn_Method_0 = void* (*)(UGCLocalDatabaseProxy* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7dec
        using fn_Method_1 = void* (*)(UGCLocalDatabaseProxy* __this);
        // Method: Method_2(void* priority) | Slot: 9541 | Token: 0x589faf
        using fn_Method_2 = void* (*)(UGCLocalDatabaseProxy* __this, void* priority);
        // Method: Method_3() | Slot: 32236 | Token: 0xffff
        using fn_Method_3 = void* (*)(UGCLocalDatabaseProxy* __this);
        // Method: bum() | Slot: 17669 | Token: 0x81
        using fn_bum = void* (*)(UGCLocalDatabaseProxy* __this);
        // Method: uppressed() | Slot: 18 | Token: 0x60362a0
        using fn_uppressed = void* (*)(UGCLocalDatabaseProxy* __this);
    };

    // TypeDefIndex: 34762 | Original: COW.GamePlay.UGCRuntime.UGCModuleTimeLine | Token: 0x20087cb
    struct UGCModuleTimeLine : Il2Cpp::Object {
        // Fields (5)
        void* m_ugcRuntime; // m_ugcRuntime | Token: 0x404153b
        void* m_UGCTimeLineMap; // m_UGCTimeLineMap | Token: 0x404153c
        void* m_UpdateList; // m_UpdateList | Token: 0x404153d
        void* lastTickGameTime; // lastTickGameTime | Token: 0x404153e
        void* m_HideUI; // m_HideUI | Token: 0x404153f

        // Methods (13)
        // Method: OnRecycle() | Slot: 198 | Token: 0xffffffff
        using fn_OnRecycle = void* (*)(UGCModuleTimeLine* __this);
        // Method: sembly-CSharp.dll() | Slot: 25250 | Token: 0xffffffff
        using fn_sembly_CSharp_dll = void* (*)(UGCModuleTimeLine* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCModuleTimeLine* __this);
        // Method: Method_3() | Slot: 7074 | Token: 0x12545
        using fn_Method_3 = void* (*)(UGCModuleTimeLine* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7dec
        using fn_Method_4 = void* (*)(UGCModuleTimeLine* __this);
        // Method: l(void* priority) | Slot: 9541 | Token: 0x591112
        using fn_l = void* (*)(UGCModuleTimeLine* __this, void* priority);
        // Method: Method_6() | Slot: 32236 | Token: 0x2ffff
        using fn_Method_6 = void* (*)(UGCModuleTimeLine* __this);
        // Method: bum() | Slot: 4442 | Token: 0x81
        using fn_bum = void* (*)(UGCModuleTimeLine* __this);
        // Method: uppressed(void* BCIDOHFCFHH, void* MEHFHONHCAB) | Slot: 65535 | Token: 0x60362a8
        using fn_uppressed = void* (*)(UGCModuleTimeLine* __this, void* BCIDOHFCFHH, void* MEHFHONHCAB);
        // Method: GetProgress() | Slot: 134 | Token: 0xffffffff
        using fn_GetProgress = void* (*)(UGCModuleTimeLine* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25258 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCModuleTimeLine* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCModuleTimeLine* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0xa979
        using fn_Method_12 = void* (*)(UGCModuleTimeLine* __this);
    };

    // TypeDefIndex: 34764 | Original: COW.GamePlay.UGCRuntime.UGCTimeLine | Token: 0x20087cc
    struct UGCTimeLine : Il2Cpp::Object {
        // Fields (8)
        void* m_UGCResource; // m_UGCResource | Token: 0x4041540
        void* m_UGCTimelineData; // m_UGCTimelineData | Token: 0x4041541
        void* m_ugcRuntime; // m_ugcRuntime | Token: 0x4041542
        void* m_ActorLib; // m_ActorLib | Token: 0x4041543
        void* m_Tracks; // m_Tracks | Token: 0x4041544
        void* m_IsPlay; // m_IsPlay | Token: 0x4041545
        void* m_PlayProgress; // m_PlayProgress | Token: 0x4041546
        void* m_LastPlayProgress; // m_LastPlayProgress | Token: 0x4041547

        // Methods (36)
        // Method: Method_0() | Slot: 0 | Token: 0x7dec
        using fn_Method_0 = void* (*)(UGCTimeLine* __this);
        // Method: Method_1(void* priority) | Slot: 9541 | Token: 0x67
        using fn_Method_1 = void* (*)(UGCTimeLine* __this, void* priority);
        // Method: Method_2() | Slot: 32236 | Token: 0xffff
        using fn_Method_2 = void* (*)(UGCTimeLine* __this);
        // Method: bum() | Slot: 37126 | Token: 0x6
        using fn_bum = void* (*)(UGCTimeLine* __this);
        // Method: uppressed() | Slot: 65535 | Token: 0x60362b0
        using fn_uppressed = void* (*)(UGCTimeLine* __this);
        // Method: <>iFixBaseProxy_SyncAction() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_SyncAction = void* (*)(UGCTimeLine* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25266 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCTimeLine* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCTimeLine* __this);
        // Method: Method_8() | Slot: 65535 | Token: 0x12545
        using fn_Method_8 = void* (*)(UGCTimeLine* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x7ded
        using fn_Method_9 = void* (*)(UGCTimeLine* __this);
        // Method: Method_10(void* pos) | Slot: 9541 | Token: 0x5911cf
        using fn_Method_10 = void* (*)(UGCTimeLine* __this, void* pos);
        // Method: Method_11() | Slot: 32237 | Token: 0x1ffff
        using fn_Method_11 = void* (*)(UGCTimeLine* __this);
        // Method: bum() | Slot: 50828 | Token: 0xc4
        using fn_bum = void* (*)(UGCTimeLine* __this);
        // Method: ppressed() | Slot: 65535 | Token: 0x60362b8
        using fn_ppressed = void* (*)(UGCTimeLine* __this);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(UGCTimeLine* __this);
        // Method: `2() | Slot: 25274 | Token: 0xffffffff
        using fn__2 = void* (*)(UGCTimeLine* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCTimeLine* __this);
        // Method: Method_17() | Slot: 65535 | Token: 0xcb28
        using fn_Method_17 = void* (*)(UGCTimeLine* __this);
        // Method: Method_18() | Slot: 0 | Token: 0x7ded
        using fn_Method_18 = void* (*)(UGCTimeLine* __this);
        // Method: Method_19(void* circlePlane) | Slot: 17312 | Token: 0x584a19
        using fn_Method_19 = void* (*)(UGCTimeLine* __this, void* circlePlane);
        // Method: Method_20() | Slot: 32237 | Token: 0x5f
        using fn_Method_20 = void* (*)(UGCTimeLine* __this);
        // Method: _0() | Slot: 23628 | Token: 0xc6
        using fn__0 = void* (*)(UGCTimeLine* __this);
        // Method: ppressed(void* OGDNBBJKNFD, void* EIOKHLKJEEL) | Slot: 61 | Token: 0x60362c0
        using fn_ppressed = void* (*)(UGCTimeLine* __this, void* OGDNBBJKNFD, void* EIOKHLKJEEL);
        // Method: CreateDynamicallyForUGC() | Slot: 198 | Token: 0xffffffff
        using fn_CreateDynamicallyForUGC = void* (*)(UGCTimeLine* __this);
        // Method: Dict() | Slot: 25282 | Token: 0xffffffff
        using fn_Dict = void* (*)(UGCTimeLine* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCTimeLine* __this);
        // Method: Method_26() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_26 = void* (*)(UGCTimeLine* __this);
        // Method: Method_27() | Slot: 0 | Token: 0x7ded
        using fn_Method_27 = void* (*)(UGCTimeLine* __this);
        // Method: Method_28() | Slot: 52008 | Token: 0x58966d
        using fn_Method_28 = void* (*)(UGCTimeLine* __this);
        // Method: Method_29() | Slot: 32237 | Token: 0xffff
        using fn_Method_29 = void* (*)(UGCTimeLine* __this);
        // Method: REPLAYKIT_VIDEO_NAME_LOBBY() | Slot: 30764 | Token: 0x6
        using fn_REPLAYKIT_VIDEO_NAME_LOBBY = void* (*)(UGCTimeLine* __this);
        // Method: ppressed() | Slot: 65535 | Token: 0x60362c8
        using fn_ppressed = void* (*)(UGCTimeLine* __this);
        // Method: <>iFixBaseProxy_OilDrumType() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OilDrumType = void* (*)(UGCTimeLine* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25290 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTimeLine* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCTimeLine* __this);
        // Method: Method_35() | Slot: 7091 | Token: 0x69c4
        using fn_Method_35 = void* (*)(UGCTimeLine* __this);
    };

    // TypeDefIndex: 34765 | Original: COW.GamePlay.UGCRuntime.UGCTimeLineActorLib | Token: 0x20087ce
    struct UGCTimeLineActorLib : Il2Cpp::Object {
        // Fields (4)
        void* m_res; // m_res | Token: 0x404154a
        void* m_ugcRuntime; // m_ugcRuntime | Token: 0x404154b
        void* m_ActorMap; // m_ActorMap | Token: 0x404154c
        void* m_TrackActorCustomMap; // m_TrackActorCustomMap | Token: 0x404154d

        // Methods (11)
        // Method: bum() | Slot: 49151 | Token: 0x86
        using fn_bum = void* (*)(UGCTimeLineActorLib* __this);
        // Method: ressed() | Slot: 65535 | Token: 0x60362d0
        using fn_ressed = void* (*)(UGCTimeLineActorLib* __this);
        // Method: LHNIONMDCBB() | Slot: 129 | Token: 0xffffffff
        using fn_LHNIONMDCBB = void* (*)(UGCTimeLineActorLib* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25298 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTimeLineActorLib* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTimeLineActorLib* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(UGCTimeLineActorLib* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7def
        using fn_Method_6 = void* (*)(UGCTimeLineActorLib* __this);
        // Method: (void* d) | Slot: 9541 | Token: 0x50d6e0
        using fn_unnamed = void* (*)(UGCTimeLineActorLib* __this, void* d);
        // Method: Method_8() | Slot: 32239 | Token: 0x22
        using fn_Method_8 = void* (*)(UGCTimeLineActorLib* __this);
        // Method: Interval() | Slot: 4611 | Token: 0xc4
        using fn_Interval = void* (*)(UGCTimeLineActorLib* __this);
        // Method: ressed(void* GNBOOELAHNP, void* LAHMCKAGGCO) | Slot: 65535 | Token: 0x60362d8
        using fn_ressed = void* (*)(UGCTimeLineActorLib* __this, void* GNBOOELAHNP, void* LAHMCKAGGCO);
    };

    // TypeDefIndex: 34766 | Original: COW.GamePlay.UGCRuntime.UGCTimeLineAlongPathTrack | Token: 0x20087cf
    struct UGCTimeLineAlongPathTrack : Il2Cpp::Object {
        // Fields (10)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x404154e
        void* m_EntityDataStore; // m_EntityDataStore | Token: 0x404154f
        void* m_PlayableModule; // m_PlayableModule | Token: 0x4041550
        void* m_AlongPathEntity; // m_AlongPathEntity | Token: 0x4041551
        void* m_AlongPathPlayable; // m_AlongPathPlayable | Token: 0x4041552
        void* m_Path; // m_Path | Token: 0x4041553
        void* m_Speed; // m_Speed | Token: 0x4041554
        void* m_TangentFacing; // m_TangentFacing | Token: 0x4041555
        void* m_Style; // m_Style | Token: 0x4041556
        void* m_CurIsPlayMode; // m_CurIsPlayMode | Token: 0x4041557

        // Methods (17)
        // Method: OnFixedUpdate() | Slot: 198 | Token: 0xffffffff
        using fn_OnFixedUpdate = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: _service() | Slot: 25306 | Token: 0xffffffff
        using fn__service = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7def
        using fn_Method_4 = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: Method_5() | Slot: 52008 | Token: 0x59123f
        using fn_Method_5 = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: Method_6() | Slot: 32239 | Token: 0xffff
        using fn_Method_6 = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: REPLAYKIT_VIDEO_NAME_LOBBY() | Slot: 4695 | Token: 0x881
        using fn_REPLAYKIT_VIDEO_NAME_LOBBY = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: ressed() | Slot: 65535 | Token: 0x60362e0
        using fn_ressed = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: JPLDMLCNOHJ() | Slot: 129 | Token: 0xffffffff
        using fn_JPLDMLCNOHJ = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25314 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: Method_12() | Slot: 7101 | Token: 0x12545
        using fn_Method_12 = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x7def
        using fn_Method_13 = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: ect(void* priority) | Slot: 9541 | Token: 0x591287
        using fn_ect = void* (*)(UGCTimeLineAlongPathTrack* __this, void* priority);
        // Method: Method_15() | Slot: 32239 | Token: 0x3ffff
        using fn_Method_15 = void* (*)(UGCTimeLineAlongPathTrack* __this);
        // Method: bum() | Slot: 4767 | Token: 0xc6
        using fn_bum = void* (*)(UGCTimeLineAlongPathTrack* __this);
    };

    // TypeDefIndex: 34768 | Original: COW.GamePlay.UGCRuntime.UGCTimeLineAnimationTrack | Token: 0x20087d0
    struct UGCTimeLineAnimationTrack : Il2Cpp::Object {
        // Fields (9)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x4041558
        void* m_EntityDataStore; // m_EntityDataStore | Token: 0x4041559
        void* m_AnimationModule; // m_AnimationModule | Token: 0x404155a
        void* m_AnimationControllerEntity; // m_AnimationControllerEntity | Token: 0x404155b
        void* m_curDynamicClipInfo; // m_curDynamicClipInfo | Token: 0x404155c
        void* m_CurAnimationClipResUID; // m_CurAnimationClipResUID | Token: 0x404155d
        void* m_ClipLoopType; // m_ClipLoopType | Token: 0x404155e
        void* m_CurStatePlayInfo; // m_CurStatePlayInfo | Token: 0x404155f
        void* m_CurIsPlayMode; // m_CurIsPlayMode | Token: 0x4041560

        // Methods (26)
        // Method: ressed(void* JGAGOAJLMIN) | Slot: 65535 | Token: 0x60362e8
        using fn_ressed = void* (*)(UGCTimeLineAnimationTrack* __this, void* JGAGOAJLMIN);
        // Method: CJDLNHIIGHA() | Slot: 129 | Token: 0xffffffff
        using fn_CJDLNHIIGHA = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: _WAIT() | Slot: 25322 | Token: 0x21bc8
        using fn__WAIT = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7def
        using fn_Method_5 = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Method_6(void* priority) | Slot: 9541 | Token: 0x5912f3
        using fn_Method_6 = void* (*)(UGCTimeLineAnimationTrack* __this, void* priority);
        // Method: Method_7() | Slot: 32239 | Token: 0xffff
        using fn_Method_7 = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: t() | Slot: 4875 | Token: 0x81
        using fn_t = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: ressed(void* CGGPBJKCDEG, void* IGDHIDGLOKG) | Slot: 65535 | Token: 0x60362f0
        using fn_ressed = void* (*)(UGCTimeLineAnimationTrack* __this, void* CGGPBJKCDEG, void* IGDHIDGLOKG);
        // Method: NHJDNONFIAM() | Slot: 129 | Token: 0xffffffff
        using fn_NHJDNONFIAM = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25330 | Token: 0x21bce
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x7def
        using fn_Method_14 = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Method_15(void* priority) | Slot: 9541 | Token: 0x59135f
        using fn_Method_15 = void* (*)(UGCTimeLineAnimationTrack* __this, void* priority);
        // Method: Method_16() | Slot: 32239 | Token: 0x3ffff
        using fn_Method_16 = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: ToLocal() | Slot: 4990 | Token: 0x86
        using fn_ToLocal = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: ressed() | Slot: 65535 | Token: 0x60362f8
        using fn_ressed = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: KBGGBDMJLBJ() | Slot: 129 | Token: 0xffffffff
        using fn_KBGGBDMJLBJ = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: _WAIT() | Slot: 25338 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Method_22() | Slot: 7126 | Token: 0x12545
        using fn_Method_22 = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x7def
        using fn_Method_23 = void* (*)(UGCTimeLineAnimationTrack* __this);
        // Method: Method_24(void* priority) | Slot: 9541 | Token: 0x5882ed
        using fn_Method_24 = void* (*)(UGCTimeLineAnimationTrack* __this, void* priority);
        // Method: Method_25() | Slot: 32239 | Token: 0x1ffff
        using fn_Method_25 = void* (*)(UGCTimeLineAnimationTrack* __this);
    };

    // TypeDefIndex: 34770 | Original: COW.GamePlay.UGCRuntime.UGCTimeLineAudioTrack | Token: 0x20087d2
    struct UGCTimeLineAudioTrack : Il2Cpp::Object {
        // Fields (6)
        void* m_Cur2DEngineResource; // m_Cur2DEngineResource | Token: 0x4041563
        void* m_AudioResource; // m_AudioResource | Token: 0x4041564
        void* m_Speed; // m_Speed | Token: 0x4041565
        void* m_Volume; // m_Volume | Token: 0x4041566
        void* m_LoopType; // m_LoopType | Token: 0x4041567
        void* m_PlayAudioIng; // m_PlayAudioIng | Token: 0x4041568

        // Methods (22)
        // Method: Recycle() | Slot: 198 | Token: 0xffffffff
        using fn_Recycle = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: () | Slot: 25346 | Token: 0x21bd8
        using fn_unnamed = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7def
        using fn_Method_4 = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: p(void* priority) | Slot: 9541 | Token: 0x5913fe
        using fn_p = void* (*)(UGCTimeLineAudioTrack* __this, void* priority);
        // Method: Method_6() | Slot: 32239 | Token: 0xffff
        using fn_Method_6 = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: bum() | Slot: 5142 | Token: 0x81
        using fn_bum = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: ressed() | Slot: 65535 | Token: 0x6036308
        using fn_ressed = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: OGGBDBJMNAL() | Slot: 129 | Token: 0xffffffff
        using fn_OGGBDBJMNAL = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25354 | Token: 0x21bdc
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0x12545
        using fn_Method_12 = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x7def
        using fn_Method_13 = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: Method_14(void* priority) | Slot: 9541 | Token: 0x591452
        using fn_Method_14 = void* (*)(UGCTimeLineAudioTrack* __this, void* priority);
        // Method: Method_15() | Slot: 32239 | Token: 0xffff
        using fn_Method_15 = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: bum() | Slot: 5226 | Token: 0x81
        using fn_bum = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: ressed() | Slot: 65535 | Token: 0x6036310
        using fn_ressed = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: DoAction() | Slot: 198 | Token: 0xffffffff
        using fn_DoAction = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: changeCurrencyType() | Slot: 25362 | Token: 0xffffffff
        using fn_changeCurrencyType = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTimeLineAudioTrack* __this);
        // Method: Method_21() | Slot: 65535 | Token: 0x12545
        using fn_Method_21 = void* (*)(UGCTimeLineAudioTrack* __this);
    };

    // TypeDefIndex: 34771 | Original: COW.GamePlay.UGCRuntime.IUGCTimelineTrack | Token: 0x20087d4
    struct IUGCTimelineTrack : Il2Cpp::Object {

        // Methods (21)
        // Method: Method_0() | Slot: 32239 | Token: 0xffff
        using fn_Method_0 = void* (*)(IUGCTimelineTrack* __this);
        // Method: Interval() | Slot: 22354 | Token: 0x6
        using fn_Interval = void* (*)(IUGCTimelineTrack* __this);
        // Method: ressed(void* P0, void* P1) | Slot: 65535 | Token: 0x6036318
        using fn_ressed = void* (*)(IUGCTimelineTrack* __this, void* P0, void* P1);
        // Method: <>iFixBaseProxy_SyncAction() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_SyncAction = void* (*)(IUGCTimelineTrack* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25370 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(IUGCTimelineTrack* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IUGCTimelineTrack* __this);
        // Method: Method_6() | Slot: 65535 | Token: 0x69c4
        using fn_Method_6 = void* (*)(IUGCTimelineTrack* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7def
        using fn_Method_7 = void* (*)(IUGCTimelineTrack* __this);
        // Method: eMipMap() | Slot: 54255 | Token: 0x4129
        using fn_eMipMap = void* (*)(IUGCTimelineTrack* __this);
        // Method: Method_9() | Slot: 32240 | Token: 0x44
        using fn_Method_9 = void* (*)(IUGCTimelineTrack* __this);
        // Method: bum() | Slot: 17659 | Token: 0x86
        using fn_bum = void* (*)(IUGCTimelineTrack* __this);
        // Method: essed() | Slot: 22 | Token: 0x6036320
        using fn_essed = void* (*)(IUGCTimelineTrack* __this);
        // Method: Recycle() | Slot: 198 | Token: 0xffffffff
        using fn_Recycle = void* (*)(IUGCTimelineTrack* __this);
        // Method: () | Slot: 25378 | Token: 0xffffffff
        using fn_unnamed = void* (*)(IUGCTimelineTrack* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(IUGCTimelineTrack* __this);
        // Method: Method_15() | Slot: 65535 | Token: 0x12545
        using fn_Method_15 = void* (*)(IUGCTimelineTrack* __this);
        // Method: Method_16() | Slot: 0 | Token: 0x7df0
        using fn_Method_16 = void* (*)(IUGCTimelineTrack* __this);
        // Method: Map(void* priority) | Slot: 9541 | Token: 0x5915bd
        using fn_Map = void* (*)(IUGCTimelineTrack* __this, void* priority);
        // Method: Method_18() | Slot: 32240 | Token: 0xffff
        using fn_Method_18 = void* (*)(IUGCTimelineTrack* __this);
        // Method: bum() | Slot: 103 | Token: 0xc6
        using fn_bum = void* (*)(IUGCTimelineTrack* __this);
        // Method: essed() | Slot: 65535 | Token: 0x6036328
        using fn_essed = void* (*)(IUGCTimelineTrack* __this);
    };

    // TypeDefIndex: 34772 | Original: COW.GamePlay.UGCRuntime.TimelineClipLoopType | Token: 0x20087d5
    struct TimelineClipLoopType : Il2Cpp::Object {
        // Fields (6)
        void* value__; // value__ | Token: 0x404156c
        void* None; // None | Token: 0x404156d
        void* Once; // Once | Token: 0x404156e
        void* Hold; // Hold | Token: 0x404156f
        void* Loop; // Loop | Token: 0x4041570
        void* LoopForever; // LoopForever | Token: 0x4041571
    };

    // TypeDefIndex: 34773 | Original: COW.GamePlay.UGCRuntime.IUGCTimeLine | Token: 0x20087d6
    struct IUGCTimeLine : Il2Cpp::Object {

        // Methods (11)
        // Method: <>iFixBaseProxy_OnRecycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnRecycle = void* (*)(IUGCTimeLine* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25386 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCTimeLine* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(IUGCTimeLine* __this);
        // Method: Method_3() | Slot: 7150 | Token: 0x12545
        using fn_Method_3 = void* (*)(IUGCTimeLine* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7df2
        using fn_Method_4 = void* (*)(IUGCTimeLine* __this);
        // Method: Method_5(void* d) | Slot: 9541 | Token: 0x452c
        using fn_Method_5 = void* (*)(IUGCTimeLine* __this, void* d);
        // Method: Method_6() | Slot: 32242 | Token: 0x14
        using fn_Method_6 = void* (*)(IUGCTimeLine* __this);
        // Method: bum() | Slot: 19398 | Token: 0xc4
        using fn_bum = void* (*)(IUGCTimeLine* __this);
        // Method: sed() | Slot: 65535 | Token: 0x6036330
        using fn_sed = void* (*)(IUGCTimeLine* __this);
        // Method: OnLocalPlayerExitTrigger() | Slot: 134 | Token: 0xffffffff
        using fn_OnLocalPlayerExitTrigger = void* (*)(IUGCTimeLine* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25394 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCTimeLine* __this);
    };

    // TypeDefIndex: 34774 | Original: COW.GamePlay.UGCRuntime.UGCTimelineEntityTrack | Token: 0x20087d7
    struct UGCTimelineEntityTrack : Il2Cpp::Object {
        // Fields (1)
        void* m_ActorSlotName; // m_ActorSlotName | Token: 0x4041572

        // Methods (5)
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCTimelineEntityTrack* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCTimelineEntityTrack* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7df1
        using fn_Method_2 = void* (*)(UGCTimelineEntityTrack* __this);
        // Method: Method_3(void* strAPPSecret) | Slot: 9541 | Token: 0x5915f1
        using fn_Method_3 = void* (*)(UGCTimelineEntityTrack* __this, void* strAPPSecret);
        // Method: Method_4() | Slot: 32241 | Token: 0xffff
        using fn_Method_4 = void* (*)(UGCTimelineEntityTrack* __this);
    };

    // TypeDefIndex: 34776 | Original: COW.GamePlay.UGCRuntime.UGCTimeLineEvetTrack | Token: 0x20087d8
    struct UGCTimeLineEvetTrack : Il2Cpp::Object {
        // Fields (1)
        void* m_TraceActorUGCEntityID; // m_TraceActorUGCEntityID | Token: 0x4041573

        // Methods (13)
        // Method: bum() | Slot: 16681 | Token: 0x83
        using fn_bum = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: d() | Slot: 68 | Token: 0x6036338
        using fn_d = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: SetData() | Slot: 134 | Token: 0xffffffff
        using fn_SetData = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: _WAIT() | Slot: 25402 | Token: 0x21bf1
        using fn__WAIT = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x69c4
        using fn_Method_5 = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7df4
        using fn_Method_6 = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: Method_7(void* priority) | Slot: 9541 | Token: 0x67
        using fn_Method_7 = void* (*)(UGCTimeLineEvetTrack* __this, void* priority);
        // Method: Method_8() | Slot: 32244 | Token: 0xffff
        using fn_Method_8 = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: bum() | Slot: 22699 | Token: 0x6
        using fn_bum = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: d() | Slot: 65535 | Token: 0x6036340
        using fn_d = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: <>iFixBaseProxy_Recycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Recycle = void* (*)(UGCTimeLineEvetTrack* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25410 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTimeLineEvetTrack* __this);
    };

    // TypeDefIndex: 34777 | Original: COW.GamePlay.UGCRuntime.UGCTimeLineNpcTrack | Token: 0x20087da
    struct UGCTimeLineNpcTrack : Il2Cpp::Object {

        // Methods (1)
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCTimeLineNpcTrack* __this);
    };

    // TypeDefIndex: 34778 | Original: COW.GamePlay.UGCRuntime.UGCTimeLinePropTrack | Token: 0x20087db
    struct UGCTimeLinePropTrack : Il2Cpp::Object {
        // Fields (4)
        void* m_PropID; // m_PropID | Token: 0x4041577
        void* m_OwnerEntityID; // m_OwnerEntityID | Token: 0x4041578
        void* m_PropType; // m_PropType | Token: 0x4041579
        void* m_UGCSimpleValue; // m_UGCSimpleValue | Token: 0x404157a

        // Methods (16)
        // Method: Method_0() | Slot: 7155 | Token: 0x12545
        using fn_Method_0 = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7df5
        using fn_Method_1 = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: eRenderTexturePool(void* priority) | Slot: 9541 | Token: 0x59165c
        using fn_eRenderTexturePool = void* (*)(UGCTimeLinePropTrack* __this, void* priority);
        // Method: Method_3() | Slot: 32245 | Token: 0xffff
        using fn_Method_3 = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: bum() | Slot: 23937 | Token: 0x81
        using fn_bum = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: (void* GGAOIPIHOBP, void* BBPCHCNOECP, void* HACIJIFIDKM) | Slot: 65535 | Token: 0x6036348
        using fn_unnamed = void* (*)(UGCTimeLinePropTrack* __this, void* GGAOIPIHOBP, void* BBPCHCNOECP, void* HACIJIFIDKM);
        // Method: OOAHEMMFOKD() | Slot: 129 | Token: 0xffffffff
        using fn_OOAHEMMFOKD = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25418 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x12545
        using fn_Method_9 = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x7df6
        using fn_Method_10 = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: Method_11(void* pos) | Slot: 8434 | Token: 0x5916e0
        using fn_Method_11 = void* (*)(UGCTimeLinePropTrack* __this, void* pos);
        // Method: Method_12() | Slot: 32246 | Token: 0xffff
        using fn_Method_12 = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: shEffect() | Slot: 5874 | Token: 0x886
        using fn_shEffect = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: currentPreset() | Slot: 65535 | Token: 0x6036350
        using fn_currentPreset = void* (*)(UGCTimeLinePropTrack* __this);
        // Method: get_WorkingProgressStartTime() | Slot: 2182 | Token: 0xffffffff
        using fn_get_WorkingProgressStartTime = void* (*)(UGCTimeLinePropTrack* __this);
    };

    // TypeDefIndex: 34779 | Original: COW.GamePlay.UGCRuntime.UGCTimeLineSwitchCameraTrack | Token: 0x20087dc
    struct UGCTimeLineSwitchCameraTrack : Il2Cpp::Object {
        // Fields (2)
        void* m_CameraEntity; // m_CameraEntity | Token: 0x404157b
        void* m_DefaultCameraEntity; // m_DefaultCameraEntity | Token: 0x404157c

        // Methods (15)
        // Method: GetExchangeCurrencySubType() | Slot: 25426 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_2 = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7df6
        using fn_Method_3 = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: Method_4(void* circlePlane) | Slot: 9541 | Token: 0x44fb
        using fn_Method_4 = void* (*)(UGCTimeLineSwitchCameraTrack* __this, void* circlePlane);
        // Method: Method_5() | Slot: 32246 | Token: 0x16
        using fn_Method_5 = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: t() | Slot: 17683 | Token: 0xc6
        using fn_t = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: currentPreset(void* DJAPBCKDFKA) | Slot: 73 | Token: 0x6036358
        using fn_currentPreset = void* (*)(UGCTimeLineSwitchCameraTrack* __this, void* DJAPBCKDFKA);
        // Method: DoAction() | Slot: 198 | Token: 0xffffffff
        using fn_DoAction = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: changeCurrencyType() | Slot: 25434 | Token: 0xffffffff
        using fn_changeCurrencyType = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: Method_11() | Slot: 65535 | Token: 0xa52f
        using fn_Method_11 = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x7df6
        using fn_Method_12 = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
        // Method: Method_13(void* d) | Slot: 9541 | Token: 0x583629
        using fn_Method_13 = void* (*)(UGCTimeLineSwitchCameraTrack* __this, void* d);
        // Method: Method_14() | Slot: 32246 | Token: 0x2ffff
        using fn_Method_14 = void* (*)(UGCTimeLineSwitchCameraTrack* __this);
    };

    // TypeDefIndex: 34780 | Original: COW.GamePlay.UGCRuntime.UGCTimeLineTrackBase | Token: 0x20087dd
    struct UGCTimeLineTrackBase : Il2Cpp::Object {
        // Fields (11)
        void* m_TimeLine; // m_TimeLine | Token: 0x404157d
        void* m_Res; // m_Res | Token: 0x404157e
        void* m_TrackType; // m_TrackType | Token: 0x404157f
        void* m_UpdateOrder; // m_UpdateOrder | Token: 0x4041580
        void* m_TrackId; // m_TrackId | Token: 0x4041581
        void* m_ParentTrack; // m_ParentTrack | Token: 0x4041582
        void* m_ChildTracks; // m_ChildTracks | Token: 0x4041583
        void* m_LastEnterKeyFrameIndex; // m_LastEnterKeyFrameIndex | Token: 0x4041584
        void* m_IsActive; // m_IsActive | Token: 0x4041585
        void* m_CurActiveKeyFrame; // m_CurActiveKeyFrame | Token: 0x4041586
        void* m_IsDisable; // m_IsDisable | Token: 0x4041587

        // Methods (28)
        // Method: bum() | Slot: 5963 | Token: 0x81
        using fn_bum = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: currentPreset(void* OJEPOBEENEK, void* EIOKHLKJEEL) | Slot: 65535 | Token: 0x6036360
        using fn_currentPreset = void* (*)(UGCTimeLineTrackBase* __this, void* OJEPOBEENEK, void* EIOKHLKJEEL);
        // Method: AJFANJAPIOO() | Slot: 129 | Token: 0xffffffff
        using fn_AJFANJAPIOO = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: _WAIT() | Slot: 25442 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: t() | Slot: 65535 | Token: 0x8000000
        using fn_t = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x69c4
        using fn_Method_5 = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7df6
        using fn_Method_6 = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Method_7(void* object) | Slot: 9110 | Token: 0x53da3b
        using fn_Method_7 = void* (*)(UGCTimeLineTrackBase* __this, void* object);
        // Method: Method_8() | Slot: 32246 | Token: 0x60
        using fn_Method_8 = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Data() | Slot: 56014 | Token: 0x1e6
        using fn_Data = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: currentPreset() | Slot: 98 | Token: 0x6036368
        using fn_currentPreset = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: set_LockedAimingCollider() | Slot: 2534 | Token: 0xffffffff
        using fn_set_LockedAimingCollider = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: IVITYEXCHANGE() | Slot: 25450 | Token: 0xffffffff
        using fn_IVITYEXCHANGE = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: t() | Slot: 65535 | Token: 0x8000000
        using fn_t = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Method_14() | Slot: 7174 | Token: 0x69c4
        using fn_Method_14 = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x7df6
        using fn_Method_15 = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Method_16() | Slot: 27076 | Token: 0x5374e5
        using fn_Method_16 = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Method_17() | Slot: 32246 | Token: 0x68
        using fn_Method_17 = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: t() | Slot: 55964 | Token: 0x1e6
        using fn_t = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: currentPreset() | Slot: 106 | Token: 0x6036370
        using fn_currentPreset = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: GetAttackableID() | Slot: 486 | Token: 0xffffffff
        using fn_GetAttackableID = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: r() | Slot: 25458 | Token: 0xffffffff
        using fn_r = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: t() | Slot: 65535 | Token: 0x8000000
        using fn_t = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Method_23() | Slot: 7180 | Token: 0x12545
        using fn_Method_23 = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Method_24() | Slot: 0 | Token: 0x7df6
        using fn_Method_24 = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: Method_25(void* priority) | Slot: 9541 | Token: 0x591763
        using fn_Method_25 = void* (*)(UGCTimeLineTrackBase* __this, void* priority);
        // Method: Method_26() | Slot: 32246 | Token: 0x1ffff
        using fn_Method_26 = void* (*)(UGCTimeLineTrackBase* __this);
        // Method: bum() | Slot: 6027 | Token: 0x81
        using fn_bum = void* (*)(UGCTimeLineTrackBase* __this);
    };

    // TypeDefIndex: 34781 | Original: COW.GamePlay.UGCRuntime.IUGCPhase | Token: 0x20087de
    struct IUGCPhase : Il2Cpp::Object {

        // Methods (6)
        // Method: currentPreset(void* CBCAJJJCKLH) | Slot: 65535 | Token: 0x6036378
        using fn_currentPreset = void* (*)(IUGCPhase* __this, void* CBCAJJJCKLH);
        // Method: IsInteractionAllowed() | Slot: 134 | Token: 0xffffffff
        using fn_IsInteractionAllowed = void* (*)(IUGCPhase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25466 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IUGCPhase* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(IUGCPhase* __this);
        // Method: Method_4() | Slot: 7185 | Token: 0x12545
        using fn_Method_4 = void* (*)(IUGCPhase* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7df6
        using fn_Method_5 = void* (*)(IUGCPhase* __this);
    };

    // TypeDefIndex: 34782 | Original: COW.GamePlay.UGCRuntime.IOnRoundStartEventHandler | Token: 0x20087df
    struct IOnRoundStartEventHandler : Il2Cpp::Object {

        // Methods (1)
        // Method: caleFactor(void* priority) | Slot: 9541 | Token: 0x5917f0
        using fn_caleFactor = void* (*)(IOnRoundStartEventHandler* __this, void* priority);
    };

    // TypeDefIndex: 34783 | Original: COW.GamePlay.UGCRuntime.IOnRoundEndEventHandler | Token: 0x20087e0
    struct IOnRoundEndEventHandler : Il2Cpp::Object {

        // Methods (1)
        // Method: Method_0() | Slot: 32246 | Token: 0xffff
        using fn_Method_0 = void* (*)(IOnRoundEndEventHandler* __this);
    };

    // TypeDefIndex: 34784 | Original: COW.GamePlay.UGCRuntime.IOnPhaseStartEventHandler | Token: 0x20087e1
    struct IOnPhaseStartEventHandler : Il2Cpp::Object {

        // Methods (1)
        // Method: bum() | Slot: 6164 | Token: 0x81
        using fn_bum = void* (*)(IOnPhaseStartEventHandler* __this);
    };

    // TypeDefIndex: 34785 | Original: COW.GamePlay.UGCRuntime.IOnPhaseEndEventHandler | Token: 0x20087e2
    struct IOnPhaseEndEventHandler : Il2Cpp::Object {

        // Methods (1)
        // Method: currentPreset(void* OJKJPCCJLLE) | Slot: 65535 | Token: 0x6036380
        using fn_currentPreset = void* (*)(IOnPhaseEndEventHandler* __this, void* OJKJPCCJLLE);
    };

    // TypeDefIndex: 34786 | Original: COW.GamePlay.UGCRuntime.IOnTimeoutEventHandler | Token: 0x20087e3
    struct IOnTimeoutEventHandler : Il2Cpp::Object {

        // Methods (1)
        // Method: NBCPAGOFLIL() | Slot: 129 | Token: 0xffffffff
        using fn_NBCPAGOFLIL = void* (*)(IOnTimeoutEventHandler* __this);
    };

    // TypeDefIndex: 34787 | Original: COW.GamePlay.UGCRuntime.IUGCWorkflowModule | Token: 0x20087e4
    struct IUGCWorkflowModule : Il2Cpp::Object {

        // Methods (12)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25474 | Token: 0x21c16
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(IUGCWorkflowModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(IUGCWorkflowModule* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x12545
        using fn_Method_2 = void* (*)(IUGCWorkflowModule* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7df6
        using fn_Method_3 = void* (*)(IUGCWorkflowModule* __this);
        // Method: actor(void* priority) | Slot: 9541 | Token: 0x591874
        using fn_actor = void* (*)(IUGCWorkflowModule* __this, void* priority);
        // Method: Method_5() | Slot: 32246 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(IUGCWorkflowModule* __this);
        // Method: bum() | Slot: 42295 | Token: 0x81
        using fn_bum = void* (*)(IUGCWorkflowModule* __this);
        // Method: currentPreset() | Slot: 65535 | Token: 0x6036388
        using fn_currentPreset = void* (*)(IUGCWorkflowModule* __this);
        // Method: OICDMLGPIPN() | Slot: 129 | Token: 0xffffffff
        using fn_OICDMLGPIPN = void* (*)(IUGCWorkflowModule* __this);
        // Method: _WAIT() | Slot: 25482 | Token: 0x21c1c
        using fn__WAIT = void* (*)(IUGCWorkflowModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(IUGCWorkflowModule* __this);
        // Method: Method_11() | Slot: 65535 | Token: 0x12545
        using fn_Method_11 = void* (*)(IUGCWorkflowModule* __this);
    };

    // TypeDefIndex: 34788 | Original: COW.GamePlay.UGCRuntime.UGCBasePhase | Token: 0x20087e5
    struct UGCBasePhase : Il2Cpp::Object {
        // Fields (6)
        void* m_EntityType; // m_EntityType | Token: 0x4041588
        void* m_EntityID; // m_EntityID | Token: 0x4041589
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x404158a
        void* m_LogicEntity; // m_LogicEntity | Token: 0x404158b
        void* m_PhaseIndex; // m_PhaseIndex | Token: 0x404158c
        void* m_OnTickEvent; // m_OnTickEvent | Token: 0x404158d

        // Methods (12)
        // Method: Method_0() | Slot: 0 | Token: 0x7df6
        using fn_Method_0 = void* (*)(UGCBasePhase* __this);
        // Method: Method_1(void* priority) | Slot: 9541 | Token: 0x59188c
        using fn_Method_1 = void* (*)(UGCBasePhase* __this, void* priority);
        // Method: Method_2() | Slot: 32246 | Token: 0xffff
        using fn_Method_2 = void* (*)(UGCBasePhase* __this);
        // Method: bum() | Slot: 6308 | Token: 0x81
        using fn_bum = void* (*)(UGCBasePhase* __this);
        // Method: currentPreset() | Slot: 65535 | Token: 0x6036390
        using fn_currentPreset = void* (*)(UGCBasePhase* __this);
        // Method: NFKFIFCFAHE() | Slot: 129 | Token: 0xffffffff
        using fn_NFKFIFCFAHE = void* (*)(UGCBasePhase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25490 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCBasePhase* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCBasePhase* __this);
        // Method: Method_8() | Slot: 65535 | Token: 0x12545
        using fn_Method_8 = void* (*)(UGCBasePhase* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x7df6
        using fn_Method_9 = void* (*)(UGCBasePhase* __this);
        // Method: NormalSpecTexScale(void* priority) | Slot: 9541 | Token: 0x5918f8
        using fn_NormalSpecTexScale = void* (*)(UGCBasePhase* __this, void* priority);
        // Method: Method_11() | Slot: 32246 | Token: 0xffff
        using fn_Method_11 = void* (*)(UGCBasePhase* __this);
    };

    // TypeDefIndex: 34789 | Original: COW.GamePlay.UGCRuntime.UGCPhase | Token: 0x20087e6
    struct UGCPhase : Il2Cpp::Object {
        // Fields (6)
        void* m_StartTimeMs; // m_StartTimeMs | Token: 0x404158e
        void* m_DurationMs; // m_DurationMs | Token: 0x404158f
        void* m_TimeoutPhaseIndex; // m_TimeoutPhaseIndex | Token: 0x4041590
        void* m_OnStartPhaseHandlers; // m_OnStartPhaseHandlers | Token: 0x4041591
        void* m_OnEndPhaseHandlers; // m_OnEndPhaseHandlers | Token: 0x4041592
        void* m_OnTimeoutHandlers; // m_OnTimeoutHandlers | Token: 0x4041593

        // Methods (15)
        // Method: bum() | Slot: 6416 | Token: 0x81
        using fn_bum = void* (*)(UGCPhase* __this);
        // Method: currentPreset() | Slot: 65535 | Token: 0x6036398
        using fn_currentPreset = void* (*)(UGCPhase* __this);
        // Method: ENCIIKLEACM() | Slot: 129 | Token: 0xffffffff
        using fn_ENCIIKLEACM = void* (*)(UGCPhase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25498 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPhase* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCPhase* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(UGCPhase* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7df6
        using fn_Method_6 = void* (*)(UGCPhase* __this);
        // Method: Method_7(void* strAPPSecret) | Slot: 9541 | Token: 0x49aa
        using fn_Method_7 = void* (*)(UGCPhase* __this, void* strAPPSecret);
        // Method: Method_8() | Slot: 32246 | Token: 0xffff
        using fn_Method_8 = void* (*)(UGCPhase* __this);
        // Method: allAttributeConfig() | Slot: 16131 | Token: 0x1e1
        using fn_allAttributeConfig = void* (*)(UGCPhase* __this);
        // Method: currentPreset() | Slot: 65535 | Token: 0x60363a0
        using fn_currentPreset = void* (*)(UGCPhase* __this);
        // Method: <>iFixBaseProxy_ReUse() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_ReUse = void* (*)(UGCPhase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25506 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPhase* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCPhase* __this);
        // Method: Method_14() | Slot: 7203 | Token: 0x12545
        using fn_Method_14 = void* (*)(UGCPhase* __this);
    };

    // TypeDefIndex: 34790 | Original: COW.GamePlay.UGCRuntime.UGCRoundPhase | Token: 0x20087e7
    struct UGCRoundPhase : Il2Cpp::Object {
        // Fields (7)
        void* m_NormalPhaseIndex; // m_NormalPhaseIndex | Token: 0x4041594
        void* m_OverflowPhaseIndex; // m_OverflowPhaseIndex | Token: 0x4041595
        void* m_RoundNumMax; // m_RoundNumMax | Token: 0x4041596
        void* m_CurRoundCount; // m_CurRoundCount | Token: 0x4041597
        void* m_ForceDelete; // m_ForceDelete | Token: 0x4041598
        void* m_OnRoundStartHandlers; // m_OnRoundStartHandlers | Token: 0x4041599
        void* m_OnRoundEndHandlers; // m_OnRoundEndHandlers | Token: 0x404159a

        // Methods (12)
        // Method: Method_0() | Slot: 0 | Token: 0x7df6
        using fn_Method_0 = void* (*)(UGCRoundPhase* __this);
        // Method: alSpecTexScale(void* cam) | Slot: 9541 | Token: 0x569142
        using fn_alSpecTexScale = void* (*)(UGCRoundPhase* __this, void* cam);
        // Method: Method_2() | Slot: 32246 | Token: 0xffff
        using fn_Method_2 = void* (*)(UGCRoundPhase* __this);
        // Method: bum() | Slot: 37126 | Token: 0x6
        using fn_bum = void* (*)(UGCRoundPhase* __this);
        // Method: currentPreset() | Slot: 65535 | Token: 0x60363a8
        using fn_currentPreset = void* (*)(UGCRoundPhase* __this);
        // Method: <>iFixBaseProxy_OnUserDefineReplicationInfo() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnUserDefineReplicationInfo = void* (*)(UGCRoundPhase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25514 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCRoundPhase* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCRoundPhase* __this);
        // Method: Method_8() | Slot: 65535 | Token: 0x12545
        using fn_Method_8 = void* (*)(UGCRoundPhase* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x7dfa
        using fn_Method_9 = void* (*)(UGCRoundPhase* __this);
        // Method: Method_10(void* priority) | Slot: 9541 | Token: 0x584be0
        using fn_Method_10 = void* (*)(UGCRoundPhase* __this, void* priority);
        // Method: Method_11() | Slot: 32250 | Token: 0xffff
        using fn_Method_11 = void* (*)(UGCRoundPhase* __this);
    };

    // TypeDefIndex: 34791 | Original: COW.GamePlay.UGCRuntime.UGCWorkflowFSM | Token: 0x20087e8
    struct UGCWorkflowFSM : Il2Cpp::Object {
        // Fields (12)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x404159b
        void* m_PhaseMap; // m_PhaseMap | Token: 0x404159c
        void* m_CurPhase; // m_CurPhase | Token: 0x404159d
        void* m_FirstPhaseIndex; // m_FirstPhaseIndex | Token: 0x404159e
        void* m_IsStarted; // m_IsStarted | Token: 0x404159f
        void* m_NextPhaseFlag; // m_NextPhaseFlag | Token: 0x40415a0
        void* m_EndPhaseFlag; // m_EndPhaseFlag | Token: 0x40415a1
        void* m_TryNextPhaseCmdFlag; // m_TryNextPhaseCmdFlag | Token: 0x40415a2
        void* m_OnRoundStartEventHandlers; // m_OnRoundStartEventHandlers | Token: 0x40415a3
        void* m_OnRoundEndEventHandlers; // m_OnRoundEndEventHandlers | Token: 0x40415a4
        void* m_OnPhaseStartEventHandlers; // m_OnPhaseStartEventHandlers | Token: 0x40415a5
        void* m_OnPhaseEndEventHandlers; // m_OnPhaseEndEventHandlers | Token: 0x40415a6

        // Methods (25)
        // Method: bum() | Slot: 6837 | Token: 0x81
        using fn_bum = void* (*)(UGCWorkflowFSM* __this);
        // Method: entPreset(void* JCONDDPFBKK) | Slot: 65535 | Token: 0x60363b0
        using fn_entPreset = void* (*)(UGCWorkflowFSM* __this, void* JCONDDPFBKK);
        // Method: NKJHKLLAHGE() | Slot: 129 | Token: 0xffffffff
        using fn_NKJHKLLAHGE = void* (*)(UGCWorkflowFSM* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25522 | Token: 0x21c28
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCWorkflowFSM* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCWorkflowFSM* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(UGCWorkflowFSM* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7dfa
        using fn_Method_6 = void* (*)(UGCWorkflowFSM* __this);
        // Method: Method_7(void* cam) | Slot: 9541 | Token: 0x67
        using fn_Method_7 = void* (*)(UGCWorkflowFSM* __this, void* cam);
        // Method: Method_8() | Slot: 32249 | Token: 0xffff
        using fn_Method_8 = void* (*)(UGCWorkflowFSM* __this);
        // Method: bum() | Slot: 5629 | Token: 0x83
        using fn_bum = void* (*)(UGCWorkflowFSM* __this);
        // Method: rentPreset() | Slot: 65535 | Token: 0x60363b8
        using fn_rentPreset = void* (*)(UGCWorkflowFSM* __this);
        // Method: OnAwake() | Slot: 196 | Token: 0xffffffff
        using fn_OnAwake = void* (*)(UGCWorkflowFSM* __this);
        // Method: () | Slot: 25530 | Token: 0xffffffff
        using fn_unnamed = void* (*)(UGCWorkflowFSM* __this);
        // Method: BuffFactor() | Slot: 65535 | Token: 0x8000000
        using fn_BuffFactor = void* (*)(UGCWorkflowFSM* __this);
        // Method: Method_14() | Slot: 65535 | Token: 0x124f6
        using fn_Method_14 = void* (*)(UGCWorkflowFSM* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x7e00
        using fn_Method_15 = void* (*)(UGCWorkflowFSM* __this);
        // Method: Method_16(void* priority) | Slot: 9541 | Token: 0x547b4e
        using fn_Method_16 = void* (*)(UGCWorkflowFSM* __this, void* priority);
        // Method: Method_17() | Slot: 32256 | Token: 0x1ffff
        using fn_Method_17 = void* (*)(UGCWorkflowFSM* __this);
        // Method: bum() | Slot: 41393 | Token: 0x886
        using fn_bum = void* (*)(UGCWorkflowFSM* __this);
        // Method: set() | Slot: 65535 | Token: 0x60363c0
        using fn_set = void* (*)(UGCWorkflowFSM* __this);
        // Method: get_Owner() | Slot: 2182 | Token: 0xffffffff
        using fn_get_Owner = void* (*)(UGCWorkflowFSM* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25538 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCWorkflowFSM* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCWorkflowFSM* __this);
        // Method: Method_23() | Slot: 65535 | Token: 0x12545
        using fn_Method_23 = void* (*)(UGCWorkflowFSM* __this);
        // Method: Method_24() | Slot: 0 | Token: 0x7e00
        using fn_Method_24 = void* (*)(UGCWorkflowFSM* __this);
    };

    // TypeDefIndex: 34792 | Original: COW.GamePlay.UGCRuntime.UGCMatchWorkflowState | Token: 0x20087e9
    struct UGCMatchWorkflowState : Il2Cpp::Object {
        // Fields (6)
        void* value__; // value__ | Token: 0x40415a7
        void* Created; // Created | Token: 0x40415a8
        void* Ready; // Ready | Token: 0x40415a9
        void* Run; // Run | Token: 0x40415aa
        void* End; // End | Token: 0x40415ab
        void* Destroy; // Destroy | Token: 0x40415ac
    };

    // TypeDefIndex: 34793 | Original: COW.GamePlay.UGCRuntime.UGCWorkflowModule | Token: 0x20087ea
    struct UGCWorkflowModule : Il2Cpp::Object {
        // Fields (3)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x40415ad
        void* m_State; // m_State | Token: 0x40415ae
        void* m_WorkflowFSM; // m_WorkflowFSM | Token: 0x40415af

        // Methods (19)
        // Method: exScale(void* priority) | Slot: 9541 | Token: 0x591caa
        using fn_exScale = void* (*)(UGCWorkflowModule* __this, void* priority);
        // Method: Method_1() | Slot: 32256 | Token: 0x1ffff
        using fn_Method_1 = void* (*)(UGCWorkflowModule* __this);
        // Method: bum() | Slot: 7408 | Token: 0x86
        using fn_bum = void* (*)(UGCWorkflowModule* __this);
        // Method: set() | Slot: 65535 | Token: 0x60363c8
        using fn_set = void* (*)(UGCWorkflowModule* __this);
        // Method: HOCJDBFGLLC() | Slot: 129 | Token: 0xffffffff
        using fn_HOCJDBFGLLC = void* (*)(UGCWorkflowModule* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25546 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCWorkflowModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCWorkflowModule* __this);
        // Method: Method_7() | Slot: 7222 | Token: 0x69c4
        using fn_Method_7 = void* (*)(UGCWorkflowModule* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x7e00
        using fn_Method_8 = void* (*)(UGCWorkflowModule* __this);
        // Method: Method_9(void* priority) | Slot: 9541 | Token: 0x591d2f
        using fn_Method_9 = void* (*)(UGCWorkflowModule* __this, void* priority);
        // Method: Method_10() | Slot: 32256 | Token: 0x2ffff
        using fn_Method_10 = void* (*)(UGCWorkflowModule* __this);
        // Method: _0() | Slot: 7483 | Token: 0x86
        using fn__0 = void* (*)(UGCWorkflowModule* __this);
        // Method: set() | Slot: 65535 | Token: 0x60363d0
        using fn_set = void* (*)(UGCWorkflowModule* __this);
        // Method: LDDLJIJAOEE() | Slot: 129 | Token: 0xffffffff
        using fn_LDDLJIJAOEE = void* (*)(UGCWorkflowModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25554 | Token: 0x21c39
        using fn_GetExchangeCurrencySubType = void* (*)(UGCWorkflowModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCWorkflowModule* __this);
        // Method: Method_16() | Slot: 7228 | Token: 0x12545
        using fn_Method_16 = void* (*)(UGCWorkflowModule* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x7e00
        using fn_Method_17 = void* (*)(UGCWorkflowModule* __this);
        // Method: Method_18(void* priority) | Slot: 9541 | Token: 0x591d77
        using fn_Method_18 = void* (*)(UGCWorkflowModule* __this, void* priority);
    };

    // TypeDefIndex: 34794 | Original: COW.GamePlay.UGCRuntime.UGCModuleArchTypeMgr | Token: 0x20087eb
    struct UGCModuleArchTypeMgr : Il2Cpp::Object {
        // Fields (6)
        void* ugcRuntime; // ugcRuntime | Token: 0x40415b0
        void* archTypeMap; // archTypeMap | Token: 0x40415b1
        void* archTypeHandler; // archTypeHandler | Token: 0x40415b2
        void* archTypeFilterHandler; // archTypeFilterHandler | Token: 0x40415b3
        void* abbrArchType2expArchTypeCache; // abbrArchType2expArchTypeCache | Token: 0x40415b4
        void* m_cachedArchTypeToComponents; // m_cachedArchTypeToComponents | Token: 0x40415b5

        // Methods (19)
        // Method: Method_0() | Slot: 32256 | Token: 0xffff
        using fn_Method_0 = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: bum() | Slot: 7567 | Token: 0x81
        using fn_bum = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: set() | Slot: 65535 | Token: 0x60363d8
        using fn_set = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: JNIIFIDHAFK() | Slot: 129 | Token: 0xffffffff
        using fn_JNIIFIDHAFK = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25562 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: Method_6() | Slot: 7232 | Token: 0xa52f
        using fn_Method_6 = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x7e00
        using fn_Method_7 = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: fSceen(void* priority) | Slot: 9541 | Token: 0x591de3
        using fn_fSceen = void* (*)(UGCModuleArchTypeMgr* __this, void* priority);
        // Method: Method_9() | Slot: 32256 | Token: 0x2ffff
        using fn_Method_9 = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: bum() | Slot: 17683 | Token: 0x81
        using fn_bum = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: set(void* DJAPBCKDFKA) | Slot: 73 | Token: 0x60363e0
        using fn_set = void* (*)(UGCModuleArchTypeMgr* __this, void* DJAPBCKDFKA);
        // Method: FIHBEJPIMDE() | Slot: 452 | Token: 0xffffffff
        using fn_FIHBEJPIMDE = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: e() | Slot: 25570 | Token: 0x21c4b
        using fn_e = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: e() | Slot: 65535 | Token: 0x8000000
        using fn_e = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: Method_15() | Slot: 7245 | Token: 0x12545
        using fn_Method_15 = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: Method_16() | Slot: 0 | Token: 0x7e00
        using fn_Method_16 = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: esh() | Slot: 27076 | Token: 0x591e83
        using fn_esh = void* (*)(UGCModuleArchTypeMgr* __this);
        // Method: Method_18() | Slot: 32256 | Token: 0x7ffff
        using fn_Method_18 = void* (*)(UGCModuleArchTypeMgr* __this);
    };

    // TypeDefIndex: 34800 | Original: COW.GamePlay.UGCRuntime.UGCPersonaModule | Token: 0x20087ec
    struct UGCPersonaModule : Il2Cpp::Object {
        // Fields (19)
        void* RoomID; // RoomID | Token: 0x40415b6
        void* Duration; // Duration | Token: 0x40415b7
        void* m_Nickname; // m_Nickname | Token: 0x40415b8
        void* PersonaSetting; // PersonaSetting | Token: 0x40415b9
        void* AllLLMChatHud; // AllLLMChatHud | Token: 0x40415ba
        void* m_sb; // m_sb | Token: 0x40415bb
        void* m_currentPart; // m_currentPart | Token: 0x40415bc
        void* m_byteBuffer; // m_byteBuffer | Token: 0x40415bd
        void* m_CacheAudioDataList; // m_CacheAudioDataList | Token: 0x40415be
        void* m_VoiceRecordDataMap; // m_VoiceRecordDataMap | Token: 0x40415bf
        void* m_PlayingAudioContext; // m_PlayingAudioContext | Token: 0x40415c0
        void* m_ugcRuntime; // m_ugcRuntime | Token: 0x40415c1
        void* ObserverMap; // ObserverMap | Token: 0x40415c2
        void* m_IsSendingCreateRoom; // m_IsSendingCreateRoom | Token: 0x40415c3
        void* HasCreateRoom; // HasCreateRoom | Token: 0x40415c4
        void* m_EventArgs1; // m_EventArgs1 | Token: 0x40415c5
        void* m_EventArgs2; // m_EventArgs2 | Token: 0x40415c6
        void* lastSendTime; // lastSendTime | Token: 0x40415c7
        void* userCtrl; // userCtrl | Token: 0x40415c8

        // Methods (37)
        // Method: bum() | Slot: 7847 | Token: 0xc6
        using fn_bum = void* (*)(UGCPersonaModule* __this);
        // Method: set(void* NNDKLPKEIPD, void* MPBGHMDLDEG) | Slot: 65535 | Token: 0x60363e8
        using fn_set = void* (*)(UGCPersonaModule* __this, void* NNDKLPKEIPD, void* MPBGHMDLDEG);
        // Method: JFAPEEBBNAI() | Slot: 145 | Token: 0xffffffff
        using fn_JFAPEEBBNAI = void* (*)(UGCPersonaModule* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25578 | Token: 0x21c5b
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCPersonaModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCPersonaModule* __this);
        // Method: Method_5() | Slot: 7262 | Token: 0x12545
        using fn_Method_5 = void* (*)(UGCPersonaModule* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7e00
        using fn_Method_6 = void* (*)(UGCPersonaModule* __this);
        // Method: teMesh(void* priority) | Slot: 9541 | Token: 0x591f3f
        using fn_teMesh = void* (*)(UGCPersonaModule* __this, void* priority);
        // Method: Method_8() | Slot: 32256 | Token: 0xffff
        using fn_Method_8 = void* (*)(UGCPersonaModule* __this);
        // Method: bum() | Slot: 8061 | Token: 0x86
        using fn_bum = void* (*)(UGCPersonaModule* __this);
        // Method: set() | Slot: 65535 | Token: 0x60363f0
        using fn_set = void* (*)(UGCPersonaModule* __this);
        // Method: GetMaxDamage() | Slot: 134 | Token: 0xffffffff
        using fn_GetMaxDamage = void* (*)(UGCPersonaModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25586 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPersonaModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCPersonaModule* __this);
        // Method: Method_14() | Slot: 65535 | Token: 0x12545
        using fn_Method_14 = void* (*)(UGCPersonaModule* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x7e00
        using fn_Method_15 = void* (*)(UGCPersonaModule* __this);
        // Method: Method_16(void* priority) | Slot: 9541 | Token: 0x591fc6
        using fn_Method_16 = void* (*)(UGCPersonaModule* __this, void* priority);
        // Method: Method_17() | Slot: 32256 | Token: 0xffff
        using fn_Method_17 = void* (*)(UGCPersonaModule* __this);
        // Method: bum() | Slot: 8158 | Token: 0x81
        using fn_bum = void* (*)(UGCPersonaModule* __this);
        // Method: set() | Slot: 65535 | Token: 0x60363f8
        using fn_set = void* (*)(UGCPersonaModule* __this);
        // Method: ODEIGGDNOBB() | Slot: 129 | Token: 0xffffffff
        using fn_ODEIGGDNOBB = void* (*)(UGCPersonaModule* __this);
        // Method: imable() | Slot: 25594 | Token: 0xffffffff
        using fn_imable = void* (*)(UGCPersonaModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCPersonaModule* __this);
        // Method: Method_23() | Slot: 65535 | Token: 0x69c4
        using fn_Method_23 = void* (*)(UGCPersonaModule* __this);
        // Method: Method_24() | Slot: 0 | Token: 0x7e00
        using fn_Method_24 = void* (*)(UGCPersonaModule* __this);
        // Method: Method_25() | Slot: 27076 | Token: 0x4505
        using fn_Method_25 = void* (*)(UGCPersonaModule* __this);
        // Method: Method_26() | Slot: 32256 | Token: 0x12
        using fn_Method_26 = void* (*)(UGCPersonaModule* __this);
        // Method: bum() | Slot: 8229 | Token: 0x81
        using fn_bum = void* (*)(UGCPersonaModule* __this);
        // Method: set() | Slot: 65535 | Token: 0x6036400
        using fn_set = void* (*)(UGCPersonaModule* __this);
        // Method: AJCLHHPCGFP() | Slot: 129 | Token: 0xffffffff
        using fn_AJCLHHPCGFP = void* (*)(UGCPersonaModule* __this);
        // Method: _WAIT() | Slot: 25602 | Token: 0x21c67
        using fn__WAIT = void* (*)(UGCPersonaModule* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCPersonaModule* __this);
        // Method: Method_32() | Slot: 7273 | Token: 0x12545
        using fn_Method_32 = void* (*)(UGCPersonaModule* __this);
        // Method: Method_33() | Slot: 0 | Token: 0x7e00
        using fn_Method_33 = void* (*)(UGCPersonaModule* __this);
        // Method: Method_34(void* strAPPSecret) | Slot: 9541 | Token: 0x49aa
        using fn_Method_34 = void* (*)(UGCPersonaModule* __this, void* strAPPSecret);
        // Method: Method_35() | Slot: 32256 | Token: 0xffff
        using fn_Method_35 = void* (*)(UGCPersonaModule* __this);
        // Method: bum() | Slot: 62404 | Token: 0x81
        using fn_bum = void* (*)(UGCPersonaModule* __this);
    };

    // TypeDefIndex: 34801 | Original: COW.GamePlay.UGCRuntime.UGCPhysicsModule | Token: 0x20087f2
    struct UGCPhysicsModule : Il2Cpp::Object {
        // Fields (4)
        void* m_cctConfigForPlayer; // m_cctConfigForPlayer | Token: 0x40415db
        void* _PlayerPhysicalLayerIndex_k__BackingField; // <PlayerPhysicalLayerIndex>k__BackingField | Token: 0x40415dc
        void* m_DefaultSleepThreshold; // m_DefaultSleepThreshold | Token: 0x40415dd
        void* m_DefaultSmoothHighFrame; // m_DefaultSmoothHighFrame | Token: 0x40415de

        // Methods (7)
        // Method: GetExchangeCurrencySubType() | Slot: 25618 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPhysicsModule* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UGCPhysicsModule* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_2 = void* (*)(UGCPhysicsModule* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7e01
        using fn_Method_3 = void* (*)(UGCPhysicsModule* __this);
        // Method: Method_4(void* circlePlane) | Slot: 9541 | Token: 0x67
        using fn_Method_4 = void* (*)(UGCPhysicsModule* __this, void* circlePlane);
        // Method: Method_5() | Slot: 32257 | Token: 0xffff
        using fn_Method_5 = void* (*)(UGCPhysicsModule* __this);
        // Method: g() | Slot: 22699 | Token: 0x6
        using fn_g = void* (*)(UGCPhysicsModule* __this);
    };

    // TypeDefIndex: 34805 | Original: COW.GamePlay.UGCRuntime.UGCPlayerBridge | Token: 0x20087f3
    struct UGCPlayerBridge : Il2Cpp::Object {
        // Fields (64)
        void* m_DataStore; // m_DataStore | Token: 0x40415df
        void* m_Player; // m_Player | Token: 0x40415e0
        void* m_AssistEntityRepItem; // m_AssistEntityRepItem | Token: 0x40415e1
        void* m_animationAbleRepItem; // m_animationAbleRepItem | Token: 0x40415e2
        void* visibilityRepItem; // visibilityRepItem | Token: 0x40415e3
        void* m_transformClothEntity; // m_transformClothEntity | Token: 0x40415e4
        void* m_PlayerAvatarInfoRepItem; // m_PlayerAvatarInfoRepItem | Token: 0x40415e5
        void* m_PlayerCmpt; // m_PlayerCmpt | Token: 0x40415e6
        void* m_PlayerBehaviorCmpt; // m_PlayerBehaviorCmpt | Token: 0x40415e7
        void* m_EntityCmpt; // m_EntityCmpt | Token: 0x40415e8
        void* BehaviorEntityID; // BehaviorEntityID | Token: 0x40415e9
        void* m_lastSpawnOrReviveTime; // m_lastSpawnOrReviveTime | Token: 0x40415ea
        void* m_UGCHardCodeMgr; // m_UGCHardCodeMgr | Token: 0x40415eb
        void* m_ugcGenderFlag; // m_ugcGenderFlag | Token: 0x40415ec
        void* m_playerAvatar; // m_playerAvatar | Token: 0x40415ed
        void* m_curUGCResPlayerUUID; // m_curUGCResPlayerUUID | Token: 0x40415ee
        void* m_isCacheAvatarPartVisableMask1; // m_isCacheAvatarPartVisableMask1 | Token: 0x40415ef
        void* m_isCacheAvatarPartVisableMask2; // m_isCacheAvatarPartVisableMask2 | Token: 0x40415f0
        void* m_isCacheAvatarPartVisableMask3; // m_isCacheAvatarPartVisableMask3 | Token: 0x40415f1
        void* m_isCacheAvatarPartVisableMask4; // m_isCacheAvatarPartVisableMask4 | Token: 0x40415f2
        void* m_cacheAvatarPartVisableMask1; // m_cacheAvatarPartVisableMask1 | Token: 0x40415f3
        void* m_cacheAvatarPartVisableMask2; // m_cacheAvatarPartVisableMask2 | Token: 0x40415f4
        void* m_cacheAvatarPartVisableMask3; // m_cacheAvatarPartVisableMask3 | Token: 0x40415f5
        void* m_cacheAvatarPartVisableMask4; // m_cacheAvatarPartVisableMask4 | Token: 0x40415f6
        void* chatChannelOldValue; // chatChannelOldValue | Token: 0x40415f7
        void* m_CheckPointEffect; // m_CheckPointEffect | Token: 0x40415f8
        void* CONST_FirstCheckPointID; // CONST_FirstCheckPointID | Token: 0x40415f9
        void* m_FactionEntity; // m_FactionEntity | Token: 0x40415fa
        void* m_TeamEntity; // m_TeamEntity | Token: 0x40415fb
        void* factionEntityOldValue; // factionEntityOldValue | Token: 0x40415fc
        void* factionShowQuickMessageOldValue; // factionShowQuickMessageOldValue | Token: 0x40415fd
        void* factionShowTagOldValue; // factionShowTagOldValue | Token: 0x40415fe
        void* teamEntityOldValue; // teamEntityOldValue | Token: 0x40415ff
        void* factionIdxOldValue; // factionIdxOldValue | Token: 0x4041600
        void* m_ugcDisablePickUpItems; // m_ugcDisablePickUpItems | Token: 0x4041601
        void* m_currentUGCEmoteClipUUID; // m_currentUGCEmoteClipUUID | Token: 0x4041602
        void* m_CameraConfig; // m_CameraConfig | Token: 0x4041603
        void* m_UGCBasicCameraEntity; // m_UGCBasicCameraEntity | Token: 0x4041604
        void* m_UGCBasicCameraEntityID; // m_UGCBasicCameraEntityID | Token: 0x4041605
        void* ms_partType2BoneNameMap; // ms_partType2BoneNameMap | Token: 0x4041606
        void* m_skeletonBoneOwner; // m_skeletonBoneOwner | Token: 0x4041607
        void* m_UGCPlayerAnimPort; // m_UGCPlayerAnimPort | Token: 0x4041608
        void* m_UGCEnableAnimReplace; // m_UGCEnableAnimReplace | Token: 0x4041609
        void* m_AnimationControllerEntityID; // m_AnimationControllerEntityID | Token: 0x404160a
        void* m_ugcAnimationControllerEntity; // m_ugcAnimationControllerEntity | Token: 0x404160b
        void* m_ugcCacheAC; // m_ugcCacheAC | Token: 0x404160c
        void* m_ugcCacheACResUUID; // m_ugcCacheACResUUID | Token: 0x404160d
        void* m_blendTreeOverrideAnimationClips; // m_blendTreeOverrideAnimationClips | Token: 0x404160e
        void* m_isInitOverrideAnimationControllers; // m_isInitOverrideAnimationControllers | Token: 0x404160f
        void* m_WeaponTypeOverrideAnimCtrlsDic; // m_WeaponTypeOverrideAnimCtrlsDic | Token: 0x4041610
        void* m_ugcCacheAnimationObject; // m_ugcCacheAnimationObject | Token: 0x4041611
        void* m_isFFPlayerUMAInited; // m_isFFPlayerUMAInited | Token: 0x4041612
        void* m_lazyCallUMAChanged; // m_lazyCallUMAChanged | Token: 0x4041613
        void* m_Skeleton; // m_Skeleton | Token: 0x4041614
        void* m_IsZombieLowBlood; // m_IsZombieLowBlood | Token: 0x4041615
        void* m_ZombieLowBloodVFX; // m_ZombieLowBloodVFX | Token: 0x4041616
        void* m_constantMoveFrameCnt; // m_constantMoveFrameCnt | Token: 0x4041617
        void* m_constantIdleFrameCnt; // m_constantIdleFrameCnt | Token: 0x4041618
        void* m_isLastFrameMoving; // m_isLastFrameMoving | Token: 0x4041619
        void* MOVEMENT_THRESHOLD; // MOVEMENT_THRESHOLD | Token: 0x404161a
        void* m_PrevAimLogicEntityID; // m_PrevAimLogicEntityID | Token: 0x404161b
        void* m_CurAimLogicEntityID; // m_CurAimLogicEntityID | Token: 0x404161c
        void* m_EventArgs1; // m_EventArgs1 | Token: 0x404161d
        void* m_EventArgs2; // m_EventArgs2 | Token: 0x404161e

        // Methods (127)
        // Method: et() | Slot: 65535 | Token: 0x6036418
        using fn_et = void* (*)(UGCPlayerBridge* __this);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(UGCPlayerBridge* __this);
        // Method: `2() | Slot: 25626 | Token: 0xffffffff
        using fn__2 = void* (*)(UGCPlayerBridge* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_4(void* bR, void* P0) | Slot: 7278 | Token: 0x12545
        using fn_Method_4 = void* (*)(UGCPlayerBridge* __this, void* bR, void* P0);
        // Method: Method_5() | Slot: 0 | Token: 0x7e03
        using fn_Method_5 = void* (*)(UGCPlayerBridge* __this);
        // Method: ingRGB565(void* priority) | Slot: 9541 | Token: 0x44fb
        using fn_ingRGB565 = void* (*)(UGCPlayerBridge* __this, void* priority);
        // Method: Method_7() | Slot: 32259 | Token: 0x16
        using fn_Method_7 = void* (*)(UGCPlayerBridge* __this);
        // Method: t() | Slot: 9332 | Token: 0xc6
        using fn_t = void* (*)(UGCPlayerBridge* __this);
        // Method: (void* JOPCBALDPPL, void* MMBHKHJHBBF) | Slot: 65535 | Token: 0x6036420
        using fn_unnamed = void* (*)(UGCPlayerBridge* __this, void* JOPCBALDPPL, void* MMBHKHJHBBF);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCPlayerBridge* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25634 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPlayerBridge* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x7e03
        using fn_Method_14 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_15() | Slot: 27076 | Token: 0x59249f
        using fn_Method_15 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_16() | Slot: 32262 | Token: 0xffff
        using fn_Method_16 = void* (*)(UGCPlayerBridge* __this);
        // Method: bum() | Slot: 17716 | Token: 0x886
        using fn_bum = void* (*)(UGCPlayerBridge* __this);
        // Method: rgetPreset() | Slot: 24 | Token: 0x6036428
        using fn_rgetPreset = void* (*)(UGCPlayerBridge* __this);
        // Method: SetPosInManager() | Slot: 134 | Token: 0xffffffff
        using fn_SetPosInManager = void* (*)(UGCPlayerBridge* __this);
        // Method: _WAIT() | Slot: 25642 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UGCPlayerBridge* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_22() | Slot: 7293 | Token: 0x12545
        using fn_Method_22 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x7e06
        using fn_Method_23 = void* (*)(UGCPlayerBridge* __this);
        // Method: sResolutionScale(void* priority) | Slot: 9541 | Token: 0x584181
        using fn_sResolutionScale = void* (*)(UGCPlayerBridge* __this, void* priority);
        // Method: Method_25() | Slot: 32262 | Token: 0xffff
        using fn_Method_25 = void* (*)(UGCPlayerBridge* __this);
        // Method: bum() | Slot: 8010 | Token: 0x86
        using fn_bum = void* (*)(UGCPlayerBridge* __this);
        // Method: rgetPreset(void* GLJGHEAPBOF) | Slot: 89 | Token: 0x6036430
        using fn_rgetPreset = void* (*)(UGCPlayerBridge* __this, void* GLJGHEAPBOF);
        // Method: IFDICEPEPLG() | Slot: 129 | Token: 0xffffffff
        using fn_IFDICEPEPLG = void* (*)(UGCPlayerBridge* __this);
        // Method: imable() | Slot: 25650 | Token: 0x21c88
        using fn_imable = void* (*)(UGCPlayerBridge* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_31() | Slot: 65535 | Token: 0x12545
        using fn_Method_31 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_32() | Slot: 0 | Token: 0x7e06
        using fn_Method_32 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_33(void* circlePlane) | Slot: 9541 | Token: 0x482d
        using fn_Method_33 = void* (*)(UGCPlayerBridge* __this, void* circlePlane);
        // Method: Method_34() | Slot: 32262 | Token: 0xffff
        using fn_Method_34 = void* (*)(UGCPlayerBridge* __this);
        // Method: bum() | Slot: 17708 | Token: 0x86
        using fn_bum = void* (*)(UGCPlayerBridge* __this);
        // Method: rgetPreset() | Slot: 20 | Token: 0x6036438
        using fn_rgetPreset = void* (*)(UGCPlayerBridge* __this);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(UGCPlayerBridge* __this);
        // Method: `2() | Slot: 25658 | Token: 0xffffffff
        using fn__2 = void* (*)(UGCPlayerBridge* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_40() | Slot: 7310 | Token: 0x12545
        using fn_Method_40 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_41() | Slot: 0 | Token: 0x7e06
        using fn_Method_41 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_42() | Slot: 27076 | Token: 0x1d58c5
        using fn_Method_42 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_43() | Slot: 32262 | Token: 0xffff
        using fn_Method_43 = void* (*)(UGCPlayerBridge* __this);
        // Method: bum() | Slot: 103 | Token: 0x6
        using fn_bum = void* (*)(UGCPlayerBridge* __this);
        // Method: argetPreset() | Slot: 65535 | Token: 0x6036440
        using fn_argetPreset = void* (*)(UGCPlayerBridge* __this);
        // Method: GetStartShelf() | Slot: 198 | Token: 0xffffffff
        using fn_GetStartShelf = void* (*)(UGCPlayerBridge* __this);
        // Method: nfo() | Slot: 25666 | Token: 0xffffffff
        using fn_nfo = void* (*)(UGCPlayerBridge* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_49() | Slot: 65535 | Token: 0x12545
        using fn_Method_49 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_50() | Slot: 0 | Token: 0x7e07
        using fn_Method_50 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_51() | Slot: 16668 | Token: 0x592669
        using fn_Method_51 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_52() | Slot: 32263 | Token: 0xffff
        using fn_Method_52 = void* (*)(UGCPlayerBridge* __this);
        // Method: elBounceTire() | Slot: 11742 | Token: 0x86
        using fn_elBounceTire = void* (*)(UGCPlayerBridge* __this);
        // Method: getPreset() | Slot: 36 | Token: 0x6036448
        using fn_getPreset = void* (*)(UGCPlayerBridge* __this);
        // Method: BEFFNFCHLNE() | Slot: 2177 | Token: 0xffffffff
        using fn_BEFFNFCHLNE = void* (*)(UGCPlayerBridge* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25674 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPlayerBridge* __this);
        // Method: wardId1() | Slot: 65535 | Token: 0x8000000
        using fn_wardId1 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_58() | Slot: 65535 | Token: 0x12545
        using fn_Method_58 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_59() | Slot: 0 | Token: 0x7e07
        using fn_Method_59 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_60() | Slot: 27076 | Token: 0x5926c0
        using fn_Method_60 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_61() | Slot: 32263 | Token: 0x1ffff
        using fn_Method_61 = void* (*)(UGCPlayerBridge* __this);
        // Method: Data() | Slot: 9932 | Token: 0xc6
        using fn_Data = void* (*)(UGCPlayerBridge* __this);
        // Method: getPreset(void* CAKPBGKDFBN, void* IPNPKMJDIPC) | Slot: 94 | Token: 0x6036450
        using fn_getPreset = void* (*)(UGCPlayerBridge* __this, void* CAKPBGKDFBN, void* IPNPKMJDIPC);
        // Method: IsLastSegment() | Slot: 198 | Token: 0xffffffff
        using fn_IsLastSegment = void* (*)(UGCPlayerBridge* __this);
        // Method: () | Slot: 25682 | Token: 0x21c96
        using fn_unnamed = void* (*)(UGCPlayerBridge* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_67() | Slot: 7323 | Token: 0xd09f
        using fn_Method_67 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_68() | Slot: 0 | Token: 0x7e07
        using fn_Method_68 = void* (*)(UGCPlayerBridge* __this);
        // Method: MergeTexture(void* priority) | Slot: 9110 | Token: 0x592743
        using fn_MergeTexture = void* (*)(UGCPlayerBridge* __this, void* priority);
        // Method: Method_70() | Slot: 32263 | Token: 0x3ffff
        using fn_Method_70 = void* (*)(UGCPlayerBridge* __this);
        // Method: Interval() | Slot: 10090 | Token: 0x86
        using fn_Interval = void* (*)(UGCPlayerBridge* __this);
        // Method: getPreset(void* HDFILHFDBKB, void* CAKPBGKDFBN, void* IPNPKMJDIPC) | Slot: 65535 | Token: 0x6036458
        using fn_getPreset = void* (*)(UGCPlayerBridge* __this, void* HDFILHFDBKB, void* CAKPBGKDFBN, void* IPNPKMJDIPC);
        // Method: AMJOEGKGINB() | Slot: 132 | Token: 0xffffffff
        using fn_AMJOEGKGINB = void* (*)(UGCPlayerBridge* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25690 | Token: 0x21ca8
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPlayerBridge* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_76() | Slot: 65535 | Token: 0x12545
        using fn_Method_76 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_77() | Slot: 0 | Token: 0x7e07
        using fn_Method_77 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_78() | Slot: 45055 | Token: 0x5927a6
        using fn_Method_78 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_79() | Slot: 32263 | Token: 0xffff
        using fn_Method_79 = void* (*)(UGCPlayerBridge* __this);
        // Method: g() | Slot: 55207 | Token: 0x6
        using fn_g = void* (*)(UGCPlayerBridge* __this);
        // Method: getPreset() | Slot: 65535 | Token: 0x6036460
        using fn_getPreset = void* (*)(UGCPlayerBridge* __this);
        // Method: <>iFixBaseProxy_GetMaxRepDataCount() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_GetMaxRepDataCount = void* (*)(UGCPlayerBridge* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25698 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPlayerBridge* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_85() | Slot: 65535 | Token: 0x12545
        using fn_Method_85 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_86() | Slot: 0 | Token: 0x7e07
        using fn_Method_86 = void* (*)(UGCPlayerBridge* __this);
        // Method: (void* cam) | Slot: 9110 | Token: 0x5927fe
        using fn_unnamed = void* (*)(UGCPlayerBridge* __this, void* cam);
        // Method: Method_88() | Slot: 32263 | Token: 0x2ffff
        using fn_Method_88 = void* (*)(UGCPlayerBridge* __this);
        // Method: Data() | Slot: 37161 | Token: 0x6
        using fn_Data = void* (*)(UGCPlayerBridge* __this);
        // Method: getPreset(void* P0) | Slot: 65535 | Token: 0x6036468
        using fn_getPreset = void* (*)(UGCPlayerBridge* __this, void* P0);
        // Method: <>iFixBaseProxy_SyncAction() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_SyncAction = void* (*)(UGCPlayerBridge* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25706 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCPlayerBridge* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_94() | Slot: 65535 | Token: 0x69c4
        using fn_Method_94 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_95() | Slot: 0 | Token: 0x7e08
        using fn_Method_95 = void* (*)(UGCPlayerBridge* __this);
        // Method: othMergeTexture(void* circlePlane) | Slot: 9541 | Token: 0x4513
        using fn_othMergeTexture = void* (*)(UGCPlayerBridge* __this, void* circlePlane);
        // Method: Method_97() | Slot: 32264 | Token: 0x10049
        using fn_Method_97 = void* (*)(UGCPlayerBridge* __this);
        // Method: bum() | Slot: 22943 | Token: 0x1886
        using fn_bum = void* (*)(UGCPlayerBridge* __this);
        // Method: etPreset() | Slot: 65535 | Token: 0x6036470
        using fn_etPreset = void* (*)(UGCPlayerBridge* __this);
        // Method: <>iFixBaseProxy_OnStart() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnStart = void* (*)(UGCPlayerBridge* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25714 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPlayerBridge* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_103() | Slot: 7349 | Token: 0x12545
        using fn_Method_103 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_104() | Slot: 0 | Token: 0x7e0b
        using fn_Method_104 = void* (*)(UGCPlayerBridge* __this);
        // Method: ergeTexture(void* priority) | Slot: 9541 | Token: 0x49a2
        using fn_ergeTexture = void* (*)(UGCPlayerBridge* __this, void* priority);
        // Method: Method_106() | Slot: 32267 | Token: 0xffff
        using fn_Method_106 = void* (*)(UGCPlayerBridge* __this);
        // Method: bum() | Slot: 10612 | Token: 0x81
        using fn_bum = void* (*)(UGCPlayerBridge* __this);
        // Method: reset() | Slot: 65535 | Token: 0x6036478
        using fn_reset = void* (*)(UGCPlayerBridge* __this);
        // Method: LNOOCCDMFEM() | Slot: 129 | Token: 0xffffffff
        using fn_LNOOCCDMFEM = void* (*)(UGCPlayerBridge* __this);
        // Method: _WAIT() | Slot: 25722 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UGCPlayerBridge* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_112() | Slot: 65535 | Token: 0x12545
        using fn_Method_112 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_113() | Slot: 0 | Token: 0x7e0b
        using fn_Method_113 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_114(void* priority) | Slot: 9541 | Token: 0x132
        using fn_Method_114 = void* (*)(UGCPlayerBridge* __this, void* priority);
        // Method: Method_115() | Slot: 32267 | Token: 0xffff
        using fn_Method_115 = void* (*)(UGCPlayerBridge* __this);
        // Method: bum() | Slot: 312 | Token: 0x81
        using fn_bum = void* (*)(UGCPlayerBridge* __this);
        // Method: reset() | Slot: 65535 | Token: 0x6036480
        using fn_reset = void* (*)(UGCPlayerBridge* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCPlayerBridge* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25730 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPlayerBridge* __this);
        // Method: () | Slot: 65535 | Token: 0x8000000
        using fn_unnamed = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_121() | Slot: 7354 | Token: 0x12396
        using fn_Method_121 = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_122() | Slot: 0 | Token: 0x7e09
        using fn_Method_122 = void* (*)(UGCPlayerBridge* __this);
        // Method: exture() | Slot: 53407 | Token: 0x592a5f
        using fn_exture = void* (*)(UGCPlayerBridge* __this);
        // Method: Method_124() | Slot: 32265 | Token: 0xffff
        using fn_Method_124 = void* (*)(UGCPlayerBridge* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(UGCPlayerBridge* __this);
        // Method: Preset() | Slot: 65535 | Token: 0x6036488
        using fn_Preset = void* (*)(UGCPlayerBridge* __this);
    };

    // TypeDefIndex: 34806 | Original: COW.GamePlay.UGCRuntime.UGCPremiumModule | Token: 0x20087f7
    struct UGCPremiumModule : Il2Cpp::Object {
        // Fields (6)
        void* m_UGCRuntime; // m_UGCRuntime | Token: 0x4041629
        void* m_PremiumModel; // m_PremiumModel | Token: 0x404162a
        void* m_Config_ExpireCheckInterval; // m_Config_ExpireCheckInterval | Token: 0x404162b
        void* m_LastExpireCheckTimeMs; // m_LastExpireCheckTimeMs | Token: 0x404162c
        void* m_IsVip; // m_IsVip | Token: 0x404162d
        void* m_EventArgs; // m_EventArgs | Token: 0x404162e

        // Methods (9)
        // Method: GetExplodeEffect() | Slot: 134 | Token: 0xffffffff
        using fn_GetExplodeEffect = void* (*)(UGCPremiumModule* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25754 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCPremiumModule* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCPremiumModule* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(UGCPremiumModule* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7e0d
        using fn_Method_4 = void* (*)(UGCPremiumModule* __this);
        // Method: Method_5(void* d) | Slot: 9541 | Token: 0x50d6e0
        using fn_Method_5 = void* (*)(UGCPremiumModule* __this, void* d);
        // Method: Method_6() | Slot: 32269 | Token: 0x22
        using fn_Method_6 = void* (*)(UGCPremiumModule* __this);
        // Method: bum() | Slot: 30573 | Token: 0x81
        using fn_bum = void* (*)(UGCPremiumModule* __this);
        // Method: set(void* OJEPOBEENEK, void* EIOKHLKJEEL) | Slot: 65535 | Token: 0x60364a0
        using fn_set = void* (*)(UGCPremiumModule* __this, void* OJEPOBEENEK, void* EIOKHLKJEEL);
    };

    // TypeDefIndex: 34807 | Original: COW.GamePlay.UGCRuntime.ModeConfig | Token: 0x20087f8
    struct ModeConfig : Il2Cpp::Object {
        // Fields (4)
        void* boolConfigTable; // boolConfigTable | Token: 0x404162f
        void* intConfigTable; // intConfigTable | Token: 0x4041630
        void* floatConfigTable; // floatConfigTable | Token: 0x4041631
        void* stringConfigTable; // stringConfigTable | Token: 0x4041632

        // Methods (9)
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(ModeConfig* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25762 | Token: 0x21cc9
        using fn_GetExchangeCurrencySubType = void* (*)(ModeConfig* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(ModeConfig* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0xa52f
        using fn_Method_3 = void* (*)(ModeConfig* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7e0d
        using fn_Method_4 = void* (*)(ModeConfig* __this);
        // Method: Method_5() | Slot: 54255 | Token: 0x4129
        using fn_Method_5 = void* (*)(ModeConfig* __this);
        // Method: Method_6() | Slot: 32270 | Token: 0x44
        using fn_Method_6 = void* (*)(ModeConfig* __this);
        // Method: bum() | Slot: 17683 | Token: 0x86
        using fn_bum = void* (*)(ModeConfig* __this);
        // Method: et(void* DJAPBCKDFKA) | Slot: 73 | Token: 0x60364a8
        using fn_et = void* (*)(ModeConfig* __this, void* DJAPBCKDFKA);
    };

    // TypeDefIndex: 34808 | Original: COW.GamePlay.UGCRuntime.UgcI18n | Token: 0x20087f9
    struct UgcI18n : Il2Cpp::Object {
        // Fields (22)
        void* UGCI18N_LOG_ROUND_START; // UGCI18N_LOG_ROUND_START | Token: 0x4041633
        void* UGCI18N_LOG_ROUND_END; // UGCI18N_LOG_ROUND_END | Token: 0x4041634
        void* UGCI18N_LOG_PHASE_START; // UGCI18N_LOG_PHASE_START | Token: 0x4041635
        void* UGCI18N_LOG_PHASE_END; // UGCI18N_LOG_PHASE_END | Token: 0x4041636
        void* UGCI18N_ERR_ENTITY_IS_EMPTY; // UGCI18N_ERR_ENTITY_IS_EMPTY | Token: 0x4041637
        void* UGCI18N_ERR_VAR_UNDEFINED_OR_OUT_OF_SCOPE; // UGCI18N_ERR_VAR_UNDEFINED_OR_OUT_OF_SCOPE | Token: 0x4041638
        void* UGCI18N_ERR_VAR_ASSIGNMENT_OPERATOR_MISMATCH; // UGCI18N_ERR_VAR_ASSIGNMENT_OPERATOR_MISMATCH | Token: 0x4041639
        void* UGCI18N_ERR_VAR_REPEATED_DEF_IN_SCOPE; // UGCI18N_ERR_VAR_REPEATED_DEF_IN_SCOPE | Token: 0x404163a
        void* UGCI18N_ERR_VAR_ARITHMETIC_FAILED; // UGCI18N_ERR_VAR_ARITHMETIC_FAILED | Token: 0x404163b
        void* UGCI18N_ERR_LIST_APPEND_IS_NIL; // UGCI18N_ERR_LIST_APPEND_IS_NIL | Token: 0x404163c
        void* UGCI18N_ERR_EXCEED_LIMIT_PERSCOPECOROUTINECONCURRENCYMAX; // UGCI18N_ERR_EXCEED_LIMIT_PERSCOPECOROUTINECONCURRENCYMAX | Token: 0x404163d
        void* UGCI18N_ERR_EXCEED_LIMIT_DISPATCHEVENTMAXCOUNTPERFRAME; // UGCI18N_ERR_EXCEED_LIMIT_DISPATCHEVENTMAXCOUNTPERFRAME | Token: 0x404163e
        void* UGCI18N_ERR_EXCEED_LIMIT_CALLSTACKCOUNTMAX; // UGCI18N_ERR_EXCEED_LIMIT_CALLSTACKCOUNTMAX | Token: 0x404163f
        void* UGCI18N_ERR_EXCEED_LIMIT_LOOPTIMESMAX; // UGCI18N_ERR_EXCEED_LIMIT_LOOPTIMESMAX | Token: 0x4041640
        void* UGCI18N_ERR_EXCEED_LIMIT_LISTINITLENGTHMAX; // UGCI18N_ERR_EXCEED_LIMIT_LISTINITLENGTHMAX | Token: 0x4041641
        void* UGCI18N_ERR_EXCEED_LIMIT_LISTINITLengthOverCapicity; // UGCI18N_ERR_EXCEED_LIMIT_LISTINITLengthOverCapicity | Token: 0x4041642
        void* UGCI18N_ERR_EXCEED_LIMIT_ITEM_CREATED_PER_MATCH; // UGCI18N_ERR_EXCEED_LIMIT_ITEM_CREATED_PER_MATCH | Token: 0x4041643
        void* UGCI18N_ERR_EXCEED_LIMIT_ENTITY_CREATED_PER_FRAME; // UGCI18N_ERR_EXCEED_LIMIT_ENTITY_CREATED_PER_FRAME | Token: 0x4041644
        void* UGCI18N_ERR_EXCEED_LIMIT_ENTITY_CREATED_PER_MATCH; // UGCI18N_ERR_EXCEED_LIMIT_ENTITY_CREATED_PER_MATCH | Token: 0x4041645
        void* UGCI18N_ERR_INVALID_PARENT; // UGCI18N_ERR_INVALID_PARENT | Token: 0x4041646
        void* UGCI18N_ERR_INVALID_RIGIDBODY_TYPE_CONVERSION; // UGCI18N_ERR_INVALID_RIGIDBODY_TYPE_CONVERSION | Token: 0x4041647
        void* UGCI18N_ERR_FE_41_HJ_AC_STATENOTEXIST; // UGCI18N_ERR_FE_41_HJ_AC_STATENOTEXIST | Token: 0x4041648
    };

    // TypeDefIndex: 34809 | Original: COW.GamePlay.UGCRuntime.EUGCFuncState | Token: 0x20087fa
    struct EUGCFuncState : Il2Cpp::Object {
        // Fields (8)
        void* value__; // value__ | Token: 0x4041649
        void* Unknown; // Unknown | Token: 0x404164a
        void* End; // End | Token: 0x404164b
        void* Continue; // Continue | Token: 0x404164c
        void* Break; // Break | Token: 0x404164d
        void* WaitFor; // WaitFor | Token: 0x404164e
        void* Return; // Return | Token: 0x404164f
        void* Jump; // Jump | Token: 0x4041650
    };

    // TypeDefIndex: 34810 | Original: COW.GamePlay.UGCRuntime.UGCLevelParamNames | Token: 0x20087fb
    struct UGCLevelParamNames : Il2Cpp::Object {
        // Fields (47)
        void* FactionRoundCount; // FactionRoundCount | Token: 0x4041651
        void* HumanCanRevive; // HumanCanRevive | Token: 0x4041652
        void* BotCanRevive; // BotCanRevive | Token: 0x4041653
        void* ReviveCDTime; // ReviveCDTime | Token: 0x4041654
        void* ModeTemplateID; // ModeTemplateID | Token: 0x4041655
        void* TeamNum; // TeamNum | Token: 0x4041656
        void* TeamMemberNum; // TeamMemberNum | Token: 0x4041657
        void* RoundNum; // RoundNum | Token: 0x4041658
        void* FightPhaseDuration; // FightPhaseDuration | Token: 0x4041659
        void* PreparePhaseDuration; // PreparePhaseDuration | Token: 0x404165a
        void* MultiRoundsEnabled; // MultiRoundsEnabled | Token: 0x404165b
        void* ResetEquipment; // ResetEquipment | Token: 0x404165c
        void* MaxHP; // MaxHP | Token: 0x404165d
        void* MaxEP; // MaxEP | Token: 0x404165e
        void* StartEP; // StartEP | Token: 0x404165f
        void* AutoHealing; // AutoHealing | Token: 0x4041660
        void* Damage; // Damage | Token: 0x4041661
        void* Damaged; // Damaged | Token: 0x4041662
        void* MoveSpeed; // MoveSpeed | Token: 0x4041663
        void* JumpHeight; // JumpHeight | Token: 0x4041664
        void* LimitedAmmo; // LimitedAmmo | Token: 0x4041665
        void* AllowUserJoinMatchTimeoutSeconds; // AllowUserJoinMatchTimeoutSeconds | Token: 0x4041666
        void* CameraType; // CameraType | Token: 0x4041667
        void* CameraFov; // CameraFov | Token: 0x4041668
        void* CameraPitch; // CameraPitch | Token: 0x4041669
        void* CameraYaw; // CameraYaw | Token: 0x404166a
        void* CameraDistance; // CameraDistance | Token: 0x404166b
        void* CameraOffset; // CameraOffset | Token: 0x404166c
        void* CameraProjectionMode; // CameraProjectionMode | Token: 0x404166d
        void* CameraBlockMode; // CameraBlockMode | Token: 0x404166e
        void* MorphModeDisableTemplate; // MorphModeDisableTemplate | Token: 0x404166f
        void* EnableDeathObserver; // EnableDeathObserver | Token: 0x4041670
        void* UnlimitedBullet; // UnlimitedBullet | Token: 0x4041671
        void* UnlimitedGloowall; // UnlimitedGloowall | Token: 0x4041672
        void* UnlimitedThrowables; // UnlimitedThrowables | Token: 0x4041673
        void* RecommendStartGameNumber; // RecommendStartGameNumber | Token: 0x4041674
        void* EnableHalfwayJoin; // EnableHalfwayJoin | Token: 0x4041675
        void* EnableHalfwayJoinEffectTime; // EnableHalfwayJoinEffectTime | Token: 0x4041676
        void* HalfwayJoinEffectTime; // HalfwayJoinEffectTime | Token: 0x4041677
        void* HalfwayJoinNumberLimit; // HalfwayJoinNumberLimit | Token: 0x4041678
        void* HalfwayJoinNumber; // HalfwayJoinNumber | Token: 0x4041679
        void* DisableReconnect; // DisableReconnect | Token: 0x404167a
        void* EnableTotalToken; // EnableTotalToken | Token: 0x404167b
        void* EnableUGCToken; // EnableUGCToken | Token: 0x404167c
        void* EnableFreeQuit; // EnableFreeQuit | Token: 0x404167d
        void* EnableRuntimeDynamicNavMesh; // EnableRuntimeDynamicNavMesh | Token: 0x404167e
        void* AllowHangUpTime; // AllowHangUpTime | Token: 0x404167f
    };

    // TypeDefIndex: 34811 | Original: COW.GamePlay.UGCRuntime.EZoneType | Token: 0x20087fc
    struct EZoneType : Il2Cpp::Object {
        // Fields (10)
        void* value__; // value__ | Token: 0x4041680
        void* Stable; // Stable | Token: 0x4041681
        void* PreShrink; // PreShrink | Token: 0x4041682
        void* Shrink; // Shrink | Token: 0x4041683
        void* RandomPreShrink; // RandomPreShrink | Token: 0x4041684
        void* RandomShrink; // RandomShrink | Token: 0x4041685
        void* Count; // Count | Token: 0x4041686
        void* RandomPreMove; // RandomPreMove | Token: 0x4041687
        void* RandomMove; // RandomMove | Token: 0x4041688
        void* Invalid; // Invalid | Token: 0x4041689
    };

    // TypeDefIndex: 34812 | Original: COW.GamePlay.UGCRuntime.ELevelObjectName | Token: 0x20087fd
    struct ELevelObjectName : Il2Cpp::Object {
        // Fields (26)
        void* UGCSpawnPos; // UGCSpawnPos | Token: 0x404168a
        void* UGCCustomizeTrigger; // UGCCustomizeTrigger | Token: 0x404168b
        void* UGCLevelTrigger; // UGCLevelTrigger | Token: 0x404168c
        void* UGCLevelCheckPoint; // UGCLevelCheckPoint | Token: 0x404168d
        void* UGCLevelArrivalEndPoint; // UGCLevelArrivalEndPoint | Token: 0x404168e
        void* UGCMiniSentry; // UGCMiniSentry | Token: 0x404168f
        void* UGCAIGenerator; // UGCAIGenerator | Token: 0x4041690
        void* UGCCustomPath; // UGCCustomPath | Token: 0x4041691
        void* UGCLevelSupplyBoxTrigger; // UGCLevelSupplyBoxTrigger | Token: 0x4041692
        void* UGCLevelVendingMachine; // UGCLevelVendingMachine | Token: 0x4041693
        void* UGCEntityGenerator; // UGCEntityGenerator | Token: 0x4041694
        void* UGCDummyLevelObject; // UGCDummyLevelObject | Token: 0x4041695
        void* UGCCoinGenerator; // UGCCoinGenerator | Token: 0x4041696
        void* UGCLevelBasicScalableItem; // UGCLevelBasicScalableItem | Token: 0x4041697
        void* UGCSpawnBox; // UGCSpawnBox | Token: 0x4041698
        void* MusicElement; // MusicElement | Token: 0x4041699
        void* UGCLevelLowGravity; // UGCLevelLowGravity | Token: 0x404169a
        void* UGCWeaponGenerator; // UGCWeaponGenerator | Token: 0x404169b
        void* UGCReplaceableTexVFX; // UGCReplaceableTexVFX | Token: 0x404169c
        void* LootItemBox; // LootItemBox | Token: 0x404169d
        void* UGCCustom; // UGCCustom | Token: 0x404169e
        void* UGCStropShelf; // UGCStropShelf | Token: 0x404169f
        void* BigToyBall; // BigToyBall | Token: 0x40416a0
        void* WaterZone; // WaterZone | Token: 0x40416a1
        void* UGCCapsuleTrigger; // UGCCapsuleTrigger | Token: 0x40416a2
        void* UGCSphereTrigger; // UGCSphereTrigger | Token: 0x40416a3
    };

    // TypeDefIndex: 34813 | Original: COW.GamePlay.UGCRuntime.UGCInternalEntityID | Token: 0x20087fe
    struct UGCInternalEntityID : Il2Cpp::Object {
        // Fields (2)
        void* Global; // Global | Token: 0x40416a4
        void* ForType; // ForType | Token: 0x40416a5
    };

    // TypeDefIndex: 34814 | Original: COW.GamePlay.UGCRuntime.EWardrobeType | Token: 0x20087ff
    struct EWardrobeType : Il2Cpp::Object {
        // Fields (9)
        void* value__; // value__ | Token: 0x40416a6
        void* None; // None | Token: 0x40416a7
        void* Chest; // Chest | Token: 0x40416a8
        void* Legs; // Legs | Token: 0x40416a9
        void* Feet; // Feet | Token: 0x40416aa
        void* Face; // Face | Token: 0x40416ab
        void* Hair; // Hair | Token: 0x40416ac
        void* Set; // Set | Token: 0x40416ad
        void* HeadAdditive; // HeadAdditive | Token: 0x40416ae
    };

    // TypeDefIndex: 34815 | Original: COW.GamePlay.UGCRuntime.UGCKickedReason | Token: 0x2008800
    struct UGCKickedReason : Il2Cpp::Object {
        // Fields (3)
        void* value__; // value__ | Token: 0x40416af
        void* None; // None | Token: 0x40416b0
        void* HangUp; // HangUp | Token: 0x40416b1
    };

    // TypeDefIndex: 34816 | Original: COW.GamePlay.UGCRuntime.UGCPhysicsConfig | Token: 0x2008801
    struct UGCPhysicsConfig : Il2Cpp::Object {
        // Fields (2)
        void* COLLISION_EVENT_MODECONFIG_KEY; // COLLISION_EVENT_MODECONFIG_KEY | Token: 0x40416b2
        void* COLLISION_EVENT_DEFAULT_VALUE; // COLLISION_EVENT_DEFAULT_VALUE | Token: 0x40416b3
    };

    // TypeDefIndex: 34817 | Original: COW.GamePlay.UGCRuntime.ActorType | Token: 0x2008802
    struct ActorType : Il2Cpp::Object {
        // Fields (5)
        void* value__; // value__ | Token: 0x40416b4
        void* None; // None | Token: 0x40416b5
        void* PHY_STATIC; // PHY_STATIC | Token: 0x40416b6
        void* PHY_DYNAMIC; // PHY_DYNAMIC | Token: 0x40416b7
        void* PHY_KINEMATIC; // PHY_KINEMATIC | Token: 0x40416b8
    };

    // TypeDefIndex: 34818 | Original: COW.GamePlay.UGCRuntime.ForceType | Token: 0x2008803
    struct ForceType : Il2Cpp::Object {
        // Fields (6)
        void* value__; // value__ | Token: 0x40416b9
        void* None; // None | Token: 0x40416ba
        void* PHY_FORCETYPE_FORCE; // PHY_FORCETYPE_FORCE | Token: 0x40416bb
        void* PHY_FORCETYPE_ACCELERATION; // PHY_FORCETYPE_ACCELERATION | Token: 0x40416bc
        void* PHY_FORCETYPE_IMPULSE; // PHY_FORCETYPE_IMPULSE | Token: 0x40416bd
        void* PHY_FORCETYPE_VELOCITY_CHANAGE; // PHY_FORCETYPE_VELOCITY_CHANAGE | Token: 0x40416be
    };

    // TypeDefIndex: 34819 | Original: COW.GamePlay.UGCRuntime.ShapeType | Token: 0x2008804
    struct ShapeType : Il2Cpp::Object {
        // Fields (7)
        void* value__; // value__ | Token: 0x40416bf
        void* None; // None | Token: 0x40416c0
        void* PHY_BOX; // PHY_BOX | Token: 0x40416c1
        void* PHY_SPHERE; // PHY_SPHERE | Token: 0x40416c2
        void* PHY_CAPSULE; // PHY_CAPSULE | Token: 0x40416c3
        void* PHY_CONVEXTMESH; // PHY_CONVEXTMESH | Token: 0x40416c4
        void* PHY_TRIANGLEMESH; // PHY_TRIANGLEMESH | Token: 0x40416c5
    };

    // TypeDefIndex: 34821 | Original: COW.GamePlay.UGCRuntime.UgcPublic | Token: 0x2008805
    struct UgcPublic : Il2Cpp::Object {

        // Methods (17)
        // Method: OnRecycle() | Slot: 198 | Token: 0xffffffff
        using fn_OnRecycle = void* (*)(UgcPublic* __this);
        // Method: sembly-CSharp.dll() | Slot: 25770 | Token: 0xffffffff
        using fn_sembly_CSharp_dll = void* (*)(UgcPublic* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UgcPublic* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(UgcPublic* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7e0e
        using fn_Method_4 = void* (*)(UgcPublic* __this);
        // Method: geWithCondition(void* cam) | Slot: 9541 | Token: 0x1d58ab
        using fn_geWithCondition = void* (*)(UgcPublic* __this, void* cam);
        // Method: Method_6() | Slot: 32270 | Token: 0xffff
        using fn_Method_6 = void* (*)(UgcPublic* __this);
        // Method: t() | Slot: 26386 | Token: 0x6
        using fn_t = void* (*)(UgcPublic* __this);
        // Method: () | Slot: 65535 | Token: 0x60364b0
        using fn_unnamed = void* (*)(UgcPublic* __this);
        // Method: get_ReceivedList() | Slot: 2182 | Token: 0xffffffff
        using fn_get_ReceivedList = void* (*)(UgcPublic* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25778 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UgcPublic* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UgcPublic* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0x924e
        using fn_Method_12 = void* (*)(UgcPublic* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x7e10
        using fn_Method_13 = void* (*)(UgcPublic* __this);
        // Method: Method_14(void* d) | Slot: 9541 | Token: 0x4534
        using fn_Method_14 = void* (*)(UgcPublic* __this, void* d);
        // Method: Method_15() | Slot: 32272 | Token: 0x18
        using fn_Method_15 = void* (*)(UgcPublic* __this);
        // Method: g() | Slot: 11248 | Token: 0xc4
        using fn_g = void* (*)(UgcPublic* __this);
    };

    // TypeDefIndex: 34822 | Original: COW.GamePlay.UGCRuntime.DirectedPoint | Token: 0x2008807
    struct DirectedPoint : Il2Cpp::Object {
        // Fields (2)
        void* _Position_k__BackingField; // <Position>k__BackingField | Token: 0x40416c9
        void* _Forward_k__BackingField; // <Forward>k__BackingField | Token: 0x40416ca

        // Methods (9)
        // Method: () | Slot: 65535 | Token: 0x60364b8
        using fn_unnamed = void* (*)(DirectedPoint* __this);
        // Method: set_MyReceivedData() | Slot: 2182 | Token: 0xffffffff
        using fn_set_MyReceivedData = void* (*)(DirectedPoint* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25786 | Token: 0x21cd0
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(DirectedPoint* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(DirectedPoint* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x69c4
        using fn_Method_4 = void* (*)(DirectedPoint* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7e10
        using fn_Method_5 = void* (*)(DirectedPoint* __this);
        // Method: hCondition(void* priority) | Slot: 9541 | Token: 0x50d6e0
        using fn_hCondition = void* (*)(DirectedPoint* __this, void* priority);
        // Method: Method_7() | Slot: 32272 | Token: 0x22
        using fn_Method_7 = void* (*)(DirectedPoint* __this);
        // Method: Interval() | Slot: 11315 | Token: 0xc4
        using fn_Interval = void* (*)(DirectedPoint* __this);
    };

    // TypeDefIndex: 34823 | Original: COW.GamePlay.UGCRuntime.EUGCStatisticalErrorType | Token: 0x2008808
    struct EUGCStatisticalErrorType : Il2Cpp::Object {
        // Fields (2)
        void* value__; // value__ | Token: 0x40416cb
        void* Unknown; // Unknown | Token: 0x40416cc
    };

    // TypeDefIndex: 34824 | Original: COW.GamePlay.UGCRuntime.UGCEventLogBase | Token: 0x2008809
    struct UGCEventLogBase : Il2Cpp::Object {

        // Methods (1)
        // Method: (void* OJEPOBEENEK, void* EIOKHLKJEEL) | Slot: 65535 | Token: 0x60364c0
        using fn_unnamed = void* (*)(UGCEventLogBase* __this, void* OJEPOBEENEK, void* EIOKHLKJEEL);
    };

    // TypeDefIndex: 34825 | Original: COW.GamePlay.UGCRuntime.UGCStatisticalData | Token: 0x200880a
    struct UGCStatisticalData : Il2Cpp::Object {
        // Fields (10)
        void* _MatchID_k__BackingField; // <MatchID>k__BackingField | Token: 0x40416cd
        void* _Region_k__BackingField; // <Region>k__BackingField | Token: 0x40416ce
        void* _WorkshopCode_k__BackingField; // <WorkshopCode>k__BackingField | Token: 0x40416cf
        void* _GameMode_k__BackingField; // <GameMode>k__BackingField | Token: 0x40416d0
        void* _CustomGameMode_k__BackingField; // <CustomGameMode>k__BackingField | Token: 0x40416d1
        void* _MatchMode_k__BackingField; // <MatchMode>k__BackingField | Token: 0x40416d2
        void* _GroupMode_k__BackingField; // <GroupMode>k__BackingField | Token: 0x40416d3
        void* _MapID_k__BackingField; // <MapID>k__BackingField | Token: 0x40416d4
        void* _IsCrash_k__BackingField; // <IsCrash>k__BackingField | Token: 0x40416d5
        void* _ApiErrInfos_k__BackingField; // <ApiErrInfos>k__BackingField | Token: 0x40416d6

        // Methods (21)
        // Method: AddNameHud() | Slot: 134 | Token: 0xffffffff
        using fn_AddNameHud = void* (*)(UGCStatisticalData* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25794 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCStatisticalData* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCStatisticalData* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(UGCStatisticalData* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7e10
        using fn_Method_4 = void* (*)(UGCStatisticalData* __this);
        // Method: Method_5(void* strAPPSecret) | Slot: 9541 | Token: 0x49aa
        using fn_Method_5 = void* (*)(UGCStatisticalData* __this, void* strAPPSecret);
        // Method: Method_6() | Slot: 32272 | Token: 0xffff
        using fn_Method_6 = void* (*)(UGCStatisticalData* __this);
        // Method: bum() | Slot: 22671 | Token: 0x6
        using fn_bum = void* (*)(UGCStatisticalData* __this);
        // Method: () | Slot: 65535 | Token: 0x60364c8
        using fn_unnamed = void* (*)(UGCStatisticalData* __this);
        // Method: <>iFixBaseProxy_OnRecycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnRecycle = void* (*)(UGCStatisticalData* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25802 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCStatisticalData* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCStatisticalData* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0xa52f
        using fn_Method_12 = void* (*)(UGCStatisticalData* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x7e11
        using fn_Method_13 = void* (*)(UGCStatisticalData* __this);
        // Method: Method_14(void* d) | Slot: 9541 | Token: 0x4513
        using fn_Method_14 = void* (*)(UGCStatisticalData* __this, void* d);
        // Method: Method_15() | Slot: 32273 | Token: 0x10049
        using fn_Method_15 = void* (*)(UGCStatisticalData* __this);
        // Method: bum() | Slot: 10662 | Token: 0x81
        using fn_bum = void* (*)(UGCStatisticalData* __this);
        // Method: OriginSkyboxMaterial() | Slot: 19 | Token: 0x60364d0
        using fn_OriginSkyboxMaterial = void* (*)(UGCStatisticalData* __this);
        // Method: OnUpdate() | Slot: 198 | Token: 0xffffffff
        using fn_OnUpdate = void* (*)(UGCStatisticalData* __this);
        // Method: service() | Slot: 25810 | Token: 0xffffffff
        using fn_service = void* (*)(UGCStatisticalData* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCStatisticalData* __this);
    };

    // TypeDefIndex: 34826 | Original: COW.GamePlay.UGCRuntime.UGCArchTypeFilter | Token: 0x200880b
    struct UGCArchTypeFilter : Il2Cpp::Object {
        // Fields (3)
        void* _Has_k__BackingField; // <Has>k__BackingField | Token: 0x40416d7
        void* _Not_k__BackingField; // <Not>k__BackingField | Token: 0x40416d8
        void* _Any_k__BackingField; // <Any>k__BackingField | Token: 0x40416d9

        // Methods (11)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(UGCArchTypeFilter* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x7e11
        using fn_Method_1 = void* (*)(UGCArchTypeFilter* __this);
        // Method: Method_2(void* priority) | Slot: 9541 | Token: 0x592d28
        using fn_Method_2 = void* (*)(UGCArchTypeFilter* __this, void* priority);
        // Method: Method_3() | Slot: 32273 | Token: 0xffff
        using fn_Method_3 = void* (*)(UGCArchTypeFilter* __this);
        // Method: bum() | Slot: 11584 | Token: 0x81
        using fn_bum = void* (*)(UGCArchTypeFilter* __this);
        // Method: OriginSkyboxMaterial(void* GGAOIPIHOBP, void* BBPCHCNOECP, void* HACIJIFIDKM) | Slot: 65535 | Token: 0x60364d8
        using fn_OriginSkyboxMaterial = void* (*)(UGCArchTypeFilter* __this, void* GGAOIPIHOBP, void* BBPCHCNOECP, void* HACIJIFIDKM);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCArchTypeFilter* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25818 | Token: 0x21cdd
        using fn_GetExchangeCurrencySubType = void* (*)(UGCArchTypeFilter* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCArchTypeFilter* __this);
        // Method: Method_9() | Slot: 7390 | Token: 0x12545
        using fn_Method_9 = void* (*)(UGCArchTypeFilter* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x7e11
        using fn_Method_10 = void* (*)(UGCArchTypeFilter* __this);
    };

    // TypeDefIndex: 34827 | Original: COW.GamePlay.UGCRuntime.CustomMatchEventLog | Token: 0x200880c
    struct CustomMatchEventLog : Il2Cpp::Object {
        // Fields (11)
        void* _MatchID_k__BackingField; // <MatchID>k__BackingField | Token: 0x40416da
        void* _Region_k__BackingField; // <Region>k__BackingField | Token: 0x40416db
        void* _WorkshopCode_k__BackingField; // <WorkshopCode>k__BackingField | Token: 0x40416dc
        void* _GameMode_k__BackingField; // <GameMode>k__BackingField | Token: 0x40416dd
        void* _CustomGameMode_k__BackingField; // <CustomGameMode>k__BackingField | Token: 0x40416de
        void* _MatchMode_k__BackingField; // <MatchMode>k__BackingField | Token: 0x40416df
        void* _GroupMode_k__BackingField; // <GroupMode>k__BackingField | Token: 0x40416e0
        void* _MapID_k__BackingField; // <MapID>k__BackingField | Token: 0x40416e1
        void* _RoundID_k__BackingField; // <RoundID>k__BackingField | Token: 0x40416e2
        void* _CustomKeys_k__BackingField; // <CustomKeys>k__BackingField | Token: 0x40416e3
        void* _CustomValues_k__BackingField; // <CustomValues>k__BackingField | Token: 0x40416e4

        // Methods (23)
        // Method: Method_0() | Slot: 27076 | Token: 0x1d58c5
        using fn_Method_0 = void* (*)(CustomMatchEventLog* __this);
        // Method: Method_1() | Slot: 32275 | Token: 0xffff
        using fn_Method_1 = void* (*)(CustomMatchEventLog* __this);
        // Method: g() | Slot: 16681 | Token: 0x96
        using fn_g = void* (*)(CustomMatchEventLog* __this);
        // Method: iginSkyboxMaterial() | Slot: 68 | Token: 0x60364e0
        using fn_iginSkyboxMaterial = void* (*)(CustomMatchEventLog* __this);
        // Method: SyncAction() | Slot: 198 | Token: 0xffffffff
        using fn_SyncAction = void* (*)(CustomMatchEventLog* __this);
        // Method: hangeCurrencyType() | Slot: 25826 | Token: 0x21ce2
        using fn_hangeCurrencyType = void* (*)(CustomMatchEventLog* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(CustomMatchEventLog* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x12545
        using fn_Method_7 = void* (*)(CustomMatchEventLog* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x7e13
        using fn_Method_8 = void* (*)(CustomMatchEventLog* __this);
        // Method: Method_9(void* priority) | Slot: 9541 | Token: 0x585d81
        using fn_Method_9 = void* (*)(CustomMatchEventLog* __this, void* priority);
        // Method: Method_10() | Slot: 32275 | Token: 0x3ffff
        using fn_Method_10 = void* (*)(CustomMatchEventLog* __this);
        // Method: bum() | Slot: 17669 | Token: 0xc6
        using fn_bum = void* (*)(CustomMatchEventLog* __this);
        // Method: iginSkyboxMaterial() | Slot: 18 | Token: 0x60364e8
        using fn_iginSkyboxMaterial = void* (*)(CustomMatchEventLog* __this);
        // Method: DNOIMMPIOBJ() | Slot: 129 | Token: 0xffffffff
        using fn_DNOIMMPIOBJ = void* (*)(CustomMatchEventLog* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25834 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(CustomMatchEventLog* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(CustomMatchEventLog* __this);
        // Method: Method_16() | Slot: 7398 | Token: 0x12545
        using fn_Method_16 = void* (*)(CustomMatchEventLog* __this);
        // Method: Method_17() | Slot: 0 | Token: 0x7e13
        using fn_Method_17 = void* (*)(CustomMatchEventLog* __this);
        // Method: Method_18() | Slot: 27076 | Token: 0x1d58c5
        using fn_Method_18 = void* (*)(CustomMatchEventLog* __this);
        // Method: Method_19() | Slot: 32276 | Token: 0xffff
        using fn_Method_19 = void* (*)(CustomMatchEventLog* __this);
        // Method: g() | Slot: 5305 | Token: 0xc4
        using fn_g = void* (*)(CustomMatchEventLog* __this);
        // Method: ginSkyboxMaterial(void* OCCLMDNGINA) | Slot: 65535 | Token: 0x60364f0
        using fn_ginSkyboxMaterial = void* (*)(CustomMatchEventLog* __this, void* OCCLMDNGINA);
        // Method: SyncAction() | Slot: 198 | Token: 0xffffffff
        using fn_SyncAction = void* (*)(CustomMatchEventLog* __this);
    };

    // TypeDefIndex: 34828 | Original: COW.GamePlay.UGCRuntime.CustomUserEventLog | Token: 0x200880d
    struct CustomUserEventLog : Il2Cpp::Object {
        // Fields (12)
        void* _AccountID_k__BackingField; // <AccountID>k__BackingField | Token: 0x40416e5
        void* _MatchID_k__BackingField; // <MatchID>k__BackingField | Token: 0x40416e6
        void* _Region_k__BackingField; // <Region>k__BackingField | Token: 0x40416e7
        void* _WorkshopCode_k__BackingField; // <WorkshopCode>k__BackingField | Token: 0x40416e8
        void* _GameMode_k__BackingField; // <GameMode>k__BackingField | Token: 0x40416e9
        void* _CustomGameMode_k__BackingField; // <CustomGameMode>k__BackingField | Token: 0x40416ea
        void* _MatchMode_k__BackingField; // <MatchMode>k__BackingField | Token: 0x40416eb
        void* _GroupMode_k__BackingField; // <GroupMode>k__BackingField | Token: 0x40416ec
        void* _MapID_k__BackingField; // <MapID>k__BackingField | Token: 0x40416ed
        void* _RoundID_k__BackingField; // <RoundID>k__BackingField | Token: 0x40416ee
        void* _CustomKeys_k__BackingField; // <CustomKeys>k__BackingField | Token: 0x40416ef
        void* _CustomValues_k__BackingField; // <CustomValues>k__BackingField | Token: 0x40416f0

        // Methods (25)
        // Method: hangeCurrencyType() | Slot: 25842 | Token: 0x21ce9
        using fn_hangeCurrencyType = void* (*)(CustomUserEventLog* __this);
        // Method: t() | Slot: 65535 | Token: 0x8000000
        using fn_t = void* (*)(CustomUserEventLog* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x12545
        using fn_Method_2 = void* (*)(CustomUserEventLog* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7e14
        using fn_Method_3 = void* (*)(CustomUserEventLog* __this);
        // Method: ateTextureSizeByChannelType(void* priority) | Slot: 9541 | Token: 0x44fb
        using fn_ateTextureSizeByChannelType = void* (*)(CustomUserEventLog* __this, void* priority);
        // Method: Method_5() | Slot: 32276 | Token: 0x16
        using fn_Method_5 = void* (*)(CustomUserEventLog* __this);
        // Method: t() | Slot: 16095 | Token: 0xc6
        using fn_t = void* (*)(CustomUserEventLog* __this);
        // Method: ginSkyboxMaterial() | Slot: 65535 | Token: 0x60364f8
        using fn_ginSkyboxMaterial = void* (*)(CustomUserEventLog* __this);
        // Method: GetResourceIDByColliderType() | Slot: 150 | Token: 0xffffffff
        using fn_GetResourceIDByColliderType = void* (*)(CustomUserEventLog* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25850 | Token: 0x21ced
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(CustomUserEventLog* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(CustomUserEventLog* __this);
        // Method: Method_11() | Slot: 65535 | Token: 0x12545
        using fn_Method_11 = void* (*)(CustomUserEventLog* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x7e14
        using fn_Method_12 = void* (*)(CustomUserEventLog* __this);
        // Method: extureSizeByChannelType(void* cam) | Slot: 9541 | Token: 0x1d58ab
        using fn_extureSizeByChannelType = void* (*)(CustomUserEventLog* __this, void* cam);
        // Method: Method_14() | Slot: 32276 | Token: 0xffff
        using fn_Method_14 = void* (*)(CustomUserEventLog* __this);
        // Method: t() | Slot: 16681 | Token: 0x6
        using fn_t = void* (*)(CustomUserEventLog* __this);
        // Method: SkyboxMaterial() | Slot: 68 | Token: 0x6036500
        using fn_SkyboxMaterial = void* (*)(CustomUserEventLog* __this);
        // Method: OnUserDefineReplicationInfo() | Slot: 196 | Token: 0xffffffff
        using fn_OnUserDefineReplicationInfo = void* (*)(CustomUserEventLog* __this);
        // Method: p.dll() | Slot: 25858 | Token: 0xffffffff
        using fn_p_dll = void* (*)(CustomUserEventLog* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(CustomUserEventLog* __this);
        // Method: Method_20() | Slot: 7409 | Token: 0x12545
        using fn_Method_20 = void* (*)(CustomUserEventLog* __this);
        // Method: Method_21() | Slot: 0 | Token: 0x7e17
        using fn_Method_21 = void* (*)(CustomUserEventLog* __this);
        // Method: Method_22(void* priority) | Slot: 9541 | Token: 0x451e
        using fn_Method_22 = void* (*)(CustomUserEventLog* __this, void* priority);
        // Method: Method_23() | Slot: 32279 | Token: 0x51
        using fn_Method_23 = void* (*)(CustomUserEventLog* __this);
        // Method: bum() | Slot: 13865 | Token: 0xc6
        using fn_bum = void* (*)(CustomUserEventLog* __this);
    };

    // TypeDefIndex: 34829 | Original: COW.GamePlay.UGCRuntime.UGCTimeModule | Token: 0x200880e
    struct UGCTimeModule : Il2Cpp::Object {
        // Fields (2)
        void* ugcRuntime; // ugcRuntime | Token: 0x40416f1
        void* m_IsPaused; // m_IsPaused | Token: 0x40416f2

        // Methods (8)
        // Method: SkyboxMaterial(void* LALADOJHOBE, void* GCJPAAPKMMA) | Slot: 65535 | Token: 0x6036508
        using fn_SkyboxMaterial = void* (*)(UGCTimeModule* __this, void* LALADOJHOBE, void* GCJPAAPKMMA);
        // Method: LHHLGCBNHML() | Slot: 129 | Token: 0xffffffff
        using fn_LHHLGCBNHML = void* (*)(UGCTimeModule* __this);
        // Method: _WAIT() | Slot: 25866 | Token: 0x21cf7
        using fn__WAIT = void* (*)(UGCTimeModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTimeModule* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x6c47
        using fn_Method_4 = void* (*)(UGCTimeModule* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7e17
        using fn_Method_5 = void* (*)(UGCTimeModule* __this);
        // Method: Method_6() | Slot: 25997 | Token: 0x592ecc
        using fn_Method_6 = void* (*)(UGCTimeModule* __this);
        // Method: Method_7() | Slot: 32279 | Token: 0xffff
        using fn_Method_7 = void* (*)(UGCTimeModule* __this);
    };

    // TypeDefIndex: 34831 | Original: COW.GamePlay.UGCRuntime.UGCTransformNode | Token: 0x200880f
    struct UGCTransformNode : Il2Cpp::Object {
        // Fields (44)
        void* m_Manager; // m_Manager | Token: 0x40416f3
        void* _EntityID_k__BackingField; // <EntityID>k__BackingField | Token: 0x40416f4
        void* m_CachedTransform; // m_CachedTransform | Token: 0x40416f5
        void* _Parent_k__BackingField; // <Parent>k__BackingField | Token: 0x40416f6
        void* _Children_k__BackingField; // <Children>k__BackingField | Token: 0x40416f7
        void* _WorldPos_k__BackingField; // <WorldPos>k__BackingField | Token: 0x40416f8
        void* _LocalPos_k__BackingField; // <LocalPos>k__BackingField | Token: 0x40416f9
        void* _WorldRot_k__BackingField; // <WorldRot>k__BackingField | Token: 0x40416fa
        void* _LocalRot_k__BackingField; // <LocalRot>k__BackingField | Token: 0x40416fb
        void* _LocalScale_k__BackingField; // <LocalScale>k__BackingField | Token: 0x40416fc
        void* _WorldScale_k__BackingField; // <WorldScale>k__BackingField | Token: 0x40416fd
        void* m_DirtyList; // m_DirtyList | Token: 0x40416fe
        void* V3Null; // V3Null | Token: 0x40416ff
        void* QuatNull; // QuatNull | Token: 0x4041700
        void* m_KeepWorldPos; // m_KeepWorldPos | Token: 0x4041701
        void* _LastPacketID_k__BackingField; // <LastPacketID>k__BackingField | Token: 0x4041702
        void* SmoothingMethodType; // SmoothingMethodType | Token: 0x4041703
        void* m_AccumulatedErrorSeconds; // m_AccumulatedErrorSeconds | Token: 0x4041704
        void* _AtRest_k__BackingField; // <AtRest>k__BackingField | Token: 0x4041705
        void* _NeedSmooth_k__BackingField; // <NeedSmooth>k__BackingField | Token: 0x4041706
        void* _IncludePos_k__BackingField; // <IncludePos>k__BackingField | Token: 0x4041707
        void* _IncludeRot_k__BackingField; // <IncludeRot>k__BackingField | Token: 0x4041708
        void* _IncludeScale_k__BackingField; // <IncludeScale>k__BackingField | Token: 0x4041709
        void* _IsInterpolatingPos_k__BackingField; // <IsInterpolatingPos>k__BackingField | Token: 0x404170a
        void* _IsInterpolatingRot_k__BackingField; // <IsInterpolatingRot>k__BackingField | Token: 0x404170b
        void* _IsInterpolatingScale_k__BackingField; // <IsInterpolatingScale>k__BackingField | Token: 0x404170c
        void* _LinearVelocity_k__BackingField; // <LinearVelocity>k__BackingField | Token: 0x404170d
        void* _AngularVelocity_k__BackingField; // <AngularVelocity>k__BackingField | Token: 0x404170e
        void* m_VisualPos; // m_VisualPos | Token: 0x404170f
        void* m_VisualRot; // m_VisualRot | Token: 0x4041710
        void* m_VisualScale; // m_VisualScale | Token: 0x4041711
        void* EPSILON_POS; // EPSILON_POS | Token: 0x4041712
        void* EPSILON_POS_SQUARE; // EPSILON_POS_SQUARE | Token: 0x4041713
        void* EPSILON_ROT; // EPSILON_ROT | Token: 0x4041714
        void* EPSILON_SCALE; // EPSILON_SCALE | Token: 0x4041715
        void* EPSILON_VEL_SQUARE; // EPSILON_VEL_SQUARE | Token: 0x4041716
        void* EPSILON_AVEL_SQUARE; // EPSILON_AVEL_SQUARE | Token: 0x4041717
        void* MAX_ACCUMULATED_ERROR_SECONDS; // MAX_ACCUMULATED_ERROR_SECONDS | Token: 0x4041718
        void* MIN_ACCUMULATED_ERROR; // MIN_ACCUMULATED_ERROR | Token: 0x4041719
        void* MAX_POS_ERROR_TO_HARDSNAP; // MAX_POS_ERROR_TO_HARDSNAP | Token: 0x404171a
        void* EXTRAPOLATION_POS_RATIO; // EXTRAPOLATION_POS_RATIO | Token: 0x404171b
        void* EXTRAPOLATION_ROT_RATIO; // EXTRAPOLATION_ROT_RATIO | Token: 0x404171c
        void* PREDICT_BLEND_RATIO; // PREDICT_BLEND_RATIO | Token: 0x404171d
        void* FINAL_BLEND_RATIO; // FINAL_BLEND_RATIO | Token: 0x404171e

        // Methods (85)
        // Method: shEffect() | Slot: 12019 | Token: 0x86
        using fn_shEffect = void* (*)(UGCTransformNode* __this);
        // Method: SkyboxMaterial() | Slot: 65535 | Token: 0x6036510
        using fn_SkyboxMaterial = void* (*)(UGCTransformNode* __this);
        // Method: GetUsedTimes() | Slot: 134 | Token: 0xffffffff
        using fn_GetUsedTimes = void* (*)(UGCTransformNode* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25874 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTransformNode* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCTransformNode* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(UGCTransformNode* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x7e17
        using fn_Method_6 = void* (*)(UGCTransformNode* __this);
        // Method: Method_7() | Slot: 27076 | Token: 0x592f5c
        using fn_Method_7 = void* (*)(UGCTransformNode* __this);
        // Method: Method_8() | Slot: 32279 | Token: 0xffff
        using fn_Method_8 = void* (*)(UGCTransformNode* __this);
        // Method: t() | Slot: 12153 | Token: 0x81
        using fn_t = void* (*)(UGCTransformNode* __this);
        // Method: SkyboxMaterial(void* DBEJONOGLFN) | Slot: 65535 | Token: 0x6036518
        using fn_SkyboxMaterial = void* (*)(UGCTransformNode* __this, void* DBEJONOGLFN);
        // Method: FOBOEBAEFDF() | Slot: 129 | Token: 0xffffffff
        using fn_FOBOEBAEFDF = void* (*)(UGCTransformNode* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25882 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTransformNode* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTransformNode* __this);
        // Method: Method_14() | Slot: 65535 | Token: 0x12545
        using fn_Method_14 = void* (*)(UGCTransformNode* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x7e17
        using fn_Method_15 = void* (*)(UGCTransformNode* __this);
        // Method: Method_16(void* priority) | Slot: 9541 | Token: 0x587a0c
        using fn_Method_16 = void* (*)(UGCTransformNode* __this, void* priority);
        // Method: Method_17() | Slot: 32279 | Token: 0x1ffff
        using fn_Method_17 = void* (*)(UGCTransformNode* __this);
        // Method: bum() | Slot: 12747 | Token: 0x86
        using fn_bum = void* (*)(UGCTransformNode* __this);
        // Method: SkyboxMaterial(void* GLJGHEAPBOF) | Slot: 65535 | Token: 0x6036520
        using fn_SkyboxMaterial = void* (*)(UGCTransformNode* __this, void* GLJGHEAPBOF);
        // Method: NNDHNPNOCPB() | Slot: 129 | Token: 0xffffffff
        using fn_NNDHNPNOCPB = void* (*)(UGCTransformNode* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25890 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCTransformNode* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTransformNode* __this);
        // Method: Method_23() | Slot: 65535 | Token: 0x12545
        using fn_Method_23 = void* (*)(UGCTransformNode* __this);
        // Method: Method_24() | Slot: 0 | Token: 0x7e17
        using fn_Method_24 = void* (*)(UGCTransformNode* __this);
        // Method: Method_25(void* circlePlane) | Slot: 9541 | Token: 0x67
        using fn_Method_25 = void* (*)(UGCTransformNode* __this, void* circlePlane);
        // Method: Method_26() | Slot: 32279 | Token: 0xffff
        using fn_Method_26 = void* (*)(UGCTransformNode* __this);
        // Method: bum() | Slot: 55207 | Token: 0x1891
        using fn_bum = void* (*)(UGCTransformNode* __this);
        // Method: SkyboxMaterial() | Slot: 65535 | Token: 0x6036528
        using fn_SkyboxMaterial = void* (*)(UGCTransformNode* __this);
        // Method: <>iFixBaseProxy_GetMaxRepDataCount() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_GetMaxRepDataCount = void* (*)(UGCTransformNode* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25898 | Token: 0x21d01
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTransformNode* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCTransformNode* __this);
        // Method: Method_32() | Slot: 7426 | Token: 0x12545
        using fn_Method_32 = void* (*)(UGCTransformNode* __this);
        // Method: Method_33() | Slot: 0 | Token: 0x7e17
        using fn_Method_33 = void* (*)(UGCTransformNode* __this);
        // Method: Method_34() | Slot: 54255 | Token: 0x4129
        using fn_Method_34 = void* (*)(UGCTransformNode* __this);
        // Method: Method_35() | Slot: 32280 | Token: 0x44
        using fn_Method_35 = void* (*)(UGCTransformNode* __this);
        // Method: bum() | Slot: 17683 | Token: 0xc6
        using fn_bum = void* (*)(UGCTransformNode* __this);
        // Method: kyboxMaterial(void* DJAPBCKDFKA) | Slot: 73 | Token: 0x6036530
        using fn_kyboxMaterial = void* (*)(UGCTransformNode* __this, void* DJAPBCKDFKA);
        // Method: OnStart() | Slot: 196 | Token: 0xffffffff
        using fn_OnStart = void* (*)(UGCTransformNode* __this);
        // Method: Assembly-CSharp.dll() | Slot: 25906 | Token: 0xffffffff
        using fn_Assembly_CSharp_dll = void* (*)(UGCTransformNode* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCTransformNode* __this);
        // Method: Method_41() | Slot: 65535 | Token: 0x12545
        using fn_Method_41 = void* (*)(UGCTransformNode* __this);
        // Method: Method_42() | Slot: 0 | Token: 0x7e18
        using fn_Method_42 = void* (*)(UGCTransformNode* __this);
        // Method: Method_43(void* d) | Slot: 9541 | Token: 0x67
        using fn_Method_43 = void* (*)(UGCTransformNode* __this, void* d);
        // Method: Method_44() | Slot: 32280 | Token: 0xffff
        using fn_Method_44 = void* (*)(UGCTransformNode* __this);
        // Method: bum() | Slot: 22421 | Token: 0x6
        using fn_bum = void* (*)(UGCTransformNode* __this);
        // Method: kyboxMaterial(void* P0) | Slot: 65535 | Token: 0x6036538
        using fn_kyboxMaterial = void* (*)(UGCTransformNode* __this, void* P0);
        // Method: <>iFixBaseProxy_OnStart() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnStart = void* (*)(UGCTransformNode* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 25914 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCTransformNode* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCTransformNode* __this);
        // Method: Method_50() | Slot: 65535 | Token: 0x12545
        using fn_Method_50 = void* (*)(UGCTransformNode* __this);
        // Method: Method_51() | Slot: 0 | Token: 0x7e19
        using fn_Method_51 = void* (*)(UGCTransformNode* __this);
        // Method: Method_52() | Slot: 27845 | Token: 0x33629
        using fn_Method_52 = void* (*)(UGCTransformNode* __this);
        // Method: Method_53() | Slot: 32285 | Token: 0xffff
        using fn_Method_53 = void* (*)(UGCTransformNode* __this);
        // Method: Interval() | Slot: 12914 | Token: 0x886
        using fn_Interval = void* (*)(UGCTransformNode* __this);
        // Method: Material() | Slot: 65535 | Token: 0x6036540
        using fn_Material = void* (*)(UGCTransformNode* __this);
        // Method: OnAwake() | Slot: 196 | Token: 0xffffffff
        using fn_OnAwake = void* (*)(UGCTransformNode* __this);
        // Method: () | Slot: 25922 | Token: 0xffffffff
        using fn_unnamed = void* (*)(UGCTransformNode* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCTransformNode* __this);
        // Method: Method_59() | Slot: 65535 | Token: 0x9fca
        using fn_Method_59 = void* (*)(UGCTransformNode* __this);
        // Method: Method_60() | Slot: 0 | Token: 0x7e1d
        using fn_Method_60 = void* (*)(UGCTransformNode* __this);
        // Method: Method_61(void* priority) | Slot: 9541 | Token: 0x567da3
        using fn_Method_61 = void* (*)(UGCTransformNode* __this, void* priority);
        // Method: Method_62() | Slot: 32285 | Token: 0xffff
        using fn_Method_62 = void* (*)(UGCTransformNode* __this);
        // Method: bum() | Slot: 12987 | Token: 0xc4
        using fn_bum = void* (*)(UGCTransformNode* __this);
        // Method: Material() | Slot: 65535 | Token: 0x6036548
        using fn_Material = void* (*)(UGCTransformNode* __this);
        // Method: ChangeModelRes() | Slot: 134 | Token: 0xffffffff
        using fn_ChangeModelRes = void* (*)(UGCTransformNode* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25930 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCTransformNode* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCTransformNode* __this);
        // Method: Method_68() | Slot: 65535 | Token: 0x12545
        using fn_Method_68 = void* (*)(UGCTransformNode* __this);
        // Method: Method_69() | Slot: 0 | Token: 0x7e1d
        using fn_Method_69 = void* (*)(UGCTransformNode* __this);
        // Method: Method_70(void* d) | Slot: 9541 | Token: 0x5932d3
        using fn_Method_70 = void* (*)(UGCTransformNode* __this, void* d);
        // Method: Method_71() | Slot: 32285 | Token: 0x1ffff
        using fn_Method_71 = void* (*)(UGCTransformNode* __this);
        // Method: bum() | Slot: 13865 | Token: 0x81
        using fn_bum = void* (*)(UGCTransformNode* __this);
        // Method: Material(void* OJEPOBEENEK, void* EIOKHLKJEEL) | Slot: 90 | Token: 0x6036550
        using fn_Material = void* (*)(UGCTransformNode* __this, void* OJEPOBEENEK, void* EIOKHLKJEEL);
        // Method: KCPEAJOIFBG() | Slot: 129 | Token: 0xffffffff
        using fn_KCPEAJOIFBG = void* (*)(UGCTransformNode* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25938 | Token: 0x21d0d
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCTransformNode* __this);
        // Method: llIndex() | Slot: 65535 | Token: 0x8000000
        using fn_llIndex = void* (*)(UGCTransformNode* __this);
        // Method: Method_77() | Slot: 65535 | Token: 0x69c4
        using fn_Method_77 = void* (*)(UGCTransformNode* __this);
        // Method: Method_78() | Slot: 0 | Token: 0x7e1d
        using fn_Method_78 = void* (*)(UGCTransformNode* __this);
        // Method: Method_79() | Slot: 27076 | Token: 0x59331a
        using fn_Method_79 = void* (*)(UGCTransformNode* __this);
        // Method: Method_80() | Slot: 32285 | Token: 0xffff
        using fn_Method_80 = void* (*)(UGCTransformNode* __this);
        // Method: t() | Slot: 55650 | Token: 0x81
        using fn_t = void* (*)(UGCTransformNode* __this);
        // Method: Material(void* GLJGHEAPBOF) | Slot: 65535 | Token: 0x6036558
        using fn_Material = void* (*)(UGCTransformNode* __this, void* GLJGHEAPBOF);
        // Method: OnTriggerEnter() | Slot: 134 | Token: 0xffffffff
        using fn_OnTriggerEnter = void* (*)(UGCTransformNode* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25946 | Token: 0x21d13
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCTransformNode* __this);
    };

    // TypeDefIndex: 34832 | Original: COW.GamePlay.UGCRuntime.SmoothingMethod | Token: 0x2008811
    struct SmoothingMethod : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x4041725
        void* None; // None | Token: 0x4041726
        void* Interpolation; // Interpolation | Token: 0x4041727
        void* PredictAndAdjust; // PredictAndAdjust | Token: 0x4041728
    };

    // TypeDefIndex: 34834 | Original: COW.GamePlay.UGCRuntime.UGCTransformModule | Token: 0x2008812
    struct UGCTransformModule : Il2Cpp::Object {
        // Fields (13)
        void* INITIAL_NODES_NUM; // INITIAL_NODES_NUM | Token: 0x4041729
        void* _Runtime_k__BackingField; // <Runtime>k__BackingField | Token: 0x404172a
        void* _DataStore_k__BackingField; // <DataStore>k__BackingField | Token: 0x404172b
        void* m_NodesMap; // m_NodesMap | Token: 0x404172c
        void* m_orphans; // m_orphans | Token: 0x404172d
        void* SeparateLogicAndVisual; // SeparateLogicAndVisual | Token: 0x404172e
        void* DSReceiver; // DSReceiver | Token: 0x404172f
        void* MAX_PACKET_ID_DIFFERENCE; // MAX_PACKET_ID_DIFFERENCE | Token: 0x4041730
        void* MAX_ORPHAN_WAIT_PACKET_COUNT; // MAX_ORPHAN_WAIT_PACKET_COUNT | Token: 0x4041731
        void* TRS_STATE_POOL_INIT_CAPACITY; // TRS_STATE_POOL_INIT_CAPACITY | Token: 0x4041732
        void* m_TRSStatePool; // m_TRSStatePool | Token: 0x4041733
        void* m_OrphanTRSStates; // m_OrphanTRSStates | Token: 0x4041734
        void* m_allTrsStatesCache; // m_allTrsStatesCache | Token: 0x4041735

        // Methods (43)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCTransformModule* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(UGCTransformModule* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7e1d
        using fn_Method_2 = void* (*)(UGCTransformModule* __this);
        // Method: g(void* d) | Slot: 9541 | Token: 0x593332
        using fn_g = void* (*)(UGCTransformModule* __this, void* d);
        // Method: Method_4() | Slot: 32285 | Token: 0x1ffff
        using fn_Method_4 = void* (*)(UGCTransformModule* __this);
        // Method: bum() | Slot: 13130 | Token: 0x81
        using fn_bum = void* (*)(UGCTransformModule* __this);
        // Method: Material(void* EOGOGFLCEHL) | Slot: 65535 | Token: 0x6036560
        using fn_Material = void* (*)(UGCTransformModule* __this, void* EOGOGFLCEHL);
        // Method: EBNGLMLCKNL() | Slot: 129 | Token: 0xffffffff
        using fn_EBNGLMLCKNL = void* (*)(UGCTransformModule* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25954 | Token: 0x21d1a
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCTransformModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTransformModule* __this);
        // Method: Method_10() | Slot: 7451 | Token: 0x12545
        using fn_Method_10 = void* (*)(UGCTransformModule* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x7e1d
        using fn_Method_11 = void* (*)(UGCTransformModule* __this);
        // Method: ividualContextCache(void* priority) | Slot: 9541 | Token: 0x44fb
        using fn_ividualContextCache = void* (*)(UGCTransformModule* __this, void* priority);
        // Method: Method_13() | Slot: 32285 | Token: 0x16
        using fn_Method_13 = void* (*)(UGCTransformModule* __this);
        // Method: bum() | Slot: 46664 | Token: 0xc6
        using fn_bum = void* (*)(UGCTransformModule* __this);
        // Method: Material() | Slot: 65535 | Token: 0x6036568
        using fn_Material = void* (*)(UGCTransformModule* __this);
        // Method: Recycle() | Slot: 198 | Token: 0xffffffff
        using fn_Recycle = void* (*)(UGCTransformModule* __this);
        // Method: () | Slot: 25962 | Token: 0xffffffff
        using fn_unnamed = void* (*)(UGCTransformModule* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCTransformModule* __this);
        // Method: Method_19() | Slot: 65535 | Token: 0x69c4
        using fn_Method_19 = void* (*)(UGCTransformModule* __this);
        // Method: Method_20() | Slot: 0 | Token: 0x7e1d
        using fn_Method_20 = void* (*)(UGCTransformModule* __this);
        // Method: vidualContextCache(void* priority) | Slot: 9541 | Token: 0x1c484a
        using fn_vidualContextCache = void* (*)(UGCTransformModule* __this, void* priority);
        // Method: Method_22() | Slot: 32285 | Token: 0x1ffff
        using fn_Method_22 = void* (*)(UGCTransformModule* __this);
        // Method: bum() | Slot: 13222 | Token: 0x86
        using fn_bum = void* (*)(UGCTransformModule* __this);
        // Method: Material(void* EGCEDNNLAIE) | Slot: 65535 | Token: 0x6036570
        using fn_Material = void* (*)(UGCTransformModule* __this, void* EGCEDNNLAIE);
        // Method: HMLMEHOMDEK() | Slot: 129 | Token: 0xffffffff
        using fn_HMLMEHOMDEK = void* (*)(UGCTransformModule* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 25970 | Token: 0x21d22
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCTransformModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTransformModule* __this);
        // Method: Method_28() | Slot: 7460 | Token: 0x12545
        using fn_Method_28 = void* (*)(UGCTransformModule* __this);
        // Method: Method_29() | Slot: 0 | Token: 0x7e1d
        using fn_Method_29 = void* (*)(UGCTransformModule* __this);
        // Method: textCache(void* priority) | Slot: 9541 | Token: 0x5933d3
        using fn_textCache = void* (*)(UGCTransformModule* __this, void* priority);
        // Method: Method_31() | Slot: 32285 | Token: 0xffff
        using fn_Method_31 = void* (*)(UGCTransformModule* __this);
        // Method: bum() | Slot: 13322 | Token: 0x86
        using fn_bum = void* (*)(UGCTransformModule* __this);
        // Method: Material(void* EPJFJDMJEOF) | Slot: 65535 | Token: 0x6036578
        using fn_Material = void* (*)(UGCTransformModule* __this, void* EPJFJDMJEOF);
        // Method: NOMGBCNFOOJ() | Slot: 129 | Token: 0xffffffff
        using fn_NOMGBCNFOOJ = void* (*)(UGCTransformModule* __this);
        // Method: _WAIT() | Slot: 25978 | Token: 0x21d2b
        using fn__WAIT = void* (*)(UGCTransformModule* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTransformModule* __this);
        // Method: Method_37() | Slot: 7469 | Token: 0x12545
        using fn_Method_37 = void* (*)(UGCTransformModule* __this);
        // Method: Method_38() | Slot: 0 | Token: 0x7e1d
        using fn_Method_38 = void* (*)(UGCTransformModule* __this);
        // Method: e(void* priority) | Slot: 9541 | Token: 0x593462
        using fn_e = void* (*)(UGCTransformModule* __this, void* priority);
        // Method: Method_40() | Slot: 32285 | Token: 0x1ffff
        using fn_Method_40 = void* (*)(UGCTransformModule* __this);
        // Method: bum() | Slot: 13434 | Token: 0x81
        using fn_bum = void* (*)(UGCTransformModule* __this);
        // Method: Material(void* CLACOPMJHDI) | Slot: 65535 | Token: 0x6036580
        using fn_Material = void* (*)(UGCTransformModule* __this, void* CLACOPMJHDI);
    };

    // TypeDefIndex: 34835 | Original: COW.GamePlay.UGCRuntime.UGCTypeMapCyclePool | Token: 0x2008814
    struct UGCTypeMapCyclePool : Il2Cpp::Object {
        // Fields (4)
        void* UGC_TYPEMAP_CYCLE_POOL_SIZE; // UGC_TYPEMAP_CYCLE_POOL_SIZE | Token: 0x404173f
        void* typeCache; // typeCache | Token: 0x4041740
        void* lastIndex; // lastIndex | Token: 0x4041741
        void* nextIndex; // nextIndex | Token: 0x4041742

        // Methods (4)
        // Method: Method_0() | Slot: 0 | Token: 0x7e1d
        using fn_Method_0 = void* (*)(UGCTypeMapCyclePool* __this);
        // Method: Method_1() | Slot: 42287 | Token: 0x569106
        using fn_Method_1 = void* (*)(UGCTypeMapCyclePool* __this);
        // Method: Method_2() | Slot: 32285 | Token: 0xffff
        using fn_Method_2 = void* (*)(UGCTypeMapCyclePool* __this);
        // Method: bum() | Slot: 9461 | Token: 0x6
        using fn_bum = void* (*)(UGCTypeMapCyclePool* __this);
    };

    // TypeDefIndex: 34836 | Original: COW.GamePlay.UGCRuntime.UGCTypeMap | Token: 0x2008815
    struct UGCTypeMap : Il2Cpp::Object {
        // Fields (11)
        void* TypeMapping; // TypeMapping | Token: 0x4041743
        void* Type_Object; // Type_Object | Token: 0x4041744
        void* TypeName_Object; // TypeName_Object | Token: 0x4041745
        void* typeTree; // typeTree | Token: 0x4041746
        void* typeName2ID; // typeName2ID | Token: 0x4041747
        void* typeMap; // typeMap | Token: 0x4041748
        void* cyclePool; // cyclePool | Token: 0x4041749
        void* propID2PropsDesc; // propID2PropsDesc | Token: 0x404174a
        void* syncID2PropsDesc; // syncID2PropsDesc | Token: 0x404174b
        void* componentProps; // componentProps | Token: 0x404174c
        void* componentTypeMap; // componentTypeMap | Token: 0x404174d

        // Methods (36)
        // Method: Material() | Slot: 65535 | Token: 0x6036588
        using fn_Material = void* (*)(UGCTypeMap* __this);
        // Method: <>iFixBaseProxy_OnUpdateVisibleStateByStreamer() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnUpdateVisibleStateByStreamer = void* (*)(UGCTypeMap* __this);
        // Method: _WAIT() | Slot: 25994 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UGCTypeMap* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCTypeMap* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x69c4
        using fn_Method_4 = void* (*)(UGCTypeMap* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7e1d
        using fn_Method_5 = void* (*)(UGCTypeMap* __this);
        // Method: Method_6(void* cam) | Slot: 9541 | Token: 0x67
        using fn_Method_6 = void* (*)(UGCTypeMap* __this, void* cam);
        // Method: Method_7() | Slot: 32283 | Token: 0xffff
        using fn_Method_7 = void* (*)(UGCTypeMap* __this);
        // Method: bum() | Slot: 103 | Token: 0x83
        using fn_bum = void* (*)(UGCTypeMap* __this);
        // Method: xMaterial(void* CBPPJACCGOH) | Slot: 65535 | Token: 0x6036590
        using fn_xMaterial = void* (*)(UGCTypeMap* __this, void* CBPPJACCGOH);
        // Method: System.IDisposable.Dispose() | Slot: 481 | Token: 0xffffffff
        using fn_System_IDisposable_Dispose = void* (*)(UGCTypeMap* __this);
        // Method: bly-CSharp() | Slot: 26002 | Token: 0xffffffff
        using fn_bly_CSharp = void* (*)(UGCTypeMap* __this);
        // Method: ACount() | Slot: 65535 | Token: 0x8000000
        using fn_ACount = void* (*)(UGCTypeMap* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(UGCTypeMap* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x7e1c
        using fn_Method_14 = void* (*)(UGCTypeMap* __this);
        // Method: Method_15() | Slot: 27076 | Token: 0x59368d
        using fn_Method_15 = void* (*)(UGCTypeMap* __this);
        // Method: Method_16() | Slot: 32287 | Token: 0xffff
        using fn_Method_16 = void* (*)(UGCTypeMap* __this);
        // Method: t() | Slot: 16681 | Token: 0x886
        using fn_t = void* (*)(UGCTypeMap* __this);
        // Method: terial() | Slot: 68 | Token: 0x6036598
        using fn_terial = void* (*)(UGCTypeMap* __this);
        // Method: OnStart() | Slot: 196 | Token: 0xffffffff
        using fn_OnStart = void* (*)(UGCTypeMap* __this);
        // Method: Assembly-CSharp.dll() | Slot: 26010 | Token: 0xffffffff
        using fn_Assembly_CSharp_dll = void* (*)(UGCTypeMap* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCTypeMap* __this);
        // Method: Method_22() | Slot: 7479 | Token: 0x12545
        using fn_Method_22 = void* (*)(UGCTypeMap* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x7e1f
        using fn_Method_23 = void* (*)(UGCTypeMap* __this);
        // Method: ecipeHash(void* rid) | Slot: 9541 | Token: 0x5936e4
        using fn_ecipeHash = void* (*)(UGCTypeMap* __this, void* rid);
        // Method: Method_25() | Slot: 32287 | Token: 0x2ffff
        using fn_Method_25 = void* (*)(UGCTypeMap* __this);
        // Method: bum() | Slot: 17683 | Token: 0xc6
        using fn_bum = void* (*)(UGCTypeMap* __this);
        // Method: terial(void* DJAPBCKDFKA) | Slot: 73 | Token: 0x60365a0
        using fn_terial = void* (*)(UGCTypeMap* __this, void* DJAPBCKDFKA);
        // Method: DFJKIJLNCKN() | Slot: 129 | Token: 0xffffffff
        using fn_DFJKIJLNCKN = void* (*)(UGCTypeMap* __this);
        // Method: _WAIT() | Slot: 26018 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UGCTypeMap* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCTypeMap* __this);
        // Method: Method_31() | Slot: 65535 | Token: 0x12545
        using fn_Method_31 = void* (*)(UGCTypeMap* __this);
        // Method: Method_32() | Slot: 0 | Token: 0x7e1f
        using fn_Method_32 = void* (*)(UGCTypeMap* __this);
        // Method: Method_33() | Slot: 42287 | Token: 0x569106
        using fn_Method_33 = void* (*)(UGCTypeMap* __this);
        // Method: Method_34() | Slot: 32287 | Token: 0xffff
        using fn_Method_34 = void* (*)(UGCTypeMap* __this);
        // Method: bum() | Slot: 22421 | Token: 0x6
        using fn_bum = void* (*)(UGCTypeMap* __this);
    };

    // TypeDefIndex: 34848 | Original: COW.GamePlay.UGCRuntime.UGCUserAPI | Token: 0x2008816
    struct UGCUserAPI : Il2Cpp::Object {
        // Fields (4)
        void* C_SOUNDENTITY_PAUSE; // C_SOUNDENTITY_PAUSE | Token: 0x404174e
        void* C_SOUNDENTITY_REPLAY; // C_SOUNDENTITY_REPLAY | Token: 0x404174f
        void* C_SOUNDENTITY_UNPAUSE; // C_SOUNDENTITY_UNPAUSE | Token: 0x4041750
        void* rnd; // rnd | Token: 0x4041751

        // Methods (381)
        // Method: terial(void* P0) | Slot: 65535 | Token: 0x60365a8
        using fn_terial = void* (*)(UGCUserAPI* __this, void* P0);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26026 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCUserAPI* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(UGCUserAPI* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7e24
        using fn_Method_5 = void* (*)(UGCUserAPI* __this);
        // Method: SetOverrideDecalTexture() | Slot: 44347 | Token: 0x59384c
        using fn_SetOverrideDecalTexture = void* (*)(UGCUserAPI* __this);
        // Method: Method_7() | Slot: 32292 | Token: 0xffff
        using fn_Method_7 = void* (*)(UGCUserAPI* __this);
        // Method: _0() | Slot: 5305 | Token: 0x86
        using fn__0 = void* (*)(UGCUserAPI* __this);
        // Method: l(void* OCCLMDNGINA) | Slot: 65535 | Token: 0x60365b0
        using fn_l = void* (*)(UGCUserAPI* __this, void* OCCLMDNGINA);
        // Method: FIAILEAFMAG() | Slot: 129 | Token: 0xffffffff
        using fn_FIAILEAFMAG = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26034 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCUserAPI* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x120f2
        using fn_Method_13 = void* (*)(UGCUserAPI* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x7e24
        using fn_Method_14 = void* (*)(UGCUserAPI* __this);
        // Method: Method_15(void* pos) | Slot: 9541 | Token: 0x5938b3
        using fn_Method_15 = void* (*)(UGCUserAPI* __this, void* pos);
        // Method: Method_16() | Slot: 32292 | Token: 0x1ffff
        using fn_Method_16 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 14541 | Token: 0x81
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: l() | Slot: 65535 | Token: 0x60365b8
        using fn_l = void* (*)(UGCUserAPI* __this);
        // Method: MJGKODGOAFA() | Slot: 129 | Token: 0xffffffff
        using fn_MJGKODGOAFA = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26042 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: Index() | Slot: 65535 | Token: 0x8000000
        using fn_Index = void* (*)(UGCUserAPI* __this);
        // Method: Method_22() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_22 = void* (*)(UGCUserAPI* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x7e24
        using fn_Method_23 = void* (*)(UGCUserAPI* __this);
        // Method: Method_24(void* d) | Slot: 9541 | Token: 0x4534
        using fn_Method_24 = void* (*)(UGCUserAPI* __this, void* d);
        // Method: Method_25() | Slot: 32292 | Token: 0x18
        using fn_Method_25 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 14579 | Token: 0x86
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: l(void* MMCFMFBAFEG) | Slot: 65535 | Token: 0x60365c0
        using fn_l = void* (*)(UGCUserAPI* __this, void* MMCFMFBAFEG);
        // Method: CAHJGMIAPAM() | Slot: 129 | Token: 0xffffffff
        using fn_CAHJGMIAPAM = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26050 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_31() | Slot: 65535 | Token: 0x12545
        using fn_Method_31 = void* (*)(UGCUserAPI* __this);
        // Method: Method_32() | Slot: 0 | Token: 0x7e24
        using fn_Method_32 = void* (*)(UGCUserAPI* __this);
        // Method: Method_33(void* priority) | Slot: 9541 | Token: 0x53b3e8
        using fn_Method_33 = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_34() | Slot: 32292 | Token: 0x15
        using fn_Method_34 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 17669 | Token: 0xc6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: l() | Slot: 18 | Token: 0x60365c8
        using fn_l = void* (*)(UGCUserAPI* __this);
        // Method: OnFixedUpdate() | Slot: 198 | Token: 0xffffffff
        using fn_OnFixedUpdate = void* (*)(UGCUserAPI* __this);
        // Method: _service() | Slot: 26058 | Token: 0x21d4c
        using fn__service = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_40() | Slot: 65535 | Token: 0x12396
        using fn_Method_40 = void* (*)(UGCUserAPI* __this);
        // Method: Method_41() | Slot: 0 | Token: 0x7e24
        using fn_Method_41 = void* (*)(UGCUserAPI* __this);
        // Method: Method_42(void* priority) | Slot: 9541 | Token: 0x59393e
        using fn_Method_42 = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_43() | Slot: 32292 | Token: 0xffff
        using fn_Method_43 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 14666 | Token: 0x81
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: l(void* IIHDALCNINP) | Slot: 65535 | Token: 0x60365d0
        using fn_l = void* (*)(UGCUserAPI* __this, void* IIHDALCNINP);
        // Method: DCHBABBLGJK() | Slot: 145 | Token: 0xffffffff
        using fn_DCHBABBLGJK = void* (*)(UGCUserAPI* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 26066 | Token: 0x21d50
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCUserAPI* __this);
        // Method: __Field() | Slot: 65535 | Token: 0x8000000
        using fn___Field = void* (*)(UGCUserAPI* __this);
        // Method: Method_49() | Slot: 7506 | Token: 0x12545
        using fn_Method_49 = void* (*)(UGCUserAPI* __this);
        // Method: Method_50() | Slot: 0 | Token: 0x7e24
        using fn_Method_50 = void* (*)(UGCUserAPI* __this);
        // Method: Method_51(void* priority) | Slot: 9541 | Token: 0x67
        using fn_Method_51 = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_52() | Slot: 32292 | Token: 0xffff
        using fn_Method_52 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 62404 | Token: 0x1891
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: l() | Slot: 65535 | Token: 0x60365d8
        using fn_l = void* (*)(UGCUserAPI* __this);
        // Method: <>iFixBaseProxy_OnOnDestroy() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnOnDestroy = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26074 | Token: 0x21d54
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCUserAPI* __this);
        // Method: Method_58() | Slot: 65535 | Token: 0x12545
        using fn_Method_58 = void* (*)(UGCUserAPI* __this);
        // Method: Method_59() | Slot: 0 | Token: 0x7e24
        using fn_Method_59 = void* (*)(UGCUserAPI* __this);
        // Method: Method_60(void* cam) | Slot: 9541 | Token: 0x1d5752
        using fn_Method_60 = void* (*)(UGCUserAPI* __this, void* cam);
        // Method: Method_61() | Slot: 32292 | Token: 0x2ffff
        using fn_Method_61 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 15059 | Token: 0x6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: al() | Slot: 65535 | Token: 0x60365e0
        using fn_al = void* (*)(UGCUserAPI* __this);
        // Method: FHFLBPIPDJC() | Slot: 2182 | Token: 0xffffffff
        using fn_FHFLBPIPDJC = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26082 | Token: 0x21d59
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCUserAPI* __this);
        // Method: Method_67() | Slot: 65535 | Token: 0x12545
        using fn_Method_67 = void* (*)(UGCUserAPI* __this);
        // Method: Method_68() | Slot: 0 | Token: 0x7e26
        using fn_Method_68 = void* (*)(UGCUserAPI* __this);
        // Method: Method_69(void* priority) | Slot: 9541 | Token: 0x5fc0
        using fn_Method_69 = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_70() | Slot: 32294 | Token: 0x2ffff
        using fn_Method_70 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 17708 | Token: 0xc4
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: ActiveSkyboxMaterial() | Slot: 20 | Token: 0x60365e8
        using fn_ActiveSkyboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(UGCUserAPI* __this);
        // Method: `2() | Slot: 26090 | Token: 0x21d5f
        using fn__2 = void* (*)(UGCUserAPI* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCUserAPI* __this);
        // Method: Method_76() | Slot: 65535 | Token: 0x12545
        using fn_Method_76 = void* (*)(UGCUserAPI* __this);
        // Method: Method_77() | Slot: 0 | Token: 0x7e26
        using fn_Method_77 = void* (*)(UGCUserAPI* __this);
        // Method: Method_78(void* priority) | Slot: 9541 | Token: 0x2e54
        using fn_Method_78 = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_79() | Slot: 32294 | Token: 0x40076
        using fn_Method_79 = void* (*)(UGCUserAPI* __this);
        // Method: t() | Slot: 17659 | Token: 0xc6
        using fn_t = void* (*)(UGCUserAPI* __this);
        // Method: ActiveSkyboxMaterial() | Slot: 22 | Token: 0x60365f0
        using fn_ActiveSkyboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: IAPGAAKMBFD() | Slot: 129 | Token: 0xffffffff
        using fn_IAPGAAKMBFD = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26098 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_85() | Slot: 65535 | Token: 0x12545
        using fn_Method_85 = void* (*)(UGCUserAPI* __this);
        // Method: Method_86() | Slot: 0 | Token: 0x7e26
        using fn_Method_86 = void* (*)(UGCUserAPI* __this);
        // Method: Method_87(void* d) | Slot: 9541 | Token: 0x593baf
        using fn_Method_87 = void* (*)(UGCUserAPI* __this, void* d);
        // Method: Method_88() | Slot: 32294 | Token: 0x1ffff
        using fn_Method_88 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 62404 | Token: 0x1886
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: ActiveSkyboxMaterial() | Slot: 65535 | Token: 0x60365f8
        using fn_ActiveSkyboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: <>iFixBaseProxy_OnStart() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnStart = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26106 | Token: 0x21d67
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCUserAPI* __this);
        // Method: Method_94() | Slot: 65535 | Token: 0x69c4
        using fn_Method_94 = void* (*)(UGCUserAPI* __this);
        // Method: Method_95() | Slot: 0 | Token: 0x7e26
        using fn_Method_95 = void* (*)(UGCUserAPI* __this);
        // Method: Method_96(void* cam) | Slot: 9541 | Token: 0x55247a
        using fn_Method_96 = void* (*)(UGCUserAPI* __this, void* cam);
        // Method: Method_97() | Slot: 32294 | Token: 0x2ffff
        using fn_Method_97 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 37216 | Token: 0x6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: ActiveSkyboxMaterial() | Slot: 65535 | Token: 0x6036600
        using fn_ActiveSkyboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: OnStart() | Slot: 196 | Token: 0xffffffff
        using fn_OnStart = void* (*)(UGCUserAPI* __this);
        // Method: Assembly-CSharp.dll() | Slot: 26114 | Token: 0xffffffff
        using fn_Assembly_CSharp_dll = void* (*)(UGCUserAPI* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCUserAPI* __this);
        // Method: Method_103() | Slot: 65535 | Token: 0x69c4
        using fn_Method_103 = void* (*)(UGCUserAPI* __this);
        // Method: Method_104() | Slot: 0 | Token: 0x7e28
        using fn_Method_104 = void* (*)(UGCUserAPI* __this);
        // Method: Method_105(void* d) | Slot: 9541 | Token: 0x1014d
        using fn_Method_105 = void* (*)(UGCUserAPI* __this, void* d);
        // Method: Method_106() | Slot: 32296 | Token: 0x10048
        using fn_Method_106 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 103 | Token: 0xc6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: tiveSkyboxMaterial() | Slot: 65535 | Token: 0x6036608
        using fn_tiveSkyboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: <>iFixBaseProxy_OnStart() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnStart = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26122 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCUserAPI* __this);
        // Method: Method_112() | Slot: 65535 | Token: 0x69c4
        using fn_Method_112 = void* (*)(UGCUserAPI* __this);
        // Method: Method_113() | Slot: 0 | Token: 0x7e28
        using fn_Method_113 = void* (*)(UGCUserAPI* __this);
        // Method: vatarWithSlots(void* cam) | Slot: 9541 | Token: 0x1d5795
        using fn_vatarWithSlots = void* (*)(UGCUserAPI* __this, void* cam);
        // Method: Method_115() | Slot: 32301 | Token: 0x1ffff
        using fn_Method_115 = void* (*)(UGCUserAPI* __this);
        // Method: _0() | Slot: 15408 | Token: 0x886
        using fn__0 = void* (*)(UGCUserAPI* __this);
        // Method: kyboxMaterial() | Slot: 65535 | Token: 0x6036610
        using fn_kyboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: get_OwnerID() | Slot: 2182 | Token: 0xffffffff
        using fn_get_OwnerID = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26130 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCUserAPI* __this);
        // Method: Method_121() | Slot: 65535 | Token: 0xa52f
        using fn_Method_121 = void* (*)(UGCUserAPI* __this);
        // Method: Method_122() | Slot: 0 | Token: 0x7e2d
        using fn_Method_122 = void* (*)(UGCUserAPI* __this);
        // Method: tarWithSlots(void* circlePlane) | Slot: 9541 | Token: 0x584524
        using fn_tarWithSlots = void* (*)(UGCUserAPI* __this, void* circlePlane);
        // Method: Method_124() | Slot: 32301 | Token: 0x1ffff
        using fn_Method_124 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 56821 | Token: 0x86
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: kyboxMaterial() | Slot: 65535 | Token: 0x6036618
        using fn_kyboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: MGHFBHJOMIE() | Slot: 129 | Token: 0xffffffff
        using fn_MGHFBHJOMIE = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26138 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCUserAPI* __this);
        // Method: Method_130() | Slot: 7542 | Token: 0x12545
        using fn_Method_130 = void* (*)(UGCUserAPI* __this);
        // Method: Method_131() | Slot: 0 | Token: 0x7e2d
        using fn_Method_131 = void* (*)(UGCUserAPI* __this);
        // Method: Method_132() | Slot: 27076 | Token: 0x57f568
        using fn_Method_132 = void* (*)(UGCUserAPI* __this);
        // Method: Method_133() | Slot: 32301 | Token: 0x42
        using fn_Method_133 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 62852 | Token: 0xc6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: kyboxMaterial() | Slot: 67 | Token: 0x6036620
        using fn_kyboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: UpdateMove() | Slot: 134 | Token: 0xffffffff
        using fn_UpdateMove = void* (*)(UGCUserAPI* __this);
        // Method: BOKO() | Slot: 26146 | Token: 0x21d7e
        using fn_BOKO = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_139() | Slot: 65535 | Token: 0xd09f
        using fn_Method_139 = void* (*)(UGCUserAPI* __this);
        // Method: Method_140() | Slot: 0 | Token: 0x7e2d
        using fn_Method_140 = void* (*)(UGCUserAPI* __this);
        // Method: Method_141() | Slot: 54255 | Token: 0x593c94
        using fn_Method_141 = void* (*)(UGCUserAPI* __this);
        // Method: Method_142() | Slot: 32301 | Token: 0xffff
        using fn_Method_142 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 63586 | Token: 0x81
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: kyboxMaterial() | Slot: 65535 | Token: 0x6036628
        using fn_kyboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: OCHDAAKJPDJ() | Slot: 129 | Token: 0xffffffff
        using fn_OCHDAAKJPDJ = void* (*)(UGCUserAPI* __this);
        // Method: _WAIT() | Slot: 26154 | Token: 0x21d81
        using fn__WAIT = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_148() | Slot: 65535 | Token: 0x120f2
        using fn_Method_148 = void* (*)(UGCUserAPI* __this);
        // Method: Method_149() | Slot: 0 | Token: 0x7e2d
        using fn_Method_149 = void* (*)(UGCUserAPI* __this);
        // Method: rSlot(void* circlePlane) | Slot: 9541 | Token: 0x67
        using fn_rSlot = void* (*)(UGCUserAPI* __this, void* circlePlane);
        // Method: Method_151() | Slot: 32301 | Token: 0xffff
        using fn_Method_151 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 55207 | Token: 0x1891
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: kyboxMaterial() | Slot: 65535 | Token: 0x6036630
        using fn_kyboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: <>iFixBaseProxy_GetMaxRepDataCount() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_GetMaxRepDataCount = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26162 | Token: 0x21d85
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCUserAPI* __this);
        // Method: Method_157() | Slot: 65535 | Token: 0x12545
        using fn_Method_157 = void* (*)(UGCUserAPI* __this);
        // Method: Method_158() | Slot: 0 | Token: 0x7e2d
        using fn_Method_158 = void* (*)(UGCUserAPI* __this);
        // Method: Method_159(void* cam) | Slot: 9541 | Token: 0x1c5107
        using fn_Method_159 = void* (*)(UGCUserAPI* __this, void* cam);
        // Method: Method_160() | Slot: 32301 | Token: 0x2ffff
        using fn_Method_160 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 22354 | Token: 0x6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: kyboxMaterial(void* P0, void* P1) | Slot: 65535 | Token: 0x6036638
        using fn_kyboxMaterial = void* (*)(UGCUserAPI* __this, void* P0, void* P1);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26170 | Token: 0x21d8a
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCUserAPI* __this);
        // Method: Method_166() | Slot: 65535 | Token: 0x12545
        using fn_Method_166 = void* (*)(UGCUserAPI* __this);
        // Method: Method_167() | Slot: 0 | Token: 0x7e2e
        using fn_Method_167 = void* (*)(UGCUserAPI* __this);
        // Method: Method_168(void* d) | Slot: 9541 | Token: 0x29a6
        using fn_Method_168 = void* (*)(UGCUserAPI* __this, void* d);
        // Method: Method_169() | Slot: 32302 | Token: 0x13
        using fn_Method_169 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 17716 | Token: 0xc4
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: yboxMaterial() | Slot: 24 | Token: 0x6036640
        using fn_yboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: MKHMKNBDHOC() | Slot: 129 | Token: 0xffffffff
        using fn_MKHMKNBDHOC = void* (*)(UGCUserAPI* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 26178 | Token: 0x21d8f
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_175() | Slot: 7569 | Token: 0x12545
        using fn_Method_175 = void* (*)(UGCUserAPI* __this);
        // Method: Method_176() | Slot: 0 | Token: 0x7e2e
        using fn_Method_176 = void* (*)(UGCUserAPI* __this);
        // Method: Method_177() | Slot: 42287 | Token: 0x593ece
        using fn_Method_177 = void* (*)(UGCUserAPI* __this);
        // Method: Method_178() | Slot: 32302 | Token: 0xffff
        using fn_Method_178 = void* (*)(UGCUserAPI* __this);
        // Method: t() | Slot: 16102 | Token: 0x83
        using fn_t = void* (*)(UGCUserAPI* __this);
        // Method: yboxMaterial(void* DCAPIHJMMBL) | Slot: 65535 | Token: 0x6036648
        using fn_yboxMaterial = void* (*)(UGCUserAPI* __this, void* DCAPIHJMMBL);
        // Method: LABDHCNIDMG() | Slot: 131 | Token: 0xffffffff
        using fn_LABDHCNIDMG = void* (*)(UGCUserAPI* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 26186 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCUserAPI* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCUserAPI* __this);
        // Method: Method_184() | Slot: 7573 | Token: 0xd3ef
        using fn_Method_184 = void* (*)(UGCUserAPI* __this);
        // Method: Method_185() | Slot: 0 | Token: 0x7e2e
        using fn_Method_185 = void* (*)(UGCUserAPI* __this);
        // Method: tIds(void* priority) | Slot: 9541 | Token: 0x593f65
        using fn_tIds = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_187() | Slot: 32302 | Token: 0x2ffff
        using fn_Method_187 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 16253 | Token: 0x81
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: yboxMaterial(void* OBMFMAKFDDL) | Slot: 65535 | Token: 0x6036650
        using fn_yboxMaterial = void* (*)(UGCUserAPI* __this, void* OBMFMAKFDDL);
        // Method: GetSeatPlayerIDOnSeat() | Slot: 134 | Token: 0xffffffff
        using fn_GetSeatPlayerIDOnSeat = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26194 | Token: 0x21d9a
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UGCUserAPI* __this);
        // Method: Method_193() | Slot: 7580 | Token: 0xa52f
        using fn_Method_193 = void* (*)(UGCUserAPI* __this);
        // Method: Method_194() | Slot: 0 | Token: 0x7e2e
        using fn_Method_194 = void* (*)(UGCUserAPI* __this);
        // Method: maAvatar(void* priority) | Slot: 9541 | Token: 0x1014d
        using fn_maAvatar = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_196() | Slot: 32302 | Token: 0x10048
        using fn_Method_196 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 24427 | Token: 0xc6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: yboxMaterial(void* PGEGMKJKOKI) | Slot: 65535 | Token: 0x6036658
        using fn_yboxMaterial = void* (*)(UGCUserAPI* __this, void* PGEGMKJKOKI);
        // Method: OCHJIGNBHJO() | Slot: 129 | Token: 0xffffffff
        using fn_OCHJIGNBHJO = void* (*)(UGCUserAPI* __this);
        // Method: _WAIT() | Slot: 26202 | Token: 0x21da4
        using fn__WAIT = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_202() | Slot: 7590 | Token: 0x12396
        using fn_Method_202 = void* (*)(UGCUserAPI* __this);
        // Method: Method_203() | Slot: 0 | Token: 0x7e2e
        using fn_Method_203 = void* (*)(UGCUserAPI* __this);
        // Method: etForceChangeRace(void* priority) | Slot: 9541 | Token: 0x585fb3
        using fn_etForceChangeRace = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_205() | Slot: 32302 | Token: 0x2ffff
        using fn_Method_205 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 16483 | Token: 0x81
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: yboxMaterial() | Slot: 65535 | Token: 0x6036660
        using fn_yboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: LGNDGMMOJLN() | Slot: 129 | Token: 0xffffffff
        using fn_LGNDGMMOJLN = void* (*)(UGCUserAPI* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 26210 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_211() | Slot: 7598 | Token: 0x12545
        using fn_Method_211 = void* (*)(UGCUserAPI* __this);
        // Method: Method_212() | Slot: 0 | Token: 0x7e2e
        using fn_Method_212 = void* (*)(UGCUserAPI* __this);
        // Method: Method_213() | Slot: 27076 | Token: 0x413f
        using fn_Method_213 = void* (*)(UGCUserAPI* __this);
        // Method: Method_214() | Slot: 32302 | Token: 0x10040
        using fn_Method_214 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 62404 | Token: 0x1886
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: yboxMaterial() | Slot: 65535 | Token: 0x6036668
        using fn_yboxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: <>iFixBaseProxy_OnStart() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnStart = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26218 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCUserAPI* __this);
        // Method: Method_220() | Slot: 7601 | Token: 0x12545
        using fn_Method_220 = void* (*)(UGCUserAPI* __this);
        // Method: Method_221() | Slot: 0 | Token: 0x7e2e
        using fn_Method_221 = void* (*)(UGCUserAPI* __this);
        // Method: eRace() | Slot: 54255 | Token: 0x4129
        using fn_eRace = void* (*)(UGCUserAPI* __this);
        // Method: Method_223() | Slot: 32304 | Token: 0x44
        using fn_Method_223 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 11742 | Token: 0xc4
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: oxMaterial() | Slot: 36 | Token: 0x6036670
        using fn_oxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: OnModelShowed() | Slot: 196 | Token: 0xffffffff
        using fn_OnModelShowed = void* (*)(UGCUserAPI* __this);
        // Method: et_player() | Slot: 26226 | Token: 0x21db4
        using fn_et_player = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_229() | Slot: 65535 | Token: 0x120f2
        using fn_Method_229 = void* (*)(UGCUserAPI* __this);
        // Method: Method_230() | Slot: 0 | Token: 0x7e30
        using fn_Method_230 = void* (*)(UGCUserAPI* __this);
        // Method: (void* circlePlane) | Slot: 9541 | Token: 0x59421e
        using fn_unnamed = void* (*)(UGCUserAPI* __this, void* circlePlane);
        // Method: Method_232() | Slot: 32304 | Token: 0xffff
        using fn_Method_232 = void* (*)(UGCUserAPI* __this);
        // Method: t() | Slot: 17683 | Token: 0x86
        using fn_t = void* (*)(UGCUserAPI* __this);
        // Method: oxMaterial(void* DJAPBCKDFKA) | Slot: 73 | Token: 0x6036678
        using fn_oxMaterial = void* (*)(UGCUserAPI* __this, void* DJAPBCKDFKA);
        // Method: MPGLMIDLLPA() | Slot: 129 | Token: 0xffffffff
        using fn_MPGLMIDLLPA = void* (*)(UGCUserAPI* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 26234 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_238() | Slot: 65535 | Token: 0x12545
        using fn_Method_238 = void* (*)(UGCUserAPI* __this);
        // Method: Method_239() | Slot: 0 | Token: 0x7e30
        using fn_Method_239 = void* (*)(UGCUserAPI* __this);
        // Method: Method_240(void* d) | Slot: 9541 | Token: 0xa24b1
        using fn_Method_240 = void* (*)(UGCUserAPI* __this, void* d);
        // Method: Method_241() | Slot: 32304 | Token: 0xffff
        using fn_Method_241 = void* (*)(UGCUserAPI* __this);
        // Method: Data() | Slot: 16966 | Token: 0x86
        using fn_Data = void* (*)(UGCUserAPI* __this);
        // Method: oxMaterial() | Slot: 65535 | Token: 0x6036680
        using fn_oxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26242 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_247() | Slot: 65535 | Token: 0xa52f
        using fn_Method_247 = void* (*)(UGCUserAPI* __this);
        // Method: Method_248() | Slot: 0 | Token: 0x7e30
        using fn_Method_248 = void* (*)(UGCUserAPI* __this);
        // Method: Method_249(void* cam) | Slot: 9541 | Token: 0x1c5107
        using fn_Method_249 = void* (*)(UGCUserAPI* __this, void* cam);
        // Method: Method_250() | Slot: 32304 | Token: 0x2ffff
        using fn_Method_250 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 22725 | Token: 0x6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: oxMaterial() | Slot: 65535 | Token: 0x6036688
        using fn_oxMaterial = void* (*)(UGCUserAPI* __this);
        // Method: <>iFixBaseProxy_OnRecycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnRecycle = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26250 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCUserAPI* __this);
        // Method: Method_256() | Slot: 65535 | Token: 0x12545
        using fn_Method_256 = void* (*)(UGCUserAPI* __this);
        // Method: Method_257() | Slot: 0 | Token: 0x7e31
        using fn_Method_257 = void* (*)(UGCUserAPI* __this);
        // Method: Method_258(void* circlePlane) | Slot: 9541 | Token: 0x55ba42
        using fn_Method_258 = void* (*)(UGCUserAPI* __this, void* circlePlane);
        // Method: Method_259() | Slot: 32305 | Token: 0xf
        using fn_Method_259 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 46095 | Token: 0x81
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: xMaterial() | Slot: 65535 | Token: 0x6036690
        using fn_xMaterial = void* (*)(UGCUserAPI* __this);
        // Method: LAGCLJPAMEK() | Slot: 129 | Token: 0xffffffff
        using fn_LAGCLJPAMEK = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26258 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_265() | Slot: 65535 | Token: 0x69c4
        using fn_Method_265 = void* (*)(UGCUserAPI* __this);
        // Method: Method_266() | Slot: 0 | Token: 0x7e31
        using fn_Method_266 = void* (*)(UGCUserAPI* __this);
        // Method: Method_267() | Slot: 53407 | Token: 0x32eae1
        using fn_Method_267 = void* (*)(UGCUserAPI* __this);
        // Method: Method_268() | Slot: 32305 | Token: 0x14
        using fn_Method_268 = void* (*)(UGCUserAPI* __this);
        // Method: g() | Slot: 59831 | Token: 0x1e6
        using fn_g = void* (*)(UGCUserAPI* __this);
        // Method: xMaterial() | Slot: 17 | Token: 0x6036698
        using fn_xMaterial = void* (*)(UGCUserAPI* __this);
        // Method: BDFAKBBFNLC() | Slot: 486 | Token: 0xffffffff
        using fn_BDFAKBBFNLC = void* (*)(UGCUserAPI* __this);
        // Method: () | Slot: 26266 | Token: 0xffffffff
        using fn_unnamed = void* (*)(UGCUserAPI* __this);
        // Method: t() | Slot: 65535 | Token: 0x8000000
        using fn_t = void* (*)(UGCUserAPI* __this);
        // Method: Method_274() | Slot: 65535 | Token: 0x12545
        using fn_Method_274 = void* (*)(UGCUserAPI* __this);
        // Method: Method_275() | Slot: 0 | Token: 0x7e31
        using fn_Method_275 = void* (*)(UGCUserAPI* __this);
        // Method: Method_276(void* cam) | Slot: 9541 | Token: 0x569644
        using fn_Method_276 = void* (*)(UGCUserAPI* __this, void* cam);
        // Method: Method_277() | Slot: 32305 | Token: 0xffff
        using fn_Method_277 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 16681 | Token: 0x6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: aterial() | Slot: 68 | Token: 0x60366a0
        using fn_aterial = void* (*)(UGCUserAPI* __this);
        // Method: InitEntityInfo() | Slot: 198 | Token: 0xffffffff
        using fn_InitEntityInfo = void* (*)(UGCUserAPI* __this);
        // Method: Sharp() | Slot: 26274 | Token: 0xffffffff
        using fn_Sharp = void* (*)(UGCUserAPI* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UGCUserAPI* __this);
        // Method: Method_283() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_283 = void* (*)(UGCUserAPI* __this);
        // Method: Method_284() | Slot: 0 | Token: 0x7e34
        using fn_Method_284 = void* (*)(UGCUserAPI* __this);
        // Method: Method_285(void* d) | Slot: 9541 | Token: 0x29a6
        using fn_Method_285 = void* (*)(UGCUserAPI* __this, void* d);
        // Method: Method_286() | Slot: 32308 | Token: 0x13
        using fn_Method_286 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 17659 | Token: 0x86
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: terial() | Slot: 22 | Token: 0x60366a8
        using fn_terial = void* (*)(UGCUserAPI* __this);
        // Method: Recycle() | Slot: 198 | Token: 0xffffffff
        using fn_Recycle = void* (*)(UGCUserAPI* __this);
        // Method: () | Slot: 26282 | Token: 0xffffffff
        using fn_unnamed = void* (*)(UGCUserAPI* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCUserAPI* __this);
        // Method: Method_292() | Slot: 7626 | Token: 0x12545
        using fn_Method_292 = void* (*)(UGCUserAPI* __this);
        // Method: Method_293() | Slot: 0 | Token: 0x7e34
        using fn_Method_293 = void* (*)(UGCUserAPI* __this);
        // Method: Method_294() | Slot: 27076 | Token: 0x584ac9
        using fn_Method_294 = void* (*)(UGCUserAPI* __this);
        // Method: Method_295() | Slot: 32308 | Token: 0xffff
        using fn_Method_295 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 17238 | Token: 0xc6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: terial() | Slot: 65535 | Token: 0x60366b0
        using fn_terial = void* (*)(UGCUserAPI* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26290 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCUserAPI* __this);
        // Method: Method_301() | Slot: 65535 | Token: 0x12545
        using fn_Method_301 = void* (*)(UGCUserAPI* __this);
        // Method: Method_302() | Slot: 0 | Token: 0x7e34
        using fn_Method_302 = void* (*)(UGCUserAPI* __this);
        // Method: Method_303(void* cam) | Slot: 9541 | Token: 0x569142
        using fn_Method_303 = void* (*)(UGCUserAPI* __this, void* cam);
        // Method: Method_304() | Slot: 32308 | Token: 0xffff
        using fn_Method_304 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 37161 | Token: 0x6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: terial(void* P0) | Slot: 65535 | Token: 0x60366b8
        using fn_terial = void* (*)(UGCUserAPI* __this, void* P0);
        // Method: GetObjectTag() | Slot: 196 | Token: 0xffffffff
        using fn_GetObjectTag = void* (*)(UGCUserAPI* __this);
        // Method: `2() | Slot: 26298 | Token: 0xffffffff
        using fn__2 = void* (*)(UGCUserAPI* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCUserAPI* __this);
        // Method: Method_310() | Slot: 7630 | Token: 0x12545
        using fn_Method_310 = void* (*)(UGCUserAPI* __this);
        // Method: Method_311() | Slot: 0 | Token: 0x7e35
        using fn_Method_311 = void* (*)(UGCUserAPI* __this);
        // Method: (void* circlePlane) | Slot: 9541 | Token: 0x1014d
        using fn_unnamed = void* (*)(UGCUserAPI* __this, void* circlePlane);
        // Method: Method_313() | Slot: 32309 | Token: 0x10048
        using fn_Method_313 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 49695 | Token: 0x81
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: erial() | Slot: 65535 | Token: 0x60366c0
        using fn_erial = void* (*)(UGCUserAPI* __this);
        // Method: TryPlayVFXLasers() | Slot: 150 | Token: 0xffffffff
        using fn_TryPlayVFXLasers = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26306 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: __Field() | Slot: 65535 | Token: 0x8000000
        using fn___Field = void* (*)(UGCUserAPI* __this);
        // Method: Method_319() | Slot: 65535 | Token: 0x12545
        using fn_Method_319 = void* (*)(UGCUserAPI* __this);
        // Method: Method_320() | Slot: 0 | Token: 0x7e35
        using fn_Method_320 = void* (*)(UGCUserAPI* __this);
        // Method: Method_321(void* priority) | Slot: 9541 | Token: 0x594398
        using fn_Method_321 = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_322() | Slot: 32309 | Token: 0xffff
        using fn_Method_322 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 103 | Token: 0x81
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: erial() | Slot: 65535 | Token: 0x60366c8
        using fn_erial = void* (*)(UGCUserAPI* __this);
        // Method: <>iFixBaseProxy_Recycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Recycle = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26314 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UGCUserAPI* __this);
        // Method: Method_328() | Slot: 7635 | Token: 0x12545
        using fn_Method_328 = void* (*)(UGCUserAPI* __this);
        // Method: Method_329() | Slot: 0 | Token: 0x7e35
        using fn_Method_329 = void* (*)(UGCUserAPI* __this);
        // Method: askColors() | Slot: 54255 | Token: 0x4129
        using fn_askColors = void* (*)(UGCUserAPI* __this);
        // Method: Method_331() | Slot: 32312 | Token: 0x44
        using fn_Method_331 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 16675 | Token: 0xc4
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: al(void* JAHDDOKLJON, void* HJIFPFNOICM, void* CBCAJJJCKLH) | Slot: 65535 | Token: 0x60366d0
        using fn_al = void* (*)(UGCUserAPI* __this, void* JAHDDOKLJON, void* HJIFPFNOICM, void* CBCAJJJCKLH);
        // Method: GNJPKKGJFEM() | Slot: 129 | Token: 0xffffffff
        using fn_GNJPKKGJFEM = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26322 | Token: 0x21dd8
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UGCUserAPI* __this);
        // Method: Method_337() | Slot: 7643 | Token: 0x12545
        using fn_Method_337 = void* (*)(UGCUserAPI* __this);
        // Method: Method_338() | Slot: 0 | Token: 0x7e38
        using fn_Method_338 = void* (*)(UGCUserAPI* __this);
        // Method: Method_339(void* priority) | Slot: 9541 | Token: 0x67
        using fn_Method_339 = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_340() | Slot: 32312 | Token: 0xffff
        using fn_Method_340 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 22354 | Token: 0x6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: al(void* P0, void* P1) | Slot: 65535 | Token: 0x60366d8
        using fn_al = void* (*)(UGCUserAPI* __this, void* P0, void* P1);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26330 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(UGCUserAPI* __this);
        // Method: Method_346() | Slot: 65535 | Token: 0x12545
        using fn_Method_346 = void* (*)(UGCUserAPI* __this);
        // Method: Method_347() | Slot: 0 | Token: 0x7e39
        using fn_Method_347 = void* (*)(UGCUserAPI* __this);
        // Method: aDirty() | Slot: 54255 | Token: 0x4129
        using fn_aDirty = void* (*)(UGCUserAPI* __this);
        // Method: Method_349() | Slot: 32315 | Token: 0x44
        using fn_Method_349 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 17700 | Token: 0xc6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: footStepSounds(void* CBCAJJJCKLH) | Slot: 65535 | Token: 0x60366e0
        using fn_footStepSounds = void* (*)(UGCUserAPI* __this, void* CBCAJJJCKLH);
        // Method: CJCFJNFBOCI() | Slot: 145 | Token: 0xffffffff
        using fn_CJCFJNFBOCI = void* (*)(UGCUserAPI* __this);
        // Method: imable() | Slot: 26338 | Token: 0xffffffff
        using fn_imable = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_355() | Slot: 65535 | Token: 0x12545
        using fn_Method_355 = void* (*)(UGCUserAPI* __this);
        // Method: Method_356() | Slot: 0 | Token: 0x7e3b
        using fn_Method_356 = void* (*)(UGCUserAPI* __this);
        // Method: (void* cam) | Slot: 9541 | Token: 0x1d58ab
        using fn_unnamed = void* (*)(UGCUserAPI* __this, void* cam);
        // Method: Method_358() | Slot: 32316 | Token: 0xffff
        using fn_Method_358 = void* (*)(UGCUserAPI* __this);
        // Method: g() | Slot: 11742 | Token: 0xc4
        using fn_g = void* (*)(UGCUserAPI* __this);
        // Method: ootStepSounds() | Slot: 36 | Token: 0x60366e8
        using fn_ootStepSounds = void* (*)(UGCUserAPI* __this);
        // Method: get_HP() | Slot: 2182 | Token: 0xffffffff
        using fn_get_HP = void* (*)(UGCUserAPI* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26346 | Token: 0x21de7
        using fn_GetExchangeCurrencySubType = void* (*)(UGCUserAPI* __this);
        // Method: BuffFactor() | Slot: 65535 | Token: 0x8000000
        using fn_BuffFactor = void* (*)(UGCUserAPI* __this);
        // Method: Method_364() | Slot: 7656 | Token: 0x12545
        using fn_Method_364 = void* (*)(UGCUserAPI* __this);
        // Method: Method_365() | Slot: 0 | Token: 0x7e3c
        using fn_Method_365 = void* (*)(UGCUserAPI* __this);
        // Method: xtureDirty(void* priority) | Slot: 9541 | Token: 0x5944d2
        using fn_xtureDirty = void* (*)(UGCUserAPI* __this, void* priority);
        // Method: Method_367() | Slot: 32316 | Token: 0x1ffff
        using fn_Method_367 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 30410 | Token: 0xc4
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: ootStepSounds() | Slot: 89 | Token: 0x60366f0
        using fn_ootStepSounds = void* (*)(UGCUserAPI* __this);
        // Method: KFOLHOPJBAC() | Slot: 452 | Token: 0xffffffff
        using fn_KFOLHOPJBAC = void* (*)(UGCUserAPI* __this);
        // Method: allback() | Slot: 26354 | Token: 0x21ded
        using fn_allback = void* (*)(UGCUserAPI* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCUserAPI* __this);
        // Method: Method_373() | Slot: 7663 | Token: 0x69c4
        using fn_Method_373 = void* (*)(UGCUserAPI* __this);
        // Method: Method_374() | Slot: 0 | Token: 0x7e3c
        using fn_Method_374 = void* (*)(UGCUserAPI* __this);
        // Method: Method_375() | Slot: 42287 | Token: 0x569106
        using fn_Method_375 = void* (*)(UGCUserAPI* __this);
        // Method: Method_376() | Slot: 32316 | Token: 0xffff
        using fn_Method_376 = void* (*)(UGCUserAPI* __this);
        // Method: bum() | Slot: 10662 | Token: 0x6
        using fn_bum = void* (*)(UGCUserAPI* __this);
        // Method: tStepSounds() | Slot: 19 | Token: 0x60366f8
        using fn_tStepSounds = void* (*)(UGCUserAPI* __this);
        // Method: OnUserDefineReplicationInfo() | Slot: 196 | Token: 0xffffffff
        using fn_OnUserDefineReplicationInfo = void* (*)(UGCUserAPI* __this);
        // Method: p.dll() | Slot: 26362 | Token: 0xffffffff
        using fn_p_dll = void* (*)(UGCUserAPI* __this);
    };

    // TypeDefIndex: 34850 | Original: COW.GamePlay.UGCRuntime.ConversionUtils | Token: 0x2008822
    struct ConversionUtils : Il2Cpp::Object {

        // Methods (36)
        // Method: Recycle() | Slot: 198 | Token: 0xffffffff
        using fn_Recycle = void* (*)(ConversionUtils* __this);
        // Method: () | Slot: 26386 | Token: 0xffffffff
        using fn_unnamed = void* (*)(ConversionUtils* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(ConversionUtils* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(ConversionUtils* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7e40
        using fn_Method_4 = void* (*)(ConversionUtils* __this);
        // Method: Method_5(void* strAPPSecret) | Slot: 9541 | Token: 0x1d5795
        using fn_Method_5 = void* (*)(ConversionUtils* __this, void* strAPPSecret);
        // Method: Method_6() | Slot: 32320 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(ConversionUtils* __this);
        // Method: bum() | Slot: 22725 | Token: 0x6
        using fn_bum = void* (*)(ConversionUtils* __this);
        // Method: tepSounds() | Slot: 65535 | Token: 0x6036718
        using fn_tepSounds = void* (*)(ConversionUtils* __this);
        // Method: <>iFixBaseProxy_OnUpdateVisibleStateByStreamer() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OnUpdateVisibleStateByStreamer = void* (*)(ConversionUtils* __this);
        // Method: _WAIT() | Slot: 26394 | Token: 0xffffffff
        using fn__WAIT = void* (*)(ConversionUtils* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(ConversionUtils* __this);
        // Method: Method_12() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_12 = void* (*)(ConversionUtils* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x7e43
        using fn_Method_13 = void* (*)(ConversionUtils* __this);
        // Method: SetUpdateWeaponFlag(void* circlePlane) | Slot: 9541 | Token: 0x44fb
        using fn_SetUpdateWeaponFlag = void* (*)(ConversionUtils* __this, void* circlePlane);
        // Method: Method_15() | Slot: 32323 | Token: 0x16
        using fn_Method_15 = void* (*)(ConversionUtils* __this);
        // Method: t() | Slot: 55863 | Token: 0xc6
        using fn_t = void* (*)(ConversionUtils* __this);
        // Method: Sounds() | Slot: 65535 | Token: 0x6036720
        using fn_Sounds = void* (*)(ConversionUtils* __this);
        // Method: EAPIPNMGPCN() | Slot: 129 | Token: 0xffffffff
        using fn_EAPIPNMGPCN = void* (*)(ConversionUtils* __this);
        // Method: imable() | Slot: 26402 | Token: 0xffffffff
        using fn_imable = void* (*)(ConversionUtils* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(ConversionUtils* __this);
        // Method: Method_21() | Slot: 7682 | Token: 0x12545
        using fn_Method_21 = void* (*)(ConversionUtils* __this);
        // Method: Method_22() | Slot: 0 | Token: 0x7e43
        using fn_Method_22 = void* (*)(ConversionUtils* __this);
        // Method: Method_23(void* priority) | Slot: 9541 | Token: 0x67
        using fn_Method_23 = void* (*)(ConversionUtils* __this, void* priority);
        // Method: Method_24() | Slot: 32323 | Token: 0xffff
        using fn_Method_24 = void* (*)(ConversionUtils* __this);
        // Method: bum() | Slot: 22699 | Token: 0x6
        using fn_bum = void* (*)(ConversionUtils* __this);
        // Method: Sounds() | Slot: 65535 | Token: 0x6036728
        using fn_Sounds = void* (*)(ConversionUtils* __this);
        // Method: <>iFixBaseProxy_Recycle() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Recycle = void* (*)(ConversionUtils* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26410 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(ConversionUtils* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(ConversionUtils* __this);
        // Method: Method_30() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_30 = void* (*)(ConversionUtils* __this);
        // Method: Method_31() | Slot: 0 | Token: 0x7e44
        using fn_Method_31 = void* (*)(ConversionUtils* __this);
        // Method: Method_32() | Slot: 52008 | Token: 0x5849f8
        using fn_Method_32 = void* (*)(ConversionUtils* __this);
        // Method: Method_33() | Slot: 32324 | Token: 0x5d
        using fn_Method_33 = void* (*)(ConversionUtils* __this);
        // Method: REPLAYKIT_VIDEO_NAME_LOBBY() | Slot: 18981 | Token: 0xc6
        using fn_REPLAYKIT_VIDEO_NAME_LOBBY = void* (*)(ConversionUtils* __this);
        // Method: ounds() | Slot: 96 | Token: 0x6036730
        using fn_ounds = void* (*)(ConversionUtils* __this);
    };

    // TypeDefIndex: 34851 | Original: COW.GamePlay.UGCRuntime.TimeRel | Token: 0x2008824
    struct TimeRel : Il2Cpp::Object {
        // Fields (1)
        void* value; // value | Token: 0x404177d

        // Methods (3)
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(TimeRel* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_1 = void* (*)(TimeRel* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7e44
        using fn_Method_2 = void* (*)(TimeRel* __this);
    };

    // TypeDefIndex: 34852 | Original: COW.GamePlay.UGCRuntime.TimeRelMS | Token: 0x2008825
    struct TimeRelMS : Il2Cpp::Object {
        // Fields (1)
        void* value; // value | Token: 0x404177e

        // Methods (3)
        // Method: Method_0() | Slot: 52008 | Token: 0x58780b
        using fn_Method_0 = void* (*)(TimeRelMS* __this);
        // Method: Method_1() | Slot: 32324 | Token: 0xffff
        using fn_Method_1 = void* (*)(TimeRelMS* __this);
        // Method: REPLAYKIT_VIDEO_NAME_LOBBY() | Slot: 30796 | Token: 0x6
        using fn_REPLAYKIT_VIDEO_NAME_LOBBY = void* (*)(TimeRelMS* __this);
    };

    // TypeDefIndex: 34853 | Original: COW.GamePlay.UGCRuntime.TimeAbs | Token: 0x2008826
    struct TimeAbs : Il2Cpp::Object {
        // Fields (1)
        void* value; // value | Token: 0x404177f

        // Methods (6)
        // Method: ounds() | Slot: 65535 | Token: 0x6036738
        using fn_ounds = void* (*)(TimeAbs* __this);
        // Method: <>iFixBaseProxy_OilDrumType() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_OilDrumType = void* (*)(TimeAbs* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26426 | Token: 0x21e09
        using fn_GetExchangeCurrencySubType = void* (*)(TimeAbs* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(TimeAbs* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(TimeAbs* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x7e45
        using fn_Method_5 = void* (*)(TimeAbs* __this);
    };

    // TypeDefIndex: 34854 | Original: COW.GamePlay.UGCRuntime.TimeAbsMS | Token: 0x2008827
    struct TimeAbsMS : Il2Cpp::Object {
        // Fields (1)
        void* value; // value | Token: 0x4041780

        // Methods (6)
        // Method: Method_0(void* strAPPSecret) | Slot: 9541 | Token: 0x1d59bc
        using fn_Method_0 = void* (*)(TimeAbsMS* __this, void* strAPPSecret);
        // Method: Method_1() | Slot: 32327 | Token: 0xffff
        using fn_Method_1 = void* (*)(TimeAbsMS* __this);
        // Method: gLevel() | Slot: 17959 | Token: 0x886
        using fn_gLevel = void* (*)(TimeAbsMS* __this);
        // Method: ds() | Slot: 65535 | Token: 0x6036740
        using fn_ds = void* (*)(TimeAbsMS* __this);
        // Method: set_ShieldScale() | Slot: 2182 | Token: 0xffffffff
        using fn_set_ShieldScale = void* (*)(TimeAbsMS* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 26434 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(TimeAbsMS* __this);
    };

    // TypeDefIndex: 34855 | Original: COW.GamePlay.UGCRuntime.TimeUtils | Token: 0x2008828
    struct TimeUtils : Il2Cpp::Object {

        // Methods (2)
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(TimeUtils* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x120f2
        using fn_Method_1 = void* (*)(TimeUtils* __this);
    };

    // TypeDefIndex: 34856 | Original: COW.GamePlay.UGCRuntime.TimerHandler | Token: 0x2008829
    struct TimerHandler : Il2Cpp::Object {

        // Methods (4)
        // Method: Method_0() | Slot: 0 | Token: 0x7e47
        using fn_Method_0 = void* (*)(TimerHandler* __this);
        // Method: Flag(void* rotation) | Slot: 8434 | Token: 0x1fe1bf
        using fn_Flag = void* (*)(TimerHandler* __this, void* rotation);
        // Method: Method_2() | Slot: 32327 | Token: 0xffff
        using fn_Method_2 = void* (*)(TimerHandler* __this);
        // Method: bum() | Slot: 63605 | Token: 0x881
        using fn_bum = void* (*)(TimerHandler* __this);
    };

    // TypeDefIndex: 34857 | Original: COW.GamePlay.UGCRuntime.Timer | Token: 0x200882a
    struct Timer : Il2Cpp::Object {
        // Fields (4)
        void* isRepeated; // isRepeated | Token: 0x4041781
        void* duration; // duration | Token: 0x4041782
        void* expiredTime; // expiredTime | Token: 0x4041783
        void* action; // action | Token: 0x4041784

        // Methods (5)
        // Method: ds() | Slot: 65535 | Token: 0x6036748
        using fn_ds = void* (*)(Timer* __this);
        // Method: PPADIBFPGNI() | Slot: 2177 | Token: 0xffffffff
        using fn_PPADIBFPGNI = void* (*)(Timer* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 26442 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(Timer* __this);
        // Method: >j__TPar() | Slot: 65535 | Token: 0x8000000
        using fn__j__TPar = void* (*)(Timer* __this);
        // Method: Method_4(void* info, void* context) | Slot: 7696 | Token: 0x12545
        using fn_Method_4 = void* (*)(Timer* __this, void* info, void* context);
    };

    // TypeDefIndex: 34858 | Original: COW.GamePlay.UGCRuntime.Tuple2`2 | Token: 0x200882b
    struct Tuple2_2 : Il2Cpp::Object {
        // Fields (2)
        void* _Item1_k__BackingField; // <Item1>k__BackingField | Token: 0x4041785
        void* _Item2_k__BackingField; // <Item2>k__BackingField | Token: 0x4041786

        // Methods (6)
        // Method: Method_0() | Slot: 0 | Token: 0x7e47
        using fn_Method_0 = void* (*)(Tuple2_2* __this);
        // Method: Method_1(void* priority) | Slot: 9541 | Token: 0x50d6e0
        using fn_Method_1 = void* (*)(Tuple2_2* __this, void* priority);
        // Method: Method_2() | Slot: 32327 | Token: 0x22
        using fn_Method_2 = void* (*)(Tuple2_2* __this);
        // Method: bum() | Slot: 18045 | Token: 0x1c4
        using fn_bum = void* (*)(Tuple2_2* __this);
        // Method: ds(void* OJEPOBEENEK, void* EIOKHLKJEEL) | Slot: 90 | Token: 0x6036750
        using fn_ds = void* (*)(Tuple2_2* __this, void* OJEPOBEENEK, void* EIOKHLKJEEL);
        // Method: JFLDIMHHJKG() | Slot: 145 | Token: 0xffffffff
        using fn_JFLDIMHHJKG = void* (*)(Tuple2_2* __this);
    };

    // TypeDefIndex: 34859 | Original: COW.GamePlay.UGCRuntime.Tuple`3 | Token: 0x200882c
    struct Tuple_3 : Il2Cpp::Object {
        // Fields (3)
        void* _Item1_k__BackingField; // <Item1>k__BackingField | Token: 0x4041787
        void* _Item2_k__BackingField; // <Item2>k__BackingField | Token: 0x4041788
        void* _Item3_k__BackingField; // <Item3>k__BackingField | Token: 0x4041789

        // Methods (8)
        // Method: BOKO() | Slot: 26450 | Token: 0x21e1a
        using fn_BOKO = void* (*)(Tuple_3* __this);
        // Method: __Field() | Slot: 65535 | Token: 0x8000000
        using fn___Field = void* (*)(Tuple_3* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x12545
        using fn_Method_2 = void* (*)(Tuple_3* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x7e47
        using fn_Method_3 = void* (*)(Tuple_3* __this);
        // Method: Method_4() | Slot: 27076 | Token: 0x594708
        using fn_Method_4 = void* (*)(Tuple_3* __this);
        // Method: Method_5() | Slot: 32327 | Token: 0xffff
        using fn_Method_5 = void* (*)(Tuple_3* __this);
        // Method: bum() | Slot: 18227 | Token: 0x86
        using fn_bum = void* (*)(Tuple_3* __this);
        // Method: ds(void* HCLGHJNEFIC) | Slot: 65535 | Token: 0x6036758
        using fn_ds = void* (*)(Tuple_3* __this, void* HCLGHJNEFIC);
    };

    // TypeDefIndex: 34860 | Original: COW.GamePlay.UGCRuntime.Tuple`4 | Token: 0x200882d
    struct Tuple_4 : Il2Cpp::Object {
        // Fields (4)
        void* _Item1_k__BackingField; // <Item1>k__BackingField | Token: 0x404178a
        void* _Item2_k__BackingField; // <Item2>k__BackingField | Token: 0x404178b
        void* _Item3_k__BackingField; // <Item3>k__BackingField | Token: 0x404178c
        void* _Item4_k__BackingField; // <Item4>k__BackingField | Token: 0x404178d

        // Methods (9)
        // Method: UnRegisterEntity() | Slot: 196 | Token: 0xffffffff
        using fn_UnRegisterEntity = void* (*)(Tuple_4* __this);
        // Method: () | Slot: 26458 | Token: 0xffffffff
        using fn_unnamed = void* (*)(Tuple_4* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(Tuple_4* __this);
        // Method: Method_3() | Slot: 7722 | Token: 0x12545
        using fn_Method_3 = void* (*)(Tuple_4* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x7e47
        using fn_Method_4 = void* (*)(Tuple_4* __this);
        // Method: Method_5() | Slot: 52008 | Token: 0x57f5cb
        using fn_Method_5 = void* (*)(Tuple_4* __this);
        // Method: Method_6() | Slot: 32327 | Token: 0x47
        using fn_Method_6 = void* (*)(Tuple_4* __this);
        // Method: bum() | Slot: 18274 | Token: 0x86
        using fn_bum = void* (*)(Tuple_4* __this);
        // Method: ds() | Slot: 65535 | Token: 0x6036760
        using fn_ds = void* (*)(Tuple_4* __this);
    };

    // TypeDefIndex: 34861 | Original: COW.GamePlay.UGCRuntime.IMsgPool | Token: 0x200882e
    struct IMsgPool : Il2Cpp::Object {

        // Methods (2)
        // Method: StopSummonerShieldSound() | Slot: 134 | Token: 0xffffffff
        using fn_StopSummonerShieldSound = void* (*)(IMsgPool* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 26466 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(IMsgPool* __this);
    };

    // TypeDefIndex: 34862 | Original: COW.GamePlay.UGCRuntime.IUDPMessageSerializer | Token: 0x200882f
    struct IUDPMessageSerializer : Il2Cpp::Object {

        // Methods (3)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(IUDPMessageSerializer* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(IUDPMessageSerializer* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x7e47
        using fn_Method_2 = void* (*)(IUDPMessageSerializer* __this);
    };

    // TypeDefIndex: 34863 | Original: COW.GamePlay.UGCRuntime.IteratorResultType | Token: 0x2008830
    struct IteratorResultType : Il2Cpp::Object {
        // Fields (3)
        void* value__; // value__ | Token: 0x404178e
        void* Continue; // Continue | Token: 0x404178f
        void* Break; // Break | Token: 0x4041790
    };

    // TypeDefIndex: 34864 | Original: COW.GamePlay.UGCRuntime.IteratorHandle | Token: 0x2008831
    struct IteratorHandle : Il2Cpp::Object {

        // Methods (4)
        // Method: Method_0(void* circlePlane) | Slot: 9541 | Token: 0x5947b6
        using fn_Method_0 = void* (*)(IteratorHandle* __this, void* circlePlane);
        // Method: Method_1() | Slot: 32327 | Token: 0xffff
        using fn_Method_1 = void* (*)(IteratorHandle* __this);
        // Method: t() | Slot: 23944 | Token: 0x81
        using fn_t = void* (*)(IteratorHandle* __this);
        // Method: ds(void* MHAAFMCMHAC, void* PAFBAHJAAGC) | Slot: 31 | Token: 0x6036768
        using fn_ds = void* (*)(IteratorHandle* __this, void* MHAAFMCMHAC, void* PAFBAHJAAGC);
    };

    // TypeDefIndex: 34865 | Original: COW.GamePlay.UGCRuntime.ListUtils | Token: 0x2008832
    struct ListUtils : Il2Cpp::Object {

        // Methods (1)
        // Method: OnUpdate() | Slot: 198 | Token: 0xffffffff
        using fn_OnUpdate = void* (*)(ListUtils* __this);
    };

    // TypeDefIndex: 34866 | Original: COW.GamePlay.UGCRuntime.UGCSkeletonPartType | Token: 0x2008833
    struct UGCSkeletonPartType : Il2Cpp::Object {
        // Fields (12)
        void* value__; // value__ | Token: 0x4041791
        void* Head; // Head | Token: 0x4041792
        void* LeftArm; // LeftArm | Token: 0x4041793
        void* LeftHand; // LeftHand | Token: 0x4041794
        void* RightArm; // RightArm | Token: 0x4041795
        void* RightHand; // RightHand | Token: 0x4041796
        void* Body; // Body | Token: 0x4041797
        void* LeftLeg; // LeftLeg | Token: 0x4041798
        void* LeftFoot; // LeftFoot | Token: 0x4041799
        void* RightLeg; // RightLeg | Token: 0x404179a
        void* RightFoot; // RightFoot | Token: 0x404179b
        void* Count; // Count | Token: 0x404179c
    };

    // TypeDefIndex: 34869 | Original: COW.GamePlay.UGCRuntime.UGCScreenshotHelper | Token: 0x2008834
    struct UGCScreenshotHelper : Il2Cpp::Object {

        // Methods (3)
        // Method: service() | Slot: 26474 | Token: 0xffffffff
        using fn_service = void* (*)(UGCScreenshotHelper* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UGCScreenshotHelper* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x12545
        using fn_Method_2 = void* (*)(UGCScreenshotHelper* __this);
    };

} // namespace COW_GamePlay_UGCRuntime
