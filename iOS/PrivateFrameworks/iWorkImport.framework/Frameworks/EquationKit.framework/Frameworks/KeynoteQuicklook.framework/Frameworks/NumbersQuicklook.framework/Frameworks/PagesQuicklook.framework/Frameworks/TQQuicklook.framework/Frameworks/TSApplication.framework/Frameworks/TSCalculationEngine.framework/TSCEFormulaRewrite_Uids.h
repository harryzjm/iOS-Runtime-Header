//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface TSCEFormulaRewrite_Uids : NSObject
{
    vector_4dc5f307 _uids;
    NSIndexSet *_indexes;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, unsigned int, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, unsigned int>>> _indexesForUids;
    struct unordered_map<unsigned int, TSU::UUIDData<TSP::UUIDData>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, TSU::UUIDData<TSP::UUIDData>>>> _uidsForIndexes;
    vector_4dc5f307 _viewOrderUids;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) NSIndexSet *indexes; // @synthesize indexes=_indexes;
@property(readonly) const vector_4dc5f307 *viewOrderUids; // @synthesize viewOrderUids=_viewOrderUids;
@property(readonly) const vector_4dc5f307 *uids; // @synthesize uids=_uids;
- (void)saveToMessage:(struct IndexedUidsArchive *)arg1;
- (id)initFromMessage:(const struct IndexedUidsArchive *)arg1;
- (id)description;
- (id)indexSetBySubtractingOurIndexesFromIndexSet:(id)arg1;
- (vector_4dc5f307)uidsForIndexes:(id)arg1;
- (unsigned short)columnIndexForUid:(const UUIDData_5fbc143e *)arg1;
- (unsigned int)rowIndexForUid:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)uidForIndex:(unsigned int)arg1;
- (_Bool)containsIndex:(unsigned int)arg1;
- (void)unloadIndexes;
- (void)loadIndexesForTable:(id)arg1 isRows:(_Bool)arg2 shuffleMap:(id)arg3;
- (id)initWithUids:(const vector_4dc5f307 *)arg1 atIndexes:(const vector_f672cb0f *)arg2;
- (id)initWithUids:(const vector_4dc5f307 *)arg1;

@end
