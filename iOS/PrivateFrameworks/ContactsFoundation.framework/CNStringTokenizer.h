//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CNStringTokenizer : NSObject
{
    struct __CFStringTokenizer *_tokenizer;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (_Bool)isCharacterNonBreaking:(unsigned short)arg1;
+ (id)adjustRanges:(id)arg1 toIncludeNonBreakingCharactersInString:(id)arg2;
+ (id)tokenizeString:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(readonly, nonatomic) struct __CFStringTokenizer *tokenizer; // @synthesize tokenizer=_tokenizer;
- (id)rangesOfWordUnitTokensInString:(id)arg1;
- (id)rangesOfWordTokensInString:(id)arg1;
- (id)tokenizeString:(id)arg1;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)init;

@end
