//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSString;

@interface GQDTNumberFormat : NSObject
{
    char *mUid;
    struct __CFString *mFormatString;
    struct __CFString *mCurrencyCode;
    long long mDecimalPlaces;
    _Bool mUseAccountingStyle;
    _Bool mShowThousandsSeparator;
    int mValueType;
    int mNegativeStyle;
    int mFractionAccuracy;
    _Bool mFormatStringRequiresSuppressionOfMinusSign;
    double mScaleFactor;
    _Bool mIsCustom;
    _Bool mRequiresFractionReplacement;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    unsigned char mBase;
    unsigned short mBasePlaces;
    _Bool mBaseUsesMinusSign;
    _Bool mUseScientificFormattingAutomatically;
    _Bool mIgnoreDecimalPlacesForZeroValue;
    _Bool mIsTextFormat;
    _Bool mFormatContainsSpecialTokens;
    _Bool mFormatContainsIntegerToken;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    struct __CFString *mSuffixString;
}

+ (const struct StateSpec *)stateForReading;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString *)arg9;
+ (_Bool)needToSuppressMinusSignForFormatString:(struct __CFString *)arg1;
- (_Bool)useAccountingStyle;
- (int)valueType;
- (struct __CFString *)createStringFromDouble:(double)arg1;
- (id)stringFromDouble:(double)arg1;
- (_Bool)hasValidDecimalPlaces;
- (void)dealloc;
- (int)fractionAccuracy;
- (_Bool)isTextFormat;
- (_Bool)isCustom;
- (id)customNumberFormatTokens;
- (_Bool)showThousandsSeparator;
- (id)currencyCode;
- (id)formatString;
- (id)numberFormatBySettingValueType:(int)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (void)setUseScientificFormattingAutomatically:(_Bool)arg1;
- (id)baseStringFromDouble:(double)arg1;
- (id)fractionStringFromDouble:(double)arg1;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString *)arg9 scaleFactor:(double)arg10 base:(unsigned short)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(_Bool)arg13 isCustom:(_Bool)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(_Bool)arg22 formatName:(id)arg23;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

