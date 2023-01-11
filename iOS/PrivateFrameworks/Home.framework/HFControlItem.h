//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NAIdentifiable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFControlItemCharacteristicOptions, NSDictionary, NSSet, NSString;
@protocol HFAggregatedCharacteristicValueSource;

@interface HFControlItem <NAIdentifiable, NSCopying>
{
    id <HFAggregatedCharacteristicValueSource> _valueSource;
    HFControlItemCharacteristicOptions *_characteristicOptions;
    NSDictionary *_displayResults;
}

+ (id)na_identity;
+ (Class)valueClass;
@property(readonly, copy, nonatomic) NSDictionary *displayResults; // @synthesize displayResults=_displayResults;
@property(readonly, nonatomic) HFControlItemCharacteristicOptions *characteristicOptions; // @synthesize characteristicOptions=_characteristicOptions;
@property(readonly, nonatomic) id <HFAggregatedCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)_descriptionWithCharacteristicOptions:(_Bool)arg1 includeResults:(_Bool)arg2;
- (id)normalizedCharacteristicValuesForValues:(id)arg1;
- (id)normalizedValueForCharacteristicValue:(id)arg1 ofType:(id)arg2;
- (_Bool)supportsItemRepresentingServices:(id)arg1;
@property(readonly, nonatomic) long long sortPriority;
- (id)normalizedValueForValue:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)_standardResultsForResultValue:(id)arg1 characteristicValuesByType:(id)arg2;
- (id)_characteristicValuesByTypeForBatchReadResponse:(id)arg1;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)writeValue:(id)arg1;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;
@property(readonly, nonatomic) NSSet *characteristicTypes;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (_Bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;

// Remaining properties
@property(readonly) Class superclass;

@end

