//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue, NSString, NSURLSessionConfiguration, NWURLSessionDelegateWrapper;
@protocol NSURLSessionDelegate, OS_dispatch_queue;

@interface NWURLSession : NSObject
{
    _Atomic unsigned long long taskIdentifier;
    NSString *_sessionDescription;
    NSURLSessionConfiguration *_internalConfiguration;
    NSMutableSet *_dataTasks;
    NSMutableSet *_uploadTasks;
    NSMutableSet *_downloadTasks;
    NSMutableSet *_streamTasks;
    NSMutableSet *_webSocketTasks;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionDelegateWrapper *_delegateWrapper;
}

+ (void)_disableAppSSO;
+ (void)_strictTrustEvaluate:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy) NSString *sessionDescription; // @synthesize sessionDescription=_sessionDescription;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)webSocketTaskWithRequest:(id)arg1;
- (id)webSocketTaskWithURL:(id)arg1 protocols:(id)arg2;
- (id)webSocketTaskWithURL:(id)arg1;
- (id)streamTaskWithNetService:(id)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (void)getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
@property(readonly, nonatomic) id <NSURLSessionDelegate> delegate;
@property(readonly, nonatomic) NSOperationQueue *delegateQueue;
@property(readonly, copy, nonatomic) NSURLSessionConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (_Bool)isKindOfClass:(Class)arg1;

@end
