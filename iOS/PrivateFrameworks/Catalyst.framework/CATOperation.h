//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSDate, NSDictionary, NSError, NSLock, NSUUID, _CATObserverManager;

@interface CATOperation : NSOperation
{
    NSArray *mCallStackSymbols;
    _Atomic int mState;
    NSLock *mLock;
    _CATObserverManager *mObserverManager;
    _Bool _canCancel;
    NSUUID *_UUID;
    NSDate *_createdDate;
    NSDate *_enqueuedDate;
    NSDate *_startedDate;
    NSDate *_finishedDate;
    unsigned long long _phase;
    NSError *_error;
    id _resultObject;
    NSDictionary *_userInfo;
    long long _completedUnitCount;
    long long _totalUnitCount;
}

+ (id)callStackSymbols;
+ (id)keyPathsForValuesAffectingIsCanceled;
+ (_Bool)isCancelable;
+ (_Bool)automaticallyNotifiesObserversOfFinishedDate;
+ (_Bool)automaticallyNotifiesObserversOfStartedDate;
+ (_Bool)automaticallyNotifiesObserversOfEnqueuedDate;
+ (_Bool)automaticallyNotifiesObserversOfCreatedDate;
+ (_Bool)automaticallyNotifiesObserversOfUUID;
@property long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(readonly) _Bool canCancel; // @synthesize canCancel=_canCancel;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) id resultObject; // @synthesize resultObject=_resultObject;
@property(retain) NSError *error; // @synthesize error=_error;
@property unsigned long long phase; // @synthesize phase=_phase;
@property(retain) NSDate *finishedDate; // @synthesize finishedDate=_finishedDate;
@property(retain) NSDate *startedDate; // @synthesize startedDate=_startedDate;
@property(retain) NSDate *enqueuedDate; // @synthesize enqueuedDate=_enqueuedDate;
@property(retain) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 delegateQueue:(id)arg4;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3;
- (void)addObserver:(id)arg1;
- (void)operationDidFinish;
- (void)operationWillFinish;
- (void)operationWillStart;
- (_Bool)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2;
- (void)operationWillEnqueueOntoOperationQueue:(id)arg1;
- (void)finalizeOperation;
- (void)endOperationWithError:(id)arg1;
- (void)endOperationWithResultObject:(id)arg1;
- (void)endOperationSuccessfullyIfNeeded;
- (void)start;
- (void)removeDependency:(id)arg1;
- (void)addDependency:(id)arg1;
- (void)waitUntilFinished;
- (void)cancel;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
@property(readonly) _Bool isCanceled;
- (_Bool)isAsynchronous;
- (id)stateDescription;
- (id)description;
- (id)init;

@end
