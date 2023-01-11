//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAssetBaseDescriptor, NSString;

@interface CEMApplicationAnyDeclaration <CEMRegisteredTypeProtocol>
{
    CEMAssetBaseDescriptor *_payloadDescriptor;
    NSString *_payloadBundleIdentifier;
    NSString *_payloadDesignatedRequirement;
    NSString *_payloadSigningIdentifier;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withDesignatedRequirement:(id)arg4 withSigningIdentifier:(id)arg5;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadSigningIdentifier; // @synthesize payloadSigningIdentifier=_payloadSigningIdentifier;
@property(copy, nonatomic) NSString *payloadDesignatedRequirement; // @synthesize payloadDesignatedRequirement=_payloadDesignatedRequirement;
@property(copy, nonatomic) NSString *payloadBundleIdentifier; // @synthesize payloadBundleIdentifier=_payloadBundleIdentifier;
@property(copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // @synthesize payloadDescriptor=_payloadDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
