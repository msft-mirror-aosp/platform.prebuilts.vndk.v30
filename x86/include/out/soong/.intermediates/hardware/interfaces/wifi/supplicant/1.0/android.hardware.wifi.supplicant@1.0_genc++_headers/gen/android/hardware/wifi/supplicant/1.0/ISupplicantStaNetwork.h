#ifndef HIDL_GENERATED_ANDROID_HARDWARE_WIFI_SUPPLICANT_V1_0_ISUPPLICANTSTANETWORK_H
#define HIDL_GENERATED_ANDROID_HARDWARE_WIFI_SUPPLICANT_V1_0_ISUPPLICANTSTANETWORK_H

#include <android/hardware/wifi/supplicant/1.0/ISupplicantNetwork.h>
#include <android/hardware/wifi/supplicant/1.0/ISupplicantStaNetworkCallback.h>
#include <android/hardware/wifi/supplicant/1.0/types.h>

#include <android/hidl/manager/1.0/IServiceNotification.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace android {
namespace hardware {
namespace wifi {
namespace supplicant {
namespace V1_0 {

/**
 * Interface exposed by the supplicant for each station mode network
 * configuration it controls.
 */
struct ISupplicantStaNetwork : public ::android::hardware::wifi::supplicant::V1_0::ISupplicantNetwork {
    /**
     * Type tag for use in template logic that indicates this is a 'pure' class.
     */
    typedef ::android::hardware::details::i_tag _hidl_tag;

    /**
     * Fully qualified interface name: "android.hardware.wifi.supplicant@1.0::ISupplicantStaNetwork"
     */
    static const char* descriptor;

    // Forward declaration for forward reference support:
    enum class ParamSizeLimits : uint32_t;
    enum class KeyMgmtMask : uint32_t;
    enum class ProtoMask : uint32_t;
    enum class AuthAlgMask : uint32_t;
    enum class GroupCipherMask : uint32_t;
    enum class PairwiseCipherMask : uint32_t;
    enum class EapMethod : uint32_t;
    enum class EapPhase2Method : uint32_t;
    struct NetworkResponseEapSimGsmAuthParams;
    struct NetworkResponseEapSimUmtsAuthParams;

    /**
     * Size limits for some of the params used in this interface.
     */
    enum class ParamSizeLimits : uint32_t {
        /**
         * Max length of SSID param.
         */
        SSID_MAX_LEN_IN_BYTES = 32u,
        /**
         * Min length of PSK passphrase param.
         */
        PSK_PASSPHRASE_MIN_LEN_IN_BYTES = 8u,
        /**
         * Max length of PSK passphrase param.
         */
        PSK_PASSPHRASE_MAX_LEN_IN_BYTES = 63u,
        /**
         * Max number of WEP keys param.
         */
        WEP_KEYS_MAX_NUM = 4u,
        /**
         * Length of each WEP40 keys param.
         */
        WEP40_KEY_LEN_IN_BYTES = 5u,
        /**
         * Length of each WEP104 keys param.
         */
        WEP104_KEY_LEN_IN_BYTES = 13u,
    };

    /**
     * Possble mask of values for KeyMgmt param.
     */
    enum class KeyMgmtMask : uint32_t {
        WPA_EAP = 1u /* 1 << 0 */,
        WPA_PSK = 2u /* 1 << 1 */,
        NONE = 4u /* 1 << 2 */,
        IEEE8021X = 8u /* 1 << 3 */,
        FT_EAP = 32u /* 1 << 5 */,
        FT_PSK = 64u /* 1 << 6 */,
        OSEN = 32768u /* 1 << 15 */,
    };

    /**
     * Possble mask of values for Proto param.
     */
    enum class ProtoMask : uint32_t {
        WPA = 1u /* 1 << 0 */,
        RSN = 2u /* 1 << 1 */,
        /**
         * Unused 1 << 2
         */
        OSEN = 8u /* 1 << 3 */,
    };

    /**
     * Possble mask of values for AuthAlg param.
     */
    enum class AuthAlgMask : uint32_t {
        OPEN = 1u /* 1 << 0 */,
        SHARED = 2u /* 1 << 1 */,
        LEAP = 4u /* 1 << 2 */,
    };

    /**
     * Possble mask of values for GroupCipher param.
     */
    enum class GroupCipherMask : uint32_t {
        WEP40 = 2u /* 1 << 1 */,
        WEP104 = 4u /* 1 << 2 */,
        TKIP = 8u /* 1 << 3 */,
        CCMP = 16u /* 1 << 4 */,
        GTK_NOT_USED = 16384u /* 1 << 14 */,
    };

    /**
     * Possble mask of values for PairwiseCipher param.
     */
    enum class PairwiseCipherMask : uint32_t {
        NONE = 1u /* 1 << 0 */,
        TKIP = 8u /* 1 << 3 */,
        CCMP = 16u /* 1 << 4 */,
    };

    /**
     * Possble values for EapMethod param.
     */
    enum class EapMethod : uint32_t {
        PEAP = 0u,
        TLS = 1u,
        TTLS = 2u,
        PWD = 3u,
        SIM = 4u,
        AKA = 5u,
        AKA_PRIME = 6u,
        WFA_UNAUTH_TLS = 7u,
    };

    /**
     * Possble values for Phase2Method param.
     */
    enum class EapPhase2Method : uint32_t {
        NONE = 0u,
        PAP = 1u,
        MSPAP = 2u,
        MSPAPV2 = 3u,
        GTC = 4u,
        SIM = 5u,
        AKA = 6u,
        AKA_PRIME = 7u,
    };

    /**
     * Params of |sendNetworkEapSimGsmAuthResponse| request. (Refer RFC 4186)
     */
    struct NetworkResponseEapSimGsmAuthParams final {
        ::android::hardware::hidl_array<uint8_t, 8> kc __attribute__ ((aligned(1)));
        ::android::hardware::hidl_array<uint8_t, 4> sres __attribute__ ((aligned(1)));
    };

    static_assert(offsetof(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams, kc) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams, sres) == 8, "wrong offset");
    static_assert(sizeof(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams) == 12, "wrong size");
    static_assert(__alignof(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams) == 1, "wrong alignment");

    /**
     * Params of |sendNetworkEapSimUmtsAuthResponse| request. (Refer RFC 4187)
     */
    struct NetworkResponseEapSimUmtsAuthParams final {
        ::android::hardware::hidl_vec<uint8_t> res __attribute__ ((aligned(8)));
        ::android::hardware::hidl_array<uint8_t, 16> ik __attribute__ ((aligned(1)));
        ::android::hardware::hidl_array<uint8_t, 16> ck __attribute__ ((aligned(1)));
    };

    static_assert(offsetof(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams, res) == 0, "wrong offset");
    static_assert(offsetof(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams, ik) == 16, "wrong offset");
    static_assert(offsetof(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams, ck) == 32, "wrong offset");
    static_assert(sizeof(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams) == 48, "wrong size");
    static_assert(__alignof(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams) == 8, "wrong alignment");

    /**
     * Returns whether this object's implementation is outside of the current process.
     */
    virtual bool isRemote() const override { return false; }

    /**
     * Return callback for getId
     */
    using getId_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, uint32_t id)>;
    /**
     * Retrieves the ID allocated to this network by the supplicant.
     *
     * This is not the |SSID| of the network, but an internal identifier for
     * this network used by the supplicant.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return id Network ID.
     */
    virtual ::android::hardware::Return<void> getId(getId_cb _hidl_cb) = 0;

    /**
     * Return callback for getInterfaceName
     */
    using getInterfaceName_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& name)>;
    /**
     * Retrieves the name of the interface this network belongs to.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return Name of the network interface, e.g., wlan0
     */
    virtual ::android::hardware::Return<void> getInterfaceName(getInterfaceName_cb _hidl_cb) = 0;

    /**
     * Return callback for getType
     */
    using getType_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, ::android::hardware::wifi::supplicant::V1_0::IfaceType type)>;
    /**
     * Retrieves the type of the interface this network belongs to.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_IFACE_INVALID|
     * @return type Type of the network interface, e.g., STA.
     */
    virtual ::android::hardware::Return<void> getType(getType_cb _hidl_cb) = 0;

    /**
     * Return callback for registerCallback
     */
    using registerCallback_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Register for callbacks from this network.
     *
     * These callbacks are invoked for events that are specific to this network.
     * Registration of multiple callback objects is supported. These objects must
     * be automatically deleted when the corresponding client process is dead or
     * if this network is removed.
     *
     * @param callback An instance of the |ISupplicantStaNetworkCallback| HIDL
     *        interface object.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> registerCallback(const ::android::sp<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetworkCallback>& callback, registerCallback_cb _hidl_cb) = 0;

    /**
     * Return callback for setSsid
     */
    using setSsid_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Setters for the various network params.
     * These correspond to elements of |wpa_sssid| struct used internally by
     * the supplicant to represent each network.
     *
     *
     * Set SSID for this network.
     *
     * @param ssid value to set.
     *        Max length of |ParamSizeLimits.SSID_MAX_LEN_IN_BYTES|.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setSsid(const ::android::hardware::hidl_vec<uint8_t>& ssid, setSsid_cb _hidl_cb) = 0;

    /**
     * Return callback for setBssid
     */
    using setBssid_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set the network to only connect to an AP with provided BSSID.
     *
     * @param bssid value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setBssid(const ::android::hardware::hidl_array<uint8_t, 6>& bssid, setBssid_cb _hidl_cb) = 0;

    /**
     * Return callback for setScanSsid
     */
    using setScanSsid_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set whether to send probe requests for this network (hidden).
     *
     * @param enable true to set, false otherwise.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setScanSsid(bool enable, setScanSsid_cb _hidl_cb) = 0;

    /**
     * Return callback for setKeyMgmt
     */
    using setKeyMgmt_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set key management mask for the network.
     *
     * @param keyMgmtMask value to set.
     *        Combination of |KeyMgmtMask| values.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setKeyMgmt(::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask> keyMgmtMask, setKeyMgmt_cb _hidl_cb) = 0;

    /**
     * Return callback for setProto
     */
    using setProto_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set proto mask for the network.
     *
     * @param protoMask value to set.
     *        Combination of |ProtoMask| values.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setProto(::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask> protoMask, setProto_cb _hidl_cb) = 0;

    /**
     * Return callback for setAuthAlg
     */
    using setAuthAlg_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set auth alg mask for the network.
     *
     * @param authAlgMask value to set.
     *        Combination of |ProtoMask| values.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setAuthAlg(::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask> authAlgMask, setAuthAlg_cb _hidl_cb) = 0;

    /**
     * Return callback for setGroupCipher
     */
    using setGroupCipher_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set group cipher mask for the network.
     *
     * @param groupCipherMask value to set.
     *        Combination of |ProtoMask| values.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setGroupCipher(::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask> groupCipherMask, setGroupCipher_cb _hidl_cb) = 0;

    /**
     * Return callback for setPairwiseCipher
     */
    using setPairwiseCipher_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set pairwise cipher mask for the network.
     *
     * @param pairwiseCipherMask value to set.
     *        Combination of |ProtoMask| values.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setPairwiseCipher(::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask> pairwiseCipherMask, setPairwiseCipher_cb _hidl_cb) = 0;

    /**
     * Return callback for setPskPassphrase
     */
    using setPskPassphrase_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set passphrase for WPA_PSK network.
     *
     * @param psk value to set.
     *        Length of value must be between
     *        |ParamSizeLimits.PSK_PASSPHRASE_MIN_LEN_IN_BYTES| and
     *        |ParamSizeLimits.PSK_PASSPHRASE_MAX_LEN_IN_BYTES|.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setPskPassphrase(const ::android::hardware::hidl_string& psk, setPskPassphrase_cb _hidl_cb) = 0;

    /**
     * Return callback for setPsk
     */
    using setPsk_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set raw psk for WPA_PSK network.
     *
     * @param psk value to set as specified in IEEE 802.11i-2004 standard.
     *        This is the calculated using 'wpa_passphrase <ssid> [passphrase]'
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setPsk(const ::android::hardware::hidl_array<uint8_t, 32>& psk, setPsk_cb _hidl_cb) = 0;

    /**
     * Return callback for setWepKey
     */
    using setWepKey_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set WEP key for WEP network.
     *
     * @param keyIdx Index of wep key to set.
     *        Max of |ParamSizeLimits.WEP_KEYS_MAX_NUM|.
     * @param wepKey value to set.
     *        Length of each key must be either
     *        |ParamSizeLimits.WEP40_KEY_LEN_IN_BYTES| or
     *        |ParamSizeLimits.WEP104_KEY_LEN_IN_BYTES|.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setWepKey(uint32_t keyIdx, const ::android::hardware::hidl_vec<uint8_t>& wepKey, setWepKey_cb _hidl_cb) = 0;

    /**
     * Return callback for setWepTxKeyIdx
     */
    using setWepTxKeyIdx_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set default Tx key index for WEP network.
     *
     * @param KeyIdx value to set.
     *        Max of |ParamSizeLimits.WEP_KEYS_MAX_NUM|.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setWepTxKeyIdx(uint32_t keyIdx, setWepTxKeyIdx_cb _hidl_cb) = 0;

    /**
     * Return callback for setRequirePmf
     */
    using setRequirePmf_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set whether RequirePmf is enabled for this network.
     *
     * @param enable true to set, false otherwise.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setRequirePmf(bool enable, setRequirePmf_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapMethod
     */
    using setEapMethod_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP Method for this network.
     *
     * @param method value to be set.
     *        Must be one of |EapMethod| values.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapMethod(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod method, setEapMethod_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapPhase2Method
     */
    using setEapPhase2Method_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP Phase2 Method for this network.
     *
     * EAP method needs to be set for this to work.
     *
     * @param method value to set.
     *        Must be one of |EapPhase2Method| values.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapPhase2Method(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method method, setEapPhase2Method_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapIdentity
     */
    using setEapIdentity_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP Identity for this network.
     *
     * @param identity value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapIdentity(const ::android::hardware::hidl_vec<uint8_t>& identity, setEapIdentity_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapAnonymousIdentity
     */
    using setEapAnonymousIdentity_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP Anonymous Identity for this network.
     *
     * @param identity value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapAnonymousIdentity(const ::android::hardware::hidl_vec<uint8_t>& identity, setEapAnonymousIdentity_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapPassword
     */
    using setEapPassword_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP Password for this network.
     *
     * @param password value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapPassword(const ::android::hardware::hidl_vec<uint8_t>& password, setEapPassword_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapCACert
     */
    using setEapCACert_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP CA certificate file path for this network.
     *
     * @param path value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapCACert(const ::android::hardware::hidl_string& path, setEapCACert_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapCAPath
     */
    using setEapCAPath_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP CA certificate directory path for this network.
     *
     * @param path value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapCAPath(const ::android::hardware::hidl_string& path, setEapCAPath_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapClientCert
     */
    using setEapClientCert_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP Client certificate file path for this network.
     *
     * @param path value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapClientCert(const ::android::hardware::hidl_string& path, setEapClientCert_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapPrivateKeyId
     */
    using setEapPrivateKeyId_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP private key Id for this network.
     * This is used if private key operations for EAP-TLS are performed
     * using a smartcard.
     *
     * @param id value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapPrivateKeyId(const ::android::hardware::hidl_string& id, setEapPrivateKeyId_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapSubjectMatch
     */
    using setEapSubjectMatch_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP subject match for this network.
     *
     * @param match value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapSubjectMatch(const ::android::hardware::hidl_string& match, setEapSubjectMatch_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapAltSubjectMatch
     */
    using setEapAltSubjectMatch_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP Alt subject match for this network.
     *
     * @param match value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapAltSubjectMatch(const ::android::hardware::hidl_string& match, setEapAltSubjectMatch_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapEngine
     */
    using setEapEngine_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Enable EAP Open SSL Engine for this network.
     *
     * @param enable true to set, false otherwise.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapEngine(bool enable, setEapEngine_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapEngineID
     */
    using setEapEngineID_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP Open SSL Engine ID for this network.
     *
     * @param id value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapEngineID(const ::android::hardware::hidl_string& id, setEapEngineID_cb _hidl_cb) = 0;

    /**
     * Return callback for setEapDomainSuffixMatch
     */
    using setEapDomainSuffixMatch_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set EAP Domain suffix match for this network.
     *
     * @param match value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setEapDomainSuffixMatch(const ::android::hardware::hidl_string& match, setEapDomainSuffixMatch_cb _hidl_cb) = 0;

    /**
     * Return callback for setProactiveKeyCaching
     */
    using setProactiveKeyCaching_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * This field can be used to enable proactive key caching which is also
     * known as opportunistic PMKSA caching for WPA2. This is disabled (0)
     * by default unless default value is changed with the global okc=1
     * parameter.
     *
     * Proactive key caching is used to make supplicant assume that the APs
     * are using the same PMK and generate PMKSA cache entries without
     * doing RSN pre-authentication. This requires support from the AP side
     * and is normally used with wireless switches that co-locate the
     * authenticator.
     *
     * @param enable true to set, false otherwise.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setProactiveKeyCaching(bool enable, setProactiveKeyCaching_cb _hidl_cb) = 0;

    /**
     * Return callback for setIdStr
     */
    using setIdStr_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set ID string for this network.
     * Network identifier string for external scripts.
     *
     * @return idStr ID string value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setIdStr(const ::android::hardware::hidl_string& idStr, setIdStr_cb _hidl_cb) = 0;

    /**
     * Return callback for setUpdateIdentifier
     */
    using setUpdateIdentifier_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Set PPS MO ID for this network.
     * (Hotspot 2.0 PerProviderSubscription/UpdateIdentifier)
     *
     * @return id ID value to set.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> setUpdateIdentifier(uint32_t id, setUpdateIdentifier_cb _hidl_cb) = 0;

    /**
     * Return callback for getSsid
     */
    using getSsid_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_vec<uint8_t>& ssid)>;
    /**
     * Getters for the various network params.
     *
     *
     * Get SSID for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return ssid value set.
     */
    virtual ::android::hardware::Return<void> getSsid(getSsid_cb _hidl_cb) = 0;

    /**
     * Return callback for getBssid
     */
    using getBssid_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_array<uint8_t, 6>& bssid)>;
    /**
     * Get the BSSID set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return bssid value set.
     */
    virtual ::android::hardware::Return<void> getBssid(getBssid_cb _hidl_cb) = 0;

    /**
     * Return callback for getScanSsid
     */
    using getScanSsid_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, bool enabled)>;
    /**
     * Get whether Probe Requests are being sent for this network (hidden).
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return enabled true if set, false otherwise.
     */
    virtual ::android::hardware::Return<void> getScanSsid(getScanSsid_cb _hidl_cb) = 0;

    /**
     * Return callback for getKeyMgmt
     */
    using getKeyMgmt_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask> keyMgmtMask)>;
    /**
     * Get the key mgmt mask set for the network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return keyMgmtMask Combination of |KeyMgmtMask| values.
     */
    virtual ::android::hardware::Return<void> getKeyMgmt(getKeyMgmt_cb _hidl_cb) = 0;

    /**
     * Return callback for getProto
     */
    using getProto_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask> protoMask)>;
    /**
     * Get the proto mask set for the network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return protoMask Combination of |ProtoMask| values.
     */
    virtual ::android::hardware::Return<void> getProto(getProto_cb _hidl_cb) = 0;

    /**
     * Return callback for getAuthAlg
     */
    using getAuthAlg_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask> authAlgMask)>;
    /**
     * Get the auth alg mask set for the network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return authAlgMask Combination of |AuthAlgMask| values.
     */
    virtual ::android::hardware::Return<void> getAuthAlg(getAuthAlg_cb _hidl_cb) = 0;

    /**
     * Return callback for getGroupCipher
     */
    using getGroupCipher_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask> groupCipherMask)>;
    /**
     * Get the group cipher mask set for the network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return groupCipherMask Combination of |GroupCipherMask| values.
     */
    virtual ::android::hardware::Return<void> getGroupCipher(getGroupCipher_cb _hidl_cb) = 0;

    /**
     * Return callback for getPairwiseCipher
     */
    using getPairwiseCipher_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask> pairwiseCipherMask)>;
    /**
     * Get the pairwise cipher mask set for the network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return pairwiseCipherMask Combination of |PairwiseCipherMask| values.
     */
    virtual ::android::hardware::Return<void> getPairwiseCipher(getPairwiseCipher_cb _hidl_cb) = 0;

    /**
     * Return callback for getPskPassphrase
     */
    using getPskPassphrase_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& psk)>;
    /**
     * Get passphrase for WPA_PSK network.
     * Must return a failure if network has no passphrase set (use |getPsk| if
     * network was configured with raw psk instead).
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return psk value set.
     */
    virtual ::android::hardware::Return<void> getPskPassphrase(getPskPassphrase_cb _hidl_cb) = 0;

    /**
     * Return callback for getPsk
     */
    using getPsk_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_array<uint8_t, 32>& psk)>;
    /**
     * Get raw psk for WPA_PSK network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @param psk value set.
     */
    virtual ::android::hardware::Return<void> getPsk(getPsk_cb _hidl_cb) = 0;

    /**
     * Return callback for getWepKey
     */
    using getWepKey_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_vec<uint8_t>& wepKey)>;
    /**
     * Get WEP key for WEP network.
     *
     * @param keyIdx Index of wep key to be fetched.
     *        Max of |WEP_KEYS_MAX_NUM|.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return wepKey value set.
     */
    virtual ::android::hardware::Return<void> getWepKey(uint32_t keyIdx, getWepKey_cb _hidl_cb) = 0;

    /**
     * Return callback for getWepTxKeyIdx
     */
    using getWepTxKeyIdx_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, uint32_t keyIdx)>;
    /**
     * Get default Tx key index for WEP network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return keyIdx value set.
     */
    virtual ::android::hardware::Return<void> getWepTxKeyIdx(getWepTxKeyIdx_cb _hidl_cb) = 0;

    /**
     * Return callback for getRequirePmf
     */
    using getRequirePmf_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, bool enabled)>;
    /**
     * Get whether RequirePmf is enabled for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return enabled true if set, false otherwise.
     */
    virtual ::android::hardware::Return<void> getRequirePmf(getRequirePmf_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapMethod
     */
    using getEapMethod_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod method)>;
    /**
     * Get EAP Method set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return method value set.
     *        Must be one of |EapMethod| values.
     */
    virtual ::android::hardware::Return<void> getEapMethod(getEapMethod_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapPhase2Method
     */
    using getEapPhase2Method_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method method)>;
    /**
     * Get EAP Phase2 Method set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return method value set.
     *        Must be one of |EapPhase2Method| values.
     */
    virtual ::android::hardware::Return<void> getEapPhase2Method(getEapPhase2Method_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapIdentity
     */
    using getEapIdentity_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_vec<uint8_t>& identity)>;
    /**
     * Get EAP Identity set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return identity value set.
     */
    virtual ::android::hardware::Return<void> getEapIdentity(getEapIdentity_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapAnonymousIdentity
     */
    using getEapAnonymousIdentity_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_vec<uint8_t>& identity)>;
    /**
     * Get EAP Anonymous Identity set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return identity value set.
     */
    virtual ::android::hardware::Return<void> getEapAnonymousIdentity(getEapAnonymousIdentity_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapPassword
     */
    using getEapPassword_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_vec<uint8_t>& password)>;
    /**
     * Get EAP Password set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return password value set.
     */
    virtual ::android::hardware::Return<void> getEapPassword(getEapPassword_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapCACert
     */
    using getEapCACert_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& path)>;
    /**
     * Get EAP CA certificate file path set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return path value set.
     */
    virtual ::android::hardware::Return<void> getEapCACert(getEapCACert_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapCAPath
     */
    using getEapCAPath_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& path)>;
    /**
     * Get EAP CA certificate directory path set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return path value set.
     */
    virtual ::android::hardware::Return<void> getEapCAPath(getEapCAPath_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapClientCert
     */
    using getEapClientCert_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& path)>;
    /**
     * Get EAP Client certificate file path set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return path value set.
     */
    virtual ::android::hardware::Return<void> getEapClientCert(getEapClientCert_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapPrivateKeyId
     */
    using getEapPrivateKeyId_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& id)>;
    /**
     * Get EAP private key Id set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return id value set.
     */
    virtual ::android::hardware::Return<void> getEapPrivateKeyId(getEapPrivateKeyId_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapSubjectMatch
     */
    using getEapSubjectMatch_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& match)>;
    /**
     * Get EAP subject match set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return match value set.
     */
    virtual ::android::hardware::Return<void> getEapSubjectMatch(getEapSubjectMatch_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapAltSubjectMatch
     */
    using getEapAltSubjectMatch_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& match)>;
    /**
     * Get EAP Alt subject match set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return match value set.
     */
    virtual ::android::hardware::Return<void> getEapAltSubjectMatch(getEapAltSubjectMatch_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapEngine
     */
    using getEapEngine_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, bool enabled)>;
    /**
     * Get if EAP Open SSL Engine is enabled for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return enabled true if set, false otherwise.
     */
    virtual ::android::hardware::Return<void> getEapEngine(getEapEngine_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapEngineID
     */
    using getEapEngineID_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& id)>;
    /**
     * Get EAP Open SSL Engine ID set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return id value set.
     */
    virtual ::android::hardware::Return<void> getEapEngineID(getEapEngineID_cb _hidl_cb) = 0;

    /**
     * Return callback for getEapDomainSuffixMatch
     */
    using getEapDomainSuffixMatch_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& match)>;
    /**
     * Get EAP Domain suffix match set for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return match value set.
     */
    virtual ::android::hardware::Return<void> getEapDomainSuffixMatch(getEapDomainSuffixMatch_cb _hidl_cb) = 0;

    /**
     * Return callback for getIdStr
     */
    using getIdStr_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_string& idStr)>;
    /**
     * Get ID string set for this network.
     * Network identifier string for external scripts.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return idStr ID string set.
     */
    virtual ::android::hardware::Return<void> getIdStr(getIdStr_cb _hidl_cb) = 0;

    /**
     * Return callback for getWpsNfcConfigurationToken
     */
    using getWpsNfcConfigurationToken_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status, const ::android::hardware::hidl_vec<uint8_t>& token)>;
    /**
     * Retrieves a WPS-NFC configuration token for this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_ARGS_INVALID|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     * @return token Bytes representing WPS-NFC configuration token.
     *         This is a dump of all the WPS atrributes of the AP configuration
     *         as specified in the Wi-Fi Protected Setup Specification.
     */
    virtual ::android::hardware::Return<void> getWpsNfcConfigurationToken(getWpsNfcConfigurationToken_cb _hidl_cb) = 0;

    /**
     * Return callback for enable
     */
    using enable_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Enable the network for connection purposes.
     *
     * This must trigger a connection to the network if:
     * a) |noConnect| is false, and
     * b) This is the only network configured, and
     * c) Is visible in the current scan results.
     *
     * @param noConnect Only enable the network, dont trigger a connect.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> enable(bool noConnect, enable_cb _hidl_cb) = 0;

    /**
     * Return callback for disable
     */
    using disable_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Disable the network for connection purposes.
     *
     * This must trigger a disconnection from the network, if currently
     * connected to this one.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> disable(disable_cb _hidl_cb) = 0;

    /**
     * Return callback for select
     */
    using select_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Initiate connection to this network.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> select(select_cb _hidl_cb) = 0;

    /**
     * Return callback for sendNetworkEapSimGsmAuthResponse
     */
    using sendNetworkEapSimGsmAuthResponse_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Used to send a response to the
     * |ISupplicantNetworkCallback.onNetworkEapSimGsmAuthRequest| request.
     *
     * @param params Params to be used for EAP GSM authentication.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> sendNetworkEapSimGsmAuthResponse(const ::android::hardware::hidl_vec<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams>& params, sendNetworkEapSimGsmAuthResponse_cb _hidl_cb) = 0;

    /**
     * Return callback for sendNetworkEapSimGsmAuthFailure
     */
    using sendNetworkEapSimGsmAuthFailure_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Used to send a response to the
     * |ISupplicantNetworkCallback.onNetworkEapSimGsmAuthRequest| request.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> sendNetworkEapSimGsmAuthFailure(sendNetworkEapSimGsmAuthFailure_cb _hidl_cb) = 0;

    /**
     * Return callback for sendNetworkEapSimUmtsAuthResponse
     */
    using sendNetworkEapSimUmtsAuthResponse_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Used to send a response to the
     * |ISupplicantNetworkCallback.onNetworkEapSimUmtsAuthRequest| request.
     *
     * @param params Params to be used for EAP UMTS authentication.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> sendNetworkEapSimUmtsAuthResponse(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& params, sendNetworkEapSimUmtsAuthResponse_cb _hidl_cb) = 0;

    /**
     * Return callback for sendNetworkEapSimUmtsAutsResponse
     */
    using sendNetworkEapSimUmtsAutsResponse_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Used to send a response to the
     * |ISupplicantNetworkCallback.onNetworkEapSimUmtsAuthRequest| request.
     *
     * @param auts Params to be used for EAP UMTS authentication.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> sendNetworkEapSimUmtsAutsResponse(const ::android::hardware::hidl_array<uint8_t, 14>& auts, sendNetworkEapSimUmtsAutsResponse_cb _hidl_cb) = 0;

    /**
     * Return callback for sendNetworkEapSimUmtsAuthFailure
     */
    using sendNetworkEapSimUmtsAuthFailure_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Used to send a response to the
     * |ISupplicantNetworkCallback.onNetworkEapSimUmtsAuthRequest| request.
     *
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> sendNetworkEapSimUmtsAuthFailure(sendNetworkEapSimUmtsAuthFailure_cb _hidl_cb) = 0;

    /**
     * Return callback for sendNetworkEapIdentityResponse
     */
    using sendNetworkEapIdentityResponse_cb = std::function<void(const ::android::hardware::wifi::supplicant::V1_0::SupplicantStatus& status)>;
    /**
     * Used to send a response to the
     * |ISupplicantNetworkCallback.onNetworkEapIdentityRequest| request.
     *
     * @param identity Identity to be used for the network.
     * @return status Status of the operation.
     *         Possible status codes:
     *         |SupplicantStatusCode.SUCCESS|,
     *         |SupplicantStatusCode.FAILURE_UNKNOWN|,
     *         |SupplicantStatusCode.FAILURE_NETWORK_INVALID|
     */
    virtual ::android::hardware::Return<void> sendNetworkEapIdentityResponse(const ::android::hardware::hidl_vec<uint8_t>& identity, sendNetworkEapIdentityResponse_cb _hidl_cb) = 0;

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
    static ::android::hardware::Return<::android::sp<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork>> castFrom(const ::android::sp<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork>> castFrom(const ::android::sp<::android::hardware::wifi::supplicant::V1_0::ISupplicantNetwork>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork>> castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError = false);

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
    static ::android::sp<ISupplicantStaNetwork> tryGetService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<ISupplicantStaNetwork> tryGetService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return tryGetService(str, getStub); }
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<ISupplicantStaNetwork> tryGetService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return tryGetService(str, getStub); }
    /**
     * Calls tryGetService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<ISupplicantStaNetwork> tryGetService(bool getStub) { return tryGetService("default", getStub); }
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is not in the VINTF manifest on a Trebilized device, this will return
     * nullptr. If the service is not available, this will wait for the service to
     * become available. If the service is a lazy service, this will start the service
     * and return when it becomes available. If getStub is true, this will try to
     * return an unwrapped passthrough implementation in the same process. This is
     * useful when getting an implementation from the same partition/compilation group.
     */
    static ::android::sp<ISupplicantStaNetwork> getService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<ISupplicantStaNetwork> getService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return getService(str, getStub); }
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<ISupplicantStaNetwork> getService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return getService(str, getStub); }
    /**
     * Calls getService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<ISupplicantStaNetwork> getService(bool getStub) { return getService("default", getStub); }
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
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits o);
static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask o);
static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask o);
static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask o);
static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask o);
static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask o);
static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod o);
static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method o);
static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

static inline std::string toString(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& o);
static inline void PrintTo(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& rhs);
static inline bool operator!=(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& rhs);

static inline std::string toString(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& o);
static inline void PrintTo(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& o, ::std::ostream*);
static inline bool operator==(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& rhs);
static inline bool operator!=(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& rhs);

static inline std::string toString(const ::android::sp<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork>& o);

//
// type header definitions for package
//

template<>
inline std::string toString<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::SSID_MAX_LEN_IN_BYTES) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::SSID_MAX_LEN_IN_BYTES)) {
        os += (first ? "" : " | ");
        os += "SSID_MAX_LEN_IN_BYTES";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::SSID_MAX_LEN_IN_BYTES;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::PSK_PASSPHRASE_MIN_LEN_IN_BYTES) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::PSK_PASSPHRASE_MIN_LEN_IN_BYTES)) {
        os += (first ? "" : " | ");
        os += "PSK_PASSPHRASE_MIN_LEN_IN_BYTES";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::PSK_PASSPHRASE_MIN_LEN_IN_BYTES;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::PSK_PASSPHRASE_MAX_LEN_IN_BYTES) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::PSK_PASSPHRASE_MAX_LEN_IN_BYTES)) {
        os += (first ? "" : " | ");
        os += "PSK_PASSPHRASE_MAX_LEN_IN_BYTES";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::PSK_PASSPHRASE_MAX_LEN_IN_BYTES;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP_KEYS_MAX_NUM) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP_KEYS_MAX_NUM)) {
        os += (first ? "" : " | ");
        os += "WEP_KEYS_MAX_NUM";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP_KEYS_MAX_NUM;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP40_KEY_LEN_IN_BYTES) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP40_KEY_LEN_IN_BYTES)) {
        os += (first ? "" : " | ");
        os += "WEP40_KEY_LEN_IN_BYTES";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP40_KEY_LEN_IN_BYTES;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP104_KEY_LEN_IN_BYTES) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP104_KEY_LEN_IN_BYTES)) {
        os += (first ? "" : " | ");
        os += "WEP104_KEY_LEN_IN_BYTES";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP104_KEY_LEN_IN_BYTES;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::SSID_MAX_LEN_IN_BYTES) {
        return "SSID_MAX_LEN_IN_BYTES";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::PSK_PASSPHRASE_MIN_LEN_IN_BYTES) {
        return "PSK_PASSPHRASE_MIN_LEN_IN_BYTES";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::PSK_PASSPHRASE_MAX_LEN_IN_BYTES) {
        return "PSK_PASSPHRASE_MAX_LEN_IN_BYTES";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP_KEYS_MAX_NUM) {
        return "WEP_KEYS_MAX_NUM";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP40_KEY_LEN_IN_BYTES) {
        return "WEP40_KEY_LEN_IN_BYTES";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP104_KEY_LEN_IN_BYTES) {
        return "WEP104_KEY_LEN_IN_BYTES";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::WPA_EAP) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::WPA_EAP)) {
        os += (first ? "" : " | ");
        os += "WPA_EAP";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::WPA_EAP;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::WPA_PSK) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::WPA_PSK)) {
        os += (first ? "" : " | ");
        os += "WPA_PSK";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::WPA_PSK;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::NONE) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::NONE)) {
        os += (first ? "" : " | ");
        os += "NONE";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::NONE;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::IEEE8021X) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::IEEE8021X)) {
        os += (first ? "" : " | ");
        os += "IEEE8021X";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::IEEE8021X;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::FT_EAP) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::FT_EAP)) {
        os += (first ? "" : " | ");
        os += "FT_EAP";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::FT_EAP;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::FT_PSK) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::FT_PSK)) {
        os += (first ? "" : " | ");
        os += "FT_PSK";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::FT_PSK;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::OSEN) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::OSEN)) {
        os += (first ? "" : " | ");
        os += "OSEN";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::OSEN;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::WPA_EAP) {
        return "WPA_EAP";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::WPA_PSK) {
        return "WPA_PSK";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::NONE) {
        return "NONE";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::IEEE8021X) {
        return "IEEE8021X";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::FT_EAP) {
        return "FT_EAP";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::FT_PSK) {
        return "FT_PSK";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::OSEN) {
        return "OSEN";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::WPA) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::WPA)) {
        os += (first ? "" : " | ");
        os += "WPA";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::WPA;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::RSN) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::RSN)) {
        os += (first ? "" : " | ");
        os += "RSN";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::RSN;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::OSEN) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::OSEN)) {
        os += (first ? "" : " | ");
        os += "OSEN";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::OSEN;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::WPA) {
        return "WPA";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::RSN) {
        return "RSN";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::OSEN) {
        return "OSEN";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::OPEN) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::OPEN)) {
        os += (first ? "" : " | ");
        os += "OPEN";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::OPEN;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::SHARED) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::SHARED)) {
        os += (first ? "" : " | ");
        os += "SHARED";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::SHARED;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::LEAP) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::LEAP)) {
        os += (first ? "" : " | ");
        os += "LEAP";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::LEAP;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::OPEN) {
        return "OPEN";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::SHARED) {
        return "SHARED";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::LEAP) {
        return "LEAP";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::WEP40) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::WEP40)) {
        os += (first ? "" : " | ");
        os += "WEP40";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::WEP40;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::WEP104) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::WEP104)) {
        os += (first ? "" : " | ");
        os += "WEP104";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::WEP104;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::TKIP) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::TKIP)) {
        os += (first ? "" : " | ");
        os += "TKIP";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::TKIP;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::CCMP) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::CCMP)) {
        os += (first ? "" : " | ");
        os += "CCMP";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::CCMP;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::GTK_NOT_USED) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::GTK_NOT_USED)) {
        os += (first ? "" : " | ");
        os += "GTK_NOT_USED";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::GTK_NOT_USED;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::WEP40) {
        return "WEP40";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::WEP104) {
        return "WEP104";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::TKIP) {
        return "TKIP";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::CCMP) {
        return "CCMP";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::GTK_NOT_USED) {
        return "GTK_NOT_USED";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::NONE) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::NONE)) {
        os += (first ? "" : " | ");
        os += "NONE";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::NONE;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::TKIP) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::TKIP)) {
        os += (first ? "" : " | ");
        os += "TKIP";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::TKIP;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::CCMP) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::CCMP)) {
        os += (first ? "" : " | ");
        os += "CCMP";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::CCMP;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::NONE) {
        return "NONE";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::TKIP) {
        return "TKIP";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::CCMP) {
        return "CCMP";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::PEAP) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::PEAP)) {
        os += (first ? "" : " | ");
        os += "PEAP";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::PEAP;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::TLS) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::TLS)) {
        os += (first ? "" : " | ");
        os += "TLS";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::TLS;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::TTLS) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::TTLS)) {
        os += (first ? "" : " | ");
        os += "TTLS";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::TTLS;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::PWD) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::PWD)) {
        os += (first ? "" : " | ");
        os += "PWD";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::PWD;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::SIM) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::SIM)) {
        os += (first ? "" : " | ");
        os += "SIM";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::SIM;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::AKA) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::AKA)) {
        os += (first ? "" : " | ");
        os += "AKA";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::AKA;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::AKA_PRIME) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::AKA_PRIME)) {
        os += (first ? "" : " | ");
        os += "AKA_PRIME";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::AKA_PRIME;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::WFA_UNAUTH_TLS) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::WFA_UNAUTH_TLS)) {
        os += (first ? "" : " | ");
        os += "WFA_UNAUTH_TLS";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::WFA_UNAUTH_TLS;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::PEAP) {
        return "PEAP";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::TLS) {
        return "TLS";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::TTLS) {
        return "TTLS";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::PWD) {
        return "PWD";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::SIM) {
        return "SIM";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::AKA) {
        return "AKA";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::AKA_PRIME) {
        return "AKA_PRIME";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::WFA_UNAUTH_TLS) {
        return "WFA_UNAUTH_TLS";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::NONE) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::NONE)) {
        os += (first ? "" : " | ");
        os += "NONE";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::NONE;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::PAP) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::PAP)) {
        os += (first ? "" : " | ");
        os += "PAP";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::PAP;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::MSPAP) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::MSPAP)) {
        os += (first ? "" : " | ");
        os += "MSPAP";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::MSPAP;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::MSPAPV2) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::MSPAPV2)) {
        os += (first ? "" : " | ");
        os += "MSPAPV2";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::MSPAPV2;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::GTC) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::GTC)) {
        os += (first ? "" : " | ");
        os += "GTC";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::GTC;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::SIM) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::SIM)) {
        os += (first ? "" : " | ");
        os += "SIM";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::SIM;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::AKA) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::AKA)) {
        os += (first ? "" : " | ");
        os += "AKA";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::AKA;
    }
    if ((o & ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::AKA_PRIME) == static_cast<uint32_t>(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::AKA_PRIME)) {
        os += (first ? "" : " | ");
        os += "AKA_PRIME";
        first = false;
        flipped |= ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::AKA_PRIME;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::NONE) {
        return "NONE";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::PAP) {
        return "PAP";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::MSPAP) {
        return "MSPAP";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::MSPAPV2) {
        return "MSPAPV2";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::GTC) {
        return "GTC";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::SIM) {
        return "SIM";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::AKA) {
        return "AKA";
    }
    if (o == ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::AKA_PRIME) {
        return "AKA_PRIME";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".kc = ";
    os += ::android::hardware::toString(o.kc);
    os += ", .sres = ";
    os += ::android::hardware::toString(o.sres);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& rhs) {
    if (lhs.kc != rhs.kc) {
        return false;
    }
    if (lhs.sres != rhs.sres) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimGsmAuthParams& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".res = ";
    os += ::android::hardware::toString(o.res);
    os += ", .ik = ";
    os += ::android::hardware::toString(o.ik);
    os += ", .ck = ";
    os += ::android::hardware::toString(o.ck);
    os += "}"; return os;
}

static inline void PrintTo(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& rhs) {
    if (lhs.res != rhs.res) {
        return false;
    }
    if (lhs.ik != rhs.ik) {
        return false;
    }
    if (lhs.ck != rhs.ck) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& lhs, const ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::NetworkResponseEapSimUmtsAuthParams& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::android::sp<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork>& o) {
    std::string os = "[class or subclass of ";
    os += ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::descriptor;
    os += "]";
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}


}  // namespace V1_0
}  // namespace supplicant
}  // namespace wifi
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
template<> inline constexpr std::array<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits, 6> hidl_enum_values<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits> = {
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::SSID_MAX_LEN_IN_BYTES,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::PSK_PASSPHRASE_MIN_LEN_IN_BYTES,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::PSK_PASSPHRASE_MAX_LEN_IN_BYTES,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP_KEYS_MAX_NUM,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP40_KEY_LEN_IN_BYTES,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ParamSizeLimits::WEP104_KEY_LEN_IN_BYTES,
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
template<> inline constexpr std::array<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask, 7> hidl_enum_values<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask> = {
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::WPA_EAP,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::WPA_PSK,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::NONE,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::IEEE8021X,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::FT_EAP,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::FT_PSK,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::KeyMgmtMask::OSEN,
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
template<> inline constexpr std::array<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask, 3> hidl_enum_values<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask> = {
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::WPA,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::RSN,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::ProtoMask::OSEN,
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
template<> inline constexpr std::array<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask, 3> hidl_enum_values<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask> = {
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::OPEN,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::SHARED,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::AuthAlgMask::LEAP,
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
template<> inline constexpr std::array<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask, 5> hidl_enum_values<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask> = {
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::WEP40,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::WEP104,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::TKIP,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::CCMP,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::GroupCipherMask::GTK_NOT_USED,
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
template<> inline constexpr std::array<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask, 3> hidl_enum_values<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask> = {
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::NONE,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::TKIP,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::PairwiseCipherMask::CCMP,
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
template<> inline constexpr std::array<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod, 8> hidl_enum_values<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod> = {
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::PEAP,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::TLS,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::TTLS,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::PWD,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::SIM,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::AKA,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::AKA_PRIME,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapMethod::WFA_UNAUTH_TLS,
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
template<> inline constexpr std::array<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method, 8> hidl_enum_values<::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method> = {
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::NONE,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::PAP,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::MSPAP,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::MSPAPV2,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::GTC,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::SIM,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::AKA,
    ::android::hardware::wifi::supplicant::V1_0::ISupplicantStaNetwork::EapPhase2Method::AKA_PRIME,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android


#endif  // HIDL_GENERATED_ANDROID_HARDWARE_WIFI_SUPPLICANT_V1_0_ISUPPLICANTSTANETWORK_H
