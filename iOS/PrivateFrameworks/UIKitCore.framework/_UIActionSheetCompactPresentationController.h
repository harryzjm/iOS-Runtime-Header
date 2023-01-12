//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPresentationController.h"

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, _UIAnimationCoordinator, _UIDimmingKnockoutBackdropView;
@protocol UIActionSheetPresentationControllerDismissActionView, UIActionSheetPresentationControllerVisualStyle, _UIActionSheetCompactPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIActionSheetCompactPresentationController : UIPresentationController
{
    _Bool _avoidsKeyboardDisabled;
    _Bool _shouldAdoptPresentedAppearance;
    _Bool _hasPendingAnimatedLayout;
    id <_UIActionSheetCompactPresentationControllerDelegate> _actionSheetDelegate;
    UIView<UIActionSheetPresentationControllerDismissActionView> *_dismissActionView;
    UILongPressGestureRecognizer *_dismissActionViewGestureRecognizer;
    UITapGestureRecognizer *_dimmingViewDismissTapGestureRecognizer;
    UIView *_dimmingView;
    _UIDimmingKnockoutBackdropView *_backdropView;
    _UIAnimationCoordinator *_animationCoordinator;
    id <UIActionSheetPresentationControllerVisualStyle> _visualStyle;
    double _pseudoAlertPreferredTop;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPendingAnimatedLayout; // @synthesize hasPendingAnimatedLayout=_hasPendingAnimatedLayout;
@property(nonatomic) double pseudoAlertPreferredTop; // @synthesize pseudoAlertPreferredTop=_pseudoAlertPreferredTop;
@property(retain, nonatomic) id <UIActionSheetPresentationControllerVisualStyle> visualStyle; // @synthesize visualStyle=_visualStyle;
@property(retain, nonatomic) _UIAnimationCoordinator *animationCoordinator; // @synthesize animationCoordinator=_animationCoordinator;
@property(retain, nonatomic) _UIDimmingKnockoutBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UITapGestureRecognizer *dimmingViewDismissTapGestureRecognizer; // @synthesize dimmingViewDismissTapGestureRecognizer=_dimmingViewDismissTapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *dismissActionViewGestureRecognizer; // @synthesize dismissActionViewGestureRecognizer=_dismissActionViewGestureRecognizer;
@property(retain, nonatomic) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView; // @synthesize dismissActionView=_dismissActionView;
@property(nonatomic) _Bool shouldAdoptPresentedAppearance; // @synthesize shouldAdoptPresentedAppearance=_shouldAdoptPresentedAppearance;
@property(nonatomic) __weak id <_UIActionSheetCompactPresentationControllerDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
@property(nonatomic) _Bool avoidsKeyboardDisabled; // @synthesize avoidsKeyboardDisabled=_avoidsKeyboardDisabled;
- (double)_resizeAnimationDuration;
- (struct CGSize)_minimumSizeForDismissButton;
- (_Bool)_shouldDisableAvoidsKeyboard;
- (CDStruct_758ece87)_currentLayoutGeometry;
- (void)_handleDismiss:(id)arg1;
- (void)_dismiss;
@property(nonatomic) _Bool dismissActionUsesShorterHeightWhenCompactVertically;
- (void)endPseudoAlertPresentationMode;
- (void)beginPseudoAlertPresentationMode;
@property(copy, nonatomic) NSString *dismissActionTitle;
- (void)_updateForKeyboardStartFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(long long)arg4;
- (void)_keyboardChanged:(id)arg1;
- (void)_unsubscribeFromKeyboardNotifications;
- (void)_subscribeToKeyboardNotifications;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)dismissalTransitionWillBegin;
- (void)_willRunTransitionForCurrentStateDeferred:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (struct CGSize)preferredContentSize;
- (void)_applyVisualAffordancesToViews;
- (void)_layoutViews;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double *)arg1 rightMargin:(double *)arg2;
- (_Bool)_shouldOccludeDuringPresentation;
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (_Bool)shouldPresentInFullscreen;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 visualStyle:(id)arg3;

@end

