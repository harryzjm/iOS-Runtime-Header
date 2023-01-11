//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOETAUpdaterDelegate-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOCommonOptions, GEOComposedETARoute, GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsRequestFeedback, GEOETAUpdater, GEOLocation, GEOMapRegion, GEOMapServiceTraits, GEORouteAttributes, GEORouteHypothesis, GEORouteHypothesizerAnalyticsStore, GEORouteMatch, NSData, NSDate, NSMutableArray, NSString, geo_isolater;
@protocol OS_dispatch_group;

@interface GEORouteHypothesisMonitor : NSObject <GEOETAUpdaterDelegate, NSSecureCoding>
{
    CDUnknownBlockType _handler;
    GEODirectionsRequestFeedback *_feedback;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    GEOLocation *_originLocation;
    int _transportType;
    NSDate *_arrivalDate;
    GEORouteHypothesis *_hypothesis;
    GEOLocation *_lastLocation;
    NSObject<OS_dispatch_group> *_etaUpdaterDispatchGroup;
    GEOETAUpdater *_liveETAUpdater;
    GEOETAUpdater *_baselineETAUpdater;
    GEOComposedETARoute *_liveETARoute;
    GEOComposedETARoute *_baselineETARoute;
    GEORouteAttributes *_routeAttributes;
    GEOCommonOptions *_commonOptions;
    GEOMapServiceTraits *_traits;
    GEORouteHypothesizerAnalyticsStore *_analyticsStore;
    GEOComposedRoute *_route;
    geo_isolater *_requestIsolater;
    GEODirectionsRequest *_currentRequest;
    _Bool _needReroute;
    NSMutableArray *_rerouteEntries;
    GEORouteMatch *_routeMatch;
    GEOLocation *_lastMatchedLocation;
    _Bool _hasArrived;
    _Bool _isTraveling;
    double _travelScore;
    GEOMapRegion *_arrivalMapRegion;
    NSString *_traceName;
    NSData *_sessionState;
}

+ (id)monitorWithSource:(id)arg1 toDestination:(id)arg2 traceName:(id)arg3 traits:(id)arg4 routeAttributes:(id)arg5;
+ (id)routeAttributesForTransportType:(int)arg1 withArrivalDate:(id)arg2;
+ (void)setServerFormattedStringFormatter:(id)arg1;
+ (id)serverFormattedStringFormatter;
+ (void)setUserPreferencesProvider:(id)arg1;
+ (id)userPreferencesProvider;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(readonly, nonatomic) GEORouteHypothesis *hypothesis; // @synthesize hypothesis=_hypothesis;
@property(readonly, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOComposedWaypoint *source; // @synthesize source=_source;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
- (id)routeMatchForLocation:(id)arg1;
- (void)travelStateChanged;
- (void)checkRouteForLocation:(id)arg1;
- (void)cancelCurrentRequest;
- (void)_updateScoreForLocation:(id)arg1;
- (_Bool)_isNavigatingToDestination;
- (_Bool)_isNavigating;
- (id)navDestination;
- (void)_routeRequestFailed:(id)arg1;
- (void)_recievedRouteResponse:(id)arg1 forLocation:(id)arg2 isReroute:(_Bool)arg3;
- (void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (void)_executeBlockAccessingCurrentRequest:(CDUnknownBlockType)arg1;
- (void)_allETAUpdaterRequestsFinished;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterRequestCompleted:(id)arg1;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 etaRoute:(id)arg3;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (void)_updateRouteMatchETAAndTravelState;
- (void)_showDebugAlert;
- (void)callHandlerIvar;
- (void)clientDisplayedUINotification:(unsigned long long)arg1;
- (void)stopMonitoring;
- (void)recordETAUpdatesAfterEventStart;
- (void)_fetchETAWithRouteMatch:(id)arg1;
- (void)_recalculateETAWithRouteMatch:(id)arg1;
- (void)_updateLocation:(id)arg1 allowServer:(_Bool)arg2;
- (void)updateLocation:(id)arg1 allowServer:(_Bool)arg2 hypothesisHandler:(CDUnknownBlockType)arg3;
- (_Bool)_hasInitialRoute;
@property(readonly, nonatomic) _Bool supportsDirections;
@property(readonly, nonatomic) _Bool supportsLiveTraffic;
@property(readonly, nonatomic) int transportType;
@property(readonly, nonatomic) NSString *routeName;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)_newETAUpdater;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 traceName:(id)arg3 traits:(id)arg4 routeAttributes:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
