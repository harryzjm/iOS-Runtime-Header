//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVShelfViewLayout.h"

__attribute__((visibility("hidden")))
@interface _TVMLShelfViewLayout : _TVShelfViewLayout
{
    double _showcaseFactor;
    double _cachedTallestHeaderHeight;
    struct TVCellMetrics _cellMetrics;
}

@property(nonatomic) double cachedTallestHeaderHeight; // @synthesize cachedTallestHeaderHeight=_cachedTallestHeaderHeight;
@property(nonatomic) double showcaseFactor; // @synthesize showcaseFactor=_showcaseFactor;
@property(nonatomic) struct TVCellMetrics cellMetrics; // @synthesize cellMetrics=_cellMetrics;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)contentRowMetricsForShowcase:(_Bool)arg1;
- (double)headerAllowance;
- (double)expectedLineSpacing;
- (id)init;

@end

