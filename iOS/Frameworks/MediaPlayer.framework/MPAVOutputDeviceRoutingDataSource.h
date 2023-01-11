//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVRoutingSessionManager, MPAVEndpointRoute, MPMRAVOutputContextWrapper, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAVOutputDeviceRoutingDataSource
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _attemptedToInitializeAppOutputContext;
    void *_discoverySession;
    void *_callbackToken;
    _Bool _supportsMultipleSelection;
    _Bool _devicePresenceDetected;
    NSArray *_outputDeviceRoutes;
    _Bool _shouldSourceOutputDevicesFromAVODDS;
    AVRoutingSessionManager *_routingSessionManager;
    _Bool _supportsRoutePrediction;
    MPMRAVOutputContextWrapper *_applicationOutputContext;
    MPAVEndpointRoute *_endpointRoute;
    NSString *_initiator;
}

+ (id)_globalAudioSessionLock;
- (void).cxx_destruct;
@property(nonatomic) _Bool supportsRoutePrediction; // @synthesize supportsRoutePrediction=_supportsRoutePrediction;
@property(retain, nonatomic) NSString *initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
@property(nonatomic) _Bool supportsMultipleSelection; // @synthesize supportsMultipleSelection=_supportsMultipleSelection;
@property(retain, nonatomic) MPMRAVOutputContextWrapper *applicationOutputContext; // @synthesize applicationOutputContext=_applicationOutputContext;
- (void)_setShouldSourceOutputDevicesFromAVODDS:(_Bool)arg1;
- (id)_outputDeviceRouteWithUID:(id)arg1;
- (void)_outputDevicesDidChange:(id)arg1;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (id)outputDevicesForRoutes:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
- (void)_endpointsDidChangeNotification:(id)arg1;
- (_Bool)routeIsLeaderOfEndpoint:(id)arg1;
- (void)removeRoutesFromGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeRouteFromGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRoutesToGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRouteToGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getRoutesForCategory:(id)arg1;
- (_Bool)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)arg1;
- (long long)discoveryMode;
- (id)routingSessionManager;
@property(copy, nonatomic) NSString *routingContextUID;
- (void)dealloc;
- (id)init;

@end
