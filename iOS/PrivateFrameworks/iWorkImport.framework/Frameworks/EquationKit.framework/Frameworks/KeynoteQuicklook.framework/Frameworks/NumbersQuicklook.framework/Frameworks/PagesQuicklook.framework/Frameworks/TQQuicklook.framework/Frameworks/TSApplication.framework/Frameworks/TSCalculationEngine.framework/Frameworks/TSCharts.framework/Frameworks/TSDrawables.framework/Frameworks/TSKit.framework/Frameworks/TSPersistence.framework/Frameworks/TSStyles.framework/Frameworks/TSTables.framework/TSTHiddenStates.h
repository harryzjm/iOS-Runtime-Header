//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSTHiddenStateExtent, TSTHiddenStatesOwner, TSTTableFilterSet;

@interface TSTHiddenStates : NSObject
{
    TSTHiddenStateExtent *_rowHiddenStateExtent;
    TSTHiddenStateExtent *_columnHiddenStateExtent;
    TSTHiddenStatesOwner *_hiddenStatesOwner;
    _Bool _loadedIndexesAfterUnarchive;
}

+ (void)invalidateForChangingIndexes:(id)arg1 isRow:(_Bool)arg2 forTable:(id)arg3;
+ (id)mutableIndexSetByIntersecting:(id)arg1 withRange:(struct _NSRange)arg2;
+ (struct TSUCellCoord)filterFormulaCoordForViewColumnRow:(unsigned int)arg1;
+ (struct TSUCellCoord)filterFormulaContainingCell;
+ (struct TSUCellCoord)filterFormulaCoordinateForColumnOrRow:(unsigned int)arg1;
+ (unsigned int)columnOrRowIndexForFilterCoordinate:(const struct TSUCellCoord *)arg1;
+ (unsigned short)filterCoordTypeForFilterCoordinate:(const struct TSUCellCoord *)arg1;
+ (struct TSUCellCoord)filterFormulaCoordinateForType:(unsigned short)arg1 columnOrRowIndex:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool loadedIndexesAfterUnarchive; // @synthesize loadedIndexesAfterUnarchive=_loadedIndexesAfterUnarchive;
@property(readonly, nonatomic) TSTHiddenStateExtent *columnHiddenStateExtent; // @synthesize columnHiddenStateExtent=_columnHiddenStateExtent;
@property(readonly, nonatomic) TSTHiddenStateExtent *rowHiddenStateExtent; // @synthesize rowHiddenStateExtent=_rowHiddenStateExtent;
@property(nonatomic) __weak TSTHiddenStatesOwner *hiddenStatesOwner; // @synthesize hiddenStatesOwner=_hiddenStatesOwner;
- (_Bool)verifyConnectionsWithTableModel:(id)arg1;
- (void)copyFromHiddenStates:(id)arg1 forRange:(struct TSUCellRect)arg2 withContext:(id)arg3 isWholeTableCopy:(_Bool)arg4;
- (id)hiddenColumnIndexes;
- (id)hiddenRowIndexes;
- (id)mutableFilteredColumnIndexes;
- (id)mutableFilteredRowIndexes;
- (id)mutablePivotHiddenColumnIndexes;
- (id)mutablePivotHiddenRowIndexes;
- (id)mutableUserHiddenColumnIndexes;
- (id)mutableUserHiddenRowIndexes;
- (void)swapBaseRowAtIndex:(struct TSUModelRowIndex)arg1 withRowAtIndex:(struct TSUModelRowIndex)arg2;
- (void)moveBaseColumnRange:(struct _NSRange)arg1 toColumnIndex:(struct TSUModelColumnIndex)arg2;
- (void)moveBaseRowRange:(struct _NSRange)arg1 toRowIndex:(struct TSUModelRowIndex)arg2;
- (void)moveViewColumnRange:(struct _NSRange)arg1 toColumnIndex:(struct TSUViewColumnIndex)arg2;
- (void)deleteColumnsFromBaseRange:(struct _NSRange)arg1 columnUids:(const void *)arg2;
- (void)deleteRowsFromBaseRange:(struct _NSRange)arg1 rowUids:(const void *)arg2;
- (void)insertNewColumnsInBaseRange:(struct _NSRange)arg1;
- (void)insertNewRowsInBaseRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) unsigned int numberOfUserHiddenColumns;
@property(readonly, nonatomic) unsigned int numberOfUserHiddenRows;
@property(readonly, nonatomic) unsigned int numberOfHiddenColumns;
@property(readonly, nonatomic) unsigned int numberOfHiddenRows;
@property(readonly, nonatomic) _Bool hasHiddenColumnsOrRows;
@property(readonly, nonatomic) _Bool hasCollapsedColumns;
@property(readonly, nonatomic) _Bool hasCollapsedRows;
- (_Bool)hasFilterRulesWithTable:(id)arg1 inBaseColumns:(id)arg2;
- (void)dirtyFilterStateForFooters;
- (void)dirtyFilterStateForHeaders;
- (void)dirtyFilterState;
- (void)filterSetUpdated;
- (_Bool)hasActiveFilters;
- (void)setFilterSetType:(int)arg1;
- (void)enableFilterSet:(_Bool)arg1;
- (void)mutateFormulaFiltersWithTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)duplicateFilterSetInUidFormWithTable:(id)arg1;
- (id)duplicateFilterSet;
@property(nonatomic) _Bool needsFilterFormulaRewriteForImport;
@property(retain, nonatomic) TSTTableFilterSet *filterSetForColumns;
@property(retain, nonatomic) TSTTableFilterSet *filterSetForRows;
- (id)pruneCollapsedColumnGroups;
- (id)pruneCollapsedRowGroups;
- (id)applyCollapseExpandState:(id)arg1 outUndoState:(id *)arg2;
- (id)copyCollapsedStateToUpdatedRowGroupUids:(id)arg1;
- (id)collapsedColumnGroupUids;
- (id)expandSummaryColumnGroupUIDs:(id)arg1;
- (id)collapseSummaryColumnGroupUIDs:(id)arg1;
- (id)collapsedRowGroupUids;
- (id)expandSummaryRowGroupUIDs:(id)arg1;
- (id)collapseSummaryRowGroupUIDs:(id)arg1;
- (void)setColumnGroupUID:(const struct TSKUIDStruct *)arg1 asCollapsed:(_Bool)arg2;
- (_Bool)isColumnGroupUIDCollapsed:(const struct TSKUIDStruct *)arg1;
- (void)setRowGroupUID:(const struct TSKUIDStruct *)arg1 asCollapsed:(_Bool)arg2;
- (_Bool)isRowGroupUIDCollapsed:(const struct TSKUIDStruct *)arg1;
- (_Bool)isGroupCollapsedAndVisible:(const struct TSKUIDStruct *)arg1 dimension:(long long)arg2;
- (_Bool)isGroupOrParentsCollapsed:(const struct TSKUIDStruct *)arg1 dimension:(long long)arg2;
- (void)remapTableUIDsInFormulasWithMap:(const void *)arg1 calcEngine:(id)arg2;
@property(nonatomic) _Bool needsToUpdateFilterSetForImport;
@property(nonatomic) struct TSKUIDStruct hiddenStateOwnerForColumnsUID;
@property(nonatomic) struct TSKUIDStruct hiddenStateOwnerForRowsUID;
- (void)setFormulaOwnerUIDsWithMap:(id)arg1;
- (void)willChangeGroupByTo:(id)arg1;
- (void)setTableModel:(id)arg1;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const struct TSKUIDStruct *)arg2;
- (void)syncUpHiddenStateFormulaOwnerUIDs;
- (struct TSCERangeRef)referenceToHiddenStateFromColumn:(unsigned short)arg1 toColumn:(unsigned short)arg2;
- (struct TSCERangeRef)referenceToHiddenStateFromRow:(unsigned int)arg1 toRow:(unsigned int)arg2;
- (id)indexesOfHiddenRowsInBaseCellRange:(struct TSUModelCellRect)arg1;
- (struct TSUModelRowIndex)numberOfUserHiddenRowsInBaseCellRange:(struct TSUModelCellRect)arg1;
- (struct TSUModelRowIndex)numberOfHiddenRowsInBaseCellRange:(struct TSUModelCellRect)arg1;
- (id)indexesOfHiddenColumnsInBaseCellRange:(struct TSUModelCellRect)arg1;
- (struct TSUModelColumnIndex)numberOfHiddenColumnsInBaseCellRange:(struct TSUModelCellRect)arg1;
- (unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)arg1;
- (unsigned int)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowAfterRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowBeforeRowAtIndex:(unsigned int)arg1;
- (_Bool)hasHiddenColumnAtIndex:(unsigned short)arg1;
- (_Bool)hasHiddenRowAtIndex:(unsigned int)arg1;
- (_Bool)anyHiddenColumnsInCellRange:(struct TSUCellRect)arg1 forAction:(unsigned char)arg2;
- (_Bool)anyHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfVisibleColumnsInColumnRange:(id)arg1;
- (id)indexesOfVisibleColumnsInCellRegion:(id)arg1;
- (id)indexesOfVisibleColumnsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfUserHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (unsigned char)hidingActionForBaseColumnAtIndex:(struct TSUModelColumnIndex)arg1;
- (unsigned char)hidingActionForColumnAtIndex:(unsigned short)arg1;
- (_Bool)hasHiddenColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (_Bool)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1 forAction:(unsigned char)arg2;
- (_Bool)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfCollapsedColumnsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfCollapsedRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfVisibleRowsInRowRange:(id)arg1;
- (id)indexesOfUserVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfVisibleRowsInCellRegion:(id)arg1;
- (id)indexesOfVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfFilteredColumnsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfFilteredRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned char)hidingActionForBaseRowAtIndex:(struct TSUModelRowIndex)arg1;
- (unsigned char)hidingActionForRowAtIndex:(unsigned int)arg1;
- (_Bool)hasHiddenRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (void)invalidateViewGeometry;
- (void)invalidateAllCollapsed;
- (void)clearAllFiltered;
- (void)clearAllPivotHiddenAndInvalidate:(_Bool)arg1;
- (_Bool)showBaseColumnAtIndex:(struct TSUModelColumnIndex)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideBaseColumnAtIndex:(struct TSUModelColumnIndex)arg1 forAction:(unsigned char)arg2;
- (_Bool)showBaseRowAtIndex:(struct TSUModelRowIndex)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideBaseRowAtIndex:(struct TSUModelRowIndex)arg1 forAction:(unsigned char)arg2;
- (void)showColumnsAtIndexes:(id)arg1 forAction:(unsigned char)arg2 invalidate:(_Bool)arg3;
- (void)hideColumnsAtIndexes:(id)arg1 forAction:(unsigned char)arg2 invalidate:(_Bool)arg3;
- (void)showRowsAtIndexes:(id)arg1 forAction:(unsigned char)arg2 invalidate:(_Bool)arg3;
- (void)hideRowsAtIndexes:(id)arg1 forAction:(unsigned char)arg2 invalidate:(_Bool)arg3;
- (_Bool)showColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (_Bool)showRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (void)encodeToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2 forHiddenStatesOwner:(id)arg3;
- (void)loadIndexesFromTable:(id)arg1;
- (id)translator;
- (id)initWithHiddenStatesOwner:(id)arg1;
- (id)initWithHiddenStatesOwner:(id)arg1 shouldRegister:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

