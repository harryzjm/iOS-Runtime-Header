//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPresentationController.h"

@class NSLayoutConstraint, NSString, UIAlertVisualStyleUpdatableConstraints, UIGestureRecognizer, UIView, _UIKeyboardLayoutAlignmentView, _UIStatesFeedbackGenerator;
@protocol _UIForcePresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerPresentationController : UIPresentationController
{
    UIView *_dimmingView;
    _UIKeyboardLayoutAlignmentView *keyboardLayoutAlignmentView;
    UIView *keyboardLayoutAlignmentAvailableSpaceView;
    UIAlertVisualStyleUpdatableConstraints *_visualStyleUpdatableConstraints;
    NSLayoutConstraint *_topAvailableSpaceConstraint;
    NSLayoutConstraint *_bottomAvailableSpaceConstraint;
    _Bool constraintsPrepared;
    _Bool _sourceViewSnapshotAndScaleTransformSuppressed;
    _Bool _chromeHidden;
    _Bool __isCurrentContext;
    _Bool __shouldRespectNearestCurrentContextPresenter;
    UIGestureRecognizer *_panningGestureRecognizer;
    CDUnknownBlockType _presentationPhaseCompletionBlock;
    id <_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;
    UIView *_revealContainerView;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(setter=_setShouldRespectNearestCurrentContextPresenter:) _Bool _shouldRespectNearestCurrentContextPresenter; // @synthesize _shouldRespectNearestCurrentContextPresenter=__shouldRespectNearestCurrentContextPresenter;
@property(setter=_setIsCurrentContext:) _Bool _isCurrentContext; // @synthesize _isCurrentContext=__isCurrentContext;
@property(nonatomic, getter=_isChromeHidden, setter=_setChromeHidden:) _Bool _chromeHidden; // @synthesize _chromeHidden;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) _Bool _sourceViewSnapshotAndScaleTransformSuppressed; // @synthesize _sourceViewSnapshotAndScaleTransformSuppressed;
@property(readonly, nonatomic) UIView *_revealContainerView; // @synthesize _revealContainerView;
@property(nonatomic) __weak id <_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; // @synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate;
@property(copy, nonatomic) CDUnknownBlockType presentationPhaseCompletionBlock; // @synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock;
@property(retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer; // @synthesize panningGestureRecognizer=_panningGestureRecognizer;
@property(readonly) UIView *_dimmingView; // @synthesize _dimmingView;
- (id)_presentedAlertController;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)_createVisualStyleForProvider:(id)arg1;
- (void)_presentedAlertControllerDidAdapt;
- (void)_updateConstraintsIfNecessary;
- (void)_prepareConstraintsIfNecessary;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_shouldOccludeDuringPresentation;
- (_Bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (_Bool)_preserveResponderAcrossWindows;
- (void)presentationTransitionWillBegin;
- (void)_willRunTransitionForCurrentStateDeferred:(_Bool)arg1;
- (void)_prepareDimmingViewIfNecessary;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (_Bool)shouldPresentInFullscreen;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (long long)adaptivePresentationStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (_Bool)_canCommitPresentation;
- (_Bool)_canDismissPresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

