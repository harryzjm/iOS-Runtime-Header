//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSCHCustomFormatSupport-Protocol.h>
#import <iWorkImport/TSCHDataFormatter-Protocol.h>
#import <iWorkImport/TSCHDataFormatterPersistableStyleObject-Protocol.h>
#import <iWorkImport/TSCHDataFormatterSupportedClientFormatObject-Protocol.h>
#import <iWorkImport/TSCHFormatTypeSupport-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport>
{
    NSString *mPrefixString;
    NSString *mSuffixString;
    CDStruct_b1066b25 mFormatStruct;
}

+ (int)labelFormatTypeFromTSUFormatType:(int)arg1;
+ (_Bool)supportsFormatType:(int)arg1;
+ (id)numberFormatWithFormatStruct:(CDStruct_b1066b25)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
+ (id)numberFormatWithFormatType:(int)arg1 decimalPlaces:(unsigned int)arg2 showThousandsSeparator:(_Bool)arg3;
+ (id)defaultDecimalNumberFormat;
+ (_Bool)defaultBaseUseMinusSign;
+ (unsigned int)defaultBasePlaces;
+ (unsigned int)defaultBase;
+ (int)defaultNegativeNumberStyle;
+ (int)defaultFractionAccuracy;
+ (id)defaultCurrencyCode;
+ (id)automaticDecimalPlaces;
+ (id)customFormatForKey:(id)arg1 documentRoot:(id)arg2 fromPasteboardCustomFormatList:(id)arg3;
+ (id)instanceWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
- (long long)numberOfDecimalPlaces;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (id)convertToPersistableStyleObject;
- (_Bool)supportsAutoMinMax;
- (_Bool)isCompatibleWithDataFormatter:(id)arg1;
- (id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)p_formattedBodyStringForDouble:(double)arg1 locale:(id)arg2;
- (id)dataFormatterForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (id)customFormatListKey;
- (id)customFormatKey;
- (CDStruct_b1066b25)formatStruct;
- (_Bool)isCustom;
@property(readonly, nonatomic) _Bool baseUseMinusSign;
- (_Bool)p_baseUseMinusSignIfAvailable;
- (_Bool)p_baseUseMinusSign;
@property(readonly, nonatomic) unsigned int basePlaces;
- (unsigned int)p_basePlacesIfAvailable;
- (unsigned int)p_basePlaces;
@property(readonly, nonatomic) unsigned int base;
- (unsigned int)p_baseIfAvailable;
- (unsigned int)p_base;
@property(readonly, nonatomic) double scaleFactor;
@property(readonly, copy, nonatomic) NSString *suffixString;
@property(readonly, copy, nonatomic) NSString *prefixString;
@property(readonly, nonatomic) int fractionAccuracy;
- (int)p_fractionAccuracyIfAvailable;
- (int)p_fractionAccuracy;
@property(readonly, nonatomic) _Bool showThousandsSeparator;
- (_Bool)p_showThousandsSeparatorIfAvailable;
- (_Bool)p_showThousandsSeparator;
@property(readonly, nonatomic) int negativeStyle;
- (int)p_negativeStyleIfAvailable;
- (int)p_negativeStyle;
@property(readonly, nonatomic) _Bool useAccountingStyle;
- (_Bool)p_useAccountingStyleIfAvailable;
- (_Bool)p_useAccountingStyle;
@property(readonly, copy, nonatomic) NSString *currencyCode;
- (id)p_currencyCodeIfAvailable;
- (id)p_currencyCode;
@property(readonly, nonatomic) unsigned int decimalPlaces;
- (unsigned int)p_decimalPlacesIfAvailable;
- (unsigned int)p_decimalPlaces;
- (int)valueType;
@property(readonly, nonatomic) int formatType;
- (_Bool)p_hasValidDecimalPlaces;
- (id)p_formatTypeDescription;
@property(readonly, nonatomic) _Bool isBase;
@property(readonly, nonatomic) _Bool isFraction;
- (_Bool)isScientific;
@property(readonly, nonatomic) _Bool isPercentage;
@property(readonly, nonatomic) _Bool isCurrency;
@property(readonly, nonatomic) _Bool usesNumberFormatStruct;
- (id)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
- (int)negativeStyleForNumberFormatter;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFormatStruct:(CDStruct_b1066b25)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (id)p_initWithFormatStruct:(CDStruct_b1066b25)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (id)upgradedNumberFormatFromPreUFFOrUnity1_0;
- (void)saveToArchive:(struct FormatStructArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

