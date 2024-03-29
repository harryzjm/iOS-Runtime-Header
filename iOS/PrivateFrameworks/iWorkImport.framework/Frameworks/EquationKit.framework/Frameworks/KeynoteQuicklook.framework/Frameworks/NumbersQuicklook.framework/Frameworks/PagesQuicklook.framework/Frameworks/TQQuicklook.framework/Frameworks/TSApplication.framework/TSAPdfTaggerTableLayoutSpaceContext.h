//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSAPdfTaggerTableChunkContext, TSTLayoutSpace;

@interface TSAPdfTaggerTableLayoutSpaceContext
{
    unsigned int _currentRowIndex;
    int _currentTableRegion;
    TSAPdfTaggerTableChunkContext *_tableChunkContext;
    TSTLayoutSpace *_tableLayoutSpace;
    struct TSUCellRect _bodyCellRange;
}

- (void).cxx_destruct;
@property(nonatomic) int currentTableRegion; // @synthesize currentTableRegion=_currentTableRegion;
@property(nonatomic) unsigned int currentRowIndex; // @synthesize currentRowIndex=_currentRowIndex;
@property(readonly, nonatomic) struct TSUCellRect bodyCellRange; // @synthesize bodyCellRange=_bodyCellRange;
@property(readonly, nonatomic) TSTLayoutSpace *tableLayoutSpace; // @synthesize tableLayoutSpace=_tableLayoutSpace;
@property(readonly, nonatomic) TSAPdfTaggerTableChunkContext *tableChunkContext; // @synthesize tableChunkContext=_tableChunkContext;
- (void)addRow:(unsigned int)arg1;
@property(readonly, nonatomic) struct _NSRange bodyRowRange;
- (id)initWithStateOfTagger:(id)arg1 tableLayoutSpace:(id)arg2;

@end

