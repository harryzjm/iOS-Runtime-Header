//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UIViewAccessibility
{
}

+ (id)_axFocusedWindowSubviews;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_accessibilityHasDragDestinations;
- (_Bool)_accessibilityHasDragSources;
- (id)_accessibilityAllDropPointDescriptors;
- (id)_accessibilityAllDragSourceDescriptors;
- (id)_accessibilityAuditIssuesWithOptions:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)_setAccessibilityDidLoadAccessibilityInformation:(_Bool)arg1;
- (_Bool)_accessibilityDidLoadAccessibilityInformation;
- (_Bool)_accessibilityIsUserInteractionEnabled;
- (id)_axResponderChain;
- (id)_axWindowSubviews;
- (id)_axSubviews;
- (void)_axPrintSubviews:(long long)arg1 string:(id)arg2;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilitySupportGesturesAttributes;
- (id)accessibilityContainer;
- (id)_accessibilityChildVendingParent;
- (_Bool)_accessibilityIsInTableCell;
- (double)_accessibilityViewAlpha;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (_Bool)accessibilityElementsHidden;
- (id)_accessibilityRetrieveLabelFromTableViewCell;
- (id)_accessibilityRetrieveIvarText;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityCheckForAllowedModalView:(struct CGPoint)arg1 event:(id)arg2;
- (_Bool)_accessibilityViewIsBeingHitTested:(id)arg1;
- (id)__accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilityIsUserInteractionEnabledChain;
- (double)_accessibilityMaxFuzzyHitTestDistance;
- (_Bool)_accessibilityUseAccessibilityFrameForHittest;
- (_Bool)_accessibilityPointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityHitTestSubviews;
- (_Bool)_accessibilityModalViewBlocksView:(id)arg1 blockerView:(id *)arg2;
- (_Bool)_accessibilityObscuredScreenAllowsView:(id)arg1;
- (_Bool)_accessibilityAvoidsMockViewContainers;
- (id)_superAccessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)_accessibilityVerticalSizeClass;
- (long long)_accessibilityHorizontalSizeClass;
- (id)_accessibilityAutomaticIdentifier;
- (_Bool)_accessibilityIsIgnored;
- (_Bool)_accessibilityBlocksInteraction;
- (_Bool)_axViewIsOffScreen:(id)arg1;
- (_Bool)_axHasNoVisibleAxElements;
- (_Bool)_accessibilityViewIsActive;
- (_Bool)_accessibilityIsScannerElement;
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (_Bool)_accessibilityShouldHitTestLayers;
- (_Bool)accessibilityViewIsModal;
- (struct CGRect)accessibilityFrame;
- (_Bool)accessibilityIsWindow;
- (_Bool)_accessibilityServesAsContainingParentForOrdering;
- (_Bool)_accessibilityOnlyComparesByXAxis;
- (id)accessibilityPath;
- (id)_accessibilityCirclePathBasedOnBoundsWidth;
- (struct CGRect)_accessibilityBounds;
- (id)_accessibilityProxyView;
- (struct CGRect)_accessibilityFrameForView:(id)arg1;
- (void)_accessibilityFinalize;
- (void)_accessibilityPostNotification:(id)arg1;
- (_Bool)accessibilityElementIsFocused;
- (id)_accessibilityViewController;
- (id)_accessibilityObscuredScreenAllowedViews;

@end

