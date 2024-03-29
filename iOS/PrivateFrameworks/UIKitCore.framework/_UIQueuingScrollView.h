//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIScrollView.h"

@class NSArray, NSMutableArray, UIView;
@protocol _UIQueuingScrollViewDataSource, _UIQueuingScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollView : UIScrollView
{
    id <_UIQueuingScrollViewDelegate> _qDelegate;
    id <_UIQueuingScrollViewDataSource> _qDataSource;
    long long _navigationOrientation;
    NSArray *_views;
    NSArray *_wrapperViews;
    UIView *_pendingVisibleView;
    double _pageSpacing;
    NSMutableArray *_viewStateQueue;
    NSMutableArray *_completionStateQueue;
    _Bool _manualScrollInProgress;
    struct {
        unsigned int delegateInterestedInPendingScrolls:1;
        unsigned int delegateInterestedInCommittedScrolls:1;
        unsigned int delegateInterestedInCompletedScrolls:1;
        unsigned int delegateInterestedInBailedOutScrolls:1;
        unsigned int delegateInterestedFinishedScrolling:1;
        unsigned int delegateCanVetoSubviewLayout:1;
        unsigned int dataSourceSuppliesBeforeView:1;
        unsigned int dataSourceSuppliesAfterView:1;
        unsigned int dataSourceInterestedInFlushedViews:1;
    } _delegateFlags;
    struct CGRect _disabledScrollingRegion;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect disabledScrollingRegion; // @synthesize disabledScrollingRegion=_disabledScrollingRegion;
@property(nonatomic) double pageSpacing; // @synthesize pageSpacing=_pageSpacing;
@property(nonatomic) __weak id <_UIQueuingScrollViewDataSource> qDataSource; // @synthesize qDataSource=_qDataSource;
@property(nonatomic) __weak id <_UIQueuingScrollViewDelegate> qDelegate; // @synthesize qDelegate=_qDelegate;
- (_Bool)canBecomeFocused;
- (void)_didEndProgrammaticScroll;
- (void)_didEndManualScroll;
- (void)_didEndScroll:(_Bool)arg1;
- (void)_didEndDraggingManualScroll;
- (void)_didScrollWithAnimation:(_Bool)arg1 force:(_Bool)arg2;
- (_Bool)_isScrollInProgress:(_Bool)arg1;
- (_Bool)_isDeceleratingInOppositionToNavigationDirection:(long long)arg1;
- (void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(long long)arg3 canComplete:(_Bool)arg4;
- (void)_boundsDidChangeToSize:(struct CGSize)arg1;
- (void)_adjustContentInsets;
- (void)setView:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_notifyDelegateDidFinishScrolling;
- (void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1;
- (void)_notifyDelegateDidEndManualScroll:(_Bool)arg1 toRevealView:(id)arg2 direction:(long long)arg3 animated:(_Bool)arg4 didFinish:(_Bool)arg5 didComplete:(_Bool)arg6;
- (void)_notifyDelegateDidCommitManualScroll:(_Bool)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(long long)arg4 animated:(_Bool)arg5 canComplete:(_Bool)arg6;
- (void)_notifyDelegateWillManuallyScroll:(_Bool)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(_Bool)arg4;
- (void)_enqueueAnimatedScrollInDirection:(long long)arg1 withView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cleanUpCompletionState:(id)arg1 didFinish:(_Bool)arg2 didComplete:(_Bool)arg3;
- (void)_enqueueCompletionState:(id)arg1;
- (long long)_navigationDirectionFromCurrentOffset;
- (long long)_navigationDirectionForActiveScroll:(_Bool)arg1;
- (_Bool)isManualScrollInProgress;
- (_Bool)isPreviousScrollCompatibleWithScrollInDirection:(long long)arg1;
- (void)_invalidateOffscreenViews;
- (id)_viewAtIndex:(long long)arg1 loadingIfNecessary:(_Bool)arg2 updatingContents:(_Bool)arg3 animated:(_Bool)arg4;
- (id)_dequeueViewForIndex:(long long)arg1;
- (id)_requestViewForIndex:(long long)arg1;
- (void)_replaceViews:(id)arg1 updatingContents:(_Bool)arg2 adjustContentInsets:(_Bool)arg3 animated:(_Bool)arg4;
- (void)_flushView:(id)arg1 animated:(_Bool)arg2;
- (id)_visibleView;
- (id)_viewAfterView:(id)arg1;
- (id)_viewBeforeView:(id)arg1;
- (id)_viewBefore:(_Bool)arg1 view:(id)arg2;
- (_Bool)_dataSourceProvidesViews;
- (void)_setWrappedViewAtIndex:(long long)arg1 withView:(id)arg2;
- (void)_handleDirectionalPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (unsigned long long)_abuttedPagingEdges;
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_setFrameAndApplyPageSpacing:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *visibleView;
- (id)initWithFrame:(struct CGRect)arg1 navigationOrientation:(long long)arg2;

@end

