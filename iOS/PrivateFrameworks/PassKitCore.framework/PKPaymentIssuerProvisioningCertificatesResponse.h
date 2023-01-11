//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface PKPaymentIssuerProvisioningCertificatesResponse
{
    NSArray *_certificates;
    NSData *_nonce;
    NSData *_publicKeyHash;
    NSData *_nonceSignature;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *nonceSignature; // @synthesize nonceSignature=_nonceSignature;
@property(copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (id)initWithData:(id)arg1;

@end
