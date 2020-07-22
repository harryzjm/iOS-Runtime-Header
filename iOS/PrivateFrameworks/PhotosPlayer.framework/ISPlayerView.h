//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosPlayer/ISBasePlayerDelegate-Protocol.h>
#import <PhotosPlayer/ISChangeObserver-Protocol.h>

@class ISBasePlayerUIView, ISPlayerItem, ISWrappedAVPlayer, NSError, NSMutableSet, NSString, UIGestureRecognizer;
@protocol ISPlayerViewDelegate;

@interface ISPlayerView : UIView <ISChangeObserver, ISBasePlayerDelegate>
{
    struct {
        _Bool playbackStateDidChange;
        _Bool interactingDidChange;
        _Bool gestureRecognizerDidChange;
    } _delegateRespondsTo;
    struct {
        _Bool playerItemLoadingTarget;
        _Bool playerPlayerItem;
        _Bool playerView;
        _Bool playerMuted;
        _Bool status;
        _Bool readyForDisplay;
        _Bool playbackState;
    } _isValid;
    _Bool _audioMuted;
    _Bool _isReadyForDisplay;
    _Bool _isInteracting;
    _Bool _readyForDisplay;
    long long _playbackState;
    long long _status;
    NSError *_error;
    id <ISPlayerViewDelegate> _delegate;
    ISBasePlayerUIView *__playerView;
    ISWrappedAVPlayer *__videoPlayer;
    ISPlayerItem *__playerItem;
    UIGestureRecognizer *__gestureRecognizer;
    NSMutableSet *__activeGestures;
    unsigned long long _playbackStyle;
    struct CGSize _dimensionsOfReservedVideoMemory;
}

+ (void)setAllowPlayerReuse:(_Bool)arg1;
@property(nonatomic) struct CGSize dimensionsOfReservedVideoMemory; // @synthesize dimensionsOfReservedVideoMemory=_dimensionsOfReservedVideoMemory;
@property(nonatomic) unsigned long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(readonly, nonatomic) NSMutableSet *_activeGestures; // @synthesize _activeGestures=__activeGestures;
@property(nonatomic, setter=_setReadyForDisplay:) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(retain, nonatomic, setter=_setGestureRecognizer:) UIGestureRecognizer *_gestureRecognizer; // @synthesize _gestureRecognizer=__gestureRecognizer;
@property(retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // @synthesize _playerItem=__playerItem;
@property(readonly, nonatomic) ISWrappedAVPlayer *_videoPlayer; // @synthesize _videoPlayer=__videoPlayer;
@property(retain, nonatomic, setter=_setPlayerView:) ISBasePlayerUIView *_playerView; // @synthesize _playerView=__playerView;
@property(nonatomic) __weak id <ISPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, setter=_setStatus:) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic, setter=_setPlaybackState:) long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) _Bool isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
@property(nonatomic) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
- (void).cxx_destruct;
- (id)videoPlayerForPlayer:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateReadyForDisplayIfNeeded;
- (void)_updatePlaybackStateIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_updatePlayerMutedIfNeeded;
- (void)_updatePlayerPlayerItemIfNeeded;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_updatePlayerViewIfNeeded;
- (void)_updateIfNeeded;
- (_Bool)_needsUpdate;
- (void)_invalidateReadyForDisplay;
- (void)_invalidatePlaybackState;
- (void)_invalidateStatus;
- (void)_invalidatePlayerMuted;
- (void)_invalidatePlayerView;
- (void)_invalidatePlayerPlayerItem;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_setInteracting:(_Bool)arg1;
- (void)_handleGesture:(id)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
- (void)setContentMode:(long long)arg1;
- (void)prepareWithPlayerItem:(id)arg1;
- (void)prepareWithPhoto:(struct CGImage *)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (id)initWithVideoPlayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

