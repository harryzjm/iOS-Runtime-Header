//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/CPLLibraryManagerDelegate-Protocol.h>
#import <PhotoLibraryServices/CPLResourceProgressDelegate-Protocol.h>
#import <PhotoLibraryServices/CPLStatusDelegate-Protocol.h>
#import <PhotoLibraryServices/PLBackgroundJobWorkerCoordinatorDelegate-Protocol.h>
#import <PhotoLibraryServices/PLCloudChangeTrackerDelegate-Protocol.h>
#import <PhotoLibraryServices/PLCloudPersistentHistoryMigratorContext-Protocol.h>
#import <PhotoLibraryServices/PLCloudUserSessionHandling-Protocol.h>
#import <PhotoLibraryServices/PLForegroundMonitorDelegate-Protocol.h>

@class CPLLibraryManager, CPLStatus, NSMutableArray, NSMutableDictionary, NSNumber, NSString, PFCoalescer, PLBackgroundJobWorkerCoordinator, PLCloudBatchDownloader, PLCloudBatchUploader, PLCloudInMemoryTaskManager, PLCloudPhotoLibraryUploadTracker, PLCloudPhotoLibraryUserSwitchHandler, PLCloudTaskManager, PLForegroundMonitor, PLLazyObject, PLLibraryServicesManager, PLPhotoLibrary, PLPhotoLibraryPathManager;
@protocol OS_dispatch_queue, OS_dispatch_source, PLCloudChangeTracker;

@interface PLCloudPhotoLibraryManager : NSObject <PLCloudChangeTrackerDelegate, PLCloudPersistentHistoryMigratorContext, PLBackgroundJobWorkerCoordinatorDelegate, CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundMonitorDelegate, PLCloudUserSessionHandling, CPLStatusDelegate>
{
    PLCloudBatchUploader *_uploader;
    PLCloudBatchDownloader *_downloader;
    id <PLCloudChangeTracker> _changeTracker;
    _Bool _wasRebuild;
    _Bool _hasAttemptedMigration;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLForegroundMonitor *_foregroundMonitor;
    unsigned long long _mode;
    _Bool _checkEnableStateOnIdle;
    _Bool _icplEnabled;
    _Bool _pushOnIdle;
    _Bool _pullOnIdle;
    _Bool _modeChangePending;
    _Bool _hasSettledInitialBatch;
    CPLLibraryManager *_unsafe_cplLibrary;
    CPLStatus *_unsafe_cplStatus;
    int _pauseRequest;
    short _pauseReason;
    PLCloudTaskManager *_taskManager;
    PLLazyObject *_lazyResourceManager;
    PLLazyObject *_lazyRecoveryManager;
    NSObject<OS_dispatch_source> *_unpauseDispatchTimer;
    NSObject<OS_dispatch_source> *_userUnpauseDispatchTimer;
    long long _pendingResetSyncType;
    _Bool _initializedMaster;
    PFCoalescer *_coalescer;
    NSObject<OS_dispatch_queue> *_uploadDownloadCountQueue;
    unsigned long long _boundForUploadingPhotos;
    unsigned long long _boundForUploadingVideos;
    unsigned long long _boundForUploadingOtherItems;
    NSObject<OS_dispatch_source> *_workInProgressTimer;
    _Bool _significantWork;
    PLCloudInMemoryTaskManager *_inMemoryTaskManager;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    NSMutableDictionary *_placeholderAssetAvailabilityHandlers;
    struct os_unfair_lock_s _placeholderAssetAvailabilityHandlersLock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    PLCloudPhotoLibraryUserSwitchHandler *_switchHandler;
    PLLazyObject *_lazyCacheDeleteSupport;
    NSMutableArray *_pushAllChangesCompletionHandlers;
    PLBackgroundJobWorkerCoordinator *_backgroundJobWorkerCoordinator;
    _Bool _pushingAllChanges;
    _Bool _didCallBlocksWaitingForLibraryOpen;
    NSMutableArray *_blocksWaitingForLibraryOpen;
    struct os_unfair_lock_s _waitForLibraryOpenLock;
    struct os_unfair_lock_s _cplLibraryLock;
    _Bool _willBecomeNonSPL;
    _Bool _isHandlingStatusChangesNotification;
    unsigned long long _statusChangesNotificationGeneration;
    PLLibraryServicesManager *_libraryServicesManager;
    NSNumber *__numberOfPhotosToPush;
    NSNumber *__numberOfVideosToPush;
    NSNumber *__numberOfOtherItemsToPush;
    NSNumber *__numberOfPhotosDownloaded;
    NSNumber *__numberOfVideosDownloaded;
    NSNumber *__numberOfOtherItemsDownloaded;
    CDUnknownBlockType __idleStateTransitionOneTimeAction;
}

+ (_Bool)needResetSyncErrorType:(id)arg1;
+ (id)descriptionForResourceType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setIdleStateTransitionOneTimeAction:) CDUnknownBlockType _idleStateTransitionOneTimeAction; // @synthesize _idleStateTransitionOneTimeAction=__idleStateTransitionOneTimeAction;
@property(retain, nonatomic, setter=_setNumberOfOtherItemsDownloaded:) NSNumber *_numberOfOtherItemsDownloaded; // @synthesize _numberOfOtherItemsDownloaded=__numberOfOtherItemsDownloaded;
@property(retain, nonatomic, setter=_setNumberOfVideosDownloaded:) NSNumber *_numberOfVideosDownloaded; // @synthesize _numberOfVideosDownloaded=__numberOfVideosDownloaded;
@property(retain, nonatomic, setter=_setNumberOfPhotosDownloaded:) NSNumber *_numberOfPhotosDownloaded; // @synthesize _numberOfPhotosDownloaded=__numberOfPhotosDownloaded;
@property(retain, nonatomic, setter=_setNumberOfOtherItemsToPush:) NSNumber *_numberOfOtherItemsToPush; // @synthesize _numberOfOtherItemsToPush=__numberOfOtherItemsToPush;
@property(retain, nonatomic, setter=_setNumberOfVideosToPush:) NSNumber *_numberOfVideosToPush; // @synthesize _numberOfVideosToPush=__numberOfVideosToPush;
@property(retain, nonatomic, setter=_setNumberOfPhotosToPush:) NSNumber *_numberOfPhotosToPush; // @synthesize _numberOfPhotosToPush=__numberOfPhotosToPush;
@property(readonly, nonatomic) __weak PLLibraryServicesManager *libraryServicesManager; // @synthesize libraryServicesManager=_libraryServicesManager;
- (void)getUUIDsForCloudIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forceSyncMomentSharesWithScopeIdentifiers:(id)arg1;
- (void)boostPriorityForMomentShareWithScopeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptCPLShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchShareFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishCPLMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)statusDidChange:(id)arg1;
- (void)_setToDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2;
- (_Bool)_hasIncomingWorkFileMarker;
- (_Bool)_hasAvalancheIncomingWork;
- (void)_checkForWorkInProgress;
- (void)_stopWorkInProgressTimer;
- (void)_startWorkInProgressTimer;
- (void)endUserSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long currentResetSyncType;
@property(readonly, nonatomic) unsigned long long totalUploadedOriginalSize;
@property(readonly, nonatomic) unsigned long long totalSizeOfUnpushedOriginals;
@property(readonly, nonatomic) unsigned long long totalNumberOfUploadedMasters;
@property(readonly, nonatomic) unsigned long long totalNumberOfUnpushedMasters;
- (unsigned long long)_inq_numberOfOtherItemsToDownload;
- (unsigned long long)_inq_numberOfVideosToDownload;
- (unsigned long long)_inq_numberOfPhotosToDownload;
- (unsigned long long)_inq_numberOfVideosToUpload;
- (unsigned long long)_inq_numberOfPhotosToUpload;
- (unsigned long long)_inq_numberOfOtherItemsToUpload;
- (void)_updateTransferCounts;
- (void)clearPrefetchState;
- (void)setCPLStatus:(id)arg1;
- (id)cplStatus;
- (void)getCPLState:(CDUnknownBlockType)arg1;
- (_Bool)_isPausedForDownloadRequestHighPriority:(_Bool)arg1;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(_Bool)arg2 forBundleIdentifier:(id)arg3;
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;
- (void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2;
- (short)_placeHolderKindFromCPLResourceType:(unsigned long long)arg1;
- (void)_updateWithCPLResource:(id)arg1 isHighPriority:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateLocalStaleResourceWithCPLResource:(id)arg1;
- (struct CGSize)_targetSizeForInputSize:(struct CGSize)arg1 maxPixelSize:(unsigned long long)arg2;
- (void)_linkFileFrom:(id)arg1 to:(id)arg2;
- (_Bool)_isAssetsdNotReadyToAnswer;
- (void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4;
- (void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;
- (void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 finalResource:(id)arg3 withError:(id)arg4;
- (void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1;
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1;
- (void)libraryManager:(id)arg1 pushAllChangesWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_getStatusChanges:(id)arg1 transaction:(id)arg2 notificationGeneration:(unsigned long long)arg3;
- (void)libraryManagerHasStatusChanges:(id)arg1;
- (void)libraryManagerHasChangesToPull:(id)arg1;
- (void)libraryManagerDidStartSynchronization:(id)arg1;
- (void)libraryManagerStatusDidChange:(id)arg1;
- (void)_markResourceObjectIDsAsPurgeable:(id)arg1 urgency:(long long)arg2;
- (void)processDownloadBatchWithSession:(id)arg1;
- (void)_downloadFromCloud;
- (_Bool)overrideSystemBudgetsForSyncSession:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAutomaticPrefetchOrPrune;
- (id)lastKnownCloudVersionFromDisk;
- (void)_processUploadBatchWithStartupFailureCount:(unsigned long long)arg1;
- (void)_finishUploadWithNoBatchesToUpload;
- (void)_handleFinalizeSessionError:(id)arg1 commitError:(id)arg2 uploadBatchContainer:(id)arg3 needResetSync:(_Bool)arg4 forTransaction:(id)arg5;
- (void)_processUploadBatch;
- (void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2;
- (void)uploadToCloudForEventsResult:(id)arg1;
- (void)_uploadFullPhotoLibraryToCloud;
- (void)_checkForPushedMasters;
- (void)_fixMasterStatusIn:(id)arg1;
- (_Bool)isConnectedToChangeTracker;
- (id)fetchEventsFromChangeTracker;
- (void)_fetchNewEventsFromChangeTracker;
- (void)dumpStatusIncludingDaemon:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetSyncDueToMigrationMarker;
- (id)readLocalVersion;
- (void)setLocalVersion:(id)arg1;
- (void)setMigratedLocalVersion:(id)arg1;
- (void)setMigrationMarker:(id)arg1;
- (id)readMigrationMarker;
- (void)startAssetRecoveryWithTransaction:(id)arg1;
- (void)_doResetSync:(long long)arg1;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadResourceInMemoryForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)downloadAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 highPriority:(_Bool)arg4 clientBundleID:(id)arg5 proposedTaskIdentifier:(id)arg6 taskDidBeginHandler:(CDUnknownBlockType)arg7 progressBlock:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)_assetResourceForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 isPhoto:(_Bool *)arg4;
- (void)downloadResource:(id)arg1 intent:(unsigned long long)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)downloadResource:(id)arg1 highPriority:(_Bool)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)_identifierForResource:(id)arg1;
- (void)getStreamingURLForAsset:(id)arg1 resourceType:(unsigned long long)arg2 intent:(unsigned long long)arg3 hints:(id)arg4 clientBundleID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)fetchResourcesForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAdjustmentDataForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1;
- (void)cancelResourceTransferTaskWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sync;
- (void)callPlaceholderAssetAvailabilityHandlerForAssetUUID:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)unregisterPlaceholderAssetAvailabilityHandlerForAssetUUID:(id)arg1;
- (void)registerPlaceholderAssetAvailabilityHandler:(CDUnknownBlockType)arg1 forAssetUUID:(id)arg2;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)arg1;
- (_Bool)connectToChangeTracker;
- (void)saveTokenObject:(id)arg1;
- (id)readTokenObject;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)_callPushAllChangesCompletionHandlersIfNecessary;
- (void)_setupPLCPLPlist;
- (void)_checkEnableState;
@property(readonly, nonatomic, getter=isCloudPhotoLibraryEnabled) _Bool cloudPhotoLibraryEnabled;
- (void)_processNextTransaction;
- (void)_checkAndMarkPurgeableResourcesIfSafe:(id)arg1 checkServerIfNecessary:(_Bool)arg2 urgency:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_markPurgeableResourcesMatchingPredicate:(id)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_clearPurgeableResourcesMatchingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_repushMasterWithMissingMediaMetadata;
- (void)_repushVideoAssetsMetadata;
- (void)_handleOptimizeSettingChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleOptimizeSettingChange;
- (void)_reportOptimizeSettingChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reportMiscInformation:(id)arg1;
- (void)_updatePendingResetSyncDate;
- (_Bool)_setupTimerForUnpause;
- (void)_constructUnpauseTimerFrom:(id)arg1 to:(id)arg2;
- (id)_calculateUnpauseTimeForPauseTime:(id)arg1;
- (void)_stopUnpauseTimer;
- (void)_transitionToState:(unsigned long long)arg1;
- (_Bool)_canExternallyTransitionToNewLibraryModeIgnoringPause:(_Bool)arg1;
- (void)_callBlocksWaitingForLibraryOpen;
- (void)_runOnLibraryOpenWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 afterDelay:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_runSyncOnIsolationQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleModeTransistionAfterDisableiCPL;
- (void)_disableiCPLWillBecomeNonSystemPhotoLibrary:(_Bool)arg1;
- (void)disableiCPLSyncWillBecomeNonSystemPhotoLibrary;
- (void)disableiCPLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_pause;
- (void)_doPause;
- (void)_unpause;
- (void)setPause:(_Bool)arg1 reason:(short)arg2;
- (void)_doUnpause;
- (void)dealloc;
- (void)_resetCPLLibrary;
- (void)cplHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endsSignificantWork;
- (void)beginsSignificantWorkWithResourcesSize:(unsigned long long)arg1;
- (void)_migrateFromChangeHubToCoreDataIfNecessary;
- (void)_createDeletionRecordsIfNecessary;
- (void)_runOneTimeMigrationStepsIfNecessary;
- (void)_runOneTimeMigrationStepsWithoutiCPLIfNecessary;
- (void)_initializeMasterAndSizeCalculation;
- (void)_promptForCameraCaptureSettingChangeWithReason:(int)arg1;
- (void)_handleAccountFlagsChangeIfNecessary;
- (void)_openCPLLibrary;
- (void)_enableiCPL;
- (_Bool)_hasItemToDownload;
- (id)recoveryManager;
- (void)_initRecoveryManager;
- (void)_resetResourceManager;
- (id)resourceManager;
- (void)_initResourceManager;
- (void)_resetCacheDeleteSupport;
- (id)cacheDeleteSupport;
- (void)_initCacheDeleteSupport;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)enableiCPLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)sizeOfResourcesToUploadByCPL:(id *)arg1;
- (void)setCPLLibrary:(id)arg1;
- (id)cplLibrary;
- (void)invalidateRecoveryManager;
- (void)invalidateCacheDeleteSupport;
- (void)invalidateResourceManager;
- (void)invalidate;
- (id)initWithLibraryServicesManager:(id)arg1;
- (id)_debugNameForMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
