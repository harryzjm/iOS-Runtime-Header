//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager, HMDMetricsDateProvider, NSString;

__attribute__((visibility("hidden")))
@interface HMDHouseholdActivityLogEventContributor
{
    NSString *_householdGroupName;
    HMDEventCountersManager *_countersManager;
    HMDMetricsDateProvider *_dateProvider;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) HMDEventCountersManager *countersManager; // @synthesize countersManager=_countersManager;
@property(readonly, nonatomic) NSString *householdGroupName; // @synthesize householdGroupName=_householdGroupName;
- (void)deleteCountersAfterDate:(id)arg1;
- (void)deleteCountersBeforeDate:(id)arg1;
- (void)finishCoalescingLogEvent:(id)arg1;
- (void)coalesceLogEvent:(id)arg1 fromSourceEvent:(id)arg2;
- (void)startCoalescingLogEvent:(id)arg1;
- (void)contributeLogEvent:(id)arg1 toCoreAnalyticsEvent:(id)arg2;
- (void)deserializeLogEvent:(id)arg1 fromSerializedMetric:(id)arg2;
- (void)contributeLogEvent:(id)arg1 toSerializedMetric:(id)arg2;
- (void)populateLogEvent:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3;
- (id)householdGroupForLogEvent:(id)arg1;
- (id)householdGroupForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;
- (id)initWithHouseholdGroupName:(id)arg1 countersManager:(id)arg2 dateProvider:(id)arg3;

@end

