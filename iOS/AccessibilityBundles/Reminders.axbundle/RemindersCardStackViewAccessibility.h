//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RemindersCardStackViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (struct UIEdgeInsets)_accessibilityVisibleContentInset;
- (_Bool)_accessibilityAllowsSiblingsWhenOvergrown;
- (_Bool)isAccessibilityOpaqueElementProvider;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)_accessibilityScrollingEnabled;
- (id)_accessibilityScrollStatus;
- (_Bool)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (void)cardViewPanDidEnd:(id)arg1;
- (void)cardViewPanDidBegin:(id)arg1;
- (void)_animateCardView:(id)arg1 toIndex:(long long)arg2 referenceView:(id)arg3 orderAbove:(_Bool)arg4 reorderAfter:(double)arg5;
- (void)_tileCardsForState:(int)arg1 eager:(_Bool)arg2;
- (void)setPresentationState:(int)arg1 animated:(_Bool)arg2;
- (id)_accessibilityFirstViewInPileAtBottom;
- (id)_axListControllerForCardController:(id)arg1;
- (id)_accessibilityPresentedCard;
- (double)_axCardSpacing;
- (double)_axIdealYPositionForCardView:(id)arg1;
- (int)_accessibilityCardStackViewState;

@end

