//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVEndpointRoute, MPAVRoutingController, MPMediaControlsConfiguration, MediaControlsHomeObserver, NSArray, NSMutableDictionary, NSString;
@protocol MediaControlsEndpointsManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MediaControlsEndpointsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_endpointControllersMap;
    _Bool _didLoadHomeUIDsOnce;
    _Bool _isRequestingActiveRoute;
    _Bool _isUpdatingRoutes;
    NSArray *_pendingRoutesToUpdate;
    MPMediaControlsConfiguration *_configuration;
    long long _discoveryMode;
    NSArray *_routes;
    id <MediaControlsEndpointsManagerDelegate> _delegate;
    MediaControlsHomeObserver *_homeObserver;
    MPAVRoutingController *_routingController;
    NSString *_activeSystemRouteUID;
    NSString *_pendingActiveSystemRouteUID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *pendingActiveSystemRouteUID; // @synthesize pendingActiveSystemRouteUID=_pendingActiveSystemRouteUID;
@property(readonly, copy, nonatomic) NSString *activeSystemRouteUID; // @synthesize activeSystemRouteUID=_activeSystemRouteUID;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(readonly, nonatomic) MediaControlsHomeObserver *homeObserver; // @synthesize homeObserver=_homeObserver;
@property(nonatomic) __weak id <MediaControlsEndpointsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(readonly, copy, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_createSectionedCollectionFromRoutes:(id)arg1;
- (void)_updateWithRoutes:(id)arg1;
- (void)_updateActiveRouteWithReason:(id)arg1;
- (void)_setRoutes:(id)arg1 withChangeDetails:(id)arg2;
- (_Bool)_homeHasRoute:(id)arg1;
- (id)_endpointControllerContainingOutputDevice:(id)arg1 endpointWrapper:(id *)arg2;
- (long long)_indexOfRouteWithUID:(id)arg1;
- (void)_activeSystemRouteDidChange:(id)arg1;
- (void)homeObserverDidUpdateKnownUIDs:(id)arg1;
- (void)getOutputDeviceIsPlaying:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)prewarm;
@property(readonly, nonatomic) _Bool isActiveSystemEndpointEqualToLocalEndpoint;
- (id)endpointControllerForRoute:(id)arg1;
@property(readonly, nonatomic) MPAVEndpointRoute *resolvedActiveSystemRoute;
@property(readonly, nonatomic) MPAVEndpointRoute *activeSystemRoute;
- (void)setActiveSystemRoute:(id)arg1 requestDetails:(id)arg2;
- (void)setActiveSystemRoute:(id)arg1 reason:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

