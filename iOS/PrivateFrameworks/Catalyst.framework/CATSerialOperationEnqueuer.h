//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperation, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface CATSerialOperationEnqueuer : NSObject
{
    NSOperationQueue *mTargetQueue;
    NSOperation *mCurrentlyExecutingOperation;
    NSMutableArray *mPendingOperations;
    struct os_unfair_lock_s mLock;
    id mStrongSelf;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingOperation:(id)arg1;
- (void)startObservingOperation:(id)arg1;
- (void)performThreadSafeBlock:(CDUnknownBlockType)arg1;
- (void)checkIfOperationIsFinished:(id)arg1;
- (void)enqueueNextOperation;
- (void)addOperation:(id)arg1;
- (id)initWithTargetOperationQueue:(id)arg1;
- (void)dealloc;

@end
