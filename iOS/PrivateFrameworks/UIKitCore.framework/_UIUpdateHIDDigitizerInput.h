//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIUpdateHIDAbstractInput-Protocol.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UIUpdateHIDDigitizerInput : NSObject <_UIUpdateHIDAbstractInput>
{
    struct _UIUpdateInputInternal _input;
    NSMutableArray *_events;
    NSMutableSet *_touches;
    long long _eventModelTimeDifference;
    long long _eventModelTimeDifferenceMin;
    long long _eventModelTimeDifferenceMax;
    unsigned long long _periodDuration;
    unsigned long long _sendPeriodDuration;
    _Bool _nextEventExpected;
    CDStruct_1d7448cc _eventExpectedProperties;
    CDStruct_1d7448cc _eventNotExpectedProperties;
}

- (void).cxx_destruct;
- (_Bool)readyForModelTime:(unsigned long long)arg1 readyTime:(unsigned long long *)arg2;
- (struct __IOHIDEvent *)stopEventForModelTime:(unsigned long long)arg1;
- (void)removeEvent:(struct __IOHIDEvent *)arg1;
- (void)addEvent:(struct __IOHIDEvent *)arg1;
- (id)init;

@end
