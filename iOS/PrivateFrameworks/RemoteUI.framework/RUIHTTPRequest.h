//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLRequest, NSURLSession, NSURLSessionDataTask;

@interface RUIHTTPRequest : NSObject
{
    NSURLRequest *_request;
    NSURLSessionDataTask *_dataTask;
    NSURLSession *_urlSession;
    id _delegate;
}

+ (id)safeBaseURL;
+ (_Bool)anyRequestLoading;
+ (id)nonSecureConnectionNotAllowedError;
+ (id)invalidResponseErrorWithResponse:(id)arg1;
+ (id)serviceUnavailableError;
+ (id)errorWithCode:(unsigned long long)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)receivedValidResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)parseData:(id)arg1;
- (void)didParseData;
- (void)willParseData;
- (id)request;
- (void)loadStatusChanged;
- (_Bool)isLoading;
- (void)cancel;
- (void)_preLoadCancel;
- (id)urlSessionDelegate;
- (id)sessionConfiguration;
- (id)handleWillLoadRequest:(id)arg1;
- (void)shouldLoadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadRequest:(id)arg1;
- (void)_loadRequestMain:(id)arg1;
- (void)_finishedLoading;
- (void)_startedLoading;
- (void)dealloc;
- (id)init;

@end

