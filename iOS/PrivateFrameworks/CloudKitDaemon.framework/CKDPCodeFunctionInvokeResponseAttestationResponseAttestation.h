//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface CKDPCodeFunctionInvokeResponseAttestationResponseAttestation : PBCodable
{
    NSData *_appQuote;
    NSData *_aqeQuote;
    NSString *_pckCertificate;
    NSData *_routingToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *routingToken; // @synthesize routingToken=_routingToken;
@property(retain, nonatomic) NSString *pckCertificate; // @synthesize pckCertificate=_pckCertificate;
@property(retain, nonatomic) NSData *aqeQuote; // @synthesize aqeQuote=_aqeQuote;
@property(retain, nonatomic) NSData *appQuote; // @synthesize appQuote=_appQuote;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRoutingToken;
@property(readonly, nonatomic) _Bool hasPckCertificate;
@property(readonly, nonatomic) _Bool hasAqeQuote;
@property(readonly, nonatomic) _Bool hasAppQuote;

@end

