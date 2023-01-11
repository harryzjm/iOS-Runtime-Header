//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface CEMApplicationControlDeclaration_UpdateSchedule
{
    NSString *_payloadMode;
    NSNumber *_payloadDuration;
    NSString *_payloadStartTime;
    NSString *_payloadEndTime;
}

+ (id)buildRequiredOnlyWithMode:(id)arg1;
+ (id)buildWithMode:(id)arg1 withDuration:(id)arg2 withStartTime:(id)arg3 withEndTime:(id)arg4;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadEndTime; // @synthesize payloadEndTime=_payloadEndTime;
@property(copy, nonatomic) NSString *payloadStartTime; // @synthesize payloadStartTime=_payloadStartTime;
@property(copy, nonatomic) NSNumber *payloadDuration; // @synthesize payloadDuration=_payloadDuration;
@property(copy, nonatomic) NSString *payloadMode; // @synthesize payloadMode=_payloadMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
