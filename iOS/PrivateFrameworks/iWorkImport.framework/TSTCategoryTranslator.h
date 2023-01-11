//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSTGroupByChangeProtocol-Protocol.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface TSTCategoryTranslator <TSTGroupByChangeProtocol>
{
    unsigned long long _groupingsChangingLevel;
    _Bool _sawGroupingChangeNeedingReset;
    _Bool _suspendNotify;
    NSIndexSet *_summaryRowIndexes;
    NSIndexSet *_labelRowIndexes;
    NSIndexSet *_summaryAndLabelRowIndexes;
}

@property(nonatomic) _Bool suspendNotify; // @synthesize suspendNotify=_suspendNotify;
@property(retain, nonatomic) NSIndexSet *summaryAndLabelRowIndexes; // @synthesize summaryAndLabelRowIndexes=_summaryAndLabelRowIndexes;
@property(retain, nonatomic) NSIndexSet *labelRowIndexes; // @synthesize labelRowIndexes=_labelRowIndexes;
@property(retain, nonatomic) NSIndexSet *summaryRowIndexes; // @synthesize summaryRowIndexes=_summaryRowIndexes;
- (void).cxx_destruct;
- (_Bool)areMapsStale;
- (_Bool)checkMapsAndAssert:(_Bool)arg1;
- (Class)iteratorClass;
- (void)didMakeGroupingChangesInRowUIDs:(id)arg1;
- (void)addReceiverToGroupBy:(id)arg1;
- (unsigned char)categoryGroupLevelAtLabelRow:(struct TSUViewRowIndex)arg1;
- (unsigned char)categoryGroupLevelAtSummaryRow:(struct TSUViewRowIndex)arg1;
- (id)populatedCategoryGroupLevelsInColumn:(struct TSUViewColumnIndex)arg1;
- (void)setStorageParentToInfo:(id)arg1;
- (id)allRichTextStorages;
- (unsigned long long)numberOfPopulatedCells;
- (int)insertRowsAtIndex:(struct TSUViewRowIndex)arg1 uids:(const vector_4dc5f307 *)arg2 metadatas:(id)arg3 tableArea:(unsigned long long)arg4 unsetFilterHidingAction:(_Bool)arg5;
- (int)insertColumnsAtIndex:(struct TSUViewColumnIndex)arg1 uids:(const vector_4dc5f307 *)arg2 metadatas:(id)arg3 tableArea:(unsigned long long)arg4;
- (_Bool)hasCommentAtCellID:(struct TSUViewCellCoord)arg1;
- (struct TSUCellCoord)aggCoordFromViewCoord:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)baseCoordFromViewCoord:(struct TSUCellCoord)arg1;
- (struct TSUModelCellCoord)summaryCellCoordForCellUID:(const struct TSTCellUID *)arg1;
- (_Bool)cellExistsAtCellID:(struct TSUViewCellCoord)arg1;
- (_Bool)isValidMergeRange:(struct TSUViewCellRect)arg1;
- (vector_1235e7c3)mergeRangesAndCrumbsIntersectingRange:(struct TSUViewCellRect)arg1;
- (vector_1235e7c3)mergeRangesIntersectingCellRegion:(id)arg1;
- (vector_1235e7c3)mergeRangesIntersectingRange:(struct TSUViewCellRect)arg1;
- (void)enumerateMergesIntersectingCellRegion:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)mergeActionForRegion:(id)arg1 nonOriginPartialsOnly:(_Bool)arg2;
- (id)mergeActionForRegion:(id)arg1;
- (id)removeReturningInverseForRegion:(id)arg1;
- (id)shrinkReturningInverseForRegion:(id)arg1;
- (id)expandCellRegionToCoverMergedCells:(id)arg1;
- (struct TSUViewCellRect)expandCellRangeToCoverMergedCells:(struct TSUViewCellRect)arg1;
- (_Bool)hasRangeSpanningRowsForCellRange:(struct TSUViewCellRect)arg1;
- (id)mergedGridIndicesForDimension:(long long)arg1;
- (_Bool)hasMergeRangesIntersectingCellRegion:(id)arg1;
- (_Bool)hasMergeRangeSpanningRowsForCellRange:(struct TSUViewCellRect)arg1;
- (_Bool)mergeRangesPartiallyIntersectCellRegion:(id)arg1;
- (_Bool)mergeRangesPartiallyIntersectCellRange:(struct TSUViewCellRect)arg1;
- (struct TSUViewCellCoord)mergeOriginForCellID:(struct TSUViewCellCoord)arg1;
- (struct TSUViewCellRect)mergeRangeAtCellID:(struct TSUViewCellCoord)arg1;
- (_Bool)unmergeCellRange:(struct TSUViewCellRect)arg1;
- (_Bool)mergeCellRange:(struct TSUViewCellRect)arg1;
- (struct TSUViewCellCoord)cellIDForCellContainingRichTextStorage:(id)arg1;
- (void)moveColumnRange:(struct _NSRange)arg1 toColumnIndex:(struct TSUViewColumnIndex)arg2;
- (void)removeColumnsAtIndexes:(id)arg1;
- (void)removeRowsAtIndexes:(id)arg1;
- (int)getValue:(out struct TSCEValue *)arg1 atCellID:(struct TSUViewCellCoord)arg2 fetchRichTextAttributesIfPlainText:(_Bool)arg3;
- (id)commentHostingAtCellID:(struct TSUViewCellCoord)arg1;
- (id)commentHostingAtCellID:(struct TSUViewCellCoord)arg1 forCommentStorage:(id)arg2;
- (void)postCommentNotificationForStorage:(id)arg1 atViewCellCoord:(struct TSUViewCellCoord)arg2 notificationKey:(id)arg3;
- (void)removeColumnsAtIndex:(struct TSUViewColumnIndex)arg1 count:(struct TSUViewColumnIndex)arg2;
- (void)removeRowsAtIndex:(struct TSUViewRowIndex)arg1 count:(struct TSUViewRowIndex)arg2;
- (void)setWidth:(double)arg1 ofColumnAtIndex:(struct TSUViewColumnIndex)arg2;
- (void)setHeight:(double)arg1 ofRowAtIndex:(struct TSUViewRowIndex)arg2;
- (id)columnWidths;
- (id)rowHeights;
- (double)widthOfColumnAtIndex:(struct TSUViewColumnIndex)arg1 isDefault:(out _Bool *)arg2;
- (double)heightOfRowAtIndex:(struct TSUViewRowIndex)arg1 isDefault:(out _Bool *)arg2;
- (struct TSCEFormula *)formulaAtCellID:(struct TSUViewCellCoord)arg1;
- (_Bool)hasFormulaAtCellID:(struct TSUViewCellCoord)arg1;
- (int)setCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2 ignoreFormula:(_Bool)arg3 clearImportWarnings:(_Bool)arg4;
- (void)p_applyViewColumnIndex:(struct TSUViewColumnIndex)arg1 toCategoryColumnUsingBlock:(CDUnknownBlockType)arg2 toBaseUsingBlock:(CDUnknownBlockType)arg3 toBeyondBoundsUsingBlock:(CDUnknownBlockType)arg4;
- (void)p_applyViewRowIndex:(struct TSUViewRowIndex)arg1 toSummaryUsingBlock:(CDUnknownBlockType)arg2 toLabelUsingBlock:(CDUnknownBlockType)arg3 toBaseUsingBlock:(CDUnknownBlockType)arg4 toBeyondBoundsUsingBlock:(CDUnknownBlockType)arg5;
- (int)p_applyViewCellCoord:(struct TSUViewCellCoord)arg1 toSummaryUsingBlock:(CDUnknownBlockType)arg2 toLabelUsingBlock:(CDUnknownBlockType)arg3 toCategoryColumnUsingBlock:(CDUnknownBlockType)arg4 toBaseUsingBlock:(CDUnknownBlockType)arg5;
- (int)getDefaultCell:(out id)arg1 forCellUID:(const struct TSTCellUID *)arg2;
- (int)getCell:(id)arg1 atCellID:(struct TSUViewCellCoord)arg2 suppressCellBorder:(_Bool)arg3;
- (int)getCell:(id)arg1 atCellUID:(const struct TSTCellUID *)arg2;
- (id)regionForValueOrCommentCellsInRange:(struct TSUViewCellRect)arg1;
- (id)fontColorAtCellID:(struct TSUViewCellCoord)arg1 optionalCell:(id)arg2;
- (id)stringAtCellID:(struct TSUViewCellCoord)arg1 optionalCell:(id)arg2;
- (id)metadataForColumnIndex:(struct TSUViewColumnIndex)arg1;
- (id)metadataForRowIndex:(struct TSUViewRowIndex)arg1;
- (id)conditionalStyleSetAtCellID:(struct TSUViewCellCoord)arg1;
- (id)textStyleAtCellID:(struct TSUViewCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (id)cellStyleAtCellID:(struct TSUViewCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (int)setTextStyle:(id)arg1 atCellID:(struct TSUViewCellCoord)arg2;
- (int)setCellStyle:(id)arg1 atCellID:(struct TSUViewCellCoord)arg2;
- (_Bool)textStyle:(id)arg1 isEqualToDefaultTextStyleForCellID:(struct TSUViewCellCoord)arg2;
- (_Bool)cellStyle:(id)arg1 isEqualToDefaultCellStyleForCellID:(struct TSUViewCellCoord)arg2;
- (id)textStyleForCellWithEmptyStyleAtCellID:(struct TSUViewCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (id)defaultTextStyleForCellID:(struct TSUViewCellCoord)arg1;
- (id)cellStyleForCellWithEmptyStyleAtCellID:(struct TSUViewCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (id)defaultCellStyleForCellID:(struct TSUViewCellCoord)arg1;
- (id)textStyleOfColumnAtIndex:(struct TSUViewColumnIndex)arg1 isDefault:(out _Bool *)arg2;
- (id)cellStyleOfColumnAtIndex:(struct TSUViewColumnIndex)arg1 isDefault:(out _Bool *)arg2;
- (int)setTextStyle:(id)arg1 ofColumnAtIndex:(struct TSUViewColumnIndex)arg2;
- (int)setCellStyle:(id)arg1 ofColumnAtIndex:(struct TSUViewColumnIndex)arg2;
- (id)textStyleOfRowAtIndex:(struct TSUViewRowIndex)arg1 isDefault:(out _Bool *)arg2;
- (id)cellStyleOfRowAtIndex:(struct TSUViewRowIndex)arg1 isDefault:(out _Bool *)arg2;
- (int)setTextStyle:(id)arg1 ofRowAtIndex:(struct TSUViewRowIndex)arg2;
- (int)setCellStyle:(id)arg1 ofRowAtIndex:(struct TSUViewRowIndex)arg2;
- (int)cellValueTypeAtCellID:(struct TSUViewCellCoord)arg1;
- (id)baseShuffleMapForViewShuffleMap:(id)arg1;
- (id)viewCellRegionForBaseCellRegion:(id)arg1;
- (id)viewCellRegionForBaseCellRect:(struct TSUModelCellRect)arg1;
- (id)baseCellRegionForViewCellRegion:(id)arg1;
- (id)baseCellRegionForViewCellRect:(struct TSUViewCellRect)arg1;
- (struct TSTCellUID)cellUIDForSummaryCellCoord:(const struct TSUModelCellCoord *)arg1;
- (struct TSUModelColumnIndex)summaryColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex)arg1;
- (struct TSUModelRowIndex)summaryRowIndexForViewRowIndex:(struct TSUViewRowIndex)arg1;
- (struct TSUModelCellCoord)summaryCellCoordForViewCellCoord:(struct TSUViewCellCoord)arg1;
- (struct TSUModelCellCoord)baseCellCoordForCellUID:(const struct TSTCellUID *)arg1;
- (struct TSUViewCellCoord)viewCellCoordForSummaryCellCoord:(struct TSUModelCellCoord)arg1;
- (struct TSUViewCellCoord)viewCellCoordForBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (struct TSUModelCellCoord)baseCellCoordForViewCellCoord:(struct TSUViewCellCoord)arg1;
- (id)viewColumnGridIndexesForBaseColumnGridIndexes:(id)arg1;
- (id)viewRowIndexesForBaseRowIndexes:(id)arg1;
- (id)viewColumnIndexesForBaseColumnIndexes:(id)arg1;
- (id)baseRowIndexesForViewRowIndexes:(id)arg1;
- (id)baseColumnIndexesForViewColumnIndexes:(id)arg1;
- (struct TSUViewCellCoord)viewCellCoordForChromeCellCoord:(struct TSUChromeCellCoord)arg1;
- (struct TSUChromeCellCoord)chromeCellCoordForViewCellCoord:(struct TSUViewCellCoord)arg1;
- (id)viewRowIndexesForChromeRowIndexes:(id)arg1;
- (id)viewColumnIndexesForChromeColumnIndexes:(id)arg1;
- (id)chromeRowIndexesForViewRowIndexes:(id)arg1;
- (id)chromeColumnIndexesForViewColumnIndexes:(id)arg1;
- (struct TSUViewColumnIndex)viewColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex)arg1;
- (struct TSUViewRowIndex)viewRowIndexForChromeRowIndex:(struct TSUChromeRowIndex)arg1;
- (struct TSUChromeColumnIndex)chromeColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex)arg1;
- (struct TSUChromeRowIndex)chromeRowIndexForViewRowIndex:(struct TSUViewRowIndex)arg1;
- (struct TSUViewColumnIndex)viewColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex)arg1;
- (struct TSUViewRowIndex)viewRowIndexForBaseRowIndex:(struct TSUModelRowIndex)arg1;
- (struct TSUModelColumnIndex)baseColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex)arg1;
- (struct TSUModelRowIndex)baseRowIndexForViewRowIndex:(struct TSUViewRowIndex)arg1;
- (id)translatedCellRangeName:(const RefTypeHolder_45a2a752 *)arg1 usedSymbolicName:(out _Bool *)arg2;
- (unsigned long long)tableAreaForCellID:(struct TSUViewCellCoord)arg1;
- (unsigned int)maxNumberOfHeaderColumns;
- (unsigned int)minNumberOfHeaderColumns;
- (struct TSUViewColumnIndex)numberOfHeaderColumns;
- (void)setNumberOfHeaderColumns:(struct TSUViewColumnIndex)arg1;
- (unsigned long long)tableStyleAreaForRow:(struct TSUViewRowIndex)arg1;
- (unsigned long long)tableStyleAreaForCellID:(struct TSUViewCellCoord)arg1;
- (unsigned long long)tableStyleAreaForCellUID:(const struct TSTCellUID *)arg1;
- (void)suspendChangeDescriptorNotificationsDuringBlock:(CDUnknownBlockType)arg1;
- (void)resetViewMapAndNotify;
- (void)p_buildLabelRowIndexSet;
- (void)resetViewMap;
- (void)didChangeGroupByStructure;
- (void)didRemoveRowUID:(const UUIDData_5fbc143e *)arg1 fromGroup:(id)arg2;
- (void)didAddRowUID:(const UUIDData_5fbc143e *)arg1 toGroup:(id)arg2;
- (void)didRemoveGroup:(id)arg1;
- (void)willRemoveGroup:(id)arg1;
- (void)didCreateGroup:(id)arg1;
- (_Bool)withinGroupingChangesBatch;
- (void)forceGroupingChangeReset;
- (void)endOfGroupingChangesBatch;
- (void)startOfGroupingChangesBatch;
- (id)aggregateFormulaOwner;
- (id)summaryCellVendor;
- (id)summaryModel;
- (id)initWithTableInfo:(id)arg1;

@end

