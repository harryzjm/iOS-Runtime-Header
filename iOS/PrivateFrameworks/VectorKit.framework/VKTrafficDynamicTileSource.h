//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKTileCache;

__attribute__((visibility("hidden")))
@interface VKTrafficDynamicTileSource
{
    VKTileCache *_recentTrafficDynamicTiles;
}

- (void)expireTiles;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (id)sourceKeysForRenderKey:(const struct VKTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (_Bool)minimumZoomLevelBoundsCamera;
- (_Bool)maximumZoomLevelBoundsCamera;
- (unsigned char)mapLayerForZoomLevelRange;
- (long long)defaultMaximumZoomLevel;
- (long long)defaultMinimumZoomLevel;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)clearCaches;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(shared_ptr_e963992e)arg5;

@end
