//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCharacteristic;

@interface HFCharacteristicCondition
{
    HMCharacteristic *_characteristic;
    unsigned long long _operatorType;
    id _value;
}

+ (id)_valuePredicateInCompoundPredicate:(id)arg1;
+ (id)_characteristicPredicateInCompoundPredicate:(id)arg1;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
- (id)initWithPredicate:(id)arg1;

@end

