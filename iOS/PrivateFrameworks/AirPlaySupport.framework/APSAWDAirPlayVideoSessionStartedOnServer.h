//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayVideoSessionStartedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _audioOnly;
    unsigned int _clientAuthMs;
    unsigned int _clientBonjourMs;
    unsigned int _clientConnectMs;
    unsigned int _clientInfoMs;
    NSString *_clientModel;
    unsigned int _clientPostAuthMs;
    unsigned int _clientSecureConnectionMs;
    NSString *_clientVersion;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    unsigned int _type;
    struct {
        unsigned int timestamp:1;
        unsigned int audioOnly:1;
        unsigned int clientAuthMs:1;
        unsigned int clientBonjourMs:1;
        unsigned int clientConnectMs:1;
        unsigned int clientInfoMs:1;
        unsigned int clientPostAuthMs:1;
        unsigned int clientSecureConnectionMs:1;
        unsigned int status:1;
        unsigned int transportType:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) unsigned int clientPostAuthMs; // @synthesize clientPostAuthMs=_clientPostAuthMs;
@property(nonatomic) unsigned int clientAuthMs; // @synthesize clientAuthMs=_clientAuthMs;
@property(nonatomic) unsigned int clientSecureConnectionMs; // @synthesize clientSecureConnectionMs=_clientSecureConnectionMs;
@property(nonatomic) unsigned int clientInfoMs; // @synthesize clientInfoMs=_clientInfoMs;
@property(nonatomic) unsigned int clientConnectMs; // @synthesize clientConnectMs=_clientConnectMs;
@property(nonatomic) unsigned int clientBonjourMs; // @synthesize clientBonjourMs=_clientBonjourMs;
@property(nonatomic) unsigned int audioOnly; // @synthesize audioOnly=_audioOnly;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientModel; // @synthesize clientModel=_clientModel;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
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
@property(nonatomic) _Bool hasClientPostAuthMs;
@property(nonatomic) _Bool hasClientAuthMs;
@property(nonatomic) _Bool hasClientSecureConnectionMs;
@property(nonatomic) _Bool hasClientInfoMs;
@property(nonatomic) _Bool hasClientConnectMs;
@property(nonatomic) _Bool hasClientBonjourMs;
@property(nonatomic) _Bool hasAudioOnly;
@property(readonly, nonatomic) _Bool hasClientVersion;
@property(readonly, nonatomic) _Bool hasClientModel;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end
