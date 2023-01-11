//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnServiceException
{
    NSString *_payloadServiceName;
    NSString *_payloadAction;
}

+ (id)buildRequiredOnlyWithServiceName:(id)arg1 withAction:(id)arg2;
+ (id)buildWithServiceName:(id)arg1 withAction:(id)arg2;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadAction; // @synthesize payloadAction=_payloadAction;
@property(copy, nonatomic) NSString *payloadServiceName; // @synthesize payloadServiceName=_payloadServiceName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
