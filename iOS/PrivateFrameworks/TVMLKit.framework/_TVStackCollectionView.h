//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

@class NSIndexPath;

@interface _TVStackCollectionView : UICollectionView
{
    double _bottomPadding;
    NSIndexPath *_indexPathForLastFocusedItem;
}

@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (void).cxx_destruct;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (struct CGRect)_visibleBounds;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadData;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setBottomPaddingForVisibleBounds:(double)arg1;

@end

