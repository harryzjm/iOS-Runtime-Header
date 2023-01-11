//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMApplicationInstallDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadApplication;
    NSNumber *_payloadMandatory;
    NSNumber *_payloadInstallWhenActivated;
    NSNumber *_payloadRemoveWhenDeactivated;
    NSNumber *_payloadManageData;
    NSString *_payloadVPNUUID;
    NSNumber *_payloadPreventDataBackup;
    CEMAnyPayload *_payloadConfiguration;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3 withInstallWhenActivated:(id)arg4 withRemoveWhenDeactivated:(id)arg5 withManageData:(id)arg6 withVPNUUID:(id)arg7 withPreventDataBackup:(id)arg8 withConfiguration:(id)arg9;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) CEMAnyPayload *payloadConfiguration; // @synthesize payloadConfiguration=_payloadConfiguration;
@property(copy, nonatomic) NSNumber *payloadPreventDataBackup; // @synthesize payloadPreventDataBackup=_payloadPreventDataBackup;
@property(copy, nonatomic) NSString *payloadVPNUUID; // @synthesize payloadVPNUUID=_payloadVPNUUID;
@property(copy, nonatomic) NSNumber *payloadManageData; // @synthesize payloadManageData=_payloadManageData;
@property(copy, nonatomic) NSNumber *payloadRemoveWhenDeactivated; // @synthesize payloadRemoveWhenDeactivated=_payloadRemoveWhenDeactivated;
@property(copy, nonatomic) NSNumber *payloadInstallWhenActivated; // @synthesize payloadInstallWhenActivated=_payloadInstallWhenActivated;
@property(copy, nonatomic) NSNumber *payloadMandatory; // @synthesize payloadMandatory=_payloadMandatory;
@property(copy, nonatomic) NSString *payloadApplication; // @synthesize payloadApplication=_payloadApplication;
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

