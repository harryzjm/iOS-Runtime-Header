//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVPlayer, AVPlayerItem, CADisplayLink, MSCLAudioPlayerStatus;
@protocol MSCLAudioPlayerDelegate;

@interface MSCLAudioPlayer : NSObject
{
    AVAsset *_asset;
    id <MSCLAudioPlayerDelegate> _delegate;
    CADisplayLink *_displayLink;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    id _representedObject;
    MSCLAudioPlayerStatus *_status;
    id _timeObserver;
    _Bool _usesCADisplayLink;
}

@property(nonatomic) _Bool usesCADisplayLink; // @synthesize usesCADisplayLink=_usesCADisplayLink;
@property(readonly, copy, nonatomic) MSCLAudioPlayerStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) __weak id <MSCLAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateStatusWithCurrentTime:(double)arg1;
- (void)_setPlayerState:(long long)arg1;
- (void)_sendStatusDidChange;
- (void)_failWithError:(id)arg1;
- (void)_destroyPlayer;
- (void)_itemPlayedToEndNotification:(id)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)_displayLinkTick:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)togglePlayback;
- (void)stop;
- (void)play;
- (void)pause;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

