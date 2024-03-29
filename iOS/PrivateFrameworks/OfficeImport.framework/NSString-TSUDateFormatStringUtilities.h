//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TSUDateFormatStringUtilities)
+ (id)tsu_numberSymbols;
+ (id)tsu_stringByHexEncodingData:(id)arg1;
+ (id)tsu_stringWithXMLString:(const char *)arg1;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(_Bool)arg3;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringWithHexFromBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringByIndentingString:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)tsu_stringWithUUID;
+ (id)tsu_localizedDisplayNameWithPersonNameComponents:(id)arg1;
+ (id)tsu_fogFilenameFromShareToken:(id)arg1;
+ (id)tsu_fogShareTokenFromFileURL:(id)arg1;
+ (id)tsu_customNumberFormatDecimalFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2 includeDecimalSeparator:(_Bool)arg3;
+ (id)tsu_customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(_Bool)arg2 digitString:(id)arg3;
+ (id)tsu_customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned long long)arg1 separator:(_Bool)arg2 digitString:(id)arg3 locale:(id)arg4;
+ (id)tsu_customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
+ (id)tc_stringByFixingUnpairedSurrogateCharactersInString:(id)arg1;
+ (_Bool)tc_fixUnpairedSurrogateCharactersInBuffer:(void *)arg1;
+ (id)tc_stringWithXmlString:(const char *)arg1;
+ (id)stringWithOcText:(const struct OcText *)arg1;
+ (id)stringWithCsString:(const struct CsString *)arg1;
+ (_Bool)tc_skipString:(id)arg1;
+ (id)tc_mapString:(id)arg1;
- (id)tsu_stringByReplacing2DigitYearStringWith4DigitYearString;
- (id)tsu_stringByReplacing4DigitYearStringWith2DigitYearString;
- (id)tsu_prefixOfNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (id)tsu_suffixOfNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)tsu_numberPortionOfNumberFormatSubpattern;
- (id)tsu_negativeSubpatternOfNumberFormatPattern;
- (id)tsu_positiveSubpatternOfNumberFormatPattern;
- (unsigned long long)tsu_indexOfNumberFormatSubpatternSeparator;
- (id)tsu_stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)tsu_newRangesOfEscapedCharactersInNumberFormatPattern;
- (_Bool)tsu_isNumberFormatPattern;
- (id)tsu_stringWithNormalizedQuotationMarks;
- (id)tsu_stringWithNormalizedHyphens;
- (id)tsu_stringWithNormalizedHyphensAndQuotationMarks;
- (_Bool)tsu_isEqualToString:(id)arg1;
- (id)tsu_middleTruncateToLength:(unsigned long long)arg1;
- (id)tsu_stringWithoutAttachmentCharacters;
- (id)tsu_setOfContainedWordsIncludingPunctuationAndSymbols:(_Bool)arg1;
- (_Bool)tsu_containsSubstring:(id)arg1;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)tsu_range;
- (struct _NSRange)tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;
- (_Bool)tsu_containsOnlyCharactersFromSet:(id)arg1;
- (id)tsu_unescapeXML;
- (id)tsu_escapeXML;
- (id)tsu_stringByMakingFirstCharacterUppercase;
- (id)tsu_stringByMakingFirstCharacterLowercase;
- (id)tsu_encodeStringBase64;
- (id)tsu_stringByTrimmingCharactersInSetFromFront:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(_Bool)arg2;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;
- (id)tsu_substringWithComposedCharacterSequencesTruncatedToLength:(unsigned long long)arg1;
- (id)tsu_stringWithRealpath;
- (_Bool)tsu_isChildOfPath:(id)arg1;
- (_Bool)tsu_isDescendantOfPath:(id)arg1;
- (id)tsu_escapeForIcuRegex;
- (unsigned long long)tsu_countInstancesOfString:(id)arg1 options:(unsigned long long)arg2;
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)tsu_md5Hash;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;
- (id)tsu_stringByAddingCSVEscapesForLocale:(id)arg1;
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)tsu_stringByExpandingTableFormatting;
- (_Bool)tsu_isLegalEmailAddress;
- (id)tsu_uncommentedAddressRespectingGroups;
- (id)tsu_uncommentedAddress;
- (_Bool)tsu_isCJKString;
- (id)tsu_sha256HexHashString;
- (long long)tsu_compareToVersionString:(id)arg1;
- (unsigned long long)tsu_numberOfKeysInKeyPath;
- (id)tsu_lastKey;
- (id)tsu_firstKey;
- (id)tsu_keyPathByAppendingKey:(id)arg1;
- (id)tsu_keyPathByPrependingKey:(id)arg1;
- (id)tsu_keyPathByRemovingFirstKey;
- (id)tsu_keyPathByRemovingLastKey;
- (id)tsu_initUnRedactedWithFormat:(id)arg1;
- (id)tsu_initRedactedWithFormat:(id)arg1;
- (id)tsu_initUnRedactedWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)tsu_initRedactedWithFormat:(id)arg1 arguments:(char *)arg2;
- (unsigned short)tsu_spaceCharacterInCustomNumberFormatSpaceToken;
- (unsigned short)tsu_scaleCharacterInCustomNumberFormatScaleToken;
- (id)tsu_formatStringFromCustomNumberFormatScaleToken;
- (int)tsu_fractionAccuracyFromCustomNumberFormatFractionToken;
- (id)tsu_currencyCodeFromCustomNumberFormatCurrencyToken;
- (id)tsu_digitPlaceholderStringInDigitToken;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatDecimalToken;
- (id)tsu_stringByInsertingFormatGroupingSeparators:(id)arg1;
- (_Bool)tsu_customFormatIntegerTokenUsesSeparator;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatIntegerToken;
- (_Bool)tsu_isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (_Bool)tsu_isSpecialCustomNumberFormatToken;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (_Bool)tsu_pathExtensionConformsToUTI:(id)arg1;
- (_Bool)tsu_pathConformsToUTI:(id)arg1;
@property(readonly, nonatomic) NSString *tsu_pathUTI;
@property(readonly, nonatomic) NSString *tsu_UTIFilenameExtension;
- (_Bool)tsu_conformsToAnyUTI:(id)arg1;
- (_Bool)tsu_conformsToUTI:(id)arg1;
- (const char *)nulTerminatedUTF8;
- (_Bool)tc_doesURLHostContainWhitespace;
- (_Bool)tc_startsWithString:(id)arg1;
- (id)tc_stringByRemovingInvalidXmlChars;
- (_Bool)tc_isEqualToXmlString:(const char *)arg1;
- (id)tc_componentsSeparatedByWhitespace;
- (id)tc_initFromXmlNode:(struct _xmlNode *)arg1 nsWithFallbackNs:(id)arg2 attributeName:(const char *)arg3;
- (id)tc_initFromXmlNode:(struct _xmlNode *)arg1 ns:(const char *)arg2 attributeName:(const char *)arg3;
- (id)tc_initWithContentOfXmlNode:(struct _xmlNode *)arg1;
- (id)tc_initWithValueOfXmlAttribute:(struct _xmlAttr *)arg1;
- (const char *)tc_xmlString;
- (id)tc_initWithXmlString:(const char *)arg1;
- (void)copyToOcText:(struct OcText *)arg1 encoding:(int)arg2;
- (void)copyToOcText:(struct OcText *)arg1;
- (void)copyToCsString:(struct CsString *)arg1;
- (id)dataUsingWordEncoding:(int)arg1;
- (id)initWithOcText:(const struct OcText *)arg1;
- (id)initWithCsString:(const struct CsString *)arg1;
- (unsigned short *)cWideString;
- (id)tc_escapedFragment;
- (id)tc_escapedPath;
- (int)tc_languageTypeAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)tc_initialsFromAuthorName;
- (id)getDataUsingOfficeCryptographicEncoding;
- (int)tc_fontTypeAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 forXML:(_Bool)arg3;
- (int)fontTypeForCharacter:(unsigned short)arg1 isControl:(_Bool *)arg2;
- (id)CM_stringByAddingCSSEscapes;
- (id)copyCsvRows:(unsigned long long *)arg1;
- (id)_copyCsvRows:(unsigned long long *)arg1 usingDelimiter:(id)arg2 columnCountIsConstant:(_Bool *)arg3;
- (struct _NSRange)oi_rangeOfCharactersFromSet:(id)arg1 index:(int)arg2;
- (double)oi_sizeWithFontName:(id)arg1 size:(int)arg2 bold:(_Bool)arg3 italic:(_Bool)arg4;
- (double)oi_sizeWithFontName:(id)arg1 size:(int)arg2;
@end

