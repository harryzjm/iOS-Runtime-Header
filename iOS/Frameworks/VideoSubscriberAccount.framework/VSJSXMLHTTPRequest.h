//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableURLRequest, NSString, NSURLResponse, NSURLSession, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface VSJSXMLHTTPRequest
{
    _Bool _requestSent;
    unsigned long long _readyState;
    id response;
    NSString *responseText;
    unsigned long long status;
    NSString *statusText;
    unsigned long long timeout;
    NSString *responseType;
    NSURLSession *_session;
    NSURLSessionTask *_sessionTask;
    NSMutableURLRequest *_request;
    NSURLResponse *_urlResponse;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool requestSent; // @synthesize requestSent=_requestSent;
@property(retain, nonatomic) NSURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *responseType; // @synthesize responseType;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout;
@property(retain, nonatomic) NSString *statusText; // @synthesize statusText;
@property(nonatomic) unsigned long long status; // @synthesize status;
@property(retain, nonatomic) NSString *responseText; // @synthesize responseText;
@property(retain, nonatomic) id response; // @synthesize response;
@property(nonatomic) unsigned long long readyState; // @synthesize readyState=_readyState;
- (void)_notifyWithFunctionName:(id)arg1 eventName:(id)arg2 info:(id)arg3;
- (void)_cancelCurrentRequestAndNotify:(_Bool)arg1;
- (void)setRequestHeader:(id)arg1:(id)arg2;
- (id)getResponseHeader:(id)arg1;
- (id)getAllResponseHeaders;
- (void)abort;
- (void)send:(id)arg1;
- (void)open:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

