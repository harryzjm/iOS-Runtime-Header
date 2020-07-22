//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSTTableHiddenRowColumnProviding-Protocol.h>
#import <iWorkImport/TSTTableInternalGeometryProviding-Protocol.h>
#import <iWorkImport/TSTTableMergeRangeProviding-Protocol.h>

@class NSIndexSet, NSMutableArray, NSMutableSet, NSPointerArray, NSString, TSDFill, TSDInfoGeometry, TSDLayoutGeometry, TSKChangeNotifier, TSTCellRegion, TSTCellSelection, TSTConcurrentMutableIndexSet, TSTDupContentCache, TSTHiddenRowsColumnsCache, TSTInfo, TSTLayout, TSTLayoutDynamicResizeInfo, TSTMergeRangeSortedSet, TSTRWRetainedPointerKeyDictionary, TSTStrokeDefaultVendor, TSTStrokeWidthCache, TSTTableModel, TSTWPColumnCache, TSTWidthHeightCache, TSUColor, TSUWidthLimitedQueue;
@protocol OS_dispatch_group, TSTLayoutDynamicCellFillProtocol, TSTLayoutDynamicColumnMoveProtocol, TSTLayoutDynamicContentProtocol, TSTLayoutDynamicRowMoveProtocol;

__attribute__((visibility("hidden")))
@interface TSTMasterLayout : NSObject <TSTTableHiddenRowColumnProviding, TSTTableInternalGeometryProviding, TSTTableMergeRangeProviding>
{
    TSKChangeNotifier *mChangeNotifier;
    int mReferenceCount;
    TSTInfo *mTableInfo;
    TSTWPColumnCache *mCellIDToWPColumnCache;
    TSTDupContentCache *mDupContentCache;
    TSTWPColumnCache *mTempWPColumnCache;
    TSTWidthHeightCache *mWidthHeightCache;
    TSTHiddenRowsColumnsCache *mHiddenRowsColumnsCache;
    NSMutableArray *mChangeDescriptors;
    NSObject<OS_dispatch_group> *mLayoutInFlight;
    TSUWidthLimitedQueue *mLayoutQueue;
    unsigned int mMaxConcurrentTasks;
    unsigned int mNumCellsPerTask;
    _Bool mHeaderColumnsFrozen;
    _Bool mHeaderRowsFrozen;
    _Bool mHeaderColumnsRepeat;
    _Bool mHeaderRowsRepeat;
    _Bool mTableNameEnabled;
    struct CGRect mTableNameBounds;
    double mCachedTableNameHeight;
    _Bool mTableNameHeightValid;
    unsigned short mCachedNumberOfHeaderColumns;
    unsigned long long mCachedMaxNumberOfColumns;
    unsigned short mCachedNumberOfHeaderRows;
    unsigned short mCachedNumberOfFooterRows;
    unsigned long long mCachedMaxNumberOfRows;
    TSTStrokeDefaultVendor *mStrokesDefaultVendor;
    NSPointerArray *mTopRowStrokes;
    NSPointerArray *mBottomRowStrokes;
    NSPointerArray *mLeftColumnStrokes;
    NSPointerArray *mRightColumnStrokes;
    TSTConcurrentMutableIndexSet *mSpillStrokeColumns;
    TSTCellRegion *mCellRegionForClearedMergeStrokes;
    struct _opaque_pthread_rwlock_t mStrokesRWLock;
    TSTStrokeWidthCache *mColumnToStrokeWidthCache;
    TSTStrokeWidthCache *mRowToStrokeHeightCache;
    TSTRWRetainedPointerKeyDictionary *mParaStyleToHeightCache;
    struct _opaque_pthread_rwlock_t mContentRWLock;
    NSMutableSet *mContentReadingThreads;
    _Bool mBandedFillIsValid;
    _Bool mUseBandedFill;
    TSDFill *mBandedFillObject;
    int mTableEnvironment;
    int mTableRowsBehavior;
    _Bool mTableDefaultFontHeightsAreValid;
    double mTableDefaultFontHeightForArea[5];
    _Bool mInDynamicLayoutMode;
    NSMutableSet *mDynamicLayoutParticipants;
    double mDynamicAddOrRemoveColumnElementSize;
    double mDynamicAddOrRemoveRowElementSize;
    _Bool mDynamicBandedFill;
    _Bool mDynamicBandedFillSetting;
    int mDynamicColumnAdjustment;
    id <TSTLayoutDynamicColumnMoveProtocol> mDynamicColumnMoveDelegate;
    double mDynamicColumnTabSize;
    id <TSTLayoutDynamicContentProtocol> mDynamicContentDelegate;
    TSUColor *mDynamicFontColor;
    struct TSUCellRect mDynamicFontColorCellRange;
    struct TSUCellRect mDynamicHidingRowsCols;
    long long mDynamicHidingRowsColsDirection;
    struct TSUCellRect mDynamicHidingContent;
    struct TSUCellRect mDynamicHidingText;
    TSDInfoGeometry *mDynamicInfoGeometry;
    _Bool mDynamicRepResize;
    _Bool mDynamicRepressFrozenHeaderRows;
    _Bool mDynamicRepressFrozenHeaderColumns;
    _Bool mDynamicResizingColumns;
    struct TSUCellRect mDynamicResizingColumnRange;
    double mDynamicResizingColumnAdjustment;
    _Bool mDynamicResizingRows;
    struct TSUCellRect mDynamicResizingRowRange;
    double mDynamicResizingRowAdjustment;
    struct TSUCellRect mDynamicRevealingRowsCols;
    long long mDynamicRevealingRowsColsDirection;
    int mDynamicRowAdjustment;
    id <TSTLayoutDynamicRowMoveProtocol> mDynamicRowMoveDelegate;
    double mDynamicRowTabSize;
    TSDLayoutGeometry *mDynamicSavedLayoutGeometry;
    TSTCellSelection *mDynamicSelection;
    double mDynamicWidthResize;
    double mDynamicHeightResize;
    double mDynamicTableNameResize;
    TSTLayoutDynamicResizeInfo *mDynamicResizeInfo;
    struct TSUCellCoord mDynamicSuppressingConditionalStylesCellID;
    id <TSTLayoutDynamicCellFillProtocol> mDynamicCellFillDelegate;
    _Bool mEmptyFilteredTable;
    TSTMergeRangeSortedSet *mMergeRanges;
    _Bool mProcessHiddenRowsForExport;
    struct CGSize mMaximumPartitionSize;
}

+ (int)tableRowsBehaviorForTable:(id)arg1 andEnvironment:(int)arg2;
+ (double)effectiveTableNameHeightForModel:(id)arg1;
+ (struct CGSize)tableNameTextSize:(id)arg1;
+ (id)tableNameTextEngine:(id)arg1;
@property(retain, nonatomic) TSKChangeNotifier *changeNotifier; // @synthesize changeNotifier=mChangeNotifier;
@property(nonatomic) struct CGSize maximumPartitionSize; // @synthesize maximumPartitionSize=mMaximumPartitionSize;
@property(nonatomic) _Bool processHiddenRowsForExport; // @synthesize processHiddenRowsForExport=mProcessHiddenRowsForExport;
@property(retain, nonatomic) TSTMergeRangeSortedSet *mergeRanges; // @synthesize mergeRanges=mMergeRanges;
@property(readonly, nonatomic) NSMutableArray *changeDescriptors; // @synthesize changeDescriptors=mChangeDescriptors;
@property(readonly, nonatomic) struct TSUCellCoord dynamicSuppressingConditionalStylesCellID; // @synthesize dynamicSuppressingConditionalStylesCellID=mDynamicSuppressingConditionalStylesCellID;
@property(readonly, nonatomic) double dynamicTableNameResize; // @synthesize dynamicTableNameResize=mDynamicTableNameResize;
@property(readonly, nonatomic) TSTCellSelection *dynamicSelection; // @synthesize dynamicSelection=mDynamicSelection;
@property(copy, nonatomic) TSDLayoutGeometry *dynamicSavedLayoutGeometry; // @synthesize dynamicSavedLayoutGeometry=mDynamicSavedLayoutGeometry;
@property(readonly, nonatomic) double dynamicRowTabSize; // @synthesize dynamicRowTabSize=mDynamicRowTabSize;
@property(readonly, nonatomic) int dynamicRowAdjustment; // @synthesize dynamicRowAdjustment=mDynamicRowAdjustment;
@property(readonly, nonatomic) struct TSUCellRect dynamicResizingRowRange; // @synthesize dynamicResizingRowRange=mDynamicResizingRowRange;
@property(readonly, nonatomic) double dynamicResizingRowAdjustment; // @synthesize dynamicResizingRowAdjustment=mDynamicResizingRowAdjustment;
@property(readonly, nonatomic) _Bool dynamicResizingRows; // @synthesize dynamicResizingRows=mDynamicResizingRows;
@property(readonly, nonatomic) struct TSUCellRect dynamicResizingColumnRange; // @synthesize dynamicResizingColumnRange=mDynamicResizingColumnRange;
@property(readonly, nonatomic) double dynamicResizingColumnAdjustment; // @synthesize dynamicResizingColumnAdjustment=mDynamicResizingColumnAdjustment;
@property(readonly, nonatomic) _Bool dynamicResizingColumns; // @synthesize dynamicResizingColumns=mDynamicResizingColumns;
@property(nonatomic) double dynamicWidthResize; // @synthesize dynamicWidthResize=mDynamicWidthResize;
@property(nonatomic) double dynamicHeightResize; // @synthesize dynamicHeightResize=mDynamicHeightResize;
@property(readonly, nonatomic) TSDInfoGeometry *dynamicInfoGeometry; // @synthesize dynamicInfoGeometry=mDynamicInfoGeometry;
@property(nonatomic) _Bool dynamicRepResize; // @synthesize dynamicRepResize=mDynamicRepResize;
@property(readonly, nonatomic) struct TSUCellRect dynamicFontColorCellRange; // @synthesize dynamicFontColorCellRange=mDynamicFontColorCellRange;
@property(readonly, nonatomic) TSUColor *dynamicFontColor; // @synthesize dynamicFontColor=mDynamicFontColor;
@property(readonly, nonatomic) double dynamicColumnTabSize; // @synthesize dynamicColumnTabSize=mDynamicColumnTabSize;
@property(readonly, nonatomic) int dynamicColumnAdjustment; // @synthesize dynamicColumnAdjustment=mDynamicColumnAdjustment;
@property(readonly, nonatomic) _Bool dynamicBandedFillSetting; // @synthesize dynamicBandedFillSetting=mDynamicBandedFillSetting;
@property(readonly, nonatomic) _Bool dynamicBandedFill; // @synthesize dynamicBandedFill=mDynamicBandedFill;
@property(readonly, nonatomic) double dynamicAddOrRemoveRowElementSize; // @synthesize dynamicAddOrRemoveRowElementSize=mDynamicAddOrRemoveRowElementSize;
@property(readonly, nonatomic) double dynamicAddOrRemoveColumnElementSize; // @synthesize dynamicAddOrRemoveColumnElementSize=mDynamicAddOrRemoveColumnElementSize;
@property(readonly, nonatomic) NSMutableSet *dynamicLayoutParticipants; // @synthesize dynamicLayoutParticipants=mDynamicLayoutParticipants;
@property(readonly, nonatomic, getter=isInDynamicLayoutMode) _Bool inDynamicLayoutMode; // @synthesize inDynamicLayoutMode=mInDynamicLayoutMode;
@property(nonatomic) unsigned int numCellsPerTask; // @synthesize numCellsPerTask=mNumCellsPerTask;
@property(nonatomic) unsigned int maxConcurrentTasks; // @synthesize maxConcurrentTasks=mMaxConcurrentTasks;
@property(readonly, nonatomic) int tableRowsBehavior; // @synthesize tableRowsBehavior=mTableRowsBehavior;
@property(nonatomic) int tableEnvironment; // @synthesize tableEnvironment=mTableEnvironment;
@property(readonly, nonatomic) TSDFill *bandedFillObject; // @synthesize bandedFillObject=mBandedFillObject;
@property(readonly, nonatomic) TSTHiddenRowsColumnsCache *hiddenRowsColumnsCache; // @synthesize hiddenRowsColumnsCache=mHiddenRowsColumnsCache;
@property(readonly, nonatomic) TSTWidthHeightCache *widthHeightCache; // @synthesize widthHeightCache=mWidthHeightCache;
@property(readonly, nonatomic) TSTWPColumnCache *tempWPColumnCache; // @synthesize tempWPColumnCache=mTempWPColumnCache;
@property(readonly, nonatomic) TSTDupContentCache *dupContentCache; // @synthesize dupContentCache=mDupContentCache;
@property(readonly, nonatomic) TSTWPColumnCache *cellIDToWPColumnCache; // @synthesize cellIDToWPColumnCache=mCellIDToWPColumnCache;
@property(readonly, nonatomic) TSTStrokeDefaultVendor *strokesDefaultVendor; // @synthesize strokesDefaultVendor=mStrokesDefaultVendor;
@property(nonatomic) TSTInfo *tableInfo; // @synthesize tableInfo=mTableInfo;
- (void)readSafelyUsingBlock:(CDUnknownBlockType)arg1;
- (void)modifySafelyUsingBlock:(CDUnknownBlockType)arg1;
- (double)fontHeightOfParagraphStyle:(id)arg1;
- (struct UIEdgeInsets)defaultPaddingForCellID:(struct TSUCellCoord)arg1;
- (struct UIEdgeInsets)paddingForCellID:(struct TSUCellCoord)arg1;
- (struct UIEdgeInsets)edgeInsetsFromPadding:(id)arg1;
- (id)accountingParagraphStylePropertyMapForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (id)newTextEngineForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (id)unwrappedFittingWidthsForColumnsInCellRegion:(id)arg1;
- (double)unwrappedFittingWidthsForColumnInCellRegionWorker:(id)arg1;
- (void)waitForLayoutToComplete;
- (void)processLayoutTask:(id)arg1;
- (void)measureTextForLayoutState:(id)arg1;
- (void)queueCellForValidation:(struct TSUCellRect)arg1 cell:(id)arg2 modelMergeRange:(struct TSUCellRect)arg3 wrap:(_Bool)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 prop:(_Bool)arg7 layoutCacheFlags:(int)arg8 layoutTask:(id)arg9;
- (id)validateCellForDrawing:(struct TSUCellCoord)arg1 cell:(id)arg2 contents:(id)arg3 wrap:(_Bool)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 layoutCacheFlags:(int)arg7 pageNumber:(unsigned long long)arg8 pageCount:(unsigned long long)arg9;
- (void)validateFittingWidthsForRegion:(id)arg1;
- (void)validateFittingInfoForChangeDescriptors:(id)arg1 rowsNeedingFittingInfo:(id)arg2;
- (_Bool)p_deferredMergeExpansionForChangeDescriptorType:(int)arg1;
- (id)p_validationFittingForChangeDescriptorType:(int)arg1 regionFromChangeDescriptor:(id)arg2 currentRegionToValidate:(id)arg3;
- (id)p_validationFittingCellRegionForStrokesChanged:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForRangeMergeUnmerge:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForRowsMovedFrom:(id)arg1 toRowIndex:(unsigned short)arg2 currentRegionToValidate:(id)arg3;
- (id)p_validationFittingCellRegionForRowsInserted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForRowsDeleted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForColumnsMovedFrom:(id)arg1 toColumnIndex:(unsigned char)arg2 currentRegionToValidate:(id)arg3;
- (id)p_validationFittingCellRegionForColumnsVisibility:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForColumnsInserted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForColumnsDeleted:(id)arg1 currentRegionToValidate:(id)arg2;
- (void)p_validateFittingInfoForEmptyMergeRange:(struct TSUCellRect)arg1;
- (struct TSUCellCoord)p_validateFittingInfoForEmptyCellsBetween:(struct TSUCellCoord)arg1 andCellID:(struct TSUCellCoord)arg2 inRange:(struct TSUCellRect)arg3 widthHeightCollection:(id)arg4;
- (void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(struct TSUCellCoord)arg1 andEndCellID:(struct TSUCellCoord)arg2 widthHeightCollection:(id)arg3;
- (void)validateFittingInfoWithCellRange:(struct TSUCellRect)arg1;
- (void)validateFittingInfoWithCellRangeWorker:(struct TSUCellRect)arg1;
- (void)validateFittingInfoForCell:(id)arg1 cellID:(struct TSUCellCoord)arg2 mergeRange:(struct TSUCellRect)arg3 setFitting:(_Bool)arg4 layoutTask:(id)arg5 widthHeightCollection:(id)arg6;
- (void)validateRowVisibility:(id)arg1;
- (void)updateWHCForMergeRanges;
- (void)validateChangeDescriptorQueue;
- (void)validateMasterLayoutForChangeDescriptors:(id)arg1;
- (void)validate;
- (void)addChangeDescriptor:(id)arg1;
- (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(struct TSUCellRect)arg2 andStrokeRange:(struct TSUCellRect)arg3;
- (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(struct TSUCellRect)arg2;
@property(readonly, nonatomic) _Bool isGrouped;
- (void)validateDynamicResizeInfo;
- (void)invalidateDynamicResizeInfo;
- (void)updateDynamicResizeInfo:(id)arg1;
- (void)captureDynamicResizeInfo;
- (_Bool)isDynamicallyMovingColumns;
@property(readonly, nonatomic) id <TSTLayoutDynamicColumnMoveProtocol> dynamicColumnMoveDelegate; // @synthesize dynamicColumnMoveDelegate=mDynamicColumnMoveDelegate;
- (_Bool)isDynamicallyMovingRows;
@property(readonly, nonatomic) id <TSTLayoutDynamicRowMoveProtocol> dynamicRowMoveDelegate; // @synthesize dynamicRowMoveDelegate=mDynamicRowMoveDelegate;
- (_Bool)isDynamicallyChangingFontColorOfCellID:(struct TSUCellCoord)arg1;
- (_Bool)isDynamicallyChangingContent;
@property(readonly, nonatomic) id <TSTLayoutDynamicContentProtocol> dynamicContentDelegate; // @synthesize dynamicContentDelegate=mDynamicContentDelegate;
- (_Bool)isDynamicallyChangingCellFill;
@property(readonly, nonatomic) id <TSTLayoutDynamicCellFillProtocol> dynamicCellFillDelegate;
- (void)updateDynamicFontColor:(id)arg1 andRange:(struct TSUCellRect)arg2;
- (_Bool)isDynamicallyRepressingFrozenHeaderColumns;
- (_Bool)isDynamicallyRepressingFrozenHeaderRows;
- (_Bool)isDynamicallySettingBandedFill;
- (_Bool)isDynamicallyRowTabResizing;
- (_Bool)isDynamicallyColumnTabResizing;
- (_Bool)isDynamicallyChangingSelection;
- (_Bool)isDynamicallyChangingRowOrColumnCount;
- (_Bool)isDynamicallyChangingColumnCount;
- (_Bool)isDynamicallyChangingRowCount;
- (_Bool)isDynamicallyResizingTableName;
- (void)updateDynamicTableNameSize:(double)arg1;
- (_Bool)isDynamicallyRevealingRowsCols:(long long)arg1 rowColIndex:(unsigned short)arg2;
- (_Bool)isDynamicallyRevealingRowsCols;
- (_Bool)isDynamicallyChangingInfoGeometry;
- (_Bool)isDynamicallyHidingTextOfCellID:(struct TSUCellCoord)arg1;
- (_Bool)isDynamicallyHidingContentOfCellID:(struct TSUCellCoord)arg1;
- (_Bool)isDynamicallyHidingRowsColsCellID:(struct TSUCellCoord)arg1;
- (_Bool)isDynamicallyHidingRowsCols:(long long)arg1 rowColIndex:(unsigned short)arg2;
- (_Bool)isDynamicallyHidingRowsCols;
@property(readonly, nonatomic) TSTLayout *dynamicLayout;
- (_Bool)containsAnyContentInRange:(struct TSUCellRect)arg1;
- (unsigned short)firstEmptyBodyRow;
- (struct TSUCellRect)expandCellRangeToVisibleNeighbors:(struct TSUCellRect)arg1;
@property(readonly, nonatomic) NSIndexSet *hiddenColumnIndices;
@property(readonly, nonatomic) NSIndexSet *hiddenRowIndices;
@property(readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property(readonly, nonatomic) NSIndexSet *visibleRowIndices;
- (unsigned char)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnAfterColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned char)arg1;
- (unsigned short)nonUserHiddenRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowAfterRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowBeforeRowAtIndex:(unsigned short)arg1;
- (_Bool)anyHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (_Bool)anyRowsUserHiddenInCellRange:(struct TSUCellRect)arg1;
- (_Bool)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (_Bool)isEntireCellRangeHidden:(struct TSUCellRect)arg1;
- (_Bool)hasHiddenColumnAtIndex:(unsigned char)arg1;
- (_Bool)isRowUserHidden:(unsigned short)arg1;
- (_Bool)hasHiddenRowAtIndex:(unsigned short)arg1;
- (_Bool)isDynamicallyResizingCellID:(struct TSUCellCoord)arg1;
- (_Bool)isDynamicallyResizing:(long long)arg1 rowColIndex:(unsigned short)arg2;
- (_Bool)isDynamicallyResizing:(long long)arg1;
- (id)layoutCellRegionForModelCellRegion:(id)arg1;
- (struct TSUCellCoord)layoutCellIDForModelCellID:(struct TSUCellCoord)arg1;
- (unsigned char)layoutColumnForModelColumn:(unsigned char)arg1;
- (unsigned short)layoutRowForModelRow:(unsigned short)arg1;
- (id)modelCellRegionForLayoutCellRegion:(id)arg1;
- (struct TSUCellCoord)modelCellIDForLayoutCellID:(struct TSUCellCoord)arg1;
- (unsigned char)modelColumnForLayoutColumn:(unsigned char)arg1;
- (unsigned short)modelRowForLayoutRow:(unsigned short)arg1;
- (_Bool)cell:(id *)arg1 forCellID:(struct TSUCellCoord)arg2;
- (void)endDynamicMode;
- (void)beginDynamicMode:(id)arg1;
- (void)validateDefaultFontHeights;
- (void)invalidateDefaultFontHeights;
- (void)validateBandedFill;
- (void)invalidateBandedFill;
- (_Bool)shouldRowUseBandedFill:(unsigned short)arg1;
@property(readonly, nonatomic) _Bool useBandedFill;
- (void)p_validateStrokesForRegion:(id)arg1;
- (void)validateStrokesForChangeDescriptors:(id)arg1;
- (void)p_clearStrokesForMergesInCellRegion:(id)arg1;
- (void)p_invalidateClearedStrokesForCellRegion:(id)arg1;
- (void)enumerateMergedStrokesAndCapsForGridRow:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateMergedStrokesAndCapsForGridColumn:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateMergedStrokesForGridRow:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateMergedStrokesForGridColumn:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)clearDynamicStrokesForCellRange:(struct TSUCellRect)arg1;
- (void)strokesForCellID:(struct TSUCellCoord)arg1 top:(id *)arg2 left:(id *)arg3 bottom:(id *)arg4 right:(id *)arg5;
- (void)setDynamicCellBorder:(id)arg1 forCellID:(struct TSUCellCoord)arg2;
- (double)strokeHeightOfGridRow:(unsigned int)arg1 atColumnIndex:(unsigned int)arg2;
- (double)strokeHeightOfGridRow:(unsigned int)arg1 beginColumn:(unsigned int)arg2 endColumn:(unsigned int)arg3;
- (id)mergedStrokesForGridRow:(unsigned int)arg1;
- (id)p_strokesForGridRow:(unsigned int)arg1 isTop:(_Bool)arg2 takeStrokeWriteLock:(_Bool)arg3;
- (_Bool)adjustGridRowForVisibility:(unsigned int *)arg1 isTop:(_Bool)arg2;
- (void)p_setDynamicStroke:(id)arg1 strokeOrder:(int)arg2 forGridRow:(unsigned int)arg3 isTop:(_Bool)arg4 beginColumn:(unsigned int)arg5 endColumn:(unsigned int)arg6;
- (double)strokeWidthOfGridColumn:(unsigned int)arg1 atRowIndex:(unsigned int)arg2;
- (double)strokeWidthOfGridColumn:(unsigned int)arg1 beginRow:(unsigned int)arg2 endRow:(unsigned int)arg3;
- (id)mergedStrokesForGridColumn:(unsigned int)arg1;
- (id)p_strokesForGridColumn:(unsigned int)arg1 isLeft:(_Bool)arg2 takeStrokeWriteLock:(_Bool)arg3;
- (_Bool)adjustGridColumnForVisibility:(unsigned int *)arg1 isLeft:(_Bool)arg2;
- (void)setClearedStrokeForGridRow:(unsigned int)arg1 beginColumn:(unsigned int)arg2 endColumn:(unsigned int)arg3;
- (void)setClearedStrokeForGridColumn:(unsigned int)arg1 beginRow:(unsigned int)arg2 endRow:(unsigned int)arg3;
- (void)setStrokeSpillForRightGridColumn:(unsigned int)arg1 leftGridColumn:(unsigned int)arg2 inRow:(unsigned int)arg3;
- (void)p_setDynamicStroke:(id)arg1 strokeOrder:(int)arg2 forGridColumn:(unsigned int)arg3 isLeft:(_Bool)arg4 beginRow:(unsigned int)arg5 endRow:(unsigned int)arg6;
- (void)validateStrokesArrays;
- (void)invalidateStrokeSpills;
- (void)invalidateStrokeDefaults;
- (id)expandCellRegionToCoverMergedCells:(id)arg1;
- (struct TSUCellRect)expandCellRangeToCoverMergedCells:(struct TSUCellRect)arg1;
- (id)mergesIntersectingCellRegion:(id)arg1;
- (id)mergesIntersectingRange:(struct TSUCellRect)arg1;
- (id)mergeRangesProppingRowHeightsInRegion:(id)arg1;
@property(readonly, nonatomic) unsigned short numberOfHeaderColumns;
@property(readonly, nonatomic) unsigned short numberOfFooterRows;
@property(readonly, nonatomic) unsigned short numberOfHeaderRows;
@property(readonly, nonatomic) unsigned short numberOfColumns;
@property(readonly, nonatomic) unsigned short numberOfRows;
- (unsigned long long)tableAreaForCellID:(struct TSUCellCoord)arg1;
- (void)validateTableNameHeight;
- (void)invalidateTableNameHeight;
- (double)calculatedTableNameHeightIncludingDynamicResize:(_Bool)arg1;
- (double)calculatedTableNameHeight;
- (double)tableNameHeight;
- (struct CGSize)tableNameTextSize;
- (id)tableNameTextEngine;
- (void)clearModelHeightWidthCacheForCellRange:(struct TSUCellRect)arg1;
- (void)resetModelHeightWidthCache;
- (_Bool)validateLayoutHint:(id)arg1;
- (_Bool)hintIsValid:(id)arg1;
- (id)newLayoutHint;
- (id)customStrokeProvider;
- (id)tableStrokeProvider;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
@property(readonly, nonatomic) _Bool emptyFilteredTable; // @synthesize emptyFilteredTable=mEmptyFilteredTable;
- (void)iterateCellsInRange:(struct TSUCellRect)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)iterateCellsAndTerminateWithIterator:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)cellIteratorWithRange:(struct TSUCellRect)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

