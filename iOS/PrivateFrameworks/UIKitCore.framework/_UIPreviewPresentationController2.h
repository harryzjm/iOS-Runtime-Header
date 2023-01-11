//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIViewPropertyAnimator, _UIPreviewPresentationPlatterView;
@protocol UIViewControllerPreviewing_Internal, _UIPreviewInteractionHighlighting;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationController2
{
    _Bool _hasPerformedInitialLayout;
    _Bool _shouldScaleContentViewToAspectFitPlatter;
    _Bool _shouldEnableUserInteractionOnPlatter;
    id <UIViewControllerPreviewing_Internal> _previewingContext;
    _UIPreviewPresentationPlatterView *_revealPlatterView;
    id <_UIPreviewInteractionHighlighting> _currentHighlighter;
    UIViewPropertyAnimator *_currentTransitionAnimator;
    double _interactiveTransitionFraction;
    _UIPreviewPresentationPlatterView *_contentPlatterView;
    struct CGAffineTransform _preferredContentPlatterTransform;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldEnableUserInteractionOnPlatter; // @synthesize shouldEnableUserInteractionOnPlatter=_shouldEnableUserInteractionOnPlatter;
@property(nonatomic) _Bool shouldScaleContentViewToAspectFitPlatter; // @synthesize shouldScaleContentViewToAspectFitPlatter=_shouldScaleContentViewToAspectFitPlatter;
@property(retain, nonatomic) _UIPreviewPresentationPlatterView *contentPlatterView; // @synthesize contentPlatterView=_contentPlatterView;
@property(nonatomic) double interactiveTransitionFraction; // @synthesize interactiveTransitionFraction=_interactiveTransitionFraction;
@property(nonatomic) __weak UIViewPropertyAnimator *currentTransitionAnimator; // @synthesize currentTransitionAnimator=_currentTransitionAnimator;
@property(nonatomic) __weak id <_UIPreviewInteractionHighlighting> currentHighlighter; // @synthesize currentHighlighter=_currentHighlighter;
@property(nonatomic) struct CGAffineTransform preferredContentPlatterTransform; // @synthesize preferredContentPlatterTransform=_preferredContentPlatterTransform;
@property(nonatomic) _Bool hasPerformedInitialLayout; // @synthesize hasPerformedInitialLayout=_hasPerformedInitialLayout;
@property(retain, nonatomic) _UIPreviewPresentationPlatterView *revealPlatterView; // @synthesize revealPlatterView=_revealPlatterView;
@property(nonatomic) __weak id <UIViewControllerPreviewing_Internal> previewingContext; // @synthesize previewingContext=_previewingContext;
- (void)_updateFromInteractionEffect:(id)arg1;
@property(readonly, nonatomic) struct CGRect _computedPlatterFrame;
- (_Bool)_shouldReduceMotion;
- (void)_performReducedMotionDismissAnimationsWithTransitionContext:(id)arg1;
- (void)_performDismissAnimationsWithTransitionContext:(id)arg1;
- (void)_performReducedMotionPresentationAnimationsWithTransitionContext:(id)arg1;
- (void)_performPresentationAnimationsWithTransitionContext:(id)arg1;
- (void)_performTransitionAnimations:(CDUnknownBlockType)arg1;
- (void)_prepareContentViewsForPresentationAnimationsIfNeeded;
- (void)_prepareContentPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_prepareRevealPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGRect)_preferredContentPlatterRectForContainerRect:(struct CGRect)arg1;
- (void)_layoutContentViews;
- (void)containerViewDidLayoutSubviews;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 previewingContext:(id)arg3;

@end
