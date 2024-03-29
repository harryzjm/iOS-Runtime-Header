//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRegularExpression;

@interface TSCERegexMatcher : NSObject
{
    NSRegularExpression *_regularExpression;
}

+ (id)regexMatcherWithRegexString:(id)arg1;
+ (id)regexMatcherWithRegexString:(id)arg1 caseSensitive:(_Bool)arg2;
+ (id)regexMatcherWithRegexString:(id)arg1 caseSensitive:(_Bool)arg2 entireMatch:(_Bool)arg3;
+ (id)regexMatcherWithStringMatch:(id)arg1;
+ (id)regexMatcherWithStringMatch:(id)arg1 caseSensitive:(_Bool)arg2 entireMatch:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 withTemplate:(id)arg4;
- (unsigned long long)numberOfMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)matchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfFirstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfMatchInString:(id)arg1 occurrence:(long long)arg2 matchesFound:(out long long *)arg3;
- (struct _NSRange)rangeOfMatchInString:(id)arg1 occurrence:(long long)arg2;
- (struct _NSRange)rangeOfFirstMatchInString:(id)arg1;
- (_Bool)containsMatchInString:(id)arg1;
- (id)initWithRegexString:(id)arg1 caseSensitive:(_Bool)arg2 entireMatch:(_Bool)arg3;
- (id)initWithString:(id)arg1 caseSensitive:(_Bool)arg2 entireMatch:(_Bool)arg3;

@end

