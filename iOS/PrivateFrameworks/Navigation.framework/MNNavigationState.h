//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationStateInterface-Protocol.h>

@class MNNavigationStateManager, MNNavigationTraceManager, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationState : NSObject <MNNavigationStateInterface>
{
    double _locationUpdateInterval;
    double _suggestionUpdateFrequency;
    MNNavigationStateManager *_stateManager;
}

@property(readonly, nonatomic) __weak MNNavigationStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, nonatomic) double suggestionUpdateFrequency; // @synthesize suggestionUpdateFrequency=_suggestionUpdateFrequency;
@property(readonly, nonatomic) double locationUpdateInterval; // @synthesize locationUpdateInterval=_locationUpdateInterval;
- (void).cxx_destruct;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(_Bool)arg1;
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)changeSettings:(id)arg1;
- (void)setFullGuidanceMode:(_Bool)arg1;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopPredictingDestinations;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopNavigation;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)addCommuteDestinationSuggestion:(id)arg1;
- (void)updateWithLocation:(id)arg1;
- (void)confirmDestination:(id)arg1;
- (void)updateVehicleDetected:(_Bool)arg1;
- (void)updateMapsActive:(_Bool)arg1;
- (void)leaveState;
- (void)enterState;
- (void)dealloc;
- (id)initWithStateManager:(id)arg1;
- (id)init;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager;
@property(readonly, nonatomic) unsigned long long desiredResourcePolicy;
@property(readonly, nonatomic) unsigned long long desiredLocationProviderType;
@property(readonly, nonatomic) _Bool requiresHighMemoryThreshold;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
