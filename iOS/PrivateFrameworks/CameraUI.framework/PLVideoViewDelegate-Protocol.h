//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class NSDictionary, PLVideoView, UIView;

@protocol PLVideoViewDelegate <NSObject>

@optional
- (NSDictionary *)videoViewRequestsPickedAirplayRoute:(PLVideoView *)arg1;
- (_Bool)videoViewCanCreateMetadata:(PLVideoView *)arg1;
- (_Bool)videoViewShouldRespondToPlayOverlayTap:(PLVideoView *)arg1;
- (void)videoView:(PLVideoView *)arg1 displayPlayOverlay:(UIView *)arg2;
- (void)videoViewDidCancelEditing:(PLVideoView *)arg1;
- (void)videoViewDidBeginEditing:(PLVideoView *)arg1;
- (void)videoViewWillBeginEditing:(PLVideoView *)arg1;
- (void)videoView:(PLVideoView *)arg1 remakingProgressDidChange:(float)arg2;
- (void)videoViewDidEndRemaking:(PLVideoView *)arg1 didSucceed:(_Bool)arg2;
- (void)videoViewDidBeginRemaking:(PLVideoView *)arg1;
- (void)videoViewDidEndScrubbing:(PLVideoView *)arg1;
- (void)videoViewDidBeginScrubbing:(PLVideoView *)arg1;
- (void)videoViewDidEndPlayback:(PLVideoView *)arg1 didFinish:(_Bool)arg2;
- (void)videoViewDidPausePlayback:(PLVideoView *)arg1;
- (void)videoViewDidBeginPlayback:(PLVideoView *)arg1;
- (void)videoViewPlaybackDidFail:(PLVideoView *)arg1;
- (void)videoViewIsReadyToBeginPlayback:(PLVideoView *)arg1;
- (_Bool)videoViewCanBeginPlayback:(PLVideoView *)arg1;
- (double)videoViewScrubberWidth:(PLVideoView *)arg1;
- (double)videoViewScrubberYOrigin:(PLVideoView *)arg1 forOrientation:(long long)arg2;
- (void)videoViewDidCreateAttachments:(PLVideoView *)arg1;
@end

