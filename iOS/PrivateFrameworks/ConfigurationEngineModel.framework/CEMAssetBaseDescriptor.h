//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMAssetBaseDescriptor
{
    NSString *_payloadTitle;
    NSString *_payloadDescription;
}

+ (id)buildRequiredOnlyWithTitle:(id)arg1;
+ (id)buildWithTitle:(id)arg1 withDescription:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
@property(copy, nonatomic) NSString *payloadTitle; // @synthesize payloadTitle=_payloadTitle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

