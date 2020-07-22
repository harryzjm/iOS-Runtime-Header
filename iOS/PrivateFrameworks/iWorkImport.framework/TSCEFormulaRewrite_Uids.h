//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewrite_Uids : NSObject
{
    vector_dadc1b26 _uids;
    NSIndexSet *_indexes;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, unsigned short, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, unsigned short>>> _indexesForUids;
    struct unordered_map<unsigned short, TSU::UUIDData<TSP::UUIDData>, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSU::UUIDData<TSP::UUIDData>>>> _uidsForIndexes;
}

@property(readonly) NSIndexSet *indexes; // @synthesize indexes=_indexes;
@property(readonly) const vector_dadc1b26 *uids; // @synthesize uids=_uids;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToMessage:(struct IndexedUidsArchive *)arg1;
- (id)initFromMessage:(const struct IndexedUidsArchive *)arg1;
- (id)description;
- (void)subtractIndexesFromIndexSet:(id)arg1;
- (unsigned short)indexForUid:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)uidForIndex:(unsigned short)arg1;
- (_Bool)containsIndex:(unsigned short)arg1;
- (void)unloadIndexes;
- (void)loadIndexesForTable:(id)arg1 isRows:(_Bool)arg2;
- (void)dealloc;
- (id)initWithUids:(const vector_dadc1b26 *)arg1;

@end

