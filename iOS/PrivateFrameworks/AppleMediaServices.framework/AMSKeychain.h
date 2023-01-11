//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AMSKeychain : NSObject
{
}

+ (id)_resumptionHeadersQuery;
+ (id)_legacyAttestationForOptions:(id)arg1 error:(id *)arg2;
+ (_Bool)_generateLegacyKeypairForOptions:(id)arg1 error:(id *)arg2;
+ (void)_deleteResumptionHeaders;
+ (struct __SecKey *)_copyLegacyPublicKeyForOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)_copyLegacyPrivateKeyForOptions:(id)arg1 error:(id *)arg2;
+ (id)_certificatePrivateKeyLabelForOptions:(id)arg1;
+ (id)_ssKeychainLabelForAccount:(id)arg1 options:(id)arg2;
+ (id)_ssCertificateKeychainLabelForAccount:(id)arg1 options:(id)arg2;
+ (id)_primaryConstraintsWithOptions:(id)arg1;
+ (id)_primaryConstraintsForWatch;
+ (id)_primaryConstraintsForMac;
+ (id)_primaryConstraints;
+ (id)_extendedConstraintsWithOptions:(id)arg1;
+ (struct __SecAccessControl *)createAccessControlRefWithOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecAccessControl *)copyAccessControlRefWithAccount:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)keychainLabelForOptions:(id)arg1;
+ (id)certificateKeychainLabelsForOptions:(id)arg1;
+ (id)legacyAttestationForOptions:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteKeyPairWithOptions:(id)arg1 error:(id *)arg2;
+ (void)stashResumptionHeaders:(id)arg1;
+ (id)resumptionHeaders;
+ (_Bool)performForwardKeyMigrationForDSID:(id)arg1 forceMigration:(_Bool)arg2;
+ (_Bool)storePrimaryCert:(struct __SecCertificate *)arg1 intermediateCert:(struct __SecCertificate *)arg2 privateKey:(struct __SecKey *)arg3 options:(id)arg4 error:(id *)arg5;
+ (_Bool)deleteCertificateChainWithOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)copyPublicKeyForOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)copyPublicKeyForAccount:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (struct __SecKey *)copyPrivateKeyWithContext:(id)arg1 account:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (struct __SecKey *)copyCertificatePrivateKeyWithContext:(id)arg1 account:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (struct __SecKey *)copyPrivateKeyWithContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)certificateChainStringsForOptions:(id)arg1 error:(id *)arg2;

@end
