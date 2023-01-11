//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBSwitcherAnimatedTransitioning-Protocol.h>

@class NSArray, NSString, NSUUID, SBAppLayout, SBApplicationSceneHandle, SBBestAppSuggestion, SBFluidSwitcherGesture, SBMainWorkspaceTransitionRequest, SBSwitcherModifierAction, SBTransientOverlayViewController, SBUIAnimationController, SBWorkspaceApplicationSceneTransitionContext;
@protocol SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate;

@protocol SBSwitcherContentViewControlling <SBLayoutStateTransitionObserver, SBSwitcherAnimatedTransitioning>
@property(nonatomic, getter=isAsynchronousRenderingDisabled) _Bool asynchronousRenderingDisabled;
@property(nonatomic) long long contentOrientation;
@property(nonatomic, getter=isShowingModifierTimeline) _Bool showModifierTimeline;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDataSource> dataSource;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDelegate> delegate;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
- (SBSwitcherModifierAction *)enterAppExposeForBundleID:(NSString *)arg1;
- (SBUIAnimationController *)animationControllerForTransitionRequest:(SBMainWorkspaceTransitionRequest *)arg1;
- (void)relinquishTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (void)acquiredViewController:(SBTransientOverlayViewController *)arg1 forTransientOverlayAppLayout:(SBAppLayout *)arg2;
- (void)noteAppLayoutsDidChange;
- (void)handleModifierAction:(SBSwitcherModifierAction *)arg1;
- (SBSwitcherModifierAction *)handleGestureDidEnd:(SBFluidSwitcherGesture *)arg1;
- (SBSwitcherModifierAction *)handleGestureDidUpdate:(SBFluidSwitcherGesture *)arg1;
- (SBSwitcherModifierAction *)handleGestureDidBegin:(SBFluidSwitcherGesture *)arg1;
- (void)removeAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2 modelMutationBlock:(void (^)(void))arg3 completion:(void (^)(_Bool, SBAppLayout *, SBAppLayout *))arg4;
- (SBSwitcherModifierAction *)dispatchAndReturnTetheredInsertionEventIfNeededWithID:(NSUUID *)arg1 phase:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)performInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool, _Bool))arg4;
- (SBSwitcherModifierAction *)noteModelDidMutateForInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2;
- (SBSwitcherModifierAction *)prepareInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2 shouldAnimate:(inout _Bool *)arg3;
- (_Bool)isStatusBarHiddenForAppLayout:(SBAppLayout *)arg1;
- (void)respondToInAppStatusBarRequestedHiddenUpdate;
- (_Bool)shouldRubberbandHomeGrabberView;
- (_Bool)shouldAcceleratedHomeButtonPressBegin;
- (_Bool)isUserInteractionEnabled;
- (_Bool)isWindowVisible;
- (_Bool)shouldAddAppLayoutToFront:(SBAppLayout *)arg1 forTransitionWithContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2 transitionCompleted:(_Bool)arg3;
- (double)minimumHomeScreenScale;
- (_Bool)hasInteractiveContentAtBottomOfScreen;
- (double)snapshotScaleForSceneHandle:(SBApplicationSceneHandle *)arg1;
@end
