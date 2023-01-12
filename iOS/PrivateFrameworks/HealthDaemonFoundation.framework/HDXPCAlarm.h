//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDXPCAlarmScheduler, NSString;
@protocol OS_dispatch_queue;

@interface HDXPCAlarm : NSObject
{
    struct os_unfair_lock_s _lock;
    NSString *_eventName;
    HDXPCAlarmScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _unitTest_schedulerObserver;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType unitTest_schedulerObserver; // @synthesize unitTest_schedulerObserver=_unitTest_schedulerObserver;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *eventHandlerQueue; // @synthesize eventHandlerQueue=_eventHandlerQueue;
@property(readonly, nonatomic) HDXPCAlarmScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void)unitTest_fireEventImmediatelyWithDate:(id)arg1 isUserVisible:(_Bool)arg2;
- (void)eventDidFire:(id)arg1;
- (id)description;
- (void)unschedule;
- (void)setNextFireDate:(id)arg1 isUserVisible:(_Bool)arg2;
- (void)invalidate;
- (void)beginReceivingEventsWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithProfile:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3;
- (id)initWithDaemon:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3;

@end
