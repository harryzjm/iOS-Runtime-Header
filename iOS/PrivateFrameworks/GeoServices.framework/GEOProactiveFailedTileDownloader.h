//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOTileDB, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOProactiveFailedTileDownloader
{
    GEOTileDB *_diskCache;
    GEOTileKeyList *_keysRemaining;
    unsigned long long _numberOfTilesOriginallyConsidered;
    unsigned long long _batchSize;
}

- (void).cxx_destruct;
- (void)_addMoreKeysToListIfNeeded:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)determineNextBatchWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (unsigned long long)numberOfTilesConsidered;
- (_Bool)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)_determineKeysToUpdate;
- (id)initWithDiskCache:(id)arg1 tileRequesterCreationBlock:(CDUnknownBlockType)arg2;
- (unsigned char)reason;

@end

