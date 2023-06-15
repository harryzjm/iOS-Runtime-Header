//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIDimmingView, UILayoutContainerView, UINavigationBar, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest, UIView, UIViewController, _UIFloatableBarButtonItem, _UIMTCaptureView, _UIPanelInternalState, _UIVerticalEdgeShadowView;
@protocol UIPanelControllerDelegate, UIViewControllerTransitionCoordinator;

__attribute__((visibility("hidden")))
@interface UIPanelController : NSObject
{
    struct {
        unsigned int isUpdatingState:1;
        unsigned int needsDeferredUpdateWhileUpdatingState:1;
        unsigned int isPerformingDeferredUpdate:1;
        unsigned int nextLayoutIsForInitializingAnimation:1;
        unsigned int isPresentationGestureActive:1;
        unsigned int areClippingViewsUnnecessary:1;
        unsigned int inWillTransitionToTraitCollection:1;
        unsigned int inViewWillTransitionToSize:1;
        unsigned int inViewWillTransitionToSizeRecursingToChildren:1;
        unsigned int viewsLocked:1;
        unsigned int takingDestinationSnapshot:1;
        unsigned int registeredForKeyboardNotifications:1;
        unsigned int borderViewsObservingViewBackgroundColor:1;
        unsigned int updateLayoutRequested:1;
        unsigned int leadingTrailingWrapsNavigationController:1;
        unsigned int shouldDelegateNavigationBarForViewController:1;
        unsigned int isRunExpandScheduled:1;
    } _panelControllerFlags;
    NSMutableArray *_wrapperBlocksForNextUpdate;
    _Bool _animationRequestShouldCoordinate;
    _Bool __hasUpdatedForTraitCollection;
    _Bool __needsFirstTimeUpdateForTraitCollection;
    _Bool __changingViewControllerParentage;
    UIViewController *_owningViewController;
    long long _style;
    UIView *_dimmingView;
    UIView *_leadingBarContentClippingView;
    UIView *_trailingBarContentClippingView;
    UIView *_supplementaryBarContentClippingView;
    UINavigationBar *_navigationBarForContentLayoutGuideAnimation;
    _UIFloatableBarButtonItem *_floatingBarButtonItem;
    UILayoutContainerView *_view;
    _UIPanelInternalState *__internalState;
    _UIPanelInternalState *__previousInternalState;
    UISlidingBarState *__lastComputedPublicState;
    NSArray *__lastPossiblePublicStates;
    UIView *__contentView;
    UIView *__leadingBorderView;
    UIView *__trailingBorderView;
    UIView *__supplementaryBorderView;
    _UIVerticalEdgeShadowView *__overlayEdgeShadowView;
    _UIVerticalEdgeShadowView *__supplementaryParallaxShadowView;
    _UIMTCaptureView *__captureView;
    UIDimmingView *__primaryParallaxDimmingView;
    UIView *__sourceTransitionView;
    UIView *__destTransitionView;
    struct CGSize __lastViewSize;
}

+ (id)_withDisabledAppearanceTransitions:(_Bool)arg1 forVisibleDescendantsOf:(id)arg2 perform:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic, setter=_setChangingViewControllerParentage:) _Bool _changingViewControllerParentage; // @synthesize _changingViewControllerParentage=__changingViewControllerParentage;
@property(nonatomic, setter=_setNeedsFirstTimeUpdateForTraitCollection:) _Bool _needsFirstTimeUpdateForTraitCollection; // @synthesize _needsFirstTimeUpdateForTraitCollection=__needsFirstTimeUpdateForTraitCollection;
@property(nonatomic, setter=_setHasUpdatedForTraitCollection:) _Bool _hasUpdatedForTraitCollection; // @synthesize _hasUpdatedForTraitCollection=__hasUpdatedForTraitCollection;
@property(retain, nonatomic, setter=_setDestinationTransitionView:) UIView *_destTransitionView; // @synthesize _destTransitionView=__destTransitionView;
@property(retain, nonatomic, setter=_setSourceTransitionView:) UIView *_sourceTransitionView; // @synthesize _sourceTransitionView=__sourceTransitionView;
@property(retain, nonatomic, setter=_setPrimaryParallaxDimmingView:) UIDimmingView *_primaryParallaxDimmingView; // @synthesize _primaryParallaxDimmingView=__primaryParallaxDimmingView;
@property(retain, nonatomic, setter=_setMaterialThemesCaptureView:) _UIMTCaptureView *_captureView; // @synthesize _captureView=__captureView;
@property(retain, nonatomic, setter=_setSupplementaryParallaxShadowView:) _UIVerticalEdgeShadowView *_supplementaryParallaxShadowView; // @synthesize _supplementaryParallaxShadowView=__supplementaryParallaxShadowView;
@property(retain, nonatomic, setter=_setOverlayEdgeShadowView:) _UIVerticalEdgeShadowView *_overlayEdgeShadowView; // @synthesize _overlayEdgeShadowView=__overlayEdgeShadowView;
@property(retain, nonatomic, setter=_setSupplementaryBorderView:) UIView *_supplementaryBorderView; // @synthesize _supplementaryBorderView=__supplementaryBorderView;
@property(retain, nonatomic, setter=_setTrailingBorderView:) UIView *_trailingBorderView; // @synthesize _trailingBorderView=__trailingBorderView;
@property(retain, nonatomic, setter=_setLeadingBorderView:) UIView *_leadingBorderView; // @synthesize _leadingBorderView=__leadingBorderView;
@property(retain, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(nonatomic, setter=_setLastViewSize:) struct CGSize _lastViewSize; // @synthesize _lastViewSize=__lastViewSize;
@property(copy, nonatomic, setter=_setLastPossiblePublicStates:) NSArray *_lastPossiblePublicStates; // @synthesize _lastPossiblePublicStates=__lastPossiblePublicStates;
@property(copy, nonatomic, setter=_setLastComputedPublicState:) UISlidingBarState *_lastComputedPublicState; // @synthesize _lastComputedPublicState=__lastComputedPublicState;
@property(retain, nonatomic, setter=_setPreviousInternalState:) _UIPanelInternalState *_previousInternalState; // @synthesize _previousInternalState=__previousInternalState;
@property(retain, nonatomic, setter=_setInternalState:) _UIPanelInternalState *_internalState; // @synthesize _internalState=__internalState;
@property(retain, nonatomic) UILayoutContainerView *view; // @synthesize view=_view;
@property(retain, nonatomic) _UIFloatableBarButtonItem *floatingBarButtonItem; // @synthesize floatingBarButtonItem=_floatingBarButtonItem;
@property(retain, nonatomic) UINavigationBar *navigationBarForContentLayoutGuideAnimation; // @synthesize navigationBarForContentLayoutGuideAnimation=_navigationBarForContentLayoutGuideAnimation;
@property(retain, nonatomic) UIView *supplementaryBarContentClippingView; // @synthesize supplementaryBarContentClippingView=_supplementaryBarContentClippingView;
@property(retain, nonatomic) UIView *trailingBarContentClippingView; // @synthesize trailingBarContentClippingView=_trailingBarContentClippingView;
@property(retain, nonatomic) UIView *leadingBarContentClippingView; // @synthesize leadingBarContentClippingView=_leadingBarContentClippingView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) _Bool animationRequestShouldCoordinate; // @synthesize animationRequestShouldCoordinate=_animationRequestShouldCoordinate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak UIViewController *owningViewController; // @synthesize owningViewController=_owningViewController;
@property(readonly, copy) NSString *description;
- (void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1;
- (void)_adjustForKeyboardInfo:(id)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)_observeKeyboardNotificationsOnScreen:(id)arg1;
- (id)uncachedPossibleStatesForSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSArray *uncachedPossibleStates;
@property(copy, nonatomic) UISlidingBarStateRequest *interactiveStateRequest;
- (void)animateToRequest:(id)arg1 forceOverlay:(_Bool)arg2 withVelocity:(double)arg3;
- (void)animateToRequest:(id)arg1 forceOverlay:(_Bool)arg2;
- (void)animateToRequest:(id)arg1;
- (_Bool)isSupplementaryViewControllerVisibleAfterAnimation;
- (_Bool)isTrailingViewControllerVisibleAfterAnimation;
- (_Bool)isLeadingViewControllerVisibleAfterAnimation;
@property(readonly, nonatomic) id <UIViewControllerTransitionCoordinator> transitionCoordinator;
- (void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3 forceOverlay:(_Bool)arg4 velocity:(double)arg5;
- (struct CGSize)_expectedSecondaryColumnSizeAfterAnimatingToState:(id)arg1 getLeadingColumnSize:(struct CGSize *)arg2 trailingColumnSize:(struct CGSize *)arg3 supplementaryColumnSize:(struct CGSize *)arg4;
- (void)stopAnimations;
- (void)_stopAnimationsBeginningInteraction:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateBorderViewsBackgroundColor:(id)arg1;
- (void)_setBorderViewsObserveViewBackgroundColor:(_Bool)arg1;
- (id)_createOverlayEdgeShadowViewForEdge:(unsigned long long)arg1;
- (id)_createBorderView;
- (double)interpolatedMarginForPrimaryNavigationBar:(id)arg1 supplementaryOrSecondaryNavbar:(id)arg2 getInterpolatedAlpha:(double *)arg3;
- (void)_updateToNewPublicState:(id)arg1 withSize:(struct CGSize)arg2;
- (void)_unspecifiedUpdateToNewPublicState:(id)arg1 withSize:(struct CGSize)arg2;
- (void)_performWrappedUpdate:(CDUnknownBlockType)arg1;
- (void)_performSingleDeferredUpdatePass;
- (void)_performDeferredUpdate;
- (void)_setNeedsDeferredUpdate;
- (void)_setNeedsLayoutAndPerformImmediately:(_Bool)arg1;
- (void)__viewWillLayoutSubviews;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (void)_withDisabledAppearanceTransitionsPerform:(CDUnknownBlockType)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;
- (void)traitCollectionDidChange:(id)arg1 toNewTraits:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;
- (void)_expandWithTransitionCoordinator:(id)arg1;
- (void)_collapseWithTransitionCoordinator:(id)arg1;
- (void)_updateForTraitCollection:(id)arg1 oldTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (_Bool)_willExpandWithNewTraitCollection:(id)arg1 oldTraitCollection:(id)arg2;
- (_Bool)_willCollapseWithNewTraitCollection:(id)arg1 oldTraitCollection:(id)arg2;
- (id)gatherMultitaskingDragExclusionRectsFromVisibleColumns;
- (void)addWrapperBlockForNextUpdate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
@property(readonly, nonatomic) long long collapsedState;
- (_Bool)isAnimating;
- (void)setNeedsUpdate;
- (id)allViewControllers;
- (void)navigationControllerDidChangeNavigationBarHidden:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)_removeIdentifiedChildViewController:(id)arg1;
- (void)_addIdentifiedChildViewController:(id)arg1;
- (void)loadView;
@property(copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property(readonly, nonatomic) NSArray *possibleStates;
@property(readonly, nonatomic) UISlidingBarState *currentState;
@property(copy, nonatomic) UISlidingBarConfiguration *configuration;
@property(nonatomic) __weak id <UIPanelControllerDelegate> delegate;
@property(retain, nonatomic) UIViewController *collapsedViewController;
@property(retain, nonatomic) UIViewController *preservedDetailController;
- (void)setSupplementaryViewController:(id)arg1 changingParentage:(_Bool)arg2;
@property(retain, nonatomic) UIViewController *supplementaryViewController;
- (void)setTrailingViewController:(id)arg1 changingParentage:(_Bool)arg2;
@property(retain, nonatomic) UIViewController *trailingViewController;
- (void)setLeadingViewController:(id)arg1 changingParentage:(_Bool)arg2;
@property(retain, nonatomic) UIViewController *leadingViewController;
- (void)setMainViewController:(id)arg1 changingParentage:(_Bool)arg2;
@property(retain, nonatomic) UIViewController *mainViewController;
@property(nonatomic) _Bool leadingTrailingWrapsNavigationController;
- (void)dealloc;
@property(readonly, nonatomic) _Bool supportsColumnStyle;
- (id)initWithOwningViewController:(id)arg1;
@property(nonatomic, getter=isRunExpandScheduled, setter=setRunExpandScheduled:) _Bool runExpandScheduled;
@property(nonatomic, getter=areClippingViewsUnnecessary) _Bool clippingViewsUnnecessary;
@property(nonatomic, getter=isPresentationGestureActive) _Bool presentationGestureActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

