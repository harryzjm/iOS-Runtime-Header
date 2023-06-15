//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class EFSQLBinding, NSData, UTType;

@interface NSString (EmailFoundationAdditions)
+ (id)ef_emptyStringIfNil:(id)arg1;
+ (id)ef_stringByIsolatingDirectionalityForString:(id)arg1;
+ (id)ef_UUID;
- (id)ef_UTF8ConvertibleString;
- (id)ef_pathByReplacingRelativePathWithFolderName:(id)arg1;
- (id)ef_filenameWithExtensionForMimeType:(id)arg1;
- (id)ef_sanitizedFileName;
- (id)ef_stringByEscapingSingleQuotes;
@property(readonly) UTType *ef_declaredUTTypeFromExtension;
@property(readonly) _Bool ef_conformsToRFC822UTType;
@property(readonly) _Bool ef_conformsToIWorkUTType;
@property(readonly) _Bool ef_conformsToMarkupUTType;
- (id)ef_stringByEscapingForMessageBody;
- (id)ef_stringByEscapingForXML;
- (_Bool)ef_isUnsignedIntegerString;
- (struct _NSRange)ef_rangeOfWebAddressContainingRange:(struct _NSRange)arg1;
- (_Bool)ef_isWebAddress;
- (const void *)ef_lossyDefaultCStringBytes;
- (id)ef_stringByApplyingJavaScriptArguments:(id)arg1;
- (id)ef_stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)ef_stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)ef_stringWithNoExtraSpaces;
- (_Bool)ef_hasCaseInsensitivePrefix:(id)arg1;
- (_Bool)ef_caseInsensitiveIsEqualToString:(id)arg1;
- (id)ef_substringWithIndexes:(id)arg1;
- (id)ef_stringByEscapingSQLLikeSpecialCharactersWithEscapeCharater:(unsigned short)arg1;
- (id)ef_quotedWordComponentsForLanguages:(id)arg1;
- (id)ef_wordComponentsForLocale:(id)arg1 minimumWordLength:(long long)arg2;
- (id)ef_wordComponentsForLocale:(id)arg1;
- (id)ef_componentsSeparatedByString:(id)arg1 maxSeparations:(unsigned long long)arg2;
- (id)ef_stringByRFC5322Unfolding;
- (id)ef_stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)ef_stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (id)ef_stringByReplacingContiguousSequencesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)ef_stringByRemovingCharactersInSet:(id)arg1 beforeOccurrencesOfString:(id)arg2;
- (id)ef_stringByRemovingCharactersInSet:(id)arg1;
- (id)ef_stringByTrimmingOuterQuotes;
- (id)ef_stringByRemovingQuotesForLanguages:(id)arg1;
- (id)ef_stringByRemovingTokenizedLinksUsingTokenizationHandler:(CDUnknownBlockType)arg1;
- (id)ef_stringByRemovingUnbalancedQuotesForLanguages:(id)arg1;
- (id)ef_stringByRemovingUnbalancedOpenQuote:(id)arg1 closeQuote:(id)arg2;
- (id)ef_stringByRemovingQuotedSubstringsForLocales:(id)arg1 tokenizationHandler:(CDUnknownBlockType)arg2;
- (const char *)ef_sqliteAllocatedStringWithHexFromUTF8;
- (id)_ef_sqliteFormattedWithFormatSpecifier:(const char *)arg1;
@property(readonly) _Bool ef_lastStrongDirectionalityIsLeftToRight;
@property(readonly) _Bool ef_firstStrongDirectionalityIsLeftToRight;
@property(readonly, copy) NSString *ef_sha256String;
@property(readonly, copy) NSData *ef_sha256Digest;
@property(readonly, copy) NSData *ef_md5Digest;
@property(readonly, copy) NSString *ef_quotedSQLEscapedString;
@property(readonly, copy) NSString *ef_SQLEscapedString;
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

