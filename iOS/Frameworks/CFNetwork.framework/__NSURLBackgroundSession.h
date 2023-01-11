//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NDBackgroundSessionClient-Protocol.h>
#import <CFNetwork/NSURLSessionSubclass-Protocol.h>

@class NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSURL, NSXPCConnection;
@protocol NDBackgroundSessionProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSURLBackgroundSession <NDBackgroundSessionClient, NSURLSessionSubclass>
{
    unsigned long long _identSeed;
    id <NDBackgroundSessionProtocol> _remoteSession;
    NSXPCConnection *_xpcConn;
    NSMutableDictionary *_tasks;
    NSMutableArray *_taskIDsToFailOnReconnection;
    NSMutableSet *_taskIDsGettingAuthHeaders;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    CDUnknownBlockType _invalidateCallback;
    SmartBlockWithArgs_7064a8fd _backgroundSessionDidFinishAppWakeBlock;
    NSString *_appWakeUUID;
    NSURL *_downloadDirectory;
    NSURL *_assetDownloadDirectory;
    _Bool _isPrivileged;
    _Bool _isInvalid;
    _Bool _companionAvailable;
    unsigned long long _wifiRetainCount;
    NSError *_invalidationError;
    _Bool _tryToReconnect;
    _Bool _appWasLaunchedForBackgroundSessionSeen;
    int _notifyToken;
}

@property(copy) NSString *appWakeUUID; // @synthesize appWakeUUID=_appWakeUUID;
@property(getter=isCompanionAvailable) _Bool companionAvailable; // @synthesize companionAvailable=_companionAvailable;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_onqueue_getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onqueue_completeInvalidation:(_Bool)arg1;
- (void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)credStorage_allCredentialsWithReply:(CDUnknownBlockType)arg1;
- (void)credStorage_getInitialCredentialDictionariesWithReply:(CDUnknownBlockType)arg1;
- (void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)backgroundSessionDidStartAppWake:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 willDownloadToURL:(id)arg2;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didResolveMediaSelectionProperyList:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4;
- (void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned long long)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
- (void)openFileAtPath:(id)arg1 mode:(int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)willRetryBackgroundDataTask:(unsigned long long)arg1 withError:(id)arg2 timingData:(id)arg3;
- (void)backgroundDataTaskDidBecomeDownloadTask:(unsigned long long)arg1;
- (void)backgroundTask:(unsigned long long)arg1 getAuthHeadersForResponse:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundDataTask:(unsigned long long)arg1 didReceiveData:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didFinishCollectingMetrics:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundTask:(unsigned long long)arg1 needNewBodyStream:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithError:(id)arg2;
- (void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithReason:(long long)arg2;
- (void)backgroundTaskHasConnectionWaiting:(unsigned long long)arg1;
- (void)backgroundTask:(unsigned long long)arg1 _willSendRequestForEstablishedConnection:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundTask:(unsigned long long)arg1 willPerformHTTPRedirection:(id)arg2 withNewRequest:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)backgroundTask:(unsigned long long)arg1 willBeginDelayedRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)backgroundTaskDidSuspend:(unsigned long long)arg1;
- (void)backgroundTaskDidResume:(unsigned long long)arg1;
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(id)arg2 propKey:(id)arg3;
- (void)_onqueue_retryDataTaskWithIdentifier:(unsigned long long)arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onqueue_flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_onqueue_AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
- (id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
- (id)_onqueue_AVAssetDownloadTaskForURLAsset:(id)arg1 URL:(id)arg2 destinationURL:(id)arg3 assetTitle:(id)arg4 assetArtworkData:(id)arg5 options:(id)arg6;
- (id)serializableAVAssetDownloadTaskOptionsFromOptions:(id)arg1;
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)_onqueue_downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_downloadTaskForRequest:(id)arg1;
- (id)_downloadTaskForResumeData:(id)arg1;
- (id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_onqueue_uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_onqueue_dataTaskForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dataTaskForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performBlockOnQueueAndRethrowExceptions:(CDUnknownBlockType)arg1;
- (id)connectionLostErrorWithURL:(id)arg1;
- (id)disconnectedErrorWithURL:(id)arg1;
- (id)placeholderErrorWithURL:(id)arg1;
- (void)validateUploadFile:(id)arg1;
- (void)validateSerializabilityForRequest:(id)arg1 completion:(id)arg2;
- (id)_onqueue_dummyTaskForClass:(Class)arg1 withRequest:(id)arg2 error:(id)arg3;
- (id)requestWithCookiesApplied:(id)arg1;
- (void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2 partitionIdentifier:(id)arg3;
- (void)_onqueue_disavowTask:(id)arg1;
- (id)taskForIdentifier:(unsigned long long)arg1;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (id)copyTasks;
- (void)dealloc;
- (void)appWasLaunchedForBackgroundSession:(id)arg1;
- (void)cameIntoForeground:(id)arg1;
- (void)wentToBackground:(id)arg1;
- (void)failDisconnectedTasks;
- (void)recreateExistingTasks:(id)arg1;
- (void)setupBackgroundSession;
- (id)ensureRemoteSession;
- (id)cachesDirectory;
- (void)_onqueue_invalidateSession:(_Bool)arg1 withQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendInvalidationRequest;
- (void)_onqueue_invokeInvalidateCallback;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)cleanupConfig;
- (void)setupXPCConnection;
- (id)backgroundDownloadsDirectory;
- (id)backgroundResumeDataFromClientResumeData:(id)arg1;
- (id)backgroundResumeDataFromLegacyClientResumeData:(id)arg1;
- (void)moveFileToBackgroundDownloadsDirectoryForLocalResumeData:(id)arg1;
- (void)moveFileToTempForBackgroundResumeData:(id)arg1;
- (void)moveFileForResumeData:(id)arg1 fromDirectory:(id)arg2 toDirectory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

