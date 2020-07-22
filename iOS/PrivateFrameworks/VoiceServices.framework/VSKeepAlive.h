//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface VSKeepAlive : NSObject
{
    NSXPCConnection *_serverConnection;
    long long _audioType;
    _Bool _active;
    _Bool _keepAudioSessionActive;
}

@property(nonatomic) _Bool keepAudioSessionActive; // @synthesize keepAudioSessionActive=_keepAudioSessionActive;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long audioType; // @synthesize audioType=_audioType;
- (void).cxx_destruct;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;
- (id)_serverConnection;
- (void)dealloc;

@end
