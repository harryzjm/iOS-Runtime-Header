//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRProtocolShared-Protocol.h>
#import <CloudDocsDaemon/BRShareOperationLegacyProtocol-Protocol.h>

@class BRFileObjectID, BRGetPausedFileListUpdater, NSArray, NSObject, NSString, NSURL;
@protocol BRNonLocalVersionReceiving, BROperationClient;

@protocol BRProtocolLegacy <BRProtocolShared, BRShareOperationLegacyProtocol>
- (void)listFilesIngested:(NSArray *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)getCreatorNameComponentsForURL:(NSURL *)arg1 reply:(void (^)(NSPersonNameComponents *, NSError *))arg2;
- (void)copyBulkShareIDsAtURLs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)launchItemCountMismatchChecksAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)getiWorkNeedsShareMigrateAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)getiWorkPublishingBadgingStatusAtURL:(NSURL *)arg1 reply:(void (^)(int, NSError *))arg2;
- (void)setiWorkPublishingInfoAtURL:(NSURL *)arg1 publish:(_Bool)arg2 readonly:(_Bool)arg3 reply:(void (^)(NSError *))arg4;
- (void)getiWorkPublishingInfoAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, _Bool, NSString *, NSError *))arg2;
- (void)getAttributeValues:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 reply:(void (^)(NSMutableDictionary *, NSError *))arg3;
- (void)checkIfItemIsShareableWithInode:(unsigned long long)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)getBookmarkDataForURL:(NSURL *)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 allowAccessByBundleID:(NSString *)arg3 reply:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)getBackReferencingContainerIDsForURLs:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)gatherInformationForPath:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getPublishedURLForItemAtURL:(NSURL *)arg1 forStreaming:(_Bool)arg2 requestedTTL:(unsigned long long)arg3 reply:(void (^)(NSURL *, NSDate *, NSError *))arg4;
- (void)capabilityWhenTryingToReparentItemAtURL:(NSURL *)arg1 toNewParent:(NSURL *)arg2 reply:(void (^)(unsigned short, NSError *))arg3;
- (void)overwriteAccessTimeForItemAtURL:(NSURL *)arg1 atime:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)boostFilePresenterAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)getEvictableSpaceWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)readerThrottleBackoffForDocumentAtPath:(NSString *)arg1 containerID:(NSString *)arg2 reply:(void (^)(double, NSError *))arg3;
- (void)moveBRSecurityBookmarkAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)scheduleDeepScanForContainer:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)getURLForItemIdentifier:(NSString *)arg1 reply:(void (^)(NSURL *, NSError *))arg2;
- (void)getNonLocalVersionSenderWithReceiver:(id <BRNonLocalVersionReceiving>)arg1 documentURL:(NSURL *)arg2 includeCachedVersions:(_Bool)arg3 reply:(void (^)(id <BRNonLocalVersionSending>, NSURL *, NSError *))arg4;
- (void)copyCollaborationIdentifierForItemAtURL:(NSURL *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)getPausedFilesList:(BRGetPausedFileListUpdater *)arg1 reply:(void (^)(NSError *))arg2;
- (void)fetchLatestVersionForFileAtURL:(NSURL *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)resumeSyncForFileAtURL:(NSURL *)arg1 dropLocalChanges:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)pauseSyncForFileAtURL:(NSURL *)arg1 timeout:(double)arg2 options:(long long)arg3 reply:(void (^)(NSError *))arg4;
- (void)resolveFileObjectIDToURL:(BRFileObjectID *)arg1 reply:(void (^)(NSURL *, NSData *, NSURL *, NSData *, NSError *))arg2;
- (void)waitForFileSystemChangeProcessingWithReply:(void (^)(void))arg1;
- (void)trashItemAtURL:(NSURL *)arg1 reply:(void (^)(NSURL *, NSError *))arg2;
- (void)removeItemFromDisk:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)forceConflictForURL:(NSURL *)arg1 bookmarkData:(NSString *)arg2 forcedEtag:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)resolveConflictWithName:(NSString *)arg1 atURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateItemFromURL:(NSURL *)arg1 reply:(void (^)(BRQueryItem *, NSError *))arg2;
- (void)getQueryItemForURL:(NSURL *)arg1 reply:(void (^)(BRQueryItem *, NSError *))arg2;
- (void)thumbnailChangedForItemAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)evictItemAtURL:(NSURL *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toDownloadItemAtURL:(NSURL *)arg2 readingOptions:(unsigned long long)arg3 wantsCurrentVersion:(_Bool)arg4 reply:(void (^)(NSError *))arg5;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toEvictItemAtURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startDownloadItemsAtURLs:(NSArray *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
@end

