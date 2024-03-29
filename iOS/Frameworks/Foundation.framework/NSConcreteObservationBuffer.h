//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObservationBuffer.h"

@class NSMutableArray, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSConcreteObservationBuffer : NSObservationBuffer
{
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSOperationQueue *_outputQueue;
    long long _policy;
    int _state;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    NSMutableArray *_dequeue;
    unsigned long long _maxCount;
    CDUnknownBlockType _bufferFullHandler;
    _Bool _memoryPressureSensitive;
    _Bool _automaticallyEmitsObjects;
}

- (void)setMemoryPressureSensitive:(_Bool)arg1;
- (_Bool)isMemoryPressureSensitive;
- (void)setAutomaticallyEmitsObjects:(_Bool)arg1;
- (_Bool)automaticallyEmitsObjects;
- (void)setBufferFullHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)bufferFullHandler;
- (void)_receiveBox:(id)arg1;
- (void)_mergeChanges;
- (void)emitAllObjects;
- (void)_alreadyOnQueueEmitAllObjects;
- (void)emitObject;
- (void)_alreadyOnQueueEmitObject;
- (void)dealloc;
- (id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;

@end

