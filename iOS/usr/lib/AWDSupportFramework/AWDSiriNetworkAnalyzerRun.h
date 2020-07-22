//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDSiriNetworkAnalyzerRun : PBCodable <NSCopying>
{
    unsigned long long _gatewayPingDuration;
    unsigned long long _knownURLLoadDuration;
    unsigned long long _siriSaltURLLoadDuration;
    unsigned long long _siriURLLoadDuration;
    unsigned long long _timestamp;
    unsigned int _gatewayPingsDropped;
    unsigned int _gatewayPingsSent;
    int _gatewayStatus;
    int _interface;
    int _sendBufferBytesRemaining;
    _Bool _analyzingSuccessfulRetry;
    _Bool _isUserRequest;
    _Bool _wwanPreferred;
    struct {
        unsigned int gatewayPingDuration:1;
        unsigned int knownURLLoadDuration:1;
        unsigned int siriSaltURLLoadDuration:1;
        unsigned int siriURLLoadDuration:1;
        unsigned int timestamp:1;
        unsigned int gatewayPingsDropped:1;
        unsigned int gatewayPingsSent:1;
        unsigned int gatewayStatus:1;
        unsigned int interface:1;
        unsigned int sendBufferBytesRemaining:1;
        unsigned int analyzingSuccessfulRetry:1;
        unsigned int isUserRequest:1;
        unsigned int wwanPreferred:1;
    } _has;
}

@property(nonatomic) unsigned int gatewayPingsDropped; // @synthesize gatewayPingsDropped=_gatewayPingsDropped;
@property(nonatomic) unsigned int gatewayPingsSent; // @synthesize gatewayPingsSent=_gatewayPingsSent;
@property(nonatomic) unsigned long long gatewayPingDuration; // @synthesize gatewayPingDuration=_gatewayPingDuration;
@property(nonatomic) int gatewayStatus; // @synthesize gatewayStatus=_gatewayStatus;
@property(nonatomic) unsigned long long siriSaltURLLoadDuration; // @synthesize siriSaltURLLoadDuration=_siriSaltURLLoadDuration;
@property(nonatomic) unsigned long long siriURLLoadDuration; // @synthesize siriURLLoadDuration=_siriURLLoadDuration;
@property(nonatomic) unsigned long long knownURLLoadDuration; // @synthesize knownURLLoadDuration=_knownURLLoadDuration;
@property(nonatomic) int sendBufferBytesRemaining; // @synthesize sendBufferBytesRemaining=_sendBufferBytesRemaining;
@property(nonatomic) _Bool wwanPreferred; // @synthesize wwanPreferred=_wwanPreferred;
@property(nonatomic) _Bool analyzingSuccessfulRetry; // @synthesize analyzingSuccessfulRetry=_analyzingSuccessfulRetry;
@property(nonatomic) _Bool isUserRequest; // @synthesize isUserRequest=_isUserRequest;
@property(nonatomic) int interface; // @synthesize interface=_interface;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasGatewayPingsDropped;
@property(nonatomic) _Bool hasGatewayPingsSent;
@property(nonatomic) _Bool hasGatewayPingDuration;
@property(nonatomic) _Bool hasGatewayStatus;
@property(nonatomic) _Bool hasSiriSaltURLLoadDuration;
@property(nonatomic) _Bool hasSiriURLLoadDuration;
@property(nonatomic) _Bool hasKnownURLLoadDuration;
@property(nonatomic) _Bool hasSendBufferBytesRemaining;
@property(nonatomic) _Bool hasWwanPreferred;
@property(nonatomic) _Bool hasAnalyzingSuccessfulRetry;
@property(nonatomic) _Bool hasIsUserRequest;
@property(nonatomic) _Bool hasInterface;
@property(nonatomic) _Bool hasTimestamp;

@end

