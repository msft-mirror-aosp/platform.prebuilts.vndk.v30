#ifndef HIDL_GENERATED_ANDROID_HARDWARE_WIFI_V1_2_IHWWIFICHIPEVENTCALLBACK_H
#define HIDL_GENERATED_ANDROID_HARDWARE_WIFI_V1_2_IHWWIFICHIPEVENTCALLBACK_H

#include <android/hardware/wifi/1.2/IWifiChipEventCallback.h>

#include <android/hardware/wifi/1.0/BnHwWifiChipEventCallback.h>
#include <android/hardware/wifi/1.0/BpHwWifiChipEventCallback.h>
#include <android/hardware/wifi/1.0/hwtypes.h>

#include <hidl/Status.h>
#include <hwbinder/IBinder.h>
#include <hwbinder/Parcel.h>

namespace android {
namespace hardware {
namespace wifi {
namespace V1_2 {
::android::status_t readEmbeddedFromParcel(
        const ::android::hardware::wifi::V1_2::IWifiChipEventCallback::IfaceInfo &obj,
        const ::android::hardware::Parcel &parcel,
        size_t parentHandle,
        size_t parentOffset);

::android::status_t writeEmbeddedToParcel(
        const ::android::hardware::wifi::V1_2::IWifiChipEventCallback::IfaceInfo &obj,
        ::android::hardware::Parcel *parcel,
        size_t parentHandle,
        size_t parentOffset);

::android::status_t readEmbeddedFromParcel(
        const ::android::hardware::wifi::V1_2::IWifiChipEventCallback::RadioModeInfo &obj,
        const ::android::hardware::Parcel &parcel,
        size_t parentHandle,
        size_t parentOffset);

::android::status_t writeEmbeddedToParcel(
        const ::android::hardware::wifi::V1_2::IWifiChipEventCallback::RadioModeInfo &obj,
        ::android::hardware::Parcel *parcel,
        size_t parentHandle,
        size_t parentOffset);

}  // namespace V1_2
}  // namespace wifi
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_WIFI_V1_2_IHWWIFICHIPEVENTCALLBACK_H
