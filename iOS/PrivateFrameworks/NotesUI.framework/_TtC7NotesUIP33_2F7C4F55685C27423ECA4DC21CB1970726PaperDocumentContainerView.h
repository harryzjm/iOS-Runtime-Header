//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, UIScrollView;

@interface _TtC7NotesUIP33_2F7C4F55685C27423ECA4DC21CB1970726PaperDocumentContainerView : UIView
{
    MISSING_TYPE *textAttachmentView;
    MISSING_TYPE *inlineView;
    MISSING_TYPE *thumbnailView;
    MISSING_TYPE *stickyHeaderEnabled;
    MISSING_TYPE *showThumbnails;
    MISSING_TYPE *headerContentView;
    MISSING_TYPE *headerView;
    MISSING_TYPE *headerContainer;
    MISSING_TYPE *scrollViewDelegateMultiplexer;
    MISSING_TYPE *collapseThumbnailsConstraint;
    MISSING_TYPE *stickyHeaderConstraint;
    MISSING_TYPE *pushStickyHeaderAwayConstraint;
    MISSING_TYPE *shadowView;
    MISSING_TYPE *headerShadowOpacity;
    MISSING_TYPE *didStartObservingTextView;
    MISSING_TYPE *lastLayoutBounds;
    MISSING_TYPE *doubleTapEater;
    MISSING_TYPE *nestedScrollViewInteraction;
    MISSING_TYPE *inLayoutSubviews;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updatePaletteVisibility;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)pdfViewMightHaveZoomed:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)toolPickerVisibilityDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(nonatomic, readonly) struct UIEdgeInsets adjustedContentInset;
@property(nonatomic, readonly) struct CGRect scrollBounds;
@property(nonatomic, readonly) struct CGSize contentSize;
@property(nonatomic) struct CGPoint contentOffset;
@property(nonatomic, readonly) struct CGRect frameInContainingScrollView;
@property(nonatomic, readonly) _Bool isLocked;
@property(nonatomic, readonly) _Bool isZoomed;
@property(nonatomic, readonly) UIScrollView *scrollView;

@end

