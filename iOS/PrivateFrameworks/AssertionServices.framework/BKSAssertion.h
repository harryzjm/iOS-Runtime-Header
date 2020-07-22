//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class BSSignal, NSString;
@protocol BKSAssertionClientProtocol, OS_dispatch_queue;

@interface BKSAssertion : NSObject
{
    BSSignal *_invalidationSignal;
    _Bool _acquired;
    NSString *_identifier;
    NSString *_name;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _acquisitionHandler;
    id <BKSAssertionClientProtocol> _client;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

- (void)_clientQueue_updateAssertion;
- (_Bool)_clientQueue_acquireAssertion;
- (void)_clientQueue_invalidate:(_Bool)arg1;
- (void)_registerAssertionAndAcquire:(_Bool)arg1;
- (id)_clientQueue_updateEvent;
- (id)_clientQueue_destroyEvent;
- (id)_clientQueue_createEvent;
- (id)_clientQueue;
- (id)_clientQueue_client;
- (_Bool)_clientQueue_acquired;
- (id)_clientQueue_identifier;
- (id)_clientQueue_name;
- (void)assertionDidInvalidate;
- (void)invalidate;
- (_Bool)acquire;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property(readonly, nonatomic) _Bool valid;
- (void)dealloc;
- (id)_initWithClient:(id)arg1;
- (id)_initWithClient:(id)arg1 name:(id)arg2;
- (id)_initWithClient:(id)arg1 name:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;

@end

