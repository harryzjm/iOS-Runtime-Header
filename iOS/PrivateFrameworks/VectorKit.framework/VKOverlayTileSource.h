//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, VKTileSource;

__attribute__((visibility("hidden")))
@interface VKOverlayTileSource
{
    VKTileSource *_tileSourceToMatch;
    NSMutableArray *_overlays;
}

@property(readonly, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)sourceKeyForDownloadKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (_Bool)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (long long)maximumZoomLevelWithoutOverride;
- (long long)maximumZoomLevel;
- (long long)minimumZoomLevel;
- (long long)zEquivalenceClass;
- (unsigned int)maximumDownloadZoomLevel;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)tileSize;
- (_Bool)maximumZoomLevelBoundsCamera;
- (_Bool)minimumZoomLevelBoundsCamera;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)nativeKeyForRenderKey:(const struct VKTileKey *)arg1;
- (void)matchTilesFromSource:(id)arg1;
- (void)_overlayBoundingMapRegionChanged:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)dealloc;

@end

