//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthToolbox/HKActivitySummaryDataProviderObserver-Protocol.h>

@class HKActivitySummaryDataProvider, NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDActivityQueryTestController : NSObject <HKActivitySummaryDataProviderObserver>
{
    WDProfile *_profile;
    HKActivitySummaryDataProvider *_provider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKActivitySummaryDataProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;
- (void)runTest;
- (void)_logTrialQuery;
- (void)_hourlyActivityDataForStartDate:(id)arg1 endDate:(id)arg2 healthStore:(id)arg3 calendar:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_summariesFromStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 moveData:(id)arg4 exerciseData:(id)arg5 standData:(id)arg6;
- (id)_buildActivitySummaryFromDate:(id)arg1 calendar:(id)arg2 moveQuantity:(id)arg3 exerciseQuantity:(id)arg4 standQuantity:(id)arg5;
- (id)_stringForDate:(id)arg1;
- (id)_dateDaysAgo:(id)arg1;
- (void)_logDataFromAllTimeScopes;
- (void)_logDataFromTimeScope:(long long)arg1 title:(id)arg2;
- (void)_logActivitySummary:(id)arg1 calendar:(id)arg2;
- (id)_stringForDateComponents:(id)arg1;
- (id)_quantityValue:(id)arg1 title:(id)arg2;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
