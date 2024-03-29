//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingLoadBalancerLogEvent : HMMLogEvent
{
    _Bool _selectedResidentHasActiveSessionWithCamera;
    NSNumber *_numberOfResidents;
    NSNumber *_numberOfRetries;
    NSNumber *_totalNumberOfJobSlots;
    NSNumber *_remainingNumberOfJobSlots;
    NSString *_selectedResidentDeviceType;
    NSNumber *_selectedResidentSystemResourceUsageLevel;
    NSNumber *_selectedResidentNumberOfActiveStreams;
    NSNumber *_selectedResidentJobSlots;
    NSNumber *_selectedResidentPartialJobSlots;
}

- (void).cxx_destruct;
@property(readonly) _Bool selectedResidentHasActiveSessionWithCamera; // @synthesize selectedResidentHasActiveSessionWithCamera=_selectedResidentHasActiveSessionWithCamera;
@property(readonly, copy) NSNumber *selectedResidentPartialJobSlots; // @synthesize selectedResidentPartialJobSlots=_selectedResidentPartialJobSlots;
@property(readonly, copy) NSNumber *selectedResidentJobSlots; // @synthesize selectedResidentJobSlots=_selectedResidentJobSlots;
@property(readonly, copy) NSNumber *selectedResidentNumberOfActiveStreams; // @synthesize selectedResidentNumberOfActiveStreams=_selectedResidentNumberOfActiveStreams;
@property(readonly, copy) NSNumber *selectedResidentSystemResourceUsageLevel; // @synthesize selectedResidentSystemResourceUsageLevel=_selectedResidentSystemResourceUsageLevel;
@property(readonly, copy) NSString *selectedResidentDeviceType; // @synthesize selectedResidentDeviceType=_selectedResidentDeviceType;
@property(readonly, copy) NSNumber *remainingNumberOfJobSlots; // @synthesize remainingNumberOfJobSlots=_remainingNumberOfJobSlots;
@property(readonly, copy) NSNumber *totalNumberOfJobSlots; // @synthesize totalNumberOfJobSlots=_totalNumberOfJobSlots;
@property(readonly, copy) NSNumber *numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(readonly, copy) NSNumber *numberOfResidents; // @synthesize numberOfResidents=_numberOfResidents;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithNumberOfResidents:(id)arg1 numberOfRetries:(id)arg2 totalNumberOfJobSlots:(id)arg3 remainingNumberOfJobSlots:(id)arg4 selectedResidentDeviceType:(id)arg5 selectedResidentNumberOfActiveStreams:(id)arg6 selectedResidentSystemResourceUsageLevel:(id)arg7 selectedResidentJobSlots:(id)arg8 selectedResidentPartialJobSlots:(id)arg9 selectedResidentHasActiveSessionWithCamera:(_Bool)arg10;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

