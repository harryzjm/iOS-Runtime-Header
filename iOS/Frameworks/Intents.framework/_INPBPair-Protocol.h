//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBContactValue, _INPBCurrencyAmountValue, _INPBCustomObject, _INPBDataString, _INPBDistanceValue, _INPBDoubleValue, _INPBImageValue, _INPBIntegerValue, _INPBLocationValue, _INPBPaymentMethodValue, _INPBStringValue, _INPBTemperatureValue, _INPBURLValue;

@protocol _INPBPair <NSObject>
+ (Class)pairUrlValueType;
+ (Class)pairTemperatureValueType;
+ (Class)pairStringValueType;
+ (Class)pairPersonValueType;
+ (Class)pairPaymentMethodValueType;
+ (Class)pairLocationValueType;
+ (Class)pairIntegerValueType;
+ (Class)pairImageValueType;
+ (Class)pairDoubleValueType;
+ (Class)pairDistanceValueType;
+ (Class)pairDataStringType;
+ (Class)pairCustomObjectType;
+ (Class)pairCurrencyAmountValueType;
@property(nonatomic) _Bool hasRepeated;
@property(nonatomic) _Bool repeated;
@property(readonly, nonatomic) unsigned long long pairUrlValuesCount;
@property(copy, nonatomic) NSArray *pairUrlValues;
@property(readonly, nonatomic) unsigned long long pairTemperatureValuesCount;
@property(copy, nonatomic) NSArray *pairTemperatureValues;
@property(readonly, nonatomic) unsigned long long pairStringValuesCount;
@property(copy, nonatomic) NSArray *pairStringValues;
@property(readonly, nonatomic) unsigned long long pairPersonValuesCount;
@property(copy, nonatomic) NSArray *pairPersonValues;
@property(readonly, nonatomic) unsigned long long pairPaymentMethodValuesCount;
@property(copy, nonatomic) NSArray *pairPaymentMethodValues;
@property(readonly, nonatomic) unsigned long long pairLocationValuesCount;
@property(copy, nonatomic) NSArray *pairLocationValues;
@property(readonly, nonatomic) unsigned long long pairIntegerValuesCount;
@property(copy, nonatomic) NSArray *pairIntegerValues;
@property(readonly, nonatomic) unsigned long long pairImageValuesCount;
@property(copy, nonatomic) NSArray *pairImageValues;
@property(readonly, nonatomic) unsigned long long pairDoubleValuesCount;
@property(copy, nonatomic) NSArray *pairDoubleValues;
@property(readonly, nonatomic) unsigned long long pairDistanceValuesCount;
@property(copy, nonatomic) NSArray *pairDistanceValues;
@property(readonly, nonatomic) unsigned long long pairDataStringsCount;
@property(copy, nonatomic) NSArray *pairDataStrings;
@property(readonly, nonatomic) unsigned long long pairCustomObjectsCount;
@property(copy, nonatomic) NSArray *pairCustomObjects;
@property(readonly, nonatomic) unsigned long long pairCurrencyAmountValuesCount;
@property(copy, nonatomic) NSArray *pairCurrencyAmountValues;
@property(readonly, nonatomic) _Bool hasKey;
@property(copy, nonatomic) NSString *key;
- (_INPBURLValue *)pairUrlValueAtIndex:(unsigned long long)arg1;
- (void)addPairUrlValue:(_INPBURLValue *)arg1;
- (void)clearPairUrlValues;
- (_INPBTemperatureValue *)pairTemperatureValueAtIndex:(unsigned long long)arg1;
- (void)addPairTemperatureValue:(_INPBTemperatureValue *)arg1;
- (void)clearPairTemperatureValues;
- (_INPBStringValue *)pairStringValueAtIndex:(unsigned long long)arg1;
- (void)addPairStringValue:(_INPBStringValue *)arg1;
- (void)clearPairStringValues;
- (_INPBContactValue *)pairPersonValueAtIndex:(unsigned long long)arg1;
- (void)addPairPersonValue:(_INPBContactValue *)arg1;
- (void)clearPairPersonValues;
- (_INPBPaymentMethodValue *)pairPaymentMethodValueAtIndex:(unsigned long long)arg1;
- (void)addPairPaymentMethodValue:(_INPBPaymentMethodValue *)arg1;
- (void)clearPairPaymentMethodValues;
- (_INPBLocationValue *)pairLocationValueAtIndex:(unsigned long long)arg1;
- (void)addPairLocationValue:(_INPBLocationValue *)arg1;
- (void)clearPairLocationValues;
- (_INPBIntegerValue *)pairIntegerValueAtIndex:(unsigned long long)arg1;
- (void)addPairIntegerValue:(_INPBIntegerValue *)arg1;
- (void)clearPairIntegerValues;
- (_INPBImageValue *)pairImageValueAtIndex:(unsigned long long)arg1;
- (void)addPairImageValue:(_INPBImageValue *)arg1;
- (void)clearPairImageValues;
- (_INPBDoubleValue *)pairDoubleValueAtIndex:(unsigned long long)arg1;
- (void)addPairDoubleValue:(_INPBDoubleValue *)arg1;
- (void)clearPairDoubleValues;
- (_INPBDistanceValue *)pairDistanceValueAtIndex:(unsigned long long)arg1;
- (void)addPairDistanceValue:(_INPBDistanceValue *)arg1;
- (void)clearPairDistanceValues;
- (_INPBDataString *)pairDataStringAtIndex:(unsigned long long)arg1;
- (void)addPairDataString:(_INPBDataString *)arg1;
- (void)clearPairDataStrings;
- (_INPBCustomObject *)pairCustomObjectAtIndex:(unsigned long long)arg1;
- (void)addPairCustomObject:(_INPBCustomObject *)arg1;
- (void)clearPairCustomObjects;
- (_INPBCurrencyAmountValue *)pairCurrencyAmountValueAtIndex:(unsigned long long)arg1;
- (void)addPairCurrencyAmountValue:(_INPBCurrencyAmountValue *)arg1;
- (void)clearPairCurrencyAmountValues;
@end

