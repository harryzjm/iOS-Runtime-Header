//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface HFSimpleIncrementalControlItem
{
    NSString *_incrementalCharacteristicType;
}

+ (Class)valueClass;
@property(readonly, copy, nonatomic) NSString *incrementalCharacteristicType; // @synthesize incrementalCharacteristicType=_incrementalCharacteristicType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *stepValue;
@property(readonly, nonatomic) NSNumber *maxValue;
@property(readonly, nonatomic) NSNumber *minValue;
- (id)_metadata;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writeValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;

@end

