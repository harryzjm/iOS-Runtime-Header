//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUFormatUtilities_LocaleSpecificStorage : NSObject
{
    NSString *_formatDecimalString;
    NSString *_formatDecimalStringMinus;
    NSString *_formatDecimalStringRedOnly;
    NSString *_formatCurrencyString;
    NSString *_formatCurrencyStringMinus;
    NSString *_formatCurrencyStringRedOnly;
    NSString *_formatPercentageString;
    NSString *_formatPercentageStringMinus;
    NSString *_formatPercentageStringRedOnly;
    NSString *_formatScientificString;
    NSString *_formatScientificStringMinus;
    NSString *_formatScientificStringRedOnly;
    NSString *_formatDateTimeString;
    NSString *_formatDecimalStringWithParens;
    NSString *_formatScientificStringWithParens;
    NSString *_formatCurrencyStringWithParens;
    NSString *_formatPercentageStringWithParens;
}

+ (id)localeSpecificStorageForLocale:(id)arg1;
@property(readonly) NSString *formatPercentageStringWithParens; // @synthesize formatPercentageStringWithParens=_formatPercentageStringWithParens;
@property(readonly) NSString *formatCurrencyStringWithParens; // @synthesize formatCurrencyStringWithParens=_formatCurrencyStringWithParens;
@property(readonly) NSString *formatScientificStringWithParens; // @synthesize formatScientificStringWithParens=_formatScientificStringWithParens;
@property(readonly) NSString *formatDecimalStringWithParens; // @synthesize formatDecimalStringWithParens=_formatDecimalStringWithParens;
@property(readonly) NSString *formatDateTimeString; // @synthesize formatDateTimeString=_formatDateTimeString;
@property(readonly) NSString *formatScientificStringRedOnly; // @synthesize formatScientificStringRedOnly=_formatScientificStringRedOnly;
@property(readonly) NSString *formatScientificStringMinus; // @synthesize formatScientificStringMinus=_formatScientificStringMinus;
@property(readonly) NSString *formatScientificString; // @synthesize formatScientificString=_formatScientificString;
@property(readonly) NSString *formatPercentageStringRedOnly; // @synthesize formatPercentageStringRedOnly=_formatPercentageStringRedOnly;
@property(readonly) NSString *formatPercentageStringMinus; // @synthesize formatPercentageStringMinus=_formatPercentageStringMinus;
@property(readonly) NSString *formatPercentageString; // @synthesize formatPercentageString=_formatPercentageString;
@property(readonly) NSString *formatCurrencyStringRedOnly; // @synthesize formatCurrencyStringRedOnly=_formatCurrencyStringRedOnly;
@property(readonly) NSString *formatCurrencyStringMinus; // @synthesize formatCurrencyStringMinus=_formatCurrencyStringMinus;
@property(readonly) NSString *formatCurrencyString; // @synthesize formatCurrencyString=_formatCurrencyString;
@property(readonly) NSString *formatDecimalStringRedOnly; // @synthesize formatDecimalStringRedOnly=_formatDecimalStringRedOnly;
@property(readonly) NSString *formatDecimalStringMinus; // @synthesize formatDecimalStringMinus=_formatDecimalStringMinus;
@property(readonly) NSString *formatDecimalString; // @synthesize formatDecimalString=_formatDecimalString;
- (void).cxx_destruct;
- (id)initWithLocale:(id)arg1;

@end

