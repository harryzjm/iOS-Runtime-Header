//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSError, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent
{
    NSNumber *_role;
    unsigned long long _setupStartTime;
    unsigned long long _setupEndTime;
    unsigned long long _accessoryAddEndTime;
    unsigned long long _accessoryRemoveTime;
    unsigned long long _configurationEndTime;
    NSError *_setupSessionError;
    NSString *_category;
    NSString *_accessorySoftwareVersion;
    NSNumber *_retryCount;
    unsigned long long _firstSettingTime;
    unsigned long long _languageSettingTime;
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
- (void).cxx_destruct;
@property(readonly) unsigned long long languageSettingTime; // @synthesize languageSettingTime=_languageSettingTime;
@property(readonly) unsigned long long firstSettingTime; // @synthesize firstSettingTime=_firstSettingTime;
@property(readonly, copy) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, copy) NSString *accessorySoftwareVersion; // @synthesize accessorySoftwareVersion=_accessorySoftwareVersion;
@property(readonly, copy) NSString *category; // @synthesize category=_category;
@property(readonly, copy) NSError *setupSessionError; // @synthesize setupSessionError=_setupSessionError;
@property(readonly) unsigned long long configurationEndTime; // @synthesize configurationEndTime=_configurationEndTime;
@property(readonly) unsigned long long accessoryRemoveTime; // @synthesize accessoryRemoveTime=_accessoryRemoveTime;
@property(readonly) unsigned long long accessoryAddEndTime; // @synthesize accessoryAddEndTime=_accessoryAddEndTime;
@property(readonly) unsigned long long setupEndTime; // @synthesize setupEndTime=_setupEndTime;
@property(readonly) unsigned long long setupStartTime; // @synthesize setupStartTime=_setupStartTime;
@property(readonly, copy) NSNumber *role; // @synthesize role=_role;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithRole:(long long)arg1 setupStartTime:(unsigned long long)arg2 setupEndTime:(unsigned long long)arg3 accessoryAddEndTime:(unsigned long long)arg4 accessoryRemoveTime:(unsigned long long)arg5 configurationEndTime:(unsigned long long)arg6 setupSessionError:(id)arg7 category:(id)arg8 accessorySoftwareVersion:(id)arg9 retryCount:(unsigned long long)arg10 firstSettingTime:(unsigned long long)arg11 languageSettingTime:(unsigned long long)arg12;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

