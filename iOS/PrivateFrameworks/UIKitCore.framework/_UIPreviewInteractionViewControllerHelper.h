//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, UIViewController, UIWindow, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionViewControllerHelper : NSObject
{
    _UIPreviewInteractionHighlighter *_highlighter;
    _UIPreviewInteractionViewControllerPresentation *_viewControllerPresentation;
    UIWindow *_presentingWindow;
    CDUnknownBlockType _presentationCompletion;
    CDUnknownBlockType _dismissalCompletion;
    _Bool _shouldActAsAppearanceAnimationController;
    _Bool _shouldUseDefaultPresentationController;
    UIViewController *_previousParentViewController;
    UIView *_previousSuperview;
    id <UIViewControllerContextTransitioning> _currentTransitionContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _UIPreviewInteractionViewControllerPresentation *viewControllerPresentation; // @synthesize viewControllerPresentation=_viewControllerPresentation;
- (void)_performDismissalCompletionIfNeeded;
- (void)_finalizeAfterViewControllerPresentation;
- (id)customPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)defaultPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)_performPresentViewControllerFromViewController:(id)arg1;
- (void)previewPresentationController:(id)arg1 shouldDismissViewController:(id)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissViewController;
- (void)presentViewControllerFromViewController:(id)arg1 highlighter:(id)arg2 presentationCompletion:(CDUnknownBlockType)arg3 dismissalCompletion:(CDUnknownBlockType)arg4;
- (id)initWithViewControllerPresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

