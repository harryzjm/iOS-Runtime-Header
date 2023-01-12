//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableSet, XCTPromise, XCTWaiter;

@interface XCTFuture : NSObject
{
    _Bool _canceled;
    _Bool _hasWaited;
    _Bool _hasFinished;
    id _value;
    NSError *_error;
    double _executionTime;
    double _startTime;
    double _deadline;
    XCTPromise *_promise;
    XCTWaiter *_waiter;
    NSMutableSet *_cancelationExpectations;
}

+ (id)futureWithDescription:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)futureWithTimeout:(double)arg1 description:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly) NSMutableSet *cancelationExpectations; // @synthesize cancelationExpectations=_cancelationExpectations;
@property _Bool hasFinished; // @synthesize hasFinished=_hasFinished;
@property _Bool hasWaited; // @synthesize hasWaited=_hasWaited;
@property(readonly) XCTWaiter *waiter; // @synthesize waiter=_waiter;
@property(readonly) XCTPromise *promise; // @synthesize promise=_promise;
@property(readonly) double deadline; // @synthesize deadline=_deadline;
@property(readonly) double startTime; // @synthesize startTime=_startTime;
@property(readonly) double executionTime; // @synthesize executionTime=_executionTime;
@property(readonly, getter=isCanceled) _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)addCancelationExpectation:(id)arg1;
- (void)_waitForFulfillment;
- (id)initWithTimeout:(double)arg1 promise:(id)arg2;

@end
