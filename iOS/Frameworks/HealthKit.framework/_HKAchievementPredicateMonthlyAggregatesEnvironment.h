//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _HKAchievementPredicateMonthlyAggregatesEnvironment
{
    long long _daysMeetingAllGoals;
    long long _daysMeetingMoveGoal;
    long long _daysMeetingMoveGoalByFactorOfTwo;
    long long _daysMeetingExerciseGoal;
    long long _daysMeetingStandGoal;
    double _activeCalories;
    double _activeCaloriesDailyAverage;
    double _exerciseMinutes;
    double _exerciseMinutesDailyAverage;
    double _distanceTraveled;
    long long _workouts;
}

@property(readonly, nonatomic) long long workouts; // @synthesize workouts=_workouts;
@property(readonly, nonatomic) double distanceTraveled; // @synthesize distanceTraveled=_distanceTraveled;
@property(readonly, nonatomic) double exerciseMinutesDailyAverage; // @synthesize exerciseMinutesDailyAverage=_exerciseMinutesDailyAverage;
@property(readonly, nonatomic) double exerciseMinutes; // @synthesize exerciseMinutes=_exerciseMinutes;
@property(readonly, nonatomic) double activeCaloriesDailyAverage; // @synthesize activeCaloriesDailyAverage=_activeCaloriesDailyAverage;
@property(readonly, nonatomic) double activeCalories; // @synthesize activeCalories=_activeCalories;
@property(readonly, nonatomic) long long daysMeetingStandGoal; // @synthesize daysMeetingStandGoal=_daysMeetingStandGoal;
@property(readonly, nonatomic) long long daysMeetingExerciseGoal; // @synthesize daysMeetingExerciseGoal=_daysMeetingExerciseGoal;
@property(readonly, nonatomic) long long daysMeetingMoveGoalByFactorOfTwo; // @synthesize daysMeetingMoveGoalByFactorOfTwo=_daysMeetingMoveGoalByFactorOfTwo;
@property(readonly, nonatomic) long long daysMeetingMoveGoal; // @synthesize daysMeetingMoveGoal=_daysMeetingMoveGoal;
@property(readonly, nonatomic) long long daysMeetingAllGoals; // @synthesize daysMeetingAllGoals=_daysMeetingAllGoals;
- (id)initWithNumberOfDaysInMonth:(unsigned long long)arg1 daysMeetingAllGoals:(long long)arg2 daysMeetingMoveGoal:(long long)arg3 daysMeetingMoveGoalByFactorOfTwo:(long long)arg4 daysMeetingExerciseGoal:(long long)arg5 daysMeetingStandGoal:(long long)arg6 activeCalories:(double)arg7 exerciseMinutes:(double)arg8 distanceTraveled:(double)arg9 workouts:(long long)arg10;

@end
