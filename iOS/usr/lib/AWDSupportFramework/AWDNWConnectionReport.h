//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDNWConnectionReport : PBCodable <NSCopying>
{
    unsigned long long _bestRTT;
    unsigned long long _bytesDuplicate;
    unsigned long long _bytesIn;
    unsigned long long _bytesOut;
    unsigned long long _bytesOutOfOrder;
    unsigned long long _bytesRetransmitted;
    unsigned long long _connectedAddressIndex;
    unsigned long long _connectionReuseCount;
    unsigned long long _currentRTT;
    unsigned long long _dataStallCount;
    unsigned long long _flowConnectMilliseconds;
    unsigned long long _flowDurationMilliseconds;
    unsigned long long _ipv4AddressCount;
    unsigned long long _ipv4DNSServerCount;
    unsigned long long _ipv6AddressCount;
    unsigned long long _ipv6DNSServerCount;
    unsigned long long _multipathBytesInCell;
    unsigned long long _multipathBytesInInitial;
    unsigned long long _multipathBytesInWiFi;
    unsigned long long _multipathBytesOutCell;
    unsigned long long _multipathBytesOutInitial;
    unsigned long long _multipathBytesOutWiFi;
    unsigned long long _multipathServiceType;
    unsigned long long _packetsIn;
    unsigned long long _packetsOut;
    unsigned long long _pathTriggerMilliseconds;
    unsigned long long _proxyMilliseconds;
    unsigned long long _rTTvariance;
    unsigned long long _resolutionMilliseconds;
    unsigned long long _smoothedRTT;
    unsigned long long _synRetransmissionCount;
    unsigned long long _timestamp;
    unsigned long long _tlsMilliseconds;
    unsigned long long _trafficClass;
    int _appleApp;
    int _appleHost;
    int _connectedAddressFamily;
    int _connectedInterfaceType;
    int _connectionMode;
    int _failureReason;
    int _firstAddressFamily;
    int _stackLevel;
    int _tlsVersion;
    int _usedProxyType;
    _Bool _customProxyConfigured;
    _Bool _fallbackEligible;
    _Bool _firstParty;
    _Bool _ipv4Available;
    _Bool _ipv6Available;
    _Bool _multipathConfigured;
    _Bool _resolutionRequired;
    _Bool _synthesizedExtraIPv6Address;
    _Bool _synthesizedIPv6Address;
    _Bool _systemProxyConfigured;
    _Bool _tfoConfigured;
    _Bool _tfoUsed;
    _Bool _tlsConfigured;
    _Bool _tlsVersionTimeout;
    _Bool _triggeredPath;
    _Bool _usedFallback;
    _Bool _weakFallback;
    struct {
        unsigned int bestRTT:1;
        unsigned int bytesDuplicate:1;
        unsigned int bytesIn:1;
        unsigned int bytesOut:1;
        unsigned int bytesOutOfOrder:1;
        unsigned int bytesRetransmitted:1;
        unsigned int connectedAddressIndex:1;
        unsigned int connectionReuseCount:1;
        unsigned int currentRTT:1;
        unsigned int dataStallCount:1;
        unsigned int flowConnectMilliseconds:1;
        unsigned int flowDurationMilliseconds:1;
        unsigned int ipv4AddressCount:1;
        unsigned int ipv4DNSServerCount:1;
        unsigned int ipv6AddressCount:1;
        unsigned int ipv6DNSServerCount:1;
        unsigned int multipathBytesInCell:1;
        unsigned int multipathBytesInInitial:1;
        unsigned int multipathBytesInWiFi:1;
        unsigned int multipathBytesOutCell:1;
        unsigned int multipathBytesOutInitial:1;
        unsigned int multipathBytesOutWiFi:1;
        unsigned int multipathServiceType:1;
        unsigned int packetsIn:1;
        unsigned int packetsOut:1;
        unsigned int pathTriggerMilliseconds:1;
        unsigned int proxyMilliseconds:1;
        unsigned int rTTvariance:1;
        unsigned int resolutionMilliseconds:1;
        unsigned int smoothedRTT:1;
        unsigned int synRetransmissionCount:1;
        unsigned int timestamp:1;
        unsigned int tlsMilliseconds:1;
        unsigned int trafficClass:1;
        unsigned int appleApp:1;
        unsigned int appleHost:1;
        unsigned int connectedAddressFamily:1;
        unsigned int connectedInterfaceType:1;
        unsigned int connectionMode:1;
        unsigned int failureReason:1;
        unsigned int firstAddressFamily:1;
        unsigned int stackLevel:1;
        unsigned int tlsVersion:1;
        unsigned int usedProxyType:1;
        unsigned int customProxyConfigured:1;
        unsigned int fallbackEligible:1;
        unsigned int firstParty:1;
        unsigned int ipv4Available:1;
        unsigned int ipv6Available:1;
        unsigned int multipathConfigured:1;
        unsigned int resolutionRequired:1;
        unsigned int synthesizedExtraIPv6Address:1;
        unsigned int synthesizedIPv6Address:1;
        unsigned int systemProxyConfigured:1;
        unsigned int tfoConfigured:1;
        unsigned int tfoUsed:1;
        unsigned int tlsConfigured:1;
        unsigned int tlsVersionTimeout:1;
        unsigned int triggeredPath:1;
        unsigned int usedFallback:1;
        unsigned int weakFallback:1;
    } _has;
}

@property(nonatomic) unsigned long long multipathBytesOutInitial; // @synthesize multipathBytesOutInitial=_multipathBytesOutInitial;
@property(nonatomic) unsigned long long multipathBytesInInitial; // @synthesize multipathBytesInInitial=_multipathBytesInInitial;
@property(nonatomic) unsigned long long multipathBytesOutWiFi; // @synthesize multipathBytesOutWiFi=_multipathBytesOutWiFi;
@property(nonatomic) unsigned long long multipathBytesInWiFi; // @synthesize multipathBytesInWiFi=_multipathBytesInWiFi;
@property(nonatomic) unsigned long long multipathBytesOutCell; // @synthesize multipathBytesOutCell=_multipathBytesOutCell;
@property(nonatomic) unsigned long long multipathBytesInCell; // @synthesize multipathBytesInCell=_multipathBytesInCell;
@property(nonatomic) _Bool firstParty; // @synthesize firstParty=_firstParty;
@property(nonatomic) unsigned long long multipathServiceType; // @synthesize multipathServiceType=_multipathServiceType;
@property(nonatomic) _Bool tfoUsed; // @synthesize tfoUsed=_tfoUsed;
@property(nonatomic) unsigned long long synRetransmissionCount; // @synthesize synRetransmissionCount=_synRetransmissionCount;
@property(nonatomic) unsigned long long rTTvariance; // @synthesize rTTvariance=_rTTvariance;
@property(nonatomic) unsigned long long bestRTT; // @synthesize bestRTT=_bestRTT;
@property(nonatomic) unsigned long long smoothedRTT; // @synthesize smoothedRTT=_smoothedRTT;
@property(nonatomic) unsigned long long currentRTT; // @synthesize currentRTT=_currentRTT;
@property(nonatomic) unsigned long long packetsOut; // @synthesize packetsOut=_packetsOut;
@property(nonatomic) unsigned long long packetsIn; // @synthesize packetsIn=_packetsIn;
@property(nonatomic) unsigned long long bytesRetransmitted; // @synthesize bytesRetransmitted=_bytesRetransmitted;
@property(nonatomic) unsigned long long bytesOutOfOrder; // @synthesize bytesOutOfOrder=_bytesOutOfOrder;
@property(nonatomic) unsigned long long bytesDuplicate; // @synthesize bytesDuplicate=_bytesDuplicate;
@property(nonatomic) unsigned long long bytesOut; // @synthesize bytesOut=_bytesOut;
@property(nonatomic) unsigned long long bytesIn; // @synthesize bytesIn=_bytesIn;
@property(nonatomic) _Bool synthesizedExtraIPv6Address; // @synthesize synthesizedExtraIPv6Address=_synthesizedExtraIPv6Address;
@property(nonatomic) _Bool tlsVersionTimeout; // @synthesize tlsVersionTimeout=_tlsVersionTimeout;
@property(nonatomic) unsigned long long ipv6DNSServerCount; // @synthesize ipv6DNSServerCount=_ipv6DNSServerCount;
@property(nonatomic) unsigned long long ipv4DNSServerCount; // @synthesize ipv4DNSServerCount=_ipv4DNSServerCount;
@property(nonatomic) _Bool ipv6Available; // @synthesize ipv6Available=_ipv6Available;
@property(nonatomic) _Bool ipv4Available; // @synthesize ipv4Available=_ipv4Available;
@property(nonatomic) unsigned long long dataStallCount; // @synthesize dataStallCount=_dataStallCount;
@property(nonatomic) unsigned long long connectionReuseCount; // @synthesize connectionReuseCount=_connectionReuseCount;
@property(nonatomic) unsigned long long connectedAddressIndex; // @synthesize connectedAddressIndex=_connectedAddressIndex;
@property(nonatomic) _Bool synthesizedIPv6Address; // @synthesize synthesizedIPv6Address=_synthesizedIPv6Address;
@property(nonatomic) unsigned long long ipv6AddressCount; // @synthesize ipv6AddressCount=_ipv6AddressCount;
@property(nonatomic) unsigned long long ipv4AddressCount; // @synthesize ipv4AddressCount=_ipv4AddressCount;
@property(nonatomic) unsigned long long flowDurationMilliseconds; // @synthesize flowDurationMilliseconds=_flowDurationMilliseconds;
@property(nonatomic) unsigned long long tlsMilliseconds; // @synthesize tlsMilliseconds=_tlsMilliseconds;
@property(nonatomic) unsigned long long flowConnectMilliseconds; // @synthesize flowConnectMilliseconds=_flowConnectMilliseconds;
@property(nonatomic) unsigned long long proxyMilliseconds; // @synthesize proxyMilliseconds=_proxyMilliseconds;
@property(nonatomic) unsigned long long resolutionMilliseconds; // @synthesize resolutionMilliseconds=_resolutionMilliseconds;
@property(nonatomic) unsigned long long pathTriggerMilliseconds; // @synthesize pathTriggerMilliseconds=_pathTriggerMilliseconds;
@property(nonatomic) unsigned long long trafficClass; // @synthesize trafficClass=_trafficClass;
@property(nonatomic) _Bool multipathConfigured; // @synthesize multipathConfigured=_multipathConfigured;
@property(nonatomic) _Bool tfoConfigured; // @synthesize tfoConfigured=_tfoConfigured;
@property(nonatomic) _Bool tlsConfigured; // @synthesize tlsConfigured=_tlsConfigured;
@property(nonatomic) _Bool resolutionRequired; // @synthesize resolutionRequired=_resolutionRequired;
@property(nonatomic) _Bool usedFallback; // @synthesize usedFallback=_usedFallback;
@property(nonatomic) _Bool weakFallback; // @synthesize weakFallback=_weakFallback;
@property(nonatomic) _Bool fallbackEligible; // @synthesize fallbackEligible=_fallbackEligible;
@property(nonatomic) _Bool customProxyConfigured; // @synthesize customProxyConfigured=_customProxyConfigured;
@property(nonatomic) _Bool systemProxyConfigured; // @synthesize systemProxyConfigured=_systemProxyConfigured;
@property(nonatomic) _Bool triggeredPath; // @synthesize triggeredPath=_triggeredPath;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMultipathBytesOutInitial;
@property(nonatomic) _Bool hasMultipathBytesInInitial;
@property(nonatomic) _Bool hasMultipathBytesOutWiFi;
@property(nonatomic) _Bool hasMultipathBytesInWiFi;
@property(nonatomic) _Bool hasMultipathBytesOutCell;
@property(nonatomic) _Bool hasMultipathBytesInCell;
@property(nonatomic) _Bool hasFirstParty;
@property(nonatomic) _Bool hasMultipathServiceType;
@property(nonatomic) _Bool hasTfoUsed;
@property(nonatomic) _Bool hasSynRetransmissionCount;
@property(nonatomic) _Bool hasRTTvariance;
@property(nonatomic) _Bool hasBestRTT;
@property(nonatomic) _Bool hasSmoothedRTT;
@property(nonatomic) _Bool hasCurrentRTT;
@property(nonatomic) _Bool hasPacketsOut;
@property(nonatomic) _Bool hasPacketsIn;
@property(nonatomic) _Bool hasBytesRetransmitted;
@property(nonatomic) _Bool hasBytesOutOfOrder;
@property(nonatomic) _Bool hasBytesDuplicate;
@property(nonatomic) _Bool hasBytesOut;
@property(nonatomic) _Bool hasBytesIn;
@property(nonatomic) _Bool hasSynthesizedExtraIPv6Address;
@property(nonatomic) _Bool hasTlsVersionTimeout;
@property(nonatomic) _Bool hasIpv6DNSServerCount;
@property(nonatomic) _Bool hasIpv4DNSServerCount;
@property(nonatomic) _Bool hasIpv6Available;
@property(nonatomic) _Bool hasIpv4Available;
- (int)StringAsStackLevel:(id)arg1;
- (id)stackLevelAsString:(int)arg1;
@property(nonatomic) _Bool hasStackLevel;
@property(nonatomic) int stackLevel; // @synthesize stackLevel=_stackLevel;
- (int)StringAsTlsVersion:(id)arg1;
- (id)tlsVersionAsString:(int)arg1;
@property(nonatomic) _Bool hasTlsVersion;
@property(nonatomic) int tlsVersion; // @synthesize tlsVersion=_tlsVersion;
- (int)StringAsAppleApp:(id)arg1;
- (id)appleAppAsString:(int)arg1;
@property(nonatomic) _Bool hasAppleApp;
@property(nonatomic) int appleApp; // @synthesize appleApp=_appleApp;
- (int)StringAsAppleHost:(id)arg1;
- (id)appleHostAsString:(int)arg1;
@property(nonatomic) _Bool hasAppleHost;
@property(nonatomic) int appleHost; // @synthesize appleHost=_appleHost;
- (int)StringAsConnectionMode:(id)arg1;
- (id)connectionModeAsString:(int)arg1;
@property(nonatomic) _Bool hasConnectionMode;
@property(nonatomic) int connectionMode; // @synthesize connectionMode=_connectionMode;
@property(nonatomic) _Bool hasDataStallCount;
@property(nonatomic) _Bool hasConnectionReuseCount;
- (int)StringAsConnectedInterfaceType:(id)arg1;
- (id)connectedInterfaceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasConnectedInterfaceType;
@property(nonatomic) int connectedInterfaceType; // @synthesize connectedInterfaceType=_connectedInterfaceType;
@property(nonatomic) _Bool hasConnectedAddressIndex;
- (int)StringAsConnectedAddressFamily:(id)arg1;
- (id)connectedAddressFamilyAsString:(int)arg1;
@property(nonatomic) _Bool hasConnectedAddressFamily;
@property(nonatomic) int connectedAddressFamily; // @synthesize connectedAddressFamily=_connectedAddressFamily;
- (int)StringAsFirstAddressFamily:(id)arg1;
- (id)firstAddressFamilyAsString:(int)arg1;
@property(nonatomic) _Bool hasFirstAddressFamily;
@property(nonatomic) int firstAddressFamily; // @synthesize firstAddressFamily=_firstAddressFamily;
@property(nonatomic) _Bool hasSynthesizedIPv6Address;
@property(nonatomic) _Bool hasIpv6AddressCount;
@property(nonatomic) _Bool hasIpv4AddressCount;
@property(nonatomic) _Bool hasFlowDurationMilliseconds;
@property(nonatomic) _Bool hasTlsMilliseconds;
@property(nonatomic) _Bool hasFlowConnectMilliseconds;
@property(nonatomic) _Bool hasProxyMilliseconds;
@property(nonatomic) _Bool hasResolutionMilliseconds;
@property(nonatomic) _Bool hasPathTriggerMilliseconds;
- (int)StringAsFailureReason:(id)arg1;
- (id)failureReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasFailureReason;
@property(nonatomic) int failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) _Bool hasTrafficClass;
@property(nonatomic) _Bool hasMultipathConfigured;
@property(nonatomic) _Bool hasTfoConfigured;
@property(nonatomic) _Bool hasTlsConfigured;
@property(nonatomic) _Bool hasResolutionRequired;
@property(nonatomic) _Bool hasUsedFallback;
@property(nonatomic) _Bool hasWeakFallback;
@property(nonatomic) _Bool hasFallbackEligible;
- (int)StringAsUsedProxyType:(id)arg1;
- (id)usedProxyTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasUsedProxyType;
@property(nonatomic) int usedProxyType; // @synthesize usedProxyType=_usedProxyType;
@property(nonatomic) _Bool hasCustomProxyConfigured;
@property(nonatomic) _Bool hasSystemProxyConfigured;
@property(nonatomic) _Bool hasTriggeredPath;
@property(nonatomic) _Bool hasTimestamp;

@end

