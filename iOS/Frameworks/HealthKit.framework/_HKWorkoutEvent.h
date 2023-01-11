//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKPersistableWorkoutEvent-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDateInterval, NSDictionary, NSError, NSUUID;

@interface _HKWorkoutEvent : NSObject <NSSecureCoding, HKPersistableWorkoutEvent>
{
    NSUUID *_sessionId;
    long long _eventType;
    NSDateInterval *_dateInterval;
    NSError *_error;
    NSDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(readonly, copy, nonatomic) NSUUID *sessionId; // @synthesize sessionId=_sessionId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) long long workoutEventType;
@property(readonly, copy, nonatomic) NSUUID *sessionUUID;
- (id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5;
- (id)initWithSessionId:(id)arg1 error:(id)arg2;
- (id)initWithEventType:(long long)arg1 sessionId:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4;

@end
