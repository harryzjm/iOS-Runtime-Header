//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REActiveWorkoutPredictorProperties-Protocol.h>

@class HKQuery, NSDate, REUpNextTimer;

@interface REActiveWorkoutPredictor <REActiveWorkoutPredictorProperties>
{
    int _workoutStateNotifyToken;
    float _dailyAverageWorkouts;
    unsigned long long _numberOfWorkoutsPerformedToday;
    HKQuery *_workoutObservationQuery;
    REUpNextTimer *_workoutQueryCoalesceTimer;
    _Bool _hasActiveWorkout;
    NSDate *_lastCompletedWorkoutDate;
}

+ (id)supportedFeatures;
+ (double)updateInterval;
- (void).cxx_destruct;
@property(retain) NSDate *lastCompletedWorkoutDate; // @synthesize lastCompletedWorkoutDate=_lastCompletedWorkoutDate;
@property _Bool hasActiveWorkout; // @synthesize hasActiveWorkout=_hasActiveWorkout;
@property(readonly, nonatomic) unsigned long long numberOfWorkoutsPerformedToday;
@property(readonly, nonatomic) float dailyAverageWorkouts;
@property(readonly, nonatomic) _Bool currentlyHasActiveWorkout;
- (void)_processWorkoutHistoryData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_fetchWorkoutHistory;
- (void)_scheduleFetchWorkoutTimer;
- (void)_updateWorkoutState;
- (void)_cancelMonitoringWorkoutIfNeeded;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
@property(readonly, nonatomic) NSDate *lastWorkoutDate;
@property(readonly, nonatomic, getter=isActiveWorkout) _Bool activeWorkout;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (id)_init;

@end
