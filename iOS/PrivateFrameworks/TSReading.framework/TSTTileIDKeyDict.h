//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSTTileIDKeyDict
{
    struct unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
}

- (long long)count;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)makeTilesPerformSelector:(SEL)arg1;
- (void)removeAllTiles;
- (void)removeTileForID:(CDStruct_d65e47c4)arg1;
- (void)setTile:(id)arg1 forID:(CDStruct_d65e47c4)arg2;
- (id)tileForID:(CDStruct_d65e47c4)arg1;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end
