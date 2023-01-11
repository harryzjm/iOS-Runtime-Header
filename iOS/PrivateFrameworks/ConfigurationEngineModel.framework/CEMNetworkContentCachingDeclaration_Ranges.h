//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMNetworkContentCachingDeclaration_Ranges
{
    NSString *_payloadType;
    NSString *_payloadFirst;
    NSString *_payloadLast;
}

+ (id)buildRequiredOnlyWithFirst:(id)arg1 withLast:(id)arg2;
+ (id)buildWithType:(id)arg1 withFirst:(id)arg2 withLast:(id)arg3;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadLast; // @synthesize payloadLast=_payloadLast;
@property(copy, nonatomic) NSString *payloadFirst; // @synthesize payloadFirst=_payloadFirst;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
