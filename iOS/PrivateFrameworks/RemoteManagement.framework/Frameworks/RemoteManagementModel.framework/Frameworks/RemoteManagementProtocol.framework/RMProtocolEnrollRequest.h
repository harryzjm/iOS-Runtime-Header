//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMProtocolEnrollRequest : RMModelPayloadBase
{
    NSString *_requestEnrollmentToken;
    RMModelAnyPayload *_requestStatusItems;
}

+ (id)requestWithEnrollmentToken:(id)arg1 statusItems:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) RMModelAnyPayload *requestStatusItems; // @synthesize requestStatusItems=_requestStatusItems;
@property(copy, nonatomic) NSString *requestEnrollmentToken; // @synthesize requestEnrollmentToken=_requestEnrollmentToken;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end
