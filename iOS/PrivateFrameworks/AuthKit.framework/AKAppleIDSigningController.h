//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationController, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface AKAppleIDSigningController : NSObject
{
    struct os_unfair_lock_s _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
    _Bool _isProxy;
    AKAppleIDAuthenticationController *_authenticationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AKAppleIDAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(nonatomic) _Bool isProxy; // @synthesize isProxy=_isProxy;
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)absintheSignatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (id)_connection;
- (void)dealloc;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)init;
- (void)_additionalAttestationHeadersForRequest:(id)arg1 withInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_additionalAbsintheHeadersForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signingHeadersForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
