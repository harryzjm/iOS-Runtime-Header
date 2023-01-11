//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <C2/C2RequestDelegate-Protocol.h>

@class C2RequestOptions, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface C2ReportMetrics : NSObject <C2RequestDelegate>
{
    _Bool _ignoreRequestThrottle;
    NSString *_requestThrottleIdentifier;
    NSMutableURLRequest *_metricRequest;
    C2RequestOptions *_metricsTransportRequestOptions;
    NSURLSessionTask *_metricTask;
    CDUnknownBlockType _testBehavior_tooManyTasksRunning;
    CDUnknownBlockType _testBehavior_didCompleteWithError;
}

+ (void)_reportWithOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4;
+ (void)reportMetricWithOptions:(id)arg1 genericMetricType:(long long)arg2 eventName:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 attributes:(id)arg6;
+ (void)reportNetworkEvent:(id)arg1 triggers:(int)arg2 originalSessionTask:(id)arg3;
+ (id)gzipEncode:(id)arg1;
+ (id)requestForMetricOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4;
@property(copy, nonatomic) CDUnknownBlockType testBehavior_didCompleteWithError; // @synthesize testBehavior_didCompleteWithError=_testBehavior_didCompleteWithError;
@property(copy, nonatomic) CDUnknownBlockType testBehavior_tooManyTasksRunning; // @synthesize testBehavior_tooManyTasksRunning=_testBehavior_tooManyTasksRunning;
@property(retain, nonatomic) NSURLSessionTask *metricTask; // @synthesize metricTask=_metricTask;
@property(retain, nonatomic) C2RequestOptions *metricsTransportRequestOptions; // @synthesize metricsTransportRequestOptions=_metricsTransportRequestOptions;
@property(retain, nonatomic) NSMutableURLRequest *metricRequest; // @synthesize metricRequest=_metricRequest;
@property(retain, nonatomic) NSString *requestThrottleIdentifier; // @synthesize requestThrottleIdentifier=_requestThrottleIdentifier;
@property(nonatomic) _Bool ignoreRequestThrottle; // @synthesize ignoreRequestThrottle=_ignoreRequestThrottle;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)send;
- (id)initWithMetricRequest:(id)arg1 metricRequestOptions:(id)arg2 ignoreRequestThrottle:(_Bool)arg3 requestThrottleIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

