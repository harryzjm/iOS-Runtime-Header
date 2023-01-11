//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceLoadOperation-Protocol.h>
#import <GeoServices/NSURLSessionDataDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOReportedProgress, NSData, NSLock, NSMutableData, NSProgress, NSString, NSURL, NSURLSession, NSURLSessionTask;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation>
{
    NSURL *_url;
    NSURL *_proxyURL;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    NSMutableData *_data;
    _Bool _expectsPartialContent;
    GEOApplicationAuditToken *_auditToken;
    NSLock *_lock;
    _Bool _requiresWiFi;
    _Bool _requiresProxy;
    GEOReportedProgress *_progress;
}

@property(nonatomic) _Bool requiresWiFi; // @synthesize requiresWiFi=_requiresWiFi;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
@property(readonly) NSProgress *progress;
- (void)dealloc;
- (id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURL:(id)arg4 proxyURL:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

