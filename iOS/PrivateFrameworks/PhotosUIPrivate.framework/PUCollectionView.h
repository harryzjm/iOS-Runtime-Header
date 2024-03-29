//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@class NSIndexPath, NSString, PXUIAutoScroller, UILongPressGestureRecognizer, UIView, _UIDragSnappingFeedbackGenerator;
@protocol PUCollectionViewReorderDelegate, PUCollectionViewSelectionDelegate;

__attribute__((visibility("hidden")))
@interface PUCollectionView : UICollectionView
{
    UILongPressGestureRecognizer *_dragGestureRecognizer;
    NSIndexPath *_dragSourceIndexPath;
    NSIndexPath *_dragTargetIndexPath;
    UIView *_draggedView;
    struct CGPoint _draggedViewCenterOffset;
    PXUIAutoScroller *_autoScroller;
    _Bool _shouldWorkaround34630932;
    id <PUCollectionViewReorderDelegate> _reorderDelegate;
    id <PUCollectionViewSelectionDelegate> _selectionDelegate;
    _UIDragSnappingFeedbackGenerator *__feedbackDragBehavior;
}

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _UIDragSnappingFeedbackGenerator *_feedbackDragBehavior; // @synthesize _feedbackDragBehavior=__feedbackDragBehavior;
@property(nonatomic) __weak id <PUCollectionViewSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(nonatomic) __weak id <PUCollectionViewReorderDelegate> reorderDelegate; // @synthesize reorderDelegate=_reorderDelegate;
- (void)visiblyInsertItemAtIndexPath:(id)arg1 modelUpdate:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateDragUsingIndexPathUpdateBlock:(CDUnknownBlockType)arg1;
- (id)_reorderableLayout;
- (void)_handleDrag:(id)arg1;
- (void)_applyAutomaticAdjustedContentOffset:(struct CGPoint)arg1;
- (void)didScrollToInitialPosition;
- (id)indexPathsForSelectedItems;
- (void)reloadData;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)adjustedContentInsetDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

