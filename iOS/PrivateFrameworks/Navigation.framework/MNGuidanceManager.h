//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedGuidanceEvent, GEOComposedRoute, MNAnnouncementEngine, MNAnnouncementPlanEvent, MNAudioManager, MNGuidanceSignInfo, MNJunctionViewImageLoader, MNLocation, MNNavigationSessionState, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MNGuidanceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceManager : NSObject
{
    MNAudioManager *_audioManager;
    MNAnnouncementEngine *_announcementEngine;
    NSMutableDictionary *_announcementsSpoken;
    NSMutableSet *_exclusiveSetAnnouncementsSpoken;
    NSMutableDictionary *_specialSpokenEvents;
    NSMutableDictionary *_specialSignEvents;
    NSMutableDictionary *_specialAREvents;
    NSMutableArray *_events;
    NSDictionary *_eventIndexes;
    GEOComposedGuidanceEvent *_nextEvent;
    _Bool _hasBeenOnRouteOnce;
    _Bool _canSpeakReturnToRouteAnnouncement;
    double _timeLastAnnouncementStarted;
    double _timeLastAnnouncementEnded;
    _Bool _hasPersistentEvents;
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;
    NSMutableDictionary *_hapticsTriggered;
    MNGuidanceSignInfo *_signInfo;
    NSArray *_arEvents;
    NSArray *_previousSignEvents;
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;
    MNJunctionViewImageLoader *_junctionViewImageLoader;
    GEOComposedGuidanceEvent *_pendingJunctionViewGuidanceEvent;
    GEOComposedGuidanceEvent *_currentJunctionViewGuidanceEvent;
    MNLocation *_location;
    double _speed;
    NSMutableArray *_validEvents;
    NSMutableDictionary *_feedback;
    _Bool _isInPreArrivalState;
    _Bool _shouldShowChargingInfo;
    id <MNGuidanceManagerDelegate> _delegate;
    MNNavigationSessionState *_navigationSessionState;
}

- (void).cxx_destruct;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) MNNavigationSessionState *navigationSessionState; // @synthesize navigationSessionState=_navigationSessionState;
@property(nonatomic) _Bool shouldShowChargingInfo; // @synthesize shouldShowChargingInfo=_shouldShowChargingInfo;
@property(nonatomic) _Bool isInPreArrivalState; // @synthesize isInPreArrivalState=_isInPreArrivalState;
@property(nonatomic) __weak id <MNGuidanceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timeManagerDidChangeProvider:(id)arg1;
- (unsigned long long)_trafficColorForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;
- (void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2;
- (double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;
- (double)_distanceToEndOfRoute;
- (double)_distanceToManeuverStart;
- (double)_distanceToRouteCoordinate:(CDStruct_3f2a7a20)arg1;
- (double)_timeUntilEventTrigger:(id)arg1;
- (double)timeUntilNextAnnouncement;
- (double)timeSinceLastAnnouncement;
- (double)_timeRemainingForEvent:(id)arg1;
- (int)_indexForEventUUID:(id)arg1;
- (_Bool)_isEVChargingEvent:(id)arg1;
- (_Bool)_isValidEvent:(id)arg1;
- (double)_adjustedVehicleSpeed;
- (void)_markEventSpoken:(id)arg1;
- (_Bool)_eventWasSpoken:(id)arg1;
- (id)_specialSpokenEvents:(int)arg1 forLegIndex:(unsigned long long)arg2;
- (_Bool)_isInArrivalState;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (id)_junctionViewEvents;
- (void)_handleJunctionViewInfo:(id)arg1;
- (id)_nextJunctionViewGuidanceEvent;
- (void)_considerJunctionViewGuidance;
- (_Bool)_hasPersistentEvents;
- (void)_considerPersistence;
- (double)_headingForArEvent:(id)arg1;
- (int)_maneuverTypeForAREvent:(id)arg1;
- (id)_specialAREvents:(int)arg1 forLeg:(unsigned long long)arg2;
- (id)_arrivalARGuidanceEventsForLeg:(unsigned long long)arg1;
- (id)_closestContinueAREventToRouteCoordinate:(CDStruct_3f2a7a20)arg1;
- (id)_validEventsForARGuidance;
- (id)_createArGuidanceInfosForEvent:(id)arg1 forStep:(id)arg2;
- (void)_considerARGuidance;
- (_Bool)_updateDisplayStringArgument:(id)arg1 event:(id)arg2;
- (id)_evaluatedStringsForEvent:(id)arg1 signStrings:(id)arg2 shouldUpdateFormatStrings:(_Bool)arg3 argumentHandler:(CDUnknownBlockType)arg4;
- (id)_signForGuidanceEvent:(id)arg1 isPrimary:(_Bool)arg2 shouldOverridePrimaryDistances:(_Bool)arg3 distance:(out double *)arg4;
- (id)_sortedSignEventsFromValidSignEvents:(id)arg1;
- (id)_specialSignEvents:(int)arg1 forLeg:(unsigned long long)arg2;
- (id)_validEventsForSignGuidance:(out _Bool *)arg1;
- (void)_considerSignGuidance;
- (id)_nextLaneGuidanceEvent;
- (void)_considerLaneGuidance;
- (void)_considerHaptics;
- (id)_durationsForEvent:(id)arg1;
- (id)_serverStringDictionaryForChargingEvent:(id)arg1;
- (id)_serverStringDictionaryForEvent:(id)arg1 distance:(double)arg2 validDistance:(double)arg3 spoken:(_Bool)arg4 waypoints:(id)arg5;
- (_Bool)_updateSpokenStringArgument:(id)arg1 event:(id)arg2;
- (id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 selectedVariantIndex:(out unsigned long long *)arg3;
- (void)_notifySpeechEvent:(id)arg1 waypointCategory:(int)arg2 ignorePromptStyle:(_Bool)arg3;
- (id)_spokenEventsRemainingInStep;
- (void)_planAnnouncements;
- (void)_repeatSpokenEvent:(id)arg1;
- (_Bool)_considerOtherSpecialAnnouncements;
- (_Bool)_considerArrivalAnnouncements;
- (_Bool)_considerChargingAnnouncements;
- (_Bool)_considerGetOnRouteAnnouncements;
- (_Bool)_considerStartingAnnouncements;
- (void)_considerAnnouncements;
- (void)_filterValidEvents;
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
- (void)updateSessionStateForReroute:(id)arg1 reason:(unsigned long long)arg2 location:(id)arg3;
- (void)updateDestination:(id)arg1;
- (_Bool)repeatLastGuidanceAnnouncement:(id)arg1;
- (void)stop;
@property(readonly, nonatomic) unsigned long long currentLegIndex;
@property(readonly, nonatomic) GEOComposedRoute *route;
@property(readonly, nonatomic) NSArray *events;
- (void)_resetLastAnnouncementTime;
- (void)reset;
- (void)dealloc;
- (void)_initSpecialGuidanceEventsForRoute:(id)arg1;
- (id)initWithNavigationSessionState:(id)arg1 audioManager:(id)arg2 isReconnecting:(_Bool)arg3 announcementsToIgnore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

