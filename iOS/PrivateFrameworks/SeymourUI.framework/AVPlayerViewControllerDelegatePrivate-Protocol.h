//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourUI/AVPlayerViewControllerDelegate-Protocol.h>

@class AVPlayerViewController, UIView;
@protocol AVPlayerViewControllerAnimationCoordinator, UIViewControllerTransitionCoordinator;

@protocol AVPlayerViewControllerDelegatePrivate <AVPlayerViewControllerDelegate>

@optional
- (void)playerViewControllerWillPerformAnalysisCalloutAction:(AVPlayerViewController *)arg1;
- (_Bool)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 contentViewWillTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (UIView *)playerViewController:(AVPlayerViewController *)arg1 targetViewForDismissalAnimationWithProposedTargetView:(UIView *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willTransitionToVisibilityOfPlaybackControls:(_Bool)arg2 withAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg3;
@end

