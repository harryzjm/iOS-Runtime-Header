//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKNavPolygonTileSource
{
}

- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (unsigned char)mapLayerForZoomLevelRange;
- (long long)defaultMaximumZoomLevel;
- (long long)defaultMinimumZoomLevel;
- (_Bool)minimumZoomLevelBoundsCamera;

@end

