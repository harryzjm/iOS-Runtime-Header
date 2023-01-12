//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface NPKProtoGenerateISOEncryptionCertificateForSubCredentialIdResponse : PBCodable <NSCopying>
{
    NSMutableArray *_attestations;
    NSData *_authorization;
    NSData *_errorData;
}

+ (Class)attestationType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *authorization; // @synthesize authorization=_authorization;
@property(retain, nonatomic) NSMutableArray *attestations; // @synthesize attestations=_attestations;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasErrorData;
@property(readonly, nonatomic) _Bool hasAuthorization;
- (id)attestationAtIndex:(unsigned long long)arg1;
- (unsigned long long)attestationsCount;
- (void)addAttestation:(id)arg1;
- (void)clearAttestations;

@end
