//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSecuritySettingsDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowUntrustedTLSPrompt;
    NSNumber *_payloadAllowOTAPKIUpdates;
    NSNumber *_payloadForceEncryptedBackup;
    NSNumber *_payloadAllowEraseContentAndSettings;
    NSNumber *_payloadAllowEnablingRestrictions;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowUntrustedTLSPrompt:(id)arg2 withAllowOTAPKIUpdates:(id)arg3 withForceEncryptedBackup:(id)arg4 withAllowEraseContentAndSettings:(id)arg5 withAllowEnablingRestrictions:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowEnablingRestrictions; // @synthesize payloadAllowEnablingRestrictions=_payloadAllowEnablingRestrictions;
@property(copy, nonatomic) NSNumber *payloadAllowEraseContentAndSettings; // @synthesize payloadAllowEraseContentAndSettings=_payloadAllowEraseContentAndSettings;
@property(copy, nonatomic) NSNumber *payloadForceEncryptedBackup; // @synthesize payloadForceEncryptedBackup=_payloadForceEncryptedBackup;
@property(copy, nonatomic) NSNumber *payloadAllowOTAPKIUpdates; // @synthesize payloadAllowOTAPKIUpdates=_payloadAllowOTAPKIUpdates;
@property(copy, nonatomic) NSNumber *payloadAllowUntrustedTLSPrompt; // @synthesize payloadAllowUntrustedTLSPrompt=_payloadAllowUntrustedTLSPrompt;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

