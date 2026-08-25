#pragma once
#include "Il2CppBase.hpp"

namespace COW_Location {

    // TypeDefIndex: 29305 | Original: COW.Location.GPSLocationData | Token: 0x200727a
    struct GPSLocationData : Il2Cpp::Object {
        // Fields (4)
        void* latitude; // latitude | Token: 0x40392a1
        void* longitude; // longitude | Token: 0x40392a2
        void* accuracy; // accuracy | Token: 0x40392a3
        void* timestamp; // timestamp | Token: 0x40392a4

        // Methods (6)
        // Method: GetExchangeCurrencySubType() | Slot: 38162 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(GPSLocationData* __this);
        // Method: actor() | Slot: 65535 | Token: 0x8000000
        using fn_actor = void* (*)(GPSLocationData* __this);
        // Method: Method_2() | Slot: 31858 | Token: 0x12545
        using fn_Method_2 = void* (*)(GPSLocationData* __this);
        // Method: Method_3() | Slot: 0 | Token: 0x5f48
        using fn_Method_3 = void* (*)(GPSLocationData* __this);
        // Method: Min(void* circlePlane) | Slot: 9541 | Token: 0x44c2d2
        using fn_Min = void* (*)(GPSLocationData* __this, void* circlePlane);
        // Method: Method_5() | Slot: 24392 | Token: 0xffff
        using fn_Method_5 = void* (*)(GPSLocationData* __this);
    };

    // TypeDefIndex: 29309 | Original: COW.Location.GPSManager | Token: 0x200727b
    struct GPSManager : Il2Cpp::Object {
        // Fields (7)
        void* _instance; // _instance | Token: 0x40392a5
        void* _GPSPermissions; // _GPSPermissions | Token: 0x40392a6
        void* m_IsLocating; // m_IsLocating | Token: 0x40392a7
        void* m_SuccessCallbacks; // m_SuccessCallbacks | Token: 0x40392a8
        void* m_ErrorCallbacks; // m_ErrorCallbacks | Token: 0x40392a9
        void* m_LocationCoroutine; // m_LocationCoroutine | Token: 0x40392aa
        void* TOTAL_LOCATION_TIMEOUT; // TOTAL_LOCATION_TIMEOUT | Token: 0x40392ab

        // Methods (12)
        // Method: t() | Slot: 2507 | Token: 0x81
        using fn_t = void* (*)(GPSManager* __this);
        // Method: ResId() | Slot: 11 | Token: 0x6029518
        using fn_ResId = void* (*)(GPSManager* __this);
        // Method: GetHudChangedConfigDic() | Slot: 134 | Token: 0xffffffff
        using fn_GetHudChangedConfigDic = void* (*)(GPSManager* __this);
        // Method: GetExchangeCurrencySubType() | Slot: 38170 | Token: 0xffffffff
        using fn_GetExchangeCurrencySubType = void* (*)(GPSManager* __this);
        // Method: ToString() | Slot: 65535 | Token: 0x8000000
        using fn_ToString = void* (*)(GPSManager* __this);
        // Method: Method_5() | Slot: 65535 | Token: 0x1802
        using fn_Method_5 = void* (*)(GPSManager* __this);
        // Method: Method_6() | Slot: 0 | Token: 0x5f48
        using fn_Method_6 = void* (*)(GPSManager* __this);
        // Method: () | Slot: 54255 | Token: 0x44c388
        using fn_unnamed = void* (*)(GPSManager* __this);
        // Method: Method_8() | Slot: 24392 | Token: 0x1ffff
        using fn_Method_8 = void* (*)(GPSManager* __this);
        // Method: bum() | Slot: 50090 | Token: 0x86
        using fn_bum = void* (*)(GPSManager* __this);
        // Method: ResId() | Slot: 65535 | Token: 0x6029520
        using fn_ResId = void* (*)(GPSManager* __this);
        // Method: GetUploadSettingMD5() | Slot: 134 | Token: 0xffffffff
        using fn_GetUploadSettingMD5 = void* (*)(GPSManager* __this);
    };

} // namespace COW_Location
