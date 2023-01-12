//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCStatisticsCollectorQueue : NSObject
{
    struct OpaqueFigThread *_thread;
    _Bool _isThreadRunning;
    _Bool _shouldBlockWhenFull;
    CDStruct_7df19fcb _messageQueue[300];
    int _firstMessageIndex;
    int _nextMessageIndex;
    int _maxQueueSize;
    int _almostFullQueueSize;
    CDUnknownBlockType _messageHandler;
    struct _opaque_pthread_mutex_t _queueMutex;
    struct _opaque_pthread_cond_t _queueNotFullCondition;
    struct _opaque_pthread_cond_t _queueNotEmptyCondition;
    struct _opaque_pthread_mutex_t _waitMutex;
    struct _opaque_pthread_cond_t _waitCondition;
    _Bool _shouldProcessMessageOnExternalThread;
    _Bool _shouldProcessMessageImmediately;
    unsigned int _queueProcessWaitTimeMs;
    unsigned int _queueFullCounter;
}

@property(copy) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) _Bool isThreadRunning; // @synthesize isThreadRunning=_isThreadRunning;
- (void)waitBeforeProcessingQueue;
- (void)cancelWait;
- (void)stopThread;
- (void)processMessage:(CDStruct_7df19fcb)arg1;
- (_Bool)dequeue:(CDStruct_7df19fcb *)arg1;
- (int)queueSize;
- (_Bool)isQueueFull;
- (_Bool)enqueue:(CDStruct_7df19fcb)arg1;
- (_Bool)shouldFlushOldMessagesWithCurrentMessagePriority:(int)arg1 didFlushQueue:(_Bool *)arg2;
- (void)flushAllNonHighPriorityStatistics;
- (void)flushAllStatistics;
- (void)drainAndProcessAllStatistics;
- (_Bool)addStatisticsMessage:(CDStruct_7df19fcb)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(_Bool)arg2 queueWaitTimeMs:(unsigned int)arg3 useExternalThread:(_Bool)arg4;

@end

