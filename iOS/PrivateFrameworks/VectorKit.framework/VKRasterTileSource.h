//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, VKTileKeyList;

__attribute__((visibility("hidden")))
@interface VKRasterTileSource
{
    NSMutableDictionary *_genericTextureCache;
    struct unordered_map<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D>, std::__1::hash<GEOGenericTileType>, std::__1::equal_to<GEOGenericTileType>, std::__1::allocator<std::__1::pair<const GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D>>>> _gglGenericRasterTextureCache;
    VKTileKeyList *_recentNoDataSourceKeys;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (void)_fetchedTile:(id)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)clearCaches;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(shared_ptr_e963992e)arg5;

@end
