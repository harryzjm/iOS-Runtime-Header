//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIBarButtonItem, UIFocusContainerGuide, UIGestureRecognizer, UIPopoverController, UIResponder, UISnapshotView, UISplitViewController, UISplitViewControllerDisplayModeBarButtonItem, UITapGestureRecognizer, UITraitCollection, UIView, UIViewController;
@protocol UISplitViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerClassicImpl : NSObject
{
    UISplitViewController *_svc;
    id _delegate;
    UIBarButtonItem *_barButtonItem;
    UISplitViewControllerDisplayModeBarButtonItem *_displayModeButtonItem;
    NSString *_buttonTitle;
    UIPopoverController *_hiddenPopoverController;
    UIView *_rotationSnapshotView;
    UIResponder *_postTransitionResponder;
    UISnapshotView *_collapsingMasterSnapshotView;
    UISnapshotView *_collapsingDetailSnapshotView;
    float _gutterWidth;
    long long _rotatingFromOrientation;
    long long _lastPresentedOrientation;
    struct CGRect _rotatingFromMasterViewFrame;
    struct CGRect _rotatingToMasterViewFrame;
    UIView *_underBarSeparatorView;
    UITraitCollection *_traitCollectionWhenRemovedFromWindow;
    _Bool _presentsWithGesture;
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;
    UITapGestureRecognizer *_menuGestureRecognizer;
    long long _preferredDisplayMode;
    long long _effectiveTargetDisplayMode;
    long long _pendingDisplayModeChangeCount;
    long long _rotatingMasterChange;
    _Bool _useChangingBoundsLayout;
    long long _transitioningMasterChange;
    UITraitCollection *_transitioningToTraitCollection;
    long long _transitioningToInternalMode;
    long long _lastNotifiedDisplayMode;
    struct CGRect _viewBoundsBeforeCollapse;
    long long _suspendedState;
    long long _primaryEdge;
    struct {
        unsigned int invalidDelegateHiddenMasterAspectRatios:2;
        unsigned int delegateHiddenMasterAspectRatios:2;
        unsigned int delegateImplementsShouldHide:1;
        unsigned int hidden:3;
        unsigned int masterOnSlide:1;
        unsigned int delegateWantsWillShowCallback:1;
        unsigned int delegateWantsWillHideCallback:1;
        unsigned int delegateWantsWillPresentCallback:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int delegateWantsShowViewController:1;
        unsigned int delegateWantsShowDetailViewController:1;
        unsigned int delegateWantsCollapseSecondaryViewController:1;
        unsigned int delegateWantsSeparateSecondaryViewController:1;
        unsigned int delegateWantsPrimaryViewControllerForCollapse:1;
        unsigned int delegateWantsPrimaryViewControllerForExpanding:1;
        unsigned int collapsedState:2;
        unsigned int primaryHidingState:2;
        unsigned int primaryHidingStateForCurrentOrientation:2;
        unsigned int delegateWantsWillChangeToDisplayMode:1;
        unsigned int delegateWantsTargetDisplayModeForAction:1;
        unsigned int delegateCanModifyFirstResponderOnTraitCollectionTransition:1;
        unsigned int pendingPresentMasterViewController:1;
        unsigned int pendingUpdateTargetDisplayMode:1;
        unsigned int collapsingClockwise:1;
        unsigned int firstResponderChangedFromPostTransitionResponder:1;
        unsigned int firstResponderChangedFromPostTransitionResponderToNil:1;
        unsigned int inWillTransitionToSize:1;
        unsigned int hasTransitioningToInternalMode:1;
        unsigned int delegateImplementsPrivateIsPrimaryVisible:1;
        unsigned int delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended:1;
        unsigned int usesExtraWidePrimaryColumn:1;
        unsigned int usesDeviceOverlayPreferences:1;
        unsigned int prefersOverlayInRegularWidthPhone:1;
    } _splitViewControllerFlags;
    NSString *_displayModeButtonItemTitle;
    double _preferredPrimaryColumnWidthFraction;
    double _minimumPrimaryColumnWidth;
    double _maximumPrimaryColumnWidth;
    unsigned long long _lastFocusedChildViewControllerIndex;
    UIViewController *__preservedDetailController;
    CDUnknownBlockType __clearPreventRotationHook;
    UIFocusContainerGuide *_masterFocusContainerGuide;
    UIFocusContainerGuide *_detailFocusContainerGuide;
}

+ (double)_defaultGutterWidthInView:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_detailFocusContainerGuide) UIFocusContainerGuide *detailFocusContainerGuide; // @synthesize detailFocusContainerGuide=_detailFocusContainerGuide;
@property(readonly, nonatomic, getter=_masterFocusContainerGuide) UIFocusContainerGuide *masterFocusContainerGuide; // @synthesize masterFocusContainerGuide=_masterFocusContainerGuide;
@property(copy, nonatomic, setter=_setClearPreventRotationHook:) CDUnknownBlockType _clearPreventRotationHook; // @synthesize _clearPreventRotationHook=__clearPreventRotationHook;
@property(retain, nonatomic, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController; // @synthesize _preservedDetailController=__preservedDetailController;
@property(nonatomic) double maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property(nonatomic) double minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property(nonatomic) double preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property(copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle; // @synthesize _displayModeButtonItemTitle;
@property(nonatomic) _Bool presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property(nonatomic) __weak id <UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg1;
- (id)_deepestActionResponder;
- (double)_supplementaryDividerPosition;
- (double)_primaryDividerPosition;
- (_Bool)_isAnimating;
@property(readonly, nonatomic) _Bool lockedForDelegateCallback;
@property(readonly, nonatomic) long long style;
- (_Bool)_shouldShowNSToolbarSidebarToggle;
@property(nonatomic) long long primaryBackgroundStyle;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (id)_effectiveActivityItemsConfiguration;
- (id)_additionalViewControllersToCheckForUserActivity;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_allContainedViewControllers;
- (long long)_medusaStateForOrientation:(long long)arg1 viewWidth:(double)arg2;
- (long long)_medusaState;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (void)viewDidLayoutSubviews;
- (void)__viewWillLayoutSubviews;
- (void)_setDetailViewFrame:(struct CGRect)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateMasterViewControllerFrame;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)snapshotForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 masterChange:(long long)arg3;
- (void)snapshotAllViews;
- (void)snapshotMasterView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (_Bool)_isTransitioningFromCollapsedToSeparated;
- (void)_completeTransitionFromOrientation:(long long)arg1 masterChange:(long long)arg2;
- (void)_animateTransitionToOrientation:(long long)arg1 duration:(double)arg2 masterChange:(long long)arg3;
- (long long)_prepareToTransitionToViewSize:(struct CGSize)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 duration:(double)arg4;
- (long long)_internalModeForTraitCollection:(id)arg1 orientation:(long long)arg2 viewSize:(struct CGSize)arg3 medusaState:(long long)arg4;
- (_Bool)_isRotating;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)_handlesCounterRotationForPresentation;
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredCenterStatusBarStyle;
- (long long)preferredTrailingStatusBarStyle;
- (long long)preferredLeadingStatusBarStyle;
- (id)childViewControllerForStatusBarStyle;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_multitaskingDragExclusionRects;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)_overridingPreferredFocusEnvironment;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
@property(readonly, nonatomic, getter=_lastFocusedChildViewControllerIndex) unsigned long long lastFocusedChildViewControllerIndex; // @synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex;
- (void)_setUpFocusContainerGuides;
- (double)_contentMarginForChildViewController:(id)arg1;
- (void)_updateChildContentMargins;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (_Bool)_shouldUseRelativeInsets;
- (void)popoverWillAppear:(id)arg1;
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(_Bool)arg4;
- (void)toggleMasterVisible:(id)arg1;
- (void)_dismissMasterViewController:(_Bool)arg1;
- (unsigned long long)_targetEdgeForPopover;
- (void)_presentMasterViewController:(_Bool)arg1;
- (_Bool)_isMasterPopoverVisible;
- (void)_didEndSnapshotSession;
- (void)_willBeginSnapshotSession;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (_Bool)_shouldPreventAutorotation;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (_Bool)_optsOutOfPopoverControllerHierarchyCheck;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1;
- (id)displayModeButtonItem;
- (void)_updateDisplayModeButtonItem;
- (void)_triggerDisplayModeAction:(id)arg1;
- (long long)_effectiveTargetDisplayMode;
- (void)_cacheEffectiveTargetDisplayMode;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(_Bool)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(_Bool)arg2;
- (void)_updateTargetDisplayMode;
- (void)_displayModeDidChange;
- (void)_displayModeWillChangeTo:(long long)arg1;
- (void)_changeToDisplayMode:(long long)arg1 forCurrentOrientationOnly:(_Bool)arg2;
- (long long)_defaultTargetDisplayMode;
- (id)_defaultDisplayModes;
- (long long)displayMode;
@property(nonatomic) long long preferredDisplayMode;
- (_Bool)_layoutPrimaryOnRight;
@property(nonatomic) long long primaryEdge;
- (_Bool)_effectivePresentsWithGesture;
@property(nonatomic) float gutterWidth;
- (double)_masterPresentationAnimationDuration;
- (void)_showMasterViewAnimated:(_Bool)arg1;
@property(nonatomic) _Bool hidesMasterViewInPortrait;
- (_Bool)_hidesMasterViewInOrientation:(long long)arg1 medusaState:(long long)arg2;
- (_Bool)_hidesMasterViewInCurrentOrientation;
- (_Bool)hidesMasterViewInLandscape;
- (id)detailViewController;
- (id)masterViewController;
- (_Bool)_hasMasterViewController;
- (void)_setupUnderBarSeparatorView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)_removeCollapsingSnapshotViews;
- (id)_deepestUnambiguousResponder;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didTransitionTraitCollection;
- (void)_collapseMaster:(id)arg1 andDetail:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_collapseMasterAndDetailWithTransitionCoordinator:(id)arg1;
- (void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg1;
- (void)_animateTransitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_prepareForCompactLayout;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)_primaryContentResponder;
- (id)_childContainingSender:(id)arg1;
- (void)_setMasterOverrideTraitCollectionActive:(_Bool)arg1;
@property(copy, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) _Bool inExpandingToProposedDisplayModeCallback;
@property(readonly, nonatomic) _Bool inCollapsingToProposedTopColumnCallback;
- (_Bool)_isBasicallyHorizontallyCompact;
- (_Bool)_canDisplayHostedMaster;
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1;
- (void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2;
- (id)_secondaryViewControllerForCollapsing;
- (id)_primaryViewControllerForExpanding;
- (id)_primaryViewControllerForCollapsing;
- (void)_setCollapsedState:(long long)arg1;
- (_Bool)_isCollapsed;
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
- (_Bool)_isExpanding;
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1 isCompact:(_Bool)arg2;
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1;
- (double)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize)arg1;
- (struct CGSize)_preferredContentSize;
@property(nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) _Bool usesExtraWidePrimaryColumn;
- (struct CGSize)_screenSizeInMainScene:(_Bool)arg1;
- (double)primaryColumnWidth;
- (void)_viewControllerHiding:(id)arg1;
- (void)_setupHiddenPopoverControllerWithViewController:(id)arg1;
- (struct CGRect)_detailViewFrame;
- (struct CGRect)_detailViewFrame:(struct CGRect)arg1;
- (struct CGRect)_masterViewFrame;
- (struct CGRect)_masterViewFrame:(struct CGRect)arg1;
- (void)_addOrRemovePopoverPresentationGestureRecognizer;
- (void)_updateDelegateHiddenMasterAspectRatios;
- (_Bool)_defersUpdateDelegateHiddenMasterAspectRatios;
- (void)_setDelegateHidesMaster:(_Bool)arg1 inAspectRatio:(long long)arg2;
- (_Bool)_isHidesMasterInLandscapeInvalid;
- (_Bool)_isHidesMasterInPortraitInvalid;
- (void)_invalidateHidesMasterViewForAspectRatio:(long long)arg1;
- (id)_primaryDimmingView;
- (_Bool)_isMasterViewShown;
- (long long)_currentInterfaceIdiom;
- (_Bool)_iPhoneShouldUseOverlayIfRegularWidth;
- (_Bool)_iPhoneShouldUseOverlayInCurrentEnvironment;
@property(nonatomic) _Bool usesDeviceOverlayPreferences;
@property(nonatomic) _Bool prefersOverlayInRegularWidthPhone;
- (void)_setPrimaryHidingStateForCurrentOrientation:(long long)arg1;
- (long long)_primaryHidingStateForCurrentOrientation;
- (void)_setPrimaryHidingState:(long long)arg1;
- (long long)_primaryHidingState;
- (long long)_effectivePrimaryHidingState;
- (void)unloadViewForced:(_Bool)arg1;
- (void)loadView;
- (_Bool)_shouldPersistViewWhenCoding;
- (void)_loadNewSubviews:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_initWithCoder:(id)arg1;
- (void)_commonInit;
- (struct CGRect)_frameForChildContentContainer:(id)arg1;
- (id)initWithSplitViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

