//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSURLSessionDataDelegate-Protocol.h>
#import <iTunesCloud/NSURLSessionDelegate-Protocol.h>
#import <iTunesCloud/NSURLSessionDownloadDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSURLSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionDataDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSMutableOrderedSet *_pendingRequests;
    NSMutableSet *_activeRequests;
    NSMutableDictionary *_completionHandlers;
    _Bool _paused;
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;
    unsigned long long _maxConcurrentRequests;
    NSURLSession *_urlSession;
}

@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) unsigned long long maxConcurrentRequests; // @synthesize maxConcurrentRequests=_maxConcurrentRequests;
- (void).cxx_destruct;
- (void)_updateProgressForRequest:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (double)_timeoutForRequest:(id)arg1;
- (void)_scheduleNextRequestTimeoutCheck;
- (void)_checkRequestTimeouts;
- (id)_newResponseForRequest:(id)arg1;
- (id)_requestForTask:(id)arg1;
- (void)_finishRequest:(id)arg1;
- (void)_processRequest:(id)arg1;
- (void)_processPendingRequests;
- (void)_enqueueRequest:(id)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didReceiveAVAssetDownloadToken:(unsigned long long)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)resume;
- (void)pause;
- (void)cancelRequest:(id)arg1 withError:(id)arg2;
- (void)cancelRequest:(id)arg1;
- (void)enqueueAVDownloadRequest:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)enqueueAVDownloadRequest:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enqueueDownloadRequest:(id)arg1 toDestination:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)enqueueDownloadRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enqueueUploadRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enqueueDataRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2 qualityOfService:(long long)arg3;
- (id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

