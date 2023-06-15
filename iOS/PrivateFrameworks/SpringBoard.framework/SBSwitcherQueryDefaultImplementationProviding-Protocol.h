//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBChainableModifierQuery-Protocol.h>

@class CAMeshTransform, NSArray, NSSet, NSString, SBAppLayout, SBFFluidBehaviorSettings, SBSwitcherDropRegionContext, SBSwitcherResizeGrabberLayoutAttributes, SBSwitcherShelf;
@protocol SBSwitcherLayoutElementProviding;

@protocol SBSwitcherQueryDefaultImplementationProviding <SBChainableModifierQuery>
- (_Bool)clipsToBoundsAtIndex:(unsigned long long)arg1;
- (struct CGRect)clippingFrameForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 atIndex:(unsigned long long)arg3 withBounds:(struct CGRect)arg4;
- (struct CGRect)clippingFrameForIndex:(unsigned long long)arg1 withBounds:(struct CGRect)arg2;
- (double)rootContentViewBlurRadius;
- (struct CGRect)rootContentViewMaskRect;
- (struct CGPoint)expandedSourcePositionForSystemApertureTransition;
- (_Bool)systemApertureRequiresHeavyShadowForTransition;
- (NSSet *)systemApertureTransitioningAppLayouts;
- (unsigned long long)footerViewIconAlignmentForAppLayout:(SBAppLayout *)arg1;
- (struct SBSwitcherGradientWallpaperAttributes)wallpaperGradientAttributesForIndex:(unsigned long long)arg1;
- (_Bool)shouldUseWallpaperGradientTreatment;
- (double)adjustedSpaceAccessoryViewScale:(double)arg1 forAppLayout:(SBAppLayout *)arg2;
- (struct CGPoint)adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint)arg1 forAppLayout:(SBAppLayout *)arg2;
- (struct CGRect)adjustedSpaceAccessoryViewFrame:(struct CGRect)arg1 forAppLayout:(SBAppLayout *)arg2;
- (SBSwitcherResizeGrabberLayoutAttributes *)resizeGrabberLayoutAttributesForAppLayout:(SBAppLayout *)arg1;
- (SBAppLayout *)preferredAppLayoutToReuseAccessoryForAppLayout:(SBAppLayout *)arg1 fromAppLayouts:(NSArray *)arg2;
- (struct CGPoint)contentViewOffsetForAccessoriesOfAppLayout:(SBAppLayout *)arg1;
- (struct CGPoint)contentViewOffsetForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (_Bool)shouldTetherItemsAndAccessoriesInAppLayout:(SBAppLayout *)arg1;
- (SBAppLayout *)proposedAppLayoutForWindowDrag;
- (_Bool)isContinuousExposeStripVisible;
- (_Bool)wantsContinuousExposeHoverGesture;
- (struct SBSwitcherContinuousExposeStripTongueAttributes)continuousExposeStripTongueAttributes;
- (CAMeshTransform *)identityMeshTransformForIndex:(unsigned long long)arg1;
- (CAMeshTransform *)meshTransformForIndex:(unsigned long long)arg1;
- (double)perspectiveAngleForAppLayout:(SBAppLayout *)arg1;
- (unsigned long long)hiddenContentStatusBarPartsForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (unsigned long long)hiddenContainerStatusBarParts;
- (id <SBSwitcherLayoutElementProviding>)homeAffordanceLayoutElementToPortalIntoShelf:(SBSwitcherShelf *)arg1;
- (_Bool)shouldUpdateAnimatableProperty:(NSString *)arg1;
- (SBFFluidBehaviorSettings *)settingsForAnimatableProperty:(NSString *)arg1;
- (long long)updateModeForAnimatableProperty:(NSString *)arg1;
- (double)modelValueForAnimatableProperty:(NSString *)arg1 currentValue:(double)arg2 creating:(_Bool)arg3;
- (NSSet *)animatablePropertyIdentifiers;
- (_Bool)canLayoutRoleParticipateInSwitcherDragAndDrop:(long long)arg1 appLayout:(SBAppLayout *)arg2;
- (SBSwitcherDropRegionContext *)switcherDropRegionContextForDraggingLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 atLocation:(struct CGPoint)arg3;
- (struct CGRect)bounceIconInitialFrame;
- (NSString *)bounceIconBundleIdentifier;
- (unsigned long long)bounceIconGenerationCountForCurrentCount:(unsigned long long)arg1;
- (NSSet *)hiddenAppLayoutsInShelf:(SBSwitcherShelf *)arg1;
- (NSSet *)ignoredDisplayItemsForShelf:(SBSwitcherShelf *)arg1;
- (SBAppLayout *)focusedAppLayoutForShelf:(SBSwitcherShelf *)arg1;
- (struct SBSwitcherShelfPresentationAttributes)presentationAttributesForShelf:(SBSwitcherShelf *)arg1;
- (double)spaceAccessoryViewIconHitTestOutsetForAppLayout:(SBAppLayout *)arg1;
- (_Bool)wantsSpaceAccessoryViewPointerInteractionsForAppLayout:(SBAppLayout *)arg1;
- (unsigned long long)multipleWindowsIndicatorLayoutRoleMaskForAppLayout:(SBAppLayout *)arg1;
- (_Bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (_Bool)shouldPinLayoutRolesToSpace:(unsigned long long)arg1;
- (struct CGPoint)anchorPointForIndex:(unsigned long long)arg1;
- (_Bool)shouldShowBackdropViewAtIndex:(unsigned long long)arg1;
- (_Bool)shouldUseNonuniformSnapshotScalingForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (_Bool)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)arg1;
- (_Bool)canFocusableAppLayoutBeEffectivelyObscured:(SBAppLayout *)arg1;
- (_Bool)switcherHitTestsAsOpaque;
- (NSArray *)topMostLayoutRolesForAppLayout:(SBAppLayout *)arg1;
- (_Bool)wantsSceneResizesHostedContextForAppLayout:(SBAppLayout *)arg1;
- (_Bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (_Bool)shouldSuppressHighlightEffectForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (unsigned long long)blurTargetPreferenceForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (_Bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (struct CGRect)frameForIconOverlayInAppLayout:(SBAppLayout *)arg1;
- (struct CGRect)fullyPresentedFrameForIndex:(unsigned long long)arg1 frame:(struct CGRect)arg2;
- (NSSet *)repositionProgressNotificationsForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (NSSet *)resizeProgressNotificationsForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (unsigned long long)maskedCornersForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 withMaskedCorners:(unsigned long long)arg3;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cornerRadiiForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 withCornerRadii:(struct UIRectCornerRadii)arg3;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2;
- (struct CGRect)frameForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 withBounds:(struct CGRect)arg3;
@end

