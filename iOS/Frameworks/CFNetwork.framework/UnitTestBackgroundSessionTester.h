//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionDataDelegate-Protocol.h>
#import <CFNetwork/NSURLSessionDelegate-Protocol.h>

@class NSString, NSURLSession, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface UnitTestBackgroundSessionTester : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *session;
    NSURLSessionDataTask *task;
    NSObject<OS_dispatch_semaphore> *sema;
    int timeout;
    struct BackgroundTaskServerTrustTestResult *result;
}

- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startTaskWithURL:(const char *)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 result:(struct BackgroundTaskServerTrustTestResult *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

