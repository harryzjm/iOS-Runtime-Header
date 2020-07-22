//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSCopying-Protocol.h>

@class NSMutableArray, TSTCellUIDList;

__attribute__((visibility("hidden")))
@interface TSTCellMap <NSCopying>
{
    vector_13f93596 _cellIDs;
    NSMutableArray *_mergeActions;
    _Bool _mayModifyFormulasInCells;
    _Bool _mayModifyValuesReferencedByFormulas;
    _Bool _uidBased;
    _Bool _oneToMany;
    TSTCellUIDList *_cellUIDs;
    NSMutableArray *_cellLists;
    unordered_map_d2ee14f6 *_searchableIDMap;
    unordered_map_cc9c6ffa *_searchableUIDMap;
}

+ (id)cellMapWithContext:(id)arg1;
+ (id)uuidBasedCellMapWithContext:(id)arg1;
@property(readonly, nonatomic, getter=isOneToMany) _Bool oneToMany; // @synthesize oneToMany=_oneToMany;
@property(nonatomic, getter=isUIDBased) _Bool uidBased; // @synthesize uidBased=_uidBased;
@property(nonatomic) unordered_map_cc9c6ffa *searchableUIDMap; // @synthesize searchableUIDMap=_searchableUIDMap;
@property(nonatomic) unordered_map_d2ee14f6 *searchableIDMap; // @synthesize searchableIDMap=_searchableIDMap;
@property(nonatomic) _Bool mayModifyValuesReferencedByFormulas; // @synthesize mayModifyValuesReferencedByFormulas=_mayModifyValuesReferencedByFormulas;
@property(nonatomic) _Bool mayModifyFormulasInCells; // @synthesize mayModifyFormulasInCells=_mayModifyFormulasInCells;
@property(retain, nonatomic) NSMutableArray *cellLists; // @synthesize cellLists=_cellLists;
@property(retain, nonatomic) TSTCellUIDList *cellUIDs; // @synthesize cellUIDs=_cellUIDs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)p_cellCount;
- (void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg1 preserveHostCells:(_Bool)arg2;
- (void)p_copyCellsAndUUIDsFromCellMap:(id)arg1 convertingToCellIDsWithTableInfo:(id)arg2;
- (id)p_addCell:(id)arg1;
- (id)p_cellAtIndex:(unsigned long long)arg1 inCellListArray:(id)arg2;
- (id)cellMapMaskedByUIDs:(const vector_dadc1b26 *)arg1 inRows:(_Bool)arg2;
- (id)uuidBasedCellMapByTableInfo:(id)arg1;
- (id)uuidBasedCellMapByTableInfo:(id)arg1 preserveHostCells:(_Bool)arg2;
- (id)cellIDBasedCellMapByTableInfo:(id)arg1;
- (void)appendCellMap:(id)arg1;
- (void)clearMerges;
- (void)remapUIDsByColumnMap:(const UUIDMap_727ee07e *)arg1 rowMap:(const UUIDMap_727ee07e *)arg2 ownerMap:(const UUIDMap_727ee07e *)arg3;
- (void)popLastCell;
- (id)mergeActions;
- (void)addMergeActions:(id)arg1;
- (void)addHeadMergeAction:(id)arg1;
- (void)addMergeAction:(id)arg1;
- (void)clearDataListIDs;
- (void)replaceCellAtIndex0:(id)arg1;
- (void)addCell:(id)arg1 andCellID:(struct TSUCellCoord)arg2;
- (void)addCell:(id)arg1 andCellUID:(const struct TSTCellUID *)arg2;
- (id)changeDescriptorsForTable:(id)arg1;
- (id)findCellForCellUID:(const struct TSTCellUID *)arg1;
- (id)findCellForCellID:(struct TSUCellCoord)arg1;
- (_Bool)containsMergeChanges;
- (id)iterator;
- (const vector_13f93596 *)cellIDs;
- (void)enumerateCellsWithUIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCellsWithIDsUsingBlock:(CDUnknownBlockType)arg1;
- (const vector_dadc1b26 *)columnUIDs;
- (const vector_dadc1b26 *)rowUIDs;
- (id)cellAtIndex:(unsigned long long)arg1;
- (struct TSUCellCoord)cellIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1 copyingCells:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 cell:(id)arg2 cellIDList:(const vector_13f93596 *)arg3;
- (id)initWithContext:(id)arg1 cell:(id)arg2 cellUIDList:(id)arg3;
- (id)initWithContext:(id)arg1 uidBased:(_Bool)arg2;
- (id)initWithContext:(id)arg1;

@end

