//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKXPCServiceDelegate-Protocol.h>

@class NSHashTable, NSString, PKXPCService;

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate>
{
    NSHashTable *_acquiredAssertions;
    PKXPCService *_remoteService;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)remoteServiceDidSuspend:(id)arg1;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)_removeAssertionWithIdentifier:(id)arg1;
- (void)invalidateAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)assertionExistsOfType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initSharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
