//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBSwitcherQueryDefaultImplementationProviding-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, SBAppLayout, SBSwitcherAnimationAttributes, SBSwitcherKeyboardSuppressionMode, SBSwitcherShelf;
@protocol SBSwitcherLayoutElementProviding;

@protocol SBSwitcherQueryProviding <SBSwitcherQueryDefaultImplementationProviding>
- (BOOL)activityModeForAppLayout:(SBAppLayout *)arg1;
- (BOOL)jetsamModeForAppLayout:(SBAppLayout *)arg1;
- (NSSet *)foregroundAppLayouts;
- (SBAppLayout *)appLayoutToAttachSlideOverTongue;
- (unsigned long long)slideOverTongueDirection;
- (unsigned long long)slideOverTongueState;
- (_Bool)wantsSlideOverTongue;
- (SBAppLayout *)appLayoutForReceivingHardwareButtonEvents;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (struct SBSwitcherAsyncRenderingAttributes)asyncRenderingAttributesForAppLayout:(SBAppLayout *)arg1;
- (SBSwitcherKeyboardSuppressionMode *)keyboardSuppressionMode;
- (NSDictionary *)appLayoutsToResignActive;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (_Bool)wantsDockWindowLevelAssertion;
- (long long)dockUpdateMode;
- (double)dockProgress;
- (_Bool)wantsDockBehaviorAssertion;
- (_Bool)shouldConfigureInAppDockVisibleAssertion;
- (_Bool)shouldConfigureInAppDockHiddenAssertion;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (_Bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (_Bool)shouldAnimateInsertionOrRemovalOfAppLayout:(SBAppLayout *)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isIndexRubberbandableForSwipeToKill:(unsigned long long)arg1;
- (_Bool)isLayoutRoleKillable:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)isLayoutRoleEligibleForContentDragSpringLoading:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (_Bool)isLayoutRoleDraggable:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (_Bool)isLayoutRoleSelectable:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (_Bool)shouldPerformRotationAnimationForOrientationChange;
- (_Bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (_Bool)shouldAcceleratedHomeButtonPressBegin;
- (unsigned long long)transactionCompletionOptions;
- (SBAppLayout *)appLayoutToScrollToBeforeReopeningClosedWindows;
- (SBAppLayout *)appLayoutToScrollToBeforeTransitioning;
- (long long)preferredSnapshotOrientationForAppLayout:(SBAppLayout *)arg1;
- (NSArray *)appLayoutsToCacheFullsizeSnapshots;
- (NSArray *)appLayoutsToCacheSnapshots;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (long long)plusButtonStyle;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)reopenClosedWindowsButtonScale;
- (double)reopenClosedWindowsButtonAlpha;
- (double)plusButtonAlpha;
- (NSString *)appExposeAccessoryButtonsBundleIdentifier;
- (_Bool)wantsHomeScreenPointerInteractions;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (double)containerStatusBarAnimationDuration;
- (_Bool)isContainerStatusBarVisible;
- (_Bool)shouldRubberbandFullScreenHomeGrabberView;
- (_Bool)canPerformKeyboardShortcutAction:(long long)arg1 forBundleIdentifier:(NSString *)arg2;
- (NSSet *)neighboringAppLayoutsForFocusedAppLayout:(SBAppLayout *)arg1;
- (_Bool)isFocusEnabledForAppLayout:(SBAppLayout *)arg1;
- (_Bool)isItemContainerPointerInteractionEnabled;
- (_Bool)shouldScrollViewBlockTouches;
- (_Bool)isScrollEnabled;
- (double)switcherBackdropBlurProgress;
- (long long)switcherBackdropBlurType;
- (_Bool)wantsSwitcherBackdropBlur;
- (_Bool)switcherDimmingViewBlocksTouches;
- (double)switcherDimmingAlpha;
- (_Bool)wantsSwitcherDimmingView;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (double)wallpaperScale;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (long long)touchBehaviorForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (_Bool)shouldAllowContentViewTouchesForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (_Bool)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)arg1;
- (_Bool)shouldUseBrightMaterialForIndex:(unsigned long long)arg1;
- (_Bool)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1;
- (double)blurViewIconScaleForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cornerRadiiForIndex:(unsigned long long)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (long long)headerStyleForIndex:(unsigned long long)arg1;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)topMostLayoutElements;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (_Bool)isItemResizingAllowedForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (unsigned long long)activeCornersForTouchResizeForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (_Bool)isResizeGrabberVisibleForAppLayout:(SBAppLayout *)arg1;
- (_Bool)shouldAccessoryDrawShadowForAppLayout:(SBAppLayout *)arg1;
- (struct CGRect)shelfBackgroundBlurFrame;
- (double)shelfBackgroundBlurOpacity;
- (struct CGRect)frameForShelf:(SBSwitcherShelf *)arg1;
- (SBAppLayout *)containerLeafAppLayoutForShelf:(SBSwitcherShelf *)arg1;
- (NSSet *)visibleShelves;
- (NSSet *)visibleHomeAffordanceLayoutElements;
- (_Bool)isHomeAffordanceSupportedForAppLayout:(SBAppLayout *)arg1;
- (long long)tintStyleForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (SBSwitcherAnimationAttributes *)animationAttributesForLayoutElement:(id <SBSwitcherLayoutElementProviding>)arg1;
- (double)contentViewScale;
- (NSSet *)visibleAppLayouts;
- (double)rotationAngleForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (NSArray *)adjustedAppLayoutsForAppLayouts:(NSArray *)arg1;
@end

