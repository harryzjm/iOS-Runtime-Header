//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXNumberAnimator, PXRegionOfInterest, PXStoryViewControllerTransition, PXStoryViewModeTransition, PXStoryViewModel, UIImpactFeedbackGenerator, UIViewController;

@interface PXStoryViewControllerViewModelTransitionsCoordinator
{
    _Bool _isDismissalPreviewFractionInitialized;
    _Bool _isDismisallTriggered;
    _Bool _isPreparedForDismissal;
    _Bool _isFinishingDismissal;
    _Bool _shouldFinish;
    PXStoryViewModel *_viewModel;
    UIViewController *_viewController;
    PXNumberAnimator *_dismissalPreviewFraction;
    PXStoryViewControllerTransition *_dismissalTransition;
    PXStoryViewModeTransition *_viewModeTransition;
    double _viewModeTransitionStartTime;
    PXRegionOfInterest *_fullsizeContentBoundingBox;
    UIImpactFeedbackGenerator *_dismissalFeedbackGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImpactFeedbackGenerator *dismissalFeedbackGenerator; // @synthesize dismissalFeedbackGenerator=_dismissalFeedbackGenerator;
@property(nonatomic) _Bool shouldFinish; // @synthesize shouldFinish=_shouldFinish;
@property(nonatomic) _Bool isFinishingDismissal; // @synthesize isFinishingDismissal=_isFinishingDismissal;
@property(nonatomic) _Bool isPreparedForDismissal; // @synthesize isPreparedForDismissal=_isPreparedForDismissal;
@property(nonatomic) _Bool isDismisallTriggered; // @synthesize isDismisallTriggered=_isDismisallTriggered;
@property(retain, nonatomic) PXRegionOfInterest *fullsizeContentBoundingBox; // @synthesize fullsizeContentBoundingBox=_fullsizeContentBoundingBox;
@property(nonatomic) double viewModeTransitionStartTime; // @synthesize viewModeTransitionStartTime=_viewModeTransitionStartTime;
@property(retain, nonatomic) PXStoryViewModeTransition *viewModeTransition; // @synthesize viewModeTransition=_viewModeTransition;
@property(retain, nonatomic) PXStoryViewControllerTransition *dismissalTransition; // @synthesize dismissalTransition=_dismissalTransition;
@property(nonatomic) _Bool isDismissalPreviewFractionInitialized; // @synthesize isDismissalPreviewFractionInitialized=_isDismissalPreviewFractionInitialized;
@property(readonly, nonatomic) PXNumberAnimator *dismissalPreviewFraction; // @synthesize dismissalPreviewFraction=_dismissalPreviewFraction;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)handleModelChange:(unsigned long long)arg1;
- (void)_updateSwipeDownDismissalPreview;
- (void)_invalidateSwipeDownDismissalPreview;
- (void)_updateSwipeDownTriggeringDismissal;
- (void)_invalidateSwipeDownTriggeringDismissal;
- (void)_updateDesiredDismissalState;
- (void)_invalidateDesiredDismissalState;
- (void)_updateShouldFinish;
- (void)_invalidateShouldFinish;
- (void)_updateFractionCompleted;
- (void)_invalidateFractionCompleted;
- (void)_updateViewControllerDismissalTargetPlacement;
- (void)_invalidateViewControllerDismissalTargetPlacement;
- (void)_updateSummaryItemPlacementOverride;
- (void)_invalidateSummaryItemPlacementOverride;
- (void)_updateFullsizeContentBoundingBox;
- (void)_invalidateFullsizeContentBoundingBox;
- (void)_updateViewModeTransition;
- (void)_invalidateViewModeTransition;
- (void)_dismissalTransition:(id)arg1 didEnd:(_Bool)arg2;
- (void)_endDismissal:(_Bool)arg1;
- (void)_forceDismissViewController;
- (void)_tryDismissingViewController;
- (void)_handleViewModeTransitionStartDelay;
- (void)configureUpdater:(id)arg1;
- (id)initWithViewModel:(id)arg1 viewController:(id)arg2;
- (id)initWithObservableModel:(id)arg1;

@end
