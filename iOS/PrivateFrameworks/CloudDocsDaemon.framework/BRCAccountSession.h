//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCCloudDocsAppsObserver-Protocol.h>

@class BRCAccountWaitOperation, BRCAnalyticsReporter, BRCApplyScheduler, BRCClientState, BRCContainerScheduler, BRCDeadlineScheduler, BRCDiskSpaceReclaimer, BRCDownloadTrackers, BRCFSDownloader, BRCFSReader, BRCFSUploader, BRCFSWriter, BRCFairScheduler, BRCGlobalProgress, BRCItemTransmogrifier, BRCNotificationManager, BRCPQLConnection, BRCRecentsEnumerator, BRCServerPersistedState, BRCStageRegistry, BRCSyncUpScheduler, BRCThrottle, BRCUserNotification, BRCVolume, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, NSURL, br_pacer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCAccountSession : NSObject <BRCCloudDocsAppsObserver>
{
    NSMutableDictionary *_syncContexts;
    BRCDeadlineScheduler *_defaultScheduler;
    NSURL *_dbURL;
    NSObject<OS_dispatch_source> *_dbWatcher;
    NSObject<OS_dispatch_queue> *_dbWatcherQueue;
    NSObject<OS_dispatch_queue> *_dbCorruptionQueue;
    NSObject<OS_dispatch_queue> *_clientTruthWorkloop;
    NSObject<OS_dispatch_queue> *_serverTruthWorkloop;
    NSObject<OS_dispatch_queue> *_readOnlyWorkloop;
    int _cloudDocsFD;
    CDUnknownBlockType _dbProfilingHook;
    NSString *_databaseID;
    NSHashTable *_miscOperations;
    BRCPQLConnection *_clientDB;
    BRCPQLConnection *_serverDB;
    BRCPQLConnection *_readOnlyDB;
    BRCPQLConnection *_expensiveReadOnlyDB;
    BRCClientState *_clientState;
    BRCServerPersistedState *_serverState;
    struct brc_mutex _zonesLock;
    NSMutableDictionary *_libraryRowIDsByMangledID;
    NSMutableDictionary *_appLibrariesByRowID;
    NSMutableDictionary *_serverZonesByZoneRowID;
    NSMutableDictionary *_sharedServerZonesByMangledID;
    NSMutableDictionary *_sharedClientZonesByMangledID;
    NSMutableDictionary *_privateServerZonesByID;
    NSMutableDictionary *_privateClientZonesByID;
    NSString *_accountID;
    NSMutableSet *_xpcClients;
    _Bool _resumed;
    BRCGlobalProgress *_globalProgress;
    unsigned long long _lastDiskSpaceCheckTime;
    unsigned long long _availableDiskSpace;
    unsigned long long _totalDiskSpace;
    _Bool _isGreedy;
    struct brc_mutex _zonesCreationLock;
    br_pacer *_reschedulePendingDiskItemsPacer;
    br_pacer *_updateDiskSpacePacer;
    _Bool _accountIsReady;
    BRCAccountWaitOperation *_accountWaitOperation;
    _Bool _isDBOpened;
    NSMutableDictionary *_rootsByFolderType;
    NSMutableDictionary *_fsEventsMonitors;
    _Bool _isCancelled;
    NSString *_appSupportDirPath;
    NSString *_cacheDirPath;
    NSString *_ubiquityTokenSalt;
    BRCContainerScheduler *_containerScheduler;
    BRCApplyScheduler *_applyScheduler;
    BRCFairScheduler *_fairClientDBScheduler;
    BRCVolume *_volume;
    BRCFSReader *_fsReader;
    BRCFSUploader *_fsUploader;
    BRCFSDownloader *_fsDownloader;
    BRCSyncUpScheduler *_syncUpScheduler;
    BRCFSWriter *_fsWriter;
    BRCDownloadTrackers *_downloadTrackers;
    BRCUserNotification *_userNotification;
    BRCNotificationManager *_notificationManager;
    BRCStageRegistry *_stageRegistry;
    BRCDiskSpaceReclaimer *_diskReclaimer;
    BRCRecentsEnumerator *_recentsEnumerator;
    BRCThrottle *_appLibraryScanThrottle;
    BRCThrottle *_appLibraryResetThrottle;
    BRCThrottle *_sharedAppLibraryResetThrottle;
    BRCThrottle *_appLibraryAliasRemovalThrottle;
    BRCThrottle *_lostItemThrottle;
    BRCThrottle *_operationFailureThrottle;
    BRCThrottle *_syncClientZoneThrottle;
    BRCThrottle *_syncClientZoneErrorThrottle;
    NSObject<OS_dispatch_queue> *_resetQueue;
    BRCItemTransmogrifier *_itemTransmogrifier;
    BRCAnalyticsReporter *_analyticsReporter;
}

+ (_Bool)upgradeOfflineDB:(id)arg1 serverTruth:(_Bool)arg2 session:(id)arg3 error:(id *)arg4;
+ (_Bool)_validateDatabase:(id)arg1 baseURL:(id)arg2 session:(id)arg3 serverTruth:(_Bool)arg4 initialVersion:(unsigned int)arg5 lastCurrentVersion:(unsigned int)arg6 error:(id *)arg7;
+ (_Bool)_openConnection:(id)arg1 serverTruth:(_Bool)arg2 databaseName:(id)arg3 baseURL:(id)arg4 initialVersion:(unsigned int *)arg5 lastCurrentVersion:(unsigned int *)arg6 error:(id *)arg7;
+ (_Bool)openAndValidateDatabase:(id)arg1 serverTruth:(_Bool)arg2 session:(id)arg3 baseURL:(id)arg4 skipBackupDetection:(_Bool)arg5 error:(id *)arg6;
+ (_Bool)_checkIntegrity:(id)arg1 serverTruth:(_Bool)arg2 session:(id)arg3 skipBackupDetection:(_Bool)arg4 error:(id *)arg5;
+ (void)_registerLastBootIfNeeded:(id)arg1 table:(struct NSObject *)arg2;
+ (id)userIdentityForName:(id)arg1 db:(id)arg2;
+ (id)userIdentityForKey:(id)arg1 db:(id)arg2;
+ (_Bool)_registerStaticDBFunctions:(id)arg1 error:(id *)arg2;
+ (_Bool)_openConnection:(id)arg1 databaseName:(id)arg2 baseURL:(id)arg3 readonly:(_Bool)arg4 error:(id *)arg5;
+ (id)sessionForDumpingDatabasesAtURL:(id)arg1;
+ (id)sessionForBackingUpDatabasesAtURL:(id)arg1;
@property(readonly, nonatomic) BRCAnalyticsReporter *analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;
@property(readonly, nonatomic) BRCItemTransmogrifier *itemTransmogrifier; // @synthesize itemTransmogrifier=_itemTransmogrifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resetQueue; // @synthesize resetQueue=_resetQueue;
@property(readonly, nonatomic) BRCGlobalProgress *globalProgress; // @synthesize globalProgress=_globalProgress;
@property(readonly, nonatomic) BRCThrottle *syncClientZoneErrorThrottle; // @synthesize syncClientZoneErrorThrottle=_syncClientZoneErrorThrottle;
@property(readonly, nonatomic) BRCThrottle *syncClientZoneThrottle; // @synthesize syncClientZoneThrottle=_syncClientZoneThrottle;
@property(readonly, nonatomic) BRCThrottle *operationFailureThrottle; // @synthesize operationFailureThrottle=_operationFailureThrottle;
@property(readonly, nonatomic) BRCThrottle *lostItemThrottle; // @synthesize lostItemThrottle=_lostItemThrottle;
@property(readonly, nonatomic) BRCThrottle *appLibraryAliasRemovalThrottle; // @synthesize appLibraryAliasRemovalThrottle=_appLibraryAliasRemovalThrottle;
@property(readonly, nonatomic) BRCThrottle *sharedAppLibraryResetThrottle; // @synthesize sharedAppLibraryResetThrottle=_sharedAppLibraryResetThrottle;
@property(readonly, nonatomic) BRCThrottle *appLibraryResetThrottle; // @synthesize appLibraryResetThrottle=_appLibraryResetThrottle;
@property(readonly, nonatomic) BRCThrottle *appLibraryScanThrottle; // @synthesize appLibraryScanThrottle=_appLibraryScanThrottle;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) BRCRecentsEnumerator *recentsEnumerator; // @synthesize recentsEnumerator=_recentsEnumerator;
@property(readonly, nonatomic) BRCDiskSpaceReclaimer *diskReclaimer; // @synthesize diskReclaimer=_diskReclaimer;
@property(readonly, nonatomic) BRCUserNotification *userNotification; // @synthesize userNotification=_userNotification;
@property(readonly, nonatomic) BRCDownloadTrackers *downloadTrackers; // @synthesize downloadTrackers=_downloadTrackers;
@property(readonly, nonatomic) BRCSyncUpScheduler *syncUpScheduler; // @synthesize syncUpScheduler=_syncUpScheduler;
@property(readonly, nonatomic) BRCFSDownloader *fsDownloader; // @synthesize fsDownloader=_fsDownloader;
@property(readonly, nonatomic) BRCFSUploader *fsUploader; // @synthesize fsUploader=_fsUploader;
@property(readonly, nonatomic) BRCVolume *volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) BRCFairScheduler *fairClientDBScheduler; // @synthesize fairClientDBScheduler=_fairClientDBScheduler;
@property(readonly, nonatomic) BRCDeadlineScheduler *defaultScheduler; // @synthesize defaultScheduler=_defaultScheduler;
@property(readonly, nonatomic) NSString *ubiquityTokenSalt; // @synthesize ubiquityTokenSalt=_ubiquityTokenSalt;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
@property(retain, nonatomic) NSString *appSupportDirPath; // @synthesize appSupportDirPath=_appSupportDirPath;
- (void).cxx_destruct;
@property(readonly, nonatomic) BRCStageRegistry *stageRegistry; // @synthesize stageRegistry=_stageRegistry;
@property(readonly, nonatomic) BRCNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) BRCFSWriter *fsWriter; // @synthesize fsWriter=_fsWriter;
@property(readonly, nonatomic) BRCFSReader *fsReader; // @synthesize fsReader=_fsReader;
@property(readonly, nonatomic) BRCContainerScheduler *containerScheduler; // @synthesize containerScheduler=_containerScheduler;
@property(readonly, nonatomic) BRCApplyScheduler *applyScheduler; // @synthesize applyScheduler=_applyScheduler;
- (void)openForDumping;
- (_Bool)shouldPathBeDesktopSymlink:(id)arg1;
- (void)recreateDesktopSymlinksIfNecessary;
- (void)_recreateSymlinkIfNecessaryForDocumentsPath:(id)arg1 folderName:(id)arg2 destinationPath:(id)arg3;
- (void)removeDesktopSymlink:(_Bool)arg1 andDocumentsSymlink:(_Bool)arg2;
- (unsigned long long)syncedFolderTypeForURL:(id)arg1;
- (id)roots;
- (void)removeRootForSyncedFolderType:(unsigned long long)arg1;
- (void)setRoot:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (id)rootForSyncedFolderType:(unsigned long long)arg1;
- (_Bool)hasRootForSyncedFolderType:(unsigned long long)arg1;
- (id)createRootForSyncedFolderType:(unsigned long long)arg1;
- (id)fsEventsMonitors;
- (void)removeFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (void)setFSEventsMonitor:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (_Bool)hasFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)fsEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)fsEventsMonitorForAppLibraryID:(id)arg1;
- (id)createFSEventsMonitorForSyncedFolderType:(unsigned long long)arg1;
- (id)dirPathForSyncedFolderType:(unsigned long long)arg1;
- (void)dumpMiscOperationsToContext:(id)arg1;
- (void)dumpXPCClientsToContext:(id)arg1;
- (_Bool)disableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_getRootPathXattrValue:(id *)arg1 forRootPath:(id)arg2 error:(id *)arg3;
- (_Bool)_setRootPathXattrValue:(id)arg1 forRootPath:(id)arg2 error:(id *)arg3;
- (_Bool)enableSyncforSyncedFolderType:(unsigned long long)arg1 isInitialCreation:(_Bool)arg2 error:(id *)arg3;
- (_Bool)applySyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2 isInitialCreation:(_Bool)arg3 error:(id *)arg4;
@property(readonly, nonatomic) _Bool isGreedy;
- (void)startDownloadsForGreediness;
- (void)computeDocumentEvictableSizesForLowTime:(unsigned long long)arg1 medTime:(unsigned long long)arg2 highTime:(unsigned long long)arg3 lowSize:(unsigned long long)arg4 medSize:(unsigned long long)arg5 highSize:(unsigned long long)arg6 minRowID:(unsigned long long)arg7 minSize:(unsigned long long)arg8 batchSize:(unsigned long long)arg9 injection:(struct NSObject *)arg10 db:(id)arg11 reply:(CDUnknownBlockType)arg12;
- (void)computeTotalEvictableSizeWithAccessLowTimeDelta:(double)arg1 medTimeDelta:(double)arg2 highTimeDelta:(double)arg3 db:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (unsigned long long)computeTotalLiveDocumentSizeWithDb:(id)arg1;
- (void)setOptimizeStorageEnabled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasOptimizeStorageEnabled;
- (unsigned long long)accountSize;
- (void)availableDiskSpaceDidChange;
- (unsigned long long)availableDiskSpaceUsingCache:(_Bool)arg1 schedulingPendingDiskItemsIfNeeded:(_Bool)arg2;
- (unsigned long long)availableDiskSpaceUsingCache:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long availableDiskSpace;
- (void)recomputeAppSyncBlockStateForPrivateClientZone:(id)arg1;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (_Bool)createAppLibraryOnDisk:(id)arg1 createdRoot:(_Bool *)arg2 createdDocuments:(_Bool *)arg3 rootFileID:(unsigned long long *)arg4;
- (_Bool)createAppLibrariesIfNeededWithError:(id *)arg1;
- (void)enumerateFileTypesWithFilterBlock:(CDUnknownBlockType)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateAccountHandlerSupportedFolderTypes:(CDUnknownBlockType)arg1;
- (void)enumerateSupportedFolderTypes:(CDUnknownBlockType)arg1;
- (id)getOrReserveLibraryRowIDForLibrary:(id)arg1;
- (id)getOrCreateSharedZones:(id)arg1;
- (id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1 appLibraryExists:(_Bool *)arg2;
- (id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1;
- (id)_getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1 creationFlags:(unsigned int *)arg2;
- (_Bool)_shouldPrivateAppLibraryBeCZMMoved:(id)arg1;
- (void)__registerServerZone:(id)arg1 clientZone:(id)arg2 appLibrary:(id)arg3 isShared:(_Bool)arg4;
- (id)__getOrCreateAppLibrary:(id)arg1 rowID:(id)arg2 createOnDisk:(_Bool)arg3 alreadyExists:(_Bool *)arg4 withClientZone:(id)arg5 createCZMMoved:(_Bool)arg6;
- (id)__getOrCreateClientZone:(id)arg1 withServerZone:(id)arg2 alreadyExists:(_Bool *)arg3;
- (id)__getOrCreateServerZone:(id)arg1;
- (id)appLibraryByID:(id)arg1;
- (id)appLibraryByMangledID:(id)arg1;
- (id)appLibraryByRowID:(id)arg1;
- (void)destroySharedClientZone:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 whileRemovingPrivateClientZone:(id)arg2;
- (void)enumerateSharedClientZones:(CDUnknownBlockType)arg1;
- (id)sharedClientZoneByMangledID:(id)arg1;
- (id)sharedServerZoneByMangledID:(id)arg1;
- (void)enumeratePrivateClientZones:(CDUnknownBlockType)arg1;
- (id)clientZones;
- (void)enumerateClientZones:(CDUnknownBlockType)arg1;
- (id)privateClientZoneByID:(id)arg1;
- (id)cloudDocsClientZone;
- (void)enumeratePrivateServerZones:(CDUnknownBlockType)arg1;
- (id)privateServerZoneByID:(id)arg1;
- (id)fallbackAppLibraryForClientZone:(id)arg1 extension:(id)arg2;
- (id)appLibraries;
- (void)enumerateAppLibraries:(CDUnknownBlockType)arg1;
- (void)enumerateServerZones:(CDUnknownBlockType)arg1;
- (id)clientZoneByMangledID:(id)arg1;
- (id)serverZoneByRowID:(id)arg1;
- (id)serverZoneByName:(id)arg1 ownerName:(id)arg2;
- (id)serverZoneByMangledID:(id)arg1;
- (id)_unloadClientZones;
- (void)_loadClientZonesFromDisk;
- (void)destroyLocalDataWithPristineContainerIDs:(id)arg1;
- (void)destroyLocalData;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(_Bool)arg1 pristineContainerIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)destroyLocalDataWaitingForFilesToBeUnlinked:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_recursivelyPrepareFolderForLogOutAtURL:(id)arg1 pruneEmptyFolders:(_Bool)arg2 pruneEmptyTopLevelFolder:(_Bool)arg3 maxDepth:(unsigned long long)arg4;
- (void)closeAndResetLocalState;
- (void)close;
- (id)fetchAccountWaitOperationWithAccountReady:(_Bool *)arg1;
@property(readonly, nonatomic) BRCAccountWaitOperation *accountWaitOperation;
- (void)resume;
- (_Bool)_createAppLibraryRootIfNeededAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)_createAppLibraryRootsIfNeededWithError:(id *)arg1;
- (_Bool)openWithError:(id *)arg1;
- (void)resetThrottles;
- (void)_setupThrottles;
- (void)markAccountMigrationComplete;
- (void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(_Bool)arg2;
- (void)_setupSharedPackageExtensionsPlist;
- (void)userDefaultsChanged;
- (void)closeXPCClientsSync;
- (void)addMiscOperation:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (_Bool)registerClient:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 salt:(id)arg2;
- (id)init;
- (void)addOfflineAppLibrary:(id)arg1;
- (void)addOfflineClientZone:(id)arg1;
- (void)addOfflineServerZone:(id)arg1;
- (id)accountStatisticsWithDB:(id)arg1;
- (_Bool)backupDatabaseToURL:(id)arg1 error:(id *)arg2;
- (_Bool)dumpFileCoordinationInfoToFileHandle:(id)arg1 error:(id *)arg2;
- (_Bool)dumpDatabaseToFileHandle:(id)arg1 zoneName:(id)arg2 includeAllItems:(_Bool)arg3 tracker:(id)arg4 error:(id *)arg5;
- (_Bool)initializeOfflineDatabaseWhileUpgrading:(_Bool)arg1 error:(id *)arg2;
- (_Bool)dumpStatusToFileHandle:(id)arg1 zoneName:(id)arg2 tracker:(id)arg3 error:(id *)arg4;
- (_Bool)_dumpClientZone:(id)arg1 toContext:(id)arg2 includeAllItems:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_dumpClientZoneStatus:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
- (void)_dumpClientZoneBlockedState:(id)arg1 toContext:(id)arg2;
- (void)closeDBs;
- (_Bool)openDBWithError:(id *)arg1;
- (_Bool)openAndValidateDatabase:(id)arg1 serverTruth:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_finishServerTruthConnectionSetupWithError:(id *)arg1;
- (_Bool)_finishClientTruthConnectionSetupWithError:(id *)arg1;
- (void)_clearNeedsUpgradeErrors:(id)arg1 brVersion:(id)arg2;
- (id)createUserKeyForName:(id)arg1;
- (id)userNameForKey:(id)arg1 db:(id)arg2;
- (id)userKeyForName:(id)arg1 db:(id)arg2;
- (void)learnOwnerIdentityForShare:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)_setUserIdentity:(id)arg1 forName:(id)arg2;
- (id)userIdentityForKey:(id)arg1;
- (id)createDeviceKeyForNameInServerDB:(id)arg1;
- (id)deviceKeyForName:(id)arg1 db:(id)arg2;
- (id)pendingDownloadItemWithDocumentID:(unsigned int)arg1;
- (struct PQLResultSet *)itemsNeedingIndexingEnumeratorFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;
- (struct PQLResultSet *)bouncedItemsEnumerator;
- (struct PQLResultSet *)foldersNeedingTransmogrifyEnumerator;
- (struct PQLResultSet *)stagedItemsEnumerator;
- (struct PQLResultSet *)_privateServerZonesEnumerator:(id)arg1;
- (id)_privateServerZoneByName:(id)arg1 db:(id)arg2;
- (id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)_privateClientZoneByID:(id)arg1 db:(id)arg2;
- (id)_privateClientZoneByName:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)_privateClientZonesEnumerator:(id)arg1;
- (id)newPrivateClientZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)_sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3;
- (struct PQLResultSet *)_sharedServerZonesEnumerator:(id)arg1;
- (id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (struct PQLResultSet *)_sharedClientZonesEnumerator:(id)arg1;
- (id)newSharedClientZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (_Bool)_deleteClientZone:(id)arg1;
- (_Bool)_createClientZone:(id)arg1;
- (struct PQLResultSet *)_appLibrariesEnumerator:(id)arg1;
- (_Bool)_createSharedAppLibrary:(id)arg1;
- (_Bool)_createPrivateAppLibrary:(id)arg1;
- (_Bool)_deleteAppLibrary:(id)arg1;
- (_Bool)_createAppLibrary:(id)arg1;
- (id)newAppLibraryFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (_Bool)saveAppLibraryToDB:(id)arg1;
- (id)_reserveRowIDForLibrary:(id)arg1;
- (void)_enumerateAppLibraryRowIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)deleteServerZone:(id)arg1;
- (_Bool)createServerZone:(id)arg1;
- (_Bool)saveClientZoneToDB:(id)arg1;
- (_Bool)saveServerZoneToDB:(id)arg1;
- (void)preventDatabaseFromBeingReused;
- (_Bool)_stepBackupDetector:(struct backup_detector)arg1 newState:(struct backup_detector *)arg2 error:(id *)arg3;
- (_Bool)_setupBackupDetector:(struct backup_detector *)arg1 error:(id *)arg2;
- (id)newConnectionWithLabel:(id)arg1 readonly:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_setupConnection:(id)arg1 readonly:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_registerDynamicDBFunctions:(id)arg1 error:(id *)arg2;
- (_Bool)_openConnection:(id)arg1 databaseName:(id)arg2 readonly:(_Bool)arg3 error:(id *)arg4;
- (void)stopDBWatcher;
- (void)_startWatcher;
- (void)disableDatabaseProfilingForDB:(id)arg1;
- (void)enableDatabaseProfilingForDB:(id)arg1;
- (void)setupDatabase;
- (id)newConnection:(id)arg1;
- (void)dbBecameCorrupted;
@property(readonly, nonatomic) BRCPQLConnection *expensiveReadOnlyDB;
@property(readonly, nonatomic) BRCPQLConnection *readOnlyDB;
@property(readonly, nonatomic) BRCPQLConnection *serverDB;
@property(readonly, nonatomic) BRCPQLConnection *clientDB;
@property(readonly, nonatomic) BRCServerPersistedState *serverState;
@property(readonly, nonatomic) BRCClientState *clientState;
@property(readonly, nonatomic) unsigned long long databaseID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serverTruthWorkloop; // @dynamic serverTruthWorkloop;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *readOnlyWorkloop; // @dynamic readOnlyWorkloop;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientTruthWorkloop; // @dynamic clientTruthWorkloop;
- (void)scheduleZoneMovesToCloudDocs:(id)arg1;
- (int)resolvePathAdditionalMetadata:(id)arg1 appLibrary:(id *)arg2;
- (void)_resolvePathInMobileDocsRoot:(id)arg1 appLibrary:(id *)arg2;
- (id)resolvedOpenRelpathForPath:(id)arg1 mustExist:(_Bool)arg2 allowResolveInPkg:(_Bool)arg3 errcode:(int *)arg4;
- (id)resolvedOpenRelpathForPath:(id)arg1 mustExist:(_Bool)arg2 errcode:(int *)arg3;
- (id)_old_privateAppLibraryByZoneName:(id)arg1 db:(id)arg2;
- (id)singleAppLibraryMatchingSearchString:(id)arg1 error:(id *)arg2;
- (id)appLibrariesMatchingSearchString:(id)arg1 error:(id *)arg2;
- (id)_appLibrariesMatchingSearchString:(id)arg1;
- (id)singleClientZoneMatchingSearchString:(id)arg1 error:(id *)arg2;
- (id)clientZonesMatchingSearchString:(id)arg1 error:(id *)arg2;
- (id)_clientZonesMatchingSearchString:(id)arg1;
- (void)setNeedsPCSMigration:(_Bool)arg1;
- (_Bool)PCSMigrationComplete;
- (_Bool)shouldPerformPCSMigration;
- (id)syncContextForMangledID:(id)arg1 metadata:(_Bool)arg2;
- (id)allSyncContexts;
- (id)syncContextForMangledID:(id)arg1 metadata:(_Bool)arg2 createIfNeeded:(_Bool)arg3;
- (id)syncContextForMangledID:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)syncContextForMangledID:(id)arg1;
- (id)zoneHealthSyncContext;
- (id)sharedSyncContext;
- (id)defaultSyncContext;
- (id)_syncContextForContextIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 isShared:(_Bool)arg3 createIfNeeded:(_Bool)arg4;
- (void)enumerateItemsWithShareIDUnderParent:(id)arg1 db:(id)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)globalID:(id)arg1 isStrictChildOfGlobalID:(id)arg2;
- (id)itemByItemGlobalID:(id)arg1;
- (id)itemByItemGlobalID:(id)arg1 db:(id)arg2;
- (id)localAliasForSharedItem:(id)arg1 inZone:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1 inZone:(id)arg2 db:(id)arg3;
- (id)serverAliasItemForSharedItem:(id)arg1 inZone:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1 db:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1;
- (id)globalItemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (id)globalItemByFileID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)globalItemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)globalItemByDocumentID:(unsigned int)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)newServerItemFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)newLocalItemFromPQLResultSet:(id)arg1 db:(id)arg2 error:(id *)arg3;
- (id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

