//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQuantity, NSArray;

@interface HKWorkout
{
    unsigned long long _workoutActivityType;
    double _duration;
    NSArray *_workoutEvents;
    HKQuantity *_totalEnergyBurned;
    HKQuantity *_totalBasalEnergyBurned;
    HKQuantity *_totalDistance;
    HKQuantity *_totalElevation;
    HKQuantity *_totalSwimmingStrokeCount;
    HKQuantity *_totalFlightsClimbed;
    unsigned long long _goalType;
    HKQuantity *_goal;
    _Bool _isWatchWorkout;
}

+ (_Bool)supportsSecureCoding;
+ (id)_allWorkoutActivityTypes;
+ (id)_allWorkoutTypeNames;
+ (unsigned long long)_workoutActivityTypeFromString:(id)arg1;
+ (id)_stringFromWorkoutActivityType:(unsigned long long)arg1;
+ (id)_activityTypeMappings;
+ (_Bool)_isConcreteObjectClass;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 statistics:(id)arg6 goalType:(unsigned long long)arg7 goal:(id)arg8 device:(id)arg9 metadata:(id)arg10;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 totalSwimmingStrokeCount:(id)arg9 totalFlightsClimbed:(id)arg10 goalType:(unsigned long long)arg11 goal:(id)arg12 device:(id)arg13 metadata:(id)arg14 config:(CDUnknownBlockType)arg15;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 totalFlightsClimbed:(id)arg7 device:(id)arg8 metadata:(id)arg9;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 totalSwimmingStrokeCount:(id)arg7 device:(id)arg8 metadata:(id)arg9;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
@property(nonatomic, getter=_isWatchWorkout, setter=_setIsWatchWorkout:) _Bool isWatchWorkout; // @synthesize isWatchWorkout=_isWatchWorkout;
@property(retain, nonatomic, getter=_goal, setter=_setGoal:) HKQuantity *goal; // @synthesize goal=_goal;
@property(nonatomic, getter=_goalType, setter=_setGoalType:) unsigned long long goalType; // @synthesize goalType=_goalType;
@property(readonly) HKQuantity *totalFlightsClimbed; // @synthesize totalFlightsClimbed=_totalFlightsClimbed;
- (void).cxx_destruct;
- (void)_enumerateActiveTimePeriods:(CDUnknownBlockType)arg1;
- (double)_goalInCanonicalUnit;
- (double)_totalFlightsClimbedInCanonicalUnit;
- (double)_totalSwimmingStrokeCountInCanonicalUnit;
- (double)_totalDistanceInCanonicalUnit;
- (double)_totalBasalEnergyBurnedInCanonicalUnit;
- (double)_totalEnergyBurnedInCanonicalUnit;
- (void)_setTotalFlightsClimbed:(id)arg1;
- (void)_setTotalSwimmingStrokeCount:(id)arg1;
@property(readonly) HKQuantity *totalSwimmingStrokeCount;
- (void)_setTotalDistance:(id)arg1;
@property(readonly) HKQuantity *totalDistance;
@property(retain, nonatomic, getter=_totalBasalEnergyBurned, setter=_setTotalBasalEnergyBurned:) HKQuantity *totalBasalEnergyBurned;
- (void)_setTotalEnergyBurned:(id)arg1;
@property(readonly) HKQuantity *totalEnergyBurned;
- (void)_setDuration:(double)arg1;
@property(readonly) double duration;
- (void)_setWorkoutEvents:(id)arg1;
@property(readonly, copy) NSArray *workoutEvents;
- (void)_setWorkoutActivityType:(unsigned long long)arg1;
@property(readonly) unsigned long long workoutActivityType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_validateWorkoutEvents:(id)arg1;
- (id)_validateConfiguration;
- (id)description;
- (id)_deepCopy;
- (void)_enumerateTimePeriodsWithBlock:(CDUnknownBlockType)arg1;
- (long long)hk_integerValue;

@end

