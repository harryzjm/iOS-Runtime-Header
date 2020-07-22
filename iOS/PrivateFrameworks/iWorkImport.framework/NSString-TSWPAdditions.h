//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TSWPAdditions)
+ (id)tswp_stringForValue:(unsigned int)arg1 withPageNumberFormat:(int)arg2;
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2 includeFormatting:(_Bool)arg3;
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2;
+ (unsigned long long)tswp_numberForString:(id)arg1 withPageNumberFormat:(int)arg2;
+ (unsigned long long)tswp_numberForString:(id)arg1 withListNumberFormat:(int)arg2;
- (_Bool)tswp_isLowerCaseFromIndex:(unsigned long long)arg1;
- (_Bool)tswp_containsIdeographs;
- (unsigned int)tswp_utf32CharacterAtIndex:(unsigned long long)arg1;
- (int)tswp_contentsScriptInRange:(struct _NSRange)arg1;
- (int)tswp_contentsScript;
- (id)tswp_replaceOccurrencesOfCharactersInSet:(id)arg1 minimumConsecutiveLength:(unsigned long long)arg2 replaceString:(id)arg3;
- (_Bool)tswp_isAllWhitespaceInRange:(struct _NSRange)arg1;
- (_Bool)tswp_isHyphenationAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)tswp_rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange)arg2 includePreviousWord:(_Bool)arg3 includeHyphenation:(_Bool)arg4;
- (struct _NSRange)tswp_rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange)arg2 includePreviousWord:(_Bool)arg3;
- (struct _NSRange)tswp_rangeOfCharactersFromSet:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)tswp_findIndexOfCharacter:(unsigned short)arg1 range:(struct _NSRange)arg2;
- (id)tswp_stringByNormalizingParagraphBreaks;
@end

