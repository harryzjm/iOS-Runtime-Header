//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCRCStackQueue;

@interface SCRCThread : NSObject
{
    SCRCStackQueue *_queue;
    SCRCStackQueue *_waitingQueue;
    id _queueLock;
    struct __CFRunLoopSource *_source;
    struct __CFRunLoop *_runLoop;
    _Bool _isInvalid;
    _Bool _isRegistered;
    _Bool _isTimerSet;
    _Bool _shouldStop;
    _Bool _isWaitingForStoppingThread;
    id __key;
    double _lastStartTime;
}

+ (id)currentThreadTaskCache;
+ (void)postStopNotification;
+ (void)invalidateForKey:(id)arg1;
+ (double)lastStartTimeForKey:(id)arg1;
+ (double)_performSelector:(SEL)arg1 withThreadKey:(id)arg2 onTarget:(id)arg3 waitTime:(double)arg4 cancelMask:(unsigned int)arg5 count:(unsigned int)arg6 firstObject:(id)arg7 moreObjects:(struct __va_list_tag [1])arg8;
+ (long long)defaultThreadPriority;
+ (void)setDefaultThreadPriority:(long long)arg1;
+ (long long)activeThreadCount;
+ (id)activity;
+ (void)initialize;
+ (_Bool)_removeThreadFromRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
+ (_Bool)_addThreadToRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
@property(nonatomic, setter=_setLastStartTime:) double lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(retain, nonatomic, setter=_setKey:) id _key; // @synthesize _key=__key;
- (void).cxx_destruct;
- (void)_processQueue;
- (void)_processQueueFromTimer;
- (void)_enqueueTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_enqueueImmediateTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (void)_enqueueWaitingTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double *)arg3;
- (_Bool)_isWaitingForStoppingThread;
- (void)_setIsWaitingForStoppingThread:(_Bool)arg1;
- (_Bool)isInvalid;
- (_Bool)_shouldStop;
- (void)setIsInvalid:(_Bool)arg1;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 objects:(id)arg5;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (double)_performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(struct __va_list_tag [1])arg6;
- (void)dealloc;
- (void)_threadDidStop;
- (_Bool)_debug_currentlyRunningOnThisThread;
- (void)_runThread:(id)arg1;
- (void)setName:(id)arg1;
- (id)_initWithKey:(id)arg1 task:(id)arg2;
- (id)init;
- (void)_assignThreadPriority;

@end

