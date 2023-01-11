//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUI/CCUIOverlayMetricsProvider-Protocol.h>
#import <ControlCenterUI/CCUIOverlayViewProvider-Protocol.h>
#import <ControlCenterUI/CCUIScrollViewDelegate-Protocol.h>
#import <ControlCenterUI/CCUIStatusBarDelegate-Protocol.h>
#import <ControlCenterUI/CCUIStatusLabelViewControllerDelegate-Protocol.h>
#import <ControlCenterUI/UIGestureRecognizerDelegate-Protocol.h>

@class CCUIAnimationRunner, CCUIFlickGestureRecognizer, CCUIHeaderPocketView, CCUIModuleCollectionView, CCUIOverlayTransitionState, CCUIScrollView, CCUIStatusBarStyleSnapshot, CCUIStatusLabelViewController, MTMaterialView, NSHashTable, NSString, NSUUID, UIPanGestureRecognizer, UIScrollView, UIStatusBar, UIStatusBar_Modern, UITapGestureRecognizer, UIView;
@protocol CCUIHostStatusBarStyleProvider, CCUIModularControlCenterOverlayViewControllerDelegate, CCUIOverlayPresentationProvider;

@interface CCUIModularControlCenterOverlayViewController <UIGestureRecognizerDelegate, CCUIScrollViewDelegate, CCUIStatusLabelViewControllerDelegate, CCUIOverlayViewProvider, CCUIOverlayMetricsProvider, CCUIStatusBarDelegate>
{
    id <CCUIOverlayPresentationProvider> _presentationProvider;
    CCUIAnimationRunner *_primaryAnimationRunner;
    CCUIAnimationRunner *_secondaryAnimationRunner;
    MTMaterialView *_backgroundView;
    CCUIHeaderPocketView *_headerPocketView;
    CCUIScrollView *_scrollView;
    UIView *_containerView;
    UIStatusBar_Modern *_compactLeadingStatusBar;
    _Bool _presentationPanGestureActive;
    UIPanGestureRecognizer *_headerPocketViewDismissalPanGesture;
    UITapGestureRecognizer *_headerPocketViewDismissalTapGesture;
    CCUIFlickGestureRecognizer *_collectionViewDismissalFlickGesture;
    UIPanGestureRecognizer *_collectionViewDismissalPanGesture;
    UITapGestureRecognizer *_collectionViewDismissalTapGesture;
    UIPanGestureRecognizer *_collectionViewScrollPanGesture;
    NSHashTable *_blockingGestureRecognizers;
    NSUUID *_currentTransitionUUID;
    CCUIOverlayTransitionState *_previousTransitionState;
    CCUIStatusBarStyleSnapshot *_hostStatusBarStyleSnapshot;
    _Bool _reachabilityActive;
    unsigned long long _presentationState;
    unsigned long long _transitionState;
    id <CCUIHostStatusBarStyleProvider> _hostStatusBarStyleProvider;
}

+ (id)_presentationProviderForDevice;
@property(nonatomic, getter=isReachabilityActive) _Bool reachabilityActive; // @synthesize reachabilityActive=_reachabilityActive;
@property(nonatomic) __weak id <CCUIHostStatusBarStyleProvider> hostStatusBarStyleProvider; // @synthesize hostStatusBarStyleProvider=_hostStatusBarStyleProvider;
@property(readonly, nonatomic) unsigned long long transitionState; // @synthesize transitionState=_transitionState;
@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
- (void).cxx_destruct;
- (_Bool)_gestureRecognizerIsActive:(id)arg1;
- (void)_setupPanGestureFailureRequirements;
- (void)_updateHotPocket:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateHotPocketAnimated:(_Bool)arg1;
- (void)_updateChevronStateForTransitionState:(id)arg1;
- (_Bool)_scrollViewCanAcceptDownwardsPan;
- (_Bool)_scrollViewIsScrollable;
- (_Bool)_scrollPanGestureRecognizerCanBeginForGestureVelocity:(struct CGPoint)arg1;
- (_Bool)_scrollPanGestureRecognizerShouldBegin:(id)arg1;
- (void)_dismissalPanGestureRecognizerFailed:(id)arg1;
- (void)_dismissalPanGestureRecognizerCancelled:(id)arg1;
- (void)_dismissalPanGestureRecognizerEnded:(id)arg1;
- (void)_dismissalPanGestureRecognizerChanged:(id)arg1;
- (void)_dismissalPanGestureRecognizerBegan:(id)arg1;
- (void)_handleDismissalPanGestureRecognizer:(id)arg1;
- (_Bool)_dismissalPanGestureRecognizerShouldBegin:(id)arg1;
- (void)_cancelDismissalPanGestures;
- (void)_handleDismissalFlickGestureRecognizer:(id)arg1;
- (_Bool)_dismissalFlickGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_dismissalFlickGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)_dismissalFlickGestureRecognizerShouldBegin:(id)arg1;
- (void)_handleDismissalTapGestureRecognizer:(id)arg1;
- (_Bool)_dismissalTapGestureRecognizerShouldBegin:(id)arg1;
- (void)cancelPresentationWithLocation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)endPresentationWithLocation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)updatePresentationWithLocation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)beginPresentationWithLocation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)dismissControlCenterForContentModuleContext:(id)arg1;
- (struct CGRect)compactAvoidanceFrameForStatusBar:(id)arg1;
- (id)compactTrailingStyleRequestForStatusBar:(id)arg1;
@property(readonly, nonatomic) double overlayReachabilityHeight;
@property(readonly, copy, nonatomic) CCUIStatusBarStyleSnapshot *overlayStatusBarStyle;
@property(readonly, nonatomic) long long overlayInterfaceOrientation;
- (struct UIEdgeInsets)overlayAdditionalEdgeInsets;
@property(readonly, nonatomic) struct CGRect overlayContainerFrame;
@property(readonly, nonatomic) struct CGRect overlayBackgroundFrame;
- (void)setOverlayStatusBarHidden:(_Bool)arg1;
@property(readonly, nonatomic) UIStatusBar *overlayLeadingStatusBar;
@property(readonly, nonatomic) CCUIHeaderPocketView *overlayHeaderView;
@property(readonly, nonatomic) CCUIStatusLabelViewController *overlayStatusLabelViewController;
@property(readonly, nonatomic) CCUIModuleCollectionView *overlayModuleCollectionView;
@property(readonly, nonatomic) UIView *overlayContainerView;
@property(readonly, nonatomic) UIScrollView *overlayScrollView;
@property(readonly, nonatomic) MTMaterialView *overlayBackgroundView;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (void)statusLabelViewControllerDidFinishStatusUpdates:(id)arg1;
- (void)statusLabelViewControllerWillBeginStatusUpdates:(id)arg1;
- (void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollView:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)__supportedInterfaceOrientations;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)_moduleCollectionViewContainerView;
- (id)_statusLabelViewContainerView;
- (void)_reparentAndBecomeActive;
- (void)_updatePresentationForTransitionState:(id)arg1 withCompletionHander:(CDUnknownBlockType)arg2;
- (void)_updatePresentationForTransitionType:(unsigned long long)arg1 translation:(struct CGPoint)arg2 interactive:(_Bool)arg3;
- (void)_endDismissalWithUUID:(id)arg1 animated:(_Bool)arg2 success:(_Bool)arg3;
- (id)_beginDismissalAnimated:(_Bool)arg1 interactive:(_Bool)arg2;
- (void)dismissAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_endPresentationWithUUID:(id)arg1 success:(_Bool)arg2;
- (id)_beginPresentationAnimated:(_Bool)arg1 interactive:(_Bool)arg2;
- (void)presentAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithSystemAgent:(id)arg1 presentationProvider:(id)arg2;
- (id)initWithSystemAgent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CCUIModularControlCenterOverlayViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

