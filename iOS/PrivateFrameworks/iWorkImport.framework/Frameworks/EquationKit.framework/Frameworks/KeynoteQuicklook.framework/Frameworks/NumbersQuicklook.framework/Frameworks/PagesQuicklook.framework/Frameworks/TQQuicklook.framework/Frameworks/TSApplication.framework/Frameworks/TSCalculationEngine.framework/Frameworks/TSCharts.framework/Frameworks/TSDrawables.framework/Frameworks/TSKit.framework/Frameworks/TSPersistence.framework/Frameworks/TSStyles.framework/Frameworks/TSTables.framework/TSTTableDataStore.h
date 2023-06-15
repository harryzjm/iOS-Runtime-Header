//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPContainedObject.h>

@class NSObject, TSPLazyReference, TSTMergeRegionMap, TSTTableDataList, TSTTableHeaderStorage, TSTTableTileStorage;
@protocol TSDContainerInfo><TSWPStorageParent;

@interface TSTTableDataStore : TSPContainedObject
{
    _Atomic int _iteratorRunningCount;
    vector_fad096c6 _mergedRects;
    TSTTableDataList *_styleDataList;
    TSTTableDataList *_conditionalStyleSetDataList;
    TSTTableDataList *_stringDataList;
    TSTTableDataList *_formulaDataList;
    TSTTableDataList *_controlCellSpecDataList;
    TSTTableDataList *_formulaErrorDataList;
    TSTTableDataList *_richTextDataList;
    TSTTableDataList *_formatDataList;
    TSTTableDataList *_commentStorageDataList;
    TSTTableDataList *_importWarningSetDataList;
    TSTTableDataList *_preBNCFormatDataList;
    _Bool _foundABadDatalistKey;
    _Bool _upgrading;
    _Bool _cellCountValid;
    unsigned char _storageVersionPreBNC;
    _Bool _missingPostBNCDatalists;
    _Bool _lazyReferencesAreLoaded;
    unsigned int _cellCount;
    TSTTableTileStorage *_tileStorage;
    TSTTableHeaderStorage *_rowHeaderStorage;
    TSTTableHeaderStorage *_columnHeaderStorage;
    TSPLazyReference *_styleTableReference;
    TSPLazyReference *_conditionalStyleSetTableReference;
    TSPLazyReference *_stringTableReference;
    TSPLazyReference *_formulaTableReference;
    TSPLazyReference *_controlCellSpecTableReference;
    TSPLazyReference *_formulaErrorTableReference;
    TSPLazyReference *_richTextTableReference;
    TSPLazyReference *_formatTableReference;
    TSPLazyReference *_commentStorageTableReference;
    TSPLazyReference *_importWarningSetTableReference;
    TSPLazyReference *_preBNCFormatTableReference;
    TSTTableDataList *_multipleChoiceListFormatDataList;
    NSObject<TSDContainerInfo><TSWPStorageParent> *_richTextParentInfo;
    TSTMergeRegionMap *_mergedCellRanges;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool lazyReferencesAreLoaded; // @synthesize lazyReferencesAreLoaded=_lazyReferencesAreLoaded;
@property(nonatomic) _Bool missingPostBNCDatalists; // @synthesize missingPostBNCDatalists=_missingPostBNCDatalists;
@property(nonatomic) unsigned char storageVersionPreBNC; // @synthesize storageVersionPreBNC=_storageVersionPreBNC;
@property(nonatomic) _Bool cellCountValid; // @synthesize cellCountValid=_cellCountValid;
@property(nonatomic) unsigned int cellCount; // @synthesize cellCount=_cellCount;
@property(retain, nonatomic) TSTMergeRegionMap *mergedCellRanges; // @synthesize mergedCellRanges=_mergedCellRanges;
@property(nonatomic) __weak NSObject<TSDContainerInfo><TSWPStorageParent> *richTextParentInfo; // @synthesize richTextParentInfo=_richTextParentInfo;
@property(readonly, nonatomic) TSTTableDataList *multipleChoiceListFormatDataList; // @synthesize multipleChoiceListFormatDataList=_multipleChoiceListFormatDataList;
@property(retain, nonatomic) TSPLazyReference *preBNCFormatTableReference; // @synthesize preBNCFormatTableReference=_preBNCFormatTableReference;
@property(retain, nonatomic) TSPLazyReference *importWarningSetTableReference; // @synthesize importWarningSetTableReference=_importWarningSetTableReference;
@property(retain, nonatomic) TSPLazyReference *commentStorageTableReference; // @synthesize commentStorageTableReference=_commentStorageTableReference;
@property(retain, nonatomic) TSPLazyReference *formatTableReference; // @synthesize formatTableReference=_formatTableReference;
@property(retain, nonatomic) TSPLazyReference *richTextTableReference; // @synthesize richTextTableReference=_richTextTableReference;
@property(retain, nonatomic) TSPLazyReference *formulaErrorTableReference; // @synthesize formulaErrorTableReference=_formulaErrorTableReference;
@property(retain, nonatomic) TSPLazyReference *controlCellSpecTableReference; // @synthesize controlCellSpecTableReference=_controlCellSpecTableReference;
@property(retain, nonatomic) TSPLazyReference *formulaTableReference; // @synthesize formulaTableReference=_formulaTableReference;
@property(retain, nonatomic) TSPLazyReference *stringTableReference; // @synthesize stringTableReference=_stringTableReference;
@property(retain, nonatomic) TSPLazyReference *conditionalStyleSetTableReference; // @synthesize conditionalStyleSetTableReference=_conditionalStyleSetTableReference;
@property(retain, nonatomic) TSPLazyReference *styleTableReference; // @synthesize styleTableReference=_styleTableReference;
@property(retain, nonatomic) TSTTableHeaderStorage *columnHeaderStorage; // @synthesize columnHeaderStorage=_columnHeaderStorage;
@property(retain, nonatomic) TSTTableHeaderStorage *rowHeaderStorage; // @synthesize rowHeaderStorage=_rowHeaderStorage;
@property(retain, nonatomic) TSTTableTileStorage *tileStorage; // @synthesize tileStorage=_tileStorage;
@property(nonatomic) _Bool upgrading; // @synthesize upgrading=_upgrading;
- (void)tsceValueForCellStorageRef:(struct TSTCellStorage *)arg1 cellCoord:(const struct TSUCellCoord *)arg2 hostTableUID:(const struct TSKUIDStruct *)arg3 outValue:(struct TSCEValue *)arg4;
- (struct TSCEValue)tsceValueFromCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 tableUID:(const struct TSKUIDStruct *)arg3;
- (vector_cdf5f6a1)accumulateCurrentCellsConcurrentlyInRow:(struct TSUModelRowIndex)arg1 rowInfo:(id)arg2 atColumns:(void *)arg3 usingCellCreationBlock:(CDUnknownBlockType)arg4;
- (void)didApplyConcurrentCellMap:(id)arg1;
- (void)prepareToApplyConcurrentCellMap:(id)arg1;
- (void)setCellsConcurrently:(id)arg1 tableUID:(const struct TSKUIDStruct *)arg2 calculationEngine:(id)arg3 conditionalStyleOwner:(id)arg4 ignoreFormula:(_Bool)arg5 clearImportWarnings:(_Bool)arg6;
- (void)updateDataListsConcurrentlyWithConcurrentCellMap:(id)arg1 clearImportWarnings:(_Bool)arg2;
- (_Bool)auditColumnRowCellCountsReturningResult:(id *)arg1 hasUndercounts:(_Bool *)arg2;
- (_Bool)auditRowInfoCellCountsReturningResult:(id *)arg1;
- (_Bool)auditDatalistDuplicationReturningResult:(id *)arg1;
- (_Bool)confirmRefCountsReturningResult:(id *)arg1;
- (void)assertListTilesAndRows;
- (id)copyWithOwner:(id)arg1;
- (void)assertIsNotIterating;
- (void)endIteration;
- (void)beginIteration;
@property(nonatomic) _Bool shouldUseWideRows;
@property(readonly, nonatomic) unsigned long long archivingCompatibilityVersion;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2 isInTheDocument:(_Bool)arg3;
- (void)purgePreBNCDatalists;
- (void)embiggenTableForUpgrade;
- (id)p_cellMapForUpgradingToBraveNewCell;
- (void)upgradeDataStoreCellStorageIfNeededWithTableUID:(const struct TSKUIDStruct *)arg1 conditionalStyleOwner:(id)arg2;
- (_Bool)_needToUpgradeCellStorage;
- (void)setStorageParentToInfo:(id)arg1;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (void)replaceCommentStoragesUsingBlock:(CDUnknownBlockType)arg1;
- (void)replaceConditionalStyleSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)replaceFormulasUsingBlock:(CDUnknownBlockType)arg1;
- (id)mapReassigningPasteboardCustomFormatKeys:(id)arg1;
- (_Bool)mightHaveCustomFormats;
- (id)cellMapForRepairingPasteboardCustomFormats:(id)arg1;
- (id)addPasteboardCustomFormatsToDocumentAndTableReturningBadIDs;
- (void)resetAlmostEverything;
- (void)resetAllColumnRowSizes;
- (id)i_stringForDataListKey:(unsigned int)arg1 outShouldWrap:(_Bool *)arg2 outIsShared:(_Bool *)arg3;
- (id)i_cellStyleHandleForDataListKey:(unsigned int)arg1;
- (id)i_textStyleHandleForDataListKey:(unsigned int)arg1;
- (id)i_formatForDataListKey:(unsigned int)arg1;
- (id)p_makeALazyDatalistOfType:(int)arg1 isNewForBNC:(_Bool)arg2;
- (id)p_makeALazyDatalistOfType:(int)arg1;
- (_Bool)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord)arg1 result:(id *)arg2;
- (_Bool)repairStyleDatalistStylesheetIfNecessary;
- (id)_loadDatalist:(id *)arg1 forLazyReference:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)p_loadLazyDatalists;
- (vector_fad096c6)mergedRects;
- (id)formulaSpecForStorageRef:(struct TSTCellStorage *)arg1;
- (id)formulaSpecAtCellID:(struct TSUCellCoord)arg1;
- (id)formulaAtCellID:(struct TSUCellCoord)arg1;
- (id)formulaSyntaxErrorAtCellID:(struct TSUCellCoord)arg1;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;
- (void)moveColumnIndexRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (void)moveRowIndexRange:(struct _NSRange)arg1 toIndex:(unsigned int)arg2;
- (void)removeColumns:(struct _NSRange)arg1;
- (void)removeRows:(struct _NSRange)arg1;
- (void)insertColumns:(struct _NSRange)arg1;
- (void)insertRows:(struct _NSRange)arg1;
- (void)p_clearDataListEntriesForStorageRef:(struct TSTCellStorage *)arg1 cellID:(struct TSUCellCoord)arg2;
- (void)p_clearDataListEntriesInRange:(struct TSUCellRect)arg1;
- (void)resolveDataListKeysForCell:(id)arg1 cache:(id)arg2 suppressTransmutation:(_Bool)arg3 sourceStorageVersion:(unsigned char)arg4;
- (void)resolveDataListKeysForPreBNCCell:(id)arg1 suppressTransmutation:(_Bool)arg2 sourceStorageVersion:(unsigned char)arg3;
- (void)p_stashBadKey:(unsigned long long)arg1 forList:(id)arg2;
- (id)p_populatedMultipleChoiceListFormat:(id)arg1;
- (id)p_preBNCpopulatedCustomFormat:(id)arg1 value:(double)arg2;
- (void)updateCustomFormatsAtKey:(id)arg1;
- (void)upgradeCellFormatsU2_0;
- (void)setCellMap:(id)arg1 tableUID:(const struct TSKUIDStruct *)arg2 calculationEngine:(id)arg3 conditionalStyleOwner:(id)arg4 ignoreFormulas:(_Bool)arg5 skipDirtyingNonFormulaCells:(_Bool)arg6 doRichTextDOLC:(_Bool)arg7;
- (void)_setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 tableUID:(const struct TSKUIDStruct *)arg3 calculationEngine:(id)arg4 conditionalStyleOwner:(id)arg5 ignoreFormula:(_Bool)arg6 clearImportWarnings:(_Bool)arg7 richTextDOLCHint:(_Bool *)arg8;
- (void)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 tableUID:(const struct TSKUIDStruct *)arg3 calculationEngine:(id)arg4 conditionalStyleOwner:(id)arg5 ignoreFormula:(_Bool)arg6 clearImportWarnings:(_Bool)arg7;
- (void)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 tableUID:(const struct TSKUIDStruct *)arg3 calculationEngine:(id)arg4 conditionalStyleOwner:(id)arg5 ignoreFormula:(_Bool)arg6 clearImportWarnings:(_Bool)arg7 doRichTextDOLC:(_Bool)arg8;
- (id)allRichTextStorages;
- (_Bool)containsControlCellSpecs;
- (_Bool)containsImportWarnings;
- (_Bool)containsFormulas;
- (_Bool)hasFormulaAtCellID:(struct TSUCellCoord)arg1;
- (_Bool)hasFormulaSyntaxErrorAtCellID:(struct TSUCellCoord)arg1;
- (unsigned char)valueTypeAtCellID:(struct TSUCellCoord)arg1;
- (id)richTextStorageForCalcEngineAtCellID:(struct TSUCellCoord)arg1 refIfAvailable:(struct TSTCellStorage *)arg2;
- (id)stringForCalcEngineAtCellID:(struct TSUCellCoord)arg1 refIfAvailable:(struct TSTCellStorage *)arg2;
- (id)formatForCalcEngineAtCellID:(struct TSUCellCoord)arg1 formatIsExplicitOut:(_Bool *)arg2 refIfAvailable:(struct TSTCellStorage *)arg3;
- (id)textStyleAtCellID:(struct TSUCellCoord)arg1;
- (id)conditionalStyleSetAtCellID:(struct TSUCellCoord)arg1;
- (id)cellStyleAtCellID:(struct TSUCellCoord)arg1;
- (void)p_enumerateCellStoragesRowByRowToMaxID:(struct TSUCellCoord)arg1 getPreBNC:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateCellStoragesRowByRowToMaxID:(struct TSUCellCoord)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCellStoragesInRange:(struct TSUCellRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)stringAtCellID:(struct TSUCellCoord)arg1;
- (_Bool)cellExistsAtCellID:(struct TSUCellCoord)arg1;
- (_Bool)getCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (struct TSTCellStorage *)cellStorageRefAtCellID:(struct TSUCellCoord)arg1;
- (id)i_rowInfoAtIndex:(unsigned int)arg1;
- (id)i_tileStartingAtOrAfterRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (id)i_tileStartingAtOrBeforeRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (void)p_loadLazyTileStorage;
- (void)upgradeConditionalStylesToLinkedRefWithTableUID:(const struct TSKUIDStruct *)arg1;
- (id)commentStorageAtCellID:(struct TSUCellCoord)arg1;
@property(readonly, nonatomic) unsigned long long numberOfComments;
@property(readonly, nonatomic) unsigned int numberOfConditionalStyles;
@property(readonly, nonatomic) unsigned int numberOfPopulatedCells;
- (void)p_updateNumberOfPopulatedCells;
- (void)incrementCellCountsAtCellID:(struct TSUCellCoord)arg1;
- (void)decrementCellCountsAtCellID:(struct TSUCellCoord)arg1;
- (void)decrementColumnCellCount:(unsigned short)arg1 byAmount:(unsigned long long)arg2;
- (void)replaceStylesUsingBlock:(CDUnknownBlockType)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ownerUID:(const struct TSKUIDStruct *)arg3 conditionalStyleOwner:(id)arg4;
@property(readonly, nonatomic) _Bool hasCellOrTextStyles;
@property(readonly, nonatomic) _Bool hasMigratableStylesInCells;
- (unsigned long long)defaultStyleHandlesOfColumnAtIndex:(unsigned short)arg1 outCellStyleHandle:(id *)arg2 outTextStyleHandle:(id *)arg3;
- (unsigned long long)defaultStyleHandlesOfRowAtIndex:(unsigned int)arg1 outCellStyleHandle:(id *)arg2 outTextStyleHandle:(id *)arg3;
- (unsigned long long)defaultStylesOfColumnAtIndex:(unsigned short)arg1 outCellStyle:(id *)arg2 outTextStyle:(id *)arg3;
- (unsigned long long)defaultStylesOfRowAtIndex:(unsigned int)arg1 outCellStyle:(id *)arg2 outTextStyle:(id *)arg3;
- (void)setTextStyle:(id)arg1 ofColumnAtIndex:(unsigned short)arg2;
- (void)setTextStyle:(id)arg1 ofRowAtIndex:(unsigned int)arg2;
- (id)textStyleOfColumnAtIndex:(unsigned short)arg1;
- (id)textStyleOfRowAtIndex:(unsigned int)arg1;
- (void)setCellStyle:(id)arg1 ofColumnAtIndex:(unsigned short)arg2;
- (void)setCellStyle:(id)arg1 ofRowAtIndex:(unsigned int)arg2;
- (id)cellStyleOfColumnAtIndex:(unsigned short)arg1;
- (id)cellStyleOfRowAtIndex:(unsigned int)arg1;
- (void)setHidingState:(unsigned char)arg1 ofColumnAtIndex:(unsigned short)arg2;
- (void)setHidingState:(unsigned char)arg1 ofRowAtIndex:(unsigned int)arg2;
- (unsigned char)hidingStateOfColumnAtIndex:(unsigned short)arg1;
- (unsigned char)hidingStateOfRowAtIndex:(unsigned int)arg1;
- (void)setWidth:(double)arg1 ofColumnAtIndex:(unsigned short)arg2;
- (void)setHeight:(double)arg1 ofRowAtIndex:(unsigned int)arg2;
- (double)widthOfColumnAtIndex:(unsigned short)arg1;
- (double)heightOfRowAtIndex:(unsigned int)arg1;
- (unsigned long long)cellCountOfColumnAtIndex:(unsigned short)arg1;
- (unsigned long long)cellCountOfRowAtIndex:(unsigned int)arg1;
- (void)updateHeaderStorageStylesWithBlock:(CDUnknownBlockType)arg1;
- (void)p_forceLoadHeaderStorages;
- (void)updateColumnHeaderAtIndex:(unsigned short)arg1 fromMetadata:(id)arg2;
- (void)updateRowHeaderAtIndex:(unsigned int)arg1 fromMetadata:(id)arg2;
- (id)metadataForColumnIndex:(unsigned short)arg1 hidingAction:(unsigned char)arg2 uuid:(struct TSKUIDStruct)arg3;
- (id)metadataForRowIndex:(unsigned int)arg1 hidingAction:(unsigned char)arg2 uuid:(struct TSKUIDStruct)arg3;
- (void)loadAllLazyReferences;

@end

