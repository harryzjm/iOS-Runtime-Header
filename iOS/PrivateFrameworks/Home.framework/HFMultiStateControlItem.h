//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFMultiStateValueSet, NSString;

@interface HFMultiStateControlItem
{
    NSString *_multiStateCharacteristicType;
    HFMultiStateValueSet *_possibleValueSet;
}

+ (id)na_identity;
+ (Class)valueClass;
@property(readonly, copy, nonatomic) HFMultiStateValueSet *possibleValueSet; // @synthesize possibleValueSet=_possibleValueSet;
@property(readonly, copy, nonatomic) NSString *multiStateCharacteristicType; // @synthesize multiStateCharacteristicType=_multiStateCharacteristicType;
- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 multiStateCharacteristicType:(id)arg2 allCharacteristicTypes:(id)arg3 possibleValueSet:(id)arg4 displayResults:(id)arg5;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4;

@end
