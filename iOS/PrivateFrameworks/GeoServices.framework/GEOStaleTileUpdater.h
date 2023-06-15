//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOResourceManifestManager, GEOTileDB, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOStaleTileUpdater
{
    GEOTileDB *_diskCache;
    GEOResourceManifestManager *_manifestManager;
    GEOTileKeyList *_keysRemaining;
    unsigned long long _numberOfTilesOriginallyConsidered;
    unsigned long long _batchSize;
}

- (void).cxx_destruct;
- (void)_addMoreKeysToListIfNeeded:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)determineNextBatchWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (unsigned long long)numberOfTilesConsidered;
- (_Bool)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)_determineStaleKeysToUpdate;
- (id)initWithDiskCache:(id)arg1 manifestManager:(id)arg2 tileRequesterCreationBlock:(CDUnknownBlockType)arg3;
- (unsigned char)reason;

@end

