//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/NSURLSessionDelegate-Protocol.h>

@class EFFuture, EFPromise, NSMutableData, NSString, NSURLResponse;

@interface MFMessageURLConnectionDelegate : NSObject <NSURLSessionDelegate>
{
    NSMutableData *_responseBody;
    EFPromise *_promise;
    NSURLResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) EFFuture *future;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
