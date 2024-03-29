//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface TSCEFormulaRewrite_Uids : NSObject
{
    TSKUIDStructVectorTemplate_de88e035 _uids;
    NSIndexSet *_indexes;
    struct unordered_map<TSKUIDStruct, unsigned int, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned int>>> _indexesForUids;
    struct unordered_map<unsigned int, TSKUIDStruct, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSKUIDStruct>>> _uidsForIndexes;
    TSKUIDStructVectorTemplate_de88e035 _viewOrderUids;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) NSIndexSet *indexes; // @synthesize indexes=_indexes;
@property(readonly) const void *viewOrderUids; // @synthesize viewOrderUids=_viewOrderUids;
@property(readonly) const void *uids; // @synthesize uids=_uids;
- (void)saveToMessage:(void *)arg1;
- (id)initFromMessage:(const void *)arg1;
- (id)description;
- (id)indexSetBySubtractingOurIndexesFromIndexSet:(id)arg1;
- (TSKUIDStructVectorTemplate_de88e035)uidsForIndexes:(id)arg1;
- (unsigned short)columnIndexForUid:(const struct TSKUIDStruct *)arg1;
- (unsigned int)rowIndexForUid:(const struct TSKUIDStruct *)arg1;
- (struct TSKUIDStruct)uidForIndex:(unsigned int)arg1;
- (_Bool)containsIndex:(unsigned int)arg1;
- (void)unloadIndexes;
- (void)loadIndexesForTable:(id)arg1 isRows:(_Bool)arg2 shuffleMap:(id)arg3;
- (id)initWithUids:(const void *)arg1 atIndexes:(const void *)arg2;
- (id)initWithUids:(const void *)arg1;

@end

