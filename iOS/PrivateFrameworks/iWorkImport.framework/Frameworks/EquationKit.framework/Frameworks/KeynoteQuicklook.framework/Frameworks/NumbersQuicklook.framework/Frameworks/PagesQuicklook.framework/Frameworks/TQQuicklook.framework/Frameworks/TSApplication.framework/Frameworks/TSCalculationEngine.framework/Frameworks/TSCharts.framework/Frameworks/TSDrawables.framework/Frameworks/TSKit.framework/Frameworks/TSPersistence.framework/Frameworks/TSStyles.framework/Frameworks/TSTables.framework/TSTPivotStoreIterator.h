//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSTCell, TSTPivotTranslator, TSTTableDataListCache, TSTTableDataStore, TSTTableTileRowInfo;

@interface TSTPivotStoreIterator
{
    struct TSUViewCellCoord _currentViewCellID;
    struct TSUModelCellCoord _currentBaseCellID;
    struct TSUModelCellCoord _currentSummaryCellID;
    _Bool _currentCellIDIsBase;
    unsigned int _currentRowIndex;
    TSTCell *_cell;
    TSTTableDataStore *_baseDataStore;
    TSTTableDataStore *_summaryDataStore;
    TSTTableDataListCache *_baseDataListCache;
    TSTTableDataListCache *_summaryDataListCache;
    TSTTableTileRowInfo *_baseRow;
    TSTTableTileRowInfo *_summaryRow;
    TSTPivotTranslator *_translator;
}

- (void).cxx_destruct;
- (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)getNext;
- (void)updateFormulaForCellData:(id)arg1;
- (void)updateCellData:(id)arg1;
- (id)initWithInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchMask:(unsigned long long)arg4;

@end

