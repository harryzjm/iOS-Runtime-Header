//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBSceneLayoutStatusBarAssertionProviding-Protocol.h>

@class NSString, SBDeviceApplicationSceneHandle, SBFTraitsParticipant, SBHomeGrabberView, SBUIAnimationController, UIView;
@protocol SBApplicationSceneBackgroundView;

@protocol SBDeviceApplicationSceneViewControlling <SBApplicationSceneViewControlling, SBSceneLayoutStatusBarAssertionProviding, SBLayoutStateTransitionObserver>
@property(readonly, nonatomic) UIView *sceneContentView;
@property(nonatomic) _Bool sceneResizesHostedContext;
@property(nonatomic) _Bool sceneRendersAsynchronously;
@property(copy, nonatomic) NSString *sceneMinificationFilter;
@property(nonatomic) long long homeGrabberDisplayMode;
@property(readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property(retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
- (void)conformsToProtocolSBDeviceApplicationSceneViewControlling;
- (void)containerDidUpdateTraitsParticipant:(SBFTraitsParticipant *)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (SBUIAnimationController *)prepareForContentRotation;
- (void)willRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 alongsideContainerView:(UIView *)arg3 animated:(_Bool)arg4;
- (double)currentStatusBarHeight;
- (unsigned long long)styleOverridesToSuppress;
- (long long)trailingStatusBarStyle;
- (long long)leadingStatusBarStyle;
- (long long)bestHomeAffordanceOrientationForOrientation:(long long)arg1;
@end

