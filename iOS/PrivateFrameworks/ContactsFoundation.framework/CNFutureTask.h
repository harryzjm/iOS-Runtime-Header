//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFuture-Protocol.h>
#import <ContactsFoundation/CNPromise-Protocol.h>

@class CNFutureCompletionBlocks, CNFutureResult, CNTask, NSConditionLock, NSString;

@interface CNFutureTask : NSObject <CNFuture, CNPromise>
{
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNTask *_task;
    CNFutureCompletionBlocks *_completionBlocks;
}

- (id)recover:(CDUnknownBlockType)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (void)_flushCompletionBlocks;
- (id)futureResult;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)boolErrorCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)run;
- (void)didCancel;
- (_Bool)cancel;
- (_Bool)nts_isFinished;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly, getter=isFinished) _Bool finished;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

