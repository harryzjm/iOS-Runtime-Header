//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraStreamMessaging : PBCodable
{
    unsigned int _receivedConnSetup;
    unsigned int _receivedNegotiationRequest;
    unsigned int _receivedStartRequest;
    unsigned int _sentConnSetup;
    unsigned int _sentNegotiationRequest;
    unsigned int _sentNegotiationResponse;
    unsigned int _sentStartRequest;
    unsigned int _sentStartResponse;
    struct {
        unsigned int receivedConnSetup:1;
        unsigned int receivedNegotiationRequest:1;
        unsigned int receivedStartRequest:1;
        unsigned int sentConnSetup:1;
        unsigned int sentNegotiationRequest:1;
        unsigned int sentNegotiationResponse:1;
        unsigned int sentStartRequest:1;
        unsigned int sentStartResponse:1;
    } _has;
}

@property(nonatomic) unsigned int receivedConnSetup; // @synthesize receivedConnSetup=_receivedConnSetup;
@property(nonatomic) unsigned int sentConnSetup; // @synthesize sentConnSetup=_sentConnSetup;
@property(nonatomic) unsigned int sentStartResponse; // @synthesize sentStartResponse=_sentStartResponse;
@property(nonatomic) unsigned int sentStartRequest; // @synthesize sentStartRequest=_sentStartRequest;
@property(nonatomic) unsigned int receivedStartRequest; // @synthesize receivedStartRequest=_receivedStartRequest;
@property(nonatomic) unsigned int sentNegotiationResponse; // @synthesize sentNegotiationResponse=_sentNegotiationResponse;
@property(nonatomic) unsigned int sentNegotiationRequest; // @synthesize sentNegotiationRequest=_sentNegotiationRequest;
@property(nonatomic) unsigned int receivedNegotiationRequest; // @synthesize receivedNegotiationRequest=_receivedNegotiationRequest;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasReceivedConnSetup;
@property(nonatomic) _Bool hasSentConnSetup;
@property(nonatomic) _Bool hasSentStartResponse;
@property(nonatomic) _Bool hasSentStartRequest;
@property(nonatomic) _Bool hasReceivedStartRequest;
@property(nonatomic) _Bool hasSentNegotiationResponse;
@property(nonatomic) _Bool hasSentNegotiationRequest;
@property(nonatomic) _Bool hasReceivedNegotiationRequest;

@end

