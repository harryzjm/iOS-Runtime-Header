//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSURLSessionDelegate-Protocol.h>
#import <CoreDuet/NSURLSessionDownloadDelegate-Protocol.h>

@class NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSOperationQueue, NSString, NSURLSession;

@interface _CDServerRequest : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    CDUnknownBlockType _responseHandler;
    NSOperationQueue *_sessionQueue;
    NSURLSession *_session;
    NSMutableURLRequest *_request;
    NSHTTPURLResponse *_httpResponse;
    NSMutableData *_responseData;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
