//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11PosterBoard23PosterRackStackedLayout : UICollectionViewLayout
{
    MISSING_TYPE *layoutMode;
    MISSING_TYPE *selectedSectionIndex;
    MISSING_TYPE *sectionRevealProgressProvider;
    MISSING_TYPE *hidesHomeCardsInAlongsideLayout;
    MISSING_TYPE *alongsideCompactLayoutShouldScaleFurtherBack;
    MISSING_TYPE *layoutModeTransitioningTo;
    MISSING_TYPE *itemSize;
    MISSING_TYPE *minimumLineSpacing;
    MISSING_TYPE *sectionInset;
    MISSING_TYPE *scrollDirection;
    MISSING_TYPE *zoomCardSizeMultiplier;
    MISSING_TYPE *cardSizeMultiplier;
    MISSING_TYPE *peekingCardSizeMultiplier;
    MISSING_TYPE *alongsideCardUpscale;
    MISSING_TYPE *alongsideCardLesserUpscale;
    MISSING_TYPE *maximumVerticalRevealFraction;
    MISSING_TYPE *overhangMultiplier;
    MISSING_TYPE *zoomCardSizeOverlapMultiplier;
    MISSING_TYPE *selectedFrontBaseOffset;
    MISSING_TYPE *unselectedFrontBaseOffset;
    MISSING_TYPE *unselectedFrontShovedMultiplier;
    MISSING_TYPE *unselectedFrontShovedMultiplierPad;
    MISSING_TYPE *unselectedFrontParallaxLeadingMultiplier;
    MISSING_TYPE *unselectedFrontParallaxTrailingMultiplier;
    MISSING_TYPE *backBaseOffset;
    MISSING_TYPE *backParallaxMultiplier;
    MISSING_TYPE *backParallaxMultiplierPad;
    MISSING_TYPE *coupledContentEdgeMargin;
    MISSING_TYPE *contentBounds;
    MISSING_TYPE *cachedAttributes;
    MISSING_TYPE *cachedSupplementaryHeaderAttributes;
    MISSING_TYPE *cachedSupplementaryFooterAttributes;
    MISSING_TYPE *cachedSupplementaryDecorationAttributes;
    MISSING_TYPE *sectionRevealProgresses;
    MISSING_TYPE *sectionIndexPathsToDelete;
    MISSING_TYPE *indexPathToMaintainForTransition;
}

- (void).cxx_destruct;
- (id)init;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (_Bool)_disablesDoubleSidedAnimations;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;
- (void)finalizeLayoutTransition;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
@property(nonatomic, readonly) _Bool flipsHorizontallyInOppositeLayoutDirection;
- (id)initWithCoder:(id)arg1;

@end

