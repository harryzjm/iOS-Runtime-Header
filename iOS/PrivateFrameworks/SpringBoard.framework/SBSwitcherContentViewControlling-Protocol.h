//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBButtonEventsHandler-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBSwitcherAnimatedTransitioning-Protocol.h>

@class NSArray, NSString, SBAppLayout, SBApplicationSceneHandle, SBBestAppSuggestion, SBFluidSwitcherAnimationController, SBFluidSwitcherGesture, SBIcon, SBMainWorkspaceTransitionRequest, SBTransientOverlayViewController, SBWorkspaceApplicationSceneTransitionContext;
@protocol SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate;

@protocol SBSwitcherContentViewControlling <SBButtonEventsHandler, SBLayoutStateTransitionObserver, SBSwitcherAnimatedTransitioning>
@property(nonatomic, getter=isLiveContentRasterizationDisabled) _Bool liveContentRasterizationDisabled;
@property(nonatomic) long long contentOrientation;
@property(nonatomic, getter=isShowingModifierTimeline) _Bool showModifierTimeline;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDataSource> dataSource;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDelegate> delegate;
- (SBIcon *)iconForAppLayout:(SBAppLayout *)arg1;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
- (SBFluidSwitcherAnimationController *)animationControllerForTransitionRequest:(SBMainWorkspaceTransitionRequest *)arg1;
- (void)relinquishTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (void)acquiredViewController:(SBTransientOverlayViewController *)arg1 forTransientOverlayAppLayout:(SBAppLayout *)arg2;
- (void)noteAppLayoutsDidChange;
- (void)handleGestureDidEnd:(SBFluidSwitcherGesture *)arg1;
- (void)handleGestureDidUpdate:(SBFluidSwitcherGesture *)arg1;
- (void)handleGestureDidBegin:(SBFluidSwitcherGesture *)arg1;
- (void)performAnimatedRemovalOfAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2 completion:(void (^)(_Bool, _Bool))arg3;
- (void)noteModelDidMutateForRemovalOfAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2 animated:(_Bool)arg3;
- (void)prepareAnimatedRemovalOfAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2;
- (_Bool)shouldAnimateRemovalOfAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2;
- (void)performAnimatedInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2 completion:(void (^)(_Bool, _Bool))arg3;
- (void)noteModelDidMutateForInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2 willAnimate:(_Bool)arg3;
- (void)prepareAnimatedInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2;
- (_Bool)shouldAnimateInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2;
- (_Bool)isStatusBarHiddenForAppLayout:(SBAppLayout *)arg1;
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(_Bool)arg1;
- (_Bool)shouldRubberbandFullScreenHomeGrabberView;
- (_Bool)shouldAcceleratedHomeButtonPressBegin;
- (_Bool)isUserInteractionEnabled;
- (_Bool)isWindowVisible;
- (_Bool)shouldAddAppLayoutToFront:(SBAppLayout *)arg1 forTransitionWithContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2 transitionCompleted:(_Bool)arg3;
- (double)minimumHomeScreenScale;
- (double)snapshotScaleForSceneHandle:(SBApplicationSceneHandle *)arg1;
@end
