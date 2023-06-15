//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreIDCred/NSObject-Protocol.h>

@class DCCredentialAuthorizationToken, DCCredentialNonce, DCCredentialTrust, NSData, NSString;

@protocol DCBiometricStoreXPCProtocol <NSObject>
- (void)getProgenitorKeyAttestation:(void (^)(DCCredentialAttestation *, NSError *))arg1;
- (void)getCASDCertificate:(void (^)(NSData *, NSError *))arg1;
- (void)credentialAuthenticationTokenStatus:(void (^)(unsigned long long, NSError *))arg1;
- (void)migratePrearmTrustBlob:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)generatePrearmTrustCertificateWithNonce:(NSData *)arg1 pairingID:(NSString *)arg2 completion:(void (^)(DCCredentialTrust *, NSError *))arg3;
- (void)generatePhoneTokenWithNonce:(DCCredentialNonce *)arg1 keyBlob:(NSData *)arg2 pairingID:(NSString *)arg3 completion:(void (^)(DCCredentialAuthorizationToken *, NSError *))arg4;
- (void)revokeCredentialAuthorizationToken:(void (^)(NSError *))arg1;
- (void)globalAuthACLTemplateUUIDsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)deleteGlobalAuthACLWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)globalAuthACLWithCompletion:(void (^)(DCCredentialAuthACL *, NSError *))arg1;
- (void)setModifiedGlobalAuthACL:(NSData *)arg1 externalizedLAContext:(NSData *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)setGlobalAuthACL:(NSData *)arg1 ofType:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)passcodeBindingUnboundACL:(void (^)(NSData *, NSError *))arg1;
- (void)bioBindingUnboundACL:(void (^)(NSData *, NSError *))arg1;
- (void)establishPrearmTrustV2:(DCCredentialTrust *)arg1 completion:(void (^)(DCCredentialAttestation *, NSError *))arg2;
- (void)prearmCredentialWithAuthorizationToken:(DCCredentialAuthorizationToken *)arg1 completion:(void (^)(NSError *))arg2;
- (void)nonceForAuthorizationTokenWithCompletion:(void (^)(DCCredentialNonce *, NSError *))arg1;
@end

