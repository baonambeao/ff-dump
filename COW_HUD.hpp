#pragma once
#include "Il2CppBase.hpp"

namespace COW_HUD {

    // TypeDefIndex: 29065 | Original: COW.HUD.UIHudAIHPController | Token: 0x200718a
    struct UIHudAIHPController : Il2Cpp::Object {
        // Fields (10)
        void* m_View; // m_View | Token: 0x4038ddb
        void* m_BindPlayerID; // m_BindPlayerID | Token: 0x4038ddc
        void* m_Counter; // m_Counter | Token: 0x4038ddd
        void* m_AIHP; // m_AIHP | Token: 0x4038dde
        void* m_IsPlayer; // m_IsPlayer | Token: 0x4038ddf
        void* m_BindAI; // m_BindAI | Token: 0x4038de0
        void* m_BindPlayer; // m_BindPlayer | Token: 0x4038de1
        void* ISVISIBLE_PLAYER; // ISVISIBLE_PLAYER | Token: 0x4038de2
        void* ISVISIBLE_HP; // ISVISIBLE_HP | Token: 0x4038de3
        void* m_Visible; // m_Visible | Token: 0x4038de4

        // Methods (17)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudAIHPController* __this);
        // Method: Method_1() | Slot: 30066 | Token: 0x40e4
        using fn_Method_1 = void* (*)(UIHudAIHPController* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5e5c
        using fn_Method_2 = void* (*)(UIHudAIHPController* __this);
        // Method: eBodyModel() | Slot: 16612 | Token: 0x43babd
        using fn_eBodyModel = void* (*)(UIHudAIHPController* __this);
        // Method: Method_4() | Slot: 24156 | Token: 0x1ffff
        using fn_Method_4 = void* (*)(UIHudAIHPController* __this);
        // Method: bum() | Slot: 47888 | Token: 0x86
        using fn_bum = void* (*)(UIHudAIHPController* __this);
        // Method: erTransform(void* collectionType, void* uniqueID, void* dataList, void* equipSkinID) | Slot: 65535 | Token: 0x6028e40
        using fn_erTransform = void* (*)(UIHudAIHPController* __this, void* collectionType, void* uniqueID, void* dataList, void* equipSkinID);
        // Method: UpdateMultiSelectCache() | Slot: 134 | Token: 0xffffffff
        using fn_UpdateMultiSelectCache = void* (*)(UIHudAIHPController* __this);
        // Method: ER() | Slot: 36418 | Token: 0x17581
        using fn_ER = void* (*)(UIHudAIHPController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudAIHPController* __this);
        // Method: Method_10() | Slot: 30086 | Token: 0x12545
        using fn_Method_10 = void* (*)(UIHudAIHPController* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x5e5c
        using fn_Method_11 = void* (*)(UIHudAIHPController* __this);
        // Method: eLight() | Slot: 27076 | Token: 0x43bbc9
        using fn_eLight = void* (*)(UIHudAIHPController* __this);
        // Method: Method_13() | Slot: 24156 | Token: 0x2ffff
        using fn_Method_13 = void* (*)(UIHudAIHPController* __this);
        // Method: t() | Slot: 48142 | Token: 0x86
        using fn_t = void* (*)(UIHudAIHPController* __this);
        // Method: erTransform(void* weaponID) | Slot: 65535 | Token: 0x6028e48
        using fn_erTransform = void* (*)(UIHudAIHPController* __this, void* weaponID);
        // Method: GetSkillEffectMultiSelectCountFromSource() | Slot: 129 | Token: 0xffffffff
        using fn_GetSkillEffectMultiSelectCountFromSource = void* (*)(UIHudAIHPController* __this);
    };

    // TypeDefIndex: 29066 | Original: COW.HUD.UIHudAssistantTextController | Token: 0x200718b
    struct UIHudAssistantTextController : Il2Cpp::Object {
        // Fields (3)
        void* m_View; // m_View | Token: 0x4038de5
        void* SHOW_ASSISTANT_LINE_DURATION; // SHOW_ASSISTANT_LINE_DURATION | Token: 0x4038de6
        void* m_delayCallID; // m_delayCallID | Token: 0x4038de7

        // Methods (8)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36426 | Token: 0x17592
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudAssistantTextController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudAssistantTextController* __this);
        // Method: Method_2() | Slot: 30102 | Token: 0x69c4
        using fn_Method_2 = void* (*)(UIHudAssistantTextController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5e5c
        using fn_Method_3 = void* (*)(UIHudAssistantTextController* __this);
        // Method: elModel() | Slot: 16612 | Token: 0x43bcc8
        using fn_elModel = void* (*)(UIHudAssistantTextController* __this);
        // Method: Method_5() | Slot: 24156 | Token: 0x2ffff
        using fn_Method_5 = void* (*)(UIHudAssistantTextController* __this);
        // Method: t() | Slot: 48382 | Token: 0x86
        using fn_t = void* (*)(UIHudAssistantTextController* __this);
        // Method: erTransform(void* subCollection, void* secondaryID) | Slot: 65535 | Token: 0x6028e50
        using fn_erTransform = void* (*)(UIHudAssistantTextController* __this, void* subCollection, void* secondaryID);
    };

    // TypeDefIndex: 29067 | Original: COW.HUD.UIHudAuroraBoySkillController | Token: 0x200718c
    struct UIHudAuroraBoySkillController : Il2Cpp::Object {
        // Fields (20)
        void* CachedTransform; // CachedTransform | Token: 0x4038de8
        void* m_EnemyQueue; // m_EnemyQueue | Token: 0x4038de9
        void* m_HitInfo; // m_HitInfo | Token: 0x4038dea
        void* m_TraceFlag; // m_TraceFlag | Token: 0x4038deb
        void* m_EnemyIconMap; // m_EnemyIconMap | Token: 0x4038dec
        void* m_EnemyIconOldPos; // m_EnemyIconOldPos | Token: 0x4038ded
        void* m_EnemyIconDampVelocity; // m_EnemyIconDampVelocity | Token: 0x4038dee
        void* m_EnemyIconLastResult; // m_EnemyIconLastResult | Token: 0x4038def
        void* m_EnemyIconChecking; // m_EnemyIconChecking | Token: 0x4038df0
        void* m_PlayerIdCache; // m_PlayerIdCache | Token: 0x4038df1
        void* m_SkydivingHudVfx; // m_SkydivingHudVfx | Token: 0x4038df2
        void* m_SkydivingHudFullScreenId; // m_SkydivingHudFullScreenId | Token: 0x4038df3
        void* m_SkydivingHudVfxId; // m_SkydivingHudVfxId | Token: 0x4038df4
        void* m_SkydivingHudVfxAnim; // m_SkydivingHudVfxAnim | Token: 0x4038df5
        void* m_AnimIn; // m_AnimIn | Token: 0x4038df6
        void* m_AnimOut; // m_AnimOut | Token: 0x4038df7
        void* m_SkydivingHudVfxAnimDelayCall; // m_SkydivingHudVfxAnimDelayCall | Token: 0x4038df8
        void* m_EnemyIconRes; // m_EnemyIconRes | Token: 0x4038df9
        void* m_SkillSkydiving; // m_SkillSkydiving | Token: 0x4038dfa
        void* m_AuroraboySkill; // m_AuroraboySkill | Token: 0x4038dfb

        // Methods (22)
        // Method: NeedRequestMultiSelectInRandomSkin() | Slot: 134 | Token: 0xffffffff
        using fn_NeedRequestMultiSelectInRandomSkin = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: _WAIT() | Slot: 36434 | Token: 0x175a2
        using fn__WAIT = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: Method_3() | Slot: 30119 | Token: 0x59d2
        using fn_Method_3 = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5e5c
        using fn_Method_4 = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: Model() | Slot: 14987 | Token: 0x43bd8c
        using fn_Model = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: Method_6() | Slot: 24156 | Token: 0x2ffff
        using fn_Method_6 = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: ardVideo() | Slot: 48578 | Token: 0x81
        using fn_ardVideo = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: erTransform(void* subCollection) | Slot: 65535 | Token: 0x6028e58
        using fn_erTransform = void* (*)(UIHudAuroraBoySkillController* __this, void* subCollection);
        // Method: GetRandomCollectionActions() | Slot: 134 | Token: 0xffffffff
        using fn_GetRandomCollectionActions = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36442 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: Method_12() | Slot: 30131 | Token: 0x3a92
        using fn_Method_12 = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x5e5c
        using fn_Method_13 = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: Model(void* priority) | Slot: 9541 | Token: 0x43be8b
        using fn_Model = void* (*)(UIHudAuroraBoySkillController* __this, void* priority);
        // Method: Method_15() | Slot: 24156 | Token: 0x2ffff
        using fn_Method_15 = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: bum() | Slot: 48848 | Token: 0x86
        using fn_bum = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: erTransform(void* collectionType, void* uniqueID, void* isFastEquip, void* callback) | Slot: 65535 | Token: 0x6028e60
        using fn_erTransform = void* (*)(UIHudAuroraBoySkillController* __this, void* collectionType, void* uniqueID, void* isFastEquip, void* callback);
        // Method: GetUpdateRandomSlotInfosExceptWeapon() | Slot: 129 | Token: 0xffffffff
        using fn_GetUpdateRandomSlotInfosExceptWeapon = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: _WAIT() | Slot: 36450 | Token: 0x175c2
        using fn__WAIT = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudAuroraBoySkillController* __this);
        // Method: Method_21() | Slot: 65535 | Token: 0x3a92
        using fn_Method_21 = void* (*)(UIHudAuroraBoySkillController* __this);
    };

    // TypeDefIndex: 29068 | Original: COW.HUD.UIHudBeHintedController | Token: 0x200718d
    struct UIHudBeHintedController : Il2Cpp::Object {
        // Fields (2)
        void* m_View; // m_View | Token: 0x4038dfc
        void* m_EndServerTime; // m_EndServerTime | Token: 0x4038dfd

        // Methods (6)
        // Method: Method_0() | Slot: 0 | Token: 0x5e5c
        using fn_Method_0 = void* (*)(UIHudBeHintedController* __this);
        // Method: l(void* priority) | Slot: 9541 | Token: 0x43c00a
        using fn_l = void* (*)(UIHudBeHintedController* __this, void* priority);
        // Method: Method_2() | Slot: 24156 | Token: 0x2ffff
        using fn_Method_2 = void* (*)(UIHudBeHintedController* __this);
        // Method: bum() | Slot: 49256 | Token: 0x86
        using fn_bum = void* (*)(UIHudBeHintedController* __this);
        // Method: erTransform(void* collectionSubType, void* secondaryID) | Slot: 65535 | Token: 0x6028e68
        using fn_erTransform = void* (*)(UIHudBeHintedController* __this, void* collectionSubType, void* secondaryID);
        // Method: SyncMultiSelectCacheFromWeaponSkinCustom() | Slot: 134 | Token: 0xffffffff
        using fn_SyncMultiSelectCacheFromWeaponSkinCustom = void* (*)(UIHudBeHintedController* __this);
    };

    // TypeDefIndex: 29069 | Original: COW.HUD.UIHudCasualRoomMatchResultController | Token: 0x200718e
    struct UIHudCasualRoomMatchResultController : Il2Cpp::Object {
        // Fields (36)
        void* SOLO_TOP_TEAM_HEIGHT; // SOLO_TOP_TEAM_HEIGHT | Token: 0x4038dfe
        void* SOLO_TOP_TEAM_CELL_HEIGHT; // SOLO_TOP_TEAM_CELL_HEIGHT | Token: 0x4038dff
        void* SOLO_TOP_PLAYER_HEIGHT; // SOLO_TOP_PLAYER_HEIGHT | Token: 0x4038e00
        void* SOLO_NORMAL_TEAM_HEIGHT; // SOLO_NORMAL_TEAM_HEIGHT | Token: 0x4038e01
        void* SOLO_NORMAL_TEAM_CELL_HEIGHT; // SOLO_NORMAL_TEAM_CELL_HEIGHT | Token: 0x4038e02
        void* SOLO_NORMAL_PLAYER_HEIGHT; // SOLO_NORMAL_PLAYER_HEIGHT | Token: 0x4038e03
        void* SOLO_TOP_COUNT; // SOLO_TOP_COUNT | Token: 0x4038e04
        void* SOLO_NORMAL_CNT_LABEL_POSX; // SOLO_NORMAL_CNT_LABEL_POSX | Token: 0x4038e05
        void* SOLO_TOP_CNT_LABEL_POSX; // SOLO_TOP_CNT_LABEL_POSX | Token: 0x4038e06
        void* DUO_TOP_TEAM_HEIGHT; // DUO_TOP_TEAM_HEIGHT | Token: 0x4038e07
        void* DUO_TOP_TEAM_CELL_HEIGHT; // DUO_TOP_TEAM_CELL_HEIGHT | Token: 0x4038e08
        void* DUO_TOP_PLAYER_HEIGHT; // DUO_TOP_PLAYER_HEIGHT | Token: 0x4038e09
        void* DUO_NORMAL_TEAM_HEIGHT; // DUO_NORMAL_TEAM_HEIGHT | Token: 0x4038e0a
        void* DUO_NORMAL_TEAM_CELL_HEIGHT; // DUO_NORMAL_TEAM_CELL_HEIGHT | Token: 0x4038e0b
        void* DUO_NORMAL_PLAYER_HEIGHT; // DUO_NORMAL_PLAYER_HEIGHT | Token: 0x4038e0c
        void* DUO_TOP_COUNT; // DUO_TOP_COUNT | Token: 0x4038e0d
        void* DUO_NORMAL_CNT_LABEL_POSX; // DUO_NORMAL_CNT_LABEL_POSX | Token: 0x4038e0e
        void* DUO_TOP_CNT_LABEL_POSX; // DUO_TOP_CNT_LABEL_POSX | Token: 0x4038e0f
        void* QUAD_TOP_TEAM_HEIGHT; // QUAD_TOP_TEAM_HEIGHT | Token: 0x4038e10
        void* QUAD_TOP_TEAM_CELL_HEIGHT; // QUAD_TOP_TEAM_CELL_HEIGHT | Token: 0x4038e11
        void* QUAD_TOP_PLAYER_HEIGHT; // QUAD_TOP_PLAYER_HEIGHT | Token: 0x4038e12
        void* QUAD_NORMAL_TEAM_HEIGHT; // QUAD_NORMAL_TEAM_HEIGHT | Token: 0x4038e13
        void* QUAD_NORMAL_TEAM_CELL_HEIGHT; // QUAD_NORMAL_TEAM_CELL_HEIGHT | Token: 0x4038e14
        void* QUAD_NORMAL_PLAYER_HEIGHT; // QUAD_NORMAL_PLAYER_HEIGHT | Token: 0x4038e15
        void* QUAD_TOP_COUNT; // QUAD_TOP_COUNT | Token: 0x4038e16
        void* QUAD_NORMAL_CNT_LABEL_POSX; // QUAD_NORMAL_CNT_LABEL_POSX | Token: 0x4038e17
        void* QUAD_TOP_CNT_LABEL_POSX; // QUAD_TOP_CNT_LABEL_POSX | Token: 0x4038e18
        void* m_View; // m_View | Token: 0x4038e19
        void* m_CurrentGroupMode; // m_CurrentGroupMode | Token: 0x4038e1a
        void* m_TopTeamHeight; // m_TopTeamHeight | Token: 0x4038e1b
        void* m_TopTeamCellHeight; // m_TopTeamCellHeight | Token: 0x4038e1c
        void* m_NormalTeamHeight; // m_NormalTeamHeight | Token: 0x4038e1d
        void* m_NormalTeamCellHeight; // m_NormalTeamCellHeight | Token: 0x4038e1e
        void* m_TopCount; // m_TopCount | Token: 0x4038e1f
        void* m_TopCntLabelPosX; // m_TopCntLabelPosX | Token: 0x4038e20
        void* m_NormalCntLabelPosX; // m_NormalCntLabelPosX | Token: 0x4038e21

        // Methods (7)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36458 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudCasualRoomMatchResultController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudCasualRoomMatchResultController* __this);
        // Method: Method_2() | Slot: 30168 | Token: 0x120f2
        using fn_Method_2 = void* (*)(UIHudCasualRoomMatchResultController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5e5c
        using fn_Method_3 = void* (*)(UIHudCasualRoomMatchResultController* __this);
        // Method: BodyModel() | Slot: 27076 | Token: 0x43c0e5
        using fn_BodyModel = void* (*)(UIHudCasualRoomMatchResultController* __this);
        // Method: Method_5() | Slot: 24156 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(UIHudCasualRoomMatchResultController* __this);
        // Method: eEffect() | Slot: 49437 | Token: 0x86
        using fn_eEffect = void* (*)(UIHudCasualRoomMatchResultController* __this);
    };

    // TypeDefIndex: 29070 | Original: COW.HUD.UIHudCommonDistanceController | Token: 0x200718f
    struct UIHudCommonDistanceController : Il2Cpp::Object {
        // Fields (3)
        void* m_View; // m_View | Token: 0x4038e22
        void* m_BindLevelObject; // m_BindLevelObject | Token: 0x4038e23
        void* m_ScaleFactorDefault; // m_ScaleFactorDefault | Token: 0x4038e24

        // Methods (17)
        // Method: erTransform(void* subCollection, void* uniqueID, void* skinID) | Slot: 65535 | Token: 0x6028e70
        using fn_erTransform = void* (*)(UIHudCommonDistanceController* __this, void* subCollection, void* uniqueID, void* skinID);
        // Method: GetGotoParamsWithWeaponSkin() | Slot: 134 | Token: 0xffffffff
        using fn_GetGotoParamsWithWeaponSkin = void* (*)(UIHudCommonDistanceController* __this);
        // Method: imable() | Slot: 36466 | Token: 0xffffffff
        using fn_imable = void* (*)(UIHudCommonDistanceController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudCommonDistanceController* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(UIHudCommonDistanceController* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5e5c
        using fn_Method_5 = void* (*)(UIHudCommonDistanceController* __this);
        // Method: Method_6(void* priority) | Slot: 9541 | Token: 0x43c1ab
        using fn_Method_6 = void* (*)(UIHudCommonDistanceController* __this, void* priority);
        // Method: Method_7() | Slot: 24156 | Token: 0xffff
        using fn_Method_7 = void* (*)(UIHudCommonDistanceController* __this);
        // Method: g() | Slot: 49631 | Token: 0x81
        using fn_g = void* (*)(UIHudCommonDistanceController* __this);
        // Method: erTransform(void* collectionType, void* uniqueID) | Slot: 65535 | Token: 0x6028e78
        using fn_erTransform = void* (*)(UIHudCommonDistanceController* __this, void* collectionType, void* uniqueID);
        // Method: LoadMultiSelectDataFromPlayerPrefs() | Slot: 134 | Token: 0xffffffff
        using fn_LoadMultiSelectDataFromPlayerPrefs = void* (*)(UIHudCommonDistanceController* __this);
        // Method: _WAIT() | Slot: 36474 | Token: 0x175ea
        using fn__WAIT = void* (*)(UIHudCommonDistanceController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudCommonDistanceController* __this);
        // Method: Method_13() | Slot: 30189 | Token: 0x12545
        using fn_Method_13 = void* (*)(UIHudCommonDistanceController* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x5e5c
        using fn_Method_14 = void* (*)(UIHudCommonDistanceController* __this);
        // Method: rikeMotorcycleSkinInfo(void* priority) | Slot: 9541 | Token: 0x43c2cf
        using fn_rikeMotorcycleSkinInfo = void* (*)(UIHudCommonDistanceController* __this, void* priority);
        // Method: Method_16() | Slot: 24156 | Token: 0x2ffff
        using fn_Method_16 = void* (*)(UIHudCommonDistanceController* __this);
    };

    // TypeDefIndex: 29071 | Original: COW.HUD.UIHudDreamlandBoyPetHPController | Token: 0x2007190
    struct UIHudDreamlandBoyPetHPController : Il2Cpp::Object {
        // Fields (5)
        void* m_View; // m_View | Token: 0x4038e25
        void* m_BindPet; // m_BindPet | Token: 0x4038e26
        void* m_RaycastShowCheckInterval; // m_RaycastShowCheckInterval | Token: 0x4038e27
        void* m_NextRaycastShowCheckTime; // m_NextRaycastShowCheckTime | Token: 0x4038e28
        void* m_IsRaycastShow; // m_IsRaycastShow | Token: 0x4038e29

        // Methods (14)
        // Method: bum() | Slot: 18858 | Token: 0x1886
        using fn_bum = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: erTransform() | Slot: 65535 | Token: 0x6028e80
        using fn_erTransform = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: <>iFixBaseProxy_Init() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Init = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36482 | Token: 0x175f4
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x12545
        using fn_Method_5 = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5e58
        using fn_Method_6 = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: MotorcycleSkinInfo(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_MotorcycleSkinInfo = void* (*)(UIHudDreamlandBoyPetHPController* __this, void* instCount);
        // Method: Method_8() | Slot: 24153 | Token: 0xffff
        using fn_Method_8 = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: t() | Slot: 103 | Token: 0x83
        using fn_t = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: nterTransform() | Slot: 65535 | Token: 0x6028e88
        using fn_nterTransform = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: <GetEquipMutliSelectRandomInfos>b__0() | Slot: 131 | Token: 0xffffffff
        using fn__GetEquipMutliSelectRandomInfos_b__0 = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36490 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudDreamlandBoyPetHPController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudDreamlandBoyPetHPController* __this);
    };

    // TypeDefIndex: 29072 | Original: COW.HUD.UIHudEnemyReviveHintController | Token: 0x2007191
    struct UIHudEnemyReviveHintController : Il2Cpp::Object {
        // Fields (9)
        void* m_HintCtrlPool; // m_HintCtrlPool | Token: 0x4038e2a
        void* m_InvisibleQueue; // m_InvisibleQueue | Token: 0x4038e2b
        void* m_VisibleQueue; // m_VisibleQueue | Token: 0x4038e2c
        void* m_VisibleQueue3D; // m_VisibleQueue3D | Token: 0x4038e2d
        void* m_PlayerIdCache; // m_PlayerIdCache | Token: 0x4038e2e
        void* m_RangeSqr; // m_RangeSqr | Token: 0x4038e2f
        void* m_MaxDis; // m_MaxDis | Token: 0x4038e30
        void* MaxInvisiableDuration; // MaxInvisiableDuration | Token: 0x4038e31
        void* m_LastUpdateInvisiableRevivedPlayerTs; // m_LastUpdateInvisiableRevivedPlayerTs | Token: 0x4038e32

        // Methods (20)
        // Method: Method_0() | Slot: 65535 | Token: 0x120f2
        using fn_Method_0 = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5e5d
        using fn_Method_1 = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: cycleSkinInfo(void* circlePlane) | Slot: 9541 | Token: 0x43c4c7
        using fn_cycleSkinInfo = void* (*)(UIHudEnemyReviveHintController* __this, void* circlePlane);
        // Method: Method_3() | Slot: 24157 | Token: 0x1ffff
        using fn_Method_3 = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: bum() | Slot: 50424 | Token: 0x86
        using fn_bum = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: rTransform(void* itemID) | Slot: 65535 | Token: 0x6028e90
        using fn_rTransform = void* (*)(UIHudEnemyReviveHintController* __this, void* itemID);
        // Method: CheckIsReachRankItemUseLevel() | Slot: 134 | Token: 0xffffffff
        using fn_CheckIsReachRankItemUseLevel = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36498 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: Method_9(void* values) | Slot: 30207 | Token: 0x12545
        using fn_Method_9 = void* (*)(UIHudEnemyReviveHintController* __this, void* values);
        // Method: Method_10() | Slot: 0 | Token: 0x5e62
        using fn_Method_10 = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: inInfo() | Slot: 24389 | Token: 0x43c675
        using fn_inInfo = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: Method_12() | Slot: 24163 | Token: 0x1ffff
        using fn_Method_12 = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: bum() | Slot: 50993 | Token: 0x1886
        using fn_bum = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: rm() | Slot: 65535 | Token: 0x6028e98
        using fn_rm = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: get_CurrentShowCSTipsLobbyData() | Slot: 2182 | Token: 0xffffffff
        using fn_get_CurrentShowCSTipsLobbyData = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36506 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: Method_18() | Slot: 65535 | Token: 0x120f2
        using fn_Method_18 = void* (*)(UIHudEnemyReviveHintController* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x5e65
        using fn_Method_19 = void* (*)(UIHudEnemyReviveHintController* __this);
    };

    // TypeDefIndex: 29073 | Original: COW.HUD.UIHudEnemyReviveHintItemController | Token: 0x2007192
    struct UIHudEnemyReviveHintItemController : Il2Cpp::Object {
        // Fields (3)
        void* m_View; // m_View | Token: 0x4038e33
        void* CachedTransform; // CachedTransform | Token: 0x4038e34
        void* m_BaseColor; // m_BaseColor | Token: 0x4038e35

        // Methods (5)
        // Method: Method_0() | Slot: 51275 | Token: 0x43c7bf
        using fn_Method_0 = void* (*)(UIHudEnemyReviveHintItemController* __this);
        // Method: Method_1() | Slot: 24165 | Token: 0xffff
        using fn_Method_1 = void* (*)(UIHudEnemyReviveHintItemController* __this);
        // Method: bum() | Slot: 51190 | Token: 0x886
        using fn_bum = void* (*)(UIHudEnemyReviveHintItemController* __this);
        // Method: rm() | Slot: 65535 | Token: 0x6028ea0
        using fn_rm = void* (*)(UIHudEnemyReviveHintItemController* __this);
        // Method: RecordGameAssistantBubbleShowTime() | Slot: 134 | Token: 0xffffffff
        using fn_RecordGameAssistantBubbleShowTime = void* (*)(UIHudEnemyReviveHintItemController* __this);
    };

    // TypeDefIndex: 29074 | Original: COW.HUD.MarkEnemyType | Token: 0x2007193
    struct MarkEnemyType : Il2Cpp::Object {
        // Fields (14)
        void* value__; // value__ | Token: 0x4038e36
        void* Hint; // Hint | Token: 0x4038e37
        void* BanActiveSkill; // BanActiveSkill | Token: 0x4038e38
        void* DeliveryMarkEnemy; // DeliveryMarkEnemy | Token: 0x4038e39
        void* MarkCuringEnemy; // MarkCuringEnemy | Token: 0x4038e3a
        void* MarkIceWallNearbyEnemy; // MarkIceWallNearbyEnemy | Token: 0x4038e3b
        void* SantinoDummyBombbyEnemy; // SantinoDummyBombbyEnemy | Token: 0x4038e3c
        void* SlowdownMarkEnemy; // SlowdownMarkEnemy | Token: 0x4038e3d
        void* ScannerMarker; // ScannerMarker | Token: 0x4038e3e
        void* BanHighZone; // BanHighZone | Token: 0x4038e3f
        void* SantinoDummyDie; // SantinoDummyDie | Token: 0x4038e40
        void* IceWallModuleBuffMark; // IceWallModuleBuffMark | Token: 0x4038e41
        void* SFRolePlayPhantom; // SFRolePlayPhantom | Token: 0x4038e42
        void* DreamlandBoyPetBreak; // DreamlandBoyPetBreak | Token: 0x4038e43
    };

    // TypeDefIndex: 29075 | Original: COW.HUD.UIHudEnermyPointController | Token: 0x2007194
    struct UIHudEnermyPointController : Il2Cpp::Object {
        // Fields (9)
        void* m_View; // m_View | Token: 0x4038e44
        void* m_BindPlayer; // m_BindPlayer | Token: 0x4038e45
        void* m_EndServerTime; // m_EndServerTime | Token: 0x4038e46
        void* m_EnemyType; // m_EnemyType | Token: 0x4038e47
        void* m_CommonMarkerType; // m_CommonMarkerType | Token: 0x4038e48
        void* m_bIsShowScannerMark; // m_bIsShowScannerMark | Token: 0x4038e49
        void* IsUsing; // IsUsing | Token: 0x4038e4a
        void* m_HideDelayCall; // m_HideDelayCall | Token: 0x4038e4b
        void* m_MarkEffect; // m_MarkEffect | Token: 0x4038e4c

        // Methods (19)
        // Method: GetExchangeCurrencySubType() | Slot: 36514 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudEnermyPointController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudEnermyPointController* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x69c4
        using fn_Method_2 = void* (*)(UIHudEnermyPointController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5e65
        using fn_Method_3 = void* (*)(UIHudEnermyPointController* __this);
        // Method: Method_4(void* priority) | Slot: 9541 | Token: 0x43c8ab
        using fn_Method_4 = void* (*)(UIHudEnermyPointController* __this, void* priority);
        // Method: Method_5() | Slot: 24165 | Token: 0x1ffff
        using fn_Method_5 = void* (*)(UIHudEnermyPointController* __this);
        // Method: t() | Slot: 51409 | Token: 0x886
        using fn_t = void* (*)(UIHudEnermyPointController* __this);
        // Method: rm(void* value) | Slot: 65535 | Token: 0x6028ea8
        using fn_rm = void* (*)(UIHudEnermyPointController* __this, void* value);
        // Method: get_IsGameAssistWndOpen() | Slot: 2182 | Token: 0xffffffff
        using fn_get_IsGameAssistWndOpen = void* (*)(UIHudEnermyPointController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36522 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudEnermyPointController* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UIHudEnermyPointController* __this);
        // Method: Method_11() | Slot: 30214 | Token: 0x12545
        using fn_Method_11 = void* (*)(UIHudEnermyPointController* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x5e65
        using fn_Method_12 = void* (*)(UIHudEnermyPointController* __this);
        // Method: Method_13(void* d) | Slot: 9541 | Token: 0x1c6d25
        using fn_Method_13 = void* (*)(UIHudEnermyPointController* __this, void* d);
        // Method: Method_14() | Slot: 24165 | Token: 0x3000e
        using fn_Method_14 = void* (*)(UIHudEnermyPointController* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 51457 | Token: 0x1e6
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(UIHudEnermyPointController* __this);
        // Method: rm(void* ruleId, void* groupId) | Slot: 65535 | Token: 0x6028eb0
        using fn_rm = void* (*)(UIHudEnermyPointController* __this, void* ruleId, void* groupId);
        // Method: CheckGameMode() | Slot: 129 | Token: 0xffffffff
        using fn_CheckGameMode = void* (*)(UIHudEnermyPointController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36530 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudEnermyPointController* __this);
    };

    // TypeDefIndex: 29076 | Original: COW.HUD.UIHudIdentityController | Token: 0x2007195
    struct UIHudIdentityController : Il2Cpp::Object {
        // Fields (5)
        void* m_View; // m_View | Token: 0x4038e4d
        void* m_BindPlayer; // m_BindPlayer | Token: 0x4038e4e
        void* m_EndServerTime; // m_EndServerTime | Token: 0x4038e4f
        void* m_Identity; // m_Identity | Token: 0x4038e50
        void* IsUsing; // IsUsing | Token: 0x4038e51

        // Methods (18)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudIdentityController* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0xc84d
        using fn_Method_1 = void* (*)(UIHudIdentityController* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5e65
        using fn_Method_2 = void* (*)(UIHudIdentityController* __this);
        // Method: heelModel(void* priority) | Slot: 9541 | Token: 0x43c956
        using fn_heelModel = void* (*)(UIHudIdentityController* __this, void* priority);
        // Method: Method_4() | Slot: 24165 | Token: 0x1ffff
        using fn_Method_4 = void* (*)(UIHudIdentityController* __this);
        // Method: GetThumbWorldPosition() | Slot: 51567 | Token: 0x81
        using fn_GetThumbWorldPosition = void* (*)(UIHudIdentityController* __this);
        // Method: rm() | Slot: 65535 | Token: 0x6028eb8
        using fn_rm = void* (*)(UIHudIdentityController* __this);
        // Method: CheckNewBieForNoFrequency() | Slot: 129 | Token: 0xffffffff
        using fn_CheckNewBieForNoFrequency = void* (*)(UIHudIdentityController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36538 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudIdentityController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudIdentityController* __this);
        // Method: Method_10() | Slot: 65535 | Token: 0xd83c
        using fn_Method_10 = void* (*)(UIHudIdentityController* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x5e65
        using fn_Method_11 = void* (*)(UIHudIdentityController* __this);
        // Method: Method_12() | Slot: 55356 | Token: 0x43c9db
        using fn_Method_12 = void* (*)(UIHudIdentityController* __this);
        // Method: Method_13() | Slot: 24165 | Token: 0xffff
        using fn_Method_13 = void* (*)(UIHudIdentityController* __this);
        // Method: GetThumbWorldPosition() | Slot: 51702 | Token: 0x81
        using fn_GetThumbWorldPosition = void* (*)(UIHudIdentityController* __this);
        // Method: rm() | Slot: 65535 | Token: 0x6028ec0
        using fn_rm = void* (*)(UIHudIdentityController* __this);
        // Method: CheckCSRankCSPeakUnlock() | Slot: 129 | Token: 0xffffffff
        using fn_CheckCSRankCSPeakUnlock = void* (*)(UIHudIdentityController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36546 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudIdentityController* __this);
    };

    // TypeDefIndex: 29077 | Original: COW.HUD.UIHudInfectionHPController | Token: 0x2007196
    struct UIHudInfectionHPController : Il2Cpp::Object {
        // Fields (3)
        void* m_View; // m_View | Token: 0x4038e52
        void* m_BindPlayer; // m_BindPlayer | Token: 0x4038e53
        void* m_Counter; // m_Counter | Token: 0x4038e54

        // Methods (17)
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudInfectionHPController* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x69c4
        using fn_Method_1 = void* (*)(UIHudInfectionHPController* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5e65
        using fn_Method_2 = void* (*)(UIHudInfectionHPController* __this);
        // Method: Method_3() | Slot: 27076 | Token: 0x43ca73
        using fn_Method_3 = void* (*)(UIHudInfectionHPController* __this);
        // Method: Method_4() | Slot: 24165 | Token: 0x1ffff
        using fn_Method_4 = void* (*)(UIHudInfectionHPController* __this);
        // Method: bum() | Slot: 51883 | Token: 0x86
        using fn_bum = void* (*)(UIHudInfectionHPController* __this);
        // Method: rm(void* isBr) | Slot: 65535 | Token: 0x6028ec8
        using fn_rm = void* (*)(UIHudInfectionHPController* __this, void* isBr);
        // Method: SetMapOpenInfoReady() | Slot: 134 | Token: 0xffffffff
        using fn_SetMapOpenInfoReady = void* (*)(UIHudInfectionHPController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36554 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudInfectionHPController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudInfectionHPController* __this);
        // Method: Method_10() | Slot: 65535 | Token: 0x12545
        using fn_Method_10 = void* (*)(UIHudInfectionHPController* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x5e65
        using fn_Method_11 = void* (*)(UIHudInfectionHPController* __this);
        // Method: del(void* priority) | Slot: 9541 | Token: 0x43cb24
        using fn_del = void* (*)(UIHudInfectionHPController* __this, void* priority);
        // Method: Method_13() | Slot: 24165 | Token: 0xffff
        using fn_Method_13 = void* (*)(UIHudInfectionHPController* __this);
        // Method: bum() | Slot: 52049 | Token: 0x86
        using fn_bum = void* (*)(UIHudInfectionHPController* __this);
        // Method: rm() | Slot: 65535 | Token: 0x6028ed0
        using fn_rm = void* (*)(UIHudInfectionHPController* __this);
        // Method: ClearForceDisplayActivityTipsDebug() | Slot: 134 | Token: 0xffffffff
        using fn_ClearForceDisplayActivityTipsDebug = void* (*)(UIHudInfectionHPController* __this);
    };

    // TypeDefIndex: 29078 | Original: COW.HUD.UIHudLeaderBoardTitleController | Token: 0x2007197
    struct UIHudLeaderBoardTitleController : Il2Cpp::Object {
        // Fields (22)
        void* m_View; // m_View | Token: 0x4038e55
        void* m_IconCtrl; // m_IconCtrl | Token: 0x4038e56
        void* m_Panel; // m_Panel | Token: 0x4038e57
        void* m_IsAutoShow; // m_IsAutoShow | Token: 0x4038e58
        void* m_IsLeaderboardTitle; // m_IsLeaderboardTitle | Token: 0x4038e59
        void* m_Alive; // m_Alive | Token: 0x4038e5a
        void* m_PlayerID; // m_PlayerID | Token: 0x4038e5b
        void* m_IsLocalPlayer; // m_IsLocalPlayer | Token: 0x4038e5c
        void* m_IconOffset; // m_IconOffset | Token: 0x4038e5d
        void* m_LeaderBoardTitleCommonBtnLocalPos; // m_LeaderBoardTitleCommonBtnLocalPos | Token: 0x4038e5e
        void* m_TitleCommonLocalPos; // m_TitleCommonLocalPos | Token: 0x4038e5f
        void* m_IconScale; // m_IconScale | Token: 0x4038e60
        void* m_RegionFontSize; // m_RegionFontSize | Token: 0x4038e61
        void* m_RegionFontOverfolwMethod; // m_RegionFontOverfolwMethod | Token: 0x4038e62
        void* m_BooyahBountyTitle; // m_BooyahBountyTitle | Token: 0x4038e63
        void* SCROLL_SHOW_ITEM_TIME; // SCROLL_SHOW_ITEM_TIME | Token: 0x4038e64
        void* m_CurrentScrollShowIndex; // m_CurrentScrollShowIndex | Token: 0x4038e65
        void* m_DelayShowNextScrollItem; // m_DelayShowNextScrollItem | Token: 0x4038e66
        void* m_TitleCommonVFX; // m_TitleCommonVFX | Token: 0x4038e67
        void* m_TitleCommonVFXHodler; // m_TitleCommonVFXHodler | Token: 0x4038e68
        void* m_ScrollShowItemList; // m_ScrollShowItemList | Token: 0x4038e69
        void* m_HasAddLeadboardAndCommonTitleToScroll; // m_HasAddLeadboardAndCommonTitleToScroll | Token: 0x4038e6a

        // Methods (27)
        // Method: GetExchangeCurrencySubType() | Slot: 36562 | Token: 0x17615
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: Method_2() | Slot: 30230 | Token: 0x12545
        using fn_Method_2 = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5e65
        using fn_Method_3 = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: Method_4(void* priority) | Slot: 8434 | Token: 0x43cc17
        using fn_Method_4 = void* (*)(UIHudLeaderBoardTitleController* __this, void* priority);
        // Method: Method_5() | Slot: 24165 | Token: 0xffff
        using fn_Method_5 = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: t() | Slot: 52302 | Token: 0x81
        using fn_t = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: rm() | Slot: 65535 | Token: 0x6028ed8
        using fn_rm = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: SetCachedGeneralStartActivity() | Slot: 129 | Token: 0xffffffff
        using fn_SetCachedGeneralStartActivity = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: _WAIT() | Slot: 36570 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: Method_11() | Slot: 30234 | Token: 0x795f
        using fn_Method_11 = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x5e65
        using fn_Method_12 = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: cleControllerInfo() | Slot: 51275 | Token: 0x43cd0a
        using fn_cleControllerInfo = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: Method_14() | Slot: 24165 | Token: 0x4ffff
        using fn_Method_14 = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: GetThumbWorldPosition() | Slot: 52530 | Token: 0x81
        using fn_GetThumbWorldPosition = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: rm() | Slot: 65535 | Token: 0x6028ee0
        using fn_rm = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: ShouldShowBRInGameRankingTips() | Slot: 134 | Token: 0xffffffff
        using fn_ShouldShowBRInGameRankingTips = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36578 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: Method_20() | Slot: 30241 | Token: 0x69c4
        using fn_Method_20 = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: Method_21() | Slot: 0 | Token: 0x5e65
        using fn_Method_21 = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: erInfo() | Slot: 27076 | Token: 0x43ce00
        using fn_erInfo = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: Method_23() | Slot: 24165 | Token: 0x3ffff
        using fn_Method_23 = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: t() | Slot: 52786 | Token: 0x86
        using fn_t = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: rm() | Slot: 65535 | Token: 0x6028ee8
        using fn_rm = void* (*)(UIHudLeaderBoardTitleController* __this);
        // Method: GetIngameShowPeakSeasonUnlock() | Slot: 134 | Token: 0xffffffff
        using fn_GetIngameShowPeakSeasonUnlock = void* (*)(UIHudLeaderBoardTitleController* __this);
    };

    // TypeDefIndex: 29079 | Original: COW.HUD.UIHudLevelObjectHPController | Token: 0x2007198
    struct UIHudLevelObjectHPController : Il2Cpp::Object {
        // Fields (2)
        void* m_View; // m_View | Token: 0x4038e6b
        void* m_LvlObj; // m_LvlObj | Token: 0x4038e6c

        // Methods (17)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36586 | Token: 0x17633
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x12545
        using fn_Method_2 = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5e65
        using fn_Method_3 = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: Method_4(void* priority) | Slot: 9541 | Token: 0x43ceb4
        using fn_Method_4 = void* (*)(UIHudLevelObjectHPController* __this, void* priority);
        // Method: Method_5() | Slot: 24165 | Token: 0xffff
        using fn_Method_5 = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: bum() | Slot: 103 | Token: 0x86
        using fn_bum = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: rm() | Slot: 65535 | Token: 0x6028ef0
        using fn_rm = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: <TimeMangerChange>b__181_0() | Slot: 129 | Token: 0xffffffff
        using fn__TimeMangerChange_b__181_0 = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36594 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: Method_11() | Slot: 65535 | Token: 0x12545
        using fn_Method_11 = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x5e65
        using fn_Method_12 = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: eed(void* cam) | Slot: 9541 | Token: 0x3b649c
        using fn_eed = void* (*)(UIHudLevelObjectHPController* __this, void* cam);
        // Method: Method_14() | Slot: 24164 | Token: 0xffff
        using fn_Method_14 = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: bum() | Slot: 103 | Token: 0x1891
        using fn_bum = void* (*)(UIHudLevelObjectHPController* __this);
        // Method: orm() | Slot: 65535 | Token: 0x6028ef8
        using fn_orm = void* (*)(UIHudLevelObjectHPController* __this);
    };

    // TypeDefIndex: 29080 | Original: COW.HUD.UIHudLocalPlayerMarkPointController | Token: 0x2007199
    struct UIHudLocalPlayerMarkPointController : Il2Cpp::Object {
        // Fields (1)
        void* m_widget; // m_widget | Token: 0x4038e6d

        // Methods (8)
        // Method: <InitCSVData>b__123_0() | Slot: 131 | Token: 0xffffffff
        using fn__InitCSVData_b__123_0 = void* (*)(UIHudLocalPlayerMarkPointController* __this);
        // Method: _WAIT() | Slot: 36602 | Token: 0x17638
        using fn__WAIT = void* (*)(UIHudLocalPlayerMarkPointController* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UIHudLocalPlayerMarkPointController* __this);
        // Method: Method_3() | Slot: 30268 | Token: 0xa52f
        using fn_Method_3 = void* (*)(UIHudLocalPlayerMarkPointController* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5e64
        using fn_Method_4 = void* (*)(UIHudLocalPlayerMarkPointController* __this);
        // Method: rakeInput(void* instCount) | Slot: 9541 | Token: 0x43d847
        using fn_rakeInput = void* (*)(UIHudLocalPlayerMarkPointController* __this, void* instCount);
        // Method: Method_6() | Slot: 24167 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(UIHudLocalPlayerMarkPointController* __this);
        // Method: bum() | Slot: 42090 | Token: 0xc6
        using fn_bum = void* (*)(UIHudLocalPlayerMarkPointController* __this);
    };

    // TypeDefIndex: 29081 | Original: COW.HUD.UIHudLockedTargetController | Token: 0x200719a
    struct UIHudLockedTargetController : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x4038e6e

        // Methods (4)
        // Method: () | Slot: 6 | Token: 0x6028f00
        using fn_unnamed = void* (*)(UIHudLockedTargetController* __this);
        // Method: CanRateApp() | Slot: 129 | Token: 0xffffffff
        using fn_CanRateApp = void* (*)(UIHudLockedTargetController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36610 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudLockedTargetController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudLockedTargetController* __this);
    };

    // TypeDefIndex: 29082 | Original: COW.HUD.UIHudLockedTargetScaledController | Token: 0x200719b
    struct UIHudLockedTargetScaledController : Il2Cpp::Object {
        // Fields (9)
        void* m_View; // m_View | Token: 0x4038e6f
        void* MaxViewSize; // MaxViewSize | Token: 0x4038e70
        void* MinViewSize; // MinViewSize | Token: 0x4038e71
        void* m_SpriteTrans; // m_SpriteTrans | Token: 0x4038e72
        void* m_SpriteSize; // m_SpriteSize | Token: 0x4038e73
        void* m_ScreenSize; // m_ScreenSize | Token: 0x4038e74
        void* m_TweeningAlpha; // m_TweeningAlpha | Token: 0x4038e75
        void* m_TweenAlphaEndTime; // m_TweenAlphaEndTime | Token: 0x4038e76
        void* m_AudioRes; // m_AudioRes | Token: 0x4038e77

        // Methods (25)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5e67
        using fn_Method_1 = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: Input(void* priority) | Slot: 9541 | Token: 0x67
        using fn_Input = void* (*)(UIHudLockedTargetScaledController* __this, void* priority);
        // Method: Method_3() | Slot: 24167 | Token: 0xffff
        using fn_Method_3 = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: bum() | Slot: 103 | Token: 0x6
        using fn_bum = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: m(void* mode, void* rank) | Slot: 65535 | Token: 0x6028f08
        using fn_m = void* (*)(UIHudLockedTargetScaledController* __this, void* mode, void* rank);
        // Method: IsRequirementMeet() | Slot: 134 | Token: 0xffffffff
        using fn_IsRequirementMeet = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: _WAIT() | Slot: 36618 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0xc324
        using fn_Method_9 = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x5e6b
        using fn_Method_10 = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: WheelColliderInterface(void* strAPPSecret) | Slot: 9541 | Token: 0x43db8b
        using fn_WheelColliderInterface = void* (*)(UIHudLockedTargetScaledController* __this, void* strAPPSecret);
        // Method: Method_12() | Slot: 24174 | Token: 0x1ffff
        using fn_Method_12 = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: t() | Slot: 15781 | Token: 0x886
        using fn_t = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: Transform(void* rct) | Slot: 65535 | Token: 0x6028f10
        using fn_Transform = void* (*)(UIHudLockedTargetScaledController* __this, void* rct);
        // Method: get_RebateCardSubscriptionEnabled() | Slot: 2182 | Token: 0xffffffff
        using fn_get_RebateCardSubscriptionEnabled = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36626 | Token: 0x1764c
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: Method_18() | Slot: 30286 | Token: 0x69c4
        using fn_Method_18 = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x5e6e
        using fn_Method_19 = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: Method_20(void* priority) | Slot: 9541 | Token: 0x42aacd
        using fn_Method_20 = void* (*)(UIHudLockedTargetScaledController* __this, void* priority);
        // Method: Method_21() | Slot: 24174 | Token: 0x2ffff
        using fn_Method_21 = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: g() | Slot: 44637 | Token: 0x86
        using fn_g = void* (*)(UIHudLockedTargetScaledController* __this);
        // Method: Transform(void* rebateCardType) | Slot: 65535 | Token: 0x6028f18
        using fn_Transform = void* (*)(UIHudLockedTargetScaledController* __this, void* rebateCardType);
        // Method: SetExtraRewardActivitiesRead() | Slot: 134 | Token: 0xffffffff
        using fn_SetExtraRewardActivitiesRead = void* (*)(UIHudLockedTargetScaledController* __this);
    };

    // TypeDefIndex: 29083 | Original: COW.HUD.UIHudLockedWarningController | Token: 0x200719c
    struct UIHudLockedWarningController : Il2Cpp::Object {
        // Fields (5)
        void* m_View; // m_View | Token: 0x4038e78
        void* m_BindMissiles; // m_BindMissiles | Token: 0x4038e79
        void* SountRange; // SountRange | Token: 0x4038e7a
        void* m_WarningSounds; // m_WarningSounds | Token: 0x4038e7b
        void* m_LastPawn; // m_LastPawn | Token: 0x4038e7c

        // Methods (17)
        // Method: GetExchangeCurrencySubType() | Slot: 36634 | Token: 0x17653
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudLockedWarningController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudLockedWarningController* __this);
        // Method: Method_2() | Slot: 30293 | Token: 0x67a4
        using fn_Method_2 = void* (*)(UIHudLockedWarningController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5e6e
        using fn_Method_3 = void* (*)(UIHudLockedWarningController* __this);
        // Method: Method_4() | Slot: 51366 | Token: 0x42a94f
        using fn_Method_4 = void* (*)(UIHudLockedWarningController* __this);
        // Method: Method_5() | Slot: 24174 | Token: 0xffff
        using fn_Method_5 = void* (*)(UIHudLockedWarningController* __this);
        // Method: ilableCallback() | Slot: 42090 | Token: 0x886
        using fn_ilableCallback = void* (*)(UIHudLockedWarningController* __this);
        // Method: Transform() | Slot: 6 | Token: 0x6028f20
        using fn_Transform = void* (*)(UIHudLockedWarningController* __this);
        // Method: Logout() | Slot: 198 | Token: 0xffffffff
        using fn_Logout = void* (*)(UIHudLockedWarningController* __this);
        // Method: eCurrencySubType() | Slot: 36642 | Token: 0xffffffff
        using fn_eCurrencySubType = void* (*)(UIHudLockedWarningController* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UIHudLockedWarningController* __this);
        // Method: Method_11() | Slot: 65535 | Token: 0x12545
        using fn_Method_11 = void* (*)(UIHudLockedWarningController* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x5e6e
        using fn_Method_12 = void* (*)(UIHudLockedWarningController* __this);
        // Method: Method_13(void* priority) | Slot: 9541 | Token: 0x43dd2a
        using fn_Method_13 = void* (*)(UIHudLockedWarningController* __this, void* priority);
        // Method: Method_14() | Slot: 24174 | Token: 0xffff
        using fn_Method_14 = void* (*)(UIHudLockedWarningController* __this);
        // Method: bum() | Slot: 56669 | Token: 0x86
        using fn_bum = void* (*)(UIHudLockedWarningController* __this);
        // Method: Transform() | Slot: 65535 | Token: 0x6028f28
        using fn_Transform = void* (*)(UIHudLockedWarningController* __this);
    };

    // TypeDefIndex: 29093 | Original: COW.HUD.UIHudMinimapController | Token: 0x200719d
    struct UIHudMinimapController : Il2Cpp::Object {
        // Fields (82)
        void* VISIBILITY_STATE_IIV1v1; // VISIBILITY_STATE_IIV1v1 | Token: 0x4038e7d
        void* VISIBILITY_STATE_GB_GPGulag; // VISIBILITY_STATE_GB_GPGulag | Token: 0x4038e7e
        void* MAX_KILLER_SPRITE_NAME; // MAX_KILLER_SPRITE_NAME | Token: 0x4038e7f
        void* GAMEPLAY_MODIFIER_CAROUSEL_PROGRESS_ANIM; // GAMEPLAY_MODIFIER_CAROUSEL_PROGRESS_ANIM | Token: 0x4038e80
        void* m_View; // m_View | Token: 0x4038e81
        void* m_localPlayerSpriteCtrl; // m_localPlayerSpriteCtrl | Token: 0x4038e82
        void* m_trainingMaxKillPlayerSpriteCtrl; // m_trainingMaxKillPlayerSpriteCtrl | Token: 0x4038e83
        void* m_trainingMaxKiller; // m_trainingMaxKiller | Token: 0x4038e84
        void* m_Player; // m_Player | Token: 0x4038e85
        void* m_Center; // m_Center | Token: 0x4038e86
        void* OFFSET_SCALE_RATIO_X; // OFFSET_SCALE_RATIO_X | Token: 0x4038e87
        void* m_GrenadeTriggerEnemiesMap; // m_GrenadeTriggerEnemiesMap | Token: 0x4038e88
        void* m_GrenadeTriggerEnemiesCache; // m_GrenadeTriggerEnemiesCache | Token: 0x4038e89
        void* m_TeammateVehicleDict; // m_TeammateVehicleDict | Token: 0x4038e8a
        void* m_VehicleSoundTipDict; // m_VehicleSoundTipDict | Token: 0x4038e8b
        void* m_SoundTipObjectCache; // m_SoundTipObjectCache | Token: 0x4038e8c
        void* m_HelicopterViewDict; // m_HelicopterViewDict | Token: 0x4038e8d
        void* m_HelicopterViewCache; // m_HelicopterViewCache | Token: 0x4038e8e
        void* m_VehicleSoundTipsConfig; // m_VehicleSoundTipsConfig | Token: 0x4038e8f
        void* m_FiringEnemiesMap; // m_FiringEnemiesMap | Token: 0x4038e90
        void* m_FiringObjectsMap; // m_FiringObjectsMap | Token: 0x4038e91
        void* m_TopAutoDestroyFiringEnemyId; // m_TopAutoDestroyFiringEnemyId | Token: 0x4038e92
        void* m_TopAutoDestroyFiringObjectId; // m_TopAutoDestroyFiringObjectId | Token: 0x4038e93
        void* m_FiringEnemiesCache; // m_FiringEnemiesCache | Token: 0x4038e94
        void* m_CurrentSafeZone; // m_CurrentSafeZone | Token: 0x4038e95
        void* m_LoopSfx; // m_LoopSfx | Token: 0x4038e96
        void* m_MapContentVisible; // m_MapContentVisible | Token: 0x4038e97
        void* VISIBLE_MAPCONTENT_NORMAL; // VISIBLE_MAPCONTENT_NORMAL | Token: 0x4038e98
        void* VISIBLE_MAPCONTENT_PARTYMODE; // VISIBLE_MAPCONTENT_PARTYMODE | Token: 0x4038e99
        void* VISIBLE_MAPCONTENT_NOSIGNAL; // VISIBLE_MAPCONTENT_NOSIGNAL | Token: 0x4038e9a
        void* VISIBLE_MAPCONTENT_KILLCAM; // VISIBLE_MAPCONTENT_KILLCAM | Token: 0x4038e9b
        void* VISIBLE_MAPCONTENT_FakeMiniMap; // VISIBLE_MAPCONTENT_FakeMiniMap | Token: 0x4038e9c
        void* m_ScaleDest; // m_ScaleDest | Token: 0x4038e9d
        void* m_ScaleDefault; // m_ScaleDefault | Token: 0x4038e9e
        void* m_ScaleFixedForExtraMiniMap; // m_ScaleFixedForExtraMiniMap | Token: 0x4038e9f
        void* m_PanelWidthToWorldDistance; // m_PanelWidthToWorldDistance | Token: 0x4038ea0
        void* m_FirstScale; // m_FirstScale | Token: 0x4038ea1
        void* m_CurrFirstScaleStableTime; // m_CurrFirstScaleStableTime | Token: 0x4038ea2
        void* m_CurrFirstScaleTime; // m_CurrFirstScaleTime | Token: 0x4038ea3
        void* m_FirstScaleStartPos; // m_FirstScaleStartPos | Token: 0x4038ea4
        void* m_FirstScalePhase; // m_FirstScalePhase | Token: 0x4038ea5
        void* m_IsPersonalUAVEquipped; // m_IsPersonalUAVEquipped | Token: 0x4038ea6
        void* m_CanDynamicScale; // m_CanDynamicScale | Token: 0x4038ea7
        void* m_bIsHideCloseBigMapTips; // m_bIsHideCloseBigMapTips | Token: 0x4038ea8
        void* m_InfoBoxNotifyVFXDelayCall; // m_InfoBoxNotifyVFXDelayCall | Token: 0x4038ea9
        void* metropolis; // metropolis | Token: 0x4038eaa
        void* m_GameplayModifierCarouselVfxHolder; // m_GameplayModifierCarouselVfxHolder | Token: 0x4038eab
        void* m_GameplayModifierCarouselProgressAnim; // m_GameplayModifierCarouselProgressAnim | Token: 0x4038eac
        void* m_MiniMapScale; // m_MiniMapScale | Token: 0x4038ead
        void* m_CacheData; // m_CacheData | Token: 0x4038eae
        void* m_IsFirstRandomMove; // m_IsFirstRandomMove | Token: 0x4038eaf
        void* m_MissionInfoController; // m_MissionInfoController | Token: 0x4038eb0
        void* m_MiniMapBottomInfoController; // m_MiniMapBottomInfoController | Token: 0x4038eb1
        void* m_CachedCatapultOffset; // m_CachedCatapultOffset | Token: 0x4038eb2
        void* m_WasInCatapult; // m_WasInCatapult | Token: 0x4038eb3
        void* m_TeamScanStartTime; // m_TeamScanStartTime | Token: 0x4038eb4
        void* m_TeamScanNextStartTime; // m_TeamScanNextStartTime | Token: 0x4038eb5
        void* m_MapContentShowChanged; // m_MapContentShowChanged | Token: 0x4038eb6
        void* _DisplayedGameplayModifierCarouselState_k__BackingField; // <DisplayedGameplayModifierCarouselState>k__BackingField | Token: 0x4038eb7
        void* MinimapMode; // MinimapMode | Token: 0x4038eb8
        void* m_IsPlayerArrowScoutDriving; // m_IsPlayerArrowScoutDriving | Token: 0x4038eb9
        void* DefaultPlayerArrowName; // DefaultPlayerArrowName | Token: 0x4038eba
        void* DefaultPlayerArrowSize; // DefaultPlayerArrowSize | Token: 0x4038ebb
        void* m_EighthTrainTip; // m_EighthTrainTip | Token: 0x4038ebc
        void* m_TweenProperties; // m_TweenProperties | Token: 0x4038ebd
        void* m_ScanData; // m_ScanData | Token: 0x4038ebe
        void* m_HCTimer; // m_HCTimer | Token: 0x4038ebf
        void* m_BeMarkedEffectDelayCall; // m_BeMarkedEffectDelayCall | Token: 0x4038ec0
        void* m_PainEffectDelayCall; // m_PainEffectDelayCall | Token: 0x4038ec1
        void* m_BTUnderwaterMapEffectHolder; // m_BTUnderwaterMapEffectHolder | Token: 0x4038ec2
        void* m_TeamScanDelayCallID; // m_TeamScanDelayCallID | Token: 0x4038ec3
        void* m_AutoScrollDelayCallID; // m_AutoScrollDelayCallID | Token: 0x4038ec4
        void* m_TopRightIcons; // m_TopRightIcons | Token: 0x4038ec5
        void* m_TopRightIconsIndex; // m_TopRightIconsIndex | Token: 0x4038ec6
        void* m_MapScale; // m_MapScale | Token: 0x4038ec7
        void* m_MapIconScale; // m_MapIconScale | Token: 0x4038ec8
        void* m_CurFakeMiniMapTextureResID; // m_CurFakeMiniMapTextureResID | Token: 0x4038ec9
        void* m_IIVTempleScanRangeObject; // m_IIVTempleScanRangeObject | Token: 0x4038eca
        void* m_IIV1v1RangeObject; // m_IIV1v1RangeObject | Token: 0x4038ecb
        void* m_IIV1v1Range; // m_IIV1v1Range | Token: 0x4038ecc
        void* m_FullEdgeUIFXHolder; // m_FullEdgeUIFXHolder | Token: 0x4038ecd
        void* m_ScaleDefaultForHomerUAV; // m_ScaleDefaultForHomerUAV | Token: 0x4038ece

        // Methods (171)
        // Method: UpdateRebateCardPriceStatus() | Slot: 129 | Token: 0xffffffff
        using fn_UpdateRebateCardPriceStatus = void* (*)(UIHudMinimapController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36650 | Token: 0x17658
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudMinimapController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudMinimapController* __this);
        // Method: Method_3() | Slot: 30297 | Token: 0x12545
        using fn_Method_3 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5e6e
        using fn_Method_4 = void* (*)(UIHudMinimapController* __this);
        // Method: face(void* priority) | Slot: 9541 | Token: 0x2826f0
        using fn_face = void* (*)(UIHudMinimapController* __this, void* priority);
        // Method: Method_6() | Slot: 24174 | Token: 0xffff
        using fn_Method_6 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 56894 | Token: 0x81
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: Transform() | Slot: 65535 | Token: 0x6028f30
        using fn_Transform = void* (*)(UIHudMinimapController* __this);
        // Method: TryClaimExtraReward() | Slot: 129 | Token: 0xffffffff
        using fn_TryClaimExtraReward = void* (*)(UIHudMinimapController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36658 | Token: 0x1765c
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudMinimapController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudMinimapController* __this);
        // Method: Method_12() | Slot: 30302 | Token: 0x12545
        using fn_Method_12 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x5e6e
        using fn_Method_13 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_14(void* priority) | Slot: 9541 | Token: 0x43deaf
        using fn_Method_14 = void* (*)(UIHudMinimapController* __this, void* priority);
        // Method: Method_15() | Slot: 24174 | Token: 0xffff
        using fn_Method_15 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 57057 | Token: 0x81
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: Transform() | Slot: 65535 | Token: 0x6028f38
        using fn_Transform = void* (*)(UIHudMinimapController* __this);
        // Method: PurchaseRebateCard() | Slot: 134 | Token: 0xffffffff
        using fn_PurchaseRebateCard = void* (*)(UIHudMinimapController* __this);
        // Method: _WAIT() | Slot: 36666 | Token: 0x17661
        using fn__WAIT = void* (*)(UIHudMinimapController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudMinimapController* __this);
        // Method: Method_21() | Slot: 30309 | Token: 0x12545
        using fn_Method_21 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_22() | Slot: 0 | Token: 0x5e6e
        using fn_Method_22 = void* (*)(UIHudMinimapController* __this);
        // Method: ControllerInterface(void* priority) | Slot: 9541 | Token: 0x3ac9e8
        using fn_ControllerInterface = void* (*)(UIHudMinimapController* __this, void* priority);
        // Method: Method_24() | Slot: 24174 | Token: 0x1ffff
        using fn_Method_24 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 57148 | Token: 0x1886
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: Transform(void* product_identifier) | Slot: 65535 | Token: 0x6028f40
        using fn_Transform = void* (*)(UIHudMinimapController* __this, void* product_identifier);
        // Method: <>iFixBaseProxy_Logout() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Logout = void* (*)(UIHudMinimapController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36674 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudMinimapController* __this);
        // Method: ly-CSharp() | Slot: 65535 | Token: 0x8000000
        using fn_ly_CSharp = void* (*)(UIHudMinimapController* __this);
        // Method: Method_30() | Slot: 65535 | Token: 0x1691e
        using fn_Method_30 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_31() | Slot: 0 | Token: 0x5e6d
        using fn_Method_31 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_32(void* isDynamic) | Slot: 9541 | Token: 0x3acea8
        using fn_Method_32 = void* (*)(UIHudMinimapController* __this, void* isDynamic);
        // Method: Method_33() | Slot: 24173 | Token: 0x30011
        using fn_Method_33 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 53003 | Token: 0xc6
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: tTransform(void* reason, void* result, void* productIdentifier, void* rebateId, void* quantity) | Slot: 20 | Token: 0x6028f48
        using fn_tTransform = void* (*)(UIHudMinimapController* __this, void* reason, void* result, void* productIdentifier, void* rebateId, void* quantity);
        // Method: OnRebateOptionRedeemed() | Slot: 198 | Token: 0xffffffff
        using fn_OnRebateOptionRedeemed = void* (*)(UIHudMinimapController* __this);
        // Method: ELEASE_OK() | Slot: 36682 | Token: 0xffffffff
        using fn_ELEASE_OK = void* (*)(UIHudMinimapController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudMinimapController* __this);
        // Method: Method_39() | Slot: 30331 | Token: 0x12545
        using fn_Method_39 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_40() | Slot: 0 | Token: 0x5e6d
        using fn_Method_40 = void* (*)(UIHudMinimapController* __this);
        // Method: cleCaculateTool() | Slot: 27076 | Token: 0x43e12d
        using fn_cleCaculateTool = void* (*)(UIHudMinimapController* __this);
        // Method: Method_42() | Slot: 24175 | Token: 0x3ffff
        using fn_Method_42 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: ansform(void* isAllMode, void* openMapBonus, void* gameMode, void* matchMode, void* groupMode, void* specialModeId, void* minRank, void* tags) | Slot: 65535 | Token: 0x6028f50
        using fn_ansform = void* (*)(UIHudMinimapController* __this, void* isAllMode, void* openMapBonus, void* gameMode, void* matchMode, void* groupMode, void* specialModeId, void* minRank, void* tags);
        // Method: GetModelType() | Slot: 198 | Token: 0xffffffff
        using fn_GetModelType = void* (*)(UIHudMinimapController* __this);
        // Method: ly-CSharp() | Slot: 36690 | Token: 0xffffffff
        using fn_ly_CSharp = void* (*)(UIHudMinimapController* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudMinimapController* __this);
        // Method: Method_48() | Slot: 30358 | Token: 0x12545
        using fn_Method_48 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_49() | Slot: 0 | Token: 0x5e76
        using fn_Method_49 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_50() | Slot: 53407 | Token: 0x43e262
        using fn_Method_50 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_51() | Slot: 24182 | Token: 0xffff
        using fn_Method_51 = void* (*)(UIHudMinimapController* __this);
        // Method: _0() | Slot: 58003 | Token: 0x886
        using fn__0 = void* (*)(UIHudMinimapController* __this);
        // Method: m() | Slot: 65535 | Token: 0x6028f58
        using fn_m = void* (*)(UIHudMinimapController* __this);
        // Method: get_MaxRecruitTagNum() | Slot: 2182 | Token: 0xffffffff
        using fn_get_MaxRecruitTagNum = void* (*)(UIHudMinimapController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36698 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudMinimapController* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudMinimapController* __this);
        // Method: Method_57() | Slot: 65535 | Token: 0x69c4
        using fn_Method_57 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_58() | Slot: 0 | Token: 0x5e76
        using fn_Method_58 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_59(void* pos) | Slot: 9541 | Token: 0x9bc2f
        using fn_Method_59 = void* (*)(UIHudMinimapController* __this, void* pos);
        // Method: Method_60() | Slot: 24182 | Token: 0x10009
        using fn_Method_60 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 58213 | Token: 0x86
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: m(void* minRank, void* maxRank, void* openMapBonus, void* groupTags, void* specialModeEventId, void* sendWorld, void* sendGuild, void* sendNewbie) | Slot: 65535 | Token: 0x6028f60
        using fn_m = void* (*)(UIHudMinimapController* __this, void* minRank, void* maxRank, void* openMapBonus, void* groupTags, void* specialModeEventId, void* sendWorld, void* sendGuild, void* sendNewbie);
        // Method: CanShowNoticeChangeTeam() | Slot: 134 | Token: 0xffffffff
        using fn_CanShowNoticeChangeTeam = void* (*)(UIHudMinimapController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36706 | Token: 0x176a9
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudMinimapController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudMinimapController* __this);
        // Method: Method_66() | Slot: 65535 | Token: 0x12545
        using fn_Method_66 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_67() | Slot: 0 | Token: 0x5e76
        using fn_Method_67 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_68() | Slot: 27076 | Token: 0x43e426
        using fn_Method_68 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_69() | Slot: 24182 | Token: 0xffff
        using fn_Method_69 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 58476 | Token: 0x86
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: m() | Slot: 65535 | Token: 0x6028f68
        using fn_m = void* (*)(UIHudMinimapController* __this);
        // Method: StartNoticeChangeTeamQuickJoinCD() | Slot: 134 | Token: 0xffffffff
        using fn_StartNoticeChangeTeamQuickJoinCD = void* (*)(UIHudMinimapController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36714 | Token: 0x176ac
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudMinimapController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudMinimapController* __this);
        // Method: Method_75() | Slot: 30381 | Token: 0x69c4
        using fn_Method_75 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_76() | Slot: 0 | Token: 0x5e76
        using fn_Method_76 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_77() | Slot: 27076 | Token: 0x43e53b
        using fn_Method_77 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_78() | Slot: 24182 | Token: 0x2ffff
        using fn_Method_78 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 58733 | Token: 0x81
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: m() | Slot: 65535 | Token: 0x6028f70
        using fn_m = void* (*)(UIHudMinimapController* __this);
        // Method: ProcessAccountRecruitBannedNtf() | Slot: 134 | Token: 0xffffffff
        using fn_ProcessAccountRecruitBannedNtf = void* (*)(UIHudMinimapController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36722 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudMinimapController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudMinimapController* __this);
        // Method: Method_84() | Slot: 65535 | Token: 0x12545
        using fn_Method_84 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_85() | Slot: 0 | Token: 0x5e76
        using fn_Method_85 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_86(void* priority) | Slot: 9541 | Token: 0x43e626
        using fn_Method_86 = void* (*)(UIHudMinimapController* __this, void* priority);
        // Method: Method_87() | Slot: 24182 | Token: 0x2ffff
        using fn_Method_87 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 58984 | Token: 0x86
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: m() | Slot: 65535 | Token: 0x6028f78
        using fn_m = void* (*)(UIHudMinimapController* __this);
        // Method: GetRecruitTeamLabelDict() | Slot: 134 | Token: 0xffffffff
        using fn_GetRecruitTeamLabelDict = void* (*)(UIHudMinimapController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36730 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudMinimapController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudMinimapController* __this);
        // Method: Method_93() | Slot: 30392 | Token: 0x12545
        using fn_Method_93 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_94() | Slot: 0 | Token: 0x5e76
        using fn_Method_94 = void* (*)(UIHudMinimapController* __this);
        // Method: foBase(void* priority) | Slot: 9541 | Token: 0x43e734
        using fn_foBase = void* (*)(UIHudMinimapController* __this, void* priority);
        // Method: Method_96() | Slot: 24182 | Token: 0xaffff
        using fn_Method_96 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 59225 | Token: 0x86
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: m(void* groupId) | Slot: 65535 | Token: 0x6028f80
        using fn_m = void* (*)(UIHudMinimapController* __this, void* groupId);
        // Method: GetRecruitPlayerBasicInfo() | Slot: 134 | Token: 0xffffffff
        using fn_GetRecruitPlayerBasicInfo = void* (*)(UIHudMinimapController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36738 | Token: 0x176c6
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudMinimapController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudMinimapController* __this);
        // Method: Method_102() | Slot: 30430 | Token: 0x59d2
        using fn_Method_102 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_103() | Slot: 0 | Token: 0x5e76
        using fn_Method_103 = void* (*)(UIHudMinimapController* __this);
        // Method: inResID>k__BackingField(void* priority) | Slot: 9541 | Token: 0x248a25
        using fn_inResID_k__BackingField = void* (*)(UIHudMinimapController* __this, void* priority);
        // Method: Method_105() | Slot: 24182 | Token: 0x1ffff
        using fn_Method_105 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 59406 | Token: 0x86
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: m() | Slot: 65535 | Token: 0x6028f88
        using fn_m = void* (*)(UIHudMinimapController* __this);
        // Method: set_RecruitRoomInfo() | Slot: 2182 | Token: 0xffffffff
        using fn_set_RecruitRoomInfo = void* (*)(UIHudMinimapController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36746 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudMinimapController* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudMinimapController* __this);
        // Method: Method_111() | Slot: 65535 | Token: 0x3ae9
        using fn_Method_111 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_112() | Slot: 0 | Token: 0x5e76
        using fn_Method_112 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_113(void* pos) | Slot: 9541 | Token: 0x43e8a0
        using fn_Method_113 = void* (*)(UIHudMinimapController* __this, void* pos);
        // Method: Method_114() | Slot: 24182 | Token: 0x1ffff
        using fn_Method_114 = void* (*)(UIHudMinimapController* __this);
        // Method: t() | Slot: 59609 | Token: 0x886
        using fn_t = void* (*)(UIHudMinimapController* __this);
        // Method: m(void* value) | Slot: 65535 | Token: 0x6028f90
        using fn_m = void* (*)(UIHudMinimapController* __this, void* value);
        // Method: RequestRoomRecruit() | Slot: 134 | Token: 0xffffffff
        using fn_RequestRoomRecruit = void* (*)(UIHudMinimapController* __this);
        // Method: BOKO() | Slot: 36754 | Token: 0x176e9
        using fn_BOKO = void* (*)(UIHudMinimapController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudMinimapController* __this);
        // Method: Method_120() | Slot: 30448 | Token: 0x12545
        using fn_Method_120 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_121() | Slot: 0 | Token: 0x5e76
        using fn_Method_121 = void* (*)(UIHudMinimapController* __this);
        // Method: ield(void* priority) | Slot: 9541 | Token: 0x43e972
        using fn_ield = void* (*)(UIHudMinimapController* __this, void* priority);
        // Method: Method_123() | Slot: 24182 | Token: 0xffff
        using fn_Method_123 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 103 | Token: 0x86
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: m() | Slot: 65535 | Token: 0x6028f98
        using fn_m = void* (*)(UIHudMinimapController* __this);
        // Method: <>iFixBaseProxy_Logout() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Logout = void* (*)(UIHudMinimapController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36762 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudMinimapController* __this);
        // Method: () | Slot: 65535 | Token: 0x8000000
        using fn_unnamed = void* (*)(UIHudMinimapController* __this);
        // Method: Method_129() | Slot: 30456 | Token: 0xa52f
        using fn_Method_129 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_130() | Slot: 0 | Token: 0x5e72
        using fn_Method_130 = void* (*)(UIHudMinimapController* __this);
        // Method: lAni(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_lAni = void* (*)(UIHudMinimapController* __this, void* instCount);
        // Method: Method_132() | Slot: 24179 | Token: 0xffff
        using fn_Method_132 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 61340 | Token: 0x83
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: form() | Slot: 65535 | Token: 0x6028fa0
        using fn_form = void* (*)(UIHudMinimapController* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UIHudMinimapController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36770 | Token: 0x176fb
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudMinimapController* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UIHudMinimapController* __this);
        // Method: Method_138() | Slot: 65535 | Token: 0x12545
        using fn_Method_138 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_139() | Slot: 0 | Token: 0x5e79
        using fn_Method_139 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_140(void* pos) | Slot: 9541 | Token: 0x43f0dd
        using fn_Method_140 = void* (*)(UIHudMinimapController* __this, void* pos);
        // Method: Method_141() | Slot: 24185 | Token: 0x1ffff
        using fn_Method_141 = void* (*)(UIHudMinimapController* __this);
        // Method: t() | Slot: 60954 | Token: 0x886
        using fn_t = void* (*)(UIHudMinimapController* __this);
        // Method: sEnable(void* value) | Slot: 65535 | Token: 0x6028fa8
        using fn_sEnable = void* (*)(UIHudMinimapController* __this, void* value);
        // Method: get_IntimcyState() | Slot: 2182 | Token: 0xffffffff
        using fn_get_IntimcyState = void* (*)(UIHudMinimapController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36778 | Token: 0x176fe
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudMinimapController* __this);
        // Method: BuffFactor() | Slot: 65535 | Token: 0x8000000
        using fn_BuffFactor = void* (*)(UIHudMinimapController* __this);
        // Method: Method_147() | Slot: 30463 | Token: 0x12545
        using fn_Method_147 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_148() | Slot: 0 | Token: 0x5e79
        using fn_Method_148 = void* (*)(UIHudMinimapController* __this);
        // Method: irstAniSpeed(void* cutscene) | Slot: 9541 | Token: 0x43f15f
        using fn_irstAniSpeed = void* (*)(UIHudMinimapController* __this, void* cutscene);
        // Method: Method_150() | Slot: 24185 | Token: 0x1ffff
        using fn_Method_150 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 61825 | Token: 0xc4
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: sEnable(void* validTime) | Slot: 65535 | Token: 0x6028fb0
        using fn_sEnable = void* (*)(UIHudMinimapController* __this, void* validTime);
        // Method: InitRelationshipState() | Slot: 129 | Token: 0xffffffff
        using fn_InitRelationshipState = void* (*)(UIHudMinimapController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36786 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudMinimapController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudMinimapController* __this);
        // Method: Method_156() | Slot: 65535 | Token: 0x12545
        using fn_Method_156 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_157() | Slot: 0 | Token: 0x5e78
        using fn_Method_157 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_158() | Slot: 38018 | Token: 0x43f240
        using fn_Method_158 = void* (*)(UIHudMinimapController* __this);
        // Method: Method_159() | Slot: 24187 | Token: 0xffff
        using fn_Method_159 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 48567 | Token: 0x881
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: nable() | Slot: 1 | Token: 0x6028fb8
        using fn_nable = void* (*)(UIHudMinimapController* __this);
        // Method: SetMessageCountDown() | Slot: 129 | Token: 0xffffffff
        using fn_SetMessageCountDown = void* (*)(UIHudMinimapController* __this);
        // Method: _WAIT() | Slot: 36794 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UIHudMinimapController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudMinimapController* __this);
        // Method: Method_165(void* spriteID) | Slot: 30471 | Token: 0xc9c4
        using fn_Method_165 = void* (*)(UIHudMinimapController* __this, void* spriteID);
        // Method: Method_166() | Slot: 0 | Token: 0x5e7b
        using fn_Method_166 = void* (*)(UIHudMinimapController* __this);
        // Method: peed(void* cutscene) | Slot: 9541 | Token: 0x67
        using fn_peed = void* (*)(UIHudMinimapController* __this, void* cutscene);
        // Method: Method_168() | Slot: 24186 | Token: 0xffff
        using fn_Method_168 = void* (*)(UIHudMinimapController* __this);
        // Method: bum() | Slot: 62188 | Token: 0x1886
        using fn_bum = void* (*)(UIHudMinimapController* __this);
        // Method: Enable() | Slot: 65535 | Token: 0x6028fc0
        using fn_Enable = void* (*)(UIHudMinimapController* __this);
    };

    // TypeDefIndex: 29094 | Original: COW.HUD.IHudNameController | Token: 0x20071a7
    struct IHudNameController : Il2Cpp::Object {

        // Methods (2)
        // Method: Method_0() | Slot: 0 | Token: 0x5e84
        using fn_Method_0 = void* (*)(IHudNameController* __this);
        // Method: ed(void* priority) | Slot: 13798 | Token: 0x43f564
        using fn_ed = void* (*)(IHudNameController* __this, void* priority);
    };

    // TypeDefIndex: 29099 | Original: COW.HUD.UIHudNameController | Token: 0x20071a8
    struct UIHudNameController : Il2Cpp::Object {
        // Fields (66)
        void* VISIBILITY_NAMELABEL_NORMAL; // VISIBILITY_NAMELABEL_NORMAL | Token: 0x4038ee4
        void* VISIBILITY_NAMELABEL_SETTING; // VISIBILITY_NAMELABEL_SETTING | Token: 0x4038ee5
        void* HELP_PURCHASE_MARK_TIME; // HELP_PURCHASE_MARK_TIME | Token: 0x4038ee6
        void* EFFECF_GLOW_POS; // EFFECF_GLOW_POS | Token: 0x4038ee7
        void* OVERLOOK_Y_OFFSET; // OVERLOOK_Y_OFFSET | Token: 0x4038ee8
        void* TEAM_RALLY_ANIM_ENLARGE; // TEAM_RALLY_ANIM_ENLARGE | Token: 0x4038ee9
        void* TEAM_RALLY_ANIM_ZOOMOUT; // TEAM_RALLY_ANIM_ZOOMOUT | Token: 0x4038eea
        void* m_View; // m_View | Token: 0x4038eeb
        void* CachedTransform; // CachedTransform | Token: 0x4038eec
        void* m_BindPlayer; // m_BindPlayer | Token: 0x4038eed
        void* m_NeedShowName; // m_NeedShowName | Token: 0x4038eee
        void* m_FollowCamera; // m_FollowCamera | Token: 0x4038eef
        void* m_FollowCameraComponent; // m_FollowCameraComponent | Token: 0x4038ef0
        void* m_UICamera; // m_UICamera | Token: 0x4038ef1
        void* m_IsHit; // m_IsHit | Token: 0x4038ef2
        void* m_CachedDamageOffset; // m_CachedDamageOffset | Token: 0x4038ef3
        void* m_Distance; // m_Distance | Token: 0x4038ef4
        void* m_PrevDistance; // m_PrevDistance | Token: 0x4038ef5
        void* m_LastDistancePrintLength; // m_LastDistancePrintLength | Token: 0x4038ef6
        void* m_triggerController; // m_triggerController | Token: 0x4038ef7
        void* m_LeaderBoardTitleCtrl; // m_LeaderBoardTitleCtrl | Token: 0x4038ef8
        void* m_IconOffset; // m_IconOffset | Token: 0x4038ef9
        void* m_FirstShowLeaderBoardTitle; // m_FirstShowLeaderBoardTitle | Token: 0x4038efa
        void* viewPortBoundary; // viewPortBoundary | Token: 0x4038efb
        void* m_ContainerActive; // m_ContainerActive | Token: 0x4038efc
        void* m_ShowElectricGirlSkillFirst; // m_ShowElectricGirlSkillFirst | Token: 0x4038efd
        void* m_IsFriend; // m_IsFriend | Token: 0x4038efe
        void* m_IsShowFaction; // m_IsShowFaction | Token: 0x4038eff
        void* PumpkinIcon; // PumpkinIcon | Token: 0x4038f00
        void* BombIcon; // BombIcon | Token: 0x4038f01
        void* healHintEffectShow; // healHintEffectShow | Token: 0x4038f02
        void* m_NameClassicEnable; // m_NameClassicEnable | Token: 0x4038f03
        void* m_ShowTeammateName; // m_ShowTeammateName | Token: 0x4038f04
        void* m_DelayCall; // m_DelayCall | Token: 0x4038f05
        void* m_TeamRallyDelayCallID; // m_TeamRallyDelayCallID | Token: 0x4038f06
        void* m_TeamRallyZoomOutDelayCallID; // m_TeamRallyZoomOutDelayCallID | Token: 0x4038f07
        void* m_ObserverMode; // m_ObserverMode | Token: 0x4038f08
        void* m_LastHPAmount; // m_LastHPAmount | Token: 0x4038f09
        void* m_LastNamePos; // m_LastNamePos | Token: 0x4038f0a
        void* m_ArrowDirection; // m_ArrowDirection | Token: 0x4038f0b
        void* m_OnTeammateDistanceActiveChanged; // m_OnTeammateDistanceActiveChanged | Token: 0x4038f0c
        void* m_ShowLeaderboardTitleDelayCallID; // m_ShowLeaderboardTitleDelayCallID | Token: 0x4038f0d
        void* m_ModelGroup; // m_ModelGroup | Token: 0x4038f0e
        void* m_NameLabelBit; // m_NameLabelBit | Token: 0x4038f0f
        void* m_NameLabelFirstSet; // m_NameLabelFirstSet | Token: 0x4038f10
        void* m_LeftAnchorForMark; // m_LeftAnchorForMark | Token: 0x4038f11
        void* m_RightAnchorForMark; // m_RightAnchorForMark | Token: 0x4038f12
        void* m_BottomAnchorForMark; // m_BottomAnchorForMark | Token: 0x4038f13
        void* m_TopAnchorForMark; // m_TopAnchorForMark | Token: 0x4038f14
        void* m_LeftAnchorForHideNameMark; // m_LeftAnchorForHideNameMark | Token: 0x4038f15
        void* m_RightAnchorForHideNameMark; // m_RightAnchorForHideNameMark | Token: 0x4038f16
        void* m_BottomAnchorForHideNameMark; // m_BottomAnchorForHideNameMark | Token: 0x4038f17
        void* m_TopAnchorForHideNameMark; // m_TopAnchorForHideNameMark | Token: 0x4038f18
        void* m_LobbyGroupIndex; // m_LobbyGroupIndex | Token: 0x4038f19
        void* m_PrivilegeIconController; // m_PrivilegeIconController | Token: 0x4038f1a
        void* ARROW_ICON_HALF_SIZE; // ARROW_ICON_HALF_SIZE | Token: 0x4038f1b
        void* m_CurPumpkinNum; // m_CurPumpkinNum | Token: 0x4038f1c
        void* m_IdentityCtrl; // m_IdentityCtrl | Token: 0x4038f1d
        void* m_ElectricGirlCtrl; // m_ElectricGirlCtrl | Token: 0x4038f1e
        void* m_AttachedVFXUniqueID; // m_AttachedVFXUniqueID | Token: 0x4038f1f
        void* m_LastPhase; // m_LastPhase | Token: 0x4038f20
        void* m_DelayCallHideMVPVFXID; // m_DelayCallHideMVPVFXID | Token: 0x4038f21
        void* m_DelayCallHideMVPVFXTime; // m_DelayCallHideMVPVFXTime | Token: 0x4038f22
        void* m_MVPContainerPosOffset; // m_MVPContainerPosOffset | Token: 0x4038f23
        void* m_PrivilegeContainerPosOffset; // m_PrivilegeContainerPosOffset | Token: 0x4038f24
        void* m_RemoveCor; // m_RemoveCor | Token: 0x4038f25

        // Methods (116)
        // Method: Method_0() | Slot: 24196 | Token: 0x1ffff
        using fn_Method_0 = void* (*)(UIHudNameController* __this);
        // Method: asuryModel() | Slot: 62875 | Token: 0x86
        using fn_asuryModel = void* (*)(UIHudNameController* __this);
        // Method: erMask(void* relationType) | Slot: 65535 | Token: 0x6028fd8
        using fn_erMask = void* (*)(UIHudNameController* __this, void* relationType);
        // Method: GetRelationshipRank() | Slot: 134 | Token: 0xffffffff
        using fn_GetRelationshipRank = void* (*)(UIHudNameController* __this);
        // Method: _WAIT() | Slot: 36826 | Token: 0x17720
        using fn__WAIT = void* (*)(UIHudNameController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameController* __this);
        // Method: Method_6() | Slot: 30498 | Token: 0x69c4
        using fn_Method_6 = void* (*)(UIHudNameController* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x5e84
        using fn_Method_7 = void* (*)(UIHudNameController* __this);
        // Method: EffectRes(void* priority) | Slot: 9541 | Token: 0x3fbf12
        using fn_EffectRes = void* (*)(UIHudNameController* __this, void* priority);
        // Method: Method_9() | Slot: 24196 | Token: 0x1ffff
        using fn_Method_9 = void* (*)(UIHudNameController* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 47323 | Token: 0xc6
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(UIHudNameController* __this);
        // Method: erMask(void* data) | Slot: 8 | Token: 0x6028fe0
        using fn_erMask = void* (*)(UIHudNameController* __this, void* data);
        // Method: Logout() | Slot: 198 | Token: 0xffffffff
        using fn_Logout = void* (*)(UIHudNameController* __this);
        // Method: eCurrencySubType() | Slot: 36834 | Token: 0x17729
        using fn_eCurrencySubType = void* (*)(UIHudNameController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameController* __this);
        // Method: Method_15() | Slot: 30509 | Token: 0x12545
        using fn_Method_15 = void* (*)(UIHudNameController* __this);
        // Method: Method_16() | Slot: 0 | Token: 0x5e84
        using fn_Method_16 = void* (*)(UIHudNameController* __this);
        // Method: BoostStartEffectRes(void* priority) | Slot: 9541 | Token: 0x43f6b2
        using fn_BoostStartEffectRes = void* (*)(UIHudNameController* __this, void* priority);
        // Method: Method_18() | Slot: 24196 | Token: 0x2ffff
        using fn_Method_18 = void* (*)(UIHudNameController* __this);
        // Method: bum() | Slot: 33261 | Token: 0x86
        using fn_bum = void* (*)(UIHudNameController* __this);
        // Method: erMask(void* isFirstLogin, void* force, void* loadingType, void* channel, void* sendImmediately) | Slot: 65535 | Token: 0x6028fe8
        using fn_erMask = void* (*)(UIHudNameController* __this, void* isFirstLogin, void* force, void* loadingType, void* channel, void* sendImmediately);
        // Method: RequestConfirmCreateSpecialRelation() | Slot: 134 | Token: 0xffffffff
        using fn_RequestConfirmCreateSpecialRelation = void* (*)(UIHudNameController* __this);
        // Method: _WAIT() | Slot: 36842 | Token: 0x1773a
        using fn__WAIT = void* (*)(UIHudNameController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameController* __this);
        // Method: Method_24() | Slot: 65535 | Token: 0x69c4
        using fn_Method_24 = void* (*)(UIHudNameController* __this);
        // Method: Method_25() | Slot: 0 | Token: 0x5e84
        using fn_Method_25 = void* (*)(UIHudNameController* __this);
        // Method: tRes() | Slot: 27076 | Token: 0x3ed2e2
        using fn_tRes = void* (*)(UIHudNameController* __this);
        // Method: Method_27() | Slot: 24196 | Token: 0xffff
        using fn_Method_27 = void* (*)(UIHudNameController* __this);
        // Method: t() | Slot: 63378 | Token: 0x86
        using fn_t = void* (*)(UIHudNameController* __this);
        // Method: erMask(void* relationType, void* accountID) | Slot: 65535 | Token: 0x6028ff0
        using fn_erMask = void* (*)(UIHudNameController* __this, void* relationType, void* accountID);
        // Method: RequestDeclineDissmissSpecialFriend() | Slot: 134 | Token: 0xffffffff
        using fn_RequestDeclineDissmissSpecialFriend = void* (*)(UIHudNameController* __this);
        // Method: _WAIT() | Slot: 36850 | Token: 0x17743
        using fn__WAIT = void* (*)(UIHudNameController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameController* __this);
        // Method: Method_33() | Slot: 30533 | Token: 0x12545
        using fn_Method_33 = void* (*)(UIHudNameController* __this);
        // Method: Method_34() | Slot: 0 | Token: 0x5e84
        using fn_Method_34 = void* (*)(UIHudNameController* __this);
        // Method: tLoopEffectRes(void* priority) | Slot: 9541 | Token: 0x20886b
        using fn_tLoopEffectRes = void* (*)(UIHudNameController* __this, void* priority);
        // Method: Method_36() | Slot: 24196 | Token: 0x3ffff
        using fn_Method_36 = void* (*)(UIHudNameController* __this);
        // Method: asuryModel() | Slot: 63582 | Token: 0x886
        using fn_asuryModel = void* (*)(UIHudNameController* __this);
        // Method: erMask(void* stats) | Slot: 65535 | Token: 0x6028ff8
        using fn_erMask = void* (*)(UIHudNameController* __this, void* stats);
        // Method: InitLastPlayGameFriend() | Slot: 134 | Token: 0xffffffff
        using fn_InitLastPlayGameFriend = void* (*)(UIHudNameController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36858 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudNameController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudNameController* __this);
        // Method: Method_42() | Slot: 30542 | Token: 0x12545
        using fn_Method_42 = void* (*)(UIHudNameController* __this);
        // Method: Method_43() | Slot: 0 | Token: 0x5e84
        using fn_Method_43 = void* (*)(UIHudNameController* __this);
        // Method: tRes(void* priority) | Slot: 9541 | Token: 0x43f905
        using fn_tRes = void* (*)(UIHudNameController* __this, void* priority);
        // Method: Method_45() | Slot: 24196 | Token: 0x2ffff
        using fn_Method_45 = void* (*)(UIHudNameController* __this);
        // Method: bum() | Slot: 9316 | Token: 0x81
        using fn_bum = void* (*)(UIHudNameController* __this);
        // Method: erMask(void* P0) | Slot: 65535 | Token: 0x6029000
        using fn_erMask = void* (*)(UIHudNameController* __this, void* P0);
        // Method: <>iFixBaseProxy_Logout() | Slot: 6 | Token: 0xffffffff
        using fn___iFixBaseProxy_Logout = void* (*)(UIHudNameController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36866 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudNameController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudNameController* __this);
        // Method: Method_51() | Slot: 65535 | Token: 0x12545
        using fn_Method_51 = void* (*)(UIHudNameController* __this);
        // Method: Method_52() | Slot: 0 | Token: 0x5e7d
        using fn_Method_52 = void* (*)(UIHudNameController* __this);
        // Method: rontWheel(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_rontWheel = void* (*)(UIHudNameController* __this, void* instCount);
        // Method: Method_54() | Slot: 24190 | Token: 0xffff
        using fn_Method_54 = void* (*)(UIHudNameController* __this);
        // Method: bum() | Slot: 64861 | Token: 0x83
        using fn_bum = void* (*)(UIHudNameController* __this);
        // Method: le(void* x) | Slot: 65535 | Token: 0x6029008
        using fn_le = void* (*)(UIHudNameController* __this, void* x);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UIHudNameController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36874 | Token: 0x1775f
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudNameController* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UIHudNameController* __this);
        // Method: Method_60() | Slot: 30561 | Token: 0x12545
        using fn_Method_60 = void* (*)(UIHudNameController* __this);
        // Method: Method_61() | Slot: 0 | Token: 0x5e81
        using fn_Method_61 = void* (*)(UIHudNameController* __this);
        // Method: Method_62(void* strAPPSecret) | Slot: 9541 | Token: 0x43fded
        using fn_Method_62 = void* (*)(UIHudNameController* __this, void* strAPPSecret);
        // Method: Method_63() | Slot: 24194 | Token: 0x2ffff
        using fn_Method_63 = void* (*)(UIHudNameController* __this);
        // Method: bum() | Slot: 65045 | Token: 0x1886
        using fn_bum = void* (*)(UIHudNameController* __this);
        // Method: ayerMask(void* errorCode, void* res) | Slot: 65535 | Token: 0x6029010
        using fn_ayerMask = void* (*)(UIHudNameController* __this, void* errorCode, void* res);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UIHudNameController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36882 | Token: 0x17767
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudNameController* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UIHudNameController* __this);
        // Method: Method_69() | Slot: 30569 | Token: 0x12545
        using fn_Method_69 = void* (*)(UIHudNameController* __this);
        // Method: Method_70() | Slot: 0 | Token: 0x5e95
        using fn_Method_70 = void* (*)(UIHudNameController* __this);
        // Method: Method_71(void* pos) | Slot: 9541 | Token: 0x43ff7f
        using fn_Method_71 = void* (*)(UIHudNameController* __this, void* pos);
        // Method: Method_72() | Slot: 24213 | Token: 0x1ffff
        using fn_Method_72 = void* (*)(UIHudNameController* __this);
        // Method: rigger() | Slot: 65458 | Token: 0x886
        using fn_rigger = void* (*)(UIHudNameController* __this);
        // Method: rEnable() | Slot: 65535 | Token: 0x6029018
        using fn_rEnable = void* (*)(UIHudNameController* __this);
        // Method: set_HasRebateWndAutoOpened() | Slot: 2182 | Token: 0xffffffff
        using fn_set_HasRebateWndAutoOpened = void* (*)(UIHudNameController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36890 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudNameController* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudNameController* __this);
        // Method: Method_78() | Slot: 65535 | Token: 0x120f2
        using fn_Method_78 = void* (*)(UIHudNameController* __this);
        // Method: Method_79() | Slot: 0 | Token: 0x5e95
        using fn_Method_79 = void* (*)(UIHudNameController* __this);
        // Method: tWheel() | Slot: 54255 | Token: 0x44004c
        using fn_tWheel = void* (*)(UIHudNameController* __this);
        // Method: Method_81() | Slot: 24213 | Token: 0xffff
        using fn_Method_81 = void* (*)(UIHudNameController* __this);
        // Method: bum() | Slot: 126 | Token: 0x886
        using fn_bum = void* (*)(UIHudNameController* __this);
        // Method: rEnable() | Slot: 65535 | Token: 0x6029020
        using fn_rEnable = void* (*)(UIHudNameController* __this);
        // Method: get_IsLobbyEntranceShowed() | Slot: 2182 | Token: 0xffffffff
        using fn_get_IsLobbyEntranceShowed = void* (*)(UIHudNameController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36898 | Token: 0x1776f
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudNameController* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudNameController* __this);
        // Method: Method_87() | Slot: 65535 | Token: 0x69c4
        using fn_Method_87 = void* (*)(UIHudNameController* __this);
        // Method: Method_88() | Slot: 0 | Token: 0x5e95
        using fn_Method_88 = void* (*)(UIHudNameController* __this);
        // Method: eel() | Slot: 35618 | Token: 0x440101
        using fn_eel = void* (*)(UIHudNameController* __this);
        // Method: Method_90() | Slot: 24213 | Token: 0xffff
        using fn_Method_90 = void* (*)(UIHudNameController* __this);
        // Method: t() | Slot: 339 | Token: 0x886
        using fn_t = void* (*)(UIHudNameController* __this);
        // Method: rEnable(void* value) | Slot: 65535 | Token: 0x6029028
        using fn_rEnable = void* (*)(UIHudNameController* __this, void* value);
        // Method: get_MyAccountRelayMartInfo() | Slot: 2182 | Token: 0xffffffff
        using fn_get_MyAccountRelayMartInfo = void* (*)(UIHudNameController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36906 | Token: 0x17772
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudNameController* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudNameController* __this);
        // Method: Method_96() | Slot: 30579 | Token: 0x12545
        using fn_Method_96 = void* (*)(UIHudNameController* __this);
        // Method: Method_97() | Slot: 0 | Token: 0x5e95
        using fn_Method_97 = void* (*)(UIHudNameController* __this);
        // Method: LeftBottomWheel(void* circlePlane) | Slot: 8434 | Token: 0x4401b6
        using fn_LeftBottomWheel = void* (*)(UIHudNameController* __this, void* circlePlane);
        // Method: Method_99() | Slot: 24213 | Token: 0x1ffff
        using fn_Method_99 = void* (*)(UIHudNameController* __this);
        // Method: ENT_VIEW() | Slot: 479 | Token: 0x86
        using fn_ENT_VIEW = void* (*)(UIHudNameController* __this);
        // Method: rEnable() | Slot: 65535 | Token: 0x6029030
        using fn_rEnable = void* (*)(UIHudNameController* __this);
        // Method: IsRelayMartValidTime() | Slot: 134 | Token: 0xffffffff
        using fn_IsRelayMartValidTime = void* (*)(UIHudNameController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36914 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudNameController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameController* __this);
        // Method: Method_105() | Slot: 65535 | Token: 0x120f2
        using fn_Method_105 = void* (*)(UIHudNameController* __this);
        // Method: Method_106() | Slot: 0 | Token: 0x5e95
        using fn_Method_106 = void* (*)(UIHudNameController* __this);
        // Method: Method_107() | Slot: 54255 | Token: 0x44026f
        using fn_Method_107 = void* (*)(UIHudNameController* __this);
        // Method: Method_108() | Slot: 24213 | Token: 0xffff
        using fn_Method_108 = void* (*)(UIHudNameController* __this);
        // Method: g() | Slot: 662 | Token: 0x86
        using fn_g = void* (*)(UIHudNameController* __this);
        // Method: rEnable() | Slot: 65535 | Token: 0x6029038
        using fn_rEnable = void* (*)(UIHudNameController* __this);
        // Method: GetLocalizedCDNUrl() | Slot: 129 | Token: 0xffffffff
        using fn_GetLocalizedCDNUrl = void* (*)(UIHudNameController* __this);
        // Method: _WAIT() | Slot: 36922 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UIHudNameController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameController* __this);
        // Method: Method_114() | Slot: 65535 | Token: 0x12545
        using fn_Method_114 = void* (*)(UIHudNameController* __this);
        // Method: Method_115() | Slot: 0 | Token: 0x5e95
        using fn_Method_115 = void* (*)(UIHudNameController* __this);
    };

    // TypeDefIndex: 29101 | Original: COW.HUD.UIHudNameDamageController | Token: 0x20071ad
    struct UIHudNameDamageController : Il2Cpp::Object {
        // Fields (17)
        void* CRITICAL_DAMAGE; // CRITICAL_DAMAGE | Token: 0x4038f38
        void* NORMAL_DAMAGE; // NORMAL_DAMAGE | Token: 0x4038f39
        void* HEALING; // HEALING | Token: 0x4038f3a
        void* VEHICLE_SHIELD_DAMAGE; // VEHICLE_SHIELD_DAMAGE | Token: 0x4038f3b
        void* SHIELD_DAMAGE; // SHIELD_DAMAGE | Token: 0x4038f3c
        void* CRITICAL_DAMAGE_NOBLOOD; // CRITICAL_DAMAGE_NOBLOOD | Token: 0x4038f3d
        void* NORMAL_DAMAGE_NOBLOOD; // NORMAL_DAMAGE_NOBLOOD | Token: 0x4038f3e
        void* FRIEND_COLOR; // FRIEND_COLOR | Token: 0x4038f3f
        void* HEADSHOT_DAMAGE; // HEADSHOT_DAMAGE | Token: 0x4038f40
        void* m_QueueDamageStates; // m_QueueDamageStates | Token: 0x4038f41
        void* m_InGameScene; // m_InGameScene | Token: 0x4038f42
        void* m_AccumulatedDamageInfo; // m_AccumulatedDamageInfo | Token: 0x4038f43
        void* m_ID2Coroutine; // m_ID2Coroutine | Token: 0x4038f44
        void* m_LastObj; // m_LastObj | Token: 0x4038f45
        void* m_DamageUniqueID; // m_DamageUniqueID | Token: 0x4038f46
        void* m_AccumulatedDamageDelay; // m_AccumulatedDamageDelay | Token: 0x4038f47
        void* m_AccumulatedDamageDelaySpecified; // m_AccumulatedDamageDelaySpecified | Token: 0x4038f48

        // Methods (19)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameDamageController* __this);
        // Method: Method_1() | Slot: 30589 | Token: 0xd09f
        using fn_Method_1 = void* (*)(UIHudNameDamageController* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5e95
        using fn_Method_2 = void* (*)(UIHudNameDamageController* __this);
        // Method: heel() | Slot: 42287 | Token: 0x440503
        using fn_heel = void* (*)(UIHudNameDamageController* __this);
        // Method: Method_4() | Slot: 24213 | Token: 0x1ffff
        using fn_Method_4 = void* (*)(UIHudNameDamageController* __this);
        // Method: Interval() | Slot: 1341 | Token: 0x86
        using fn_Interval = void* (*)(UIHudNameDamageController* __this);
        // Method: rEnable() | Slot: 65535 | Token: 0x6029050
        using fn_rEnable = void* (*)(UIHudNameDamageController* __this);
        // Method: GetCurrentDiscountValue() | Slot: 134 | Token: 0xffffffff
        using fn_GetCurrentDiscountValue = void* (*)(UIHudNameDamageController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36946 | Token: 0x17785
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudNameDamageController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameDamageController* __this);
        // Method: Method_10() | Slot: 65535 | Token: 0xa52f
        using fn_Method_10 = void* (*)(UIHudNameDamageController* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x5e95
        using fn_Method_11 = void* (*)(UIHudNameDamageController* __this);
        // Method: ghtBottomWheel() | Slot: 27076 | Token: 0x4405c9
        using fn_ghtBottomWheel = void* (*)(UIHudNameDamageController* __this);
        // Method: Method_13() | Slot: 24213 | Token: 0xffff
        using fn_Method_13 = void* (*)(UIHudNameDamageController* __this);
        // Method: t() | Slot: 1507 | Token: 0x86
        using fn_t = void* (*)(UIHudNameDamageController* __this);
        // Method: rEnable(void* discountCode) | Slot: 65535 | Token: 0x6029058
        using fn_rEnable = void* (*)(UIHudNameDamageController* __this, void* discountCode);
        // Method: GetBackUpDiscountCodePrefix() | Slot: 134 | Token: 0xffffffff
        using fn_GetBackUpDiscountCodePrefix = void* (*)(UIHudNameDamageController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36954 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudNameDamageController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameDamageController* __this);
    };

    // TypeDefIndex: 29103 | Original: COW.HUD.UIHudNameElectricGirlSkillController | Token: 0x20071af
    struct UIHudNameElectricGirlSkillController : Il2Cpp::Object {
        // Fields (19)
        void* m_View; // m_View | Token: 0x4038f4e
        void* CachedTransform; // CachedTransform | Token: 0x4038f4f
        void* m_PlayerId; // m_PlayerId | Token: 0x4038f50
        void* m_LowHpLine; // m_LowHpLine | Token: 0x4038f51
        void* m_LastDirection; // m_LastDirection | Token: 0x4038f52
        void* m_CurStatus; // m_CurStatus | Token: 0x4038f53
        void* m_PrevDistance; // m_PrevDistance | Token: 0x4038f54
        void* m_LastDistancePrintLength; // m_LastDistancePrintLength | Token: 0x4038f55
        void* m_UpdateDisInterval; // m_UpdateDisInterval | Token: 0x4038f56
        void* m_LastHpFillAmount; // m_LastHpFillAmount | Token: 0x4038f57
        void* m_PlayerIsDieing; // m_PlayerIsDieing | Token: 0x4038f58
        void* m_UpdateHpInterval; // m_UpdateHpInterval | Token: 0x4038f59
        void* m_BigHealTargetHpHideTs; // m_BigHealTargetHpHideTs | Token: 0x4038f5a
        void* m_EaseOutTick; // m_EaseOutTick | Token: 0x4038f5b
        void* m_TableStartLocalPos; // m_TableStartLocalPos | Token: 0x4038f5c
        void* m_TableTargetLocalPos; // m_TableTargetLocalPos | Token: 0x4038f5d
        void* m_NameLabelOffset; // m_NameLabelOffset | Token: 0x4038f5e
        void* m_TableHalfWidth; // m_TableHalfWidth | Token: 0x4038f5f
        void* m_TableHalfHeight; // m_TableHalfHeight | Token: 0x4038f60

        // Methods (16)
        // Method: ShouldShowFreeDiamondPopup() | Slot: 134 | Token: 0xffffffff
        using fn_ShouldShowFreeDiamondPopup = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36962 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: Method_3() | Slot: 65535 | Token: 0x12545
        using fn_Method_3 = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5e95
        using fn_Method_4 = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: Method_5(void* priority) | Slot: 9541 | Token: 0x44074c
        using fn_Method_5 = void* (*)(UIHudNameElectricGirlSkillController* __this, void* priority);
        // Method: Method_6() | Slot: 24213 | Token: 0x1ffff
        using fn_Method_6 = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: bum() | Slot: 1920 | Token: 0x86
        using fn_bum = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: rEnable(void* discountCode, void* showTips, void* addFrom) | Slot: 65535 | Token: 0x6029068
        using fn_rEnable = void* (*)(UIHudNameElectricGirlSkillController* __this, void* discountCode, void* showTips, void* addFrom);
        // Method: RequestUnlockRelayMartDiscountCode() | Slot: 134 | Token: 0xffffffff
        using fn_RequestUnlockRelayMartDiscountCode = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 36970 | Token: 0x1778f
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: Method_12() | Slot: 30609 | Token: 0x12545
        using fn_Method_12 = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: Method_13() | Slot: 0 | Token: 0x5e95
        using fn_Method_13 = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: el() | Slot: 51663 | Token: 0x4408a2
        using fn_el = void* (*)(UIHudNameElectricGirlSkillController* __this);
        // Method: Method_15() | Slot: 24213 | Token: 0xffff
        using fn_Method_15 = void* (*)(UIHudNameElectricGirlSkillController* __this);
    };

    // TypeDefIndex: 29104 | Original: COW.HUD.BindType | Token: 0x20071b1
    struct BindType : Il2Cpp::Object {
        // Fields (5)
        void* value__; // value__ | Token: 0x4038f66
        void* NONE; // NONE | Token: 0x4038f67
        void* PLAYER; // PLAYER | Token: 0x4038f68
        void* OBJECT; // OBJECT | Token: 0x4038f69
        void* POSITION; // POSITION | Token: 0x4038f6a
    };

    // TypeDefIndex: 29108 | Original: COW.HUD.UIHudNameEnemyController | Token: 0x20071b2
    struct UIHudNameEnemyController : Il2Cpp::Object {
        // Fields (13)
        void* m_View; // m_View | Token: 0x4038f6b
        void* m_BindPlayer; // m_BindPlayer | Token: 0x4038f6c
        void* m_BindObjectAttackableID; // m_BindObjectAttackableID | Token: 0x4038f6d
        void* m_PositionBind; // m_PositionBind | Token: 0x4038f6e
        void* m_BindType; // m_BindType | Token: 0x4038f6f
        void* m_FollowCamera; // m_FollowCamera | Token: 0x4038f70
        void* m_FollowCameraComponent; // m_FollowCameraComponent | Token: 0x4038f71
        void* m_BuffECAContentLabels; // m_BuffECAContentLabels | Token: 0x4038f72
        void* m_RemoveHitDamageDelay; // m_RemoveHitDamageDelay | Token: 0x4038f73
        void* m_ExecuteKillEffectActive; // m_ExecuteKillEffectActive | Token: 0x4038f74
        void* m_LastNamePos; // m_LastNamePos | Token: 0x4038f75
        void* MissStr; // MissStr | Token: 0x4038f76
        void* m_QueueOldDamageStates; // m_QueueOldDamageStates | Token: 0x4038f77

        // Methods (48)
        // Method: bum() | Slot: 39654 | Token: 0x86
        using fn_bum = void* (*)(UIHudNameEnemyController* __this);
        // Method: rEnable(void* isForce) | Slot: 65535 | Token: 0x6029070
        using fn_rEnable = void* (*)(UIHudNameEnemyController* __this, void* isForce);
        // Method: UpdateFriendDiscountCodeShare() | Slot: 134 | Token: 0xffffffff
        using fn_UpdateFriendDiscountCodeShare = void* (*)(UIHudNameEnemyController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36978 | Token: 0x1779a
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudNameEnemyController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_5() | Slot: 30619 | Token: 0x12545
        using fn_Method_5 = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5e95
        using fn_Method_6 = void* (*)(UIHudNameEnemyController* __this);
        // Method: at() | Slot: 27076 | Token: 0x4409ce
        using fn_at = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_8() | Slot: 24213 | Token: 0x1ffff
        using fn_Method_8 = void* (*)(UIHudNameEnemyController* __this);
        // Method: bum() | Slot: 2564 | Token: 0x81
        using fn_bum = void* (*)(UIHudNameEnemyController* __this);
        // Method: rEnable() | Slot: 65535 | Token: 0x6029078
        using fn_rEnable = void* (*)(UIHudNameEnemyController* __this);
        // Method: UpdateMyAccountRelayMartInfo() | Slot: 129 | Token: 0xffffffff
        using fn_UpdateMyAccountRelayMartInfo = void* (*)(UIHudNameEnemyController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36986 | Token: 0x1779f
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudNameEnemyController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_14() | Slot: 30625 | Token: 0x12545
        using fn_Method_14 = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x5e95
        using fn_Method_15 = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_16(void* priority) | Slot: 9541 | Token: 0x440aac
        using fn_Method_16 = void* (*)(UIHudNameEnemyController* __this, void* priority);
        // Method: Method_17() | Slot: 24213 | Token: 0xffff
        using fn_Method_17 = void* (*)(UIHudNameEnemyController* __this);
        // Method: bum() | Slot: 2790 | Token: 0x81
        using fn_bum = void* (*)(UIHudNameEnemyController* __this);
        // Method: rEnable(void* discountCodeUsedNtf) | Slot: 65535 | Token: 0x6029080
        using fn_rEnable = void* (*)(UIHudNameEnemyController* __this, void* discountCodeUsedNtf);
        // Method: CheckSendAddFriendRequest() | Slot: 129 | Token: 0xffffffff
        using fn_CheckSendAddFriendRequest = void* (*)(UIHudNameEnemyController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 36994 | Token: 0x177a7
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudNameEnemyController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_23() | Slot: 30632 | Token: 0x12545
        using fn_Method_23 = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_24() | Slot: 0 | Token: 0x5e95
        using fn_Method_24 = void* (*)(UIHudNameEnemyController* __this);
        // Method: at(void* priority) | Slot: 9541 | Token: 0x21ac85
        using fn_at = void* (*)(UIHudNameEnemyController* __this, void* priority);
        // Method: Method_26() | Slot: 24213 | Token: 0x1ffff
        using fn_Method_26 = void* (*)(UIHudNameEnemyController* __this);
        // Method: bum() | Slot: 18858 | Token: 0x6
        using fn_bum = void* (*)(UIHudNameEnemyController* __this);
        // Method: ask() | Slot: 65535 | Token: 0x6029088
        using fn_ask = void* (*)(UIHudNameEnemyController* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UIHudNameEnemyController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37002 | Token: 0x177ae
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudNameEnemyController* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_32() | Slot: 65535 | Token: 0x12545
        using fn_Method_32 = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_33() | Slot: 0 | Token: 0x5e88
        using fn_Method_33 = void* (*)(UIHudNameEnemyController* __this);
        // Method: arVFX(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_arVFX = void* (*)(UIHudNameEnemyController* __this, void* instCount);
        // Method: Method_35() | Slot: 24201 | Token: 0xffff
        using fn_Method_35 = void* (*)(UIHudNameEnemyController* __this);
        // Method: bum() | Slot: 103 | Token: 0x83
        using fn_bum = void* (*)(UIHudNameEnemyController* __this);
        // Method: () | Slot: 65535 | Token: 0x6029090
        using fn_unnamed = void* (*)(UIHudNameEnemyController* __this);
        // Method: <RequestShareRelayMartDiscountCode>b__0() | Slot: 131 | Token: 0xffffffff
        using fn__RequestShareRelayMartDiscountCode_b__0 = void* (*)(UIHudNameEnemyController* __this);
        // Method: _WAIT() | Slot: 37010 | Token: 0xffffffff
        using fn__WAIT = void* (*)(UIHudNameEnemyController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_41() | Slot: 65535 | Token: 0x12545
        using fn_Method_41 = void* (*)(UIHudNameEnemyController* __this);
        // Method: Method_42() | Slot: 0 | Token: 0x5e8c
        using fn_Method_42 = void* (*)(UIHudNameEnemyController* __this);
        // Method: nningVFX(void* instCount) | Slot: 9541 | Token: 0x67
        using fn_nningVFX = void* (*)(UIHudNameEnemyController* __this, void* instCount);
        // Method: Method_44() | Slot: 24205 | Token: 0xffff
        using fn_Method_44 = void* (*)(UIHudNameEnemyController* __this);
        // Method: bum() | Slot: 103 | Token: 0x83
        using fn_bum = void* (*)(UIHudNameEnemyController* __this);
        // Method: ColliderEnable() | Slot: 65535 | Token: 0x6029098
        using fn_ColliderEnable = void* (*)(UIHudNameEnemyController* __this);
        // Method: <RequestCheckAvailableDiscountCodes>b__0() | Slot: 131 | Token: 0xffffffff
        using fn__RequestCheckAvailableDiscountCodes_b__0 = void* (*)(UIHudNameEnemyController* __this);
    };

    // TypeDefIndex: 29109 | Original: COW.HUD.UIHudNameIdentityController | Token: 0x20071b6
    struct UIHudNameIdentityController : Il2Cpp::Object {
        // Fields (3)
        void* m_View; // m_View | Token: 0x4038f88
        void* m_BindPlayer; // m_BindPlayer | Token: 0x4038f89
        void* m_Identity; // m_Identity | Token: 0x4038f8a

        // Methods (4)
        // Method: ly-CSharp() | Slot: 37034 | Token: 0xffffffff
        using fn_ly_CSharp = void* (*)(UIHudNameIdentityController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudNameIdentityController* __this);
        // Method: Method_2() | Slot: 30664 | Token: 0x12545
        using fn_Method_2 = void* (*)(UIHudNameIdentityController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5ead
        using fn_Method_3 = void* (*)(UIHudNameIdentityController* __this);
    };

    // TypeDefIndex: 29110 | Original: COW.HUD.UIHudRevengeInfoPointController | Token: 0x20071b7
    struct UIHudRevengeInfoPointController : Il2Cpp::Object {
        // Fields (3)
        void* m_View; // m_View | Token: 0x4038f8b
        void* m_BindPlayer; // m_BindPlayer | Token: 0x4038f8c
        void* _NeedUpdate_k__BackingField; // <NeedUpdate>k__BackingField | Token: 0x4038f8d

        // Methods (15)
        // Method: nResID(void* circlePlane) | Slot: 9541 | Token: 0x4417fa
        using fn_nResID = void* (*)(UIHudRevengeInfoPointController* __this, void* circlePlane);
        // Method: Method_1() | Slot: 24237 | Token: 0xffff
        using fn_Method_1 = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: bum() | Slot: 6191 | Token: 0x86
        using fn_bum = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: ByName(void* reasonMap, void* type, void* reason, void* selectTag) | Slot: 65535 | Token: 0x60290b0
        using fn_ByName = void* (*)(UIHudRevengeInfoPointController* __this, void* reasonMap, void* type, void* reason, void* selectTag);
        // Method: CheckCacheReasonSelect() | Slot: 134 | Token: 0xffffffff
        using fn_CheckCacheReasonSelect = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: imable() | Slot: 37042 | Token: 0x177d1
        using fn_imable = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0x12545
        using fn_Method_7 = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x5ead
        using fn_Method_8 = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: Method_9(void* cam) | Slot: 9541 | Token: 0x21ac85
        using fn_Method_9 = void* (*)(UIHudRevengeInfoPointController* __this, void* cam);
        // Method: Method_10() | Slot: 24218 | Token: 0x1ffff
        using fn_Method_10 = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: e() | Slot: 65535 | Token: 0x60290b8
        using fn_e = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: SortByHackerProb() | Slot: 134 | Token: 0xffffffff
        using fn_SortByHackerProb = void* (*)(UIHudRevengeInfoPointController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37050 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudRevengeInfoPointController* __this);
    };

    // TypeDefIndex: 29111 | Original: COW.HUD.UIHudSafeZoneInfoController | Token: 0x20071b8
    struct UIHudSafeZoneInfoController : Il2Cpp::Object {
        // Fields (38)
        void* VISIBILITY_STATE_EighthLand; // VISIBILITY_STATE_EighthLand | Token: 0x4038f8e
        void* VISIBILITY_STATE_SeafoodLittleGirlGame; // VISIBILITY_STATE_SeafoodLittleGirlGame | Token: 0x4038f8f
        void* VISIBILITY_STATE_GB_GPGulag; // VISIBILITY_STATE_GB_GPGulag | Token: 0x4038f90
        void* m_View; // m_View | Token: 0x4038f91
        void* m_SafeZone; // m_SafeZone | Token: 0x4038f92
        void* m_UseStringBuilder; // m_UseStringBuilder | Token: 0x4038f93
        void* m_Timer; // m_Timer | Token: 0x4038f94
        void* m_Timer1; // m_Timer1 | Token: 0x4038f95
        void* m_Timer2; // m_Timer2 | Token: 0x4038f96
        void* Lable_Stable; // Lable_Stable | Token: 0x4038f97
        void* Lable_PreShrink; // Lable_PreShrink | Token: 0x4038f98
        void* Lable_Shrink; // Lable_Shrink | Token: 0x4038f99
        void* Lable_Warning; // Lable_Warning | Token: 0x4038f9a
        void* Sprite_Stable; // Sprite_Stable | Token: 0x4038f9b
        void* Sprite_PreShrink; // Sprite_PreShrink | Token: 0x4038f9c
        void* Sprite_Shrink; // Sprite_Shrink | Token: 0x4038f9d
        void* m_TimeLength; // m_TimeLength | Token: 0x4038f9e
        void* mSeconds; // mSeconds | Token: 0x4038f9f
        void* min; // min | Token: 0x4038fa0
        void* sec; // sec | Token: 0x4038fa1
        void* m_IsInSafeZone; // m_IsInSafeZone | Token: 0x4038fa2
        void* m_IsPrevOneMinuteCount; // m_IsPrevOneMinuteCount | Token: 0x4038fa3
        void* m_IsOneMinuteCount; // m_IsOneMinuteCount | Token: 0x4038fa4
        void* m_IsPrevInSafeZoneDuringShrink; // m_IsPrevInSafeZoneDuringShrink | Token: 0x4038fa5
        void* m_IsInSafeZoneDuringShrink; // m_IsInSafeZoneDuringShrink | Token: 0x4038fa6
        void* m_DelayCallID; // m_DelayCallID | Token: 0x4038fa7
        void* m_UpdateWarningTipsForMode; // m_UpdateWarningTipsForMode | Token: 0x4038fa8
        void* YELLOW; // YELLOW | Token: 0x4038fa9
        void* RED; // RED | Token: 0x4038faa
        void* WarnColor; // WarnColor | Token: 0x4038fab
        void* m_ZoneMode; // m_ZoneMode | Token: 0x4038fac
        void* STACKICON_VISIBLE; // STACKICON_VISIBLE | Token: 0x4038fad
        void* AFFIX_POPUP_VISIBLE; // AFFIX_POPUP_VISIBLE | Token: 0x4038fae
        void* m_SafeZoneVisibility; // m_SafeZoneVisibility | Token: 0x4038faf
        void* m_LastSpanType; // m_LastSpanType | Token: 0x4038fb0
        void* Metropolis_Area_Open; // Metropolis_Area_Open | Token: 0x4038fb1
        void* m_MetropolisAreaID; // m_MetropolisAreaID | Token: 0x4038fb2
        void* m_MetropolisAreaState; // m_MetropolisAreaState | Token: 0x4038fb3

        // Methods (33)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x12545
        using fn_Method_1 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5e9c
        using fn_Method_2 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_3(void* preferredMethod) | Slot: 9541 | Token: 0x67
        using fn_Method_3 = void* (*)(UIHudSafeZoneInfoController* __this, void* preferredMethod);
        // Method: Method_4() | Slot: 24220 | Token: 0xffff
        using fn_Method_4 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Interval() | Slot: 33042 | Token: 0x83
        using fn_Interval = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: oneName() | Slot: 65535 | Token: 0x60290c0
        using fn_oneName = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37058 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_10() | Slot: 65535 | Token: 0x12545
        using fn_Method_10 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_11() | Slot: 0 | Token: 0x5ea1
        using fn_Method_11 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_12(void* strAPPSecret) | Slot: 9541 | Token: 0x67
        using fn_Method_12 = void* (*)(UIHudSafeZoneInfoController* __this, void* strAPPSecret);
        // Method: Method_13() | Slot: 24227 | Token: 0xffff
        using fn_Method_13 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: e(void* mainReason) | Slot: 65535 | Token: 0x60290c8
        using fn_e = void* (*)(UIHudSafeZoneInfoController* __this, void* mainReason);
        // Method: Clone() | Slot: 134 | Token: 0xffffffff
        using fn_Clone = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37066 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_19() | Slot: 65535 | Token: 0x16950
        using fn_Method_19 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_20() | Slot: 0 | Token: 0x5ea6
        using fn_Method_20 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_21(void* strAPPSecret) | Slot: 26958 | Token: 0x8112
        using fn_Method_21 = void* (*)(UIHudSafeZoneInfoController* __this, void* strAPPSecret);
        // Method: Method_22() | Slot: 24231 | Token: 0xffff
        using fn_Method_22 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: bum() | Slot: 33042 | Token: 0x1886
        using fn_bum = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: tBoneByName() | Slot: 65535 | Token: 0x60290d0
        using fn_tBoneByName = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37074 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_28() | Slot: 65535 | Token: 0x12545
        using fn_Method_28 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_29() | Slot: 0 | Token: 0x5eac
        using fn_Method_29 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Method_30(void* preferredMethod) | Slot: 9541 | Token: 0x67
        using fn_Method_30 = void* (*)(UIHudSafeZoneInfoController* __this, void* preferredMethod);
        // Method: Method_31() | Slot: 24236 | Token: 0xffff
        using fn_Method_31 = void* (*)(UIHudSafeZoneInfoController* __this);
        // Method: Interval() | Slot: 103 | Token: 0x83
        using fn_Interval = void* (*)(UIHudSafeZoneInfoController* __this);
    };

    // TypeDefIndex: 29112 | Original: COW.HUD.UIHudScout3PHPController | Token: 0x20071b9
    struct UIHudScout3PHPController : Il2Cpp::Object {
        // Fields (7)
        void* m_View; // m_View | Token: 0x4038fb4
        void* m_BindScoutID; // m_BindScoutID | Token: 0x4038fb5
        void* m_BindScout; // m_BindScout | Token: 0x4038fb6
        void* m_RaycastTime; // m_RaycastTime | Token: 0x4038fb7
        void* m_RaycastShowCheckInterval; // m_RaycastShowCheckInterval | Token: 0x4038fb8
        void* m_NextRaycastShowCheckTime; // m_NextRaycastShowCheckTime | Token: 0x4038fb9
        void* m_IsRaycastShow; // m_IsRaycastShow | Token: 0x4038fba

        // Methods (14)
        // Method: yName() | Slot: 65535 | Token: 0x60290d8
        using fn_yName = void* (*)(UIHudScout3PHPController* __this);
        // Method: GetModelType() | Slot: 198 | Token: 0xffffffff
        using fn_GetModelType = void* (*)(UIHudScout3PHPController* __this);
        // Method: ly-CSharp() | Slot: 37082 | Token: 0x177de
        using fn_ly_CSharp = void* (*)(UIHudScout3PHPController* __this);
        // Method: de() | Slot: 65535 | Token: 0x8000000
        using fn_de = void* (*)(UIHudScout3PHPController* __this);
        // Method: Method_4() | Slot: 30688 | Token: 0x12545
        using fn_Method_4 = void* (*)(UIHudScout3PHPController* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5eb1
        using fn_Method_5 = void* (*)(UIHudScout3PHPController* __this);
        // Method: Method_6(void* pos) | Slot: 9541 | Token: 0x441e7a
        using fn_Method_6 = void* (*)(UIHudScout3PHPController* __this, void* pos);
        // Method: Method_7() | Slot: 24241 | Token: 0x1ffff
        using fn_Method_7 = void* (*)(UIHudScout3PHPController* __this);
        // Method: bum() | Slot: 103 | Token: 0x86
        using fn_bum = void* (*)(UIHudScout3PHPController* __this);
        // Method: me() | Slot: 65535 | Token: 0x60290e0
        using fn_me = void* (*)(UIHudScout3PHPController* __this);
        // Method: .cctor() | Slot: 6289 | Token: 0xffffffff
        using fn__cctor = void* (*)(UIHudScout3PHPController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37090 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudScout3PHPController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudScout3PHPController* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(UIHudScout3PHPController* __this);
    };

    // TypeDefIndex: 29114 | Original: COW.HUD.UIHudSignalController | Token: 0x20071ba
    struct UIHudSignalController : Il2Cpp::Object {
        // Fields (13)
        void* m_View; // m_View | Token: 0x4038fbb
        void* m_LastUpdateTime; // m_LastUpdateTime | Token: 0x4038fbc
        void* m_StringBuilder; // m_StringBuilder | Token: 0x4038fbd
        void* mLastPing; // mLastPing | Token: 0x4038fbe
        void* m_FakePingRate; // m_FakePingRate | Token: 0x4038fbf
        void* m_HasSendNotHighPing; // m_HasSendNotHighPing | Token: 0x4038fc0
        void* m_LastNotHighPingTime; // m_LastNotHighPingTime | Token: 0x4038fc1
        void* RED_COLOR; // RED_COLOR | Token: 0x4038fc2
        void* YELLOW_COLOR; // YELLOW_COLOR | Token: 0x4038fc3
        void* m_PingMax; // m_PingMax | Token: 0x4038fc4
        void* pingTimer; // pingTimer | Token: 0x4038fc5
        void* pingSection; // pingSection | Token: 0x4038fc6
        void* lastShowPing; // lastShowPing | Token: 0x4038fc7

        // Methods (12)
        // Method: Method_0() | Slot: 0 | Token: 0x5eb3
        using fn_Method_0 = void* (*)(UIHudSignalController* __this);
        // Method: dyModel(void* strAPPSecret) | Slot: 9541 | Token: 0x67
        using fn_dyModel = void* (*)(UIHudSignalController* __this, void* strAPPSecret);
        // Method: Method_2() | Slot: 24242 | Token: 0x5ffff
        using fn_Method_2 = void* (*)(UIHudSignalController* __this);
        // Method: bum() | Slot: 103 | Token: 0x1891
        using fn_bum = void* (*)(UIHudSignalController* __this);
        // Method: e() | Slot: 65535 | Token: 0x60290e8
        using fn_e = void* (*)(UIHudSignalController* __this);
        // Method: <.ctor>b__7_0() | Slot: 131 | Token: 0xffffffff
        using fn___ctor_b__7_0 = void* (*)(UIHudSignalController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37098 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudSignalController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudSignalController* __this);
        // Method: Method_8(void* spriteID) | Slot: 30710 | Token: 0x6741
        using fn_Method_8 = void* (*)(UIHudSignalController* __this, void* spriteID);
        // Method: Method_9() | Slot: 0 | Token: 0x5eb4
        using fn_Method_9 = void* (*)(UIHudSignalController* __this);
        // Method: eSteeringWheel() | Slot: 7392 | Token: 0x441f90
        using fn_eSteeringWheel = void* (*)(UIHudSignalController* __this);
        // Method: Method_11() | Slot: 24247 | Token: 0xffff
        using fn_Method_11 = void* (*)(UIHudSignalController* __this);
    };

    // TypeDefIndex: 29115 | Original: COW.HUD.UIHudSkillLevelObjOwnerController | Token: 0x20071bc
    struct UIHudSkillLevelObjOwnerController : Il2Cpp::Object {
        // Fields (7)
        void* m_View; // m_View | Token: 0x4038fcc
        void* m_ModelGroup; // m_ModelGroup | Token: 0x4038fcd
        void* m_SelfTransform; // m_SelfTransform | Token: 0x4038fce
        void* m_WorldCamera; // m_WorldCamera | Token: 0x4038fcf
        void* m_UICamera; // m_UICamera | Token: 0x4038fd0
        void* m_BindedTransform; // m_BindedTransform | Token: 0x4038fd1
        void* m_BindedOffset; // m_BindedOffset | Token: 0x4038fd2

        // Methods (17)
        // Method: osID() | Slot: 5305 | Token: 0x881
        using fn_osID = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: seTransformCameraBackOffset() | Slot: 4 | Token: 0x60290f0
        using fn_seTransformCameraBackOffset = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: Logout() | Slot: 198 | Token: 0xffffffff
        using fn_Logout = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: eCurrencySubType() | Slot: 37106 | Token: 0xffffffff
        using fn_eCurrencySubType = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: __TPar() | Slot: 65535 | Token: 0x8000000
        using fn___TPar = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: Method_5() | Slot: 30714 | Token: 0x12545
        using fn_Method_5 = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5eb7
        using fn_Method_6 = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: Method_7(void* priority) | Slot: 9541 | Token: 0x441fec
        using fn_Method_7 = void* (*)(UIHudSkillLevelObjOwnerController* __this, void* priority);
        // Method: Method_8() | Slot: 24247 | Token: 0x2ffff
        using fn_Method_8 = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: t() | Slot: 8205 | Token: 0x86
        using fn_t = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: seTransformCameraBackOffset(void* type, void* level) | Slot: 65535 | Token: 0x60290f8
        using fn_seTransformCameraBackOffset = void* (*)(UIHudSkillLevelObjOwnerController* __this, void* type, void* level);
        // Method: GetPrivilegeIconRes() | Slot: 134 | Token: 0xffffffff
        using fn_GetPrivilegeIconRes = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: _WAIT() | Slot: 37114 | Token: 0x17803
        using fn__WAIT = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: Method_14() | Slot: 30727 | Token: 0x12545
        using fn_Method_14 = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: Method_15() | Slot: 0 | Token: 0x5eb7
        using fn_Method_15 = void* (*)(UIHudSkillLevelObjOwnerController* __this);
        // Method: ntLeftWheelModel() | Slot: 27076 | Token: 0x442094
        using fn_ntLeftWheelModel = void* (*)(UIHudSkillLevelObjOwnerController* __this);
    };

    // TypeDefIndex: 29116 | Original: COW.HUD.EWarningWndType | Token: 0x20071bd
    struct EWarningWndType : Il2Cpp::Object {
        // Fields (8)
        void* value__; // value__ | Token: 0x4038fd3
        void* EWarningWndTypeNone; // EWarningWndTypeNone | Token: 0x4038fd4
        void* EWarningWndTypeToxicBehavior; // EWarningWndTypeToxicBehavior | Token: 0x4038fd5
        void* EWarningWndTypeFriendlyReminder; // EWarningWndTypeFriendlyReminder | Token: 0x4038fd6
        void* EWarningWndTypeVoiveReport; // EWarningWndTypeVoiveReport | Token: 0x4038fd7
        void* EWarningWndTypeVoiveBeMuted; // EWarningWndTypeVoiveBeMuted | Token: 0x4038fd8
        void* EWarningWndTypeVoiveTeamatePunish; // EWarningWndTypeVoiveTeamatePunish | Token: 0x4038fd9
        void* EWarningWndTypeVoiceInGameBlock; // EWarningWndTypeVoiceInGameBlock | Token: 0x4038fda
    };

    // TypeDefIndex: 29117 | Original: COW.HUD.InGameWarningWndColorType | Token: 0x20071be
    struct InGameWarningWndColorType : Il2Cpp::Object {
        // Fields (4)
        void* value__; // value__ | Token: 0x4038fdb
        void* Red; // Red | Token: 0x4038fdc
        void* Green; // Green | Token: 0x4038fdd
        void* Blue; // Blue | Token: 0x4038fde
    };

    // TypeDefIndex: 29118 | Original: COW.HUD.UIHudToxicBehaviorWarningWndController | Token: 0x20071bf
    struct UIHudToxicBehaviorWarningWndController : Il2Cpp::Object {
        // Fields (5)
        void* m_View; // m_View | Token: 0x4038fdf
        void* m_TimeLeft; // m_TimeLeft | Token: 0x4038fe0
        void* m_Percent; // m_Percent | Token: 0x4038fe1
        void* m_DelayCall; // m_DelayCall | Token: 0x4038fe2
        void* m_WarningWndType; // m_WarningWndType | Token: 0x4038fe3

        // Methods (13)
        // Method: Method_0() | Slot: 24247 | Token: 0x4ffff
        using fn_Method_0 = void* (*)(UIHudToxicBehaviorWarningWndController* __this);
        // Method: t() | Slot: 8340 | Token: 0x86
        using fn_t = void* (*)(UIHudToxicBehaviorWarningWndController* __this);
        // Method: seTransformCameraBackOffset(void* mainType, void* subType, void* role, void* primeLevel, void* BadgePrivilegeOpen) | Slot: 65535 | Token: 0x6029100
        using fn_seTransformCameraBackOffset = void* (*)(UIHudToxicBehaviorWarningWndController* __this, void* mainType, void* subType, void* role, void* primeLevel, void* BadgePrivilegeOpen);
        // Method: CheckIsBadge() | Slot: 134 | Token: 0xffffffff
        using fn_CheckIsBadge = void* (*)(UIHudToxicBehaviorWarningWndController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37122 | Token: 0x1781b
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudToxicBehaviorWarningWndController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudToxicBehaviorWarningWndController* __this);
        // Method: Method_6() | Slot: 30753 | Token: 0x6741
        using fn_Method_6 = void* (*)(UIHudToxicBehaviorWarningWndController* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x5eb7
        using fn_Method_7 = void* (*)(UIHudToxicBehaviorWarningWndController* __this);
        // Method: WheelModel(void* priority) | Slot: 8434 | Token: 0x4420d2
        using fn_WheelModel = void* (*)(UIHudToxicBehaviorWarningWndController* __this, void* priority);
        // Method: Method_9() | Slot: 24247 | Token: 0x1ffff
        using fn_Method_9 = void* (*)(UIHudToxicBehaviorWarningWndController* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 8459 | Token: 0x86
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(UIHudToxicBehaviorWarningWndController* __this);
        // Method: seTransformCameraBackOffset(void* level) | Slot: 65535 | Token: 0x6029108
        using fn_seTransformCameraBackOffset = void* (*)(UIHudToxicBehaviorWarningWndController* __this, void* level);
        // Method: IsCelebrity() | Slot: 134 | Token: 0xffffffff
        using fn_IsCelebrity = void* (*)(UIHudToxicBehaviorWarningWndController* __this);
    };

    // TypeDefIndex: 29119 | Original: COW.HUD.UIHudUAVHPController | Token: 0x20071c0
    struct UIHudUAVHPController : Il2Cpp::Object {
        // Fields (3)
        void* m_View; // m_View | Token: 0x4038fe4
        void* m_BindUAVId; // m_BindUAVId | Token: 0x4038fe5
        void* m_RaycastTime; // m_RaycastTime | Token: 0x4038fe6

        // Methods (18)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37130 | Token: 0x1782d
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudUAVHPController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudUAVHPController* __this);
        // Method: Method_2() | Slot: 30768 | Token: 0xd3ef
        using fn_Method_2 = void* (*)(UIHudUAVHPController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5eb7
        using fn_Method_3 = void* (*)(UIHudUAVHPController* __this);
        // Method: rLeftWheelModel(void* cutscene) | Slot: 8434 | Token: 0x442156
        using fn_rLeftWheelModel = void* (*)(UIHudUAVHPController* __this, void* cutscene);
        // Method: Method_5() | Slot: 24247 | Token: 0x2ffff
        using fn_Method_5 = void* (*)(UIHudUAVHPController* __this);
        // Method: bum() | Slot: 8571 | Token: 0x81
        using fn_bum = void* (*)(UIHudUAVHPController* __this);
        // Method: seTransformCameraBackOffset(void* role) | Slot: 65535 | Token: 0x6029110
        using fn_seTransformCameraBackOffset = void* (*)(UIHudUAVHPController* __this, void* role);
        // Method: CheckHasBadgeWithPrimeClose() | Slot: 129 | Token: 0xffffffff
        using fn_CheckHasBadgeWithPrimeClose = void* (*)(UIHudUAVHPController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37138 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudUAVHPController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudUAVHPController* __this);
        // Method: Method_11() | Slot: 65535 | Token: 0x12545
        using fn_Method_11 = void* (*)(UIHudUAVHPController* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x5eb7
        using fn_Method_12 = void* (*)(UIHudUAVHPController* __this);
        // Method: heelModel(void* cam) | Slot: 9541 | Token: 0x49aa
        using fn_heelModel = void* (*)(UIHudUAVHPController* __this, void* cam);
        // Method: Method_14() | Slot: 24245 | Token: 0xffff
        using fn_Method_14 = void* (*)(UIHudUAVHPController* __this);
        // Method: bum() | Slot: 8816 | Token: 0x1886
        using fn_bum = void* (*)(UIHudUAVHPController* __this);
        // Method: sUseTransformCameraBackOffset(void* value) | Slot: 65535 | Token: 0x6029118
        using fn_sUseTransformCameraBackOffset = void* (*)(UIHudUAVHPController* __this, void* value);
        // Method: <Init>b__9_1() | Slot: 131 | Token: 0xffffffff
        using fn__Init_b__9_1 = void* (*)(UIHudUAVHPController* __this);
    };

    // TypeDefIndex: 29120 | Original: COW.HUD.UIHudVehicleBufferController | Token: 0x20071c1
    struct UIHudVehicleBufferController : Il2Cpp::Object {
        // Fields (4)
        void* m_View; // m_View | Token: 0x4038fe7
        void* m_StartTime; // m_StartTime | Token: 0x4038fe8
        void* m_CDTime; // m_CDTime | Token: 0x4038fe9
        void* vItemID; // vItemID | Token: 0x4038fea

        // Methods (7)
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37146 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudVehicleBufferController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudVehicleBufferController* __this);
        // Method: Method_2() | Slot: 30781 | Token: 0x9275
        using fn_Method_2 = void* (*)(UIHudVehicleBufferController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5eb8
        using fn_Method_3 = void* (*)(UIHudVehicleBufferController* __this);
        // Method: el(void* cutscene) | Slot: 9541 | Token: 0x67
        using fn_el = void* (*)(UIHudVehicleBufferController* __this, void* cutscene);
        // Method: Method_5() | Slot: 24249 | Token: 0xffff
        using fn_Method_5 = void* (*)(UIHudVehicleBufferController* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(UIHudVehicleBufferController* __this);
    };

    // TypeDefIndex: 29122 | Original: COW.HUD.UIHudVehicleDriverFireController | Token: 0x20071c2
    struct UIHudVehicleDriverFireController : Il2Cpp::Object {
        // Fields (19)
        void* m_View; // m_View | Token: 0x4038feb
        void* m_LocalPlayer; // m_LocalPlayer | Token: 0x4038fec
        void* m_Weapon; // m_Weapon | Token: 0x4038fed
        void* m_Active; // m_Active | Token: 0x4038fee
        void* AxisKey; // AxisKey | Token: 0x4038fef
        void* ENTER_AIMING_TIME; // ENTER_AIMING_TIME | Token: 0x4038ff0
        void* m_ButtonDownTime; // m_ButtonDownTime | Token: 0x4038ff1
        void* m_RightBoard; // m_RightBoard | Token: 0x4038ff2
        void* m_BGRangeRadius; // m_BGRangeRadius | Token: 0x4038ff3
        void* m_Aiming; // m_Aiming | Token: 0x4038ff4
        void* m_Handler; // m_Handler | Token: 0x4038ff5
        void* m_AxisData; // m_AxisData | Token: 0x4038ff6
        void* m_DefaultPos; // m_DefaultPos | Token: 0x4038ff7
        void* m_PendingResetIgnore; // m_PendingResetIgnore | Token: 0x4038ff8
        void* m_TouchingThroughAreaInited; // m_TouchingThroughAreaInited | Token: 0x4038ff9
        void* m_ActiveNormalColor; // m_ActiveNormalColor | Token: 0x4038ffa
        void* m_ActiveIconColor; // m_ActiveIconColor | Token: 0x4038ffb
        void* m_DeactiveNormalColor; // m_DeactiveNormalColor | Token: 0x4038ffc
        void* m_DeactiveIconColor; // m_DeactiveIconColor | Token: 0x4038ffd

        // Methods (30)
        // Method: ransformCameraBackOffset() | Slot: 65535 | Token: 0x6029120
        using fn_ransformCameraBackOffset = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37154 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: utsceneList() | Slot: 65535 | Token: 0x8000000
        using fn_utsceneList = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: Method_4() | Slot: 65535 | Token: 0x12545
        using fn_Method_4 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: Method_5() | Slot: 0 | Token: 0x5ebf
        using fn_Method_5 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: Method_6(void* strAPPSecret) | Slot: 9541 | Token: 0x67
        using fn_Method_6 = void* (*)(UIHudVehicleDriverFireController* __this, void* strAPPSecret);
        // Method: Method_7() | Slot: 24257 | Token: 0xffff
        using fn_Method_7 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: bum() | Slot: 103 | Token: 0x1886
        using fn_bum = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: aBackOffset() | Slot: 65535 | Token: 0x6029128
        using fn_aBackOffset = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37162 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: Method_13() | Slot: 65535 | Token: 0x12545
        using fn_Method_13 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: Method_14() | Slot: 0 | Token: 0x5ecd
        using fn_Method_14 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: Method_15(void* pos) | Slot: 9541 | Token: 0x1f2544
        using fn_Method_15 = void* (*)(UIHudVehicleDriverFireController* __this, void* pos);
        // Method: Method_16() | Slot: 24269 | Token: 0x1ffff
        using fn_Method_16 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: CHIEVEMENT_UNLOCKED() | Slot: 11549 | Token: 0x886
        using fn_CHIEVEMENT_UNLOCKED = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: ffset(void* value) | Slot: 65535 | Token: 0x6029130
        using fn_ffset = void* (*)(UIHudVehicleDriverFireController* __this, void* value);
        // Method: .ctor() | Slot: 6278 | Token: 0xffffffff
        using fn__ctor = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37170 | Token: 0x17843
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: Method_22() | Slot: 30788 | Token: 0x12545
        using fn_Method_22 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: Method_23() | Slot: 0 | Token: 0x5ecd
        using fn_Method_23 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: rRightWheelModel(void* priority) | Slot: 9541 | Token: 0x67
        using fn_rRightWheelModel = void* (*)(UIHudVehicleDriverFireController* __this, void* priority);
        // Method: Method_25() | Slot: 24267 | Token: 0xffff
        using fn_Method_25 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: t() | Slot: 103 | Token: 0x83
        using fn_t = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: Offset() | Slot: 65535 | Token: 0x6029138
        using fn_Offset = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: <FinishDownload>b__0() | Slot: 131 | Token: 0xffffffff
        using fn__FinishDownload_b__0 = void* (*)(UIHudVehicleDriverFireController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37178 | Token: 0x17849
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudVehicleDriverFireController* __this);
    };

    // TypeDefIndex: 29123 | Original: COW.HUD.UIHudVehiclePassengerSkill2Controller | Token: 0x20071c4
    struct UIHudVehiclePassengerSkill2Controller : Il2Cpp::Object {

        // Methods (4)
        // Method: eTransform() | Slot: 65535 | Token: 0x6029140
        using fn_eTransform = void* (*)(UIHudVehiclePassengerSkill2Controller* __this);
        // Method: set_EverHasSomethingToSave() | Slot: 2177 | Token: 0xffffffff
        using fn_set_EverHasSomethingToSave = void* (*)(UIHudVehiclePassengerSkill2Controller* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37186 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudVehiclePassengerSkill2Controller* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudVehiclePassengerSkill2Controller* __this);
    };

    // TypeDefIndex: 29124 | Original: COW.HUD.UIHudVehiclePassengerSkillController | Token: 0x20071c5
    struct UIHudVehiclePassengerSkillController : Il2Cpp::Object {
        // Fields (2)
        void* m_View; // m_View | Token: 0x4039001
        void* ItemTargetSlot; // ItemTargetSlot | Token: 0x4039002

        // Methods (9)
        // Method: Method_0() | Slot: 65535 | Token: 0x12545
        using fn_Method_0 = void* (*)(UIHudVehiclePassengerSkillController* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f23
        using fn_Method_1 = void* (*)(UIHudVehiclePassengerSkillController* __this);
        // Method: Method_2(void* priority) | Slot: 9541 | Token: 0x442ee3
        using fn_Method_2 = void* (*)(UIHudVehiclePassengerSkillController* __this, void* priority);
        // Method: Method_3() | Slot: 24355 | Token: 0x7ffff
        using fn_Method_3 = void* (*)(UIHudVehiclePassengerSkillController* __this);
        // Method: bum() | Slot: 12066 | Token: 0x86
        using fn_bum = void* (*)(UIHudVehiclePassengerSkillController* __this);
        // Method: eTransform(void* matchMode, void* gameMode, void* mapId, void* shareCode) | Slot: 65535 | Token: 0x6029148
        using fn_eTransform = void* (*)(UIHudVehiclePassengerSkillController* __this, void* matchMode, void* gameMode, void* mapId, void* shareCode);
        // Method: get_FunnelLogID() | Slot: 2182 | Token: 0xffffffff
        using fn_get_FunnelLogID = void* (*)(UIHudVehiclePassengerSkillController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37194 | Token: 0x17858
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudVehiclePassengerSkillController* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudVehiclePassengerSkillController* __this);
    };

    // TypeDefIndex: 29126 | Original: COW.HUD.UIHudEntityPosControllerBase | Token: 0x20071c6
    struct UIHudEntityPosControllerBase : Il2Cpp::Object {
        // Fields (21)
        void* m_TargetEntity; // m_TargetEntity | Token: 0x4039003
        void* m_TargetPlayer; // m_TargetPlayer | Token: 0x4039004
        void* Cam; // Cam | Token: 0x4039005
        void* Container; // Container | Token: 0x4039006
        void* icon; // icon | Token: 0x4039007
        void* DistanceLabel; // DistanceLabel | Token: 0x4039008
        void* BGM; // BGM | Token: 0x4039009
        void* ArrowUp; // ArrowUp | Token: 0x403900a
        void* ArrowLeft; // ArrowLeft | Token: 0x403900b
        void* ArrowRight; // ArrowRight | Token: 0x403900c
        void* ArrowDown; // ArrowDown | Token: 0x403900d
        void* m_EventsRegistered; // m_EventsRegistered | Token: 0x403900e
        void* m_EntityPosOffset; // m_EntityPosOffset | Token: 0x403900f
        void* viewPortBoundary; // viewPortBoundary | Token: 0x4039010
        void* m_MinimapSize; // m_MinimapSize | Token: 0x4039011
        void* m_ArrowHalfSize; // m_ArrowHalfSize | Token: 0x4039012
        void* m_PrevDistance; // m_PrevDistance | Token: 0x4039013
        void* m_LastViewPos; // m_LastViewPos | Token: 0x4039014
        void* m_MarginUp; // m_MarginUp | Token: 0x4039015
        void* m_ShowArrows; // m_ShowArrows | Token: 0x4039016
        void* m_ShowDistance; // m_ShowDistance | Token: 0x4039017

        // Methods (27)
        // Method: Method_0() | Slot: 30809 | Token: 0x12545
        using fn_Method_0 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f23
        using fn_Method_1 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: Method_2() | Slot: 52757 | Token: 0x442f95
        using fn_Method_2 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: Method_3() | Slot: 24355 | Token: 0xffff
        using fn_Method_3 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: rs() | Slot: 12219 | Token: 0x886
        using fn_rs = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: eTransform(void* value) | Slot: 65535 | Token: 0x6029150
        using fn_eTransform = void* (*)(UIHudEntityPosControllerBase* __this, void* value);
        // Method: get_HasPendingTutorialCongratulationsOnReturnToLobby() | Slot: 2182 | Token: 0xffffffff
        using fn_get_HasPendingTutorialCongratulationsOnReturnToLobby = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37202 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x1210a
        using fn_Method_9 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x5f23
        using fn_Method_10 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: Method_11(void* pos) | Slot: 8458 | Token: 0x443063
        using fn_Method_11 = void* (*)(UIHudEntityPosControllerBase* __this, void* pos);
        // Method: Method_12() | Slot: 24355 | Token: 0xffff
        using fn_Method_12 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: ENT_VIEW() | Slot: 12424 | Token: 0x886
        using fn_ENT_VIEW = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029158
        using fn_eTransform = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: get_HasEnterUGCCenter() | Slot: 2182 | Token: 0xffffffff
        using fn_get_HasEnterUGCCenter = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37210 | Token: 0x1785b
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: Method_18() | Slot: 65535 | Token: 0x120f2
        using fn_Method_18 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: Method_19() | Slot: 0 | Token: 0x5f23
        using fn_Method_19 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: Method_20(void* pos) | Slot: 9541 | Token: 0x44310d
        using fn_Method_20 = void* (*)(UIHudEntityPosControllerBase* __this, void* pos);
        // Method: Method_21() | Slot: 24355 | Token: 0xffff
        using fn_Method_21 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: bum() | Slot: 12586 | Token: 0x86
        using fn_bum = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029160
        using fn_eTransform = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: GetUGCData() | Slot: 134 | Token: 0xffffffff
        using fn_GetUGCData = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37218 | Token: 0x1785e
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudEntityPosControllerBase* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudEntityPosControllerBase* __this);
    };

    // TypeDefIndex: 29127 | Original: COW.HUD.UIHudVehiclePosControllerBase | Token: 0x20071c8
    struct UIHudVehiclePosControllerBase : Il2Cpp::Object {

        // Methods (11)
        // Method: Method_0() | Slot: 30816 | Token: 0x12545
        using fn_Method_0 = void* (*)(UIHudVehiclePosControllerBase* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f23
        using fn_Method_1 = void* (*)(UIHudVehiclePosControllerBase* __this);
        // Method: Method_2(void* priority) | Slot: 9541 | Token: 0x4431a9
        using fn_Method_2 = void* (*)(UIHudVehiclePosControllerBase* __this, void* priority);
        // Method: Method_3() | Slot: 24355 | Token: 0xffff
        using fn_Method_3 = void* (*)(UIHudVehiclePosControllerBase* __this);
        // Method: bum() | Slot: 12759 | Token: 0x86
        using fn_bum = void* (*)(UIHudVehiclePosControllerBase* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029168
        using fn_eTransform = void* (*)(UIHudVehiclePosControllerBase* __this);
        // Method: OnPlayerShowItemList() | Slot: 134 | Token: 0xffffffff
        using fn_OnPlayerShowItemList = void* (*)(UIHudVehiclePosControllerBase* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37226 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudVehiclePosControllerBase* __this);
        // Method: BuffFactor() | Slot: 65535 | Token: 0x8000000
        using fn_BuffFactor = void* (*)(UIHudVehiclePosControllerBase* __this);
        // Method: Method_9() | Slot: 65535 | Token: 0x127c2
        using fn_Method_9 = void* (*)(UIHudVehiclePosControllerBase* __this);
        // Method: Method_10() | Slot: 0 | Token: 0x5f23
        using fn_Method_10 = void* (*)(UIHudVehiclePosControllerBase* __this);
    };

    // TypeDefIndex: 29128 | Original: COW.HUD.UIHudVehiclePosController | Token: 0x20071c9
    struct UIHudVehiclePosController : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x403901e

        // Methods (15)
        // Method: ilAnimState() | Slot: 27076 | Token: 0x44326f
        using fn_ilAnimState = void* (*)(UIHudVehiclePosController* __this);
        // Method: Method_1() | Slot: 24355 | Token: 0xffff
        using fn_Method_1 = void* (*)(UIHudVehiclePosController* __this);
        // Method: bum() | Slot: 12945 | Token: 0x886
        using fn_bum = void* (*)(UIHudVehiclePosController* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029170
        using fn_eTransform = void* (*)(UIHudVehiclePosController* __this);
        // Method: set_PreviewCode() | Slot: 2182 | Token: 0xffffffff
        using fn_set_PreviewCode = void* (*)(UIHudVehiclePosController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37234 | Token: 0xffffffff
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudVehiclePosController* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudVehiclePosController* __this);
        // Method: Method_7() | Slot: 65535 | Token: 0xd3ef
        using fn_Method_7 = void* (*)(UIHudVehiclePosController* __this);
        // Method: Method_8() | Slot: 0 | Token: 0x5f23
        using fn_Method_8 = void* (*)(UIHudVehiclePosController* __this);
        // Method: imState() | Slot: 35349 | Token: 0x2c3b80
        using fn_imState = void* (*)(UIHudVehiclePosController* __this);
        // Method: Method_10() | Slot: 24355 | Token: 0xffff
        using fn_Method_10 = void* (*)(UIHudVehiclePosController* __this);
        // Method: bum() | Slot: 15284 | Token: 0x886
        using fn_bum = void* (*)(UIHudVehiclePosController* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029178
        using fn_eTransform = void* (*)(UIHudVehiclePosController* __this);
        // Method: set_WorkshopDetailWndTab() | Slot: 2182 | Token: 0xffffffff
        using fn_set_WorkshopDetailWndTab = void* (*)(UIHudVehiclePosController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37242 | Token: 0x17869
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudVehiclePosController* __this);
    };

    // TypeDefIndex: 29129 | Original: COW.HUD.UIHudVehicleAsMissileTargetControllerBase | Token: 0x20071ca
    struct UIHudVehicleAsMissileTargetControllerBase : Il2Cpp::Object {
        // Fields (2)
        void* m_BindMissiles; // m_BindMissiles | Token: 0x403901f
        void* m_AimTarget; // m_AimTarget | Token: 0x4039020

        // Methods (8)
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudVehicleAsMissileTargetControllerBase* __this);
        // Method: Method_1() | Slot: 65535 | Token: 0x127f5
        using fn_Method_1 = void* (*)(UIHudVehicleAsMissileTargetControllerBase* __this);
        // Method: Method_2() | Slot: 0 | Token: 0x5f23
        using fn_Method_2 = void* (*)(UIHudVehicleAsMissileTargetControllerBase* __this);
        // Method: Method_3() | Slot: 52762 | Token: 0x443399
        using fn_Method_3 = void* (*)(UIHudVehicleAsMissileTargetControllerBase* __this);
        // Method: Method_4() | Slot: 24355 | Token: 0xffff
        using fn_Method_4 = void* (*)(UIHudVehicleAsMissileTargetControllerBase* __this);
        // Method: () | Slot: 13255 | Token: 0x886
        using fn_unnamed = void* (*)(UIHudVehicleAsMissileTargetControllerBase* __this);
        // Method: eTransform(void* value) | Slot: 65535 | Token: 0x6029180
        using fn_eTransform = void* (*)(UIHudVehicleAsMissileTargetControllerBase* __this, void* value);
        // Method: GetSubscribeRecommendEnabled() | Slot: 150 | Token: 0xffffffff
        using fn_GetSubscribeRecommendEnabled = void* (*)(UIHudVehicleAsMissileTargetControllerBase* __this);
    };

    // TypeDefIndex: 29131 | Original: COW.HUD.UIHudWhiteScreenController | Token: 0x20071cb
    struct UIHudWhiteScreenController : Il2Cpp::Object {
        // Fields (11)
        void* ReleaseTexOnHide; // ReleaseTexOnHide | Token: 0x4039021
        void* TmpRenderTex; // TmpRenderTex | Token: 0x4039022
        void* m_View; // m_View | Token: 0x4039023
        void* m_TweenAlpha; // m_TweenAlpha | Token: 0x4039024
        void* m_TweenScreenAlpha; // m_TweenScreenAlpha | Token: 0x4039025
        void* m_Coroutine; // m_Coroutine | Token: 0x4039026
        void* m_Delegate; // m_Delegate | Token: 0x4039027
        void* m_EndTime; // m_EndTime | Token: 0x4039028
        void* m_AudioRes; // m_AudioRes | Token: 0x4039029
        void* m_RenderTexture; // m_RenderTexture | Token: 0x403902a
        void* m_RenderCam; // m_RenderCam | Token: 0x403902b

        // Methods (17)
        // Method: GetExchangeCurrencySubType() | Slot: 37250 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudWhiteScreenController* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(UIHudWhiteScreenController* __this);
        // Method: Method_2() | Slot: 30831 | Token: 0x12545
        using fn_Method_2 = void* (*)(UIHudWhiteScreenController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f23
        using fn_Method_3 = void* (*)(UIHudWhiteScreenController* __this);
        // Method: Method_4() | Slot: 27076 | Token: 0x443465
        using fn_Method_4 = void* (*)(UIHudWhiteScreenController* __this);
        // Method: Method_5() | Slot: 24355 | Token: 0xffff
        using fn_Method_5 = void* (*)(UIHudWhiteScreenController* __this);
        // Method: bum() | Slot: 13481 | Token: 0x81
        using fn_bum = void* (*)(UIHudWhiteScreenController* __this);
        // Method: eTransform(void* moveUp, void* newHeight) | Slot: 65535 | Token: 0x6029188
        using fn_eTransform = void* (*)(UIHudWhiteScreenController* __this, void* moveUp, void* newHeight);
        // Method: LogEventBegin() | Slot: 129 | Token: 0xffffffff
        using fn_LogEventBegin = void* (*)(UIHudWhiteScreenController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37258 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UIHudWhiteScreenController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UIHudWhiteScreenController* __this);
        // Method: Method_11() | Slot: 65535 | Token: 0xe007
        using fn_Method_11 = void* (*)(UIHudWhiteScreenController* __this);
        // Method: Method_12() | Slot: 0 | Token: 0x5f23
        using fn_Method_12 = void* (*)(UIHudWhiteScreenController* __this);
        // Method: Method_13(void* priority) | Slot: 9541 | Token: 0x443557
        using fn_Method_13 = void* (*)(UIHudWhiteScreenController* __this, void* priority);
        // Method: Method_14() | Slot: 24355 | Token: 0xffff
        using fn_Method_14 = void* (*)(UIHudWhiteScreenController* __this);
        // Method: bum() | Slot: 13744 | Token: 0x86
        using fn_bum = void* (*)(UIHudWhiteScreenController* __this);
        // Method: eTransform(void* enterOrthographic) | Slot: 65535 | Token: 0x6029190
        using fn_eTransform = void* (*)(UIHudWhiteScreenController* __this, void* enterOrthographic);
    };

    // TypeDefIndex: 29132 | Original: COW.HUD.UISPHudMatchResultController | Token: 0x20071cd
    struct UISPHudMatchResultController : Il2Cpp::Object {
        // Fields (10)
        void* SOLO_TOP_COUNT; // SOLO_TOP_COUNT | Token: 0x4039031
        void* DUO_TOP_COUNT; // DUO_TOP_COUNT | Token: 0x4039032
        void* QUAD_TOP_COUNT; // QUAD_TOP_COUNT | Token: 0x4039033
        void* m_View; // m_View | Token: 0x4039034
        void* m_CurrentGroupMode; // m_CurrentGroupMode | Token: 0x4039035
        void* m_TopCount; // m_TopCount | Token: 0x4039036
        void* m_OriginalScrollViewHeight; // m_OriginalScrollViewHeight | Token: 0x4039037
        void* m_OriginalScrollViewYPosition; // m_OriginalScrollViewYPosition | Token: 0x4039038
        void* m_RealScrollViewHeight; // m_RealScrollViewHeight | Token: 0x4039039
        void* m_IsScrollViewMoving; // m_IsScrollViewMoving | Token: 0x403903a

        // Methods (16)
        // Method: Method_0() | Slot: 24355 | Token: 0xffff
        using fn_Method_0 = void* (*)(UISPHudMatchResultController* __this);
        // Method: t() | Slot: 13954 | Token: 0x86
        using fn_t = void* (*)(UISPHudMatchResultController* __this);
        // Method: eTransform() | Slot: 65535 | Token: 0x6029198
        using fn_eTransform = void* (*)(UISPHudMatchResultController* __this);
        // Method: CheckSearchDuringCD() | Slot: 134 | Token: 0xffffffff
        using fn_CheckSearchDuringCD = void* (*)(UISPHudMatchResultController* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 37274 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(UISPHudMatchResultController* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(UISPHudMatchResultController* __this);
        // Method: Method_6() | Slot: 30839 | Token: 0x12545
        using fn_Method_6 = void* (*)(UISPHudMatchResultController* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x5f23
        using fn_Method_7 = void* (*)(UISPHudMatchResultController* __this);
        // Method: e(void* priority) | Slot: 9541 | Token: 0x443713
        using fn_e = void* (*)(UISPHudMatchResultController* __this, void* priority);
        // Method: Method_9() | Slot: 24355 | Token: 0x3ffff
        using fn_Method_9 = void* (*)(UISPHudMatchResultController* __this);
        // Method: bum() | Slot: 14191 | Token: 0x81
        using fn_bum = void* (*)(UISPHudMatchResultController* __this);
        // Method: eTransform(void* objData, void* attrProto, void* attrWrapMap) | Slot: 65535 | Token: 0x60291a0
        using fn_eTransform = void* (*)(UISPHudMatchResultController* __this, void* objData, void* attrProto, void* attrWrapMap);
        // Method: FillInSceneEditExtraDataToTeleportDoorData() | Slot: 129 | Token: 0xffffffff
        using fn_FillInSceneEditExtraDataToTeleportDoorData = void* (*)(UISPHudMatchResultController* __this);
        // Method: imable() | Slot: 37282 | Token: 0x1788a
        using fn_imable = void* (*)(UISPHudMatchResultController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UISPHudMatchResultController* __this);
        // Method: Method_15() | Slot: 30864 | Token: 0x12545
        using fn_Method_15 = void* (*)(UISPHudMatchResultController* __this);
    };

    // TypeDefIndex: 29133 | Original: COW.HUD.DamageLabelDelayCall | Token: 0x20071ce
    struct DamageLabelDelayCall : Il2Cpp::Object {
        // Fields (3)
        void* ShowDelay; // ShowDelay | Token: 0x403903b
        void* HideDelay; // HideDelay | Token: 0x403903c
        void* DamageGo; // DamageGo | Token: 0x403903d

        // Methods (1)
        // Method: Method_0() | Slot: 0 | Token: 0x5f23
        using fn_Method_0 = void* (*)(DamageLabelDelayCall* __this);
    };

    // TypeDefIndex: 29134 | Original: COW.HUD.UISPHudNameController | Token: 0x20071cf
    struct UISPHudNameController : Il2Cpp::Object {

        // Methods (1)
        // Method: tState(void* priority) | Slot: 9541 | Token: 0x443878
        using fn_tState = void* (*)(UISPHudNameController* __this, void* priority);
    };

    // TypeDefIndex: 29135 | Original: COW.HUD.UISPHudRankListControler | Token: 0x20071d0
    struct UISPHudRankListControler : Il2Cpp::Object {
        // Fields (2)
        void* m_View; // m_View | Token: 0x403903e
        void* m_ItemTransformList; // m_ItemTransformList | Token: 0x403903f

        // Methods (13)
        // Method: Method_0() | Slot: 24355 | Token: 0x3ffff
        using fn_Method_0 = void* (*)(UISPHudRankListControler* __this);
        // Method: bum() | Slot: 14536 | Token: 0x81
        using fn_bum = void* (*)(UISPHudRankListControler* __this);
        // Method: eTransform(void* objectData, void* attrProto, void* attrWrapMap) | Slot: 65535 | Token: 0x60291a8
        using fn_eTransform = void* (*)(UISPHudRankListControler* __this, void* objectData, void* attrProto, void* attrWrapMap);
        // Method: FillInSceneEditExtraDataToSphereTriggerData() | Slot: 129 | Token: 0xffffffff
        using fn_FillInSceneEditExtraDataToSphereTriggerData = void* (*)(UISPHudRankListControler* __this);
        // Method: imable() | Slot: 37290 | Token: 0x178a2
        using fn_imable = void* (*)(UISPHudRankListControler* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UISPHudRankListControler* __this);
        // Method: Method_6() | Slot: 30888 | Token: 0x12545
        using fn_Method_6 = void* (*)(UISPHudRankListControler* __this);
        // Method: Method_7() | Slot: 0 | Token: 0x5f23
        using fn_Method_7 = void* (*)(UISPHudRankListControler* __this);
        // Method: imalEncoder(void* priority) | Slot: 9541 | Token: 0x4439c9
        using fn_imalEncoder = void* (*)(UISPHudRankListControler* __this, void* priority);
        // Method: Method_9() | Slot: 24355 | Token: 0x3ffff
        using fn_Method_9 = void* (*)(UISPHudRankListControler* __this);
        // Method: bum() | Slot: 14877 | Token: 0x81
        using fn_bum = void* (*)(UISPHudRankListControler* __this);
        // Method: eTransform(void* objData, void* attrProto, void* attrWrapMap) | Slot: 65535 | Token: 0x60291b0
        using fn_eTransform = void* (*)(UISPHudRankListControler* __this, void* objData, void* attrProto, void* attrWrapMap);
        // Method: FillInSceneEditExtraDataToMoveObjData() | Slot: 129 | Token: 0xffffffff
        using fn_FillInSceneEditExtraDataToMoveObjData = void* (*)(UISPHudRankListControler* __this);
    };

    // TypeDefIndex: 29136 | Original: COW.HUD.UISPHudRankListItemControler | Token: 0x20071d1
    struct UISPHudRankListItemControler : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x4039040

        // Methods (6)
        // Method: imable() | Slot: 37298 | Token: 0x178ba
        using fn_imable = void* (*)(UISPHudRankListItemControler* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UISPHudRankListItemControler* __this);
        // Method: Method_2() | Slot: 30912 | Token: 0x12545
        using fn_Method_2 = void* (*)(UISPHudRankListItemControler* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f23
        using fn_Method_3 = void* (*)(UISPHudRankListItemControler* __this);
        // Method: startTime(void* priority) | Slot: 9541 | Token: 0x443b20
        using fn_startTime = void* (*)(UISPHudRankListItemControler* __this, void* priority);
        // Method: Method_5() | Slot: 24355 | Token: 0x3ffff
        using fn_Method_5 = void* (*)(UISPHudRankListItemControler* __this);
    };

    // TypeDefIndex: 29137 | Original: COW.HUD.UISPHudResultNormalLiteTeamItemController | Token: 0x20071d2
    struct UISPHudResultNormalLiteTeamItemController : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x4039041

        // Methods (5)
        // Method: bum() | Slot: 15198 | Token: 0x81
        using fn_bum = void* (*)(UISPHudResultNormalLiteTeamItemController* __this);
        // Method: eTransform(void* obj, void* attriProto) | Slot: 65535 | Token: 0x60291b8
        using fn_eTransform = void* (*)(UISPHudResultNormalLiteTeamItemController* __this, void* obj, void* attriProto);
        // Method: BuildSingleOilDrumAttributeProtoBuff() | Slot: 129 | Token: 0xffffffff
        using fn_BuildSingleOilDrumAttributeProtoBuff = void* (*)(UISPHudResultNormalLiteTeamItemController* __this);
        // Method: _WAIT() | Slot: 37306 | Token: 0x178cf
        using fn__WAIT = void* (*)(UISPHudResultNormalLiteTeamItemController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UISPHudResultNormalLiteTeamItemController* __this);
    };

    // TypeDefIndex: 29138 | Original: COW.HUD.UISPHudResultNormalQuadTeamItemController | Token: 0x20071d3
    struct UISPHudResultNormalQuadTeamItemController : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x4039042

        // Methods (5)
        // Method: Method_0() | Slot: 30931 | Token: 0x12545
        using fn_Method_0 = void* (*)(UISPHudResultNormalQuadTeamItemController* __this);
        // Method: Method_1() | Slot: 0 | Token: 0x5f23
        using fn_Method_1 = void* (*)(UISPHudResultNormalQuadTeamItemController* __this);
        // Method: m_recordRT(void* priority) | Slot: 9541 | Token: 0x443c3c
        using fn_m_recordRT = void* (*)(UISPHudResultNormalQuadTeamItemController* __this, void* priority);
        // Method: Method_3() | Slot: 24355 | Token: 0x2ffff
        using fn_Method_3 = void* (*)(UISPHudResultNormalQuadTeamItemController* __this);
        // Method: bum() | Slot: 15482 | Token: 0x81
        using fn_bum = void* (*)(UISPHudResultNormalQuadTeamItemController* __this);
    };

    // TypeDefIndex: 29139 | Original: COW.HUD.UISPHudResultNormalTeamItemController | Token: 0x20071d4
    struct UISPHudResultNormalTeamItemController : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x4039043

        // Methods (5)
        // Method: eTransform(void* obj, void* attriProto) | Slot: 65535 | Token: 0x60291c0
        using fn_eTransform = void* (*)(UISPHudResultNormalTeamItemController* __this, void* obj, void* attriProto);
        // Method: BuildScaleItemAttributeProtoBuff() | Slot: 129 | Token: 0xffffffff
        using fn_BuildScaleItemAttributeProtoBuff = void* (*)(UISPHudResultNormalTeamItemController* __this);
        // Method: _WAIT() | Slot: 37314 | Token: 0x178df
        using fn__WAIT = void* (*)(UISPHudResultNormalTeamItemController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UISPHudResultNormalTeamItemController* __this);
        // Method: Method_4() | Slot: 30947 | Token: 0x12545
        using fn_Method_4 = void* (*)(UISPHudResultNormalTeamItemController* __this);
    };

    // TypeDefIndex: 29140 | Original: COW.HUD.UISPHudResultPlayerItemController | Token: 0x20071d5
    struct UISPHudResultPlayerItemController : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x4039044

        // Methods (5)
        // Method: Method_0() | Slot: 0 | Token: 0x5f23
        using fn_Method_0 = void* (*)(UISPHudResultPlayerItemController* __this);
        // Method: fCamera(void* priority) | Slot: 9541 | Token: 0x443d5c
        using fn_fCamera = void* (*)(UISPHudResultPlayerItemController* __this, void* priority);
        // Method: Method_2() | Slot: 24355 | Token: 0x2ffff
        using fn_Method_2 = void* (*)(UISPHudResultPlayerItemController* __this);
        // Method: bum() | Slot: 15780 | Token: 0x81
        using fn_bum = void* (*)(UISPHudResultPlayerItemController* __this);
        // Method: eTransform(void* obj, void* attributeProtoData) | Slot: 65535 | Token: 0x60291c8
        using fn_eTransform = void* (*)(UISPHudResultPlayerItemController* __this, void* obj, void* attributeProtoData);
    };

    // TypeDefIndex: 29141 | Original: COW.HUD.UISPHudResultPlayerScoreItemController | Token: 0x20071d6
    struct UISPHudResultPlayerScoreItemController : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x4039045

        // Methods (5)
        // Method: BuildPointLightProtoDataFromObject() | Slot: 129 | Token: 0xffffffff
        using fn_BuildPointLightProtoDataFromObject = void* (*)(UISPHudResultPlayerScoreItemController* __this);
        // Method: _WAIT() | Slot: 37322 | Token: 0x178ef
        using fn__WAIT = void* (*)(UISPHudResultPlayerScoreItemController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UISPHudResultPlayerScoreItemController* __this);
        // Method: Method_3() | Slot: 30963 | Token: 0x12545
        using fn_Method_3 = void* (*)(UISPHudResultPlayerScoreItemController* __this);
        // Method: Method_4() | Slot: 0 | Token: 0x5f23
        using fn_Method_4 = void* (*)(UISPHudResultPlayerScoreItemController* __this);
    };

    // TypeDefIndex: 29142 | Original: COW.HUD.UISPHudResultTopLiteTeamItemController | Token: 0x20071d7
    struct UISPHudResultTopLiteTeamItemController : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x4039046

        // Methods (5)
        // Method: dCameras(void* priority) | Slot: 9541 | Token: 0x443e5e
        using fn_dCameras = void* (*)(UISPHudResultTopLiteTeamItemController* __this, void* priority);
        // Method: Method_1() | Slot: 24355 | Token: 0x2ffff
        using fn_Method_1 = void* (*)(UISPHudResultTopLiteTeamItemController* __this);
        // Method: bum() | Slot: 16033 | Token: 0x81
        using fn_bum = void* (*)(UISPHudResultTopLiteTeamItemController* __this);
        // Method: eTransform(void* obj, void* attriProto) | Slot: 65535 | Token: 0x60291d0
        using fn_eTransform = void* (*)(UISPHudResultTopLiteTeamItemController* __this, void* obj, void* attriProto);
        // Method: BuildInstacneGeneratorProtoDataFromObject() | Slot: 129 | Token: 0xffffffff
        using fn_BuildInstacneGeneratorProtoDataFromObject = void* (*)(UISPHudResultTopLiteTeamItemController* __this);
    };

    // TypeDefIndex: 29143 | Original: COW.HUD.UISPHudResultTopQuadTeamItemController | Token: 0x20071d8
    struct UISPHudResultTopQuadTeamItemController : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x4039047

        // Methods (5)
        // Method: _WAIT() | Slot: 37330 | Token: 0x178fe
        using fn__WAIT = void* (*)(UISPHudResultTopQuadTeamItemController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UISPHudResultTopQuadTeamItemController* __this);
        // Method: Method_2() | Slot: 65535 | Token: 0x8d4c
        using fn_Method_2 = void* (*)(UISPHudResultTopQuadTeamItemController* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f23
        using fn_Method_3 = void* (*)(UISPHudResultTopQuadTeamItemController* __this);
        // Method: jectedManagers() | Slot: 54255 | Token: 0x443f80
        using fn_jectedManagers = void* (*)(UISPHudResultTopQuadTeamItemController* __this);
    };

    // TypeDefIndex: 29144 | Original: COW.HUD.UISPHudResultTopTeamItemController | Token: 0x20071d9
    struct UISPHudResultTopTeamItemController : Il2Cpp::Object {
        // Fields (1)
        void* m_View; // m_View | Token: 0x4039048

        // Methods (6)
        // Method: Method_0() | Slot: 24355 | Token: 0x3ffff
        using fn_Method_0 = void* (*)(UISPHudResultTopTeamItemController* __this);
        // Method: t() | Slot: 16285 | Token: 0x86
        using fn_t = void* (*)(UISPHudResultTopTeamItemController* __this);
        // Method: eTransform(void* slotID, void* type) | Slot: 65535 | Token: 0x60291d8
        using fn_eTransform = void* (*)(UISPHudResultTopTeamItemController* __this, void* slotID, void* type);
        // Method: IsToxicWordsResult() | Slot: 129 | Token: 0xffffffff
        using fn_IsToxicWordsResult = void* (*)(UISPHudResultTopTeamItemController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37338 | Token: 0x1790b
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UISPHudResultTopTeamItemController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UISPHudResultTopTeamItemController* __this);
    };

    // TypeDefIndex: 29145 | Original: COW.HUD.UIHudVerticlePlayerHPDamageLabelParam | Token: 0x20071da
    struct UIHudVerticlePlayerHPDamageLabelParam : Il2Cpp::Object {
        // Fields (3)
        void* DamageLabel; // DamageLabel | Token: 0x4039049
        void* TweenPosition; // TweenPosition | Token: 0x403904a
        void* TweenAlpha; // TweenAlpha | Token: 0x403904b

        // Methods (1)
        // Method: Method_0() | Slot: 30990 | Token: 0xd3ef
        using fn_Method_0 = void* (*)(UIHudVerticlePlayerHPDamageLabelParam* __this);
    };

    // TypeDefIndex: 29148 | Original: COW.HUD.UIHudVerticlePlayerHPController | Token: 0x20071db
    struct UIHudVerticlePlayerHPController : Il2Cpp::Object {
        // Fields (18)
        void* m_View; // m_View | Token: 0x403904c
        void* VPlayer; // VPlayer | Token: 0x403904d
        void* m_TeammateLabelColor; // m_TeammateLabelColor | Token: 0x403904e
        void* m_EnemyLabelColor; // m_EnemyLabelColor | Token: 0x403904f
        void* m_TeammateHpIcon; // m_TeammateHpIcon | Token: 0x4039050
        void* m_EnemyHpIcon; // m_EnemyHpIcon | Token: 0x4039051
        void* m_MaxDamageLabelCount; // m_MaxDamageLabelCount | Token: 0x4039052
        void* m_DamageLabelList; // m_DamageLabelList | Token: 0x4039053
        void* m_DamageLabelLifeTimeList; // m_DamageLabelLifeTimeList | Token: 0x4039054
        void* m_CurLabelIndex; // m_CurLabelIndex | Token: 0x4039055
        void* m_DamageLabelLifeTime; // m_DamageLabelLifeTime | Token: 0x4039056
        void* m_HpChangedCor; // m_HpChangedCor | Token: 0x4039057
        void* m_HpChangeAnimTime; // m_HpChangeAnimTime | Token: 0x4039058
        void* m_HpYellowShineThreshold; // m_HpYellowShineThreshold | Token: 0x4039059
        void* m_HpRedShineThreshold; // m_HpRedShineThreshold | Token: 0x403905a
        void* m_BulletLifeList; // m_BulletLifeList | Token: 0x403905b
        void* m_PerBulletLife; // m_PerBulletLife | Token: 0x403905c
        void* m_DamageSoundId; // m_DamageSoundId | Token: 0x403905d

        // Methods (20)
        // Method: Method_0() | Slot: 0 | Token: 0x5f23
        using fn_Method_0 = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: () | Slot: 54255 | Token: 0x444006
        using fn_unnamed = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: Method_2() | Slot: 24355 | Token: 0x2ffff
        using fn_Method_2 = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: g() | Slot: 16415 | Token: 0x81
        using fn_g = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: eTransform(void* dirtyPic, void* bLink) | Slot: 65535 | Token: 0x60291e0
        using fn_eTransform = void* (*)(UIHudVerticlePlayerHPController* __this, void* dirtyPic, void* bLink);
        // Method: GetReviewResultByWebAduit() | Slot: 129 | Token: 0xffffffff
        using fn_GetReviewResultByWebAduit = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: _WAIT() | Slot: 37346 | Token: 0x1791a
        using fn__WAIT = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: Method_8() | Slot: 31006 | Token: 0xa52f
        using fn_Method_8 = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: Method_9() | Slot: 0 | Token: 0x5f23
        using fn_Method_9 = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: meras() | Slot: 54255 | Token: 0x4440a7
        using fn_meras = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: Method_11() | Slot: 24355 | Token: 0x1ffff
        using fn_Method_11 = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: g() | Slot: 16610 | Token: 0x81
        using fn_g = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: eTransform(void* word) | Slot: 65535 | Token: 0x60291e8
        using fn_eTransform = void* (*)(UIHudVerticlePlayerHPController* __this, void* word);
        // Method: GetWebAduitPos() | Slot: 129 | Token: 0xffffffff
        using fn_GetWebAduitPos = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: <OnVideoMuxerEnd>b__70_0() | Slot: 37354 | Token: 0x17927
        using fn__OnVideoMuxerEnd_b__70_0 = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: Code() | Slot: 65535 | Token: 0x8000000
        using fn_Code = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: Method_17() | Slot: 31019 | Token: 0xd3ef
        using fn_Method_17 = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: Method_18() | Slot: 0 | Token: 0x5f23
        using fn_Method_18 = void* (*)(UIHudVerticlePlayerHPController* __this);
        // Method: dLowerCameraPEs() | Slot: 15485 | Token: 0x44417d
        using fn_dLowerCameraPEs = void* (*)(UIHudVerticlePlayerHPController* __this);
    };

} // namespace COW_HUD
