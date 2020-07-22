//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface TKTokenKeychainKey
{
    _Bool _canDecrypt;
    _Bool _canSign;
    _Bool _canPerformKeyExchange;
    _Bool _suitableForLogin;
    NSString *_keyType;
    NSData *_applicationTag;
    long long _keySizeInBits;
    NSData *_publicKeyData;
    NSData *_publicKeyHash;
}

@property(getter=isSuitableForLogin) _Bool suitableForLogin; // @synthesize suitableForLogin=_suitableForLogin;
@property _Bool canPerformKeyExchange; // @synthesize canPerformKeyExchange=_canPerformKeyExchange;
@property _Bool canSign; // @synthesize canSign=_canSign;
@property _Bool canDecrypt; // @synthesize canDecrypt=_canDecrypt;
@property(copy) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(copy) NSData *publicKeyData; // @synthesize publicKeyData=_publicKeyData;
@property long long keySizeInBits; // @synthesize keySizeInBits=_keySizeInBits;
@property(copy) NSData *applicationTag; // @synthesize applicationTag=_applicationTag;
@property(copy) NSString *keyType; // @synthesize keyType=_keyType;
- (void).cxx_destruct;
- (_Bool)satisfiesKeyUsage:(unsigned long long)arg1;
@property(readonly) unsigned long long keyUsage;
- (void)createConstraints:(unsigned char)arg1;
- (id)keychainAttributes;
- (id)initWithCertificate:(struct __SecCertificate *)arg1 objectID:(id)arg2;

@end

