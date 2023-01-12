//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCalendar;

__attribute__((visibility("hidden")))
@interface HKSleepChartDataSource
{
    NSCalendar *_calendar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(_Bool)arg2;
- (CDUnknownBlockType)queryDataForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 healthStore:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)supportsChartQueryDataGeneration;
- (id)_lastNonZeroDurationGoal:(id)arg1;
- (id)_lastNonEmptySchedules:(id)arg1;
- (double)_findMidPointOffsetForSummary:(id)arg1 sleepCategory:(long long)arg2;
- (id)_computeAveragePeriodsFromSummaries:(id)arg1 summaryDateInterval:(id)arg2;
- (id)_endOfWeekContainingDate:(id)arg1;
- (id)_computeOneWeeklySummary:(id)arg1;
- (id)_computeWeeklySummaries:(id)arg1;
- (id)_secondsFromStartDate:(id)arg1 dateComponents:(id)arg2;
- (id)_sleepScheduleForSummary:(id)arg1;
- (CDUnknownBlockType)_mappingFunctionForConsistencyChartWithContext:(id)arg1;
- (id)_sleepDurationGoalFromQuantity:(id)arg1;
- (id)_chartPointDateForSummary:(id)arg1;
- (CDUnknownBlockType)_mappingFunctionForDurationChartWithContext:(id)arg1;
- (CDUnknownBlockType)mappingFunctionForContext:(id)arg1;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryDescription;
- (id)initWithHealthStore:(id)arg1 representativeDisplayType:(id)arg2 calendar:(id)arg3;

@end
