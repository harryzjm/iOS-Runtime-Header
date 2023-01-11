//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSURLHandling-Protocol.h>

@class AMSURLSession, NSString;
@protocol OS_dispatch_queue;

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling>
{
    AMSURLSession *session;
    NSObject<OS_dispatch_queue> *_responsePingQueue;
    NSObject<OS_dispatch_queue> *_metricsQueue;
}

+ (double)_randomDouble;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responsePingQueue; // @synthesize responsePingQueue=_responsePingQueue;
@property(nonatomic) __weak AMSURLSession *session; // @synthesize session;
- (void).cxx_destruct;
- (_Bool)_URLIsTrustedFromRequest:(id)arg1 bagContract:(id)arg2;
- (_Bool)_shouldEnableReversePushForTask:(id)arg1;
- (void)_setResponseCookiesFromResponse:(id)arg1 taskInfo:(id)arg2;
- (void)_pingURL:(id)arg1 contract:(id)arg2;
- (void)reportMetricsForTaskInfo:(id)arg1 decodedObject:(id)arg2;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(_Bool)arg3 error:(id *)arg4;
- (id)handleResponse:(id)arg1 task:(id)arg2;
- (id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
- (void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id *)arg3;
- (id)decodeData:(id)arg1 task:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

