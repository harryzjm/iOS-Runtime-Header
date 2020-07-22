//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class BSDispatchSource;
@protocol OS_dispatch_queue;

@interface BSTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    CDUnknownBlockType _handler;
    BSDispatchSource *_source;
    double _startTime;
    double _fireInterval;
    double _repeatInterval;
    double _leewayInterval;
    unsigned long long _fireCount;
    _Bool _oneShot;
    _Bool _scheduled;
}

+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) double repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(readonly, nonatomic) double fireInterval; // @synthesize fireInterval=_fireInterval;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)_callOutQueue_noteTimerFired;
- (void)_queue_cancel;
- (void)cancel;
- (void)schedule;
@property(readonly, nonatomic) unsigned long long fireCount; // @synthesize fireCount=_fireCount;
@property(readonly, nonatomic, getter=isScheduled) _Bool scheduled; // @synthesize scheduled=_scheduled;
- (void)dealloc;
- (id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

