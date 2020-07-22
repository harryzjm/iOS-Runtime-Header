//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKWorkoutConfiguration, NSDate, NSUUID;
@protocol OS_dispatch_queue, _HKWorkoutSessionDelegate;

@interface _HKWorkoutSession : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _connectedToFitnessMachine;
    HKWorkoutConfiguration *_workoutConfiguration;
    id <_HKWorkoutSessionDelegate> _delegate;
    long long _state;
    NSDate *_startDate;
    NSDate *_endDate;
    NSUUID *_UUID;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)areSwimmingSessionsAvailable;
@property(nonatomic) _Bool connectedToFitnessMachine; // @synthesize connectedToFitnessMachine=_connectedToFitnessMachine;
@property(retain, nonatomic, setter=_setUUID:) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <_HKWorkoutSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
- (void).cxx_destruct;
- (_Bool)_validateWorkoutConfiguration:(id)arg1 errorOut:(id *)arg2;
- (void)didGenerateEvent:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didChangeToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2;

@end

