//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AXRedirectedEventDetector : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentEvents;
    AXDispatchTimer *_flushEventsTimer;
}

+ (void)setFlushEventsTimerDelay:(double)arg1;
+ (void)flushEvents;
@property(retain, nonatomic) AXDispatchTimer *flushEventsTimer; // @synthesize flushEventsTimer=_flushEventsTimer;
@property(retain, nonatomic) NSMutableArray *recentEvents; // @synthesize recentEvents=_recentEvents;
- (void).cxx_destruct;
- (double)_elapsedTimeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (_Bool)isRedirectedEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)_flushEventsIfNecessary;
- (id)init;

@end

