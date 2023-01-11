//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction
{
    SBApplicationSceneEntity *_fromAppSceneEntity;
    _Bool _workspaceAlreadyResumed;
    _Bool _animatedAppDeactivation;
}

- (void).cxx_destruct;
- (void)_animationDidFinish;
- (void)_animationWillBegin:(_Bool)arg1;
- (id)_setupAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_didComplete;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)arg1 toLockScreenEnvironment:(id)arg2;

@end
