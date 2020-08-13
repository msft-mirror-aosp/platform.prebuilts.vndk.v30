#ifndef HIDL_GENERATED_ANDROID_HARDWARE_WIFI_OFFLOAD_V1_0_BPHWOFFLOAD_H
#define HIDL_GENERATED_ANDROID_HARDWARE_WIFI_OFFLOAD_V1_0_BPHWOFFLOAD_H

#include <hidl/HidlTransportSupport.h>

#include <android/hardware/wifi/offload/1.0/IHwOffload.h>

namespace android {
namespace hardware {
namespace wifi {
namespace offload {
namespace V1_0 {

struct BpHwOffload : public ::android::hardware::BpInterface<IOffload>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwOffload(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef IOffload Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::android::hardware::wifi::offload::V1_0::IOffload follow.
    static ::android::hardware::Return<void>  _hidl_configureScans(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::wifi::offload::V1_0::ScanParam& param, const ::android::hardware::wifi::offload::V1_0::ScanFilter& filter, configureScans_cb _hidl_cb);
    static ::android::hardware::Return<void>  _hidl_getScanStats(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, getScanStats_cb _hidl_cb);
    static ::android::hardware::Return<void>  _hidl_subscribeScanResults(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint32_t delayMs, subscribeScanResults_cb _hidl_cb);
    static ::android::hardware::Return<void>  _hidl_unsubscribeScanResults(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_setEventCallback(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<::android::hardware::wifi::offload::V1_0::IOffloadCallback>& cb);

    // Methods from ::android::hardware::wifi::offload::V1_0::IOffload follow.
    ::android::hardware::Return<void> configureScans(const ::android::hardware::wifi::offload::V1_0::ScanParam& param, const ::android::hardware::wifi::offload::V1_0::ScanFilter& filter, configureScans_cb _hidl_cb) override;
    ::android::hardware::Return<void> getScanStats(getScanStats_cb _hidl_cb) override;
    ::android::hardware::Return<void> subscribeScanResults(uint32_t delayMs, subscribeScanResults_cb _hidl_cb) override;
    ::android::hardware::Return<void> unsubscribeScanResults() override;
    ::android::hardware::Return<void> setEventCallback(const ::android::sp<::android::hardware::wifi::offload::V1_0::IOffloadCallback>& cb) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;
    ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;
    ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;
    ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;
    ::android::hardware::Return<void> setHALInstrumentation() override;
    ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;
    ::android::hardware::Return<void> ping() override;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;
    ::android::hardware::Return<void> notifySyspropsChanged() override;
    ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;

private:
    std::mutex _hidl_mMutex;
    std::vector<::android::sp<::android::hardware::hidl_binder_death_recipient>> _hidl_mDeathRecipients;
};

}  // namespace V1_0
}  // namespace offload
}  // namespace wifi
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_WIFI_OFFLOAD_V1_0_BPHWOFFLOAD_H
