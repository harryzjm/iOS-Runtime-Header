//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMMediaInstallDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadMedia;
    NSNumber *_payloadMandatory;
    NSNumber *_payloadInstallWhenActivated;
    NSNumber *_payloadRemoveWhenDeactivated;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withMedia:(id)arg2 withMandatory:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withMedia:(id)arg2 withMandatory:(id)arg3 withInstallWhenActivated:(id)arg4 withRemoveWhenDeactivated:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadRemoveWhenDeactivated; // @synthesize payloadRemoveWhenDeactivated=_payloadRemoveWhenDeactivated;
@property(copy, nonatomic) NSNumber *payloadInstallWhenActivated; // @synthesize payloadInstallWhenActivated=_payloadInstallWhenActivated;
@property(copy, nonatomic) NSNumber *payloadMandatory; // @synthesize payloadMandatory=_payloadMandatory;
@property(copy, nonatomic) NSString *payloadMedia; // @synthesize payloadMedia=_payloadMedia;
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
