//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBIconListPageControlAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (_Bool)_axHasOpenFolder;
- (void)_axSetNewPage:(long long)arg1;
- (id)accessibilityValue;
- (long long)_accessibilityCurrentPageIndex;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (_Bool)_accessibilityViewIsVisible;
- (_Bool)_accessibilitySupportsActivateAction;
- (_Bool)_accessibilityServesAsContainingParentForOrdering;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)accessibilityActivate;
- (_Bool)_axIsLastPage;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
