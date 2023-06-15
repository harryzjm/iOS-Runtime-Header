//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COCoordinationServiceClientSet, NSDictionary, NSString, NSXPCListener;
@protocol COServiceAddOnProvider, COServiceDelegate, COServiceListenerProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface COService : NSObject
{
    id <COServiceListenerProvider> _listenerProvider;
    id <COServiceAddOnProvider> _addOnProvider;
    id <COServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCListener *_listener;
    COCoordinationServiceClientSet *_clients;
    NSDictionary *_assertions;
    NSDictionary *_addOns;
}

+ (_Bool)_isAllowedClient:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *addOns; // @synthesize addOns=_addOns;
@property(copy, nonatomic) NSDictionary *assertions; // @synthesize assertions=_assertions;
@property(copy, nonatomic) COCoordinationServiceClientSet *clients; // @synthesize clients=_clients;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) __weak id <COServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <COServiceAddOnProvider> addOnProvider; // @synthesize addOnProvider=_addOnProvider;
@property(readonly, nonatomic) id <COServiceListenerProvider> listenerProvider; // @synthesize listenerProvider=_listenerProvider;
- (void)_addOnRemoved:(id)arg1;
- (void)_addOnAdded:(id)arg1;
- (void)_clientLost:(id)arg1;
- (void)_configureServiceInterfacesOnConnection:(id)arg1;
- (id)_newClientForConnection:(id)arg1;
- (id)_uniqueAddOns;
- (id)_addOnForCluster:(id)arg1;
- (id)_clustersForAddOn:(id)arg1;
- (void)_removeMeshForClusters:(id)arg1;
- (void)_addMesh:(id)arg1 forClusters:(id)arg2;
- (void)_addOnForCluster:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_applicableToCluster:(id)arg1;
- (void)_releaseAssertionForCluster:(id)arg1;
- (void)_takeAssertionForCluster:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)leaveClusters:(id)arg1 withClusterIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)joinClusters:(id)arg1 usingMeshController:(id)arg2 withClusterIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)currentClient;
- (id)clientForConnection:(id)arg1;
- (void)_serviceReady;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

