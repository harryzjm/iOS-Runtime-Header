//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVPlayer, AVVideoComposition, NSMutableArray;
@protocol NUAVPlayerControllerDelegate;

@interface NUAVPlayerController : NSObject
{
    struct {
        _Bool registeredPlayer;
    } _playerControllerKVOFlags;
    NSMutableArray *_playerItemObservations;
    _Bool _loopsVideo;
    _Bool _muted;
    AVPlayer *_player;
    double _updateInterval;
    AVAsset *_videoAsset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    id <NUAVPlayerControllerDelegate> _delegate;
}

@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool loopsVideo; // @synthesize loopsVideo=_loopsVideo;
@property(nonatomic) __weak id <NUAVPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(readonly, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_addPlayerItemKVO:(id)arg1;
- (void)_removePlayerItemKVO:(id)arg1;
- (void)_addPlayerKVO;
- (void)_removePlayerKVO;
- (void)_setRate:(float)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)seekBack;
- (void)seekForward;
- (void)play;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateAudioMix:(id)arg1;
- (void)updateVideoComposition:(id)arg1;
- (_Bool)prepareWithAVAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(_Bool)arg4;
- (void)dealloc;
- (id)init;

@end

