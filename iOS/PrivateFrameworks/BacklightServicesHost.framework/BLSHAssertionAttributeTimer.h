//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSDurationAttribute, NSString;
@protocol BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService, BSInvalidatable;

__attribute__((visibility("hidden")))
@interface BLSHAssertionAttributeTimer : NSObject
{
    struct os_unfair_lock_s _lock;
    id <BSInvalidatable> _timer;
    _Bool _invalidated;
    id <BLSAssertionServiceResponding> _assertion;
    id <BLSHAssertionAttributeHandlerService> _service;
    BLSDurationAttribute *_attribute;
}

+ (id)activateForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3 attributeHandler:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak BLSDurationAttribute *attribute; // @synthesize attribute=_attribute;
@property(readonly, nonatomic) __weak id <BLSHAssertionAttributeHandlerService> service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak id <BLSAssertionServiceResponding> assertion; // @synthesize assertion=_assertion;
- (void)timerFired;
- (void)invalidate;
- (void)cancel;
- (_Bool)reactivateIfPossible;
- (void)dealloc;
- (id)initForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

