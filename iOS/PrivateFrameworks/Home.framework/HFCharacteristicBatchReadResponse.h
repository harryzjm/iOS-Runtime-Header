//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSDictionary, NSSet, NSString;
@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicBatchReadResponse : NSObject <NAIdentifiable>
{
    id <HFCharacteristicOperationContextProviding> _contextProvider;
    NSSet *_allReadResponses;
    NSDictionary *_responseKeyedByCharacteristicUUID;
    NSDictionary *_responsesKeyedByCharacteristicType;
}

+ (id)_averageValueForValues:(id)arg1 metadata:(id)arg2;
+ (id)_mostCommonValueForValues:(id)arg1;
+ (id)_mostAbnormalValueForValues:(id)arg1;
+ (id)_aggregatedValueForValues:(id)arg1 withAggregationPolicy:(unsigned long long)arg2 metadata:(id)arg3;
+ (id)aggregatedMetadataForCharacteristics:(id)arg1;
+ (id)aggregatedReadResponseFromResponses:(id)arg1 withAggregationPolicy:(unsigned long long)arg2;
+ (id)na_identity;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *responsesKeyedByCharacteristicType; // @synthesize responsesKeyedByCharacteristicType=_responsesKeyedByCharacteristicType;
@property(readonly, nonatomic) NSDictionary *responseKeyedByCharacteristicUUID; // @synthesize responseKeyedByCharacteristicUUID=_responseKeyedByCharacteristicUUID;
@property(readonly, nonatomic) NSSet *allReadResponses; // @synthesize allReadResponses=_allReadResponses;
@property(readonly, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider; // @synthesize contextProvider=_contextProvider;
- (id)_aggregatedMetadataForCharacteristicType:(id)arg1;
- (unsigned long long)defaultAggregationPolicyForCharacteristicType:(id)arg1;
- (id)servicesWithErrorForCharacteristicType:(id)arg1;
- (id)servicesWithValuesPassingTest:(CDUnknownBlockType)arg1 forCharacteristicType:(id)arg2;
- (id)servicesWithValue:(id)arg1 forCharacteristicType:(id)arg2;
- (id)batchResponseForService:(id)arg1;
@property(readonly, nonatomic) NSSet *allServices;
- (id)responseForCharacteristicRecipe:(id)arg1;
- (id)allResponsesForCharacteristicRecipe:(id)arg1;
- (id)allResponsesForCharacteristicTypes:(id)arg1;
- (id)allResponsesForCharacteristicType:(id)arg1 inServicesOfTypes:(id)arg2;
- (id)allResponsesForCharacteristicType:(id)arg1;
- (id)_responseForCharacteristicType:(id)arg1 aggregationPolicy:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;
- (id)responseForCharacteristicType:(id)arg1 inService:(id)arg2 aggregationPolicy:(unsigned long long)arg3;
- (id)responseForCharacteristicType:(id)arg1 aggregationPolicy:(unsigned long long)arg2;
- (id)responseForCharacteristicType:(id)arg1 inService:(id)arg2;
- (id)responseForCharacteristicType:(id)arg1 inServicesOfTypes:(id)arg2;
- (id)responseForCharacteristicType:(id)arg1;
@property(readonly, nonatomic) NSSet *allCharacteristicTypes;
- (id)responseForCharacteristic:(id)arg1;
@property(readonly, nonatomic) NSSet *allCharacteristics;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithReadResponses:(id)arg1 contextProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
