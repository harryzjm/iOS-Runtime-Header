//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMClassroomDeleteUserCommand <CEMRegisteredTypeProtocol>
{
    NSString *_payloadUserName;
    NSNumber *_payloadForceDeletion;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withUserName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withUserName:(id)arg2 withForceDeletion:(id)arg3;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadForceDeletion; // @synthesize payloadForceDeletion=_payloadForceDeletion;
@property(copy, nonatomic) NSString *payloadUserName; // @synthesize payloadUserName=_payloadUserName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (_Bool)mustBeSupervised;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
