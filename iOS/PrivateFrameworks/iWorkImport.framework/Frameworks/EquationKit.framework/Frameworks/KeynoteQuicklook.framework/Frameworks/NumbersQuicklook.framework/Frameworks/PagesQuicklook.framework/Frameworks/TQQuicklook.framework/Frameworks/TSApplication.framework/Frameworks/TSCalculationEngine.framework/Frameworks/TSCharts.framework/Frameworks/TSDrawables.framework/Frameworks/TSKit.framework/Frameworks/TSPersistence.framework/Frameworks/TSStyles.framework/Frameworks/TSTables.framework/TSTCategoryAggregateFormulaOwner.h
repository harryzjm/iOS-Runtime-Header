//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSCECalculationEngine, TSTCellDictionary, TSTTableInfo;

@interface TSTCategoryAggregateFormulaOwner : NSObject
{
    TSCECalculationEngine *_calcEngine;
    TSTTableInfo *_tableInfo;
    struct TSKUIDStruct _tableUID;
    struct TSKUIDStruct _ownerUID;
    TSTCellDictionary *_cellsPendingWrite;
}

- (void).cxx_destruct;
@property(nonatomic) const struct TSKUIDStruct *ownerUID; // @synthesize ownerUID=_ownerUID;
@property(nonatomic) const struct TSKUIDStruct *tableUID; // @synthesize tableUID=_tableUID;
@property(readonly, nonatomic) TSTCellDictionary *cellsPendingWrite; // @synthesize cellsPendingWrite=_cellsPendingWrite;
- (struct TSCERecalculationState)evaluateFormulaAt:(struct TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (long long)evaluationMode;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const struct TSKUIDStruct *)arg2;
- (_Bool)isRegisteredWithCalcEngine:(id)arg1;
@property(nonatomic) __weak TSTTableInfo *tableInfo;
- (id)initWithTableUID:(const struct TSKUIDStruct *)arg1 ownerUID:(const struct TSKUIDStruct *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

