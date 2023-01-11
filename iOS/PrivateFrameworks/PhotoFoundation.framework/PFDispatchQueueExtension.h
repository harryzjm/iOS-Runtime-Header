//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFDispatchQueueExtending-Protocol.h>

@class NSString;

@interface PFDispatchQueueExtension : NSObject <PFDispatchQueueExtending>
{
}

+ (id)extendedQueue:(id)arg1;
+ (id)extensionOnQueue:(id)arg1;
+ (id)extensionOnQueue:(id)arg1 matching:(CDUnknownBlockType)arg2;
+ (id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3;
+ (id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newConcurrentQueueWithLabel:(id)arg1;
+ (id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3;
+ (id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newSerialQueueWithLabel:(id)arg1;
- (void)queueWillResume:(id)arg1;
- (void)queueDidSuspend:(id)arg1;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 willExecute:(id)arg2;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(CDUnknownBlockType)arg3;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(CDUnknownBlockType)arg3;
- (id)queue:(id)arg1 receivedDispatchAfter:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchAsync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchSync:(CDUnknownBlockType)arg2;
- (id)newBlockInfo;
- (id)queue:(id)arg1 willTargetQueue:(id)arg2;
- (void)installOnQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

