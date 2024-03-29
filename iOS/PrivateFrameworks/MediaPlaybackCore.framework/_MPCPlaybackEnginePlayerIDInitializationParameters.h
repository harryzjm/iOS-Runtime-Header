//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEnginePlayerIDInitializationParameters : NSObject
{
    MPNowPlayingInfoCenter *_nowPlayingInfoCenter;
    MPRemoteCommandCenter *_remoteCommandCenter;
    AVAudioSession *_audioSession;
    NSString *_playerID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(readonly, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(readonly, nonatomic) MPRemoteCommandCenter *remoteCommandCenter; // @synthesize remoteCommandCenter=_remoteCommandCenter;
@property(readonly, nonatomic) MPNowPlayingInfoCenter *nowPlayingInfoCenter; // @synthesize nowPlayingInfoCenter=_nowPlayingInfoCenter;
- (id)initWithPlayerID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

