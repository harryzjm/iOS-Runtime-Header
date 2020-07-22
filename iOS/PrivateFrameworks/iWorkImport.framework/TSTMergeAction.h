//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTMergeAction : NSObject <NSCopying>
{
    int _type;
    vector_b8794d04 _uidRanges;
    vector_7ac42031 _mergeFormulas;
    vector_88016b54 _mergeFormulaIndexes;
}

+ (id)mergeActionForInsertingRange:(const struct TSTCellUIDRange *)arg1 inTable:(id)arg2;
+ (id)mergeActionForGrowingRange:(const struct TSTCellUIDRange *)arg1 coveringRange:(const struct TSTCellUIDRange *)arg2 inTable:(id)arg3;
+ (struct TSCEFormula)p_createFormulaForUIDRange:(struct TSTCellUIDRange)arg1 inTable:(id)arg2;
+ (id)mergeActionForRemovingRanges:(const vector_b8794d04 *)arg1 inTable:(id)arg2;
+ (struct TSTCellUIDRange)cellUIDRangeFromMergeFormula:(const struct TSCEFormula *)arg1;
+ (id)stringForMergeType:(int)arg1;
@property(nonatomic) const vector_88016b54 *mergeFormulaIndexes; // @synthesize mergeFormulaIndexes=_mergeFormulaIndexes;
@property(nonatomic) const vector_7ac42031 *mergeFormulas; // @synthesize mergeFormulas=_mergeFormulas;
@property(nonatomic) const vector_b8794d04 *uidRanges; // @synthesize uidRanges=_uidRanges;
@property(nonatomic) int type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionByExpandingWithAction:(id)arg1;
- (id)shrinkAction;
- (id)changeDescriptorForTable:(id)arg1;
- (id)remapUIDsByColumnMap:(const UUIDMap_727ee07e *)arg1 rowMap:(const UUIDMap_727ee07e *)arg2 ownerMap:(const UUIDMap_727ee07e *)arg3;
- (void)enumerateMergeFormulasUsingBlock:(CDUnknownBlockType)arg1;
- (void)saveToArchive:(struct MergeOperationArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct MergeOperationArchive *)arg1 unarchiver:(id)arg2;
- (void)addFormulaIndex:(unsigned long long)arg1;
- (void)addFormula:(const struct TSCEFormula *)arg1;
@property(readonly, nonatomic) _Bool hasMergeFormulas;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 uidRanges:(const vector_b8794d04 *)arg2;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 uidRange:(const struct TSTCellUIDRange *)arg2;
- (void)verify;

@end

