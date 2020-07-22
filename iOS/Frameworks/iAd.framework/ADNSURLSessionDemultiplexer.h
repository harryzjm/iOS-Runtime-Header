//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iAd/NSURLSessionDataDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface ADNSURLSessionDemultiplexer : NSObject <NSURLSessionDataDelegate>
{
    NSString *_identifier;
    long long _requestCount;
    NSMutableDictionary *_taskInfoByTaskIdentifier;
    NSURLSessionConfiguration *_configuration;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_demuxQueue;
    long long _maximumRequestCount;
    CDUnknownBlockType _sessionInvalidated;
}

@property(copy, nonatomic) CDUnknownBlockType sessionInvalidated; // @synthesize sessionInvalidated=_sessionInvalidated;
@property(nonatomic) long long maximumRequestCount; // @synthesize maximumRequestCount=_maximumRequestCount;
@property(nonatomic) NSObject<OS_dispatch_queue> *demuxQueue; // @synthesize demuxQueue=_demuxQueue;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) NSMutableDictionary *taskInfoByTaskIdentifier; // @synthesize taskInfoByTaskIdentifier=_taskInfoByTaskIdentifier;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property NSString *identifier; // @synthesize identifier=_identifier;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)taskInfoForTask:(id)arg1;
- (void)invalidateSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeTask:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2 modes:(id)arg3;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 forIdentifier:(id)arg2 withMaximumRequestCount:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

