//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iCloudDriveCore/BRShareOperationProtocol-Protocol.h>
#import <iCloudDriveCore/CKXPCShareDaemon-Protocol.h>

@class BRCBouncingReport, BRCMigrationReport, BRFileObjectID, BRGetPausedFileListUpdater, BRMangledID, CKShareMetadata, NSArray, NSData, NSDate, NSDictionary, NSError, NSFileHandle, NSObject, NSSet, NSString, NSURL, NSUUID;
@protocol BRItemNotificationReceiving, BROperationClient;

@protocol BRProtocolShared <CKXPCShareDaemon, BRShareOperationProtocol>
- (void)corruptDatabase:(void (^)(NSError *))arg1;
- (void)queryTelemetryEnablement:(void (^)(_Bool, NSError *))arg1;
- (void)reportFinishedMigration:(BRCMigrationReport *)arg1 uuid:(NSUUID *)arg2 reply:(void (^)(NSError *))arg3;
- (void)reportOverBounceDuringSilentMigration:(BRCBouncingReport *)arg1 total:(unsigned long long)arg2 uuid:(NSUUID *)arg3 reply:(void (^)(NSError *))arg4;
- (void)reportCleanupFailureDuringSilentMigration:(NSError *)arg1 operationType:(NSString *)arg2 uuid:(NSUUID *)arg3 reply:(void (^)(NSError *))arg4;
- (void)reportItemMismatchDuringSilentMigration:(NSError *)arg1 information:(NSString *)arg2 uuid:(NSUUID *)arg3 reply:(void (^)(NSError *))arg4;
- (void)signalStartOfSilentTelemetry:(NSDate *)arg1 uuid:(NSUUID *)arg2 manual:(_Bool)arg3 version:(unsigned long long)arg4 reply:(void (^)(NSError *))arg5;
- (void)queryLastCiconiaVersion:(void (^)(unsigned long long, NSError *))arg1;
- (void)_t_extractMetadataForAllContainersWithReply:(void (^)(NSError *))arg1;
- (void)_t_getEntitledContainerIDsForBundleID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_t_getEntitlementsForBundleID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)copyCollaborationIdentifierForItemAtURL:(NSURL *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)copyCollaborationIdentifierForFileObjectID:(BRFileObjectID *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)getPausedFilesList:(BRGetPausedFileListUpdater *)arg1 reply:(void (^)(NSError *))arg2;
- (void)fetchLatestVersionForFileAtURL:(NSURL *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)resumeSyncForFileAtURL:(NSURL *)arg1 dropLocalChanges:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)pauseSyncForFileAtURL:(NSURL *)arg1 timeout:(double)arg2 options:(long long)arg3 reply:(void (^)(NSError *))arg4;
- (void)lookupMinFileSizeForThumbnailTransferWithReply:(void (^)(NSNumber *, NSError *))arg1;
- (void)lookupExcludedExtensionsForLogoutWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)lookupExcludedFilenamesForLogoutWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)getShareOptionsOfItemIdentifier:(NSString *)arg1 reply:(void (^)(_Bool, _Bool, _Bool, NSString *, NSError *))arg2;
- (void)checkIfItemIsShareableWithInode:(unsigned long long)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)refreshSharingStateForItemIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)updatePrivilegesDescriptor;
- (void)trashItemAtURL:(NSURL *)arg1 reply:(void (^)(NSURL *, NSError *))arg2;
- (void)removeItemFromDisk:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)presentAcceptDialogsForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(NSError *))arg2;
- (void)getCreatorNameComponentsForURL:(NSURL *)arg1 reply:(void (^)(NSPersonNameComponents *, NSError *))arg2;
- (void)copyBulkShareIDsAtURLs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)copyCurrentUserNameAndEmailWithReply:(void (^)(NSPersonNameComponents *, NSString *, NSError *))arg1;
- (void)copyCurrentUserIdentifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toAcceptShareLink:(NSURL *)arg2 skipAcceptDialogs:(_Bool)arg3 reply:(void (^)(FPSandboxingURLWrapper *, NSError *))arg4;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toEvictItemAtURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toUploadAllFilesInContainer:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyAvailableQuotaWithReply:(void (^)(NSNumber *, NSError *))arg2;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingWebAuthTokenForContainerID:(NSString *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)getiWorkNeedsShareMigrateAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)getiWorkPublishingBadgingStatusAtURL:(NSURL *)arg1 reply:(void (^)(int, NSError *))arg2;
- (void)getiWorkPublishingInfoAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, _Bool, NSString *, NSError *))arg2;
- (void)setiWorkPublishingInfoAtURL:(NSURL *)arg1 publish:(_Bool)arg2 readonly:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (void)enumerateWorkingSetChangesFromChangeToken:(NSData *)arg1 limit:(unsigned long long)arg2 completion:(void (^)(NSArray<NSFileProviderItem> *, NSArray *, NSData *, NSError *))arg3;
- (void)enumerateAllFoldersWithSortOrder:(unsigned char)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(void (^)(NSArray *, unsigned long long, NSError *))arg4;
- (void)enumerateItemsInFolder:(BRFileObjectID *)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 completion:(void (^)(NSArray<NSFileProviderItem> *, unsigned long long, _Bool, NSError *))arg5;
- (void)currentNotifRankWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)getIsContainerWithIDOverQuota:(NSString *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)getContainerLastServerUpdateWithID:(NSString *)arg1 reply:(void (^)(NSDate *, NSError *))arg2;
- (void)getContainerStatusWithID:(NSString *)arg1 reply:(void (^)(unsigned int, NSError *))arg2;
- (void)getLocalizedLastSyncWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)getLastSyncDateWithReply:(void (^)(NSDate *, NSError *))arg1;
- (void)getApplicationStatusForProcess:(CDStruct_4c969caf)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)getApplicationStatus:(void (^)(BOOL, NSError *))arg1;
- (void)forceConflictForURL:(NSURL *)arg1 bookmarkData:(NSString *)arg2 forcedEtag:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)getBackReferencingContainerIDsForURLs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)resolveFileObjectIDToURL:(BRFileObjectID *)arg1 reply:(void (^)(NSURL *, NSData *, NSURL *, NSData *, NSError *))arg2;
- (void)resolveFileObjectIDsToContentRecordIDs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)resolveBookmarkDataToURL:(NSString *)arg1 reply:(void (^)(NSURL *, NSData *, NSURL *, NSData *, NSError *))arg2;
- (void)getBookmarkDataForURL:(NSURL *)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 allowAccessByBundleID:(NSString *)arg3 reply:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)jetsamCloudDocsAppsWithReply:(void (^)(NSError *))arg1;
- (void)getSyncState:(unsigned long long)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)getMigrationStatusForPrimaryiCloudAccount:(void (^)(BOOL, NSError *))arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(NSString *)arg2 shouldUpdateAccount:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (void)getContainersNeedingUpload:(void (^)(NSSet *, NSError *))arg1;
- (void)invalidateAccountCacheWithReply:(void (^)(NSError *))arg1;
- (void)updateAccountDisplayName:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)logoutAccountWithACAccountID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)createAccountWithACAccountID:(NSString *)arg1 dsid:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)resolveConflictWithName:(NSString *)arg1 atURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)getLoggedInUserPropertyValuesForKeys:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)didReceiveHandoffRequestForBundleID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)iCloudDesktopSettingsChangedWithAttributes:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)evictOldDocumentsWithReply:(void (^)(NSError *))arg1;
- (void)setStorageOpimizationEnabled:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)hasOptimizeStorageWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)getApplicationDocumentUsageInfoForBundleID:(NSString *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getTotalApplicationDocumentUsageWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)queryLoggedInAccountDescriptorsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)querySyncedRootURLsForPersona:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)queryPathsForPersona:(NSString *)arg1 reply:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)getItemUpdateSenderWithReceiver:(id <BRItemNotificationReceiving>)arg1 reply:(void (^)(id <BRItemNotificationSending><NSXPCProxyCreating>, NSDictionary *, NSError *))arg2;
- (void)updateItemFromURL:(NSURL *)arg1 reply:(void (^)(BRQueryItem *, NSError *))arg2;
- (void)getQueryItemForURL:(NSURL *)arg1 reply:(void (^)(BRQueryItem *, NSError *))arg2;
- (void)thumbnailChangedForItemAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)evictItemAtURL:(NSURL *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toDownloadItemAtURL:(NSURL *)arg2 readingOptions:(unsigned long long)arg3 wantsCurrentVersion:(_Bool)arg4 reply:(void (^)(NSError *))arg5;
- (void)registerInitialSyncBarrierForID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)deleteAllContentsOfContainerID:(NSString *)arg1 onClient:(_Bool)arg2 onServer:(_Bool)arg3 wait:(_Bool)arg4 reply:(void (^)(NSError *))arg5;
- (oneway void)updateContainerMetadataForID:(NSString *)arg1;
- (void)getContainerURLForID:(NSString *)arg1 forProcess:(CDStruct_4c969caf)arg2 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg3;
- (void)getContainerURLForID:(NSString *)arg1 recreateDocumentsIfNeeded:(_Bool)arg2 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg3;
- (void)getContainerURLForID:(NSString *)arg1 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg2;
- (void)presyncContainerWithID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)checkinAskClientIfUsingUbiquity:(_Bool)arg1;
- (void)getContainerForMangledID:(BRMangledID *)arg1 personaID:(NSString *)arg2 reply:(void (^)(BRContainer *, NSError *))arg3;
- (void)getContainersByID:(void (^)(NSDictionary *, NSError *))arg1;
- (void)createContainerWithID:(NSString *)arg1 ownerName:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)cancelTreeConsistencyCheckWithReply:(void (^)(NSError *))arg1;
- (void)resumeSyncConsistencyWithReply:(void (^)(NSError *))arg1;
- (void)pauseSyncConsistencyWithReply:(void (^)(NSError *))arg1;
- (void)launchSyncConsistencyChecksWithReply:(void (^)(NSArray *, NSArray *, NSError *))arg1;
- (void)launchItemCountMismatchChecksAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)waitForFileSystemChangeProcessingWithReply:(void (^)(void))arg1;
- (void)dropSpotlightIndexWithReply:(void (^)(NSError *))arg1;
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(void (^)(long long))arg3;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(void (^)(long long))arg3;
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(void (^)(NSDictionary *, NSNumber *, NSError *))arg1;
- (void)iWorkForceSyncContainerID:(NSString *)arg1 ownedByMe:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)forceSyncContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)forceSyncZoneHealthWithBarrierWithTimeout:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)forceSyncWithBarrierContainerID:(NSString *)arg1 timeout:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)zoneNameForContainer:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)healthStatusStringForContainer:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)simulateHealthIssueWithContainer:(NSString *)arg1 status:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)gatherInformationForPath:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)printStatus:(NSFileHandle *)arg1 containerID:(NSString *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)performSelfCheck:(NSFileHandle *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)dumpCoordinationInfoTo:(NSFileHandle *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)dumpDatabaseTo:(NSFileHandle *)arg1 containerID:(NSString *)arg2 personaID:(NSString *)arg3 includeAllItems:(_Bool)arg4 reply:(void (^)(_Bool, NSError *))arg5;
- (void)resetBudgets:(NSSet *)arg1 reply:(void (^)(NSError *))arg2;
- (void)setupInstanceWithDict:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

