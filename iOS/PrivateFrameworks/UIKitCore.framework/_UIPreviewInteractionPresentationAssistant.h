//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITargetedPreview, UIView, UIViewController, UIViewPropertyAnimator, _UIPortalView, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionPresentationAssistant : NSObject
{
    id <UIViewControllerContextTransitioning> _currentContext;
    _Bool _isAppearing;
    UIViewPropertyAnimator *_presentationAnimator;
    _UIPreviewInteractionHighlighter *_highlighter;
    _UIPreviewInteractionViewControllerPresentation *_presentation;
    _UIPortalView *_presentationSourcePortalView;
    UITargetedPreview *_sourcePreview;
    UIViewController *_stashedParentViewController;
    UIView *_stashedSuperView;
    CDUnknownBlockType _dismissalCompletion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(retain, nonatomic) UIView *stashedSuperView; // @synthesize stashedSuperView=_stashedSuperView;
@property(retain, nonatomic) UIViewController *stashedParentViewController; // @synthesize stashedParentViewController=_stashedParentViewController;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(retain, nonatomic) _UIPortalView *presentationSourcePortalView; // @synthesize presentationSourcePortalView=_presentationSourcePortalView;
@property(retain, nonatomic) _UIPreviewInteractionViewControllerPresentation *presentation; // @synthesize presentation=_presentation;
@property(retain, nonatomic) _UIPreviewInteractionHighlighter *highlighter; // @synthesize highlighter=_highlighter;
@property(readonly, nonatomic) UIViewPropertyAnimator *presentationAnimator; // @synthesize presentationAnimator=_presentationAnimator;
- (void)_createpresentationAnimatorIfNecessary:(id)arg1;
- (void)_postInteractionCleanup;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)_sourcePreviewPortal;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_stashParentViewControllerIfNecessary;
- (void)dismissViewController;
- (void)presentFromViewController:(id)arg1 sourcePreview:(id)arg2 dismissalCompletion:(CDUnknownBlockType)arg3;
- (id)initWithViewControllerPresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

