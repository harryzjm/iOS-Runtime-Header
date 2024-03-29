//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKCategorySample.h>

@interface HKCategorySample (HKMenstrualCycles)
+ (id)hkmc_categorySampleWithCycleFactor:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)hkmc_intermenstrualBleedingCategorySampleWithDate:(id)arg1;
+ (id)hkmc_categorySampleWithMenstrualSymptom:(unsigned long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithSexualActivity:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithProgesteroneTestResult:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithPregnancyTestResult:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithOvulationTestResult:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithCervicalMucusQuality:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithMenstrualFlow:(long long)arg1 date:(id)arg2 startOfCycle:(_Bool)arg3;
- (long long)hkmc_deviationType;
- (long long)hkmc_cycleFactor;
- (unsigned long long)hkmc_daySummarySymptom;
- (long long)hkmc_daySummarySexualActivity;
- (long long)hkmc_daySummaryProgesteroneTestResult;
- (long long)hkmc_daySummaryPregnancyTestResult;
- (long long)hkmc_daySummaryOvulationTestResult;
- (long long)hkmc_daySummaryCervicalMucusQuality;
- (long long)hkmc_daySummaryMenstrualFlow;
@end

