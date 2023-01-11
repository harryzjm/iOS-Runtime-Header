//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface RMProtocolWellKnownResponse_WellKnownResponseServer : RMModelPayloadBase
{
    NSString *_responseVersion;
    NSString *_responseBaseURL;
    NSArray *_responsePinnedCertificates;
    NSNumber *_responsePinningRevocationCheckRequired;
}

+ (id)buildRequiredOnlyWithVersion:(id)arg1 baseURL:(id)arg2;
+ (id)buildWithVersion:(id)arg1 baseURL:(id)arg2 pinnedCertificates:(id)arg3 pinningRevocationCheckRequired:(id)arg4;
+ (id)allowedResponseKeys;
@property(copy, nonatomic) NSNumber *responsePinningRevocationCheckRequired; // @synthesize responsePinningRevocationCheckRequired=_responsePinningRevocationCheckRequired;
@property(copy, nonatomic) NSArray *responsePinnedCertificates; // @synthesize responsePinnedCertificates=_responsePinnedCertificates;
@property(copy, nonatomic) NSString *responseBaseURL; // @synthesize responseBaseURL=_responseBaseURL;
@property(copy, nonatomic) NSString *responseVersion; // @synthesize responseVersion=_responseVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithType:(short)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end
