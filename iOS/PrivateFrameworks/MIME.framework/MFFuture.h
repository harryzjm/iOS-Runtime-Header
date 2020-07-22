//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MIME/MFFuture-Protocol.h>
#import <MIME/MFPromisePrivate-Protocol.h>

@class NSConditionLock, NSError, NSMutableArray, NSString;

@interface MFFuture : NSObject <MFPromisePrivate, MFFuture>
{
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

+ (id)sequence:(id)arg1;
+ (id)_join:(id)arg1 ignoreFailures:(_Bool)arg2;
+ (id)combine:(id)arg1;
+ (id)join:(id)arg1;
+ (id)chain:(id)arg1;
+ (id)_recover:(id)arg1 withBlock:(CDUnknownBlockType)arg2 scheduler:(id)arg3;
+ (id)_then:(id)arg1 withBlock:(CDUnknownBlockType)arg2 scheduler:(id)arg3;
+ (id)onScheduler:(id)arg1 lazyFutureWithBlock:(CDUnknownBlockType)arg2;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1;
+ (id)onScheduler:(id)arg1 futureWithBlock:(CDUnknownBlockType)arg2;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
+ (id)nullFuture;
- (id)onScheduler:(id)arg1 map:(CDUnknownBlockType)arg2;
- (id)map:(CDUnknownBlockType)arg1;
- (id)onScheduler:(id)arg1 recover:(CDUnknownBlockType)arg2;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)onScheduler:(id)arg1 then:(CDUnknownBlockType)arg2;
- (id)then:(CDUnknownBlockType)arg1;
- (void)_flushCompletionBlocks;
- (void)_addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)onScheduler:(id)arg1 addFailureBlock:(CDUnknownBlockType)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)onScheduler:(id)arg1 addSuccessBlock:(CDUnknownBlockType)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (_Bool)_nts_isFinished;
@property(readonly) CDUnknownBlockType errorOnlyCompletionHandlerAdapter;
@property(readonly) CDUnknownBlockType boolErrorCompletionHandlerAdapter;
@property(readonly) CDUnknownBlockType completionHandlerAdapter;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (void)_finishWithFuture:(id)arg1;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (void)cancel;
- (_Bool)tryCancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly, getter=isFinished) _Bool finished;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

