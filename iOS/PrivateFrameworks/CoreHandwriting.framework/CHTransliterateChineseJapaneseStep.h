//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHTransliterateChineseJapaneseStep
{
    _Bool _transliterateSentences;
    void **_icuTransliterator;
}

@property(nonatomic) _Bool transliterateSentences; // @synthesize transliterateSentences=_transliterateSentences;
@property(nonatomic) void **icuTransliterator; // @synthesize icuTransliterator=_icuTransliterator;
- (void)dealloc;
- (id)handleChineseLigaturesInString:(id)arg1;
- (id)process:(id)arg1 options:(id)arg2;
- (id)initWithTransliterateSentences:(_Bool)arg1;

@end

