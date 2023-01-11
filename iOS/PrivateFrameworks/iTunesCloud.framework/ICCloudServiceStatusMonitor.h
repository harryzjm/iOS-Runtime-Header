//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICCloudServiceStatusRemoteMonitoringClient-Protocol.h>

@class ICCloudServerListenerEndpointProvider, NSError, NSMutableSet, NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_source;

@interface ICCloudServiceStatusMonitor : NSObject <ICCloudServiceStatusRemoteMonitoringClient>
{
    NSXPCConnection *_cloudServiceStatusMonitorConnection;
    NSError *_cloudServiceStatusMonitorConnectionEstablishmentError;
    NSMutableSet *_activeTransactionIdentifiersForCloudServiceStatusMonitorConnection;
    ICCloudServerListenerEndpointProvider *_listenerEndpointProvider;
    _Bool _isObservingCloudServiceStatus;
    NSUUID *_observationToken;
    NSString *_transactionIdentifierForActiveObservationToken;
    int _cloudServerLaunchedNotifyToken;
    NSObject<OS_dispatch_source> *_cloudServerLaunchTimeoutTimer;
    unsigned long long _capabilities;
    _Bool _hasValidCapabilities;
    NSString *_storefrontCountryCode;
    NSString *_storefrontIdentifier;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)_invalidateTriggersForCloudServiceStatusObservationRecovery;
- (void)_scheduleTriggersForCloudServiceStatusObservationRecovery;
- (void)_refreshCloudServiceStatus;
- (void)_recoverObservingCloudServiceStatus;
- (void)_invalidateCloudServerLaunchTimeoutTimer;
- (void)_scheduleCloudServerLaunchTimeoutTimer;
- (void)_cancelCloudServerLaunchedNotifyToken;
- (void)_registerCloudServerLaunchedNotifyToken;
- (void)_updateWithStorefrontIdentifier:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_updateWithStorefrontCountryCode:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_updateWithCapabilities:(unsigned long long)arg1 hasValidCapabilities:(_Bool)arg2 transactionIdentifier:(id)arg3;
- (void)_didEndRequestingUserTokenWithTransactionIdentifier:(id)arg1;
- (void)_didEndObservingCloudServiceStatusWithToken:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_endObservingCloudServiceStatusWithToken:(id)arg1;
- (void)_didBeginObservingCloudServiceStatusWithToken:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_beginObservingCloudServiceStatus;
- (void)_requestStorefrontIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_requestStorefrontCountryCodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_requestCapabilitiesWithPrivacyPromptPolicy:(long long)arg1 requestCapabilitiesWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_resetCloudServiceStatusMonitorConnectionAllowingExplicitInvalidation:(_Bool)arg1;
- (id)_handleCloudServiceStatusMonitorConnectionRemoteObjectProxyError:(id)arg1 forRequestWithDescription:(id)arg2 transactionIdentifier:(id)arg3;
- (void)_performCloudServiceStatusMonitorRequestWithDescription:(id)arg1 requestHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_cloudServiceStatusMonitorConnectionWasInvalidated;
- (void)_cloudServiceStatusMonitorConnectionWasInterrupted;
- (id)_cloudServiceStatusMonitorConnectionForTransactionIdentifier:(id)arg1 error:(id *)arg2;
- (void)_endTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)arg1;
- (void)_beginTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)arg1;
- (void)storefrontIdentifierDidChange:(id)arg1;
- (void)storefrontCountryCodeDidChange:(id)arg1;
- (void)capabilitiesDidChange:(unsigned long long)arg1;
- (void)requestUserTokenForDeveloperToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestStorefrontIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestCapabilitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endObservingCloudServiceStatus;
- (void)beginObservingCloudServiceStatus;
@property(readonly, getter=isObservingCloudServiceStatus) _Bool observingCloudServiceStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
