//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/GEOETAUpdaterDelegate-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEOETAUpdater, GEONavigationMapMatcher, MNActiveRouteInfo, MNCommuteDestinationSuggestion, MNLocation, MNNavigationTraceManager, NSString;
@protocol GEODirectionServiceTicket, GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface MNCommuteLocationTracker <GEOETAUpdaterDelegate>
{
    GEOComposedWaypoint *_lastOrigin;
    MNLocation *_lastLocation;
    MNActiveRouteInfo *_routeInfo;
    id <GEOMapServiceTicket> _currentLocationTicket;
    id <GEODirectionServiceTicket> _directionsRequestTicket;
    GEONavigationMapMatcher *_mapMatcher;
    GEOETAUpdater *_etaUpdater;
    MNNavigationTraceManager *_traceManager;
    _Bool _requestNonRecommendedRoutes;
    _Bool _routingInProgress;
    unsigned long long _destinationID;
    MNCommuteDestinationSuggestion *_suggestion;
}

@property(readonly, nonatomic) MNCommuteDestinationSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) _Bool routingInProgress; // @synthesize routingInProgress=_routingInProgress;
@property(nonatomic) unsigned long long destinationID; // @synthesize destinationID=_destinationID;
@property(nonatomic) _Bool requestNonRecommendedRoutes; // @synthesize requestNonRecommendedRoutes=_requestNonRecommendedRoutes;
- (void).cxx_destruct;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (int)transportType;
- (id)_directionsRequestFeedback;
- (id)_routeAttributes;
- (void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (void)_requestRouteFromWaypoint:(id)arg1 location:(id)arg2;
- (void)_requestRouteFromLocation:(id)arg1;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)_setAuditToken:(id)arg1;
- (void)updateETA;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GEOComposedWaypoint *destination;
- (void)dealloc;
- (id)initWithSuggestion:(id)arg1 traceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

