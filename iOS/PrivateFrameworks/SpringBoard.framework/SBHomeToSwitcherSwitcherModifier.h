//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBSwitcherModifier;

@interface SBHomeToSwitcherSwitcherModifier
{
    long long _direction;
    SBSwitcherModifier *_multitaskingModifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBSwitcherModifier *multitaskingModifier; // @synthesize multitaskingModifier=_multitaskingModifier;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
- (id)_dismissForEmptySwitcherResponseName;
- (id)appLayoutToScrollToDuringTransition;
- (_Bool)isEffectivelyHome;
- (id)handleTimerEvent:(id)arg1;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (double)containerStatusBarAnimationDuration;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 multitaskingModifier:(id)arg3;

@end
