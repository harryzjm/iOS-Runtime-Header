//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CATextLayer, LPFullScreenVideoController, LPImage, LPImageViewStyle, LPVideo, LPVisualMedia, LPVisualMediaViewConfiguration, LPVisualMediaViewStyle, NSString, UIGestureRecognizer, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPVisualMediaView
{
    LPVideo *_video;
    LPVisualMediaViewStyle *_style;
    LPImage *_posterFrame;
    LPImageViewStyle *_posterFrameStyle;
    LPVisualMediaViewConfiguration *_configuration;
    UIView *_playButtonContainerView;
    UIView *_playButtonView;
    UIView *_muteButtonContainerView;
    UIImageView *_muteButtonView;
    UIView *_videoPlaceholderView;
    UIView *_visualEffectView;
    UIView *_pulsingLoadView;
    UIView *_containerView;
    UIView *_playbackView;
    CATextLayer *_debugIndicator;
    UIGestureRecognizer *_tapRecognizer;
    UIGestureRecognizer *_playButtonTapRecognizer;
    LPFullScreenVideoController *_fullScreenController;
    _Bool _playing;
    _Bool _hasBuilt;
    _Bool _wasPlayingOrWaitingToPlayWhenUnparented;
    _Bool _wasPlayingWhenSuspended;
    _Bool _showingPlayButton;
    _Bool _waitingForPlaybackDueToAutoPlay;
    _Bool _hasEverPlayed;
    unsigned long long _lastInteractionTimestamp;
    unsigned long long _playbackWatchdogTimerID;
    unsigned int _loggingID;
    _Bool _usesSharedAudioSession;
    _Bool _allowsUserInteractionWithVideoPlayer;
    _Bool _waitingForPlayback;
    _Bool _fullScreen;
    double _volume;
    LPVisualMedia *_media;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int loggingID; // @synthesize loggingID=_loggingID;
@property(readonly, nonatomic) UIView *playbackView; // @synthesize playbackView=_playbackView;
@property(readonly, nonatomic) LPVisualMedia *media; // @synthesize media=_media;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool hasEverPlayed; // @synthesize hasEverPlayed=_hasEverPlayed;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic, getter=isWaitingForPlayback) _Bool waitingForPlayback; // @synthesize waitingForPlayback=_waitingForPlayback;
@property(nonatomic) _Bool allowsUserInteractionWithVideoPlayer; // @synthesize allowsUserInteractionWithVideoPlayer=_allowsUserInteractionWithVideoPlayer;
@property(readonly, nonatomic) _Bool usesSharedAudioSession; // @synthesize usesSharedAudioSession=_usesSharedAudioSession;
- (id)playable;
@property(nonatomic, getter=isActive) _Bool active;
- (void)_muteButtonTapRecognized:(id)arg1;
- (void)_muteButtonHighlightLongPressRecognized:(id)arg1;
- (void)fullScreenVideoDidDismiss;
- (void)fullScreenVideoWillDismiss;
- (void)fullScreenVideoDidPresent;
- (void)enterFullScreen;
- (void)recreateFullScreenViewControllerIfNeeded;
- (void)destroyFullScreenViewController;
- (void)tapRecognized:(id)arg1;
- (void)swapVideoPlaceholderForPlaybackIfNeeded;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)arg1;
- (void)_buildVisualMediaPlaceholderView;
- (id)playButtonImage;
- (id)_createPosterFrameView;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(readonly, nonatomic) _Bool shouldShowMuteButton;
- (void)fadeInMuteButton;
- (void)hideMuteButton;
- (void)showMuteButton;
- (void)hidePlayButtonAnimated:(_Bool)arg1;
- (void)showPlayButtonAnimated:(_Bool)arg1;
- (void)updatePlayButtonVisibility;
- (void)didChangeMutedState:(_Bool)arg1;
- (void)updateMuteButtonWithAnimation:(_Bool)arg1;
- (void)didEncounterPossiblyTransientPlaybackError;
- (void)didEncounterPlaybackError;
- (void)didChangePlayingState:(_Bool)arg1;
- (void)removePlaceholderViews;
- (void)resetToPlaceholderView;
- (void)enterCustomFullScreen;
- (_Bool)usesCustomFullScreenImplementation;
- (id)createFullScreenVideoViewController;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)createVideoPlayerView;
- (void)userInteractedWithVideoView;
@property(readonly, nonatomic) double unobscuredAreaFraction;
@property(readonly, nonatomic) unsigned long long lastInteractionTimestamp;
@property(readonly, nonatomic) _Bool shouldUnmuteWhenUserAdjustsVolume;
- (void)resetPlaybackState;
@property(readonly, nonatomic) _Bool hasMuteControl;
@property(nonatomic, getter=isPlaying) _Bool playing;
- (void)_swapVideoPlaceholderForVideoForAutoPlay:(_Bool)arg1;
- (void)_startPlaybackWatchdogTimer;
- (id)_createPulsingLoadIndicator;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
@property(readonly, nonatomic) _Bool shouldAutoPlay;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)beginLoadingMediaForPreroll;
- (void)buildSubviewsIfNeeded;
- (void)componentViewDidMoveToWindow;
- (_Bool)isParented;
@property(readonly, copy, nonatomic) LPVisualMediaViewConfiguration *configuration;
- (void)dealloc;
- (id)initWithHost:(id)arg1 media:(id)arg2 style:(id)arg3 posterFrame:(id)arg4 posterFrameStyle:(id)arg5 configuration:(id)arg6;
- (id)initWithHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

