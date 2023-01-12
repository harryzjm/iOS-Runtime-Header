//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PLTableThumbnailMigrator : NSObject
{
    struct os_unfair_lock_s _pendingAssetObjectIDsLock;
    NSMutableSet *_pendingAssetObjectIDs;
}

+ (unsigned long long)countOfAssetsPendingTableThumbRebuildInLibrary:(id)arg1;
+ (id)_nextBatchOfItemsPendingTableRebuildInLibrary:(id)arg1 excludingAssetIDs:(id)arg2 sourceObjects:(id *)arg3;
+ (id)_workItemForAsset:(id)arg1 library:(id)arg2 thumbnailManager:(id)arg3;
+ (_Bool)_writeCompressedTableThumbsFromMasterThumb:(struct CGImageSource *)arg1 uuid:(id)arg2 formats:(id)arg3 toIndex:(unsigned long long)arg4 thumbnailManager:(id)arg5;
+ (id)_fetchRequstForAssetsPendingTableRebuildWithLimit:(long long)arg1 excludingAssetIDs:(id)arg2;
+ (id)_predicateForAssetsPendingTableRebuild;
- (void).cxx_destruct;
- (void)migrateAllAssetsPendingTableThumbRebuildInLibrary:(id)arg1 toTableFormats:(id)arg2 limit:(unsigned long long)arg3;
- (void)rebuildTableThumbForAsset:(id)arg1 inLibrary:(id)arg2 toTableFormats:(id)arg3;
- (void)_rebuildTablesForBatch:(id)arg1 inLibrary:(id)arg2 toFormats:(id)arg3;
- (id)_bulkMigratorQueue;
- (id)init;

@end
