//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformImplementation-Protocol.h>

@class CPLMomentShare, CPLResource, CPLScopedIdentifier, NSArray, NSDictionary, NSString, NSURL;

@protocol CPLLibraryManagerImplementation <CPLPlatformImplementation>
- (void)setDiagnosticsEnabled:(_Bool)arg1;
- (_Bool)diagnosticsEnabled;
- (void)forceSynchronizingScopeWithIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(CPLForceSyncTask *))arg2;
- (void)queryUserIdentitiesWithParticipants:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)acceptMomentShare:(CPLMomentShare *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchMomentShareFromShareURL:(NSURL *)arg1 completionHandler:(void (^)(CPLMomentShare *, NSError *))arg2;
- (void)publishMomentShare:(CPLMomentShare *)arg1 completionHandler:(void (^)(CPLMomentShare *, NSError *))arg2;
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(NSArray *)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)beginInMemoryDownloadOfResource:(CPLResource *)arg1 completionHandler:(void (^)(CPLResourceTransferTask *))arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, unsigned long long, NSError *))arg3;
- (void)publishResource:(CPLResource *)arg1 completionHandler:(void (^)(NSURL *, NSDate *, NSError *))arg2;
- (void)beginDownloadForResource:(CPLResource *)arg1 clientBundleID:(NSString *)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(NSString *)arg4 completionHandler:(void (^)(CPLResourceTransferTask *))arg5;
- (void)enableMingling;
- (void)disableMingling;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(NSArray *)arg1 persist:(_Bool)arg2;
- (void)acknowledgeChangedStatuses:(NSArray *)arg1;
- (void)getChangedStatusesWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getStatusForRecordsWithScopedIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)getSystemBudgetsWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)enableSynchronizationWithReason:(NSString *)arg1;
- (void)disableSynchronizationWithReason:(NSString *)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)startSyncSession;
- (void)resetStatus;
- (void)boostPriorityForScopeWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)disableMainScopeWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)enableMainScopeWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)deactivateWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)closeWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)openWithCompletionHandler:(void (^)(NSError *, NSString *, NSString *, NSURL *))arg1;

@optional
- (void)unblockEngineElementOnce:(NSString *)arg1;
- (void)unblockEngineElement:(NSString *)arg1;
- (void)blockEngineElement:(NSString *)arg1;
- (void)reportMiscInformation:(NSDictionary *)arg1;
- (void)reportSetting:(NSString *)arg1 hasBeenSetToValue:(NSString *)arg2;
- (void)addInfoToLog:(NSString *)arg1;
- (void)compactFileCacheWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 related:(_Bool)arg2 completionHandler:(void (^)(id, id, NSError *))arg3;
- (void)getCloudCacheForRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 completionHandler:(void (^)(CPLRecordChange *, NSError *))arg2;
- (void)getStatusesForScopesWithIdentifiers:(NSArray *)arg1 includeStorages:(_Bool)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)getStatusArrayForComponents:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getStatusForComponents:(NSArray *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)getListOfComponentsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)getResourcesForItemWithScopedIdentifier:(CPLScopedIdentifier *)arg1 completionHandler:(void (^)(NSError *, NSArray *))arg2;
- (void)deleteResources:(NSArray *)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(void (^)(NSArray *, NSDictionary *))arg3;
- (void)barrier;
@end

