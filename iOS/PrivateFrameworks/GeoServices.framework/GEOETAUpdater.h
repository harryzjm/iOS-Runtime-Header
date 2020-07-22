//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOCommonOptions, GEOComposedRoute, GEOComposedWaypoint, GEOETATrafficUpdateRequest, GEOLocation, GEORouteAttributes, GEORouteMatch, NSData, NSString, NSTimer;
@protocol GEOETAUpdaterDelegate;

@interface GEOETAUpdater : NSObject
{
    id <GEOETAUpdaterDelegate> _delegate;
    NSString *_requestingAppIdentifier;
    GEOETATrafficUpdateRequest *_currentETARequest;
    GEOLocation *_userLocation;
    GEORouteMatch *_routeMatch;
    GEOComposedRoute *_route;
    GEOComposedWaypoint *_destination;
    GEORouteAttributes *_routeAttributes;
    long long _etaState;
    _Bool _allowRequests;
    _Bool _shouldUseConditionalRequest;
    _Bool _shouldUpdateTrafficOnRoute;
    double _requestInterval;
    NSTimer *_etaIdleTimer;
    double _lastETARequestTime;
    double _debugTimeWindowDuration;
    unsigned long long _maxAlternateRoutesCount;
    NSData *_directionsResponseID;
    GEOCommonOptions *_commonOptions;
    GEOApplicationAuditToken *_auditToken;
}

@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) unsigned long long maxAlternateRoutesCount; // @synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount;
@property(nonatomic) double debugTimeWindowDuration; // @synthesize debugTimeWindowDuration=_debugTimeWindowDuration;
@property(nonatomic) double requestInterval; // @synthesize requestInterval=_requestInterval;
@property(nonatomic) _Bool shouldUpdateTrafficOnRoute; // @synthesize shouldUpdateTrafficOnRoute=_shouldUpdateTrafficOnRoute;
@property(nonatomic) _Bool shouldUseConditionalRequest; // @synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest;
@property(nonatomic) _Bool allowRequests; // @synthesize allowRequests=_allowRequests;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property(nonatomic) __weak id <GEOETAUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_updateRouteWithETATrafficUpdateResponse:(id)arg1;
- (_Bool)updateRouteWithETATrafficUpdateResponse:(id)arg1 step:(id)arg2 percentOfStepRemaining:(double)arg3;
- (id)routesForETAUpdateRequest;
- (double)percentageOfCurrentStepRemaining;
- (id)currentStep;
- (_Bool)_shouldStartConditionalETARequest;
- (void)_continueUpdateRequests;
- (double)_calculateNextTransitionTime;
- (void)_sendRequest:(id)arg1 shouldCallWillSendCallback:(_Bool)arg2;
- (_Bool)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2;
- (void)_startConditionalConnectionETARequest;
- (void)_startStateWaitingForBestTimeStart:(id)arg1;
- (void)_updateRequest:(id)arg1;
- (void)stopUpdateRequests;
- (void)startUpdateRequests;
- (void)cancelRequest;
- (void)requestUpdate;
- (void)_clearTimer;
- (void)reset;
@property(readonly) _Bool requestInProgress;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (id)init;

@end
