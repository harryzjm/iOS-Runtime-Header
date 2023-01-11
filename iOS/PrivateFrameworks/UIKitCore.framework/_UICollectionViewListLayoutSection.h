//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UICollectionLayoutSectionCallback-Protocol.h>

@class NSString, _UICollectionViewListLayoutSectionConfiguration;
@protocol NSCollectionLayoutEnvironment_Private;

@interface _UICollectionViewListLayoutSection <_UICollectionLayoutSectionCallback>
{
    _UICollectionViewListLayoutSectionConfiguration *_configuration;
    id <NSCollectionLayoutEnvironment_Private> _layoutEnvironment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_layoutEnvironment) id <NSCollectionLayoutEnvironment_Private> layoutEnvironment; // @synthesize layoutEnvironment=_layoutEnvironment;
- (void)_configureLayoutAttributesForBackgroundDecoration:(id)arg1;
- (unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)arg1;
- (void)_configureLayoutAttributesForSwipeActionMasking:(id)arg1;
- (void)_configureLayoutAttributesWithInsetGroupedMasking:(id)arg1 stylesFirstItemAsHeader:(_Bool)arg2;
- (void)_configureLayoutAttributesWithDefaultMasking:(id)arg1;
- (void)_configureLayoutAttributesForPlainCell:(id)arg1;
- (void)_configureLayoutAttributesForSidebarPlainCell:(id)arg1;
- (void)_configureLayoutAttributes:(id)arg1 forSeparatorAtBottom:(_Bool)arg2 interactionState:(id)arg3;
- (_Bool)_shouldHideBottomSeparatorAtIndexPath:(id)arg1 forGrouping:(unsigned long long)arg2 interactionState:(id)arg3;
- (_Bool)_shouldHideTopSeparatorAtIndexPath:(id)arg1 interactionState:(id)arg2;
- (struct NSDirectionalEdgeInsets)_effectiveBoundarySeparatorInsetsFromConfiguration:(id)arg1;
- (struct NSDirectionalEdgeInsets)_preferredSeparatorInsetsFromCellLayoutAttributes:(id)arg1;
- (id)_preferredSizingCustomizationsForItemWithLayoutAttributes:(id)arg1 interactionState:(id)arg2;
- (void)_enrichLayoutAttributes:(id)arg1 interactionState:(id)arg2;
- (void)_enrichPreferredLayoutAttributes:(id)arg1 interactionState:(id)arg2;
- (id)_invalidationContextForBackgroundChangeAtIndexPath:(id)arg1 interactionState:(id)arg2;
- (id)_callback;
- (struct NSDirectionalEdgeInsets)_sectionPreferredDirectionalSeparatorInsetsForIndexPath:(id)arg1;
- (_Bool)__isLastSection:(long long)arg1;
- (_Bool)__isLastItemInSection:(id)arg1;
- (_Bool)__shouldDrawSeparatorAtBottom:(_Bool)arg1 ofSection:(long long)arg2 interactionState:(id)arg3;
- (_Bool)_isVisuallyContiguousWithSectionAfterSectionIndex:(long long)arg1 interactionState:(id)arg2;
- (_Bool)_adjustsLayoutToMergeWithBarInSection:(long long)arg1 interactionState:(id)arg2;
- (id)_effectiveBackgroundColor;
- (_Bool)prefersListSolver;
- (_Bool)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (void)_didEndSwiping;
- (void)_willBeginSwiping;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (_Bool)_wantsSwipeActions;
- (void)_updateStyleForSwipeActionsConfiguration:(id)arg1;
- (_Bool)_useRoundedSwipeActions;
- (struct NSDirectionalEdgeInsets)_effectiveSectionHorizontalInsets;
- (_Bool)_hasHorizontalInsets;
- (struct NSDirectionalEdgeInsets)_defaultDirectionalLayoutMarginsInsideSection;
- (struct UIEdgeInsets)_defaultLayoutMarginsInsideSection;
- (struct NSDirectionalEdgeInsets)_defaultSectionContentInsetsForAppearanceStyle:(long long)arg1;
- (struct UIEdgeInsets)_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)arg1 forUseAsContentInsets:(_Bool)arg2;
- (double)_alignedContentMarginGivenMargin:(double)arg1;
- (_Bool)_isRTL;
- (id)_constants;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
