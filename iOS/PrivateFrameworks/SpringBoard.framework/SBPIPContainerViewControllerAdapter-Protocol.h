//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSNumber, NSString, SBDeviceApplicationSceneHandle, SBLayoutStateTransitionContext, SBPIPContainerViewController, SBWindowScene, UIGestureRecognizer, UIView, UIViewController;
@protocol SBPIPContainerViewControllerAdapterContextProviding, UIViewSpringAnimationBehaviorDescribing;

@protocol SBPIPContainerViewControllerAdapter <BSInvalidatable>
- (void)setContainerViewController:(SBPIPContainerViewController<SBPIPContainerViewControllerAdapterContextProviding> *)arg1;
- (UIViewController *)contentViewControllerForContainerViewController:(SBPIPContainerViewController *)arg1;
- (int)processIdentifierForContainerViewController:(SBPIPContainerViewController *)arg1;
- (NSString *)scenePersistenceIdentifierForContainerViewController:(SBPIPContainerViewController *)arg1;
- (NSString *)bundleIdentifierForContainerViewController:(SBPIPContainerViewController *)arg1;

@optional
@property(readonly, nonatomic) _Bool shouldSuppressAssociatedElementsInSystemAperture;
@property(retain, nonatomic) NSNumber *overrideResourcesUsageReductionTimeout;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 didUpdateContentViewFrame:(struct CGRect)arg2 reason:(NSString *)arg3;
- (_Bool)containerViewController:(SBPIPContainerViewController *)arg1 shouldHandleStashingForTransitionContext:(SBLayoutStateTransitionContext *)arg2;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 didUpdateStashProgress:(double)arg2;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 didSettleOnStashState:(_Bool)arg2;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 didUpdateStashState:(_Bool)arg2 springSettings:(id <UIViewSpringAnimationBehaviorDescribing>)arg3;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 willUpdateStashState:(_Bool)arg2;
- (_Bool)isStashTabHiddenForContainerViewController:(SBPIPContainerViewController *)arg1;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 wantsStashTabHidden:(_Bool)arg2 left:(_Bool)arg3 springSettings:(id <UIViewSpringAnimationBehaviorDescribing>)arg4 completion:(void (^)(void))arg5;
- (void)containerViewControllerStopReducingResourcesUsage:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerStartReducingResourcesUsage:(SBPIPContainerViewController *)arg1;
- (_Bool)shouldDisableIdleTimerForContainerViewController:(SBPIPContainerViewController *)arg1;
- (UIView *)morphAnimatorTargetContainerViewForContainerViewController:(SBPIPContainerViewController *)arg1;
- (UIView *)morphAnimatorTargetViewForContainerViewController:(SBPIPContainerViewController *)arg1;
- (void)transitionAnimationDidEndForContainerViewController:(SBPIPContainerViewController *)arg1;
- (void)transitionAnimationWillBeginForContainerViewController:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerDidEndSizeChange:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerWillBeginSizeChange:(SBPIPContainerViewController *)arg1 behavior:(int)arg2;
- (void)containerViewControllerDidEndEdgeResize:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerDidBeginEdgeResize:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerPanGestureDidEnd:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerDidEndInteraction:(SBPIPContainerViewController *)arg1 targetWindowScene:(SBWindowScene *)arg2;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 willBeginInteractionWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)layoutSubviewsForContainerViewController:(SBPIPContainerViewController *)arg1;
- (void)loadSubviewsForContainerViewController:(SBPIPContainerViewController *)arg1;
- (_Bool)containerViewControllerShouldRequireMedusaKeyboard:(SBPIPContainerViewController *)arg1;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 handleDestructionRequestForSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;
- (SBDeviceApplicationSceneHandle *)hostedAppSceneHandleForContainerViewController:(SBPIPContainerViewController *)arg1;
@end

