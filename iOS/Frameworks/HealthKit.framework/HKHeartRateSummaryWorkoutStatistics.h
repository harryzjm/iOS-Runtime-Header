//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQuantity;

@interface HKHeartRateSummaryWorkoutStatistics
{
    unsigned long long _workoutActivityType;
    HKQuantity *_averageHeartRate;
    HKQuantity *_maximumHeartRate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setMaximumHeartRate:) HKQuantity *maximumHeartRate; // @synthesize maximumHeartRate=_maximumHeartRate;
@property(retain, nonatomic, setter=_setAverageHeartRate:) HKQuantity *averageHeartRate; // @synthesize averageHeartRate=_averageHeartRate;
@property(readonly, nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4;

@end
