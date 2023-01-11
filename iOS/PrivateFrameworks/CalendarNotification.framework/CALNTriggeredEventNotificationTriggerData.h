//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKTravelEngineHypothesis, NSString;

@interface CALNTriggeredEventNotificationTriggerData : NSObject
{
    _Bool _isOffsetFromTravelTimeStart;
    unsigned long long _trigger;
    NSString *_alarmID;
    EKTravelEngineHypothesis *_hypothesis;
}

@property(readonly, nonatomic) EKTravelEngineHypothesis *hypothesis; // @synthesize hypothesis=_hypothesis;
@property(readonly, nonatomic) _Bool isOffsetFromTravelTimeStart; // @synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart;
@property(readonly, copy, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
@property(readonly, nonatomic) unsigned long long trigger; // @synthesize trigger=_trigger;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTrigger:(unsigned long long)arg1 alarmID:(id)arg2 isOffsetFromTravelTimeStart:(_Bool)arg3 hypothesis:(id)arg4;

@end
