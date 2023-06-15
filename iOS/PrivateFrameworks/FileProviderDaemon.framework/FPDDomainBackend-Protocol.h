//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProviderDaemon/NSObject-Protocol.h>

@class FPCTLTermDumper, FPDDomain, FPDDomainCleanupResult, FPDDomainIndexer, FPDExtension, FPDRequest, FPExtensionEnumerationSettings, FPItem, FPItemID, FPSandboxingURLWrapper, NSArray, NSData, NSDictionary, NSError, NSFileProviderDomain, NSFileProviderDomainVersion, NSFileProviderItemVersion, NSFileProviderMovingInfo, NSProgress, NSString, NSURL;
@protocol FPDLifetimeExtender, FPProgressProtocol, FPXEnumeratorObserver;

@protocol FPDDomainBackend <NSObject>
@property(readonly, nonatomic) NSData *backingStoreIdentity;
@property(readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property(readonly, copy) NSArray *checkableURLs;
@property(readonly, copy) NSArray *coordinationRootURLs;
@property(readonly, copy) NSArray *rootURLs;
- (void)fetchThumbnailsAtURL:(NSURL *)arg1 versions:(NSArray *)arg2 size:(struct CGSize)arg3 perThumbnailCompletionHandler:(void (^)(NSString *, NSFileProviderItemVersion *, FPSandboxingURLWrapper *, NSString *, NSData *, NSError *))arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)hierarchyForURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)listRemoteVersionsOfItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSArray *, NSError *))arg2;
- (void)resolveConflictAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)wakeForPushWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)stateWithCompletionHandler:(void (^)(unsigned long long, NSError *))arg1;
- (void)workingSetDidChangeWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)movingItemAtURL:(NSURL *)arg1 withInfo:(NSFileProviderMovingInfo *)arg2 completionHandler:(void (^)(NSFileProviderMovingResponse *))arg3;
- (void)trashItemAtURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(NSURL *, NSError *))arg3;
- (void)bulkItemChanges:(NSArray *)arg1 changedFields:(unsigned long long)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSDictionary *, NSDictionary *))arg4;
- (void)fetchVendorEndpointWithRequest:(FPDRequest *)arg1 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSError *))arg2;
- (void)fetchServicesForItemID:(FPItemID *)arg1 allowRestrictedSources:(_Bool)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSArray *, NSError *))arg4;
- (void)fetchOperationServiceOrEndpointWithRequest:(FPDRequest *)arg1 completionHandler:(void (^)(id <FPXOperationService>, NSXPCListenerEndpoint *, NSError *))arg2;
- (void)signalNeedsReindexFromScratchWithCompletionHandler:(void (^)(void))arg1;
- (FPDDomainIndexer *)createIndexerWithExtension:(FPDExtension *)arg1 enabled:(_Bool)arg2 error:(id *)arg3;
- (void)forceUpdateBlockedProcessNamesFromDomain:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reimportItemsBelowItemWithID:(FPItemID *)arg1 removeCachedItems:(_Bool)arg2 markItemDataless:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)valuesForAttributes:(NSArray *)arg1 forURL:(NSURL *)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)enumerateWithSettings:(FPExtensionEnumerationSettings *)arg1 lifetimeExtender:(id <FPDLifetimeExtender>)arg2 observer:(id <FPXEnumeratorObserver>)arg3 completionHandler:(void (^)(id <FPXEnumerator>, NSError *))arg4;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(void (^)(_Bool, double, NSData *))arg1;
- (void)enumeratePendingSetFromSyncAnchor:(NSData *)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(void (^)(NSArray *, NSArray *, _Bool, _Bool, double, NSData *, FPExtensionResponse *, NSError *))arg3;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(void (^)(NSData *))arg1;
- (void)enumerateMaterializedSetFromSyncAnchor:(NSData *)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(void (^)(NSArray *, NSArray *, _Bool, NSData *, FPExtensionResponse *, NSError *))arg3;
- (void)waitForStabilizationForRequest:(FPDRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)copyDatabaseToURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)dumpStateTo:(FPCTLTermDumper *)arg1 limitNumberOfItems:(_Bool)arg2;
- (void)URLForItemID:(FPItemID *)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 request:(FPDRequest *)arg4 completionHandler:(void (^)(NSError *, FPSandboxingURLWrapper *, FPSandboxingURLWrapper *))arg5;
- (_Bool)updateRootAfterDomainChangeWithError:(id *)arg1;
- (void)itemChangedAtURL:(NSURL *)arg1 request:(FPDRequest *)arg2;
- (void)createItemBasedOnTemplate:(FPItem *)arg1 fields:(unsigned long long)arg2 urlWrapper:(FPSandboxingURLWrapper *)arg3 options:(unsigned long long)arg4 bounceOnCollision:(_Bool)arg5 request:(FPDRequest *)arg6 completionHandler:(void (^)(FPItem *, NSError *))arg7;
- (void)materializeItemWithID:(FPItemID *)arg1 requestedRange:(struct _NSRange)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)evictItemWithID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (NSProgress *)evictItemAtURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItemID *, NSError *))arg3;
- (NSProgress *)startProvidingItemAtURL:(NSURL *)arg1 readerID:(id)arg2 readingOptions:(unsigned long long)arg3 request:(FPDRequest *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)fetchFSItemsForItemIdentifiers:(NSArray *)arg1 materializingIfNeeded:(_Bool)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)itemIDForURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItemID *, NSError *))arg3;
- (void)itemForURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (void)itemForItemID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (NSURL *)createRootByImportingURL:(NSURL *)arg1 knownFolders:(NSArray *)arg2 error:(id *)arg3;
- (_Bool)needsRootsCreation;
- (_Bool)isProviderForURL:(NSURL *)arg1;
- (_Bool)startWithReason:(NSString *)arg1;
- (void)invalidate;
- (id)initWithDomain:(FPDDomain *)arg1;

@optional
+ (void)registerXPCActivities;
@property(readonly, nonatomic) long long errorGenerationCount;
@property(readonly, nonatomic) _Bool backgroundActivityIsPaused;
- (void)updateShouldRetryThrottledOperations:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)queryDiskImportSchedulerLabelWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)didChangeDomainConfiguration:(NSFileProviderDomain *)arg1;
- (void)importProgressWithCompletionHandler:(void (^)(FPImportProgressReport *, NSError *))arg1;
- (void)hasNonUploadedFilesWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)resetCountersWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)getCountersArrayWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)subscribeToDownloadProgressUpdates:(id <FPProgressProtocol>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)subscribeToUploadProgressUpdates:(id <FPProgressProtocol>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)runTestingOperations:(NSArray *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)listAvailableTestingOperationsWithRequest:(FPDRequest *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)signalErrorResolved:(NSError *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)didChangeNeedsAuthentification:(_Bool)arg1;
- (void)didFinishIndexing;
- (void)didIndexOneBatchWithError:(NSError *)arg1 updatedItems:(NSArray *)arg2 deletedIDs:(NSArray *)arg3 anchor:(NSData *)arg4 domainVersion:(NSFileProviderDomainVersion *)arg5 anchorPersisted:(void (^)(NSError *))arg6;
- (void)willIndexOneBatch;
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(NSString *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)ingestFromCacheItemWithID:(FPItemID *)arg1 requestedFields:(unsigned long long)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)didChangeItemID:(FPItemID *)arg1;
- (void)attachItemWithID:(FPItemID *)arg1 options:(unsigned long long)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)importDetachedFolder:(NSURL *)arg1 parentID:(FPItemID *)arg2 logicalName:(NSString *)arg3 options:(unsigned long long)arg4 request:(FPDRequest *)arg5 completionHandler:(void (^)(NSError *))arg6;
- (void)detachItemWithID:(FPItemID *)arg1 relocatingAtURL:(NSURL *)arg2 options:(unsigned long long)arg3 request:(FPDRequest *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)unpinItemWithID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (void)pinItemWithID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (void)downloadVersionWithItemID:(FPItemID *)arg1 version:(NSFileProviderItemVersion *)arg2 originalURL:(NSURL *)arg3 completionHandler:(void (^)(FPFileVersion *, NSURL *, NSError *))arg4;
- (void)downloadItemWithItemID:(FPItemID *)arg1 request:(FPDRequest *)arg2 progress:(NSProgress *)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (NSString *)providerVersion;
- (NSDictionary *)telemetryReport;
- (long long)nonEvictableSpace;
- (void)forceIngestionForItemID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)forceFSIngestionForItemID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)forceIngestionAtURL:(NSURL *)arg1;
- (NSURL *)materializedURLForItemID:(FPItemID *)arg1;
- (void)decorateItems:(NSArray *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)fakeFSEventAtURL:(NSURL *)arg1;
- (FPDDomainCleanupResult *)cleanupDomainWithMode:(unsigned long long)arg1 error:(id *)arg2;
- (void)temporaryDirectoryURLWithCompletionHandler:(void (^)(NSURL *, NSError *))arg1;
@end

