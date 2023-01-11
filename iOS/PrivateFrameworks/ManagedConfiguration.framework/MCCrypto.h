//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCCrypto : NSObject
{
}

+ (id)storedActivationLockBypassCodeHash;
+ (void)clearStoredActivationLockHash;
+ (void)clearStoredActivationLockBypassCode;
+ (id)storedActivationLockBypassCodeWithOutError:(id *)arg1;
+ (id)storeActivationLockBypassCode:(id)arg1 hash:(id)arg2;
+ (void)createNewActivationLockBypassCodeOutCode:(char *)arg1 outRawBytes:(char *)arg2 outHash:(char *)arg3;
+ (id)createAndStoreNewActivationLockBypassCodeAndHash;
+ (id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;
+ (id)objectFromEncryptedData:(id)arg1 outCertificate:(struct __SecCertificate **)arg2 outError:(id *)arg3;
+ (id)_decryptionFailedErrorWithUnderlyingError:(id)arg1;
+ (_Bool)isValidPKCS12Data:(id)arg1;
+ (struct __SecCertificate *)copyCertificateRefFromPEMData:(id)arg1;
+ (struct __SecCertificate *)copyCertificateRefFromPKCS1Data:(id)arg1;

@end
