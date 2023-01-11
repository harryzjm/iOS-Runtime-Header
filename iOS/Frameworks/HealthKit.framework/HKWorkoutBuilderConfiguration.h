//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDevice, HKQuantity, HKWorkoutConfiguration, NSUUID;

@interface HKWorkoutBuilderConfiguration
{
    _Bool _shouldCollectWorkoutEvents;
    _Bool _requiresRecovery;
    HKDevice *_device;
    HKWorkoutConfiguration *_workoutConfiguration;
    unsigned long long _goalType;
    HKQuantity *_goal;
    NSUUID *_associatedSessionUUID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool requiresRecovery; // @synthesize requiresRecovery=_requiresRecovery;
@property(nonatomic) _Bool shouldCollectWorkoutEvents; // @synthesize shouldCollectWorkoutEvents=_shouldCollectWorkoutEvents;
@property(copy, nonatomic) NSUUID *associatedSessionUUID; // @synthesize associatedSessionUUID=_associatedSessionUUID;
@property(copy, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property(nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property(copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
@property(copy, nonatomic) HKDevice *device; // @synthesize device=_device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
