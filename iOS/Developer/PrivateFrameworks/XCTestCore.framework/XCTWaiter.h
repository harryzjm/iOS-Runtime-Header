//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/XCTWaiterManagement-Protocol.h>
#import <XCTestCore/XCTestExpectationDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue, XCTWaiterDelegate, XCTWaiterManager;

@interface XCTWaiter : NSObject <XCTestExpectationDelegate, XCTWaiterManagement>
{
    _Bool _enforceOrderOfFulfillment;
    id <XCTWaiterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    long long _state;
    long long _result;
    double _timeout;
    NSArray *_waitCallStackReturnAddresses;
    NSArray *_expectations;
    NSMutableArray *_mutableFulfilledExpectations;
    struct __CFRunLoop *_waitingRunLoop;
    id <XCTWaiterManager> _manager;
    unsigned long long _waitingThreadId;
}

+ (long long)waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(_Bool)arg3;
+ (long long)waitForExpectations:(id)arg1 timeout:(double)arg2;
+ (void)wait:(double)arg1;
+ (void)setStallHandler:(CDUnknownBlockType)arg1;
+ (void)handleStalledWaiter:(id)arg1;
+ (void)installWatchdogForWaiter:(id)arg1 timeout:(double)arg2;
+ (double)watchdogTimeoutSlop;
+ (void)setWatchdogTimeoutSlop:(double)arg1;
+ (id)subsystemQueue;
- (void).cxx_destruct;
@property(readonly) unsigned long long waitingThreadId; // @synthesize waitingThreadId=_waitingThreadId;
@property __weak id <XCTWaiterManager> manager; // @synthesize manager=_manager;
@property struct __CFRunLoop *waitingRunLoop; // @synthesize waitingRunLoop=_waitingRunLoop;
@property(readonly, nonatomic) NSMutableArray *mutableFulfilledExpectations; // @synthesize mutableFulfilledExpectations=_mutableFulfilledExpectations;
@property(copy, nonatomic) NSArray *expectations; // @synthesize expectations=_expectations;
@property(copy) NSArray *waitCallStackReturnAddresses; // @synthesize waitCallStackReturnAddresses=_waitCallStackReturnAddresses;
@property _Bool enforceOrderOfFulfillment; // @synthesize enforceOrderOfFulfillment=_enforceOrderOfFulfillment;
@property double timeout; // @synthesize timeout=_timeout;
@property long long result; // @synthesize result=_result;
@property long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <XCTWaiterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) _Bool currentContextIsNested;
- (_Bool)isFinished;
@property(readonly, getter=isInProgress) _Bool inProgress;
@property(readonly) NSArray *fulfilledExpectations;
- (void)_queue_validateExpectationFulfillmentWithTimeoutState:(_Bool)arg1;
- (_Bool)_queue_enforceOrderingWithFulfilledExpectations:(id)arg1;
- (void)_queue_computeInitiallyFulfilledExpectations;
- (void)_queue_setExpectations:(id)arg1;
- (void)_validateExpectationFulfillmentWithTimeoutState:(_Bool)arg1;
- (void)didFulfillExpectation:(id)arg1;
- (void)cancelPrimitiveWait;
- (void)cancelWaiting;
- (void)primitiveWait:(double)arg1;
- (void)interruptForWaiter:(id)arg1;
- (long long)waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(_Bool)arg3;
- (long long)waitForExpectations:(id)arg1 timeout:(double)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

