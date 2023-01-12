//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPlayer, AVPlayer, AVPlayerItem, NSString;
@protocol CKInternalAudioPlayerDelegate;

__attribute__((visibility("hidden")))
@interface CKInternalAudioPlayer : NSObject
{
    AVAudioPlayer *_avAudioPlayer;
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    long long _avPlayerState;
    _Bool _avPlayerPrepareRequested;
    _Bool _avPlayerPlayRequested;
    long long _playerType;
    id <CKInternalAudioPlayerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CKInternalAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long playerType; // @synthesize playerType=_playerType;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)_notifyPlayerDidPrepareAudioFileSuccessfully:(_Bool)arg1;
- (void)_notifyPlayerDidFinishSuccessfully:(_Bool)arg1;
- (void)_handleAVPlayerItemStateChange;
- (void)_playerItemDidEndNotification:(id)arg1;
- (void)dealloc;
- (void)resetCurrentTime;
- (void)prepareToPlay;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
- (void)setCurrentTime:(double)arg1;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) float volume;
- (void)pause;
- (void)stop;
@property(readonly) double deviceCurrentTime;
- (_Bool)_playAtTime:(double)arg1;
- (_Bool)playAtTime:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithContentsOfURL:(id)arg1 playerType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

