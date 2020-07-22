//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSPCopying-Protocol.h>

@class NSString, TSWPListStyle, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSWPTOCEntryData <TSPCopying>
{
    unsigned long long _paragraphIndex;
    unsigned long long _pageNumber;
    NSString *_numberFormat;
    NSString *_heading;
    TSWPParagraphStyle *_indexedStyle;
    TSWPListStyle *_indexedListStyle;
    unsigned long long _indexedListStart;
    unsigned long long _indexedParagraphLevel;
}

+ (id)tocEntryDataWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(id)arg3 heading:(id)arg4 indexedStyle:(id)arg5 indexedListStyle:(id)arg6 indexedListStart:(unsigned long long)arg7 indexedParagraphLevel:(unsigned long long)arg8;
@property(readonly, nonatomic) unsigned long long indexedParagraphLevel; // @synthesize indexedParagraphLevel=_indexedParagraphLevel;
@property(readonly, nonatomic) unsigned long long indexedListStart; // @synthesize indexedListStart=_indexedListStart;
@property(readonly, nonatomic) TSWPListStyle *indexedListStyle; // @synthesize indexedListStyle=_indexedListStyle;
@property(readonly, nonatomic) TSWPParagraphStyle *indexedStyle; // @synthesize indexedStyle=_indexedStyle;
@property(readonly, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(readonly, copy, nonatomic) NSString *numberFormat; // @synthesize numberFormat=_numberFormat;
@property(readonly, nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(readonly, nonatomic) unsigned long long paragraphIndex; // @synthesize paragraphIndex=_paragraphIndex;
- (void).cxx_destruct;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TOCEntryInstanceArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct TOCEntryInstanceArchive *)arg1 unarchiver:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithContext:(id)arg1;
- (id)initWithParagraphIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2 numberFormat:(id)arg3 heading:(id)arg4 indexedStyle:(id)arg5 indexedListStyle:(id)arg6 indexedListStart:(unsigned long long)arg7 indexedParagraphLevel:(unsigned long long)arg8;

@end

