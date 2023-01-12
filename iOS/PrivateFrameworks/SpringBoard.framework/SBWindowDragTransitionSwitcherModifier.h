//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet, SBAppLayout;

@interface SBWindowDragTransitionSwitcherModifier
{
    SBAppLayout *_selectedAppLayout;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBAppLayout *_toFloatingAppLayout;
    _Bool _isGoingToHomeScreenPeek;
    NSSet *_initiallyBlurredDisplayItems;
    NSMutableSet *_waitingForSceneUpdateForDisplayItems;
    _Bool _hasAddedChildTransitionModifiers;
}

- (void).cxx_destruct;
- (_Bool)_minimizingCenterWindow;
- (_Bool)_goingToHomeScreenPeekFromSplitView;
- (struct SBSwitcherAsyncRenderingAttributes)asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutToAttachSlideOverTongue;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (_Bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (_Bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)transitionDidEnd;
- (id)appLayoutContainingAppLayout:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 fromAppLayout:(id)arg3 toAppLayout:(id)arg4 toFloatingAppLayout:(id)arg5 toHomeScreenPeek:(_Bool)arg6 toAppExposeBundleIdentifier:(id)arg7 initiallyBlurredDisplayItems:(id)arg8;

@end
