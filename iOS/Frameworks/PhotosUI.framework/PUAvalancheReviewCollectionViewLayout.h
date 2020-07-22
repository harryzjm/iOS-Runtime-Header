//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath;
@protocol PUAvalancheReviewCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUAvalancheReviewCollectionViewLayout
{
    NSIndexPath *_zoomingCellIndexPath;
    struct UIOffset _sharingBadgeOffset;
}

@property(retain, nonatomic) NSIndexPath *zoomingCellIndexPath; // @synthesize zoomingCellIndexPath=_zoomingCellIndexPath;
@property(nonatomic) struct UIOffset sharingBadgeOffset; // @synthesize sharingBadgeOffset=_sharingBadgeOffset;
- (void).cxx_destruct;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (struct CGRect)_floatingSelectionBadgeFrameForItemFrame:(struct CGRect)arg1 visibleItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <PUAvalancheReviewCollectionViewLayoutDelegate> delegate; // @dynamic delegate;

@end
