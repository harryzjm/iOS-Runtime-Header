//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemAirPrintSettingsDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowAirPrint;
    NSNumber *_payloadForceAirPrintTrustedTLSRequirement;
    NSNumber *_payloadAllowAirPrintiBeaconDiscovery;
    NSNumber *_payloadAllowAirPrintCredentialsStorage;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowAirPrint:(id)arg2 withForceAirPrintTrustedTLSRequirement:(id)arg3 withAllowAirPrintiBeaconDiscovery:(id)arg4 withAllowAirPrintCredentialsStorage:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowAirPrintCredentialsStorage; // @synthesize payloadAllowAirPrintCredentialsStorage=_payloadAllowAirPrintCredentialsStorage;
@property(copy, nonatomic) NSNumber *payloadAllowAirPrintiBeaconDiscovery; // @synthesize payloadAllowAirPrintiBeaconDiscovery=_payloadAllowAirPrintiBeaconDiscovery;
@property(copy, nonatomic) NSNumber *payloadForceAirPrintTrustedTLSRequirement; // @synthesize payloadForceAirPrintTrustedTLSRequirement=_payloadForceAirPrintTrustedTLSRequirement;
@property(copy, nonatomic) NSNumber *payloadAllowAirPrint; // @synthesize payloadAllowAirPrint=_payloadAllowAirPrint;
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
