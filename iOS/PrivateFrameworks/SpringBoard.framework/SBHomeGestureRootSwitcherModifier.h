//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBSwitcherModifier;

@interface SBHomeGestureRootSwitcherModifier
{
    SBSwitcherModifier *_multitaskingModifier;
}

- (void).cxx_destruct;
- (id)_newMultitaskingModifier;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)initWithStartingEnvironmentMode:(long long)arg1 multitaskingModifier:(id)arg2;

@end
