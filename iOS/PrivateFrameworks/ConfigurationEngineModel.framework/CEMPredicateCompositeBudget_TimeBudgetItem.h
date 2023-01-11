//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber;

@interface CEMPredicateCompositeBudget_TimeBudgetItem
{
    NSNumber *_payloadSeconds;
    NSArray *_payloadDays;
}

+ (id)buildRequiredOnlyWithSeconds:(id)arg1;
+ (id)buildWithSeconds:(id)arg1 withDays:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSArray *payloadDays; // @synthesize payloadDays=_payloadDays;
@property(copy, nonatomic) NSNumber *payloadSeconds; // @synthesize payloadSeconds=_payloadSeconds;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
