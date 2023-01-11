//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKWorkout.h>

@interface HKWorkout (FitnessUI)
+ (unsigned long long)fiui_associatedMetricForGoalType:(unsigned long long)arg1;
+ (_Bool)fiui_shouldTrackPaceWithOdometerForActivityType:(unsigned long long)arg1;
+ (_Bool)_isHeartRateSupportedInPowerSettingsForActivityType:(unsigned long long)arg1;
+ (_Bool)_isHeartRateSupportedInPrivacySettings;
+ (_Bool)fiui_isHeartRateSupportedForActivityType:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
+ (id)fiui_supportedGoalTypesForActivityType:(id)arg1;
+ (id)fiui_supportedMetricsForActivityType:(id)arg1;
+ (double)fiui_weightedAverageHeartRateWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)fiui_splitsFromDistanceSamples:(id)arg1 distanceInMetersPerSplit:(double)arg2 workoutStartDate:(id)arg3;
- (long long)fiui_strokeStyle;
- (long long)fiui_swimmingLocationType;
- (id)fiui_lapLength;
- (double)fiui_averageTimePerLap;
- (id)fiui_connectedGymBrandName;
- (_Bool)fiui_isConnectedGymWorkout;
- (id)fiui_finalWorkoutUUID;
- (double)fiui_averagePace;
- (id)_fiui_averagePaceQty;
- (_Bool)fiui_hasAveragePace;
- (double)fiui_averagePower;
- (double)fiui_averageCadence;
- (double)fiui_totalStepCount;
- (id)fiui_totalDistance;
- (double)fiui_duration;
- (id)fiui_elevation;
- (_Bool)fiui_hasElevation;
- (_Bool)fiui_hasWeatherData;
- (id)fiui_keyValueSummary;
- (long long)fiui_numberOfEventsOfType:(long long)arg1;
- (id)fiui_eventsOfType:(long long)arg1;
- (double)fiui_completionFactor;
- (id)fiui_activityType;
@end

