//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACHActivitySummaryUtility, ACHWorkoutUtility, HDDatabaseTransactionContext, HDProfile;

@interface ACHMonthlyChallengeDataSource : NSObject
{
    HDDatabaseTransactionContext *_databaseContext;
    HDProfile *_profile;
    ACHWorkoutUtility *_workoutUtility;
    ACHActivitySummaryUtility *_activitySummaryUtility;
}

- (void).cxx_destruct;
@property(nonatomic) __weak ACHActivitySummaryUtility *activitySummaryUtility; // @synthesize activitySummaryUtility=_activitySummaryUtility;
@property(nonatomic) __weak ACHWorkoutUtility *workoutUtility; // @synthesize workoutUtility=_workoutUtility;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // @synthesize databaseContext=_databaseContext;
- (long long)numberOfWorkoutsCompletedDuringDateInterval:(id)arg1;
- (long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg1;
- (long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg1;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)arg1;
- (double)exerciseMinutesDuringDateComponentInterval:(id)arg1;
- (double)moveTimeDuringDateComponentInterval:(id)arg1;
- (double)caloriesDuringDateComponentInterval:(id)arg1;
- (double)valueForMonthlyChallengeType:(unsigned long long)arg1 forDateComponentInterval:(id)arg2 inCalendar:(id)arg3;
- (id)initWithProfile:(id)arg1 activitySummaryUtility:(id)arg2 workoutUtility:(id)arg3;

@end
