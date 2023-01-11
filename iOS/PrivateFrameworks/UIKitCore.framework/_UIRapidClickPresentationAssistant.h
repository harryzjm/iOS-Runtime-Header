//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <UIKitCore/UIViewControllerTransitioningDelegate-Protocol.h>
#import <UIKitCore/_UIClickPresentationAssisting-Protocol.h>

@class NSString, NSValue, UITargetedPreview, UIView, UIViewController, _UIClickPresentation;

__attribute__((visibility("hidden")))
@interface _UIRapidClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting>
{
    int _animationCount;
    _Bool _isInteractionInitiatedDismiss;
    CDUnknownBlockType lifecycleCompletion;
    _UIClickPresentation *presentation;
    UITargetedPreview *_sourcePreview;
    UIViewController *_stashedParentViewController;
    UIView *_stashedSuperView;
    NSValue *_preservedInputViewId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *preservedInputViewId; // @synthesize preservedInputViewId=_preservedInputViewId;
@property(retain, nonatomic) UIView *stashedSuperView; // @synthesize stashedSuperView=_stashedSuperView;
@property(retain, nonatomic) UIViewController *stashedParentViewController; // @synthesize stashedParentViewController=_stashedParentViewController;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(retain, nonatomic) _UIClickPresentation *presentation; // @synthesize presentation;
@property(copy, nonatomic) CDUnknownBlockType lifecycleCompletion; // @synthesize lifecycleCompletion;
- (void)_animateUsingFluidSpringWithType:(unsigned long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_stashParentViewControllerIfNecessary;
- (void)_nonAnimatedDismissalWithReason:(unsigned long long)arg1 actions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_animateDismissalWithReason:(unsigned long long)arg1 actions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_restoreInputViewWithReason:(unsigned long long)arg1 forPresentation:(id)arg2;
- (void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performPresentationAnimationsFromViewController:(id)arg1;
- (void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(CDUnknownBlockType)arg2;
- (id)initWithClickPresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
