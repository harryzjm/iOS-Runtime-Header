//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMSecretCredentialsDeclaration
{
    NSString *_payloadSecret;
}

+ (id)buildRequiredOnlyWithSecret:(id)arg1;
+ (id)buildWithSecret:(id)arg1;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadSecret; // @synthesize payloadSecret=_payloadSecret;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

