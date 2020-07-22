//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayAudioSessionStartedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _audioCompressionType;
    unsigned int _clientAnnounceMs;
    unsigned int _clientAuthMs;
    unsigned int _clientBonjourMs;
    unsigned int _clientConnectMs;
    NSString *_clientModel;
    unsigned int _clientSetupAudioMs;
    unsigned int _clientSetupScreenMs;
    NSString *_clientVersion;
    unsigned int _latencyMs;
    unsigned int _serverRecordMs;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    struct {
        unsigned int timestamp:1;
        unsigned int audioCompressionType:1;
        unsigned int clientAnnounceMs:1;
        unsigned int clientAuthMs:1;
        unsigned int clientBonjourMs:1;
        unsigned int clientConnectMs:1;
        unsigned int clientSetupAudioMs:1;
        unsigned int clientSetupScreenMs:1;
        unsigned int latencyMs:1;
        unsigned int serverRecordMs:1;
        unsigned int status:1;
        unsigned int transportType:1;
    } _has;
}

@property(nonatomic) unsigned int serverRecordMs; // @synthesize serverRecordMs=_serverRecordMs;
@property(nonatomic) unsigned int clientSetupScreenMs; // @synthesize clientSetupScreenMs=_clientSetupScreenMs;
@property(nonatomic) unsigned int clientSetupAudioMs; // @synthesize clientSetupAudioMs=_clientSetupAudioMs;
@property(nonatomic) unsigned int clientAnnounceMs; // @synthesize clientAnnounceMs=_clientAnnounceMs;
@property(nonatomic) unsigned int clientAuthMs; // @synthesize clientAuthMs=_clientAuthMs;
@property(nonatomic) unsigned int clientConnectMs; // @synthesize clientConnectMs=_clientConnectMs;
@property(nonatomic) unsigned int clientBonjourMs; // @synthesize clientBonjourMs=_clientBonjourMs;
@property(nonatomic) unsigned int latencyMs; // @synthesize latencyMs=_latencyMs;
@property(nonatomic) unsigned int audioCompressionType; // @synthesize audioCompressionType=_audioCompressionType;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientModel; // @synthesize clientModel=_clientModel;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasServerRecordMs;
@property(nonatomic) _Bool hasClientSetupScreenMs;
@property(nonatomic) _Bool hasClientSetupAudioMs;
@property(nonatomic) _Bool hasClientAnnounceMs;
@property(nonatomic) _Bool hasClientAuthMs;
@property(nonatomic) _Bool hasClientConnectMs;
@property(nonatomic) _Bool hasClientBonjourMs;
@property(nonatomic) _Bool hasLatencyMs;
@property(nonatomic) _Bool hasAudioCompressionType;
@property(readonly, nonatomic) _Bool hasClientVersion;
@property(readonly, nonatomic) _Bool hasClientModel;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

