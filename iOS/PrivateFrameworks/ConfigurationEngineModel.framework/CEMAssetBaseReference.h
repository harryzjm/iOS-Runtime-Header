//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@interface CEMAssetBaseReference
{
    NSString *_payloadDataURL;
    NSString *_payloadContentType;
    NSNumber *_payloadSize;
    NSString *_payloadHashSHA256;
    NSArray *_payloadCertificatePinningIdentifiers;
}

+ (id)buildRequiredOnlyWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4;
+ (id)buildWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4 withCertificatePinningIdentifiers:(id)arg5;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSArray *payloadCertificatePinningIdentifiers; // @synthesize payloadCertificatePinningIdentifiers=_payloadCertificatePinningIdentifiers;
@property(copy, nonatomic) NSString *payloadHashSHA256; // @synthesize payloadHashSHA256=_payloadHashSHA256;
@property(copy, nonatomic) NSNumber *payloadSize; // @synthesize payloadSize=_payloadSize;
@property(copy, nonatomic) NSString *payloadContentType; // @synthesize payloadContentType=_payloadContentType;
@property(copy, nonatomic) NSString *payloadDataURL; // @synthesize payloadDataURL=_payloadDataURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

