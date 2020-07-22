//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSTTileIDKeyDict
{
    struct hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
}

+ (id)p_sharedQueue;
- (long long)count;
- (void)enumerateTilesConcurrentlyUsingBlock:(CDUnknownBlockType)arg1 andWaitForAsyncBlocks:(_Bool)arg2;
- (void)enumerateTilesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllTiles;
- (void)removeTileForID:(CDStruct_d65e47c4)arg1;
- (void)setTile:(id)arg1 forID:(CDStruct_d65e47c4)arg2;
- (id)tileForID:(CDStruct_d65e47c4)arg1;
- (void)saveToArchive:(struct TileStorage *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TileStorage *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end
