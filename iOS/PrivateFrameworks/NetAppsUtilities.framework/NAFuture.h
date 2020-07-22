//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NAPromise-Protocol.h>

@class NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NAFuture : NSObject <NAPromise>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _finished;
    NSMutableArray *_completionBlocks;
    id _resultValue;
    NSError *_resultError;
    NSString *_descriptor;
}

+ (id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithCompletionHandlerAdapterBlock:(CDUnknownBlockType)arg1;
+ (id)_chainFuturesWithFutureStack:(id)arg1;
+ (id)chainFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1 ignoringErrors:(_Bool)arg2 scheduler:(id)arg3;
+ (id)combineAllFutures:(id)arg1 scheduler:(id)arg2;
+ (id)combineAllFutures:(id)arg1;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithNoResult;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
@property(copy, nonatomic) NSString *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)reschedule:(id)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (void)_flushCompletionBlocks;
- (id)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)addFailureBlock:(CDUnknownBlockType)arg1;
- (id)addSuccessBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapter;
- (_Bool)finishWithNoResult;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (_Bool)cancel;
- (_Bool)_queue_isCancelled;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly, getter=isFinished) _Bool finished;
- (id)init;
- (id)recoverIgnoringError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

