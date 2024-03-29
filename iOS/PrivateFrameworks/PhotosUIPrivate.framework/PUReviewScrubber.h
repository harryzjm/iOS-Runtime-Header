//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIToolbar.h>

@class NSIndexPath, NSString, PUHorizontalCollectionViewLayout, UICollectionView, UIImageView, UIImpactFeedbackGenerator, UITapGestureRecognizer, _UIBackdropView;
@protocol PUReviewScrubberDataSource, PUReviewScrubberDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewScrubber : UIToolbar
{
    _Bool __ignoreScrollViewDidScrollUpdate;
    _Bool __performingInteractiveUpdate;
    id <PUReviewScrubberDataSource> _dataSource;
    id <PUReviewScrubberDelegate> _scrubberDelegate;
    NSIndexPath *_selectedIndexPath;
    Class _scrubberCellClass;
    _UIBackdropView *__backdropView;
    UIImageView *__shadowView;
    UIImageView *__arrowImageView;
    PUHorizontalCollectionViewLayout *__collectionViewLayout;
    UICollectionView *__collectionView;
    NSString *_cellReuseIdentifier;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UIImpactFeedbackGenerator *__impactFeedbackBehavior;
    NSIndexPath *__indexPathForPreviousFeedbackQuery;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setIndexPathForPreviousFeedbackQuery:) NSIndexPath *_indexPathForPreviousFeedbackQuery; // @synthesize _indexPathForPreviousFeedbackQuery=__indexPathForPreviousFeedbackQuery;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *_impactFeedbackBehavior; // @synthesize _impactFeedbackBehavior=__impactFeedbackBehavior;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(readonly, nonatomic) _Bool _performingInteractiveUpdate; // @synthesize _performingInteractiveUpdate=__performingInteractiveUpdate;
@property(readonly, nonatomic) _Bool _ignoreScrollViewDidScrollUpdate; // @synthesize _ignoreScrollViewDidScrollUpdate=__ignoreScrollViewDidScrollUpdate;
@property(retain, nonatomic) NSString *cellReuseIdentifier; // @synthesize cellReuseIdentifier=_cellReuseIdentifier;
@property(readonly, nonatomic) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(readonly, nonatomic) PUHorizontalCollectionViewLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property(readonly, nonatomic) UIImageView *_arrowImageView; // @synthesize _arrowImageView=__arrowImageView;
@property(readonly, nonatomic) UIImageView *_shadowView; // @synthesize _shadowView=__shadowView;
@property(readonly, nonatomic) _UIBackdropView *_backdropView; // @synthesize _backdropView=__backdropView;
@property(retain, nonatomic) Class scrubberCellClass; // @synthesize scrubberCellClass=_scrubberCellClass;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) id <PUReviewScrubberDelegate> scrubberDelegate; // @synthesize scrubberDelegate=_scrubberDelegate;
@property(nonatomic) id <PUReviewScrubberDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_notifyDelegateOfSelection;
- (void)_notifyDelegateOfScrub;
- (void)_updateToSelectedIndexPath:(id)arg1;
- (struct CGPoint)contentOffsetForItemAtIndex:(long long)arg1 ofScrollView:(id)arg2;
- (struct CGPoint)contentOffsetForIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (id)indexPathUnderTickMarkInCollectionView:(id)arg1 atContentOffset:(struct CGPoint)arg2;
- (void)_updateContentOffsetForSelectedIndexPathAnimated:(_Bool)arg1;
- (void)_handleTapOnReviewScrubber:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2 excludingIndexPath:(id)arg3;
- (void)_endFeedbackInteraction;
- (void)_playFeedbackIfNeeded;
- (void)_beginFeedbackInteraction;
- (void)finishInteractiveUpdate;
- (void)updateWithAbsoluteProgress:(double)arg1;
- (void)beginInteractiveUpdate;
- (void)reloadSelectedIndexPathAnimated:(_Bool)arg1;
- (void)reloadIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)toggleSelectedIndexPathAnimated:(_Bool)arg1;
- (void)toggleIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)setSelectedIndexPath:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isMinibar;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPUReviewScrubberInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

