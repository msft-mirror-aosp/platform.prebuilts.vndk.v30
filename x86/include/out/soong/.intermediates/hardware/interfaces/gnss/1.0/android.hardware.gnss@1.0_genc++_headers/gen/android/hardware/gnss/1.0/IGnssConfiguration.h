#ifndef HIDL_GENERATED_ANDROID_HARDWARE_GNSS_V1_0_IGNSSCONFIGURATION_H
#define HIDL_GENERATED_ANDROID_HARDWARE_GNSS_V1_0_IGNSSCONFIGURATION_H

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
 * Interface for passing GNSS configuration info from platform to HAL.
 */
struct IGnssConfiguration : public ::android::hidl::base::V1_0::IBase {
    /**
     * Type tag for use in template logic that indicates this is a 'pure' class.
     */
    typedef ::android::hardware::details::i_tag _hidl_tag;

    /**
     * Fully qualified interface name: "android.hardware.gnss@1.0::IGnssConfiguration"
     */
    static const char* descriptor;

    // Forward declaration for forward reference support:
    enum class SuplMode : uint8_t;
    enum class GpsLock : uint8_t;
    enum class LppProfile : uint8_t;
    enum class GlonassPosProtocol : uint8_t;

    /**
     * Enum which holds the bit masks for SUPL_MODE configuration parameter.
     */
    enum class SuplMode : uint8_t {
        /**
         * Mobile Station Based
         */
        MSB = 1 /* 0x01 */,
        /**
         * Mobile Station Assisted
         */
        MSA = 2 /* 0x02 */,
    };

    /**
     * Enum which holds the bit masks for GPS_LOCK configuration parameter.
     */
    enum class GpsLock : uint8_t {
        /**
         * Lock Mobile Originated GPS functionalitues.
         */
        MO = 1 /* 0x01 */,
        /**
         * Lock Network initiated GPS functionalities.
         */
        NI = 2 /* 0x02 */,
    };

    /**
     * Enum that hold the bit masks for various LTE Positioning Profile settings (LPP_PROFILE
     * configuration parameter). If none of the bits in the enum are set, the default setting is
     * Radio Resource Location Protocol(RRLP).
     */
    enum class LppProfile : uint8_t {
        /**
         * Enable LTE Positioning Protocol user plane
         */
        USER_PLANE = 1 /* 0x01 */,
        /**
         * Enable LTE Positioning Protocol Control plane
         */
        CONTROL_PLANE = 2 /* 0x02 */,
    };

    /**
     * Enum which holds the bit masks for A_GLONASS_POS_PROTOCOL_SELECT
     * configuration parameter.
     */
    enum class GlonassPosProtocol : uint8_t {
        /**
         * Radio Resource Control(RRC) control-plane.
         */
        RRC_CPLANE = 1 /* 0x01 */,
        /**
         * Radio Resource Location user-plane.
         */
        RRLP_CPLANE = 2 /* 0x02 */,
        /**
         * LTE Positioning Protocol User plane
         */
        LPP_UPLANE = 4 /* 0x04 */,
    };

    /**
     * Returns whether this object's implementation is outside of the current process.
     */
    virtual bool isRemote() const override { return false; }

    /**
     * IMPORTANT: GNSS HAL must expect the below methods to be called multiple
     * times. They can be called even when GnssLocationProvider is already
     * constructed and enabled. GNSS HAL must maintain the existing requests
     * for various callbacks regardless the change in configuration data.
     *
     *
     * This method enables or disables NI emergency SUPL restrictions.
     *
     * @param enabled True if the device must only accept NI Emergency SUPL requests when the
     *                     device is truly in emergency mode (e.g. the user has dialed 911, 112,
     *                     etc...)
     *                False if the device must accept NI Emergency SUPL any time they are
     *                      received
     *
     * @return success True if operation was successful.
     */
    virtual ::android::hardware::Return<bool> setSuplEs(bool enabled) = 0;

    /**
     * This method sets the SUPL version requested by Carrier. The GNSS HAL
     * must use this version of the SUPL protocol if supported.
     *
     * @param version SUPL version requested by carrier. This is a bit mask
     * with bits 0:7 representing a service indicator field, bits 8:15
     * representing the minor version and bits 16:23 representing the
     * major version.
     *
     * @return success True if operation was successful.
     */
    virtual ::android::hardware::Return<bool> setSuplVersion(uint32_t version) = 0;

    /**
     * This method sets the SUPL mode.
     *
     * @param mode Bit mask that specifies the SUPL mode which is set with the SuplMode enum.
     *
     * @return success True if operation was successful.
     */
    virtual ::android::hardware::Return<bool> setSuplMode(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode> mode) = 0;

    /**
     * This setting configures how GPS functionalities should be locked when
     * user turns off GPS On setting.
     *
     * @param lock Bitmask that specifies the GPS functionalities to be be
     * locked as per the GpsLock enum.
     *
     * @return success True if operation was successful.
     */
    virtual ::android::hardware::Return<bool> setGpsLock(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock> lock) = 0;

    /**
     * This method sets the LTE Positioning Profile configuration.
     *
     * @param lppProfile Bitmask that specifies the LTE Positioning Profile
     * configuration to be set as per the LppProfile enum.
     *
     * @return success True if operation was successful.
     */
    virtual ::android::hardware::Return<bool> setLppProfile(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile> lppProfile) = 0;

    /**
     * This method selects positioning protocol on A-Glonass system.
     *
     * @param protocol Bitmask that specifies the positioning protocol to be
     * set as per GlonassPosProtocol enum.
     *
     * @return success True if operation was successful.
     */
    virtual ::android::hardware::Return<bool> setGlonassPositioningProtocol(::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol> protocol) = 0;

    /**
     * This method configures which PDN to use.
     *
     * @param enable Use emergency PDN if true and regular PDN if false.
     * @return success True if operation was successful.
     */
    virtual ::android::hardware::Return<bool> setEmergencySuplPdn(bool enable) = 0;

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
    static ::android::hardware::Return<::android::sp<::android::hardware::gnss::V1_0::IGnssConfiguration>> castFrom(const ::android::sp<::android::hardware::gnss::V1_0::IGnssConfiguration>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::gnss::V1_0::IGnssConfiguration>> castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError = false);

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
    static ::android::sp<IGnssConfiguration> tryGetService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IGnssConfiguration> tryGetService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return tryGetService(str, getStub); }
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IGnssConfiguration> tryGetService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return tryGetService(str, getStub); }
    /**
     * Calls tryGetService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IGnssConfiguration> tryGetService(bool getStub) { return tryGetService("default", getStub); }
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is not in the VINTF manifest on a Trebilized device, this will return
     * nullptr. If the service is not available, this will wait for the service to
     * become available. If the service is a lazy service, this will start the service
     * and return when it becomes available. If getStub is true, this will try to
     * return an unwrapped passthrough implementation in the same process. This is
     * useful when getting an implementation from the same partition/compilation group.
     */
    static ::android::sp<IGnssConfiguration> getService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IGnssConfiguration> getService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return getService(str, getStub); }
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IGnssConfiguration> getService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return getService(str, getStub); }
    /**
     * Calls getService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IGnssConfiguration> getService(bool getStub) { return getService("default", getStub); }
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
static inline std::string toString(uint8_t o);
static inline std::string toString(::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode o);
static inline void PrintTo(::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode o, ::std::ostream* os);
constexpr uint8_t operator|(const ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock o);
static inline void PrintTo(::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock o, ::std::ostream* os);
constexpr uint8_t operator|(const ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile o);
static inline void PrintTo(::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile o, ::std::ostream* os);
constexpr uint8_t operator|(const ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol o);
static inline void PrintTo(::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol o, ::std::ostream* os);
constexpr uint8_t operator|(const ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

static inline std::string toString(const ::android::sp<::android::hardware::gnss::V1_0::IGnssConfiguration>& o);

//
// type header definitions for package
//

template<>
inline std::string toString<::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode::MSB) == static_cast<uint8_t>(::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode::MSB)) {
        os += (first ? "" : " | ");
        os += "MSB";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode::MSB;
    }
    if ((o & ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode::MSA) == static_cast<uint8_t>(::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode::MSA)) {
        os += (first ? "" : " | ");
        os += "MSA";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode::MSA;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode::MSB) {
        return "MSB";
    }
    if (o == ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode::MSA) {
        return "MSA";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock::MO) == static_cast<uint8_t>(::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock::MO)) {
        os += (first ? "" : " | ");
        os += "MO";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock::MO;
    }
    if ((o & ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock::NI) == static_cast<uint8_t>(::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock::NI)) {
        os += (first ? "" : " | ");
        os += "NI";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock::NI;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock::MO) {
        return "MO";
    }
    if (o == ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock::NI) {
        return "NI";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile::USER_PLANE) == static_cast<uint8_t>(::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile::USER_PLANE)) {
        os += (first ? "" : " | ");
        os += "USER_PLANE";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile::USER_PLANE;
    }
    if ((o & ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile::CONTROL_PLANE) == static_cast<uint8_t>(::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile::CONTROL_PLANE)) {
        os += (first ? "" : " | ");
        os += "CONTROL_PLANE";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile::CONTROL_PLANE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile::USER_PLANE) {
        return "USER_PLANE";
    }
    if (o == ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile::CONTROL_PLANE) {
        return "CONTROL_PLANE";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::RRC_CPLANE) == static_cast<uint8_t>(::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::RRC_CPLANE)) {
        os += (first ? "" : " | ");
        os += "RRC_CPLANE";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::RRC_CPLANE;
    }
    if ((o & ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::RRLP_CPLANE) == static_cast<uint8_t>(::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::RRLP_CPLANE)) {
        os += (first ? "" : " | ");
        os += "RRLP_CPLANE";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::RRLP_CPLANE;
    }
    if ((o & ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::LPP_UPLANE) == static_cast<uint8_t>(::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::LPP_UPLANE)) {
        os += (first ? "" : " | ");
        os += "LPP_UPLANE";
        first = false;
        flipped |= ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::LPP_UPLANE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::RRC_CPLANE) {
        return "RRC_CPLANE";
    }
    if (o == ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::RRLP_CPLANE) {
        return "RRLP_CPLANE";
    }
    if (o == ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::LPP_UPLANE) {
        return "LPP_UPLANE";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::android::sp<::android::hardware::gnss::V1_0::IGnssConfiguration>& o) {
    std::string os = "[class or subclass of ";
    os += ::android::hardware::gnss::V1_0::IGnssConfiguration::descriptor;
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
template<> inline constexpr std::array<::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode, 2> hidl_enum_values<::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode> = {
    ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode::MSB,
    ::android::hardware::gnss::V1_0::IGnssConfiguration::SuplMode::MSA,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock, 2> hidl_enum_values<::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock> = {
    ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock::MO,
    ::android::hardware::gnss::V1_0::IGnssConfiguration::GpsLock::NI,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile, 2> hidl_enum_values<::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile> = {
    ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile::USER_PLANE,
    ::android::hardware::gnss::V1_0::IGnssConfiguration::LppProfile::CONTROL_PLANE,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol, 3> hidl_enum_values<::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol> = {
    ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::RRC_CPLANE,
    ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::RRLP_CPLANE,
    ::android::hardware::gnss::V1_0::IGnssConfiguration::GlonassPosProtocol::LPP_UPLANE,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android


#endif  // HIDL_GENERATED_ANDROID_HARDWARE_GNSS_V1_0_IGNSSCONFIGURATION_H
