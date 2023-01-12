//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPersistentHistoryToken;

@interface PLBackgroundJobGuestAssetSyncWorker
{
    NSPersistentHistoryToken *_cancelledWorkItem;
}

+ (_Bool)_isTokenInvalidError:(id)arg1;
+ (_Bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (id)workerWithLibraryBundle:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSPersistentHistoryToken *cancelledWorkItem; // @synthesize cancelledWorkItem=_cancelledWorkItem;
- (_Bool)_systemPhotoLibraryChangedSinceLastRunWithSourceLibrary:(id)arg1 targetLibrary:(id)arg2;
- (void)_updateLastGuestAssetSyncTargetLibraryURLInSourceLibrary:(id)arg1 targetLibrary:(id)arg2;
- (id)_lastGuestAssetSyncTargetLibraryURLFromSourceLibrary:(id)arg1 targetLibrary:(id)arg2;
- (void)_saveGuestAssetSyncToken:(id)arg1 toLibrary:(id)arg2;
- (id)_lastGuestAssetSyncTokenFromLibrary:(id)arg1;
- (_Bool)_batchResetSyndicationProcessingInManagedObjectContext:(id)arg1;
- (_Bool)_batchResetGuestSavedAssetTypeInManagedObjectContext:(id)arg1;
- (_Bool)_resetSyndicationProcessingInSourceLibrary:(id)arg1;
- (id)_anyPersistentHistoryTokenWithLibrary:(id)arg1;
- (id)_transactionIteratorSinceTokenIfValid:(id)arg1 sourceLibrary:(id)arg2 error:(id *)arg3;
- (id)_transactionIteratorSinceLastToken:(id)arg1 sourceLibrary:(id)arg2 error:(id *)arg3;
- (id)_sourcePhotoLibraryWithName:(const char *)arg1;
- (void)_markAsWasGuestAssetOnAssetWithSyndicationIdentifier:(id)arg1 inLibrary:(id)arg2;
- (void)_deleteAssetWithUuid:(id)arg1 syndicationIdentifier:(id)arg2 fromLibrary:(id)arg3;
- (_Bool)_syncAsset:(id)arg1 toLibrary:(id)arg2 error:(id *)arg3;
- (_Bool)_shouldCancelCurrentWorkItem:(id)arg1;
- (void)_resetCancelledWorkItem;
- (void)_deleteAllGuestAssetsInPhotoLibrary:(id)arg1 reason:(id)arg2;
- (_Bool)_checkSyndicationPreferencesEnabledAndCleanupGuestAssetsIfNeededWithPhotoLibrary:(id)arg1;
- (void)stopWorkingOnItem:(id)arg1;
- (_Bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end
