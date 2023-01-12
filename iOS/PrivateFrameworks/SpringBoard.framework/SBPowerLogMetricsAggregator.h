//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SBPowerLogMetricsAggregator : NSObject
{
    NSObject<OS_dispatch_queue> *_backgroundPowerLogQueue;
    _Bool _flushScheduled;
    NSMutableDictionary *_eventsWithDuration;
    NSCalendar *_gregorian;
}

- (void).cxx_destruct;
- (void)_flushEvents;
- (void)_startTimerIfNecessary;
- (void)flushEventsDueToIminentPowerdown;
- (void)emitEventOfType:(unsigned long long)arg1 withDuration:(double)arg2;
- (void)emitEventOfType:(unsigned long long)arg1;
- (id)init;

@end
