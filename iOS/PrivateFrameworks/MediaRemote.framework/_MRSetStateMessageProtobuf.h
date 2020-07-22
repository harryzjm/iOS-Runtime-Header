//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRNowPlayingInfoProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueCapabilitiesProtobuf, _MRPlaybackQueueProtobuf, _MRPlaybackQueueRequestProtobuf, _MRSupportedCommandsProtobuf;

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying>
{
    NSString *_displayID;
    NSString *_displayName;
    _MRNowPlayingInfoProtobuf *_nowPlayingInfo;
    _MRPlaybackQueueProtobuf *_playbackQueue;
    _MRPlaybackQueueCapabilitiesProtobuf *_playbackQueueCapabilities;
    unsigned int _playbackState;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRPlaybackQueueRequestProtobuf *_request;
    _MRSupportedCommandsProtobuf *_supportedCommands;
    struct {
        unsigned int playbackState:1;
    } _has;
}

@property(retain, nonatomic) _MRPlaybackQueueRequestProtobuf *request; // @synthesize request=_request;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) _MRPlaybackQueueCapabilitiesProtobuf *playbackQueueCapabilities; // @synthesize playbackQueueCapabilities=_playbackQueueCapabilities;
@property(nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
@property(retain, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(retain, nonatomic) _MRSupportedCommandsProtobuf *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
@property(retain, nonatomic) _MRNowPlayingInfoProtobuf *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasPlayerPath;
@property(readonly, nonatomic) _Bool hasPlaybackQueueCapabilities;
@property(nonatomic) _Bool hasPlaybackState;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasDisplayID;
@property(readonly, nonatomic) _Bool hasPlaybackQueue;
@property(readonly, nonatomic) _Bool hasSupportedCommands;
@property(readonly, nonatomic) _Bool hasNowPlayingInfo;
- (void)dealloc;

@end

