//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;
@protocol PUSelectableAssetCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUSelectableAssetCollectionViewLayout
{
    NSSet *_floatingCellIndexPaths;
    struct UIOffset _sharingBadgeOffset;
    struct CGSize _layoutReferenceSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize layoutReferenceSize; // @synthesize layoutReferenceSize=_layoutReferenceSize;
@property(retain, nonatomic) NSSet *floatingCellIndexPaths; // @synthesize floatingCellIndexPaths=_floatingCellIndexPaths;
@property(nonatomic) struct UIOffset sharingBadgeOffset; // @synthesize sharingBadgeOffset=_sharingBadgeOffset;
- (struct CGRect)collectionViewBounds;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (struct CGRect)_floatingSelectionBadgeFrameForItemFrame:(struct CGRect)arg1 visibleItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <PUSelectableAssetCollectionViewLayoutDelegate> delegate; // @dynamic delegate;

@end

