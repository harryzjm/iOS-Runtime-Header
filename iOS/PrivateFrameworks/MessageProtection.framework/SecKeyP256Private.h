//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageProtection/P256PrivateKeyProtocol-Protocol.h>

@class NSData, NSString, SecKeyP256Public;

__attribute__((visibility("hidden")))
@interface SecKeyP256Private : NSObject <P256PrivateKeyProtocol>
{
    id _privateKey;
    NSData *_privateKeyBlob;
    SecKeyP256Public *_publicKey;
}

+ (id)generateWithAccessControl:(struct __CFString *)arg1;
+ (id)generate;
+ (const struct __CFString *)defaultProtectionClassForPlatform;
- (void).cxx_destruct;
@property(retain, nonatomic) SecKeyP256Public *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, nonatomic) NSData *privateKeyBlob; // @synthesize privateKeyBlob=_privateKeyBlob;
@property(readonly, nonatomic) id privateKey; // @synthesize privateKey=_privateKey;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)keychainData;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)keyAgreement:(id)arg1 error:(id *)arg2 isRetry:(_Bool)arg3;
- (id)keyAgreement:(id)arg1 error:(id *)arg2;
- (id)getPrivateKeyRefWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
