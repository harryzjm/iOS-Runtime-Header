//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMSystemXsanVolumePreferencesDeclaration <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadOnlyMount;
    NSArray *_payloadDenyMount;
    NSArray *_payloadDenyDLC;
    NSArray *_payloadPreferDLC;
    NSNumber *_payloadUseDLC;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withOnlyMount:(id)arg2 withDenyMount:(id)arg3 withDenyDLC:(id)arg4 withPreferDLC:(id)arg5 withUseDLC:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadUseDLC; // @synthesize payloadUseDLC=_payloadUseDLC;
@property(copy, nonatomic) NSArray *payloadPreferDLC; // @synthesize payloadPreferDLC=_payloadPreferDLC;
@property(copy, nonatomic) NSArray *payloadDenyDLC; // @synthesize payloadDenyDLC=_payloadDenyDLC;
@property(copy, nonatomic) NSArray *payloadDenyMount; // @synthesize payloadDenyMount=_payloadDenyMount;
@property(copy, nonatomic) NSArray *payloadOnlyMount; // @synthesize payloadOnlyMount=_payloadOnlyMount;
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

