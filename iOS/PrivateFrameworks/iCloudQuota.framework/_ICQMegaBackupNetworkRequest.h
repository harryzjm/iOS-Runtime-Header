//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSURL, NSURLSession, NSURLSessionTask;
@protocol OS_dispatch_queue;

@interface _ICQMegaBackupNetworkRequest : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_URLSession;
    NSURLSessionTask *_URLSessionTask;
    CDUnknownBlockType _completionHandler;
    NSURL *_requestURL;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
- (void)_completeWithError:(id)arg1;
- (void)_performURLRequest:(id)arg1;
- (id)_errorForURLRequestError:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *requestHeaders;
- (id)_createURLRequestWithError:(id *)arg1;
- (id)errorForUnsuccessfulResponse:(id)arg1 body:(id)arg2;
- (id)handleResponse:(id)arg1 body:(id)arg2;
- (void)addAdditionalRequestHeaders:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *bodyJSON;
@property(readonly, copy, nonatomic) NSDictionary *additionalRequestHeaders;
- (id)_dictionaryFromData:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (void)handleURLResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)resumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)initWithRequestURL:(id)arg1 URLSession:(id)arg2 queue:(id)arg3;

@end
