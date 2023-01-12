//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDPromiseResult, NSMutableArray, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface ASDPromise : NSObject
{
    NSMutableArray *_observers;
    long long _state;
    NSRecursiveLock *_stateLock;
    ASDPromiseResult *_result;
}

+ (id)promiseWithError:(id)arg1;
+ (id)promiseWithValue:(id)arg1;
+ (id)onScheduler:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly) ASDPromiseResult *result; // @synthesize result=_result;
- (void)rejectWithError:(id)arg1;
- (void)resolveWithValue:(id)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (id)joinWithPromise:(id)arg1;
- (id)flatMapUsingTransformer:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;
- (id)mapUsingTransformer:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;
- (void)thenPerform:(CDUnknownBlockType)arg1 orCatchError:(CDUnknownBlockType)arg2 onScheduler:(id)arg3;
- (void)catchError:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;
- (void)alwaysPerform:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;
@property(readonly, getter=isResolved) _Bool resolved;
- (id)initOnScheduler:(id)arg1 withExecutor:(CDUnknownBlockType)arg2;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)init;

@end

