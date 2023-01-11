//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPromise;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSUniqueExecutionQueue : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_completionCallbacksQueue;
    NSObject<OS_dispatch_queue> *_executeBlockQueue;
    AMSPromise *_executionPromise;
    NSObject<OS_dispatch_queue> *_executionPromiseAccessQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *executionPromiseAccessQueue; // @synthesize executionPromiseAccessQueue=_executionPromiseAccessQueue;
@property(retain, nonatomic) AMSPromise *executionPromise; // @synthesize executionPromise=_executionPromise;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue; // @synthesize executeBlockQueue=_executeBlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionCallbacksQueue; // @synthesize completionCallbacksQueue=_completionCallbacksQueue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)_createExecutionPromise;
- (void)_beginExecutingBlockWithPromise:(id)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

