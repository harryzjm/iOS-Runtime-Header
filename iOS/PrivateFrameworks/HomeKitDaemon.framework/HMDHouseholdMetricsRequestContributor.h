//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDHouseholdMetricsRequestContributor
{
}

- (void)coalesceLogEvent:(id)arg1 fromSourceEvent:(id)arg2;
- (void)contributeLogEvent:(id)arg1 toCoreAnalyticsEvent:(id)arg2;
- (void)deserializeLogEvent:(id)arg1 fromSerializedMetric:(id)arg2;
- (void)contributeLogEvent:(id)arg1 toSerializedMetric:(id)arg2;
- (void)populateLogEvent:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3;
- (void)incrementRequestCountForHomeUUID:(id)arg1 date:(id)arg2;
- (id)initWithCountersManager:(id)arg1 dateProvider:(id)arg2;

@end

