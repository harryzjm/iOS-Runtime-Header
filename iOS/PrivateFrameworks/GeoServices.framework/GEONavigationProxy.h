//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOCompanionRouteContext, GEOCompanionRouteDetails, GEOCompanionRouteStatus, GEOComposedRoute, GEOLocation, GEONameInfo, GEONavigationGuidanceState, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEORouteMatch, NSArray, NSData, NSString, NSXPCConnection;
@protocol GEOServerFormattedStepStringFormatter;

@interface GEONavigationProxy : NSObject
{
    NSXPCConnection *_navdConnection;
    NSXPCConnection *_nanomapscdConnection;
    int _navigationStartedToken;
    _Bool _hasNavigationStartedToken;
    NSString *_destinationName;
    GEOComposedRoute *_route;
    GEOLocation *_lastLocation;
    _Bool _locationUnreliable;
    GEORouteMatch *_routeMatch;
    NSString *_currentRoadName;
    _Bool _guidancePromptsEnabled;
    NSData *_activeRouteDetailsData;
    NSArray *_rideSelections;
    unsigned long long _stepIndex;
    unsigned long long _displayedStepIndex;
    GEONameInfo *_stepNameInfo;
    CDStruct_a70066d4 _positionFromSign;
    CDStruct_a70066d4 _positionFromManeuver;
    CDStruct_a70066d4 _positionFromDestination;
    unsigned long long _announcementStage;
    unsigned long long _nextAnnouncementStage;
    double _timeUntilNextAnnouncement;
    GEONavigationRouteSummary *_routeSummary;
    GEONavigationRouteTransitSummary *_transitRouteSummary;
    GEONavigationGuidanceState *_guidanceState;
    NSData *_trafficIncidentAlertDetailsData;
    int _navigationVoiceVolume;
    _Bool _isNavigatingInLowGuidance;
    GEOCompanionRouteDetails *_companionRouteDetails;
    GEOCompanionRouteStatus *_companionRouteStatus;
    GEOCompanionRouteContext *_companionRouteContext;
    _Bool _shouldSendRouteWithStatus;
    id <GEOServerFormattedStepStringFormatter> _formatter;
}

@property(retain) id <GEOServerFormattedStepStringFormatter> formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;
- (void)_invalidateNavigationSessionWithRouteContext:(id)arg1;
- (void)_sendCoalescedCompanionRouteStatus;
- (void)_sendCompanionRouteStatus;
- (void)_sendCompanionRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3;
- (void)_markCurrentHapticsAsTriggered;
- (void)_updateCompanionRouteStatus;
- (void)_closeNanomapscdConnection;
- (void)_openNanomapscdConnection;
- (void)_sendNavigationVoiceVolume;
- (void)_sendTrafficIncidentAlertDetailsData;
- (void)_sendPositionFromDestination;
- (void)_sendPositionFromManeuver;
- (void)_sendPositionFromSign;
- (void)_sendActiveRouteDetailsData;
- (void)_sendRideSelections;
- (void)_sendStepNameInfo;
- (void)_sendStepIndex;
- (void)_sendCurrentRoadName;
- (void)_sendGuidanceState;
- (void)_sendTransitSummary;
- (void)_sendRouteSummary;
- (void)_closeNavdConnection;
- (void)_openNavdConnection;
- (void)_clearState;
- (void)triggerHaptics:(int)arg1;
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;
- (void)setNavigationVoiceVolume:(int)arg1;
- (void)setTrafficIncidentDetailsData:(id)arg1;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2;
- (void)setAnnouncementStage:(unsigned long long)arg1;
- (void)setPositionFromDestination:(CDStruct_c3b9c2ee)arg1;
- (void)setPositionFromManeuver:(CDStruct_c3b9c2ee)arg1;
- (void)setPositionFromSign:(CDStruct_c3b9c2ee)arg1;
- (void)setClusteredSectionSelectedRideFromRoute:(id)arg1 routeID:(id)arg2;
- (void)setStepNameInfo:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setStepIndex:(unsigned long long)arg1;
- (void)setActiveRouteDetailsData:(id)arg1;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setLocationUnreliable:(_Bool)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setRoute:(id)arg1;
- (void)stop;
- (void)startWithDestinationName:(id)arg1;
- (void)dealloc;

@end

