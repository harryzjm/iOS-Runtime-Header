//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBSceneLayoutViewController, SBUIBlockAnimationController;

@interface SBSceneLayoutTransitionAnimationController
{
    SBSceneLayoutViewController *_layoutController;
    SBUIBlockAnimationController *_blockAnimation;
}

- (void).cxx_destruct;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (_Bool)_canBeInterrupted;
- (id)containerView;
- (id)_getTransitionWindow;
- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 animationBlock:(CDUnknownBlockType)arg4;
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 stepped:(_Bool)arg4 animationBlock:(CDUnknownBlockType)arg5;

@end
