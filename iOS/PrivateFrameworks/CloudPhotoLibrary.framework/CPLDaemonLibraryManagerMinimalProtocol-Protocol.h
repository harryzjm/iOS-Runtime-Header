//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLResource, NSArray, NSString, NSURL;

@protocol CPLDaemonLibraryManagerMinimalProtocol
- (void)unblockEngineElementOnce:(NSString *)arg1;
- (void)unblockEngineElement:(NSString *)arg1;
- (void)blockEngineElement:(NSString *)arg1;
- (void)reportSetting:(NSString *)arg1 hasBeenSetToValue:(NSString *)arg2;
- (void)addInfoToLog:(NSString *)arg1;
- (void)compactFileCacheWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)getResourcesForItemWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *, NSArray *))arg2;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(NSString *)arg1 related:(_Bool)arg2 completionHandler:(void (^)(id, id, NSError *))arg3;
- (void)getCloudCacheForRecordWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(CPLRecordChange *, NSError *))arg2;
- (void)getStatusArrayForComponents:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getStatusForComponents:(NSArray *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)getListOfComponentsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setDiagnosticsEnabled:(_Bool)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)enableMingling;
- (void)disableMingling;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)getSystemBudgetsWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)enableSynchronizationWithReason:(NSString *)arg1;
- (void)disableSynchronizationWithReason:(NSString *)arg1;
- (void)addStatusChangesForRecordsWithIdentifiers:(NSArray *)arg1 persist:(_Bool)arg2;
- (void)getChangedStatusesWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getStatusForRecordsWithIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)resetStatus;
- (void)startSyncSession;
- (void)cancelTaskWithIdentifier:(NSString *)arg1;
- (void)getMappedIdentifiersForIdentifiers:(NSArray *)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)beginInMemoryDownloadOfResource:(CPLResource *)arg1 reply:(void (^)(NSString *))arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, unsigned long long, NSError *))arg3;
- (void)publishResource:(CPLResource *)arg1 completionHandler:(void (^)(NSURL *, NSDate *, NSError *))arg2;
- (void)beginDownloadForResource:(CPLResource *)arg1 clientBundleID:(NSString *)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(NSString *)arg4 reply:(void (^)(NSString *))arg5;
- (void)deactivateLibraryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)closeLibraryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)openLibraryWithClientLibraryBaseURL:(NSURL *)arg1 cloudLibraryStateStorageURL:(NSURL *)arg2 cloudLibraryResourceStorageURL:(NSURL *)arg3 libraryIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSError *, NSDictionary *, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, NSString *, NSString *, NSURL *))arg5;
@end

