//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneManagerInternalObserver-Protocol.h>
#import <FrontBoard/FBSceneManagerObserver-Protocol.h>

@class FBScene, NSMutableArray, NSMutableSet, NSString;

@interface FBUIApplicationSceneDeactivationManager : NSObject <FBSceneManagerObserver, FBSceneManagerInternalObserver, BSDescriptionProviding>
{
    NSMutableSet *_eligibleScenes;
    NSMutableArray *_activeBands;
    FBScene *_updatingScene;
}

+ (id)sharedInstance;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 amendSettings:(id)arg2 forUpdatingScene:(id)arg3;
- (void)_untrackScene:(id)arg1;
- (void)_trackScene:(id)arg1;
- (void)_noteSceneWillUpdate:(id)arg1 oldSettings:(id)arg2 newSettings:(id)arg3;
- (unsigned long long)_deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2;
- (void)_updateAllScenesForBand:(id)arg1 withTransitionContext:(id)arg2 reason:(id)arg3;
- (void)_setDeactivationReasons:(unsigned long long)arg1 onScene:(id)arg2 withSettings:(id)arg3 reason:(id)arg4;
- (id)_bandForSceneLevel:(double)arg1 createIfNeeded:(_Bool)arg2;
- (id)_deactivationBandsForLevel:(double)arg1;
- (_Bool)_areEligibleSceneSettings:(id)arg1 forScene:(id)arg2;
- (_Bool)_shouldTrackSceneInitiallyAtInitialization:(id)arg1;
- (_Bool)_isEligibleDisplayIdentity:(id)arg1;
- (_Bool)_isEligibleScene:(id)arg1 withSettings:(id)arg2;
- (_Bool)_isEligibleProcess:(id)arg1;
- (void)removeAssertion:(id)arg1;
- (void)addAssertion:(id)arg1 withTransitionContext:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

