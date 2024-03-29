//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SAMLKeyRetrievalMethod, SAMLPGPData, SAMLSignatureKeyValue, SAMLX509Data;

__attribute__((visibility("hidden")))
@interface SAMLKeyInfo
{
}

+ (id)createElement:(id *)arg1;
@property(readonly, nonatomic) NSString *mgmtData;
@property(readonly, nonatomic) NSData *spkiSexpData;
@property(readonly, nonatomic) SAMLPGPData *pgpData;
@property(readonly, nonatomic) SAMLX509Data *x509Data;
@property(readonly, nonatomic) SAMLKeyRetrievalMethod *retrievalMethod;
@property(readonly, nonatomic) SAMLSignatureKeyValue *keyValue;
@property(readonly, nonatomic) NSString *keyName;
@property(readonly, nonatomic) NSString *identifier;

@end

