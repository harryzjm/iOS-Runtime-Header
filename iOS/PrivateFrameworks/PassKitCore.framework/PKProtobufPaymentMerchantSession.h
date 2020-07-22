//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying>
{
    unsigned long long _epochTimestamp;
    NSString *_displayName;
    NSString *_domain;
    NSString *_merchantIdentifier;
    NSString *_nonce;
    NSString *_retryNonce;
    NSString *_sessionIdentifier;
    NSData *_signature;
    struct {
        unsigned int epochTimestamp:1;
    } _has;
}

@property(retain, nonatomic) NSString *retryNonce; // @synthesize retryNonce=_retryNonce;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned long long epochTimestamp; // @synthesize epochTimestamp=_epochTimestamp;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
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
@property(readonly, nonatomic) _Bool hasRetryNonce;
@property(readonly, nonatomic) _Bool hasSignature;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasEpochTimestamp;
@property(readonly, nonatomic) _Bool hasNonce;
@property(readonly, nonatomic) _Bool hasSessionIdentifier;
@property(readonly, nonatomic) _Bool hasMerchantIdentifier;

@end

