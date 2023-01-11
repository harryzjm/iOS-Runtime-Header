//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSObject, SBAppSwitcherPageView, SBBestAppSuggestion, SBSwitcherAppSuggestionBannerView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol OS_dispatch_queue, SBSwitcherAppSuggestionViewControllerDelegate;

@interface SBSwitcherAppSuggestionViewController : UIViewController
{
    SBBestAppSuggestion *_bestAppSuggestion;
    _Bool _showSuggestions;
    SBSwitcherAppSuggestionBannerView *_bannerView;
    SBAppSwitcherPageView *_slideUpPageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _presentingOrDismissingBanner;
    _Bool _isPresentingApp;
    NSObject<OS_dispatch_queue> *_setSuggestionQueue;
    _Bool _suggestionQueueSuspended;
    id <SBSwitcherAppSuggestionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSwitcherAppSuggestionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=_isSuggestionQueueSuspended, setter=_setSuggestionQueueSuspended:) _Bool suggestionQueueSuspended; // @synthesize suggestionQueueSuspended=_suggestionQueueSuspended;
@property(nonatomic) _Bool showSuggestions; // @synthesize showSuggestions=_showSuggestions;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion; // @synthesize bestAppSuggestion=_bestAppSuggestion;
- (void).cxx_destruct;
- (void)_activateCurrentSuggestionWithAnimationCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasSuggestionBannerView;
- (void)_removeContainerForSlideUp;
- (void)_insertContainerForSlideUp;
- (id)_newDynamicAnimationForTargetValue:(double)arg1 withStartValue:(double)arg2 withInitialVelocity:(double)arg3;
- (void)_handleBannerTap:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)_handleLongPress:(id)arg1;
- (void)_handleBannerTap:(id)arg1;
- (void)_animateOutAndRemoveCurrentBottomBannerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_insertAndAnimateInBottomBannerForSuggestion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_bannerStyle;
- (void)_updateBottomBannerWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGRect)_presentedRectForContentView;
- (struct CGRect)_offscreenRectForContentView;
- (struct CGRect)_idleOnscreenRectForBottomBanner;
- (struct CGRect)_offscreenRectForBottomBanner;
- (void)_endInteractivePresentationOrAnimation;
- (void)_beginInteractivePresentationOrAnimation;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end
