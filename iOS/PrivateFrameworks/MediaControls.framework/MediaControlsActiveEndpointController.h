//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPCFuture, MSVPersistentTimer, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsActiveEndpointController
{
    _Bool _isDeferred;
    long long _routeType;
    NSString *_activeRouteUID;
    MPCFuture *_deferredPlayerPathFuture;
    id _deferredPlayerPathInvalidationToken;
    MSVPersistentTimer *_deferredPlayerPathTimer;
    NSString *_activeEndpointUID;
}

+ (double)mediaRecentlyPlayedTimeout;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDeferred; // @synthesize isDeferred=_isDeferred;
@property(retain, nonatomic) NSString *activeEndpointUID; // @synthesize activeEndpointUID=_activeEndpointUID;
@property(retain, nonatomic) MSVPersistentTimer *deferredPlayerPathTimer; // @synthesize deferredPlayerPathTimer=_deferredPlayerPathTimer;
@property(retain, nonatomic) id deferredPlayerPathInvalidationToken; // @synthesize deferredPlayerPathInvalidationToken=_deferredPlayerPathInvalidationToken;
@property(retain, nonatomic) MPCFuture *deferredPlayerPathFuture; // @synthesize deferredPlayerPathFuture=_deferredPlayerPathFuture;
@property(readonly, nonatomic) NSString *activeRouteUID; // @synthesize activeRouteUID=_activeRouteUID;
@property(nonatomic) long long routeType; // @synthesize routeType=_routeType;
- (void)_activeSystemRouteDidChangeWithChangeType:(long long)arg1;
- (void)_fetchActiveSystemRoute:(CDUnknownBlockType)arg1;
- (void)_maybeUpdateActiveSystemRoute;
- (void)_updateActiveSystemRoute;
- (void)_maybeRestoreDeferredPlayerPath;
- (void)_restoreDeferredPlayerPath;
- (void)_resetDeferredPlayerPath;
- (id)_routeForEndpoint:(struct __MRAVEndpointRef *)arg1;
- (void)activeSystemRouteDidChangeNotification:(id)arg1;
- (void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2;
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setDeviceUnlocked:(_Bool)arg1;
- (void)setOnScreen:(_Bool)arg1;
- (id)initWithActiveRouteType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

