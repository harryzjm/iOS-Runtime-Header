//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/ASAuthorizationPublicKeyCredentialRegistrationRequest-Protocol.h>

@class ASCPublicKeyCredentialCreationOptions, NSData, NSString;

@interface ASAuthorizationPlatformPublicKeyCredentialRegistrationRequest <ASAuthorizationPublicKeyCredentialRegistrationRequest>
{
    NSString *_relyingPartyIdentifier;
    NSData *_userID;
    NSString *_displayName;
    NSString *_name;
    NSData *_challenge;
    NSString *_userVerificationPreference;
    NSString *_attestationPreference;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attestationPreference; // @synthesize attestationPreference=_attestationPreference;
@property(retain, nonatomic) NSString *userVerificationPreference; // @synthesize userVerificationPreference=_userVerificationPreference;
@property(copy, nonatomic) NSData *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSData *userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // @synthesize relyingPartyIdentifier=_relyingPartyIdentifier;
@property(readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
- (id)_initWithProvider:(id)arg1 relyingPartyIdentifier:(id)arg2 challenge:(id)arg3 name:(id)arg4 userID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
