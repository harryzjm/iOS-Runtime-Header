//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class UIViewController;
@protocol VUIPlaybackContainerViewController;

@protocol VUIPlaybackContainerViewControllerDelegate <NSObject>
- (void)playbackContainerViewControllerDidAutoPlay:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
- (void)playbackContainerViewControllerDidDisappear:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
- (void)playbackContainerViewControllerBackgroundPlaybackWillBegin:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
- (struct CGRect)playbackContainerViewControllerPiPFrameForCurrentPlayback:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
- (void)playbackContainerViewControllerExitPictureInPicturePressed:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
- (void)playbackContainerViewControllerDidFinishLoadingPostPlay:(UIViewController<VUIPlaybackContainerViewController> *)arg1;
@end

