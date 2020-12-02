#ifndef HIDL_GENERATED_ANDROID_HARDWARE_WIFI_V1_0_IWIFISTAIFACE_H
#define HIDL_GENERATED_ANDROID_HARDWARE_WIFI_V1_0_IWIFISTAIFACE_H

#include <android/hardware/wifi/1.0/IWifiIface.h>
#include <android/hardware/wifi/1.0/IWifiStaIfaceEventCallback.h>
#include <android/hardware/wifi/1.0/types.h>

#include <android/hidl/manager/1.0/IServiceNotification.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace android {
namespace hardware {
namespace wifi {
namespace V1_0 {

/**
 * Interface used to represent a single STA iface.
 */
struct IWifiStaIface : public ::android::hardware::wifi::V1_0::IWifiIface {
    /**
     * Type tag for use in template logic that indicates this is a 'pure' class.
     */
    typedef ::android::hardware::details::i_tag _hidl_tag;

    /**
     * Fully qualified interface name: "android.hardware.wifi@1.0::IWifiStaIface"
     */
    static const char* descriptor;

    // Forward declaration for forward reference support:
    enum class StaIfaceCapabilityMask : uint32_t;

    /**
     * Mask of capabilities suported by this Iface.
     */
    enum class StaIfaceCapabilityMask : uint32_t {
        /**
         * If set indicates that the APF APIs are supported.
         * APF (Android Packet Filter) is a BPF like packet filtering
         * bytecode executed by the firmware.
         */
        APF = 1u /* 1 << 0 */,
        /**
         * If set indicates that the Background Scan APIs are supported.
         * Background scan allow the host to send a number of buckets down to the
         * firmware. Each bucket contains a set of channels, a period, and some
         * parameters about how and when to report results.
         */
        BACKGROUND_SCAN = 2u /* 1 << 1 */,
        /**
         * If set indicates that the link layer stats APIs are supported.
         */
        LINK_LAYER_STATS = 4u /* 1 << 2 */,
        /**
         * If set indicates that the RSSI monitor APIs are supported.
         */
        RSSI_MONITOR = 8u /* 1 << 3 */,
        /**
         * If set indicates that the roaming API's are supported.
         */
        CONTROL_ROAMING = 16u /* 1 << 4 */,
        /**
         * If set indicates support for Probe IE white listing.
         */
        PROBE_IE_WHITELIST = 32u /* 1 << 5 */,
        /**
         * If set indicates support for MAC & Probe Sequence Number randomization.
         */
        SCAN_RAND = 64u /* 1 << 6 */,
        /**
         * Support for 5 GHz Band.
         */
        STA_5G = 128u /* 1 << 7 */,
        /**
         * Support for GAS/ANQP queries.
         */
        HOTSPOT = 256u /* 1 << 8 */,
        /**
         * Support for Preferred Network Offload.
         */
        PNO = 512u /* 1 << 9 */,
        /**
         * Support for Tunneled Direct Link Setup.
         */
        TDLS = 1024u /* 1 << 10 */,
        /**
         * Support for Tunneled Direct Link Setup off channel.
         */
        TDLS_OFFCHANNEL = 2048u /* 1 << 11 */,
        /**
         * Support for neighbour discovery offload.
         */
        ND_OFFLOAD = 4096u /* 1 << 12 */,
        /**
         * Support for keep alive packet offload.
         */
        KEEP_ALIVE = 8192u /* 1 << 13 */,
        /**
         * Support for tracking connection packets' fate.
         */
        DEBUG_PACKET_FATE = 16384u /* 1 << 14 */,
    };

    /**
     * Returns whether this object's implementation is outside of the current process.
     */
    virtual bool isRemote() const override { return false; }

    /**
     * Return callback for getType
     */
    using getType_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status, ::android::hardware::wifi::V1_0::IfaceType type)>;
    /**
     * Get the type of this iface.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|
     * @return type One of the supported iface types.
     */
    virtual ::android::hardware::Return<void> getType(getType_cb _hidl_cb) = 0;

    /**
     * Return callback for getName
     */
    using getName_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status, const ::android::hardware::hidl_string& name)>;
    /**
     * Get the name of this iface.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|
     * @return name Name of the iface.
     */
    virtual ::android::hardware::Return<void> getName(getName_cb _hidl_cb) = 0;

    /**
     * Return callback for registerEventCallback
     */
    using registerEventCallback_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Requests notifications of significant events on this iface. Multiple calls
     * to this must register multiple callbacks each of which must receive all
     * events.
     *
     * @param callback An instance of the |IWifiStaIfaceEventCallback| HIDL interface
     *        object.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|
     */
    virtual ::android::hardware::Return<void> registerEventCallback(const ::android::sp<::android::hardware::wifi::V1_0::IWifiStaIfaceEventCallback>& callback, registerEventCallback_cb _hidl_cb) = 0;

    /**
     * Return callback for getCapabilities
     */
    using getCapabilities_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status, ::android::hardware::hidl_bitfield<::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask> capabilities)>;
    /**
     * Get the capabilities supported by this STA iface.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     * @return capabilities Bitset of |StaIfaceCapabilityMask| values.
     */
    virtual ::android::hardware::Return<void> getCapabilities(getCapabilities_cb _hidl_cb) = 0;

    /**
     * Return callback for getApfPacketFilterCapabilities
     */
    using getApfPacketFilterCapabilities_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status, const ::android::hardware::wifi::V1_0::StaApfPacketFilterCapabilities& capabilities)>;
    /**
     * Used to query additional information about the chip's APF capabilities.
     * Must fail if |StaIfaceCapabilityMask.APF| is not set.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     * @return capabilities Instance of |StaApfPacketFilterCapabilities|.
     */
    virtual ::android::hardware::Return<void> getApfPacketFilterCapabilities(getApfPacketFilterCapabilities_cb _hidl_cb) = 0;

    /**
     * Return callback for installApfPacketFilter
     */
    using installApfPacketFilter_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Installs an APF program on this iface, replacing an existing
     * program if present.
     * Must fail if |StaIfaceCapabilityMask.APF| is not set.
     *
     * APF docs
     * ==========================================================================
     * APF functionality, instructions and bytecode/binary format is described in:
     * http://android.googlesource.com/platform/hardware/google/apf/
     * +/b75c9f3714cfae3dad3d976958e063150781437e/apf.h
     *
     * The interpreter API is described here:
     * http://android.googlesource.com/platform/hardware/google/apf/+/
     * b75c9f3714cfae3dad3d976958e063150781437e/apf_interpreter.h#32
     *
     * The assembler/generator API is described in javadocs here:
     * http://android.googlesource.com/platform/frameworks/base/+/
     * 4456f33a958a7f09e608399da83c4d12b2e7d191/services/net/java/android/net/
     * apf/ApfGenerator.java
     *
     * Disassembler usage is described here:
     * http://android.googlesource.com/platform/hardware/google/apf/+/
     * b75c9f3714cfae3dad3d976958e063150781437e/apf_disassembler.c#65
     *
     * The BPF to APF translator usage is described here:
     * http://android.googlesource.com/platform/frameworks/base/+/
     * 4456f33a958a7f09e608399da83c4d12b2e7d191/tests/net/java/android/net/
     * apf/Bpf2Apf.java
     * ==========================================================================
     *
     * @param cmdId command Id to use for this invocation.
     * @param APF Program to be set.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_INVALID_ARGS|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> installApfPacketFilter(uint32_t cmdId, const ::android::hardware::hidl_vec<uint8_t>& program, installApfPacketFilter_cb _hidl_cb) = 0;

    /**
     * Return callback for getBackgroundScanCapabilities
     */
    using getBackgroundScanCapabilities_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status, const ::android::hardware::wifi::V1_0::StaBackgroundScanCapabilities& capabilities)>;
    /**
     * Used to query additional information about the chip's Background Scan capabilities.
     * Must fail if |StaIfaceCapabilityMask.BACKGROUND_SCAN| is not set.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     * @return capabilities Instance of |StaBackgroundScanCapabilities|.
     */
    virtual ::android::hardware::Return<void> getBackgroundScanCapabilities(getBackgroundScanCapabilities_cb _hidl_cb) = 0;

    /**
     * Return callback for getValidFrequenciesForBand
     */
    using getValidFrequenciesForBand_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status, const ::android::hardware::hidl_vec<uint32_t>& frequencies)>;
    /**
     * Used to query the list of valid frequencies (depending on country code set)
     * for the provided band. These channels may be specifed in the
     * |BackgroundScanBucketParameters.frequenciesInMhz| for a background scan
     * request.
     *
     * @param band Band for which the frequency list is being generated.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     * @return frequencies vector of valid frequencies for the provided band.
     */
    virtual ::android::hardware::Return<void> getValidFrequenciesForBand(::android::hardware::wifi::V1_0::WifiBand band, getValidFrequenciesForBand_cb _hidl_cb) = 0;

    /**
     * Return callback for startBackgroundScan
     */
    using startBackgroundScan_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Start a background scan using the given cmdId as an identifier. Only one
     * active background scan need be supported.
     * Must fail if |StaIfaceCapabilityMask.BACKGROUND_SCAN| is not set.
     *
     * When this is called all requested buckets must be scanned, starting the
     * beginning of the cycle.
     *
     * For example:
     * If there are two buckets specified
     *  - Bucket 1: period=10s
     *  - Bucket 2: period=20s
     *  - Bucket 3: period=30s
     * Then the following scans must occur
     *  - t=0  buckets 1, 2, and 3 are scanned
     *  - t=10 bucket 1 is scanned
     *  - t=20 bucket 1 and 2 are scanned
     *  - t=30 bucket 1 and 3 are scanned
     *  - t=40 bucket 1 and 2 are scanned
     *  - t=50 bucket 1 is scanned
     *  - t=60 buckets 1, 2, and 3 are scanned
     *  - and the patter repeats
     *
     * If any scan does not occur or is incomplete (error, interrupted, etc) then
     * a cached scan result must still be recorded with the
     * WIFI_SCAN_FLAG_INTERRUPTED flag set.
     *
     * @param cmdId command Id to use for this invocation.
     * @params Background scan parameters.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_INVALID_ARGS|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> startBackgroundScan(uint32_t cmdId, const ::android::hardware::wifi::V1_0::StaBackgroundScanParameters& params, startBackgroundScan_cb _hidl_cb) = 0;

    /**
     * Return callback for stopBackgroundScan
     */
    using stopBackgroundScan_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Stop the background scan started.
     * Must fail if |StaIfaceCapabilityMask.BACKGROUND_SCAN| is not set.
     *
     * @param cmdId command Id corresponding to the request.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_STARTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> stopBackgroundScan(uint32_t cmdId, stopBackgroundScan_cb _hidl_cb) = 0;

    /**
     * Return callback for enableLinkLayerStatsCollection
     */
    using enableLinkLayerStatsCollection_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Enable link layer stats collection.
     * Must fail if |StaIfaceCapabilityMask.LINK_LAYER_STATS| is not set.
     *
     * Radio statistics (once started) must not stop until disabled.
     * Iface statistics (once started) reset and start afresh after each
     * connection until disabled.
     *
     * @param debug Set for field debug mode. Driver must collect all
     *        statistics regardless of performance impact.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> enableLinkLayerStatsCollection(bool debug, enableLinkLayerStatsCollection_cb _hidl_cb) = 0;

    /**
     * Return callback for disableLinkLayerStatsCollection
     */
    using disableLinkLayerStatsCollection_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Disable link layer stats collection.
     * Must fail if |StaIfaceCapabilityMask.LINK_LAYER_STATS| is not set.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_STARTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> disableLinkLayerStatsCollection(disableLinkLayerStatsCollection_cb _hidl_cb) = 0;

    /**
     * Return callback for getLinkLayerStats
     */
    using getLinkLayerStats_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status, const ::android::hardware::wifi::V1_0::StaLinkLayerStats& stats)>;
    /**
     * Retrieve the latest link layer stats.
     * Must fail if |StaIfaceCapabilityMask.LINK_LAYER_STATS| is not set or if
     * link layer stats collection hasn't been explicitly enabled.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_STARTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     * @return stats Instance of |LinkLayerStats|.
     */
    virtual ::android::hardware::Return<void> getLinkLayerStats(getLinkLayerStats_cb _hidl_cb) = 0;

    /**
     * Return callback for startRssiMonitoring
     */
    using startRssiMonitoring_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Start RSSI monitoring on the currently connected access point.
     * Once the monitoring is enabled,
     * |IWifiStaIfaceEventCallback.onRssiThresholdBreached| callback must be
     * invoked to indicate if the RSSI goes above |maxRssi| or below |minRssi|.
     * Must fail if |StaIfaceCapabilityMask.RSSI_MONITOR| is not set.
     *
     * @param cmdId command Id to use for this invocation.
     * @param maxRssi Maximum RSSI threshold.
     * @param minRssi Minimum RSSI threshold.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_ARGS_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> startRssiMonitoring(uint32_t cmdId, int32_t maxRssi, int32_t minRssi, startRssiMonitoring_cb _hidl_cb) = 0;

    /**
     * Return callback for stopRssiMonitoring
     */
    using stopRssiMonitoring_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Stop RSSI monitoring.
     * Must fail if |StaIfaceCapabilityMask.RSSI_MONITOR| is not set.
     *
     * @param cmdId command Id corresponding to the request.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_STARTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> stopRssiMonitoring(uint32_t cmdId, stopRssiMonitoring_cb _hidl_cb) = 0;

    /**
     * Return callback for getRoamingCapabilities
     */
    using getRoamingCapabilities_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status, const ::android::hardware::wifi::V1_0::StaRoamingCapabilities& caps)>;
    /**
     * Get roaming control capabilities.
     * Must fail if |StaIfaceCapabilityMask.CONTROL_ROAMING| is not set.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     * @return caps Instance of |StaRoamingCapabilities|.
     */
    virtual ::android::hardware::Return<void> getRoamingCapabilities(getRoamingCapabilities_cb _hidl_cb) = 0;

    /**
     * Return callback for configureRoaming
     */
    using configureRoaming_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Configure roaming control parameters.
     * Must fail if |StaIfaceCapabilityMask.CONTROL_ROAMING| is not set.
     *
     * @param config Instance of |StaRoamingConfig|.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> configureRoaming(const ::android::hardware::wifi::V1_0::StaRoamingConfig& config, configureRoaming_cb _hidl_cb) = 0;

    /**
     * Return callback for setRoamingState
     */
    using setRoamingState_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Set the roaming control state with the parameters configured
     * using |configureRoaming|. Depending on the roaming state set, the
     * driver/firmware would enable/disable control over roaming decisions.
     * Must fail if |StaIfaceCapabilityMask.CONTROL_ROAMING| is not set.
     *
     * @param state State of the roaming control.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_BUSY|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> setRoamingState(::android::hardware::wifi::V1_0::StaRoamingState state, setRoamingState_cb _hidl_cb) = 0;

    /**
     * Return callback for enableNdOffload
     */
    using enableNdOffload_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Enable/Disable Neighbour discovery offload functionality in the firmware.
     *
     * @param enable true to enable, false to disable.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> enableNdOffload(bool enable, enableNdOffload_cb _hidl_cb) = 0;

    /**
     * Return callback for startSendingKeepAlivePackets
     */
    using startSendingKeepAlivePackets_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Start sending the specified keep alive packets periodically.
     *
     * @param cmdId command Id to use for this invocation.
     * @param ipPacketData IP packet contents to be transmitted.
     * @param etherType 16 bit ether type to be set in the ethernet frame
     *        transmitted.
     * @param srcAddress Source MAC address of the packet.
     * @param dstAddress Destination MAC address of the packet.
     * @param periodInMs Interval at which this packet must be transmitted.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> startSendingKeepAlivePackets(uint32_t cmdId, const ::android::hardware::hidl_vec<uint8_t>& ipPacketData, uint16_t etherType, const ::android::hardware::hidl_array<uint8_t, 6>& srcAddress, const ::android::hardware::hidl_array<uint8_t, 6>& dstAddress, uint32_t periodInMs, startSendingKeepAlivePackets_cb _hidl_cb) = 0;

    /**
     * Return callback for stopSendingKeepAlivePackets
     */
    using stopSendingKeepAlivePackets_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Stop sending the specified keep alive packets.
     *
     * @param cmdId command Id corresponding to the request.
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> stopSendingKeepAlivePackets(uint32_t cmdId, stopSendingKeepAlivePackets_cb _hidl_cb) = 0;

    /**
     * Return callback for setScanningMacOui
     */
    using setScanningMacOui_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * Set the MAC OUI during scanning.
     * An OUI {Organizationally Unique Identifier} is a 24-bit number that
     * uniquely identifies a vendor or manufacturer.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> setScanningMacOui(const ::android::hardware::hidl_array<uint8_t, 3>& oui, setScanningMacOui_cb _hidl_cb) = 0;

    /**
     * Return callback for startDebugPacketFateMonitoring
     */
    using startDebugPacketFateMonitoring_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status)>;
    /**
     * API to start packet fate monitoring.
     * - Once started, monitoring must remain active until HAL is stopped or the
     *   chip is reconfigured.
     * - When HAL is unloaded, all packet fate buffers must be cleared.
     * - The packet fates are used to monitor the state of packets transmitted/
     *   received during association.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     */
    virtual ::android::hardware::Return<void> startDebugPacketFateMonitoring(startDebugPacketFateMonitoring_cb _hidl_cb) = 0;

    /**
     * Return callback for getDebugTxPacketFates
     */
    using getDebugTxPacketFates_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status, const ::android::hardware::hidl_vec<::android::hardware::wifi::V1_0::WifiDebugTxPacketFateReport>& fates)>;
    /**
     * API to retrieve fates of outbound packets.
     * - HAL implementation must return the fates of
     *   all the frames transmitted for the most recent association.
     *   The fate reports must follow the same order as their respective
     *   packets.
     * - HAL implementation may choose (but is not required) to include
     *   reports for management frames.
     * - Packets reported by firmware, but not recognized by driver,
     *   must be included. However, the ordering of the corresponding
     *   reports is at the discretion of HAL implementation.
     * - Framework must be able to call this API multiple times for the same
     *   association.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_STARTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     * @return fates Vector of |WifiDebugTxPacketFateReport| instances corresponding
     *         to the packet fates.
     */
    virtual ::android::hardware::Return<void> getDebugTxPacketFates(getDebugTxPacketFates_cb _hidl_cb) = 0;

    /**
     * Return callback for getDebugRxPacketFates
     */
    using getDebugRxPacketFates_cb = std::function<void(const ::android::hardware::wifi::V1_0::WifiStatus& status, const ::android::hardware::hidl_vec<::android::hardware::wifi::V1_0::WifiDebugRxPacketFateReport>& fates)>;
    /**
     * API to retrieve fates of inbound packets.
     * - HAL implementation must return the fates of
     *   all the frames received for the most recent association.
     *   The fate reports must follow the same order as their respective
     *   packets.
     * - HAL implementation may choose (but is not required) to include
     *   reports for management frames.
     * - Packets reported by firmware, but not recognized by driver,
     *   must be included. However, the ordering of the corresponding
     *   reports is at the discretion of HAL implementation.
     * - Framework must be able to call this API multiple times for the same
     *   association.
     *
     * @return status WifiStatus of the operation.
     *         Possible status codes:
     *         |WifiStatusCode.SUCCESS|,
     *         |WifiStatusCode.ERROR_WIFI_IFACE_INVALID|,
     *         |WifiStatusCode.ERROR_NOT_SUPPORTED|,
     *         |WifiStatusCode.ERROR_NOT_STARTED|,
     *         |WifiStatusCode.ERROR_NOT_AVAILABLE|,
     *         |WifiStatusCode.ERROR_UNKNOWN|
     * @return fates Vector of |WifiDebugRxPacketFateReport| instances corresponding
     *         to the packet fates.
     */
    virtual ::android::hardware::Return<void> getDebugRxPacketFates(getDebugRxPacketFates_cb _hidl_cb) = 0;

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
    static ::android::hardware::Return<::android::sp<::android::hardware::wifi::V1_0::IWifiStaIface>> castFrom(const ::android::sp<::android::hardware::wifi::V1_0::IWifiStaIface>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::wifi::V1_0::IWifiStaIface>> castFrom(const ::android::sp<::android::hardware::wifi::V1_0::IWifiIface>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::wifi::V1_0::IWifiStaIface>> castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError = false);

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
    static ::android::sp<IWifiStaIface> tryGetService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IWifiStaIface> tryGetService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return tryGetService(str, getStub); }
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IWifiStaIface> tryGetService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return tryGetService(str, getStub); }
    /**
     * Calls tryGetService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IWifiStaIface> tryGetService(bool getStub) { return tryGetService("default", getStub); }
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is not in the VINTF manifest on a Trebilized device, this will return
     * nullptr. If the service is not available, this will wait for the service to
     * become available. If the service is a lazy service, this will start the service
     * and return when it becomes available. If getStub is true, this will try to
     * return an unwrapped passthrough implementation in the same process. This is
     * useful when getting an implementation from the same partition/compilation group.
     */
    static ::android::sp<IWifiStaIface> getService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IWifiStaIface> getService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return getService(str, getStub); }
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IWifiStaIface> getService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return getService(str, getStub); }
    /**
     * Calls getService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IWifiStaIface> getService(bool getStub) { return getService("default", getStub); }
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
static inline std::string toString(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask o);
static inline void PrintTo(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask o, ::std::ostream* os);
constexpr uint32_t operator|(const ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask lhs, const ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask lhs, const ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

static inline std::string toString(const ::android::sp<::android::hardware::wifi::V1_0::IWifiStaIface>& o);

//
// type header definitions for package
//

template<>
inline std::string toString<::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask> flipped = 0;
    bool first = true;
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::APF) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::APF)) {
        os += (first ? "" : " | ");
        os += "APF";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::APF;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::BACKGROUND_SCAN) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::BACKGROUND_SCAN)) {
        os += (first ? "" : " | ");
        os += "BACKGROUND_SCAN";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::BACKGROUND_SCAN;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::LINK_LAYER_STATS) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::LINK_LAYER_STATS)) {
        os += (first ? "" : " | ");
        os += "LINK_LAYER_STATS";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::LINK_LAYER_STATS;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::RSSI_MONITOR) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::RSSI_MONITOR)) {
        os += (first ? "" : " | ");
        os += "RSSI_MONITOR";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::RSSI_MONITOR;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::CONTROL_ROAMING) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::CONTROL_ROAMING)) {
        os += (first ? "" : " | ");
        os += "CONTROL_ROAMING";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::CONTROL_ROAMING;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::PROBE_IE_WHITELIST) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::PROBE_IE_WHITELIST)) {
        os += (first ? "" : " | ");
        os += "PROBE_IE_WHITELIST";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::PROBE_IE_WHITELIST;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::SCAN_RAND) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::SCAN_RAND)) {
        os += (first ? "" : " | ");
        os += "SCAN_RAND";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::SCAN_RAND;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::STA_5G) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::STA_5G)) {
        os += (first ? "" : " | ");
        os += "STA_5G";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::STA_5G;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::HOTSPOT) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::HOTSPOT)) {
        os += (first ? "" : " | ");
        os += "HOTSPOT";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::HOTSPOT;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::PNO) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::PNO)) {
        os += (first ? "" : " | ");
        os += "PNO";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::PNO;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::TDLS) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::TDLS)) {
        os += (first ? "" : " | ");
        os += "TDLS";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::TDLS;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::TDLS_OFFCHANNEL) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::TDLS_OFFCHANNEL)) {
        os += (first ? "" : " | ");
        os += "TDLS_OFFCHANNEL";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::TDLS_OFFCHANNEL;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::ND_OFFLOAD) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::ND_OFFLOAD)) {
        os += (first ? "" : " | ");
        os += "ND_OFFLOAD";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::ND_OFFLOAD;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::KEEP_ALIVE) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::KEEP_ALIVE)) {
        os += (first ? "" : " | ");
        os += "KEEP_ALIVE";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::KEEP_ALIVE;
    }
    if ((o & ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::DEBUG_PACKET_FATE) == static_cast<uint32_t>(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::DEBUG_PACKET_FATE)) {
        os += (first ? "" : " | ");
        os += "DEBUG_PACKET_FATE";
        first = false;
        flipped |= ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::DEBUG_PACKET_FATE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask o) {
    using ::android::hardware::details::toHexString;
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::APF) {
        return "APF";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::BACKGROUND_SCAN) {
        return "BACKGROUND_SCAN";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::LINK_LAYER_STATS) {
        return "LINK_LAYER_STATS";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::RSSI_MONITOR) {
        return "RSSI_MONITOR";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::CONTROL_ROAMING) {
        return "CONTROL_ROAMING";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::PROBE_IE_WHITELIST) {
        return "PROBE_IE_WHITELIST";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::SCAN_RAND) {
        return "SCAN_RAND";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::STA_5G) {
        return "STA_5G";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::HOTSPOT) {
        return "HOTSPOT";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::PNO) {
        return "PNO";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::TDLS) {
        return "TDLS";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::TDLS_OFFCHANNEL) {
        return "TDLS_OFFCHANNEL";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::ND_OFFLOAD) {
        return "ND_OFFLOAD";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::KEEP_ALIVE) {
        return "KEEP_ALIVE";
    }
    if (o == ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::DEBUG_PACKET_FATE) {
        return "DEBUG_PACKET_FATE";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::android::sp<::android::hardware::wifi::V1_0::IWifiStaIface>& o) {
    std::string os = "[class or subclass of ";
    os += ::android::hardware::wifi::V1_0::IWifiStaIface::descriptor;
    os += "]";
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}


}  // namespace V1_0
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
template<> inline constexpr std::array<::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask, 15> hidl_enum_values<::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask> = {
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::APF,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::BACKGROUND_SCAN,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::LINK_LAYER_STATS,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::RSSI_MONITOR,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::CONTROL_ROAMING,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::PROBE_IE_WHITELIST,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::SCAN_RAND,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::STA_5G,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::HOTSPOT,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::PNO,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::TDLS,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::TDLS_OFFCHANNEL,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::ND_OFFLOAD,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::KEEP_ALIVE,
    ::android::hardware::wifi::V1_0::IWifiStaIface::StaIfaceCapabilityMask::DEBUG_PACKET_FATE,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android


#endif  // HIDL_GENERATED_ANDROID_HARDWARE_WIFI_V1_0_IWIFISTAIFACE_H
