//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSCEFormulaRewriteInfo_RowColumnInfo, TSCEFormulaRewrite_MergeOriginMovedInfo, TSCEFormulaRewrite_RegionMergedInfo, TSCEFormulaRewrite_RegionMovedInfo, TSCEFormulasForUndo, TSCEGroupByChange, TSCERewriteGroupNodeUIDInfo, TSCERewriteTableUIDInfo, TSCETableTransposedInfo, TSKShuffleMapping;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewriteSpec : NSObject
{
    int _type;
    UUIDData_5fbc143e _tableUID;
    UUIDData_5fbc143e _conditionalStyleOwnerUID;
    _Bool _isInverse;
    TSCETableTransposedInfo *_transposedInfo;
    TSCEFormulaRewriteInfo_RowColumnInfo *_rowColumnInfo;
    TSCEFormulaRewrite_RegionMovedInfo *_regionMovedInfo;
    TSCEFormulaRewrite_RegionMergedInfo *_mergeInfo;
    TSCEFormulaRewrite_MergeOriginMovedInfo *_mergeOriginMovedInfo;
    TSKShuffleMapping *_shuffleMap;
    TSCERewriteTableUIDInfo *_tableUIDInfo;
    TSCERewriteGroupNodeUIDInfo *_groupNodeUIDInfo;
    TSCEGroupByChange *_groupByChange;
    TSCEFormulasForUndo *_formulasForUndo;
    id _warningSetsForUndo;
    unordered_map_9596ee37 _conditionalStylesForUndo;
    NSMutableArray *_nestedRewrites;
    struct unordered_map<TSCECellRef, TSUCellRect, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, TSUCellRect>>> _mergeRangesContainingFormulas;
    _Bool _canBeNested;
    id _tableTranslator;
    UUIDData_5fbc143e _fromTableUID;
}

+ (_Bool)rewriteTypeUsesAmendRewriteSpec:(int)arg1;
@property(retain, nonatomic) id tableTranslator; // @synthesize tableTranslator=_tableTranslator;
@property(nonatomic) _Bool canBeNested; // @synthesize canBeNested=_canBeNested;
@property(retain, nonatomic) id warningSetsForUndo; // @synthesize warningSetsForUndo=_warningSetsForUndo;
@property(retain, nonatomic) TSCEFormulasForUndo *formulasForUndo; // @synthesize formulasForUndo=_formulasForUndo;
@property(readonly, retain, nonatomic) TSKShuffleMapping *shuffleMap; // @synthesize shuffleMap=_shuffleMap;
@property(readonly, retain, nonatomic) TSCEGroupByChange *groupByChange; // @synthesize groupByChange=_groupByChange;
@property(readonly, retain, nonatomic) TSCERewriteGroupNodeUIDInfo *groupNodeUIDInfo; // @synthesize groupNodeUIDInfo=_groupNodeUIDInfo;
@property(readonly, retain, nonatomic) TSCERewriteTableUIDInfo *tableUIDInfo; // @synthesize tableUIDInfo=_tableUIDInfo;
@property(readonly, retain, nonatomic) TSCEFormulaRewrite_MergeOriginMovedInfo *mergeOriginMovedInfo; // @synthesize mergeOriginMovedInfo=_mergeOriginMovedInfo;
@property(readonly, retain, nonatomic) TSCEFormulaRewrite_RegionMergedInfo *mergeInfo; // @synthesize mergeInfo=_mergeInfo;
@property(readonly, retain, nonatomic) TSCEFormulaRewrite_RegionMovedInfo *regionMovedInfo; // @synthesize regionMovedInfo=_regionMovedInfo;
@property(readonly, retain, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *rowColumnInfo; // @synthesize rowColumnInfo=_rowColumnInfo;
@property(readonly, retain, nonatomic) TSCETableTransposedInfo *transposedInfo; // @synthesize transposedInfo=_transposedInfo;
@property(readonly, nonatomic) UUIDData_5fbc143e conditionalStyleOwnerUID; // @synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUID;
@property(readonly, nonatomic) UUIDData_5fbc143e fromTableUID; // @synthesize fromTableUID=_fromTableUID;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
@property(nonatomic) _Bool isInverse; // @synthesize isInverse=_isInverse;
@property(readonly, nonatomic) int rewriteType; // @synthesize rewriteType=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToMessage:(struct FormulaRewriteSpecArchive *)arg1 archiver:(id)arg2;
- (id)initFromMessage:(const struct FormulaRewriteSpecArchive *)arg1;
- (vector_4dc5f307)expandedRowColumnUuids;
- (struct TSCERangeCoordinate)affectedRange;
- (void)clearTableIndexes;
- (void)didModifyTable:(id)arg1 calcEngine:(id)arg2;
- (void)didModifyTable:(id)arg1;
- (void)didModifySrcTable:(id)arg1 dstTable:(id)arg2;
- (void)willModifySrcTable:(id)arg1 srcUidResolver:(id)arg2 dstTable:(id)arg3 dstUidResolver:(id)arg4;
- (id)amendRewriteWithCalcEngine:(id)arg1;
- (id)prepareToRewriteWithCalcEngine:(id)arg1;
- (id)nestedRewrites;
- (void)addNestedRewrite:(id)arg1;
- (void)willModifyTable:(id)arg1 uidResolver:(id)arg2 calcEngine:(id)arg3;
- (void)loadMergeRangesContainingFormulasInTable:(id)arg1 calcEngine:(id)arg2;
- (struct TSUCellRect)mergeRangeAtOriginalCellRef:(const struct TSCECellRef *)arg1;
- (struct TSCECellRef)originalCellRefForUpdatedCellRef:(const struct TSCECellRef *)arg1;
- (struct TSCECellRef)updatedCellRefForOriginalCellRef:(const struct TSCECellRef *)arg1;
- (_Bool)isForTable:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)affectedConditionalStyleOwnerUID;
- (unordered_set_c6a929bd)affectedOwnerUIDs;
- (UUIDData_5fbc143e)affectedOwnerUID;
- (id)description;
- (id)miniDescription;
- (unordered_map_9596ee37 *)conditionalStylesForUndo;
- (id)initForGroupBy:(const UUIDData_5fbc143e *)arg1 groupNodeUIDReassignment:(const UUIDMap_b66c2694 *)arg2;
- (id)initForGroupBy:(const UUIDData_5fbc143e *)arg1 withGroupByChange:(id)arg2;
- (id)initForTableUIDReassignment:(const UUIDMap_b66c2694 *)arg1;
- (id)initForMergeOriginsMovedWithMap:(const unordered_map_ddbde191 *)arg1 reverseMap:(const unordered_map_ddbde191 *)arg2 inTableUID:(const UUIDData_5fbc143e *)arg3;
- (id)initForUndoMergeCellsWithTableUID:(const UUIDData_5fbc143e *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3 mergeSource:(struct TSUCellCoord)arg4;
- (id)initForMergeCellsWithTableUID:(const UUIDData_5fbc143e *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3 mergeSource:(struct TSUCellCoord)arg4;
- (id)initForCategorizedTableChromeToBaseRewriterWithSrcTableUID:(const UUIDData_5fbc143e *)arg1 srcTract:(const UUIDRect_d701734b *)arg2 dstTableUID:(const UUIDData_5fbc143e *)arg3 destTract:(const UUIDRect_d701734b *)arg4 translator:(id)arg5;
- (id)initForCategorizedTableBaseToChromeRewriterWithSrcTableUID:(const UUIDData_5fbc143e *)arg1 srcTract:(const UUIDRect_d701734b *)arg2 dstTableUID:(const UUIDData_5fbc143e *)arg3 destTract:(const UUIDRect_d701734b *)arg4 translator:(id)arg5;
- (id)initForMovingRegionWithSrcTableUID:(const UUIDData_5fbc143e *)arg1 srcTract:(const UUIDRect_d701734b *)arg2 dstTableUID:(const UUIDData_5fbc143e *)arg3 destTract:(const UUIDRect_d701734b *)arg4;
- (id)initForReorderRowsWithTableUID:(const UUIDData_5fbc143e *)arg1 rowUids:(const vector_4dc5f307 *)arg2 shuffleMap:(id)arg3;
- (id)initForSortWithTableUID:(const UUIDData_5fbc143e *)arg1 rowUids:(const vector_4dc5f307 *)arg2 shuffleMap:(id)arg3;
- (id)initForMovingRowsOrColumnsInTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 shuffleMap:(id)arg3 areRows:(_Bool)arg4;
@property(nonatomic) UUIDData_5fbc143e insertAtUid;
- (id)initForInsertingRowsOrColumnsIntoTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 areRows:(_Bool)arg3;
- (id)initForRemoveRowsOrColumnsFromTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 areRows:(_Bool)arg3;
- (id)initWithTransposeTable:(const UUIDData_5fbc143e *)arg1 transposedBodyRange:(struct TSCERangeCoordinate)arg2 numberOfFooterRows:(unsigned int)arg3;
- (id)initWithOwnerInsertion:(const UUIDData_5fbc143e *)arg1 fromOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (id)initWithOwnerDeletion:(const UUIDData_5fbc143e *)arg1;

@end

