//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAchievementEngineDelegate-Protocol.h>
#import <HealthDaemon/_HKAchievementPredicateWorkoutsEnvironmentDataSource-Protocol.h>

@class HDProfile, HDTransientAchievementDataStore, HKActivitySummary, NSCalendar, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HDAchievementDoctor : NSObject <HDAchievementEngineDelegate, _HKAchievementPredicateWorkoutsEnvironmentDataSource>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDTransientAchievementDataStore *_dataStore;
    NSCalendar *_calendar;
    HKActivitySummary *_currentActivitySummary;
    HKActivitySummary *_yesterdayActivitySummary;
    NSMutableArray *_workouts;
    NSMutableArray *_workoutEndDates;
}

- (void).cxx_destruct;
- (id)workoutsInDateRangeStart:(id)arg1 end:(id)arg2;
- (id)workoutsOfType:(id)arg1;
- (long long)mostRecentWorkoutAnchor;
- (id)workoutsEndingAfterAnchor:(long long)arg1 newAnchor:(long long *)arg2;
- (unsigned long long)stepsTakenToday;
- (unsigned long long)stepsTakenYesterday;
- (unsigned long long)standingHoursToday;
- (unsigned long long)standingHoursYesterday;
- (double)briskMinutesToday;
- (double)briskMinutesYesterday;
- (double)caloriesBurnedToday;
- (double)caloriesBurnedYesterday;
- (id)energyBurnedGoalToday;
- (id)energyBurnedGoalYesterday;
- (long long)activitySummaryIndexToday;
- (id)currentDate;
- (id)_achievementsGroupedByActivityCacheIndex:(id)arg1;
- (id)_fetchAchievementsWithError:(id *)arg1;
- (id)_fetchWorkoutsSortedByEndDateWithError:(id *)arg1;
- (id)_fetchActivitySummariesOrderedByCacheIndexWithError:(id *)arg1;
- (id)_newEmptyActivitySummaryWithStartDate:(id)arg1 startDateComponents:(id)arg2 calorieGoal:(id)arg3;
- (_Bool)_isActivitySummary:(id)arg1 oneDayAfterActivitySummary:(id)arg2;
- (id)_queue_findExpectedAchievements:(id)arg1 missingFromAchievements:(id)arg2;
- (id)_queue_detectAchievementsForActivitySummaries:(id)arg1 workouts:(id)arg2 getResultingKeyValues:(id *)arg3;
- (_Bool)_queue_detectMissingAchievements:(id *)arg1 resultingKeyValues:(id *)arg2 error:(id *)arg3;
- (_Bool)_queue_saveMissingAchievements:(id)arg1 keyValues:(id)arg2 error:(id *)arg3;
- (void)_addWorkout:(id)arg1;
- (id)_runAchievementEngine:(id)arg1 withPredicateEnvironment:(id)arg2 dataStore:(id)arg3 todayActivitySummary:(id)arg4 yesterdayActivitySummary:(id)arg5 currentDate:(id)arg6 addedWorkouts:(id)arg7;
- (void)runAchievementsFixupAsDryRun:(_Bool)arg1 persistingResultingKeyValues:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithProfile:(id)arg1 targetQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

