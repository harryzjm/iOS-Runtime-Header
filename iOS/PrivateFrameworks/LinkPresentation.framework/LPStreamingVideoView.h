//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer;

__attribute__((visibility("hidden")))
@interface LPStreamingVideoView
{
    AVQueuePlayer *_player;
    AVPlayerLooper *_looper;
    AVPlayerLayer *_playerLayer;
    CDUnknownBlockType _readyForDisplayCallback;
    _Bool _hasCreatedVideoPlayerView;
    _Bool _isWaitingToRetryAfterFailingToPlay;
    unsigned int _playbackRetryCountWithoutSuccess;
    _Bool _desiredPlayingState;
    float _desiredVolume;
}

- (void).cxx_destruct;
- (void)fullScreenVideoWillDismiss;
- (void)fullScreenVideoDidPresent;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)createVideoPlayerView;
- (_Bool)usesCustomFullScreenImplementation;
- (id)createFullScreenVideoViewController;
- (void)layoutComponentView;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (_Bool)shouldShowMuteButton;
- (_Bool)usesSharedAudioSession;
- (_Bool)shouldAutoPlay;
- (_Bool)releaseDecodingResourcesIfInactive;
- (void)setPlaying:(_Bool)arg1;
- (void)didFailToPlay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetToPlaceholderView;
- (void)destroyPlayer;
- (void)createPlayerIfNeeded;
- (void)createPlayerItemAdjustedForLoopingWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5;
- (id)init;

@end

