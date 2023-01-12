//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKWorkoutRoute, NSDateInterval, NSUUID;

__attribute__((visibility("hidden")))
@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration
{
    HKWorkoutRoute *_workoutRoute;
    NSUUID *_workoutUUID;
    NSDateInterval *_dateInterval;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(retain, nonatomic) NSUUID *workoutUUID; // @synthesize workoutUUID=_workoutUUID;
@property(retain, nonatomic) HKWorkoutRoute *workoutRoute; // @synthesize workoutRoute=_workoutRoute;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

