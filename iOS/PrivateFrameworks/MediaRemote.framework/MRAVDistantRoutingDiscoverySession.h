//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRAVDistantRoutingDiscoveryClientProtocol-Protocol.h>

@class NSArray, NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MRAVDistantRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    _Bool _enableThrottling;
    NSArray *_distantEndpoints;
    NSArray *_distantOutputDevices;
    NSString *_routingContextUID;
    int _serviceResetNotifyToken;
    _Bool _hostedRoutingConnectionDidInitialize;
    NSXPCConnection *_hostedRoutingSessionConnection;
    NSMutableDictionary *_distantExternalDevices;
}

+ (id)clientInterface;
+ (id)serviceInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *distantExternalDevices; // @synthesize distantExternalDevices=_distantExternalDevices;
@property(retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection; // @synthesize hostedRoutingSessionConnection=_hostedRoutingSessionConnection;
- (_Bool)_shouldAddLocalEndpoint;
- (void)_reloadAvailableDistantOutputDevices;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1;
- (void)_reloadAvailableDistantEndpoints;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1;
- (void)_reloadHostedRoutingServiceEndpointFeatures;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (id)_hostedRoutingConnection;
- (void)_initializeHostedRoutingConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)availableOutputDevicesDidChange:(id)arg1;
- (void)availableEndpointsDidChange:(id)arg1;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *distantOutputDevices;
@property(retain, nonatomic) NSArray *distantEndpoints;
- (void)setRoutingContextUID:(id)arg1;
- (id)routingContextUID;
- (id)availableOutputDevices;
- (id)availableEndpoints;
- (_Bool)devicePresenceDetected;
- (void)setEndpointFeatures:(unsigned int)arg1;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (unsigned int)discoveryMode;
- (unsigned int)endpointFeatures;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
