//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKPlayer, NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject
{
    _Bool _counted;
    _Bool _okToSend;
    _Bool _relayInitiated;
    _Bool _hasInitRelayInfo;
    _Bool _hasUpdateRelayInfo;
    unsigned int _sequenceNumber;
    GKPlayer *_player;
    GKPlayer *_hostPlayer;
    long long _playerState;
    long long _deferedPlayerState;
    NSMutableArray *_events;
    NSMutableDictionary *_connectionInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) _Bool hasUpdateRelayInfo; // @synthesize hasUpdateRelayInfo=_hasUpdateRelayInfo;
@property(nonatomic) _Bool hasInitRelayInfo; // @synthesize hasInitRelayInfo=_hasInitRelayInfo;
@property(nonatomic) _Bool relayInitiated; // @synthesize relayInitiated=_relayInitiated;
@property(retain, nonatomic) NSMutableDictionary *connectionInfo; // @synthesize connectionInfo=_connectionInfo;
@property(nonatomic) _Bool okToSend; // @synthesize okToSend=_okToSend;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(nonatomic) long long deferedPlayerState; // @synthesize deferedPlayerState=_deferedPlayerState;
@property(nonatomic) _Bool counted; // @synthesize counted=_counted;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) GKPlayer *hostPlayer; // @synthesize hostPlayer=_hostPlayer;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (id)init;

@end
