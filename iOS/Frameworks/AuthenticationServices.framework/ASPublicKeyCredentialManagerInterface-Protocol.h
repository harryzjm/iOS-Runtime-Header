//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class ASCPlatformPublicKeyCredentialAssertion, ASCPlatformPublicKeyCredentialLoginChoice, ASCPublicKeyCredentialAssertionOptions, ASCPublicKeyCredentialCreationOptions, ASCSecurityKeyPublicKeyCredentialLoginChoice, ASGlobalFrameIdentifier, LAContext, NSArray, NSError, NSObject, NSString, NSUUID, WBSGlobalFrameIdentifier, WBSPair, WBSPublicKeyCredentialIdentifier, WBSSavedAccountContext;
@protocol ASPasskeyAutoFillManagerDelegate, ASPublicKeyCredentialManagerDelegate, OS_os_activity;

@protocol ASPublicKeyCredentialManagerInterface <NSObject>
@property(retain, nonatomic) id <ASPasskeyAutoFillManagerDelegate> passkeyAutoFillManagerDelegate;
- (void)completeAssertionWithExternalPasskeyForApplicationIdentifier:(NSString *)arg1 usingCredential:(ASCPlatformPublicKeyCredentialAssertion *)arg2;
- (void)completeAssertionWithExternalPasskeyForWebFrameIdentifier:(WBSGlobalFrameIdentifier *)arg1 usingCredential:(ASCPlatformPublicKeyCredentialAssertion *)arg2;
- (void)getExternalLoginChoiceForApplicationIdentifier:(NSString *)arg1 relyingPartyIdentifier:(NSString *)arg2 credentialID:(NSString *)arg3 completionHandler:(void (^)(ASCPlatformPublicKeyCredentialLoginChoice *))arg4;
- (void)getExternalLoginChoiceForWebFrameIdentifier:(WBSGlobalFrameIdentifier *)arg1 relyingPartyIdentifier:(NSString *)arg2 credentialID:(NSString *)arg3 completionHandler:(void (^)(ASCPlatformPublicKeyCredentialLoginChoice *))arg4;
- (NSArray *)allPasskeysDataForRelyingParty:(NSString *)arg1;
- (NSArray *)browserPasskeysForRelyingParty:(NSString *)arg1;
- (WBSPair *)encodeGetAssertionCommandWithOptions:(ASCPublicKeyCredentialAssertionOptions *)arg1 authenticatorUserVerificationAvailability:(unsigned long long)arg2 authenticatorSupportedExtensions:(NSArray *)arg3;
- (WBSPair *)encodeMakeCredentialCommandWithOptions:(ASCPublicKeyCredentialCreationOptions *)arg1 authenticatorUserVerificationAvailability:(unsigned long long)arg2 authenticatorSupportedExtensions:(NSArray *)arg3;
- (void)cancelOperationIfNecessaryWithUUID:(NSUUID *)arg1 overrideError:(NSError *)arg2;
- (void)clearAllCredentials;
- (void)assertUsingSecurityKeyCredentialForLoginChoice:(ASCSecurityKeyPublicKeyCredentialLoginChoice *)arg1;
- (NSUUID *)beginCreatingNewSecurityKeyCredentialIfAvailableWithOptions:(ASCPublicKeyCredentialCreationOptions *)arg1 delegate:(id <ASPublicKeyCredentialManagerDelegate>)arg2 webFrameIdentifier:(ASGlobalFrameIdentifier *)arg3 parentActivity:(NSObject<OS_os_activity> *)arg4;
- (void)presentCABLESheetForOperationUUID:(NSUUID *)arg1 withCompletionHandler:(void (^)(_Bool))arg2;
- (void)assertUsingAutoFillPasskeyWithIdentifier:(WBSPublicKeyCredentialIdentifier *)arg1 authenticatedContext:(LAContext *)arg2 savedAccountContext:(WBSSavedAccountContext *)arg3 forOperationUUID:(NSUUID *)arg4;
- (WBSPair *)autoFillPasskeysForOperationUUID:(NSUUID *)arg1;
- (NSUUID *)autoFillOperationUUIDForWebFrameIdentifier:(ASGlobalFrameIdentifier *)arg1;
- (NSUUID *)autoFillOperationUUIDForApplicationIdentifier:(NSString *)arg1;
- (void)assertUsingPlatformCredentialForLoginChoice:(ASCPlatformPublicKeyCredentialLoginChoice *)arg1 authenticatedContext:(LAContext *)arg2;
- (NSUUID *)createNewPlatformCredentialWithOptions:(ASCPublicKeyCredentialCreationOptions *)arg1 authenticatedContext:(LAContext *)arg2 delegate:(id <ASPublicKeyCredentialManagerDelegate>)arg3 webFrameIdentifier:(ASGlobalFrameIdentifier *)arg4 parentActivity:(NSObject<OS_os_activity> *)arg5;
- (NSUUID *)beginAssertionsWithOptions:(NSArray *)arg1 forProcessWithApplicationIdentifier:(NSString *)arg2 delegate:(id <ASPublicKeyCredentialManagerDelegate>)arg3 requestStyle:(long long)arg4 webFrameIdentifier:(ASGlobalFrameIdentifier *)arg5 parentActivity:(NSObject<OS_os_activity> *)arg6;
@end

