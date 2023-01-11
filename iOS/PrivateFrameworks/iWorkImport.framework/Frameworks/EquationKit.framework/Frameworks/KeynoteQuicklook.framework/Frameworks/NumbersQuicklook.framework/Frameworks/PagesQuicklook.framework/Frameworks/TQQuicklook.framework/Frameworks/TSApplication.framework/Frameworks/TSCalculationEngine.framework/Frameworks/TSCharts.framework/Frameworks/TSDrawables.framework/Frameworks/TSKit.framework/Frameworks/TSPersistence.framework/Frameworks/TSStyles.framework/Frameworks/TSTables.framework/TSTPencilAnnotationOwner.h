//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSTables/TSCEFormulaOwning-Protocol.h>

@class NSString, TSCECalculationEngine, TSTFormulaStore, TSTTableModel, TSUSparseArray;

@interface TSTPencilAnnotationOwner : NSObject <TSCEFormulaOwning>
{
    TSCECalculationEngine *_calculationEngine;
    TSTTableModel *_tableModel;
    TSTFormulaStore *_formulaStore;
    TSUSparseArray *_annotations;
    UUIDData_5fbc143e _ownerUID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) TSUSparseArray *annotations; // @synthesize annotations=_annotations;
@property(readonly, nonatomic) TSTFormulaStore *formulaStore; // @synthesize formulaStore=_formulaStore;
@property(readonly, nonatomic) __weak TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(readonly, nonatomic) __weak TSCECalculationEngine *calculationEngine; // @synthesize calculationEngine=_calculationEngine;
@property(nonatomic) UUIDData_5fbc143e ownerUID; // @synthesize ownerUID=_ownerUID;
- (void)saveToArchive:(struct PencilAnnotationOwnerArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct PencilAnnotationOwnerArchive *)arg1 unarchiver:(id)arg2 forTableModel:(id)arg3;
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
- (struct TSCERecalculationState)multiEvaluateFormulasAt:(const struct TSCECellCoordSet *)arg1 withCalcEngine:(id)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (long long)evaluationMode;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (void)rollbackToMark:(unsigned long long)arg1;
- (unsigned long long)markForRollback;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_71b9b5e2 *)arg1;
- (id)_indexesIntersectingButNotContainingBaseCellRegion:(id)arg1;
- (id)_indexesContainedByRegion:(id)arg1;
- (void)_enumerateIndexesIntersectingRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_indexesForRows:(id)arg1;
- (id)_indexesForRange:(struct TSUModelCellRect)arg1 startingOnly:(_Bool)arg2;
- (id)_annotationsIntersectingButNotContainingBaseCellRegion:(id)arg1;
- (id)annotationsContainedByRegion:(id)arg1;
- (id)_annotationsInRows:(id)arg1;
- (id)annotationsStartingInRange:(struct TSUModelCellRect)arg1;
- (id)_annotationsForIndexes:(id)arg1;
- (unsigned long long)indexOfAnnotation:(id)arg1;
- (_Bool)containsAnnotation:(id)arg1;
- (void)enumerateAnnotationsAndFormulasContainedInRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAnnotationsAndFormulasInRange:(struct TSUModelCellRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateAnnotationsAndFormulasWithIndexes:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateAnnotationsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (struct TSUCellRect)cellRangeForAnnotation:(id)arg1;
- (id)removeAnnotationAtIndex:(unsigned long long)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAllAnnotations;
- (id)removeAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1 withFormulaObject:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addAnnotation:(id)arg1 withFormula:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)addAnnotation:(id)arg1 withAnchorRange:(struct TSUCellRect)arg2;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (id)initWithTableModel:(id)arg1 ownerUID:(UUIDData_5fbc143e)arg2 annotations:(id)arg3 formulaStore:(id)arg4;
- (id)initWithTableModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
