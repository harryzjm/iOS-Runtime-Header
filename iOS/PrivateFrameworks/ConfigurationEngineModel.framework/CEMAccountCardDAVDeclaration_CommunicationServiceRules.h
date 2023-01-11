//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountCardDAVDeclaration_CommunicationServiceRules
{
    CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *_payloadDefaultServiceHandlers;
}

+ (id)buildRequiredOnly;
+ (id)buildWithDefaultServiceHandlers:(id)arg1;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *payloadDefaultServiceHandlers; // @synthesize payloadDefaultServiceHandlers=_payloadDefaultServiceHandlers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

