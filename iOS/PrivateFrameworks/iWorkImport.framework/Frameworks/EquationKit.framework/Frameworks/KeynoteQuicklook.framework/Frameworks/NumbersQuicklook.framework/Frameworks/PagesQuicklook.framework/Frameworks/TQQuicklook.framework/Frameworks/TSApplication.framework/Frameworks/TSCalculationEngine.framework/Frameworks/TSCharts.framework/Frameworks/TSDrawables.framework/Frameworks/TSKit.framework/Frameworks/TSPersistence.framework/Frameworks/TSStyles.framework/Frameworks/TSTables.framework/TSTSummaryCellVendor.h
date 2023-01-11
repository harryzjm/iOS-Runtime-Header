//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class TSTTableInfo;

@interface TSTSummaryCellVendor : TSPObject
{
    _Bool _hasCustomFormatsToPaste;
    TSTTableInfo *_tableInfo;
    map_cd95b0b7 _cellUIDMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasCustomFormatsToPaste; // @synthesize hasCustomFormatsToPaste=_hasCustomFormatsToPaste;
@property(readonly, nonatomic) map_cd95b0b7 *cellUIDMap; // @synthesize cellUIDMap=_cellUIDMap;
@property(readonly, nonatomic) __weak TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (void)saveToArchive:(struct SummaryCellVendorArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct SummaryCellVendorArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
- (id)mapReassigningPasteboardCustomFormatKeys:(id)arg1;
- (void)runChange:(id)arg1 withSummaryCellMap:(id)arg2 migrationHelper:(id)arg3;
- (id)cellMapForWildcardCells;
@property(readonly, nonatomic) unsigned long long cellCount;
- (void)removeCellsInColumnUid:(UUIDData_5fbc143e *)arg1;
- (int)getCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2;
- (id)cellAtCellUID:(const struct TSTCellUID *)arg1;
- (void)setCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2;
- (id)p_cellSpecForAggregateType:(unsigned char)arg1 forColumnUID:(UUIDData_5fbc143e)arg2 atGroupLevel:(unsigned char)arg3;
- (void)setAggregateType:(unsigned char)arg1 forColumnUID:(UUIDData_5fbc143e)arg2 atGroupLevel:(unsigned char)arg3;
- (void)enumerateCellsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setTableInfoForGSSP:(id)arg1;
- (id)initWithTableInfo:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2;

@end
