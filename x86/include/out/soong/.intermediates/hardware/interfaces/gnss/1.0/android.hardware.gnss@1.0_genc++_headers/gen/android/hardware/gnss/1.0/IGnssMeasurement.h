#ifndef HIDL_GENERATED_ANDROID_HARDWARE_GNSS_V1_0_IGNSSMEASUREMENT_H
#define HIDL_GENERATED_ANDROID_HARDWARE_GNSS_V1_0_IGNSSMEASUREMENT_H

#include <android/hardware/gnss/1.0/IGnssMeasurementCallback.h>
#include <android/hidl/base/1.0/IBase.h>

#include <android/hidl/manager/1.0/IServiceNotification.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace android {
namespace hardware {
namespace gnss {
namespace V1_0 {

/**
 * Extended interface for GNSS Measurements support.
 */
struct IGnssMeasurement : public ::android::hidl::base::V1_0::IBase {
    /**
     * Type tag for use in template logic that indicates this is a 'pure' class.
     */
    typedef ::android::hardware::details::i_tag _hidl_tag;

    /**
     * Fully qualified interface name: "android.hardware.gnss@1.0::IGnssMeasurement"
     */
    static const char* descriptor;

    // Forward declaration for forward reference support:
    enum class GnssMeasurementStatus : int32_t;

    enum class GnssMeasurementStatus : int32_t {
        SUCCESS = 0,
        ERROR_ALREADY_INIT = -100 /* -100 */,
        ERROR_GENERIC = -101 /* -101 */,
    };

    /**
     * Returns whether this object's implementation is outside of the current process.
     */
    virtual bool isRemote() const override { return false; }

    /**
     * Initializes the interface and registers the callback routines with the HAL.
     * After a successful call to 'setCallback' the HAL must begin to provide updates at
     * an average output rate of 1Hz (occasional
     * intra-measurement time offsets in the range from 0-2000msec can be
     * tolerated.)
     *
     * @param callback Handle to GnssMeasurement callback interface.
     *
     * @return initRet Returns SUCCESS if successful.
     * Returns ERROR_ALREADY_INIT if a callback has already been
     * registered without a corresponding call to 'close'.
     * Returns ERROR_GENERIC for any other error. The HAL must
     * not generate any other updates upon returning this error code.
     */
    virtual ::android::hardware::Return<::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus> setCallback(const ::android::sp<::android::hardware::gnss::V1_0::IGnssMeasurementCallback>& callback) = 0;

    /**
     * Stops updates from the HAL, and unregisters the callback routines.
     * After a call to close(), the previously registered callbacks must be
     * considered invalid by the HAL.
     * If close() is invoked without a previous setCallback, this function must perform
     * no work.
     */
    virtual ::android::hardware::Return<void> close() = 0;

    /**
     * Return callback for interfaceChain
     */
    using interfaceChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& descriptors)>;
    /*
     * Provides run-time type information for this object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceChain on an IChild object must yield the following:
     *     ["android.hardware.foo@1.0::IChild",
     *      "android.hardware.foo@1.0::IParent"
     *      "android.hidl.base@1.0::IBase"]
     *
     * @return descriptors a vector of descriptors of the run-time type of the
     *         object.
     */
    virtual ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;

    /*
     * Emit diagnostic information to the given file.
     *
     * Optionally overriden.
     *
     * @param fd      File descriptor to dump data to.
     *                Must only be used for the duration of this call.
     * @param options Arguments for debugging.
     *                Must support empty for default debug information.
     */
    virtual ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;

    /**
     * Return callback for interfaceDescriptor
     */
    using interfaceDescriptor_cb = std::function<void(const ::android::hardware::hidl_string& descriptor)>;
    /*
     * Provides run-time type information for this object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceDescriptor on an IChild object must yield
     *     "android.hardware.foo@1.0::IChild"
     *
     * @return descriptor a descriptor of the run-time type of the
     *         object (the first element of the vector returned by
     *         interfaceChain())
     */
    virtual ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;

    /**
     * Return callback for getHashChain
     */
    using getHashChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_array<uint8_t, 32>>& hashchain)>;
    /*
     * Returns hashes of the source HAL files that define the interfaces of the
     * runtime type information on the object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceChain on an IChild object must yield the following:
     *     [(hash of IChild.hal),
     *      (hash of IParent.hal)
     *      (hash of IBase.hal)].
     *
     * SHA-256 is used as the hashing algorithm. Each hash has 32 bytes
     * according to SHA-256 standard.
     *
     * @return hashchain a vector of SHA-1 digests
     */
    virtual ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;

    /*
     * This method trigger the interface to enable/disable instrumentation based
     * on system property hal.instrumentation.enable.
     */
    virtual ::android::hardware::Return<void> setHALInstrumentation() override;

    /*
     * Registers a death recipient, to be called when the process hosting this
     * interface dies.
     *
     * @param recipient a hidl_death_recipient callback object
     * @param cookie a cookie that must be returned with the callback
     * @return success whether the death recipient was registered successfully.
     */
    virtual ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;

    /*
     * Provides way to determine if interface is running without requesting
     * any functionality.
     */
    virtual ::android::hardware::Return<void> ping() override;

    /**
     * Return callback for getDebugInfo
     */
    using getDebugInfo_cb = std::function<void(const ::android::hidl::base::V1_0::DebugInfo& info)>;
    /*
     * Get debug information on references on this interface.
     * @return info debugging information. See comments of DebugInfo.
     */
    virtual ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;

    /*
     * This method notifies the interface that one or more system properties
     * have changed. The default implementation calls
     * (C++)  report_sysprop_change() in libcutils or
     * (Java) android.os.SystemProperties.reportSyspropChanged,
     * which in turn calls a set of registered callbacks (eg to update trace
     * tags).
     */
    virtual ::android::hardware::Return<void> notifySyspropsChanged() override;

    /*
     * Unregisters the registered death recipient. If this service was registered
     * multiple times with the same exact death recipient, this unlinks the most
     * recently registered one.
     *
     * @param recipient a previously registered hidl_death_recipient callback
     * @return success whether the death recipient was unregistered successfully.
     */
    virtual ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;

    // cast static functions
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::gnss::V1_0::IGnssMeasurement>> castFrom(const ::android::sp<::android::hardware::gnss::V1_0::IGnssMeasurement>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::gnss::V1_0::IGnssMeasurement>> castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError = false);

    // helper methods for interactions with the hwservicemanager
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is currently not available or not in the VINTF manifest on a Trebilized
     * device, this will return nullptr. This is useful when you don't want to block
     * during device boot. If getStub is true, this will try to return an unwrapped
     * passthrough implementation in the same process. This is useful when getting an
     * implementation from the same partition/compilation group.
     *
     * In general, prefer getService(std::string,bool)
     */
    static ::android::sp<IGnssMeasurement> tryGetService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IGnssMeasurement> tryGetService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return tryGetService(str, getStub); }
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IGnssMeasurement> tryGetService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return tryGetService(str, getStub); }
    /**
     * Calls tryGetService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IGnssMeasurement> tryGetService(bool getStub) { return tryGetService("default", getStub); }
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is not in the VINTF manifest on a Trebilized device, this will return
     * nullptr. If the service is not available, this will wait for the service to
     * become available. If the service is a lazy service, this will start the service
     * and return when it becomes available. If getStub is true, this will try to
     * return an unwrapped passthrough implementation in the same process. This is
     * useful when getting an implementation from the same partition/compilation group.
     */
    static ::android::sp<IGnssMeasurement> getService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IGnssMeasurement> getService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return getService(str, getStub); }
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IGnssMeasurement> getService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return getService(str, getStub); }
    /**
     * Calls getService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IGnssMeasurement> getService(bool getStub) { return getService("default", getStub); }
    /**
     * Registers a service with the service manager. For Trebilized devices, the service
     * must also be in the VINTF manifest.
     */
    __attribute__ ((warn_unused_result))::android::status_t registerAsService(const std::string &serviceName="default");
    /**
     * Registers for notifications for when a service is registered.
     */
    static bool registerForNotifications(
            const std::string &serviceName,
            const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification);
};

//
// type declarations for package
//

template<typename>
static inline std::string toString(int32_t o);
static inline std::string toString(::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus o);
static inline void PrintTo(::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus o, ::std::ostream* os);
constexpr int32_t operator|(const ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus lhs, const ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const int32_t lhs, const ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}
constexpr int32_t operator|(const ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}
constexpr int32_t operator&(const ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus lhs, const ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const int32_t lhs, const ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}
constexpr int32_t operator&(const ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}
constexpr int32_t &operator|=(int32_t& v, const ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus e) {
    v |= static_cast<int32_t>(e);
    return v;
}
constexpr int32_t &operator&=(int32_t& v, const ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus e) {
    v &= static_cast<int32_t>(e);
    return v;
}

static inline std::string toString(const ::android::sp<::android::hardware::gnss::V1_0::IGnssMeasurement>& o);

//
// type header definitions for package
//

template<>
inline std::string toString<::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::SUCCESS) == static_cast<int32_t>(::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::SUCCESS)) {
        os += (first ? "" : " | ");
        os += "SUCCESS";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::SUCCESS;
    }
    if ((o & ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::ERROR_ALREADY_INIT) == static_cast<int32_t>(::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::ERROR_ALREADY_INIT)) {
        os += (first ? "" : " | ");
        os += "ERROR_ALREADY_INIT";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::ERROR_ALREADY_INIT;
    }
    if ((o & ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::ERROR_GENERIC) == static_cast<int32_t>(::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::ERROR_GENERIC)) {
        os += (first ? "" : " | ");
        os += "ERROR_GENERIC";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::ERROR_GENERIC;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::SUCCESS) {
        return "SUCCESS";
    }
    if (o == ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::ERROR_ALREADY_INIT) {
        return "ERROR_ALREADY_INIT";
    }
    if (o == ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::ERROR_GENERIC) {
        return "ERROR_GENERIC";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::android::sp<::android::hardware::gnss::V1_0::IGnssMeasurement>& o) {
    std::string os = "[class or subclass of ";
    os += ::android::hardware::gnss::V1_0::IGnssMeasurement::descriptor;
    os += "]";
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}


}  // namespace V1_0
}  // namespace gnss
}  // namespace hardware
}  // namespace android

//
// global type declarations for package
//

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus, 3> hidl_enum_values<::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus> = {
    ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::SUCCESS,
    ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::ERROR_ALREADY_INIT,
    ::android::hardware::gnss::V1_0::IGnssMeasurement::GnssMeasurementStatus::ERROR_GENERIC,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android


#endif  // HIDL_GENERATED_ANDROID_HARDWARE_GNSS_V1_0_IGNSSMEASUREMENT_H
