//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitMessageTransported : PBCodable <NSCopying>
{
    unsigned long long _payloadSize;
    unsigned long long _timestamp;
    int _direction;
    NSString *_identifier;
    int _messageType;
    NSString *_transactionID;
    int _transport;
    _Bool _isSecure;
    struct {
        unsigned int payloadSize:1;
        unsigned int timestamp:1;
        unsigned int direction:1;
        unsigned int messageType:1;
        unsigned int transport:1;
        unsigned int isSecure:1;
    } _has;
}

@property(nonatomic) _Bool isSecure; // @synthesize isSecure=_isSecure;
@property(retain, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long payloadSize; // @synthesize payloadSize=_payloadSize;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsDirection:(id)arg1;
- (id)directionAsString:(int)arg1;
@property(nonatomic) _Bool hasDirection;
@property(nonatomic) int direction; // @synthesize direction=_direction;
- (int)StringAsTransport:(id)arg1;
- (id)transportAsString:(int)arg1;
@property(nonatomic) _Bool hasTransport;
@property(nonatomic) int transport; // @synthesize transport=_transport;
- (int)StringAsMessageType:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMessageType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(nonatomic) _Bool hasIsSecure;
@property(readonly, nonatomic) _Bool hasTransactionID;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasPayloadSize;
@property(nonatomic) _Bool hasTimestamp;

@end
