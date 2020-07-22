//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate, NSRunLoop, NSString, NSTimer, XCTNSPredicateExpectation;
@protocol OS_dispatch_queue, XCTNSPredicateExpectationObject;

@interface _XCTNSPredicateExpectationImplementation : NSObject
{
    XCTNSPredicateExpectation *_expectation;
    id <XCTNSPredicateExpectationObject> _object;
    NSPredicate *_predicate;
    CDUnknownBlockType _handler;
    NSRunLoop *_timerRunLoop;
    NSTimer *_timer;
    double _pollingInterval;
    NSString *_debugDescription;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasCleanedUp;
    _Bool _isEvaluating;
}

@property double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(copy) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
@property(readonly, copy) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly) id <XCTNSPredicateExpectationObject> object; // @synthesize object=_object;
- (void)cleanup;
- (_Bool)_shouldFulfillForExpectation:(id)arg1 object:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_considerFulfilling;
@property(copy) CDUnknownBlockType handler;
- (void)_scheduleTimer;
- (void)startPolling;
- (id)initWithPredicate:(id)arg1 object:(id)arg2 expectation:(id)arg3;
- (void)dealloc;

@end

