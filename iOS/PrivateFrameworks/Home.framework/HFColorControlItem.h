//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HFColorProfile;

@interface HFColorControlItem
{
}

+ (id)colorCharacteristicTypes;
+ (Class)valueClass;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)writeValue:(id)arg1;
@property(readonly, nonatomic) id <HFColorProfile> colorProfile;
@property(readonly, nonatomic) _Bool supportsRGBColor;
- (_Bool)supportsItemRepresentingServices:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (_Bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;

@end

