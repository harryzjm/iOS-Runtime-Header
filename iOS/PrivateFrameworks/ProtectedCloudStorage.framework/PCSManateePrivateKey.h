//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface PCSManateePrivateKey : PBCodable
{
    NSData *_privateKey;
    NSData *_publicKeyInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *publicKeyInfo; // @synthesize publicKeyInfo=_publicKeyInfo;
@property(retain, nonatomic) NSData *privateKey; // @synthesize privateKey=_privateKey;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPublicKeyInfo;
@property(readonly, nonatomic) _Bool hasPrivateKey;

@end

