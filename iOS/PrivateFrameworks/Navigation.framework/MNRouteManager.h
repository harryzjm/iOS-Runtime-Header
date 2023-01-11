//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationManagerObserver-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEOETARoute, GEORouteAttributes, GEORoutePreloader, GEORouteSet, MNActiveRouteDetails, MNActiveRouteInfo, MNRoutePlanningDetails, NSArray, NSMutableArray, NSString;

@interface MNRouteManager : NSObject <MNLocationManagerObserver>
{
    GEORouteAttributes *_routeAttributes;
    GEORouteSet *_currentRouteSet;
    MNActiveRouteInfo *_currentRouteInfo;
    NSMutableArray *_alternateRoutes;
    NSArray *_allRoutes;
    GEOComposedWaypoint *_originalDestination;
    MNActiveRouteInfo *_originalRouteInfo;
    MNRoutePlanningDetails *_routePlanningDetails;
    MNActiveRouteDetails *_activeRouteDetails;
    GEORoutePreloader *_preloader;
    NSString *_tileLoaderClientIdentifier;
    GEOComposedRoute *_originalRoute;
}

@property(readonly, nonatomic) MNActiveRouteDetails *activeRouteDetails; // @synthesize activeRouteDetails=_activeRouteDetails;
@property(readonly, nonatomic) MNRoutePlanningDetails *routePlanningDetails; // @synthesize routePlanningDetails=_routePlanningDetails;
@property(readonly, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(readonly, nonatomic) GEOComposedWaypoint *originalDestination; // @synthesize originalDestination=_originalDestination;
@property(readonly, nonatomic) NSArray *alternateRoutes; // @synthesize alternateRoutes=_alternateRoutes;
@property(readonly, nonatomic) MNActiveRouteInfo *currentRouteInfo; // @synthesize currentRouteInfo=_currentRouteInfo;
@property(readonly, nonatomic) GEORouteSet *currentRouteSet; // @synthesize currentRouteSet=_currentRouteSet;
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_updatePreloaderForNewRoute;
- (void)_clearPreloader;
- (void)clearCurrentRoute;
- (void)updateWithAlternateRoutes:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (_Bool)updateForRoutePlanningDetails:(id)arg1 outError:(out id *)arg2;
- (void)close;
- (void)open;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *allRoutes;
@property(readonly, nonatomic) GEOETARoute *etaRoute;
@property(readonly, nonatomic) GEOComposedRoute *currentRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

