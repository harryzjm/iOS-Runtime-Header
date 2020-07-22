//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UILayoutContainerViewDelegate-Protocol.h>
#import <UIKit/UITabBarDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, UIFocusContainerGuide, UIGestureRecognizer, UILayoutContainerView, UILongPressGestureRecognizer, UIMoreNavigationController, UINavigationController, UITabBar, UITapGestureRecognizer, UIView, UIViewController;
@protocol UITabBarControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface UITabBarController <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UITabBarDelegate, NSCoding>
{
    UITabBar *_tabBar;
    UILayoutContainerView *_containerView;
    UIView *_viewControllerTransitionView;
    id _tabBarItemsToViewControllers;
    UIViewController *_selectedViewController;
    UIMoreNavigationController *_moreNavigationController;
    NSArray *_customizableViewControllers;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UIViewController *_transientViewController;
    unsigned long long _customMaxItems;
    unsigned long long _defaultMaxItems;
    long long _tabBarPosition;
    UITapGestureRecognizer *_backGestureRecognizer;
    UITapGestureRecognizer *_nudgeLeftGestureRecognizer;
    UITapGestureRecognizer *_nudgeRightGestureRecognizer;
    UITapGestureRecognizer *_selectGestureRecognizer;
    UIGestureRecognizer *_touchDetectionGestureRecognizer;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;
    struct {
        unsigned int isShowingMoreItem:1;
        unsigned int needsToRebuildItems:1;
        unsigned int isBarHidden:1;
        unsigned int editButtonOnLeft:1;
        unsigned int barLayoutIsValid:1;
        unsigned int reselectTab:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int preferTabBarFocused:1;
        unsigned int offscreen:1;
        unsigned int hidNavBar:1;
    } _tabBarControllerFlags;
    NSMutableArray *_moreChildViewControllers;
    UIView *_accessoryView;
    NSMapTable *_rememberedFocusedItemsByViewController;
    id <UITabBarControllerDelegate> _delegate;
    NSString *__backdropGroupName;
    id <UIViewControllerAnimatedTransitioning> __animator;
    id <UIViewControllerInteractiveTransitioning> __interactor;
}

+ (_Bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (Class)_moreNavigationControllerClass;
+ (_Bool)_directlySetsContentOverlayInsetsForChildren;
+ (_Bool)doesOverrideSupportedInterfaceOrientations;
+ (_Bool)doesOverridePreferredInterfaceOrientationForPresentation;
@property(retain, nonatomic, setter=_setInteractor:) id <UIViewControllerInteractiveTransitioning> _interactor; // @synthesize _interactor=__interactor;
@property(retain, nonatomic, setter=_setAnimator:) id <UIViewControllerAnimatedTransitioning> _animator; // @synthesize _animator=__animator;
@property(retain, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // @synthesize _backdropGroupName=__backdropGroupName;
@property(nonatomic) __weak id <UITabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // @synthesize _accessoryView;
@property(retain, nonatomic) NSMutableArray *moreChildViewControllers; // @synthesize moreChildViewControllers=_moreChildViewControllers;
- (void).cxx_destruct;
- (void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_invalidateBarLayoutIfNecessary;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (_Bool)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)_shouldSynthesizeSupportedOrientations;
- (_Bool)_doAllViewControllersSupportInterfaceOrientation:(long long)arg1;
- (_Bool)_allowsAutorotation;
- (void)_setSelectedViewControllerNeedsLayout;
- (void)_setMaximumNumberOfItems:(unsigned long long)arg1;
- (unsigned long long)_effectiveMaxItems;
- (_Bool)showsEditButtonOnLeft;
- (void)setShowsEditButtonOnLeft:(_Bool)arg1;
- (void)revealTabBarSelection;
- (void)concealTabBarSelection;
- (void)setTransientViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setTransientViewController:(id)arg1;
- (id)transientViewController;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionViewDidStart:(id)arg1;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(_Bool)arg4;
- (id)_customAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)_customInteractionControllerForAnimator:(id)arg1;
- (struct CGRect)_frameForWrapperViewForViewController:(id)arg1;
- (id)transitionCoordinator;
- (struct CGRect)_frameForViewController:(id)arg1;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (id)_transitionView;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_tabBarItemClicked:(id)arg1;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (void)_setTabBarPosition:(long long)arg1;
- (long long)_effectiveTabBarPosition;
- (id)_backdropBarGroupName;
- (long long)_tabBarPosition;
@property(readonly, nonatomic) UITabBar *tabBar;
- (id)_viewControllersInTabBar;
- (id)allViewControllers;
- (void)showBarWithTransition:(int)arg1;
- (void)_showBarWithTransition:(int)arg1 isExplicit:(_Bool)arg2;
- (void)hideBarWithTransition:(int)arg1;
- (void)_hideBarWithTransition:(int)arg1 isExplicit:(_Bool)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (_Bool)_isBarHidden;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)tabBarSizingDidChange:(id)arg1;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)beginCustomizingTabBar:(id)arg1;
@property(copy, nonatomic) NSArray *customizableViewControllers; // @synthesize customizableViewControllers=_customizableViewControllers;
@property(readonly, nonatomic) UINavigationController *moreNavigationController;
- (void)setRestorationIdentifier:(id)arg1;
- (void)_setMoreNavigationControllerRestorationIdentifier;
- (id)_existingMoreNavigationController;
- (_Bool)_allowsCustomizing;
- (_Bool)_transitionsChildViewControllers;
- (id)childViewControllerForUserInterfaceStyle;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)_setSelectedViewController:(id)arg1;
@property(nonatomic) UIViewController *selectedViewController;
@property(nonatomic) unsigned long long selectedIndex;
- (id)_viewControllerForSelectAtIndex:(unsigned long long)arg1;
- (_Bool)_allowSelectionWithinMoreList;
- (id)_selectedViewControllerInTabBar;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)_setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)_rebuildTabBarItemsAnimated:(_Bool)arg1;
- (void)_rebuildTabBarItemsIfNeeded;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (id)_recallRememberedFocusedItemForViewController:(id)arg1;
- (void)_forgetFocusedItemForViewController:(id)arg1;
- (void)_rememberFocusedItem:(id)arg1 forViewController:(id)arg2;
@property(readonly, nonatomic, getter=_rememberedFocusedItemsByViewController) NSMapTable *rememberedFocusedItemsByViewController; // @synthesize rememberedFocusedItemsByViewController=_rememberedFocusedItemsByViewController;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)_updateOffscreenStatus:(_Bool)arg1;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_overridingPreferredFocusEnvironment;
- (_Bool)_canRestoreFocusAfterTransitionToRecalledItem:(id)arg1 inViewController:(id)arg2;
- (void)_rememberPresentingFocusedItem:(id)arg1;
- (id)preferredFocusEnvironments;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (id)preferredFocusedView;
- (void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2;
- (_Bool)_isTabBarFocused;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (void)_performTouchDetectionGesture:(id)arg1;
- (void)_performSelectGesture:(id)arg1;
- (void)_performRightGesture:(id)arg1;
- (void)_performLeftGesture:(id)arg1;
- (void)_performBackGesture:(id)arg1;
- (void)_performFocusGesture:(unsigned long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateGestureRecognizersForTraitCollection:(id)arg1;
- (void)_updateLayoutForTraitCollection:(id)arg1;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (_Bool)_reallyWantsFullScreenLayout;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)_setSelectedTabBarItem:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)_accessibilityHUDLongPressRecognizer;
- (void)_accessibilityLongPressChanged:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setUpFocusContainerGuides;
- (void)viewDidLoad;
- (_Bool)_isPresentationContextByDefault;
- (void)loadView;
- (void)_layoutContainerView;
- (void)setView:(id)arg1;
- (void)setTabBar:(id)arg1;
- (void)_prepareTabBar;
- (void)_updateTabBarLayout;
- (void)_safeAreaInsetsDidChangeForView;
- (struct CGRect)_adjustContentViewFrameForOffscreenFocus:(struct CGRect)arg1 viewController:(id)arg2;
- (_Bool)_shouldAdjustContentViewFrameForOffscreenFocus:(id)arg1 adjustedTabBarFrame:(struct CGRect)arg2;
- (struct CGRect)_adjustTabBarFrameForOffscreenFocus:(struct CGRect)arg1 barPosition:(long long)arg2;
- (void)__viewWillLayoutSubviews;
- (void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(_Bool)arg1;
- (id)_wrapperViewForViewController:(id)arg1;
- (id)_viewForViewController:(id)arg1;
- (void)_layoutViewController:(id)arg1;
- (id)_deepestUnambiguousResponder;
- (_Bool)becomeFirstResponder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_shouldPersistViewWhenCoding;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (_Bool)_ignoreUnselectedTabsForStateRestoration;
- (id)_allContainedViewControllers;
- (id)_additionalViewControllersToCheckForUserActivity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

