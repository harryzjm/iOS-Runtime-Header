//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSCECalculationEngine, TSCETrackedReferenceStore, TSTTableInfo;

@interface TSTSortRuleReferenceTracker : NSObject
{
    struct TSKUIDStruct _ownerUID;
    struct TSKUIDStruct _baseTableUID;
    TSCECalculationEngine *_calcEngine;
    TSCETrackedReferenceStore *_trackedRefsStore;
    _Bool _isRegisteredWithCalculationEngine;
    TSTTableInfo *_tableInfo;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(nonatomic) struct TSKUIDStruct baseTableUID; // @synthesize baseTableUID=_baseTableUID;
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
- (struct TSCERecalculationState)multiEvaluateFormulasAt:(const void *)arg1 withCalcEngine:(id)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (struct TSCERecalculationState)evaluateFormulaAt:(struct TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (long long)evaluationMode;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (id)initFromArchive:(const void *)arg1 unarchiver:(id)arg2;
- (void)encodeToArchive:(void *)arg1 archiver:(id)arg2;
- (void)setOwnerUID:(const struct TSKUIDStruct *)arg1;
- (struct TSKUIDStruct)ownerUID;
- (void)updateForSortRules:(id)arg1;
- (id)beginTrackingReferenceWithSpanningRef:(const struct TSCESpanningRangeRef *)arg1;
- (void)endTrackingReference:(id)arg1;
- (void)beginTrackingReference:(id)arg1;
- (_Bool)p_hasRuleReferenceForTrackedReference:(id)arg1;
- (unsigned short)p_columnForTrackedReference:(id)arg1;
- (struct TSCESpanningRangeRef)p_referenceForColumnIndex:(unsigned short)arg1;
- (void)unregisterFromCalcEngine;
- (void)registerWithCalcEngine:(id)arg1;
- (void)registerWithCalcEngine:(id)arg1 reregister:(_Bool)arg2;
- (id)initWithTableInfo:(id)arg1 baseTableUID:(const struct TSKUIDStruct *)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

