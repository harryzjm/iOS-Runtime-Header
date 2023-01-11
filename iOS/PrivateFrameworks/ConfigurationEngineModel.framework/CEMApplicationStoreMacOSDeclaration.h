//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMApplicationStoreMacOSDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadRestrictStoreRequireAdminToInstall;
    NSNumber *_payloadRestrictStoreSoftwareupdateOnly;
    NSNumber *_payloadRestrictStoreDisableAppAdoption;
    NSNumber *_payloadDisableSoftwareUpdateNotifications;
    NSNumber *_payloadRestrictStoreMdmInstallSoftwareupdateOnly;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withRestrictStoreRequireAdminToInstall:(id)arg2 withRestrictStoreSoftwareupdateOnly:(id)arg3 withRestrictStoreDisableAppAdoption:(id)arg4 withDisableSoftwareUpdateNotifications:(id)arg5 withRestrictStoreMdmInstallSoftwareupdateOnly:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreMdmInstallSoftwareupdateOnly; // @synthesize payloadRestrictStoreMdmInstallSoftwareupdateOnly=_payloadRestrictStoreMdmInstallSoftwareupdateOnly;
@property(copy, nonatomic) NSNumber *payloadDisableSoftwareUpdateNotifications; // @synthesize payloadDisableSoftwareUpdateNotifications=_payloadDisableSoftwareUpdateNotifications;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreDisableAppAdoption; // @synthesize payloadRestrictStoreDisableAppAdoption=_payloadRestrictStoreDisableAppAdoption;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreSoftwareupdateOnly; // @synthesize payloadRestrictStoreSoftwareupdateOnly=_payloadRestrictStoreSoftwareupdateOnly;
@property(copy, nonatomic) NSNumber *payloadRestrictStoreRequireAdminToInstall; // @synthesize payloadRestrictStoreRequireAdminToInstall=_payloadRestrictStoreRequireAdminToInstall;
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
