//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface OKWidgetGridViewCondensedLayout : UICollectionViewLayout
{
    float _spacingRatio;
    unsigned long long _numberOfRows;
    _Bool _snappingEnabled;
    NSMutableArray *_attributes;
    double _largestWidth;
    struct CGSize _contentSize;
    struct CGRect _oldBounds;
}

@property _Bool snappingEnabled; // @synthesize snappingEnabled=_snappingEnabled;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldUpdateVisibleCellLayoutAttributes;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
@property unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property float spacingRatio; // @synthesize spacingRatio=_spacingRatio;
- (void)dealloc;
- (id)init;

@end

