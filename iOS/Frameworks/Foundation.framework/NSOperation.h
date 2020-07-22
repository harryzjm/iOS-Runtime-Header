//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSOperation : NSObject
{
    id _private;
    int _private1;
    int _private1b;
}

+ (id)currentOperation;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingExecuting;
+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingReady;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingFinished;
- (id)__graphDescription:(unsigned long long)arg1;
- (id)debugDescription;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)_activity;
- (id)description;
- (void)start;
- (void)main;
@property(readonly, copy) NSArray *dependencies;
- (void)removeDependency:(id)arg1;
- (void)addDependency:(id)arg1;
- (void)waitUntilFinishedOrTimeout:(double)arg1;
- (void)waitUntilFinished;
@property long long qualityOfService;
@property(copy) NSString *name;
@property(copy) CDUnknownBlockType completionBlock;
- (CDUnknownBlockType)_copyCompletionBlock;
@property double threadPriority;
@property long long queuePriority;
@property(readonly, getter=isReady) _Bool ready;
@property(readonly, getter=isAsynchronous) _Bool asynchronous;
@property(readonly, getter=isConcurrent) _Bool concurrent;
@property(readonly, getter=isFinished) _Bool finished;
@property(readonly, getter=isExecuting) _Bool executing;
- (void)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
- (void)dealloc;
- (id)init;
- (void)setObservationInfo:(void *)arg1;
- (void *)observationInfo;
- (id)_implicitObservationInfo;

@end

