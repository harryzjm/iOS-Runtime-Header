//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayVideoSessionStartedOnClient : PBCodable <NSCopying>
{
    unsigned long long _fileBytes;
    unsigned long long _timestamp;
    unsigned int _audioOnly;
    unsigned int _authMs;
    int _awdlCCA;
    int _awdlRSSI;
    unsigned int _bitrate;
    unsigned int _bonjourMs;
    unsigned int _connectMs;
    unsigned int _duration;
    unsigned int _infoMs;
    int _infraCCA;
    int _infraRSSI;
    int _infraSNR;
    unsigned int _postAuthMs;
    unsigned int _secureConnectionMs;
    NSString *_serverModel;
    NSString *_serverVersion;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    unsigned int _type;
    _Bool _didFallbackToInfraToAvoidP2POverDFS;
    struct {
        unsigned int fileBytes:1;
        unsigned int timestamp:1;
        unsigned int audioOnly:1;
        unsigned int authMs:1;
        unsigned int awdlCCA:1;
        unsigned int awdlRSSI:1;
        unsigned int bitrate:1;
        unsigned int bonjourMs:1;
        unsigned int connectMs:1;
        unsigned int duration:1;
        unsigned int infoMs:1;
        unsigned int infraCCA:1;
        unsigned int infraRSSI:1;
        unsigned int infraSNR:1;
        unsigned int postAuthMs:1;
        unsigned int secureConnectionMs:1;
        unsigned int status:1;
        unsigned int transportType:1;
        unsigned int type:1;
        unsigned int didFallbackToInfraToAvoidP2POverDFS:1;
    } _has;
}

@property(nonatomic) int infraSNR; // @synthesize infraSNR=_infraSNR;
@property(nonatomic) int infraCCA; // @synthesize infraCCA=_infraCCA;
@property(nonatomic) int awdlCCA; // @synthesize awdlCCA=_awdlCCA;
@property(nonatomic) int infraRSSI; // @synthesize infraRSSI=_infraRSSI;
@property(nonatomic) int awdlRSSI; // @synthesize awdlRSSI=_awdlRSSI;
@property(nonatomic) _Bool didFallbackToInfraToAvoidP2POverDFS; // @synthesize didFallbackToInfraToAvoidP2POverDFS=_didFallbackToInfraToAvoidP2POverDFS;
@property(nonatomic) unsigned int postAuthMs; // @synthesize postAuthMs=_postAuthMs;
@property(nonatomic) unsigned int authMs; // @synthesize authMs=_authMs;
@property(nonatomic) unsigned int secureConnectionMs; // @synthesize secureConnectionMs=_secureConnectionMs;
@property(nonatomic) unsigned int infoMs; // @synthesize infoMs=_infoMs;
@property(nonatomic) unsigned int connectMs; // @synthesize connectMs=_connectMs;
@property(nonatomic) unsigned int bonjourMs; // @synthesize bonjourMs=_bonjourMs;
@property(nonatomic) unsigned int audioOnly; // @synthesize audioOnly=_audioOnly;
@property(nonatomic) unsigned int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long fileBytes; // @synthesize fileBytes=_fileBytes;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *serverVersion; // @synthesize serverVersion=_serverVersion;
@property(retain, nonatomic) NSString *serverModel; // @synthesize serverModel=_serverModel;
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
@property(nonatomic) _Bool hasInfraSNR;
@property(nonatomic) _Bool hasInfraCCA;
@property(nonatomic) _Bool hasAwdlCCA;
@property(nonatomic) _Bool hasInfraRSSI;
@property(nonatomic) _Bool hasAwdlRSSI;
@property(nonatomic) _Bool hasDidFallbackToInfraToAvoidP2POverDFS;
@property(nonatomic) _Bool hasPostAuthMs;
@property(nonatomic) _Bool hasAuthMs;
@property(nonatomic) _Bool hasSecureConnectionMs;
@property(nonatomic) _Bool hasInfoMs;
@property(nonatomic) _Bool hasConnectMs;
@property(nonatomic) _Bool hasBonjourMs;
@property(nonatomic) _Bool hasAudioOnly;
@property(nonatomic) _Bool hasBitrate;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasFileBytes;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasServerVersion;
@property(readonly, nonatomic) _Bool hasServerModel;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

