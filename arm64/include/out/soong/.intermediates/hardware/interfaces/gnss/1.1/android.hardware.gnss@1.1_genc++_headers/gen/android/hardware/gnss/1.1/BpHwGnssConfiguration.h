#ifndef HIDL_GENERATED_ANDROID_HARDWARE_GNSS_V1_1_BPHWGNSSCONFIGURATION_H
#define HIDL_GENERATED_ANDROID_HARDWARE_GNSS_V1_1_BPHWGNSSCONFIGURATION_H

#include <hidl/HidlTransportSupport.h>

#include <android/hardware/gnss/1.1/IHwGnssConfiguration.h>

namespace android {
namespace hardware {
namespace gnss {
namespace V1_1 {

struct BpHwGnssConfiguration : public ::android::hardware::BpInterface<IGnssConfiguration>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwGnssConfiguration(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef IGnssConfiguration Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::android::hardware::gnss::V1_1::IGnssConfiguration follow.
    static ::android::hardware::Return<bool>  _hidl_setBlacklist(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::hidl_vec<::android::hardware::gnss::V1_1::IGnssConfiguration::BlacklistedSource>& blacklist);

    // Methods from ::android::hardware::gnss::V1_0::IGnssConfiguration follow.
    ::android::hardware::Return<bool> setSuplEs(bool enabled) override;
    ::android::hardware::Return<bool> setSuplVersion(uint32_t version) override;
    ::android::hardware::Return<bool> setSuplMode(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode> mode) override;
    ::android::hardware::Return<bool> setGpsLock(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock> lock) override;
    ::android::hardware::Return<bool> setLppProfile(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile> lppProfile) override;
    ::android::hardware::Return<bool> setGlonassPositioningProtocol(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol> protocol) override;
    ::android::hardware::Return<bool> setEmergencySuplPdn(bool enable) override;

    // Methods from ::android::hardware::gnss::V1_1::IGnssConfiguration follow.
    ::android::hardware::Return<bool> setBlacklist(const ::android::hardware::hidl_vec<::android::hardware::gnss::V1_1::IGnssConfiguration::BlacklistedSource>& blacklist) override;

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

}  // namespace V1_1
}  // namespace gnss
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_GNSS_V1_1_BPHWGNSSCONFIGURATION_H
