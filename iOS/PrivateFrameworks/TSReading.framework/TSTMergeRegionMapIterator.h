//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class TSTMergeRegionMap;

@interface TSTMergeRegionMapIterator : NSObject
{
    TSTMergeRegionMap *mMergeRegionMap;
    struct __hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>*>> {
        struct __hash_iterator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>*> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *>*> *__node_;
        } __i_;
    } mMergeRegionIterator;
}

- (id).cxx_construct;
- (void)reset;
- (void)dealloc;
- (_Bool)hasNextMergeRegion;
- (CDStruct_5f1f7aa9)nextMergeRegion;
- (id)initWithMergeRegionMap:(id)arg1;

@end

