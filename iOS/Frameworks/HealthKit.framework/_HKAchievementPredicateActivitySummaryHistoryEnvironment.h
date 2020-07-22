//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _HKActivitySummaryHistoryEnvironmentDataSource;

@interface _HKAchievementPredicateActivitySummaryHistoryEnvironment
{
    _HKAchievementPredicateActivitySummaryHistoryEnvironment *_previous;
    id <_HKActivitySummaryHistoryEnvironmentDataSource> _dataSource;
}

@property(nonatomic) __weak id <_HKActivitySummaryHistoryEnvironmentDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) _HKAchievementPredicateActivitySummaryHistoryEnvironment *previous; // @synthesize previous=_previous;
- (void).cxx_destruct;
- (id)dailyAverageNumberForGoalType:(unsigned long long)arg1 fromTimeNumber:(id)arg2 toTimeNumber:(id)arg3;
- (id)totalNumberForGoalOfType:(unsigned long long)arg1 fromTimeNumber:(id)arg2 toTimeNumber:(id)arg3;
- (double)_valueForGoalType:(unsigned long long)arg1 inDayEnvironment:(id)arg2;
- (id)summaryEnvironmentsFromTimeNumber:(id)arg1 toTimeNumber:(id)arg2;
- (id)monthlyAggregateValueForKey:(id)arg1 inMonthOfReferenceTimeNumber:(id)arg2;

@end

