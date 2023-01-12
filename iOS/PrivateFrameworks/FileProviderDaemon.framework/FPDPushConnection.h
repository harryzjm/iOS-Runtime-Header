//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDExtensionManager, FPProviderMonitor, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDPushConnection : NSObject
{
    FPDExtensionManager *_manager;
    NSXPCListener *_xpcListener;
    NSObject<OS_dispatch_queue> *_pushQueue;
    NSObject<OS_dispatch_queue> *_payloadDeliveryQueue;
    NSMutableDictionary *_pushConnectionsByEnvironment;
    NSMutableDictionary *_messageDelegates;
    NSMutableDictionary *_bundleIdentifierForTopic;
    NSMutableDictionary *_topicsForBundleIdentifier;
    NSMutableDictionary *_clientConnections;
    FPProviderMonitor *_providerMonitor;
}

- (void).cxx_destruct;
- (void)updateTopicsForProvider:(id)arg1;
- (void)providerDidEnterForeground:(id)arg1;
- (void)providerDidEnterBackground:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)updateTopicsForApplicationBundleIdentifier:(id)arg1 providerIdentifier:(id)arg2 requestToken:(_Bool)arg3 environment:(id)arg4;
- (void)setMessageDelegate:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
- (void)updateTopicsForBundleIdentifier:(id)arg1;
- (id)_debugTopicsForApplicationIdentifier:(id)arg1;
- (id)topicsForApplicationBundleIdentifier:(id)arg1;
- (void)fileProviderUnregister;
- (void)fileProviderRegister;
- (id)clientConnectionsForApplicationBundleIdentifier:(id)arg1;
- (void)removeClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
- (void)addClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
- (void)performWithConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (id)_pushConnectionWithEnvironmentName:(id)arg1;
- (id)initWithExtensionManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

