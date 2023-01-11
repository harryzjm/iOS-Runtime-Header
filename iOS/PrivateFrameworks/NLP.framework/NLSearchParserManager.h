//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NLSearchParserManager : NSObject
{
    void *_parser;
}

+ (id)availableLanguages;
+ (id)defaultManager;
- (void)dealloc;
- (void)enumerateSearchSuggestions:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateAttributedParsesForQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDateRangeAttributedParseForOptions:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithLocale:(id)arg1 context:(id)arg2 options:(id)arg3;
- (id)initWithOptions:(id)arg1;

@end

