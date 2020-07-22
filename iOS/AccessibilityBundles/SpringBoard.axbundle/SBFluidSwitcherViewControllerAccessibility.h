//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBFluidSwitcherViewControllerAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityAppLayoutAtCurrentContentOffset;
- (void)_axCreateAppElements;
- (unsigned long long)_axCurrentAppLayoutIndex;
- (unsigned long long)_axAdjustedIndex:(unsigned long long)arg1 forScrollDirection:(long long)arg2;
- (_Bool)_axHasMultirowLayout;
- (unsigned long long)_axNumberOfPages;
- (unsigned long long)_axPageForIndex:(unsigned long long)arg1;
- (id)_axScrollStatusForIndex:(unsigned long long)arg1;
- (_Bool)_axIsInSwitcher;
- (long long)_axEnvironmentMode;
- (id)_axVisibleAppLayouts;
- (id)_axAppLayouts;
- (id)_axContentView;
- (id)_axAppLayoutForAppIdentifier:(id)arg1;
- (id)_axIdentifierOfAppInLayoutState:(id)arg1;
- (void)performTransitionWithContext:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_addVisibleItemContainerForAppLayout:(id)arg1;
- (_Bool)_removeVisibleItemContainerForAppLayout:(id)arg1;
- (void)_setupContentAndTransientViews;
- (void)_axScrollToAppLayout:(id)arg1;
- (_Bool)_axPerformScrollToIndex:(unsigned long long)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)accessibilityPerformEscape;
- (_Bool)_accessibilityServesAsContainingParentForOrdering;
- (_Bool)_accessibilityOnlyComparesByXAxis;
- (void)_accessibilityLoadAccessibilityInformation;

@end
