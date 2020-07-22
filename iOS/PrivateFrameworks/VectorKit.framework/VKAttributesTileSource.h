//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKAttributesTileSource
{
}

- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (long long)zEquivalenceClass;
- (unsigned int)maximumDownloadZoomLevel;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)tileSize;
- (_Bool)maximumZoomLevelBoundsCamera;
- (_Bool)minimumZoomLevelBoundsCamera;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(shared_ptr_e963992e)arg5;

@end
