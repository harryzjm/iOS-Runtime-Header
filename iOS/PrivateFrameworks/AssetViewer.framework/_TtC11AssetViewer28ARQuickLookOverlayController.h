//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class ASVControlsView, ASVRoundedButton, ASVTrackingStateStatusLabel, MISSING_TYPE, UIButton;

__attribute__((visibility("hidden")))
@interface _TtC11AssetViewer28ARQuickLookOverlayController : UIViewController
{
    MISSING_TYPE *wantsStatusPillHidden;
    MISSING_TYPE *arTrackingState;
    MISSING_TYPE *currentTriggerAffordance;
    MISSING_TYPE *isARModeEnabled;
    MISSING_TYPE *sessionIsInterrupted;
    MISSING_TYPE *isInFullscreen;
    MISSING_TYPE *cancellables;
    MISSING_TYPE *$__lazy_storage_$_longPressGesture;
    MISSING_TYPE *delegate;
    MISSING_TYPE *currentTrackingState;
    MISSING_TYPE *trackingStateStatus;
    MISSING_TYPE *sharingEnabled;
    MISSING_TYPE *allowOverlayToBeHidden;
    MISSING_TYPE *touchesOnScreenGestureRecognizer;
    MISSING_TYPE *displayCornerRadiusPortraitSidePadding;
    MISSING_TYPE *displayCornerRadiusDefaultPadding;
    MISSING_TYPE *displayCornerRadiusPortraitShutterButtonPadding;
    MISSING_TYPE *defaultPortraitShutterButtonPadding;
    MISSING_TYPE *defaultControlPadding;
    MISSING_TYPE *controlsViewToStatusBarVerticalPadding;
    MISSING_TYPE *topControlsHeight;
    MISSING_TYPE *topControlsButtonWidth;
    MISSING_TYPE *topControlsSegmentedControlWidth;
    MISSING_TYPE *trackingLabelMinimumBottomPadding;
    MISSING_TYPE *portraitConstraints;
    MISSING_TYPE *portraitUpsideDownConstraints;
    MISSING_TYPE *landscapeLeftConstraints;
    MISSING_TYPE *landscapeRightConstraints;
    MISSING_TYPE *currentConstraints;
    MISSING_TYPE *autoHideControlsTimer;
    MISSING_TYPE *$__lazy_storage_$_controlsViewStack;
    MISSING_TYPE *$__lazy_storage_$_shutterButtonContainer;
    MISSING_TYPE *$__lazy_storage_$_dismissButton;
    MISSING_TYPE *$__lazy_storage_$_displayModeControlView;
    MISSING_TYPE *$__lazy_storage_$_shareButton;
    MISSING_TYPE *checkoutPlatter;
    MISSING_TYPE *$__lazy_storage_$_debugActionsButtonContainer;
    MISSING_TYPE *$__lazy_storage_$_debugActionsButton;
    MISSING_TYPE *$__lazy_storage_$_fileARadarButton;
    MISSING_TYPE *$__lazy_storage_$_shutterButton;
    MISSING_TYPE *animationView;
    MISSING_TYPE *coachingOverlayView;
    MISSING_TYPE *$__lazy_storage_$_statusPill;
    MISSING_TYPE *$__lazy_storage_$_assetLoadingView;
    MISSING_TYPE *backgroundDimmingView;
    MISSING_TYPE *displayMode;
    MISSING_TYPE *bottomControlCapabilities;
    MISSING_TYPE *operationMode;
    MISSING_TYPE *currentAppearance;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateStatusPill;
- (void)enableWorldModeControl:(_Bool)arg1;
- (void)autoHide2DControls;
- (void)stopAutoHideControlsTimerWithShouldRestart:(_Bool)arg1;
- (void)startAutoHideControlsTimer;
- (void)displayModeChanged;
- (void)traitCollectionDidChange:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)takePicture;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) ASVTrackingStateStatusLabel *statusPill;
@property(nonatomic, retain) UIButton *fileARadarButton;
@property(nonatomic, retain) UIButton *debugActionsButton;
@property(nonatomic, retain) ASVRoundedButton *shareButton;
@property(nonatomic, retain) ASVRoundedButton *dismissButton;
@property(nonatomic, retain) ASVControlsView *controlsViewStack;
- (void)trackedRaycastStateDidChange:(id)arg1;

@end

