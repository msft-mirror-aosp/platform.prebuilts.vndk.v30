#ifndef HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_CAN_V1_0_BPHWCANBUS_H
#define HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_CAN_V1_0_BPHWCANBUS_H

#include <hidl/HidlTransportSupport.h>

#include <android/hardware/automotive/can/1.0/IHwCanBus.h>

namespace android {
namespace hardware {
namespace automotive {
namespace can {
namespace V1_0 {

struct BpHwCanBus : public ::android::hardware::BpInterface<ICanBus>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwCanBus(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef ICanBus Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::android::hardware::automotive::can::V1_0::ICanBus follow.
    static ::android::hardware::Return<::android::hardware::automotive::can::V1_0::Result>  _hidl_send(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::automotive::can::V1_0::CanMessage& message);
    static ::android::hardware::Return<void>  _hidl_listen(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::hidl_vec<::android::hardware::automotive::can::V1_0::CanMessageFilter>& filter, const ::android::sp<::android::hardware::automotive::can::V1_0::ICanMessageListener>& listener, listen_cb _hidl_cb);
    static ::android::hardware::Return<::android::sp<::android::hardware::automotive::can::V1_0::ICloseHandle>>  _hidl_listenForErrors(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<::android::hardware::automotive::can::V1_0::ICanErrorListener>& listener);

    // Methods from ::android::hardware::automotive::can::V1_0::ICanBus follow.
    ::android::hardware::Return<::android::hardware::automotive::can::V1_0::Result> send(const ::android::hardware::automotive::can::V1_0::CanMessage& message) override;
    ::android::hardware::Return<void> listen(const ::android::hardware::hidl_vec<::android::hardware::automotive::can::V1_0::CanMessageFilter>& filter, const ::android::sp<::android::hardware::automotive::can::V1_0::ICanMessageListener>& listener, listen_cb _hidl_cb) override;
    ::android::hardware::Return<::android::sp<::android::hardware::automotive::can::V1_0::ICloseHandle>> listenForErrors(const ::android::sp<::android::hardware::automotive::can::V1_0::ICanErrorListener>& listener) override;

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
}  // namespace can
}  // namespace automotive
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_CAN_V1_0_BPHWCANBUS_H