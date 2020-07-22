//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface TPSectionHint : NSObject
{
    NSMutableArray *_pageHints;
    unsigned long long _documentStartPageIndex;
}

+ (_Bool)verifyHints:(id)arg1 withBodyStorage:(id)arg2 upToPageIndex:(unsigned long long)arg3;
@property(nonatomic) unsigned long long documentStartPageIndex; // @synthesize documentStartPageIndex=_documentStartPageIndex;
@property(readonly, nonatomic) NSArray *pageHints; // @synthesize pageHints=_pageHints;
- (void).cxx_destruct;
- (void)saveToArchive:(struct SectionHintArchive *)arg1 archiver:(id)arg2 context:(id)arg3 shouldArchiveHintBlock:(CDUnknownBlockType)arg4;
- (id)initWithArchive:(const struct SectionHintArchive *)arg1 unarchiver:(id)arg2;
- (void)setPageHints:(id)arg1;
- (_Bool)containsDocumentPageIndex:(unsigned long long)arg1;
- (_Bool)hasPageHintOfKind:(int)arg1 beforePageIndex:(unsigned long long)arg2;
- (_Bool)hasPageHintOfKind:(int)arg1 atPageIndex:(unsigned long long)arg2;
- (void)trimPageHintsFromPageIndex:(unsigned long long)arg1;
- (id)pageHintForPageIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct _NSRange documentPageRange;
@property(readonly, nonatomic) unsigned long long lastPageIndex;
@property(readonly, nonatomic) unsigned long long pageCountWithoutFillerPage;
@property(readonly, nonatomic) unsigned long long pageCount;
- (id)copyForArchiving;
- (id)init;

@end
