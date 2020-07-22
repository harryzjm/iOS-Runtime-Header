//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDateInterval, NSDictionary;

@interface HKWorkoutEvent : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    NSDateInterval *_dateInterval;
    NSDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
+ (id)workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2;
+ (id)_workoutEventWithInternalEvent:(id)arg1;
+ (id)_workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)_workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)_newWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
@property(readonly, copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_validateConfiguration;
- (void)_assertPropertiesValid;
@property(readonly, copy) NSDate *date;
@property(readonly) long long type;
- (id)init;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
