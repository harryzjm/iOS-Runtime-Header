//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EMNumberFormatter : NSObject
{
    struct __CFNumberFormatter *_genericFormatter;
    struct __CFNumberFormatter *_doubleFormatter;
    struct __CFNumberFormatter *_percentFormatter;
    struct __CFNumberFormatter *_bigNumberFormatter;
    struct __CFNumberFormatter *_currencyFormatter;
    struct __CFDateFormatter *_dateFormatter;
    NSString *_excelFormatString;
    NSString *_baseICUFormatString;
    _Bool _isNegativeRed;
    _Bool _hasLocales;
    int _formatType;
}

+ (id)formatterForFormat:(id)arg1;
- (void).cxx_destruct;
- (id)formatValue:(double)arg1 inWorkbook:(id)arg2;
- (void)_parseExcelFormatString:(id)arg1;
- (id)convertedGenericNumberFormatWithFormat:(id)arg1;
- (void)convertGenericNumberFormat:(id)arg1;
- (id)formatDate:(id)arg1;
- (id)formatCurrency:(double)arg1;
- (id)formatDefault:(double)arg1;
- (id)formatDefault:(double)arg1 showingNumberOfDigits:(unsigned long long)arg2;
- (_Bool)useBigNumberFormatterForValue:(double)arg1;
- (unsigned long long)optimalNumberOfDigitsForValue:(double)arg1;
- (id)formatPercent:(double)arg1;
- (id)formatDoubleValue:(double)arg1;
- (id)_icuFormatStringForCurrencyFormat;
- (id)formatFraction:(double)arg1;
- (id)formatPhoneNumber:(double)arg1;
- (id)_icuFormatStringForDateFormat;
- (_Bool)isNegativeRed;
- (int)formatType;
- (struct __CFNumberFormatter *)_currencyFormatter;
- (struct __CFDateFormatter *)_dateFormatter;
- (struct __CFNumberFormatter *)_percentFormatter;
- (struct __CFNumberFormatter *)_doubleFormatter;
- (struct __CFNumberFormatter *)_bigNumberFormatter;
- (struct __CFNumberFormatter *)_genericFormatterForNumberOfSignificantDigits:(unsigned long long)arg1;
- (void)dealloc;
- (id)initForGeneralFormatting;
- (id)initWithExcelFormatString:(id)arg1;

@end

