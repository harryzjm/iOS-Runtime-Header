//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, SUScriptObject;

@interface SUScriptObjectInvocationBatch : NSObject
{
    NSMutableArray *_invocationQueue;
    NSLock *_lock;
    struct __CFDictionary *_proxies;
    SUScriptObject *_rootObject;
}

- (void).cxx_destruct;
@property SUScriptObject *rootObject;
- (void)enqueueInvocation:(id)arg1;
- (void)_delayedDequeueInvocations;
- (void)dequeueInvocations;
- (id)copyQueuedInvocationsForObject:(id)arg1;
- (void)checkOutBatchTarget:(id)arg1;
- (id)batchProxyForObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end
