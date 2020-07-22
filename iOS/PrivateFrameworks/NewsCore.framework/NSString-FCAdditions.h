//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (FCAdditions)
+ (_Bool)fc_string:(id)arg1 isEqualToString:(id)arg2;
+ (id)stringWithValue:(id)arg1;
+ (id)fc_string:(CDUnknownBlockType)arg1;
- (unsigned long long)fc_unsignedLongLongValue;
- (_Bool)fc_hasTagIDPrefix;
- (_Bool)fc_hasArticleIDPrefix;
- (id)fc_numberFollowingString:(id)arg1;
- (id)fc_stringByPrefixingLinesWithString:(id)arg1;
- (id)fc_stringByReplacingOccurrencesOfStrings:(id)arg1 withString:(id)arg2;
- (id)fc_stringByMultiplyingStringByCount:(unsigned long long)arg1;
- (id)fc_stringByReplacingPrefix:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)fc_stringByRemovingPunctuation;
- (id)fc_lowerCaseStringByTrimmingWhiteSpace;
- (id)tokenizedLowerCaseStringWithMinimumLength:(unsigned long long)arg1;
- (id)fc_lowercaseTokensWithMinimumLength:(unsigned long long)arg1;
@property(readonly, nonatomic) struct _NSRange range;
@end
