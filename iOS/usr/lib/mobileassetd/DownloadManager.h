//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADAnalyticsManager, NSDate, NSDateFormatter, NSMutableDictionary, NSOperationQueue, NSURL, NSURLSession, NSURLSessionConfiguration, PallasResponseVerifier;
@protocol NSURLSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface DownloadManager : NSObject
{
    _Bool _haveSyncedSplunkData;
    _Bool _currentlyBatchingSplunk;
    _Bool _haveSyncedSplunkState;
    _Bool _timerRunning;
    NSMutableDictionary *_downloadTasksInFlight;
    NSMutableDictionary *_cachedMetaDataForAssetType;
    NSURLSessionConfiguration *_backgroundDiscretionaryConfiguration;
    NSURLSessionConfiguration *_splunkDiscretionaryConfiguration;
    NSURLSessionConfiguration *_inProcessConfig;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_splunkOperationQueue;
    id <NSURLSessionDelegate> _delegate;
    id <NSURLSessionDelegate> _splunkDelegate;
    NSURLSession *_backgroundSession;
    NSURLSession *_splunkSession;
    NSURLSession *_pallasSession;
    NSURLSession *_inProcessSession;
    NSObject<OS_dispatch_queue> *_downloadStateQueue;
    NSObject<OS_dispatch_queue> *_splunkStateQueue;
    NSObject<OS_dispatch_queue> *_ssoQueue;
    long long _currentState;
    PallasResponseVerifier *_pallasVerifier;
    NSDateFormatter *_dateFormatter;
    NSURL *_splunkUrl;
    NSMutableDictionary *_currentSplunkEvent;
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_previousTimeEstimatePoint;
    CDUnknownBlockType _timerHandler;
    MADAnalyticsManager *_analytics;
}

+ (int)triggerVPN;
- (void).cxx_destruct;
@property(retain, nonatomic) MADAnalyticsManager *analytics; // @synthesize analytics=_analytics;
@property(copy, nonatomic) CDUnknownBlockType timerHandler; // @synthesize timerHandler=_timerHandler;
@property(nonatomic) _Bool timerRunning; // @synthesize timerRunning=_timerRunning;
@property(retain, nonatomic) NSDate *previousTimeEstimatePoint; // @synthesize previousTimeEstimatePoint=_previousTimeEstimatePoint;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *currentSplunkEvent; // @synthesize currentSplunkEvent=_currentSplunkEvent;
@property(retain, nonatomic) NSURL *splunkUrl; // @synthesize splunkUrl=_splunkUrl;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) PallasResponseVerifier *pallasVerifier; // @synthesize pallasVerifier=_pallasVerifier;
@property(nonatomic) _Bool haveSyncedSplunkState; // @synthesize haveSyncedSplunkState=_haveSyncedSplunkState;
@property(nonatomic) _Bool currentlyBatchingSplunk; // @synthesize currentlyBatchingSplunk=_currentlyBatchingSplunk;
@property(nonatomic) _Bool haveSyncedSplunkData; // @synthesize haveSyncedSplunkData=_haveSyncedSplunkData;
@property long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ssoQueue; // @synthesize ssoQueue=_ssoQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *splunkStateQueue; // @synthesize splunkStateQueue=_splunkStateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadStateQueue; // @synthesize downloadStateQueue=_downloadStateQueue;
@property(retain, nonatomic) NSURLSession *inProcessSession; // @synthesize inProcessSession=_inProcessSession;
@property(retain, nonatomic) NSURLSession *pallasSession; // @synthesize pallasSession=_pallasSession;
@property(retain, nonatomic) NSURLSession *splunkSession; // @synthesize splunkSession=_splunkSession;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) id <NSURLSessionDelegate> splunkDelegate; // @synthesize splunkDelegate=_splunkDelegate;
@property(retain, nonatomic) id <NSURLSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSOperationQueue *splunkOperationQueue; // @synthesize splunkOperationQueue=_splunkOperationQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSessionConfiguration *inProcessConfig; // @synthesize inProcessConfig=_inProcessConfig;
@property(retain, nonatomic) NSURLSessionConfiguration *splunkDiscretionaryConfiguration; // @synthesize splunkDiscretionaryConfiguration=_splunkDiscretionaryConfiguration;
@property(retain, nonatomic) NSURLSessionConfiguration *backgroundDiscretionaryConfiguration; // @synthesize backgroundDiscretionaryConfiguration=_backgroundDiscretionaryConfiguration;
@property(retain, nonatomic) NSMutableDictionary *cachedMetaDataForAssetType; // @synthesize cachedMetaDataForAssetType=_cachedMetaDataForAssetType;
@property(retain, nonatomic) NSMutableDictionary *downloadTasksInFlight; // @synthesize downloadTasksInFlight=_downloadTasksInFlight;
- (void)activityNotification:(id)arg1 ofStatusChange:(unsigned long long)arg2 withReason:(id)arg3;
- (id)lastModifiedDateFromResponse:(id)arg1;
- (void)indicateDownloadJobFinished:(int)arg1 usingXPCConnection:(id)arg2 withXPCMessage:(id)arg3 performingAutoAssetJob:(id)arg4 ofJobType:(id)arg5;
- (void)handleSuccessfulDownload:(id)arg1 task:(id)arg2 taskId:(id)arg3 shouldMove:(_Bool)arg4 extractorExists:(_Bool)arg5 postedDate:(id)arg6 notModified:(_Bool)arg7;
- (long long)processAssetDownload:(id)arg1 with:(id)arg2 and:(id)arg3 shouldMove:(_Bool)arg4 extractorExists:(_Bool)arg5;
- (long long)massagePmvAndPersist:(id)arg1 from:(id)arg2 to:(id)arg3 postedDate:(id)arg4;
- (void)taskFinishedUpdateState:(id)arg1 with:(long long)arg2;
- (void)taskFinishedUpdateState:(id)arg1 with:(long long)arg2 extraInfo:(id)arg3;
- (void)retryTask:(id)arg1 retryUrl:(id)arg2 modified:(id)arg3 clientName:(id)arg4;
- (id)currentConfig;
- (id)currentSession;
- (void)sendNotification:(id)arg1 suffix:(id)arg2;
- (void)sendNotification:(id)arg1;
- (void)registerCatalogDownloadJob:(id)arg1 withPurpose:(id)arg2 usingDownloadOptions:(id)arg3 usingXPCConnection:(id)arg4 withXPCMessage:(id)arg5 performingAutoAssetJob:(id)arg6 asClientName:(id)arg7;
- (void)registerCatalogDownloadJob:(id)arg1 forAssetType:(id)arg2 withPurpose:(id)arg3 usingDownloadOptions:(id)arg4 forAutoAssetName:(id)arg5;
- (void)registerXmlDownloadJob:(id)arg1 using:(id)arg2 with:(id)arg3 clientName:(id)arg4;
- (void)registerPmvDownloadJob:(id)arg1 using:(id)arg2 with:(id)arg3 clientName:(id)arg4;
- (void)registerAssetDownloadJob:(id)arg1 withPurpose:(id)arg2 usingDownloadOptions:(id)arg3 forAssetId:(id)arg4 withBase:(id)arg5 relativeTo:(id)arg6 startingAt:(id)arg7 withLength:(id)arg8 extractWith:(id)arg9 allocateExtractorIfNecessary:(_Bool)arg10 usingXPCConnection:(id)arg11 withXPCMessage:(id)arg12 clientName:(id)arg13 performingAutoAssetJob:(id)arg14 notify:(unsigned long long)arg15 withCatalogMetadata:(id)arg16;
- (void)registerAssetDownloadJob:(id)arg1 forAssetType:(id)arg2 withPurpose:(id)arg3 clientName:(id)arg4 usingDownloadOptions:(id)arg5 forAssetId:(id)arg6 withCatalogMetadata:(id)arg7;
- (void)registerAssetDownloadJob:(id)arg1 forThis:(id)arg2 withBase:(id)arg3 relativeTo:(id)arg4 startingAt:(id)arg5 withLength:(id)arg6 extractWith:(id)arg7 allocateExtractorIfNecessary:(_Bool)arg8 connection:(id)arg9 message:(id)arg10 clientName:(id)arg11 notify:(unsigned long long)arg12 withCatalogMetadata:(id)arg13;
- (_Bool)checkPmvDownloadIsSkipped:(id)arg1 connection:(id)arg2 with:(id)arg3;
- (_Bool)checkCatalogDownloadIsSkipped:(id)arg1 connection:(id)arg2 with:(id)arg3 autoAssetJob:(id)arg4;
- (_Bool)checkAssetDownloadIsSkipped:(id)arg1 connection:(id)arg2 with:(id)arg3 autoAssetJob:(id)arg4;
- (_Bool)checkDownloadIsSyncing:(id)arg1 using:(id)arg2 with:(id)arg3 autoAssetJob:(id)arg4;
- (void)updateProgressIfRequired:(id)arg1 totalWritten:(long long)arg2 totalExpected:(long long)arg3 notify:(_Bool)arg4;
- (void)startDownloadAndUpdateState:(id)arg1 for:(id)arg2 startingAt:(id)arg3 withLength:(id)arg4 extractWith:(id)arg5 modified:(id)arg6 options:(id)arg7 downloadSize:(long long)arg8 using:(id)arg9 with:(id)arg10 clientName:(id)arg11 autoAssetJob:(id)arg12 ofJobType:(id)arg13 notify:(unsigned long long)arg14;
- (id)MACopyDawToken:(id)arg1;
- (_Bool)downloadNeedsSSO:(id)arg1 taskDescriptor:(id)arg2 url:(id)arg3;
- (void)assessDownloadCompletion:(id)arg1 originalUrl:(id)arg2 taskDescription:(id)arg3 taskId:(id)arg4 error:(id)arg5 moveFile:(_Bool)arg6 extractorExists:(_Bool)arg7;
- (void)addLiveServerRequest:(id)arg1 forAssetType:(id)arg2 withPurpose:(id)arg3 audience:(id)arg4 pallasUrl:(id)arg5 using:(id)arg6 with:(id)arg7 clientName:(id)arg8 autoAssetJobID:(id)arg9 task:(id)arg10 options:(id)arg11;
- (void)startDownloadAndUpdateState:(id)arg1 for:(id)arg2 modified:(id)arg3 options:(id)arg4 using:(id)arg5 with:(id)arg6 clientName:(id)arg7 autoAssetJob:(id)arg8 ofJobType:(id)arg9;
- (id)downloadManagerDecodeClasses;
- (long long)massageXmlAndPersist:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4 postedDate:(id)arg5 considerCaching:(_Bool)arg6;
- (long long)massageXmlAndPersist:(id)arg1 catalogInfo:(id)arg2 descriptor:(id)arg3 assets:(id)arg4 transformations:(id)arg5 to:(id)arg6 postedDate:(id)arg7 receiptResults:(id *)arg8 assetSetId:(id)arg9 pallasUrl:(id)arg10 considerCaching:(_Bool)arg11;
- (void)applyTransformsAndCheckReceipts:(id)arg1 transformations:(id)arg2 assetType:(id)arg3 assets:(id)arg4 receiptResults:(id *)arg5;
- (void)applyTransforms:(id)arg1 toAssets:(id)arg2;
- (id)startDownloadTask:(id)arg1 downloadSize:(long long)arg2 for:(id)arg3 startingAt:(id)arg4 withLength:(id)arg5 extractWith:(id)arg6 options:(id)arg7 modified:(id)arg8 session:(id)arg9;
- (id)startDownloadTask:(id)arg1 downloadSize:(long long)arg2 for:(id)arg3 startingAt:(id)arg4 withLength:(id)arg5 extractWith:(id)arg6 options:(id)arg7 modified:(id)arg8 session:(id)arg9 isCachingServer:(_Bool)arg10;
- (void)getCurrentInflightDownloads:(CDUnknownBlockType)arg1;
- (void)syncSplunkTasks;
- (void)pallasRequestV2:(id)arg1 normalizedType:(id)arg2 withPurpose:(id)arg3 options:(id)arg4 using:(id)arg5 with:(id)arg6 autoAssetJob:(id)arg7 clientName:(id)arg8 then:(CDUnknownBlockType)arg9;
- (id)addSUOptions:(id)arg1 options:(id)arg2;
- (id)newAssetAudience:(_Bool)arg1 assetType:(id)arg2;
- (_Bool)getPallasEnabledForAssetType:(id)arg1;
- (void)checkSplunkStatus:(id)arg1 failureReason:(id)arg2 productVersion:(id)arg3 sessionId:(id)arg4 nonce:(id)arg5 url:(id)arg6 statusCode:(long long)arg7 assetAudience:(id)arg8 version:(id)arg9 receiptResults:(id)arg10 baseUrl:(id)arg11;
- (id)newDefaultEventDictionary:(id)arg1 sessionId:(id)arg2 nonce:(id)arg3 url:(id)arg4 statusCode:(long long)arg5 assetAudience:(id)arg6 uuid:(id)arg7 assetType:(id)arg8 version:(id)arg9 receiptResults:(id)arg10 baseUrl:(id)arg11;
- (void)isDownloading:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)cancelAllDownloading:(id)arg1 withPurpose:(id)arg2 includingAssets:(_Bool)arg3 includingCatalog:(_Bool)arg4 includingOther:(_Bool)arg5 clientName:(id)arg6 then:(CDUnknownBlockType)arg7;
- (void)allDownloading:(CDUnknownBlockType)arg1;
- (void)queryNSUrlSessiondAndUpdateState;
- (void)updateStateAndNotifyIfRequired;
- (void)sendDownloadResult:(id)arg1 with:(long long)arg2 extraInfo:(id)arg3;
- (void)reportDownloadAttemptResult:(id)arg1 with:(long long)arg2;
- (void)sendDownloadCannotStartResult:(long long)arg1 assetType:(id)arg2 connection:(id)arg3 requestMessage:(id)arg4 clientName:(id)arg5 autoAssetJobID:(id)arg6 ofJobType:(id)arg7;
- (void)cancelAssetDownloadJob:(id)arg1 forAssetType:(id)arg2 withPurpose:(id)arg3 matchingAssetId:(id)arg4 forAutoAssetName:(id)arg5;
- (void)configAssetDownload:(id)arg1 withPurpose:(id)arg2 matchingAssetId:(id)arg3 usingDownloadConfig:(id)arg4 usingXPCConnection:(id)arg5 withXPCMessage:(id)arg6 performingAutoAssetJob:(id)arg7 asClientName:(id)arg8;
- (void)configAssetDownloadJob:(id)arg1 forAssetType:(id)arg2 withPurpose:(id)arg3 matchingAssetId:(id)arg4 usingDownloadConfig:(id)arg5 forAutoAssetName:(id)arg6;
- (void)configDownload:(id)arg1 clientName:(id)arg2 using:(id)arg3 with:(id)arg4;
- (void)sendEvents:(id)arg1 sessionId:(id)arg2;
- (_Bool)addInFailedJobs:(id)arg1 finalEvents:(id)arg2;
- (void)handleSplunkReportFinished:(id)arg1 result:(_Bool)arg2;
- (void)initializeSessionsAsync;
- (void)updateEstimateInfo:(double)arg1;
- (void)startDownloadTimer;
- (void)stopTimerIfNoDownloadsInProgress;
- (id)init;

@end

