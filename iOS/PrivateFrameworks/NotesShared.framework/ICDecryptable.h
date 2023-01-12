//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface ICDecryptable : NSObject
{
    NSData *_encryptedData;
    NSData *_cryptoTag;
    NSData *_cryptoInitializationVector;
    NSData *_fallbackCryptoTag;
    NSData *_fallbackCryptoInitializationVector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *fallbackCryptoInitializationVector; // @synthesize fallbackCryptoInitializationVector=_fallbackCryptoInitializationVector;
@property(retain, nonatomic) NSData *fallbackCryptoTag; // @synthesize fallbackCryptoTag=_fallbackCryptoTag;
@property(retain, nonatomic) NSData *cryptoInitializationVector; // @synthesize cryptoInitializationVector=_cryptoInitializationVector;
@property(retain, nonatomic) NSData *cryptoTag; // @synthesize cryptoTag=_cryptoTag;
@property(retain, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(readonly, nonatomic) _Bool isValid;
- (id)initWithEncryptedData:(id)arg1 cryptoTag:(id)arg2 cryptoInitializationVector:(id)arg3 fallbackCryptoTag:(id)arg4 fallbackCryptoInitializationVector:(id)arg5;
- (id)initWithEncryptedData:(id)arg1 cryptoTag:(id)arg2 cryptoInitializationVector:(id)arg3;

@end
