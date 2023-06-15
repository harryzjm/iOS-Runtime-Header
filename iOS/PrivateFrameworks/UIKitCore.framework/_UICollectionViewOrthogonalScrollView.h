//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIScrollView.h"

@class NSString, UICollectionView, _UICollectionLayoutSectionDescriptor, _UICollectionViewSubviewRouter;

__attribute__((visibility("hidden")))
@interface _UICollectionViewOrthogonalScrollView : UIScrollView
{
    UICollectionView *_collectionView;
    long long _section;
    _UICollectionViewSubviewRouter *_subviewRouter;
    _UICollectionLayoutSectionDescriptor *_descriptor;
    struct UIEdgeInsets _baseContentInsets;
}

+ (_Bool)_supportsInvalidatingFocusCache;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_willRemoveSubview:(id)arg1;
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (struct UIEdgeInsets)_focusScrollableAreaInsets;
- (unsigned long long)_focusPrimaryScrollableAxis;
- (id)_focusScrollBoundaryMetricsForItem:(id)arg1;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (id)_extantFocusItemsInRect:(struct CGRect)arg1;
- (id)focusItemsInRect:(struct CGRect)arg1;
- (struct CGPoint)_panGestureVelocityInView:(id)arg1;
- (struct CGPoint)_panGestureLocationInView:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)_pointByRemovingBaseContentInsetsFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)_pointByApplyingBaseContentInsetsToPoint:(struct CGPoint)arg1;
- (void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)_contentOffsetForScrollingToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 itemFrame:(struct CGRect)arg3;
- (void)_notifyDidScroll;

// Remaining properties
@property(readonly, nonatomic) struct CGPoint contentOffset;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking;

@end

