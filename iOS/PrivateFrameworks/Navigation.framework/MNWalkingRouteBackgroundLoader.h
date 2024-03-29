//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEODirectionsServiceRequest, MNActiveRouteInfo, MNNavigationSessionState, NSDate, NSString;
@protocol MNWalkingRouteBackgroundLoaderDelegate;

__attribute__((visibility("hidden")))
@interface MNWalkingRouteBackgroundLoader : NSObject
{
    GEOApplicationAuditToken *_auditToken;
    NSString *_requestingAppIdentifier;
    _Bool _isFetchingWalkingRoutes;
    GEODirectionsServiceRequest *_pendingRequest;
    NSDate *_dateSinceLastRouteRequest;
    id <MNWalkingRouteBackgroundLoaderDelegate> _delegate;
    MNNavigationSessionState *_navigationSessionState;
    MNActiveRouteInfo *_walkingRouteInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MNActiveRouteInfo *walkingRouteInfo; // @synthesize walkingRouteInfo=_walkingRouteInfo;
@property(copy, nonatomic) MNNavigationSessionState *navigationSessionState; // @synthesize navigationSessionState=_navigationSessionState;
@property(nonatomic) __weak id <MNWalkingRouteBackgroundLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleWalkingRouteResponse:(id)arg1;
- (void)_updateForLocation:(id)arg1;
- (void)_updateWalkingRoute;
- (id)_requestWalkingRouteWithHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

