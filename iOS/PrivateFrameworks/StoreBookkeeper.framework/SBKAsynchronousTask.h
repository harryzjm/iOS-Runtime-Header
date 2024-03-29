//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSVTaskAssertion, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SBKAsynchronousTask : NSObject
{
    NSString *_debugDescription;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    _Bool _taskInvalidationDisabled;
    double _timeout;
    int _cancelType;
    id _result;
    NSError *_error;
    CDUnknownBlockType _expirationHandler;
    CDUnknownBlockType _finishedHandler;
    MSVTaskAssertion *_taskAssertion;
    NSMutableArray *_completions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) MSVTaskAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
- (void)invokeTaskCompletionBlocksWithBlock:(CDUnknownBlockType)arg1;
- (void)addTaskCompletionBlock:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)_invalidateAssertion:(_Bool)arg1;
- (void)endTaskOperation;
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;
- (void)beginTaskOperation;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) int cancelType; // @synthesize cancelType=_cancelType;
- (void)_onQueueFireExpirationHandlerIfNecesary;
@property(copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
- (id)description;
- (void)_invalidateTimer;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3;

@end

