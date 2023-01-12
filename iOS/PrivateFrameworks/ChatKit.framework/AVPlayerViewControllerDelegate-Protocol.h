//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class AVInterstitialTimeRange, AVPlayerViewController, NSError;
@protocol UIViewControllerTransitionCoordinator;

@protocol AVPlayerViewControllerDelegate <NSObject>

@optional
- (void)playerViewController:(AVPlayerViewController *)arg1 didPresentInterstitialTimeRange:(AVInterstitialTimeRange *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willPresentInterstitialTimeRange:(AVInterstitialTimeRange *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg2;
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 restoreUserInterfaceForFullScreenExitWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
@end

