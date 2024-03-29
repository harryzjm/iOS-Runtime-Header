//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TSCECalculationEngine, TSTTableModel;

@interface TSTHiddenStatesOwner : NSObject
{
    TSTTableModel *_tableModel;
    TSCECalculationEngine *_calcEngine;
    struct TSKUIDStruct _baseTableUID;
    NSMutableDictionary *_hiddenStatesByRowExtentUuid;
    NSMutableDictionary *_hiddenStatesByColumnExtentUuid;
}

- (void).cxx_destruct;
@property(nonatomic) struct TSKUIDStruct baseTableUID; // @synthesize baseTableUID=_baseTableUID;
@property(nonatomic) __weak TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
- (void)remapTableUIDsInFormulasWithMap:(const void *)arg1 calcEngine:(id)arg2;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2 forBaseTable:(id)arg3;
- (void)didChangeExtentUids:(id)arg1;
- (void)willChangeExtentUids:(id)arg1;
- (void)unregisterHiddenStates:(id)arg1;
- (id)hiddenStatesByExtentUid:(const struct TSKUIDStruct *)arg1;
- (void)registerHiddenStates:(id)arg1 baseOwnerUID:(const struct TSKUIDStruct *)arg2;
- (id)calcEngine;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const struct TSKUIDStruct *)arg2;
- (id)description;
- (id)hiddenStates;
- (id)initWithBaseTable:(id)arg1;

@end

