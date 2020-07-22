//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TSUNumberFormatStringUtilities)
+ (id)numberSymbols;
- (id)prefixOfNumberFormatSubpattern;
- (unsigned long long)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (id)suffixOfNumberFormatSubpattern;
- (unsigned long long)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)numberPortionOfNumberFormatSubpattern;
- (id)negativeSubpatternOfNumberFormatPattern;
- (id)positiveSubpatternOfNumberFormatPattern;
- (unsigned long long)indexOfNumberFormatSubpatternSeparator;
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)newRangesOfEscapedCharactersInNumberFormatPattern;
- (_Bool)isNumberFormatPattern;
- (id)newStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
@end

