//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBChainableModifierDelegate-Protocol.h>

@class NSString, SBGestureSwitcherModifier, SBMixedGridSwitcherModifier;

@interface SBMixedGridHomeGestureRootSwitcherModifier <SBChainableModifierDelegate>
{
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    SBGestureSwitcherModifier *_gestureModifier;
    _Bool _continuingGesture;
    _Bool _lastGestureWasAnArcSwipe;
}

- (void).cxx_destruct;
- (id)_newMultitaskingModifier;
- (_Bool)canTransitionWithoutGestureModifier;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (id)handleGestureEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (_Bool)completesWhenChildrenComplete;
- (id)initWithStartingEnvironmentMode:(long long)arg1 mixedGridModifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
