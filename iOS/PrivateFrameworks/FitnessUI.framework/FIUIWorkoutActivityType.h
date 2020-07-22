//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FitnessUI/NSCoding-Protocol.h>

@class HKQuantity, NSDictionary, NSString;

@interface FIUIWorkoutActivityType : NSObject <NSCoding>
{
    _Bool _isIndoor;
    unsigned long long _identifier;
    unsigned long long _auxiliaryTypeIdentifier;
    NSDictionary *_metadata;
}

+ (id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2 swimmingLocationType:(long long)arg3 wheelchairUser:(_Bool)arg4;
+ (id)wheelchairActivityTypes;
+ (id)supportedActivityTypesWithIsWheelchairUser:(_Bool)arg1;
+ (id)activityTypeWithWorkout:(id)arg1;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2 metadata:(id)arg3;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) unsigned long long auxiliaryTypeIdentifier; // @synthesize auxiliaryTypeIdentifier=_auxiliaryTypeIdentifier;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)hasLocationTypePool;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)activityTypeByAddingLapLength:(double)arg1;
- (id)localizedNameComponents;
- (id)localizedName;
@property(readonly, nonatomic) unsigned long long effectiveTypeIdentifier;
@property(readonly, nonatomic) _Bool isCategorizedOtherWorkout;
@property(readonly, nonatomic) _Bool isIndoor;
@property(readonly, nonatomic) HKQuantity *lapLength;
@property(readonly, nonatomic) long long swimmingLocationType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2 metadata:(id)arg3;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
- (id)allAvailableMetrics;
- (id)allAvailableMetricsWithIsMachineWorkout:(_Bool)arg1;
- (_Bool)isAvailableMetricType:(unsigned long long)arg1 withIsMachineWorkout:(_Bool)arg2;
- (id)defaultEnabledMetrics;
- (id)appendMachineMetricsIfPossibleToMetrics:(id)arg1 maxNumMetrics:(long long)arg2;
- (id)_machineProvidedMetrics;
- (id)_defaultEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_indoorDefaultEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_metricsForSwimmingWithLocationType:(long long)arg1;

@end
