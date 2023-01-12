//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPAVRoutingController, MPMRAVEndpointObserverWrapper, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsStandaloneEndpointController
{
    _Bool _allowsAutomaticResponseLoading;
    _Bool _endpointDiscovered;
    NSString *_routeUID;
    MPAVRoutingController *_routingController;
    MPMRAVEndpointObserverWrapper *_endpointObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPMRAVEndpointObserverWrapper *endpointObserver; // @synthesize endpointObserver=_endpointObserver;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(nonatomic, getter=isEndpointDiscovered) _Bool endpointDiscovered; // @synthesize endpointDiscovered=_endpointDiscovered;
@property(retain, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2;
- (id)_routeForEndpoint:(struct __MRAVEndpointRef *)arg1;
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)endObserving;
- (void)beginObserving;
- (id)proxyDelegate;
- (void)updateAllowsAutomaticResponseLoading;
- (void)setAllowsAutomaticResponseLoading:(_Bool)arg1;
- (void)setRoute:(id)arg1;
- (void)dealloc;
- (id)initWithRouteUID:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithRouteUID:(id)arg1 client:(id)arg2 player:(id)arg3;
- (id)initWithEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

