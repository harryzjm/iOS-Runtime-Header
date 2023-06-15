//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CalClassAdditions)
+ (id)CalAutoCommentPrefix;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned long long)arg2;
+ (id)ellipsisString;
- (id)cal_stringWithNormalizedSpacesForUnitTesting;
- (id)CalStringWithOnlyAutoComment;
- (id)CalStringByRemovingAutoComment;
- (_Bool)CalHasAutoCommentPrefix;
- (id)stringByRemovingPrefixCaseInsensitive:(id)arg1;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByTrimmingWhitespaceAndRemovingNewlines;
- (id)CalSafeHFSPathComponentName;
- (id)appendSlashIfNeeded;
- (id)removeSlashIfNeeded;
- (id)CalSafeFilename;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)unquote;
- (id)quote;
- (id)trimWhiteSpace;
- (id)trimCommas;
- (id)trimFirstComma;
- (id)trimFinalComma;
- (id)trimChar:(unsigned short)arg1;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFinalChar:(unsigned short)arg1;
- (_Bool)CalContainsSubstring:(id)arg1;
- (_Bool)isPathToICalBookmark;
- (_Bool)isPathToBackupFile;
- (_Bool)isPathToICalData;
- (_Bool)isPathToVCalData;
- (_Bool)isPathToAppleScript;
- (void)cal_enumerateCharactersUsingBlock:(CDUnknownBlockType)arg1;
- (id)stringByDecodingSlashes;
- (id)stringByEncodingSlashes;
- (id)RTLString;
- (id)directionalityIsolatedString;
- (_Bool)isEqualAsURL:(id)arg1;
- (id)CalAddressComment;
- (id)CalUncommentedAddress;
- (id)calDataDetectedURL;
- (id)phoneURL;
- (_Bool)cal_isPhoneNumber;
- (_Bool)isPhoneNumber;
- (id)radarLink;
- (_Bool)isMessagesURL;
- (_Bool)isAddressBookURL;
- (_Bool)isMailURL;
- (id)stringRemovingTel;
- (id)stringAddingTel;
- (_Bool)hasTel;
- (id)stringRemovingMailto;
- (id)stringAddingMailto;
- (id)hostFromEmail;
- (id)userFromEmail;
- (_Bool)resemblesEmailAddress;
- (_Bool)hasMailto;
- (_Bool)isEqualToStringCaseInsensitive:(id)arg1;
- (_Bool)containsCaseAndDiacriticInsensitive:(id)arg1;
- (_Bool)containsCaseInsensitive:(id)arg1;
- (_Bool)hasSuffixCaseInsensitive:(id)arg1;
- (_Bool)hasPrefixCaseAndDiacriticInsensitive:(id)arg1;
- (_Bool)hasPrefixCaseInsensitive:(id)arg1;
- (id)stringByRemovingLastPathComponent;
- (id)stringByURLUnescapingAllReservedCharacters;
- (id)stringByURLEscapingAllReservedCharacters;
- (id)stringByURLQuotingPaths;
- (id)stringByURLQuoting;
- (id)stringByURLUnquoting;
- (id)stringByExpandingTildeToNonSandboxHome;
@end

