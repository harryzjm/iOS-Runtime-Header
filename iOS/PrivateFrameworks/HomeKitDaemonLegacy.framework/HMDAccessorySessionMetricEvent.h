//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccessory, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessorySessionMetricEvent
{
    _Bool _isHomeThreadCapable;
    _Bool _isPrimaryThreadCapable;
    _Bool _isThreadNetworkUp;
    _Bool _isPrimary;
    _Bool _lastSeenWithLowBattery;
    _Bool _isThreadAccessory;
    unsigned long long _percentageDurationActiveSession;
    unsigned long long _percentDurationReachable;
    double _sessionCheckIntervalSec;
    unsigned long long _sessionFailures;
    double _submissionIntervalSec;
    unsigned long long _successfulSessionRetries;
    long long _topErrorCode;
    NSString *_topErrorDomain;
    unsigned long long _numActiveSessionClients;
    unsigned long long _lastSeenSecondsAgo;
    NSUUID *_homeUUID;
    NSString *_accessoryTransport;
    NSString *_expectedTransport;
    unsigned long long _numIPAddresses;
    unsigned long long _numIPAddressesTried;
    unsigned long long _numBonjourNames;
    HMDAccessory *_accessory;
}

- (void).cxx_destruct;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) unsigned long long numBonjourNames; // @synthesize numBonjourNames=_numBonjourNames;
@property(readonly, nonatomic) unsigned long long numIPAddressesTried; // @synthesize numIPAddressesTried=_numIPAddressesTried;
@property(readonly, nonatomic) unsigned long long numIPAddresses; // @synthesize numIPAddresses=_numIPAddresses;
@property(readonly, nonatomic) _Bool isThreadAccessory; // @synthesize isThreadAccessory=_isThreadAccessory;
@property(readonly, nonatomic) NSString *expectedTransport; // @synthesize expectedTransport=_expectedTransport;
@property(readonly, nonatomic) NSString *accessoryTransport; // @synthesize accessoryTransport=_accessoryTransport;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, nonatomic) _Bool lastSeenWithLowBattery; // @synthesize lastSeenWithLowBattery=_lastSeenWithLowBattery;
@property(readonly, nonatomic) unsigned long long lastSeenSecondsAgo; // @synthesize lastSeenSecondsAgo=_lastSeenSecondsAgo;
@property(readonly, nonatomic) unsigned long long numActiveSessionClients; // @synthesize numActiveSessionClients=_numActiveSessionClients;
@property(readonly, nonatomic) NSString *topErrorDomain; // @synthesize topErrorDomain=_topErrorDomain;
@property(readonly, nonatomic) long long topErrorCode; // @synthesize topErrorCode=_topErrorCode;
@property(readonly, nonatomic) unsigned long long successfulSessionRetries; // @synthesize successfulSessionRetries=_successfulSessionRetries;
@property(readonly, nonatomic) double submissionIntervalSec; // @synthesize submissionIntervalSec=_submissionIntervalSec;
@property(readonly, nonatomic) unsigned long long sessionFailures; // @synthesize sessionFailures=_sessionFailures;
@property(readonly, nonatomic) double sessionCheckIntervalSec; // @synthesize sessionCheckIntervalSec=_sessionCheckIntervalSec;
@property(readonly, nonatomic) unsigned long long percentDurationReachable; // @synthesize percentDurationReachable=_percentDurationReachable;
@property(readonly, nonatomic) unsigned long long percentageDurationActiveSession; // @synthesize percentageDurationActiveSession=_percentageDurationActiveSession;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(readonly, nonatomic) _Bool isThreadNetworkUp; // @synthesize isThreadNetworkUp=_isThreadNetworkUp;
@property(readonly, nonatomic) _Bool isPrimaryThreadCapable; // @synthesize isPrimaryThreadCapable=_isPrimaryThreadCapable;
@property(readonly, nonatomic) _Bool isHomeThreadCapable; // @synthesize isHomeThreadCapable=_isHomeThreadCapable;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithAccessory:(id)arg1 expectedTransport:(id)arg2 homeUUID:(id)arg3 topErrorDomain:(id)arg4 topErrorCode:(long long)arg5 sessionFailureCount:(unsigned long long)arg6;
- (id)initWithAccessory:(id)arg1 sessionMetric:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

