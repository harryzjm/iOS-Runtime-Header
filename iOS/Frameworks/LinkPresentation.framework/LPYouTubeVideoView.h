//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPVideo, LPYouTubePlayerView, NSString;

__attribute__((visibility("hidden")))
@interface LPYouTubeVideoView
{
    LPYouTubePlayerView *_platformYouTubeView;
    _Bool _allowingInteractionUntilPlaybackResumes;
}

- (void).cxx_destruct;
- (void)enterCustomFullScreen;
- (_Bool)usesCustomFullScreenImplementation;
- (void)youTubePlayer:(id)arg1 didChangeToFullScreen:(_Bool)arg2;
- (void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2;
- (void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2;
- (void)setAllowsUserInteractionWithVideoPlayer:(_Bool)arg1;
- (id)createVideoPlayerView;
- (void)setPlaying:(_Bool)arg1;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (_Bool)shouldShowMuteButton;
- (_Bool)usesSharedAudioSession;
- (id)initWithHost:(id)arg1 video:(id)arg2 style:(id)arg3 posterFrame:(id)arg4 posterFrameStyle:(id)arg5 configuration:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) LPVideo *media; // @dynamic media;
@property(readonly) Class superclass;

@end

