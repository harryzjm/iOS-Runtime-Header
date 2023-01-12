//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ASVPreviewViewControllerInternalAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)accessibilityDidSetUpEntityControllers;
- (void)entityController:(id)arg1 doubleTappedAt:(struct CGPoint)arg2;
- (void)updateInterfaceState;
- (void)_axUpdateForOldEmitterMode:(long long)arg1;
- (void)_axToggleVisibilityAnnouncementsIfNeeded;
- (void)_axSetIsFirstVisibilityAnnouncement:(_Bool)arg1;
- (_Bool)_axIsFirstVisibilityAnnouncement;
- (void)_axSetTimerForVisibilityAnnouncements:(id)arg1;
- (id)_axTimerForVisibilityAnnouncements;
- (void)_axCheckForAppearanceOfObjectsWithTimer:(id)arg1;
- (_Bool)_axIsOffScreenForEntityWrapper:(id)arg1;
- (void)_axSetOffScreen:(_Bool)arg1 forEntityWrapper:(id)arg2;
- (id)_axIdentifierForEntityWrapper:(id)arg1;
- (void)_axSetEntityIdentifiersToOffScreenState:(id)arg1;
- (id)_axEntityIdentifiersToOffScreenState;
- (_Bool)_axIsOffScreenForEntityController:(id)arg1;
- (void)_axSetOffScreen:(_Bool)arg1 forEntityController:(id)arg2;
- (void)handleTapAtPointWithPoint:(struct CGPoint)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_axUpdateARViewAccessibilityElements;
- (void)_axSetARModeControls:(id)arg1;
- (id)_axARModeControls;
- (void)_axSetObjectModeControls:(id)arg1;
- (id)_axObjectModeControls;
- (id)_axARModeControlsForEntityController:(id)arg1 isRTL:(_Bool)arg2;
- (id)_axObjectModeControlsForEntityController:(id)arg1 isRTL:(_Bool)arg2;
- (id)_axEntityElementsForEntityController:(id)arg1;
- (id)_axEntityControllers;
- (id)_axRootEntityController;
- (long long)_axEmitterMode;
- (struct CGRect)_axBoundingRectForEntityWrapper:(id)arg1;
- (struct CGRect)_axBoundingRectForEntityController:(id)arg1;
- (id)_axDescriptionForCurrentPositionForEntityController:(id)arg1;
- (id)_axControlForTranslationForLevitation:(_Bool)arg1 delta:(id)arg2 nameFormat:(id)arg3 entityController: /* Error: Ran out of types for this method. */;
- (_Bool)_axTranslateForLevitation:(_Bool)arg1 delta:(id)arg2 entityController: /* Error: Ran out of types for this method. */;
- (float)_axLevitationHeightForEntityController:(id)arg1;
- (id)_axControlForScalingForEntityController:(id)arg1;
- (void)_axResetToInitialScaleForEntityAction:(id)arg1;
- (void)_axAdjustScaleByMultiplier:(float)arg1 entityController:(id)arg2;
- (id)_axUnifiedGestureRecognizerForEntityController:(id)arg1;
- (float)_axAssetScaleForAnnouncementsForEntityController:(id)arg1;
- (float)_axAssetScaleForEntityController:(id)arg1;
- (id)_axControlForRotationWithDeltaYaw:(float)arg1 deltaPitch:(float)arg2 nameFormat:(id)arg3 hintFormat:(id)arg4 shouldUseArrows:(_Bool)arg5 entityController:(id)arg6;
- (_Bool)_axActivateForEntityController:(id)arg1 deltaYaw:(float)arg2 deltaPitch:(float)arg3;
- (id)_axCreateAssetElementForEntityController:(id)arg1;
- (_Bool)_axIsAccessibilityElementForEntityController:(id)arg1;
- (struct CGRect)_axFrameForEntityController:(id)arg1;
- (id)_axLabelForEntityController:(id)arg1;
- (id)_axDescriptionForCurrentPitchForEntityController:(id)arg1;
- (id)_axDescriptionForCurrentRotationForEntityController:(id)arg1;
- (id)_axDescriptionForPitchInDegrees:(long long)arg1;
- (id)_axDescriptionForRotationInDegrees:(long long)arg1;
- (void)_axAnnotateAsControl:(id)arg1;
- (_Bool)_axShouldExposeControls;
- (void)_axGetAccessibilityFrame:(struct CGRect *)arg1 path:(id *)arg2 forRotationControlClockwise:(_Bool)arg3;
- (void)_axGetAccessibilityFrame:(struct CGRect *)arg1 path:(id *)arg2 forArrowTowardsEdge:(unsigned long long)arg3 isDoubleArrow:(_Bool)arg4;
- (struct CGRect)_axBoundsForControls;
- (id)_axNameForEntityController:(id)arg1;
- (id)_axNameForEntityWrapper:(id)arg1;
- (id)_axRootEntityWrapperForEntityController:(id)arg1;
- (id)_axEntityWrappersForEntityController:(id)arg1;
- (id)_axOverlayController;
- (id)_axControlsViewStack;
- (id)_axARView;
- (void)_axUpdateForAXSettings;
- (void)_axDidToggleAXSetting:(id)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axSetHasHandledLoadAX:(_Bool)arg1;
- (_Bool)_axHasHandledLoadAX;

@end
