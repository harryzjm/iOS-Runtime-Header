//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NANowPlayingViewController, UIContextMenuConfiguration, UIContextMenuInteraction;

@protocol NANowPlayingViewControllerDelegate
- (UIContextMenuConfiguration *)nowPlayingViewController:(NANowPlayingViewController *)arg1 didReceiveContextMenuInteraction:(UIContextMenuInteraction *)arg2 configurationForMenuAtLocation:(struct CGPoint)arg3;
- (void)nowPlayingViewControllerDidRequestNavigateToArticle:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapDismissButton:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewController:(NANowPlayingViewController *)arg1 seekToPosition:(double)arg2;
- (void)nowPlayingViewControllerDidTapEllipsis:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapPlaybackRate:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapPlay:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapPause:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapNextTrack:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapSkipForward:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapRewind:(NANowPlayingViewController *)arg1;
@end

