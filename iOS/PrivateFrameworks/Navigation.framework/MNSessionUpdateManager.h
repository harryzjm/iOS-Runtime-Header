//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOComposedETARoute, GEODataRequestThrottlerToken, GEOETATrafficUpdateRequest, GEOLatLng, GEOTransitRouteUpdater, NSDate, NSError, NSMutableDictionary, NSString, NSTimer;
@protocol MNSessionUpdateManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNSessionUpdateManager : NSObject
{
    id <MNSessionUpdateManagerDelegate> _delegate;
    NSString *_requestingAppIdentifier;
    GEOApplicationAuditToken *_auditToken;
    GEODataRequestThrottlerToken *_throttleToken;
    GEOLatLng *_tripOrigin;
    GEOTransitRouteUpdater *_transitUpdater;
    NSMutableDictionary *_subscribers;
    NSTimer *_etaTimer;
    double _etaRequestInterval;
    double _initialRequestDelay;
    double _opportunisticRequestTimeWindow;
    NSDate *_dateOfLastUpdate;
    _Bool _lastRequestWasServerDriven;
    unsigned long long _maxAlternateRoutesCount;
    _Bool _isPaused;
    GEOETATrafficUpdateRequest *_pendingETARequest;
    GEOComposedETARoute *_pendingETARoute;
    NSError *_retryError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOLatLng *tripOrigin; // @synthesize tripOrigin=_tripOrigin;
@property(nonatomic) unsigned long long maxAlternateRoutesCount; // @synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount;
@property(retain, nonatomic) GEODataRequestThrottlerToken *throttleToken; // @synthesize throttleToken=_throttleToken;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(copy, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property(nonatomic) __weak id <MNSessionUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_hasAtLeastOneActiveSubscriber;
- (void)transitRouteUpdater:(id)arg1 didFailUpdateForRouteIDs:(id)arg2 withError:(id)arg3;
- (void)transitRouteUpdater:(id)arg1 didUpdateTransitRoutes:(id)arg2;
- (void)transitRouteUpdater:(id)arg1 willUpdateTransitForRouteIDs:(id)arg2;
- (void)transitRouteUpdater:(id)arg1 didReceiveResponse:(id)arg2;
- (void)transitRouteUpdater:(id)arg1 willSendRequests:(id)arg2;
- (void)_updateForETARoute:(id)arg1;
- (void)_handleETAResponse:(id)arg1 forRouteInfo:(id)arg2 etaRoute:(id)arg3;
- (id)_updateWaypointsForRequest:(id)arg1 routeInfo:(id)arg2 userLocation:(id)arg3 etaRoute:(id)arg4;
- (id)_updateETARequest:(id)arg1 withRouteInfo:(id)arg2 andUserLocation:(id)arg3;
- (id)_baseETARequest;
- (void)_sendETARequestWithRouteAttributes:(id)arg1;
- (void)_sendETARequest;
- (void)_updateRouteAttributesFor:(id)arg1 route:(id)arg2 updatedLocation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_cancelPendingETARequest;
- (void)_terminateETARequests;
- (void)_continueETARequests;
- (void)_scheduleETATimerWithInterval:(double)arg1;
- (void)resumeUpdateRequestsForSubscriber:(id)arg1;
- (void)pauseUpdateRequestsForSubscriber:(id)arg1;
- (void)requestUpdateForETAUPosition:(id)arg1;
- (void)requestImmediateUpdate;
- (void)restartUpdateTimer;
- (void)stopUpdateRequests;
- (void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

