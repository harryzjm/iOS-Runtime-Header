//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVCABackdropLayerView, AVExternalPlaybackIndicatorView, AVMobileControlsViewController, AVPlaybackControlsView, AVPlayerViewControllerCustomControlsView, AVScrollingObserver, AVTurboModePlaybackControlsPlaceholderView, NSArray, NSMutableDictionary, NSNumber, NSString, UIImageView;
@protocol AVPlaybackContentContainer, AVPlayerViewControllerContentViewDelegate, AVPlayerViewControllerContentViewDelegate_Gen1;

__attribute__((visibility("hidden")))
@interface AVPlayerViewControllerContentView : UIView
{
    UIImageView *_audioOnlyIndicatorView;
    UIView *_contentOverlayView;
    AVExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    UIView *_iAdPreRollView;
    UIImageView *_unsupportedContentIndicatorView;
    NSArray *_customControlsViewLayoutGuideConstraints;
    AVCABackdropLayerView *_backdropLayerView;
    AVTurboModePlaybackControlsPlaceholderView *_turboModePlaybackControlsPlaceholderView;
    id <AVPlayerViewControllerContentViewDelegate_Gen1> _gen1Delegate;
    _Bool _showsPlaybackControls;
    _Bool _wantsBackdropView;
    _Bool _canAutomaticallyZoomLetterboxVideos;
    _Bool _styleSheetShouldUseCompactFullScreenItemSize;
    _Bool _needsInitialLayout;
    NSString *_automaticVideoGravity;
    AVMobileControlsViewController *_controlsViewController;
    unsigned long long _contentOverlayViewPlacement;
    AVPlayerViewControllerCustomControlsView *_customControlsView;
    AVScrollingObserver *_scrollingObserver;
    id <AVPlayerViewControllerContentViewDelegate> _delegate;
    UIView<AVPlaybackContentContainer> *_playbackContentContainerView;
    UIView *_interactiveContentOverlayView;
    UIView *_iAdPreRollViewIfLoaded;
    NSMutableDictionary *_targetVideoGravities;
    NSString *_externalPlaybackIndicatorTitle;
    NSString *_externalPlaybackIndicatorSubtitle;
    struct UIEdgeInsets _edgeInsetsForLetterboxedContent;
    struct UIEdgeInsets _videoContentInset;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *externalPlaybackIndicatorSubtitle; // @synthesize externalPlaybackIndicatorSubtitle=_externalPlaybackIndicatorSubtitle;
@property(copy, nonatomic) NSString *externalPlaybackIndicatorTitle; // @synthesize externalPlaybackIndicatorTitle=_externalPlaybackIndicatorTitle;
@property(readonly, nonatomic) NSMutableDictionary *targetVideoGravities; // @synthesize targetVideoGravities=_targetVideoGravities;
@property(nonatomic) _Bool needsInitialLayout; // @synthesize needsInitialLayout=_needsInitialLayout;
@property(nonatomic) struct UIEdgeInsets videoContentInset; // @synthesize videoContentInset=_videoContentInset;
@property(nonatomic) _Bool styleSheetShouldUseCompactFullScreenItemSize; // @synthesize styleSheetShouldUseCompactFullScreenItemSize=_styleSheetShouldUseCompactFullScreenItemSize;
@property(readonly, nonatomic) UIView *iAdPreRollViewIfLoaded; // @synthesize iAdPreRollViewIfLoaded=_iAdPreRollViewIfLoaded;
@property(retain, nonatomic) UIView *interactiveContentOverlayView; // @synthesize interactiveContentOverlayView=_interactiveContentOverlayView;
@property(nonatomic) struct UIEdgeInsets edgeInsetsForLetterboxedContent; // @synthesize edgeInsetsForLetterboxedContent=_edgeInsetsForLetterboxedContent;
@property(nonatomic) _Bool canAutomaticallyZoomLetterboxVideos; // @synthesize canAutomaticallyZoomLetterboxVideos=_canAutomaticallyZoomLetterboxVideos;
@property(retain, nonatomic) UIView<AVPlaybackContentContainer> *playbackContentContainerView; // @synthesize playbackContentContainerView=_playbackContentContainerView;
@property(nonatomic) __weak id <AVPlayerViewControllerContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVScrollingObserver *scrollingObserver; // @synthesize scrollingObserver=_scrollingObserver;
@property(nonatomic) _Bool wantsBackdropView; // @synthesize wantsBackdropView=_wantsBackdropView;
@property(nonatomic) _Bool showsPlaybackControls; // @synthesize showsPlaybackControls=_showsPlaybackControls;
@property(retain, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView; // @synthesize customControlsView=_customControlsView;
@property(nonatomic) unsigned long long contentOverlayViewPlacement; // @synthesize contentOverlayViewPlacement=_contentOverlayViewPlacement;
@property(retain, nonatomic) UIView *contentOverlayView; // @synthesize contentOverlayView=_contentOverlayView;
@property(retain, nonatomic) AVMobileControlsViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
- (void)_applyVideoGravityIfNeeded:(long long)arg1;
- (void)scrollingObserverDidChangeScrollingState:(id)arg1;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(_Bool)arg2;
- (void)avkit_needsUpdateBackdropCaptureViewHidden;
- (_Bool)avkit_hasFullScreenLayoutClass;
- (id)avkit_backdropGroupLeader;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)updateCustomControlsViewLayoutGuides;
- (void)removeTurboModePlaybackControlsPlaceholderViewIfNeeded;
- (void)loadPlaybackControlsViewIfNeeded;
@property(readonly, nonatomic) NSNumber *layoutClass;
@property(readonly, nonatomic) _Bool isCoveringWindow;
- (void)setTargetVideoGravity:(id)arg1 forLayoutClass:(unsigned long long)arg2;
- (void)setShowsExternalPlaybackIndicator:(_Bool)arg1;
- (void)setShowsAudioOnlyIndicator:(_Bool)arg1;
- (void)setShowsUnsupportedContentIndicator:(_Bool)arg1;
- (_Bool)isViewDescendantOfPlaybackControlsSubview:(id)arg1;
@property(readonly, nonatomic) AVPlaybackControlsView *playbackControlsView;
@property(readonly, nonatomic) UIView *iAdPreRollView;
- (void)setGen1Delegate:(id)arg1;
- (id)gen1Delegate;
- (void)setExternalPlaybackIndicatorTitle:(id)arg1 subtitle:(id)arg2;
- (id)chromeControlsViewController;
- (void)addPlaybackContentContainerViewIfNeeded;
@property(copy, nonatomic) NSString *automaticVideoGravity; // @synthesize automaticVideoGravity=_automaticVideoGravity;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 playbackContentContainerView:(id)arg2 targetVideoGravities:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

