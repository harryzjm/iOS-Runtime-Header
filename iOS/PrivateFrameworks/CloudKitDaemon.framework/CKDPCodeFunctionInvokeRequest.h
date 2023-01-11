//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPCodeFunctionInvokeRequestAttestationRequest, CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeRequest : PBRequest <NSCopying>
{
    CKDPCodeFunctionInvokeRequestAttestationRequest *_attestationRequest;
    NSString *_functionName;
    CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *_protectedCloudComputeMetadata;
    NSData *_serializedParameters;
    NSString *_serviceName;
}

+ (id)options;
- (void).cxx_destruct;
@property(retain, nonatomic) CKDPCodeFunctionInvokeRequestAttestationRequest *attestationRequest; // @synthesize attestationRequest=_attestationRequest;
@property(retain, nonatomic) CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata; // @synthesize protectedCloudComputeMetadata=_protectedCloudComputeMetadata;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAttestationRequest;
@property(readonly, nonatomic) _Bool hasProtectedCloudComputeMetadata;
@property(readonly, nonatomic) _Bool hasSerializedParameters;
@property(readonly, nonatomic) _Bool hasFunctionName;
@property(readonly, nonatomic) _Bool hasServiceName;

@end
