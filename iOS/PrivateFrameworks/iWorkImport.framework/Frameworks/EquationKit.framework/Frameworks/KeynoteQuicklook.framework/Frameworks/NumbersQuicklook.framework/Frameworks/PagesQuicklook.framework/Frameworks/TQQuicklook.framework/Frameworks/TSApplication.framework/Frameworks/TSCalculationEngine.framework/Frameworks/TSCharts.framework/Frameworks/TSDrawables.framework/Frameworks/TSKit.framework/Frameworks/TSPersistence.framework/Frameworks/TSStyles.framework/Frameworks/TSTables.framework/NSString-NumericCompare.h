//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (NumericCompare)
- (long long)tsce_numericCompare:(id)arg1;
- (_Bool)tsce_hasCaseInsensitivePrefix:(id)arg1 withLocale:(id)arg2;
- (id)tst_cleanForFormulaEditor;
- (_Bool)tst_hasLeadingCharacterInSet:(id)arg1;
- (_Bool)tst_isOneCharacterInSet:(id)arg1;
- (_Bool)tst_hasLeadingSingleQuoteEscape;
- (_Bool)tst_isEqualToFormulaEqualsString;
- (_Bool)tst_hasFormulaEqualsPrefix;
- (id)tsce_stringByFoldingForNamedReferenceMatchingWithLocale:(id)arg1;
- (id)tsce_referenceComponentsSeparatedBySpace;
- (id)tsce_referenceComponentsSeparatedByColon;
- (id)ptsce_referenceComponentsSeparatedByCharacterInSet:(id)arg1;
- (id)tsce_referenceComponentsSeparatedByPathDelimiter;
- (id)tsce_stringByRemovingNewlines;
- (id)tsce_stringByReplacingTabsAndNewlinesWithASingleSpace;
- (id)tsce_newStringByAddingDoubleQuoteEscapesIfNecessary;
- (id)tsce_stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1 preserveTrailingUnquotedWhitespace:(_Bool)arg2;
- (id)tsce_stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1;
- (id)tsce_stringByUnescapingPartialQuotedString;
- (_Bool)tsce_isSingleQuoted;
- (id)tsce_stringByUnescapingSingleQuotes;
- (id)tsce_newStringByAddingSingleQuoteEscapesIfNecessary;
- (id)tsce_stringByForcingSingleQuoteEscapes:(_Bool)arg1;
- (id)tsce_stringByAddingSingleQuoteEscapesIfNecessary;
- (id)tsce_stringByAddingSingleQuoteEscapes;
- (id)tsce_newStringByForcingSingleQuoteEscapes:(_Bool)arg1;
- (_Bool)tsce_needsReferenceSingleQuoteEscaping;
- (void)tsce_p_initializeQuotes;
- (_Bool)tst_dataObjectIsEqual:(id)arg1;
- (unsigned long long)tst_dataObjectHash;
@end

