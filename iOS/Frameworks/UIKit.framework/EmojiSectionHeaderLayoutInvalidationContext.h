//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexSet, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface EmojiSectionHeaderLayoutInvalidationContext
{
    NSMutableIndexSet *_invalidatedSections;
    struct __CFDictionary *_headerWidthDict;
}

@property(readonly, nonatomic) NSIndexSet *invalidatedSections; // @synthesize invalidatedSections=_invalidatedSections;
- (double)preferredWidthForHeaderInSection:(long long)arg1;
- (void)dealloc;

@end

