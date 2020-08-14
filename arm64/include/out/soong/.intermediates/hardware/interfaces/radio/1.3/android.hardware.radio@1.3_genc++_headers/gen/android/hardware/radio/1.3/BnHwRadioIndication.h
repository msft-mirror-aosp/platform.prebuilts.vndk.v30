#ifndef HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_3_BNHWRADIOINDICATION_H
#define HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_3_BNHWRADIOINDICATION_H

#include <android/hardware/radio/1.3/IHwRadioIndication.h>

namespace android {
namespace hardware {
namespace radio {
namespace V1_3 {

struct BnHwRadioIndication : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwRadioIndication(const ::android::sp<IRadioIndication> &_hidl_impl);
    explicit BnHwRadioIndication(const ::android::sp<IRadioIndication> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwRadioIndication();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    /**
     * The pure class is what this class wraps.
     */
    typedef IRadioIndication Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'native' class.
     */
    typedef ::android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<IRadioIndication> getImpl() { return _hidl_mImpl; }

private:
    // Methods from ::android::hardware::radio::V1_0::IRadioIndication follow.

    // Methods from ::android::hardware::radio::V1_1::IRadioIndication follow.

    // Methods from ::android::hardware::radio::V1_2::IRadioIndication follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IRadioIndication> _hidl_mImpl;
};

}  // namespace V1_3
}  // namespace radio
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_RADIO_V1_3_BNHWRADIOINDICATION_H
