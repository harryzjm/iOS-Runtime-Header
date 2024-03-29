//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _HMFCFHTTPMessage, _HMFCFHTTPServerRequest;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPServerResponse
{
    struct _CFHTTPServerResponse *_responseRef;
    _HMFCFHTTPServerRequest *_request;
    CDUnknownBlockType _completionHandler;
    _HMFCFHTTPMessage *_response;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _HMFCFHTTPMessage *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) _HMFCFHTTPServerRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) struct _CFHTTPServerResponse *responseRef; // @synthesize responseRef=_responseRef;
- (void)setBody:(id)arg1;
- (id)body;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
- (id)headerFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 statusCode:(long long)arg2;

@end

