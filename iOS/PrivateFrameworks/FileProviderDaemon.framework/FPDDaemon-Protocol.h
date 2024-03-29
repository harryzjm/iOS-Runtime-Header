//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPActionOperationInfo, FPExtensionEnumerationSettings, FPItem, FPItemID, FPSandboxingURLWrapper, NSArray, NSDate, NSDictionary, NSFileHandle, NSFileProviderDomain, NSNumber, NSProgress, NSString, NSURL;
@protocol FPOperationClient, FPXEnumeratorObserver;

@protocol FPDDaemon
- (void)_test_queryDiskImportSchedulerLabel:(NSString *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)_test_resetCounters:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)_test_getCountersArray:(NSString *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)_test_getRootSupportDirURLForDomainURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *))arg2;
- (void)_test_simulateUninstallOfBundleID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)_test_simulateInstallOfBundleID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)_test_callRemoveTrashedItemsOlderThanDate:(NSDate *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)_test_callFileProviderManagerAPIs:(void (^)(NSError *))arg1;
- (void)_test_retrieveItemWithName:(NSString *)arg1 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg2;
- (void)_test_setDocIDResolutionPolicy:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)waitForStabilizationOfDomainWithID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)waitForChangesOnItemsBelowItemWithID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)preventDiskImportSchedulerFromRunning:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)forceIndexingInForeground:(_Bool)arg1 completionHandler:(void (^)(id <FPIndexingAssertion>, NSError *))arg2;
- (void)fetchAndStartEnumeratingWithSettings:(FPExtensionEnumerationSettings *)arg1 observer:(id <FPXEnumeratorObserver>)arg2 completionHandler:(void (^)(id <FPXEnumerator>, id <FPDLifetimeServicing>, NSError *))arg3;
- (void)startAccessingServiceWithName:(NSString *)arg1 itemURL:(NSURL *)arg2 completionHandler:(void (^)(NSXPCListenerEndpoint *, id <FPDLifetimeServicing>, NSString *, NSArray *, NSError *))arg3;
- (void)startAccessingServiceForItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSXPCListenerEndpoint *, id <FPDLifetimeServicing>, NSString *, NSArray *, NSError *))arg2;
- (void)startAccessingOperationServiceForProviderDomainID:(NSString *)arg1 handler:(void (^)(id <FPXOperationService>, NSXPCListenerEndpoint *, id <FPDLifetimeServicing>, NSString *, NSError *))arg2;
- (void)startAccessingExtensionForProviderDomainID:(NSString *)arg1 handler:(void (^)(NSXPCListenerEndpoint *, id <FPDLifetimeServicing>, NSString *, NSError *))arg2;
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)appHasNonUploadedFiles:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)fetchAlternateContentsURLForDocumentURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)setAlternateContentsURL:(FPSandboxingURLWrapper *)arg1 onDocumentURL:(NSURL *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)calculateNonPurgeableSpaceUsageOfDomain:(NSString *)arg1 completionHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)dumpDatabaseAt:(NSString *)arg1 fullDump:(_Bool)arg2 writeTo:(NSFileHandle *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)runFPCKForDomainWithID:(NSString *)arg1 databasesBackupsPath:(NSDictionary *)arg2 options:(unsigned long long)arg3 reason:(unsigned long long)arg4 completionHandler:(void (^)(NSString *, FPCKStats *, NSDictionary *, NSError *))arg5;
- (void)stateForDomainWithID:(NSString *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)updateBlockedProcessNamesForProvider:(NSString *)arg1 processNames:(NSArray *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)importProgressForDomainWithID:(NSString *)arg1 completionHandler:(void (^)(FPImportProgressReport *, NSError *))arg2;
- (void)forceUpdateBlockedProcessNamesFromDomain:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reimportItemsBelowItemWithID:(FPItemID *)arg1 removeCachedItems:(_Bool)arg2 markItemDataless:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)setHiddenByUser:(_Bool)arg1 forDomainIdentifier:(NSString *)arg2 providerIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)setEnabled:(_Bool)arg1 forDomainIdentifier:(NSString *)arg2 providerIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)getDomainsForProviderIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSString *, NSArray *, NSError *))arg2;
- (void)removeAllDomainsForProviderIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeDomainAndPreserveDataWithID:(NSString *)arg1 mode:(unsigned long long)arg2 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg3;
- (void)removeDomainWithID:(NSString *)arg1 mode:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)removeDomain:(NSFileProviderDomain *)arg1 mode:(unsigned long long)arg2 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg3;
- (void)removeDomain:(NSFileProviderDomain *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)addDomain:(NSFileProviderDomain *)arg1 forProviderIdentifier:(NSString *)arg2 byImportingDirectoryAtURL:(FPSandboxingURLWrapper *)arg3 nonWrappedURL:(NSURL *)arg4 knownFolders:(NSArray *)arg5 completionHandler:(void (^)(NSString *, NSError *))arg6;
- (void)listRemoteVersionsOfItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool, FPItem *, NSArray *, NSError *))arg2;
- (void)resolveConflictAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)restoreUserURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)backUpUserURL:(NSURL *)arg1 outputUserURL:(NSURL *)arg2 completionHandler:(void (^)(NSURL *, NSError *))arg3;
- (void)reindexAllSearchableItemsForBundleIDs:(NSArray *)arg1 acknowledgementHandler:(void (^)(void))arg2;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg1;
- (void)fetchPathComponentsForURL:(NSURL *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)providerDomainForURL:(NSURL *)arg1 completionHandler:(void (^)(FPProviderDomain *, NSError *))arg2;
- (void)copyDatabaseForFPCKStartingAtPath:(NSString *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getPersonaForProvider:(NSString *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)dumpStateTo:(NSFileHandle *)arg1 limitNumberOfItems:(_Bool)arg2 providerFilter:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)getURLForContainerWithItemID:(NSString *)arg1 inDataScopeDomainWithIdentifier:(NSString *)arg2 documentsScopeDomainIdentifier:(NSString *)arg3 documentsFolderItemIdentifier:(NSString *)arg4 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *))arg5;
- (void)makeTopologicallySortedItemsOnDisk:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)noteURLBecameFrontmost:(NSURL *)arg1 inWindow:(NSNumber *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)fetchDaemonOperationWithID:(NSString *)arg1 completionHandler:(void (^)(id <FPDaemonActionOperation>, FPActionOperationInfo *, NSError *))arg2;
- (void)fetchDaemonOperationIDsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)scheduleActionOperationWithInfo:(FPActionOperationInfo *)arg1 completionHandler:(void (^)(id <FPDaemonActionOperation>, NSError *))arg2;
- (void)materializeURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)updateLastUsedDate:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchProviderForShareURL:(NSURL *)arg1 fallbackIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)trashItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)startOperation:(id <FPOperationClient>)arg1 toFetchIconsForAppBundleIDs:(NSArray *)arg2 requestedSize:(struct CGSize)arg3 scale:(double)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)fetchListOfMonitoredApps:(void (^)(NSArray *, NSError *))arg1;
- (void)valuesForAttributes:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchAccessServicer:(void (^)(id <FPDAccessControlServicing>, NSError *))arg1;
- (void)extendBookmarkForItemID:(FPItemID *)arg1 consumerID:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)fetchFSItemsForItemIdentifiers:(NSArray *)arg1 providerIdentifier:(NSString *)arg2 domainIdentifier:(NSString *)arg3 materializingIfNeeded:(_Bool)arg4 completionHandler:(void (^)(NSDictionary *, NSError *))arg5;
- (void)itemForURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)createItemBasedOnTemplate:(FPItem *)arg1 fields:(unsigned long long)arg2 urlWrapper:(FPSandboxingURLWrapper *)arg3 options:(unsigned long long)arg4 bounceOnCollision:(_Bool)arg5 completionHandler:(void (^)(FPItem *, NSError *))arg6;
- (void)forceIngestionForItemIDs:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)forceIngestionForItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchDomainServicerForProviderDomainID:(NSString *)arg1 handler:(void (^)(id <FPDDomainServicing>, NSString *, NSError *))arg2;
- (void)documentURLFromItemID:(FPItemID *)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *))arg4;
- (void)documentURLFromBookmarkableString:(NSString *)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *))arg4;
- (void)bookmarkableStringFromDocumentURL:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)extendBookmarkForFileURL:(NSURL *)arg1 toConsumerID:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)providerDomainForIdentifier:(NSString *)arg1 completionHandler:(void (^)(FPProviderDomain *, NSError *))arg2;
- (void)providerDomainsCompletionHandler:(void (^)(NSError *, NSDictionary *))arg1;
- (void)attachItemWithID:(FPItemID *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)importDetachedFolder:(NSURL *)arg1 parentID:(FPItemID *)arg2 logicalName:(NSString *)arg3 options:(unsigned long long)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)detachItemWithID:(FPItemID *)arg1 relocatingAtURL:(NSURL *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)unpinItemWithID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)pinItemWithID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)evictItemWithID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (NSProgress *)evictItemAtURL:(NSURL *)arg1 evenIfEnumeratingFP:(_Bool)arg2 andClearACLForConsumer:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)startDownloadingItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startProvidingItemAtURL:(NSURL *)arg1 fromProviderID:(NSString *)arg2 forConsumerID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)extendSandboxForFileURL:(NSURL *)arg1 fromProviderID:(NSString *)arg2 toConsumerID:(NSString *)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg4;
- (void)wakeUpForURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *, id <FPDWakeupTransaction>))arg2;
@end

