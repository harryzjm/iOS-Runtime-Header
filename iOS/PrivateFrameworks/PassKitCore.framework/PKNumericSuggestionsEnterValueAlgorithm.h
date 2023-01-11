//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDecimalNumber, NSDecimalNumberHandler, NSString, PKNumericSuggestionLastInput;

@interface PKNumericSuggestionsEnterValueAlgorithm
{
    NSDecimalNumberHandler *_roundingBehavior;
    NSArray *_valuesToDefaults;
    NSArray *_defaultSuggestions;
    unsigned long long _powerOfTenFactor;
    PKNumericSuggestionLastInput *_lastInput;
    _Bool _useBuiltInDefaults;
    _Bool _hasValidDefaultSuggestions;
    NSDecimalNumber *_cardBalance;
    NSDecimalNumber *_minBalance;
    NSDecimalNumber *_maxBalance;
    NSDecimalNumber *_minLoadAmount;
    NSDecimalNumber *_maxLoadAmount;
    NSArray *_defaultValues;
    long long _decimalPrecision;
    NSString *_currencyCode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasValidDefaultSuggestions; // @synthesize hasValidDefaultSuggestions=_hasValidDefaultSuggestions;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) long long decimalPrecision; // @synthesize decimalPrecision=_decimalPrecision;
@property(nonatomic) unsigned long long powerOfTenFactor; // @synthesize powerOfTenFactor=_powerOfTenFactor;
@property(copy, nonatomic) NSArray *defaultValues; // @synthesize defaultValues=_defaultValues;
@property(copy, nonatomic) NSDecimalNumber *maxLoadAmount; // @synthesize maxLoadAmount=_maxLoadAmount;
@property(copy, nonatomic) NSDecimalNumber *minLoadAmount; // @synthesize minLoadAmount=_minLoadAmount;
@property(copy, nonatomic) NSDecimalNumber *maxBalance; // @synthesize maxBalance=_maxBalance;
@property(copy, nonatomic) NSDecimalNumber *minBalance; // @synthesize minBalance=_minBalance;
@property(copy, nonatomic) NSDecimalNumber *cardBalance; // @synthesize cardBalance=_cardBalance;
- (id)_generateValuesToDefaults;
- (id)_generateDefaultSuggestions;
- (id)_maxAmountSuggestion;
- (id)_useMaxAmountSuggestion;
- (void)_generateCalculatedSuggestions;
- (id)_possibleValueForAmount:(id)arg1;
- (_Bool)_possibleAmountIsValidWithDefaultValue:(id)arg1 amount:(id)arg2;
- (_Bool)_useMaximumAmountSuggestionWithAmount:(id)arg1;
- (_Bool)_amountIsValid:(id)arg1;
- (void)setUseBuiltInDefaults:(_Bool)arg1;
- (id)suggestionsWithAmount:(id)arg1;
- (_Bool)_lastInputExistsInGeneratedSuggestions:(id)arg1 withLastInput:(id)arg2;
- (id)init;
- (id)initWithLastInput:(id)arg1;

@end
