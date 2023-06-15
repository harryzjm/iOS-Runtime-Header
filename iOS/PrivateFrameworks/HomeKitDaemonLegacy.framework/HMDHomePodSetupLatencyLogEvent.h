//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomePodSetupLatencyLogEvent : HMMLogEvent
{
    unsigned long long _setupStartTime;
    unsigned long long _setupEndTime;
    unsigned long long _settingsCreationTime;
    unsigned long long _pairingIdentityCreationTime;
    unsigned long long _accessoryAddProcessedTime;
    unsigned long long _siriReadinessTime;
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property(readonly, nonatomic) unsigned long long siriReadinessTime; // @synthesize siriReadinessTime=_siriReadinessTime;
@property(readonly, nonatomic) unsigned long long accessoryAddProcessedTime; // @synthesize accessoryAddProcessedTime=_accessoryAddProcessedTime;
@property(readonly, nonatomic) unsigned long long pairingIdentityCreationTime; // @synthesize pairingIdentityCreationTime=_pairingIdentityCreationTime;
@property(readonly, nonatomic) unsigned long long settingsCreationTime; // @synthesize settingsCreationTime=_settingsCreationTime;
@property(readonly, nonatomic) unsigned long long setupEndTime; // @synthesize setupEndTime=_setupEndTime;
@property(readonly, nonatomic) unsigned long long setupStartTime; // @synthesize setupStartTime=_setupStartTime;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithSetupStartTime:(unsigned long long)arg1 setupEndTime:(unsigned long long)arg2 settingsCreationTime:(unsigned long long)arg3 pairingIdentityCreationTime:(unsigned long long)arg4 accessoryAddProcessedTime:(unsigned long long)arg5 siriReadinessTime:(unsigned long long)arg6;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

