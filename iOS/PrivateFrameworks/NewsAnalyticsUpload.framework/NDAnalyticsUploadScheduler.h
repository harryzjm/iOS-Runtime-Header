//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsAnalyticsUpload/FCOperationThrottlerDelegate-Protocol.h>
#import <NewsAnalyticsUpload/NSURLSessionTaskDelegate-Protocol.h>

@class FCAsyncSerialQueue, FCBalancedCounter, FCDateRange, NFMutexLock, NSOperationQueue, NSString, NSURLSession;
@protocol FCOperationThrottler, NDAnalyticsUploadSchedulerDelegate;

@interface NDAnalyticsUploadScheduler : NSObject <FCOperationThrottlerDelegate, NSURLSessionTaskDelegate>
{
    id <NDAnalyticsUploadSchedulerDelegate> _delegate;
    NFMutexLock *_lock;
    FCDateRange *_deliveryWindow;
    id <FCOperationThrottler> _schedulingAndForegroundUploadThrottler;
    FCAsyncSerialQueue *_uploadQueue;
    NSOperationQueue *_backgroundSessionQueue;
    NSURLSession *_backgroundSession;
    FCBalancedCounter *_backgroundSessionLaunchEventCounter;
}

@property(retain, nonatomic) FCBalancedCounter *backgroundSessionLaunchEventCounter; // @synthesize backgroundSessionLaunchEventCounter=_backgroundSessionLaunchEventCounter;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSOperationQueue *backgroundSessionQueue; // @synthesize backgroundSessionQueue=_backgroundSessionQueue;
@property(retain, nonatomic) FCAsyncSerialQueue *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(retain, nonatomic) id <FCOperationThrottler> schedulingAndForegroundUploadThrottler; // @synthesize schedulingAndForegroundUploadThrottler=_schedulingAndForegroundUploadThrottler;
@property(copy, nonatomic) FCDateRange *deliveryWindow; // @synthesize deliveryWindow=_deliveryWindow;
@property(retain, nonatomic) NFMutexLock *lock; // @synthesize lock=_lock;
@property(nonatomic) __weak id <NDAnalyticsUploadSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_uploadWithCompletion:(CDUnknownBlockType)arg1;
- (void)_scheduleBackgroundUploadInWindow:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)scheduleUploadInWindow:(id)arg1 withForegroundUploadCompletion:(CDUnknownBlockType)arg2;
- (void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithURLSessionQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

