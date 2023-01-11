//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PLCoreAnalyticsEventManager : NSObject
{
    NSMutableDictionary *_eventMap;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)publishAllEvents;
- (void)publishEventWithName:(id)arg1;
- (void)stopRecordingTimedEventWithToken:(double)arg1 forKey:(id)arg2 onEventWithName:(id)arg3;
- (double)startRecordingTimedEventToken;
- (id)rawEventForEventName:(id)arg1;
- (void)removeEventWithName:(id)arg1;
- (void)removePayloadValueForKey:(id)arg1 onEventWithName:(id)arg2;
- (void)mergePayload:(id)arg1 onEventWithName:(id)arg2;
- (void)setPayloadValue:(id)arg1 forKey:(id)arg2 onEventWithName:(id)arg3;
- (id)valueForKey:(id)arg1 onEventWithName:(id)arg2;
- (id)_eventForEventName:(id)arg1;
- (id)description;
- (id)init;

@end
