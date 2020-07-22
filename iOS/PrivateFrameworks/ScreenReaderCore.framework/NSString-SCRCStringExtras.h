//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SCRCStringExtras)
+ (id)stringWithCGRect:(struct CGRect)arg1;
- (struct _NSRange)previousWordFromPosition:(long long)arg1;
- (struct _NSRange)nextWordFromPosition:(long long)arg1;
- (_Bool)containsAttachmentCharSet;
- (id)contentsOfEmbeddedCommand:(id)arg1;
- (unsigned int)fourCharCodeValue;
- (struct _NSRange)sentenceBreakInDirection:(_Bool)arg1 fromIndex:(unsigned long long)arg2 skipCurrent:(_Bool)arg3;
- (struct _NSRange)enclosingSentenceRangeForRange:(struct _NSRange)arg1;
- (_Bool)hasMultipleWordsWithLocaleName:(const char *)arg1 ignorePunctuation:(_Bool)arg2;
- (id)stringByTrimmingEmptySpaceEdges;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByTruncatingToWordAtIndex:(unsigned long long)arg1 addElipses:(_Bool)arg2;
- (int)character32AtIndex:(unsigned long long)arg1 returningNumberOfComposedChars:(unsigned long long *)arg2;
@end
