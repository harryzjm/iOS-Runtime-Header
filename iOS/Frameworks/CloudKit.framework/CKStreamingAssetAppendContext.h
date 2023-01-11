//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/C2RequestDelegate-Protocol.h>

@class CKStreamingAsset, NSString, NSURLSessionDataTask;
@protocol OS_dispatch_queue, OS_os_activity;

@interface CKStreamingAssetAppendContext : NSObject <C2RequestDelegate>
{
    _Bool _appending;
    _Bool _currentAppendCancelled;
    _Bool _fakeMissingUploadReceipt;
    CKStreamingAsset *_streamingAsset;
    NSObject<OS_dispatch_queue> *_appendQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _currentSegmentLength;
    NSURLSessionDataTask *_dataTask;
    NSString *_requestUUID;
    NSObject<OS_os_activity> *_osActivity;
    CDUnknownBlockType _completionHandler;
}

+ (id)requestToAppendSegmentData:(id)arg1 uploadURL:(id)arg2 requestUUID:(id)arg3 offset:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool fakeMissingUploadReceipt; // @synthesize fakeMissingUploadReceipt=_fakeMissingUploadReceipt;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property(retain, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(nonatomic) unsigned long long currentSegmentLength; // @synthesize currentSegmentLength=_currentSegmentLength;
@property(nonatomic, getter=isCurrentAppendCancelled) _Bool currentAppendCancelled; // @synthesize currentAppendCancelled=_currentAppendCancelled;
@property(nonatomic, getter=isAppending) _Bool appending; // @synthesize appending=_appending;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *appendQueue; // @synthesize appendQueue=_appendQueue;
@property(retain, nonatomic) CKStreamingAsset *streamingAsset; // @synthesize streamingAsset=_streamingAsset;
- (void)abort;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)appendSegmentWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)appendSegmentWithData:(id)arg1 newStreamingAsset:(id *)arg2 error:(id *)arg3;
- (_Bool)appendSegmentWithData:(id)arg1 error:(id *)arg2;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithStreamingAsset:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
