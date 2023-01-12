//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, AVPlayer, AVPlayerItem, NSUUID;
@protocol OS_os_log;

@interface ANTonePlayer : NSObject
{
    NSUUID *_endpointUUID;
    AVPlayer *_player;
    AVAudioSession *_audioSession;
    CDUnknownBlockType _handler;
    AVPlayerItem *_playerItem;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) NSUUID *endpointUUID; // @synthesize endpointUUID=_endpointUUID;
- (void)_callHandler:(id)arg1;
- (void)playerRateChangedHandler:(id)arg1;
- (void)_handlePlayerItemPlayedToEnd:(id)arg1;
- (void)_handlePlayerItemFailedToPlayToEnd:(id)arg1;
- (void)_handleFailure;
- (void)audioSessionInterruptionHandler:(id)arg1;
- (void)_deregisterForNotificationsWithAudioSession:(id)arg1;
- (void)_registerForNotificationsWithAudioSession:(id)arg1;
- (void)_deactivateAudioSession;
- (_Bool)_activateAudioSessionForPlayer:(id)arg1 error:(id *)arg2;
- (void)_playFileURL:(id)arg1;
- (void)_playSystemSoundWithFileURL:(id)arg1;
- (void)stop;
- (void)playFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithEndpointUUID:(id)arg1;
- (id)init;

@end
