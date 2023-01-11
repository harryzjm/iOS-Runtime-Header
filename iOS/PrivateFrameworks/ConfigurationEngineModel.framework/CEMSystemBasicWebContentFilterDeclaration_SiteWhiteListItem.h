//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMSystemBasicWebContentFilterDeclaration_SiteWhiteListItem
{
    NSString *_payloadAddress;
    NSString *_payloadPageTitle;
}

+ (id)buildRequiredOnlyWithAddress:(id)arg1;
+ (id)buildWithAddress:(id)arg1 withPageTitle:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadPageTitle; // @synthesize payloadPageTitle=_payloadPageTitle;
@property(copy, nonatomic) NSString *payloadAddress; // @synthesize payloadAddress=_payloadAddress;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

