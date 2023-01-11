//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLTransformerProtocol-Protocol.h>

@class NSLocale, NSString;

@interface PMLHashingVectorizer : NSObject <PMLTransformerProtocol>
{
    int _buckets;
    _Bool _normalize;
    struct _NSRange _characterNGramRange;
    struct _NSRange _tokenNGramRange;
    _Bool _shouldNormalizeTokens;
    _Bool _shouldNormalizeCharacters;
    NSLocale *_localeForNonwordTokens;
    _Bool _tokenizeNewlines;
    _Bool _intercept;
}

+ (id)withBucketSize:(int)arg1 characterNGramRange:(struct _NSRange)arg2 tokenNGramRange:(struct _NSRange)arg3 shouldNormalizeTokens:(_Bool)arg4 shouldNormalizeCharacters:(_Bool)arg5 withIntercept:(_Bool)arg6;
+ (id)withBucketSize:(int)arg1 characterNGramRange:(struct _NSRange)arg2 tokenNGramRange:(struct _NSRange)arg3 shouldNormalizeTokens:(_Bool)arg4 shouldNormalizeCharacters:(_Bool)arg5 localeForNonwordTokens:(id)arg6 tokenizeNewlines:(_Bool)arg7 withIntercept:(_Bool)arg8;
+ (id)withBucketSize:(int)arg1 ngrams:(int)arg2 localeForNonwordTokens:(id)arg3 tokenizeNewlines:(_Bool)arg4 andIntercept:(_Bool)arg5;
+ (id)withBucketSize:(int)arg1 andNgrams:(int)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool normalize; // @synthesize normalize=_normalize;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToHashingVectorizer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transformBatch:(id)arg1;
- (id)transform:(id)arg1;
- (id)init;
- (id)initWithBucketSize:(int)arg1 characterNGramRange:(struct _NSRange)arg2 tokenNGramRange:(struct _NSRange)arg3 shouldNormalizeTokens:(_Bool)arg4 shouldNormalizeCharacters:(_Bool)arg5 localeForNonwordTokens:(id)arg6 tokenizeNewlines:(_Bool)arg7 withIntercept:(_Bool)arg8;
- (id)initWithBucketSize:(int)arg1 ngrams:(int)arg2 localeForNonwordTokens:(id)arg3 tokenizeNewlines:(_Bool)arg4 andIntercept:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
