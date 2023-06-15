//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class AVContentProposal, AVInterstitialTimeRange, AVMediaSelectionGroup, AVMediaSelectionOption, AVPlayerViewController, NSError, NSString, UIViewController;
@protocol AVPlayerViewControllerAnimationCoordinator, UIViewControllerTransitionCoordinator;

@protocol AVPlayerViewControllerDelegate <NSObject>

@optional
- (void)playerViewController:(AVPlayerViewController *)arg1 willTransitionToVisibilityOfTransportBar:(_Bool)arg2 withAnimationCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg3;
- (void)playerViewController:(AVPlayerViewController *)arg1 didRejectContentProposal:(AVContentProposal *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 didAcceptContentProposal:(AVContentProposal *)arg2;
- (_Bool)playerViewController:(AVPlayerViewController *)arg1 shouldPresentContentProposal:(AVContentProposal *)arg2;
- (UIViewController *)previousChannelInterstitialViewControllerForPlayerViewController:(AVPlayerViewController *)arg1;
- (UIViewController *)nextChannelInterstitialViewControllerForPlayerViewController:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 skipToPreviousChannel:(void (^)(_Bool))arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 skipToNextChannel:(void (^)(_Bool))arg2;
- (void)skipToPreviousItemForPlayerViewController:(AVPlayerViewController *)arg1;
- (void)skipToNextItemForPlayerViewController:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 didSelectExternalSubtitleOptionLanguage:(NSString *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 didSelectMediaSelectionOption:(AVMediaSelectionOption *)arg2 inMediaSelectionGroup:(AVMediaSelectionGroup *)arg3;
- (CDStruct_198678f7)playerViewController:(AVPlayerViewController *)arg1 timeToSeekAfterUserNavigatedFromTime:(CDStruct_198678f7)arg2 toTime:(CDStruct_198678f7)arg3;
- (void)playerViewController:(AVPlayerViewController *)arg1 willResumePlaybackAfterUserNavigatedFromTime:(CDStruct_198678f7)arg2 toTime:(CDStruct_198678f7)arg3;
- (void)playerViewController:(AVPlayerViewController *)arg1 didPresentInterstitialTimeRange:(AVInterstitialTimeRange *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willPresentInterstitialTimeRange:(AVInterstitialTimeRange *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg2;
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidEndDismissalTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillBeginDismissalTransition:(AVPlayerViewController *)arg1;
- (_Bool)playerViewControllerShouldDismiss:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 restoreUserInterfaceForFullScreenExitWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
@end

