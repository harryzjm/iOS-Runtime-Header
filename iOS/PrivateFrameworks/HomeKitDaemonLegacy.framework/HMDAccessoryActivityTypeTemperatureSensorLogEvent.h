//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryActivityTypeTemperatureSensorLogEvent : HMMHomeLogEvent
{
    NSString *_characteristicValue;
    NSString *_accessoryUUIDString;
    NSString *_serviceUUIDString;
    NSString *_characteristicUUIDString;
    NSString *_timeStamp;
    NSString *_regionRange;
    NSString *_homePresence;
    NSString *_subscriptionEventTypeString;
    NSString *_triggerSource;
    NSString *_bundleId;
    NSString *_userUUID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *userUUID; // @synthesize userUUID=_userUUID;
@property(readonly, copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, copy, nonatomic) NSString *triggerSource; // @synthesize triggerSource=_triggerSource;
@property(readonly, copy, nonatomic) NSString *subscriptionEventTypeString; // @synthesize subscriptionEventTypeString=_subscriptionEventTypeString;
@property(readonly, copy, nonatomic) NSString *homePresence; // @synthesize homePresence=_homePresence;
@property(readonly, copy, nonatomic) NSString *regionRange; // @synthesize regionRange=_regionRange;
@property(readonly, copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, copy, nonatomic) NSString *characteristicUUIDString; // @synthesize characteristicUUIDString=_characteristicUUIDString;
@property(readonly, copy, nonatomic) NSString *serviceUUIDString; // @synthesize serviceUUIDString=_serviceUUIDString;
@property(readonly, copy, nonatomic) NSString *accessoryUUIDString; // @synthesize accessoryUUIDString=_accessoryUUIDString;
@property(readonly, copy, nonatomic) NSString *characteristicValue; // @synthesize characteristicValue=_characteristicValue;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithCharacteristicValue:(id)arg1 accessoryUUIDString:(id)arg2 serviceUUIDString:(id)arg3 characteristicUUIDString:(id)arg4 timeStamp:(id)arg5 regionRange:(id)arg6 homeUUID:(id)arg7 homePresence:(id)arg8 subscriptionEventTypeString:(id)arg9 triggerSource:(id)arg10 bundleId:(id)arg11 userUUID:(id)arg12;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

