#ifndef HIDL_GENERATED_ANDROID_HIDL_ALLOCATOR_V1_0_BPHWALLOCATOR_H
#define HIDL_GENERATED_ANDROID_HIDL_ALLOCATOR_V1_0_BPHWALLOCATOR_H

#include <hidl/HidlTransportSupport.h>

#include <android/hidl/allocator/1.0/IHwAllocator.h>

namespace android {
namespace hidl {
namespace allocator {
namespace V1_0 {

struct BpHwAllocator : public ::android::hardware::BpInterface<IAllocator>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwAllocator(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef IAllocator Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::android::hidl::allocator::V1_0::IAllocator follow.
    static ::android::hardware::Return<void>  _hidl_allocate(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t size, allocate_cb _hidl_cb);
    static ::android::hardware::Return<void>  _hidl_batchAllocate(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint64_t size, uint64_t count, batchAllocate_cb _hidl_cb);

    // Methods from ::android::hidl::allocator::V1_0::IAllocator follow.
    ::android::hardware::Return<void> allocate(uint64_t size, allocate_cb _hidl_cb) override;
    ::android::hardware::Return<void> batchAllocate(uint64_t size, uint64_t count, batchAllocate_cb _hidl_cb) override;

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
}  // namespace allocator
}  // namespace hidl
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HIDL_ALLOCATOR_V1_0_BPHWALLOCATOR_H
