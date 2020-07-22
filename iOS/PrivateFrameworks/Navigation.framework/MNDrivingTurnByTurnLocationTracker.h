//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/MNETAManagerDelegate-Protocol.h>
#import <Navigation/MNTrafficIncidentAlertUpdaterDelegate-Protocol.h>
#import <Navigation/MNTunnelLocationProjectorDelegate-Protocol.h>

@class MNAlternateRoutesUpdater, MNETAManager, MNTrafficIncidentAlertUpdater, MNTunnelLocationProjector, NSString;

@interface MNDrivingTurnByTurnLocationTracker <MNETAManagerDelegate, MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate>
{
    MNETAManager *_etaManager;
    MNTunnelLocationProjector *_tunnelLocationProjector;
    MNAlternateRoutesUpdater *_alternateRoutesUpdater;
    MNTrafficIncidentAlertUpdater *_trafficIncidentAlertUpdater;
    int _detectedTransportType;
    _Bool _exitedVehicle;
    unsigned long long _vehicleExitConfidence;
    CDStruct_2c43369c _vehicleExitCoordinate;
    double _lastKnownCourse;
    double _consecutiveValidCourseCount;
}

- (void).cxx_destruct;
- (void)tunnelLocationProjector:(id)arg1 didUpdateLocation:(id)arg2;
- (_Bool)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg1;
- (double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1;
- (double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1;
- (double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(id)arg1;
- (void)trafficIncidentAlertUpdater:(id)arg1 didReturnToOriginalRoute:(id)arg2 etaRoute:(id)arg3 forAlert:(id)arg4;
- (void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 forAlert:(id)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;
- (void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(_Bool)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;
- (void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)etaManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)etaManager:(id)arg1 updatedTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)etaManager:(id)arg1 receivedTrafficIncidentAlert:(id)arg2;
- (void)etaManager:(id)arg1 updatedIncidentsForRoute:(id)arg2 etaRoute:(id)arg3 incidentsOffset:(unsigned int)arg4;
- (void)etaManager:(id)arg1 failedToReceiveETAResponse:(id)arg2;
- (void)etaManager:(id)arg1 receivedETAResponse:(id)arg2;
- (void)etaManager:(id)arg1 willSendETARequest:(id)arg2;
- (void)etaManagerUpdatedETATime:(id)arg1;
- (id)_alternateRouteForOffRouteLocation:(id)arg1;
- (id)_contingentRouteForRouteSet:(id)arg1 forLocation:(id)arg2;
- (id)_lazyContingentRouteForRouteSet:(id)arg1 forLocation:(id)arg2;
- (_Bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (int)_detectedMotionForLocation:(id)arg1;
- (_Bool)_checkArrivalForLocation:(id)arg1;
- (void)_updateForArrival;
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)_updateForLocation:(id)arg1;
- (id)_overrideLocationForLocation:(id)arg1;
- (id)_newMapMatcherForRoute:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (void)_setAuditToken:(id)arg1;
- (_Bool)shouldProjectAlongRoute;
- (int)transportType;
- (void)_sendRouteHintForLocation:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (void)tracePaused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

