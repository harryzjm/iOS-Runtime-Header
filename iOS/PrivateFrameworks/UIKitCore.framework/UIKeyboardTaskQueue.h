//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSConditionLock, NSMutableArray, UIKeyboardTaskEntry, UIKeyboardTaskExecutionContext;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskQueue : NSObject
{
    _Bool _executingOnMainThread;
    NSConditionLock *_lock;
    NSMutableArray *_tasks;
    NSMutableArray *_deferredTasks;
    UIKeyboardTaskExecutionContext *_executionContext;
    UIKeyboardTaskEntry *_mainThreadContinuation;
    NSArray *_activeOriginator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *activeOriginator; // @synthesize activeOriginator=_activeOriginator;
@property(retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
- (_Bool)isMainThreadExecutingTask;
- (void)performSingleTask:(CDUnknownBlockType)arg1;
- (void)waitUntilTaskIsFinished:(id)arg1;
- (void)performTask:(CDUnknownBlockType)arg1;
- (_Bool)isEmpty;
- (void)waitUntilAllTasksAreFinished;
- (void)addDeferredTask:(CDUnknownBlockType)arg1;
- (id)addAndReturnTask:(CDUnknownBlockType)arg1;
- (void)addTask:(CDUnknownBlockType)arg1;
- (void)promoteDeferredTaskIfIdle;
- (void)performDeferredTaskIfIdle;
- (void)performTaskOnMainThread:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)finishExecution;
- (void)continueExecutionOnMainThread;
- (void)unlock;
- (_Bool)tryLockWhenReadyForMainThread;
- (void)lockWhenReadyForMainThread;
- (void)lock;
- (id)init;
- (id)scheduleTask:(CDUnknownBlockType)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3;

@end

