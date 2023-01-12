//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

@interface CKDPCodeFunctionInvokeResponse : PBCodable
{
    CKDPCodeFunctionInvokeResponseAttestationResponse *_attestationResponse;
    NSData *_serializedResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKDPCodeFunctionInvokeResponseAttestationResponse *attestationResponse; // @synthesize attestationResponse=_attestationResponse;
@property(retain, nonatomic) NSData *serializedResult; // @synthesize serializedResult=_serializedResult;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAttestationResponse;
@property(readonly, nonatomic) _Bool hasSerializedResult;

@end

