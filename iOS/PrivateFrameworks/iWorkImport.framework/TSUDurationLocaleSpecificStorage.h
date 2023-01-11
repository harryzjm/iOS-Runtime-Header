//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCharacterSet, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSUDurationLocaleSpecificStorage : NSObject
{
    NSString *_weekLongSingularString;
    NSString *_weekLongPluralString;
    NSString *_weekMediumSingularString;
    NSString *_weekMediumPluralString;
    NSString *_weekShortString;
    NSString *_dayLongSingularString;
    NSString *_dayLongPluralString;
    NSString *_dayMediumSingularString;
    NSString *_dayMediumPluralString;
    NSString *_dayShortString;
    NSString *_hourLongSingularString;
    NSString *_hourLongPluralString;
    NSString *_hourMediumSingularString;
    NSString *_hourMediumPluralString;
    NSString *_hourShortString;
    NSString *_minuteLongSingularString;
    NSString *_minuteLongPluralString;
    NSString *_minuteMediumSingularString;
    NSString *_minuteMediumPluralString;
    NSString *_minuteShortString;
    NSString *_secondLongSingularString;
    NSString *_secondLongPluralString;
    NSString *_secondMediumSingularString;
    NSString *_secondMediumPluralString;
    NSString *_secondShortString;
    NSString *_millisecondLongSingularString;
    NSString *_millisecondLongPluralString;
    NSString *_millisecondShortString;
    NSMutableArray *_multiWordDurationUnitStrings;
    NSMutableArray *_fullStopDurationUnitStrings;
    NSCharacterSet *_alphabeticCharacterSet;
    NSCharacterSet *_decimalDigitCharacterSet;
    NSCharacterSet *_decimalDigitAndSeperatorsCharacterSet;
    NSCharacterSet *_whitespaceCharacterSet;
    NSCharacterSet *_emptyCharacterSet;
    NSCharacterSet *_separatorPunctuationCharacterSet;
    NSCharacterSet *_minusSignCharacterSet;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_specialDurationFormatCharacters;
}

+ (id)localeSpecificStorageForLocale:(id)arg1;
@property(readonly) NSCharacterSet *specialDurationFormatCharacters; // @synthesize specialDurationFormatCharacters=_specialDurationFormatCharacters;
@property(readonly) NSCharacterSet *whitespaceAndNewlineCharacterSet; // @synthesize whitespaceAndNewlineCharacterSet=_whitespaceAndNewlineCharacterSet;
@property(readonly) NSCharacterSet *minusSignCharacterSet; // @synthesize minusSignCharacterSet=_minusSignCharacterSet;
@property(readonly) NSCharacterSet *separatorPunctuationCharacterSet; // @synthesize separatorPunctuationCharacterSet=_separatorPunctuationCharacterSet;
@property(readonly) NSCharacterSet *emptyCharacterSet; // @synthesize emptyCharacterSet=_emptyCharacterSet;
@property(readonly) NSCharacterSet *whitespaceCharacterSet; // @synthesize whitespaceCharacterSet=_whitespaceCharacterSet;
@property(readonly) NSCharacterSet *decimalDigitAndSeperatorsCharacterSet; // @synthesize decimalDigitAndSeperatorsCharacterSet=_decimalDigitAndSeperatorsCharacterSet;
@property(readonly) NSCharacterSet *decimalDigitCharacterSet; // @synthesize decimalDigitCharacterSet=_decimalDigitCharacterSet;
@property(readonly) NSCharacterSet *alphabeticCharacterSet; // @synthesize alphabeticCharacterSet=_alphabeticCharacterSet;
@property(readonly) NSArray *fullStopDurationUnitStrings; // @synthesize fullStopDurationUnitStrings=_fullStopDurationUnitStrings;
@property(readonly) NSArray *multiWordDurationUnitStrings; // @synthesize multiWordDurationUnitStrings=_multiWordDurationUnitStrings;
@property(readonly) NSString *millisecondShortString; // @synthesize millisecondShortString=_millisecondShortString;
@property(readonly) NSString *millisecondLongPluralString; // @synthesize millisecondLongPluralString=_millisecondLongPluralString;
@property(readonly) NSString *millisecondLongSingularString; // @synthesize millisecondLongSingularString=_millisecondLongSingularString;
@property(readonly) NSString *secondShortString; // @synthesize secondShortString=_secondShortString;
@property(readonly) NSString *secondMediumPluralString; // @synthesize secondMediumPluralString=_secondMediumPluralString;
@property(readonly) NSString *secondMediumSingularString; // @synthesize secondMediumSingularString=_secondMediumSingularString;
@property(readonly) NSString *secondLongPluralString; // @synthesize secondLongPluralString=_secondLongPluralString;
@property(readonly) NSString *secondLongSingularString; // @synthesize secondLongSingularString=_secondLongSingularString;
@property(readonly) NSString *minuteShortString; // @synthesize minuteShortString=_minuteShortString;
@property(readonly) NSString *minuteMediumPluralString; // @synthesize minuteMediumPluralString=_minuteMediumPluralString;
@property(readonly) NSString *minuteMediumSingularString; // @synthesize minuteMediumSingularString=_minuteMediumSingularString;
@property(readonly) NSString *minuteLongPluralString; // @synthesize minuteLongPluralString=_minuteLongPluralString;
@property(readonly) NSString *minuteLongSingularString; // @synthesize minuteLongSingularString=_minuteLongSingularString;
@property(readonly) NSString *hourShortString; // @synthesize hourShortString=_hourShortString;
@property(readonly) NSString *hourMediumPluralString; // @synthesize hourMediumPluralString=_hourMediumPluralString;
@property(readonly) NSString *hourMediumSingularString; // @synthesize hourMediumSingularString=_hourMediumSingularString;
@property(readonly) NSString *hourLongPluralString; // @synthesize hourLongPluralString=_hourLongPluralString;
@property(readonly) NSString *hourLongSingularString; // @synthesize hourLongSingularString=_hourLongSingularString;
@property(readonly) NSString *dayShortString; // @synthesize dayShortString=_dayShortString;
@property(readonly) NSString *dayMediumPluralString; // @synthesize dayMediumPluralString=_dayMediumPluralString;
@property(readonly) NSString *dayMediumSingularString; // @synthesize dayMediumSingularString=_dayMediumSingularString;
@property(readonly) NSString *dayLongPluralString; // @synthesize dayLongPluralString=_dayLongPluralString;
@property(readonly) NSString *dayLongSingularString; // @synthesize dayLongSingularString=_dayLongSingularString;
@property(readonly) NSString *weekShortString; // @synthesize weekShortString=_weekShortString;
@property(readonly) NSString *weekMediumPluralString; // @synthesize weekMediumPluralString=_weekMediumPluralString;
@property(readonly) NSString *weekMediumSingularString; // @synthesize weekMediumSingularString=_weekMediumSingularString;
@property(readonly) NSString *weekLongPluralString; // @synthesize weekLongPluralString=_weekLongPluralString;
@property(readonly) NSString *weekLongSingularString; // @synthesize weekLongSingularString=_weekLongSingularString;
- (void)addDurationUnit:(id)arg1;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;

@end

