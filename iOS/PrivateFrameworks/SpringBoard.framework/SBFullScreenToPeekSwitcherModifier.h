//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBFullScreenToPeekSwitcherModifier
{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromFloatingAppLayout;
    SBAppLayout *_toFloatingAppLayout;
    long long _peekConfiguration;
    long long _animationPhase;
    _Bool _resizedEnoughToUnblur;
}

- (void).cxx_destruct;
- (_Bool)_isPeekingAppLayout:(id)arg1;
- (double)_firstPhaseScale;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (_Bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (_Bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (id)resizeProgressNotificationsForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct SBSwitcherAsyncRenderingAttributes)asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (_Bool)wantsDockWindowLevelAssertion;
- (double)dockProgress;
- (_Bool)wantsDockBehaviorAssertion;
- (_Bool)isContainerStatusBarVisible;
- (double)wallpaperScale;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (struct UIRectCornerRadii)cornerRadiiForIndex:(unsigned long long)arg1;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect)_firstStageFrameForPeekingAppLayoutWithInitialFrame:(struct CGRect)arg1;
- (struct CGRect)frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect)arg3;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleResizeProgressEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)transitionDidEnd;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 fromFloatingAppLayout:(id)arg4 toFloatingAppLayout:(id)arg5 peekConfiguration:(long long)arg6;

@end
