//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DCDocumentManager, DCManagedUpload, DCService, NSDictionary, NSObject, NSSet, NSString, NSURL, NSURLSessionDownloadTask;
@protocol DCDocumentManagerDelegate, OS_dispatch_queue;

@protocol DCDocumentManager
+ (void)_deleteAllContent;
+ (DCDocumentManager *)documentManagerForService:(DCService *)arg1;
+ (void)setPurposeIdentifier:(NSString *)arg1;
@property(retain) NSObject<OS_dispatch_queue> *completionHandlerQueue;
@property(readonly, retain) DCService *service;
- (void)handleEventsForBackgroundURLSession:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (_Bool)hasPendingUploads;
- (_Bool)deleteAllLocalData;
- (void)restartUploads;
- (void)allPendingUploadsWithCompletionHandler:(void (^)(NSArray *))arg1;
- (DCManagedUpload *)uploadForItemAtPath:(NSString *)arg1;
- (NSURLSessionDownloadTask *)downloadTaskForItemAtPath:(NSString *)arg1;
- (_Bool)connectionStatus;
- (void)rebuildDatabaseWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)evictItemAtPath:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)cancelDownloadingItemAtPath:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startDownloadingItemAtPath:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)cancelUploadingItemAtPath:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startUploadingItemAtPath:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)writeToFileAtPath:(NSString *)arg1 source:(NSURL *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)removePreflightedWriteToNewFileAtPath:(NSString *)arg1;
- (void)preflightWriteToNewFileAtPath:(NSString *)arg1 source:(NSURL *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)contentsOfFileAtPath:(NSString *)arg1 completionHandler:(void (^)(unsigned long long, NSURL *, NSError *))arg2;
- (void)thumbnailOfItemAtPath:(NSString *)arg1 completionHandler:(void (^)(unsigned long long, NSURL *, NSError *))arg2;
- (void)attributesOfItemAtPath:(NSString *)arg1 completionHandler:(void (^)(unsigned long long, NSDictionary *, NSError *))arg2;
- (void)contentsOfDirectoryAtPath:(NSString *)arg1 completionHandler:(void (^)(unsigned long long, NSArray *, NSError *))arg2;
- (void)createDirectoryAtPath:(NSString *)arg1 attributes:(NSDictionary *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (NSSet *)pathsOfItemAtURL:(NSURL *)arg1 error:(id *)arg2;
- (NSURL *)fileURLOfItemAtPath:(NSString *)arg1 error:(id *)arg2;
- (void)removeDelegateForFilterPath:(NSString *)arg1;
- (void)removeDelegate:(id <DCDocumentManagerDelegate>)arg1;
- (id <DCDocumentManagerDelegate>)delegateForFilterPath:(NSString *)arg1;
- (void)setDelegate:(id <DCDocumentManagerDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 forFilterPath:(NSString *)arg3;
- (void)setDelegate:(id <DCDocumentManagerDelegate>)arg1 forFilterPath:(NSString *)arg2;
- (void)resetCachedItemManagerForService:(DCService *)arg1;
@end
