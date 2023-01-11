//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/SSURLSessionManagerDelegate-Protocol.h>

@class ISDataProvider, ISURLRequestPerformance, NSArray, NSCountedSet, NSData, NSMutableData, NSNumber, NSObject, NSString, NSURLCache, NSURLRequest, NSURLResponse, NSURLSessionTask, SSAuthenticationContext, SSBag, SSHTTPArchive, SSMutableURLRequestProperties, SSURLRequestProperties, SSURLSessionManager;
@protocol ISURLOperationDelegate, OS_dispatch_queue;

@interface ISURLOperation <SSURLSessionManagerDelegate>
{
    SSAuthenticationContext *_authenticationContext;
    NSMutableData *_dataBuffer;
    ISDataProvider *_dataProvider;
    long long _networkRetryCount;
    NSCountedSet *_redirectURLs;
    SSMutableURLRequestProperties *_requestProperties;
    NSURLResponse *_response;
    _Bool _shouldSetCookies;
    SSURLSessionManager *_urlSessionManager;
    NSURLSessionTask *_urlSessionTask;
    _Bool _usesPrivateCookieStore;
    NSURLRequest *_activeURLRequest;
    NSObject<OS_dispatch_queue> *_dataBufferAccessQueue;
    SSHTTPArchive *_httpArchive;
    ISURLRequestPerformance *_performanceMetrics;
    _Bool _loadsHTTPFailures;
    _Bool _uploadProgressRequested;
    NSArray *_passThroughErrors;
    NSNumber *__accountDSIDOverride;
}

+ (struct __CFURLStorageSession *)_sharedCacheStorageSession;
+ (struct _CFURLCache *)sharedCFURLCache;
+ (id)copyUserAgent;
@property(retain, nonatomic, setter=_setAccountDSIDOverride:) NSNumber *_accountDSIDOverride; // @synthesize _accountDSIDOverride=__accountDSIDOverride;
@property(retain, nonatomic) NSArray *passThroughErrors; // @synthesize passThroughErrors=_passThroughErrors;
@property(nonatomic, getter=isUploadProgressRequested) _Bool uploadProgressRequested; // @synthesize uploadProgressRequested=_uploadProgressRequested;
@property(getter=_usesPrivateCookieStore, setter=_setUsesPrivateCookieStore:) _Bool _usesPrivateCookieStore; // @synthesize _usesPrivateCookieStore;
@property(getter=_shouldSetCookies, setter=_setShouldSetCookies:) _Bool _shouldSetCookies; // @synthesize _shouldSetCookies;
@property(retain) NSURLResponse *response; // @synthesize response=_response;
@property(getter=_loadsHTTPFailures, setter=_setLoadsHTTPFailures:) _Bool _loadsHTTPFailures; // @synthesize _loadsHTTPFailures;
@property(retain) ISDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, copy) NSURLRequest *activeURLRequest; // @synthesize activeURLRequest=_activeURLRequest;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void).cxx_destruct;
- (_Bool)_validateContentLength:(long long)arg1 error:(id *)arg2;
- (void)_updateProgress;
- (id)_stringForCachePolicy:(unsigned long long)arg1;
- (void)_stopIfCancelled;
- (void)_stopConnection;
- (_Bool)_shouldFollowRedirectWithRequest:(id)arg1 error:(id *)arg2;
@property(retain, setter=_setActiveURLRequest:) NSURLRequest *_activeURLRequest;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)_sendRequestToDelegate:(id)arg1;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_sendContentLengthToDelegate:(long long)arg1;
- (_Bool)_runRequestWithURL:(id)arg1 dataConnectionServiceType:(struct __CFString *)arg2;
- (void)_run;
- (void)_retry;
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)_logResponseBody:(id)arg1;
- (void)_logRequest:(id)arg1;
- (_Bool)_isPassThroughStatus:(long long)arg1;
- (_Bool)_isExternalURL:(id)arg1;
- (id)_errorWithDomain:(id)arg1 code:(long long)arg2;
- (id)_errorWithDefaultStringsForError:(id)arg1;
- (long long)_defaultAuthChallengeDispositionForChallenge:(id)arg1;
- (id)_decodedDataForData:(id)arg1;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (id)_copyConnectionPropertiesWithDataConnectionServiceType:(struct __CFString *)arg1;
- (id)_activeURL;
- (id)_handleRedirectRequest:(id)arg1 response:(id)arg2;
- (void)_handleReceivedResponse:(id)arg1;
- (void)_handleReceivedData:(id)arg1;
- (void)_handleFinishedLoading;
- (void)_willSendRequest:(id)arg1;
- (id)_sanitizedURLForURL:(id)arg1;
- (id)_sanitizedStringForString:(id)arg1;
- (id)_sanitizedDescriptionForObject:(id)arg1;
- (id)_requestProperties;
- (_Bool)_processResponseData:(id)arg1 error:(id *)arg2;
- (id)_copyAuthenticationContext;
- (id)_accountIdentifier;
@property _Bool tracksPerformanceMetrics;
@property(readonly) ISURLRequestPerformance *performanceMetrics;
@property(readonly) SSHTTPArchive *HTTPArchive;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCreatingHTTPArchive:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4;
- (id)URLSession:(id)arg1 task:(id)arg2 decodedDataForResponseData:(id)arg3;
@property(readonly, nonatomic) NSString *URLCacheID;
@property(readonly, nonatomic) NSURLCache *URLCache;
@property(readonly, nonatomic) NSString *sourceAppBundleID;
@property(readonly, nonatomic) NSData *sourceAppAuditTokenData;
@property(readonly, nonatomic) _Bool shouldSetCookies;
@property(readonly, nonatomic) _Bool shouldRequireCellular;
@property(readonly, nonatomic) _Bool shouldDisableCellular;
@property(readonly, nonatomic) NSData *rawResponseData;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
- (_Bool)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id *)arg2;
- (id)newRequestWithURL:(id)arg1;
- (void)handleResponse:(id)arg1;
- (_Bool)handleRedirectFromDataProvider:(id)arg1 error:(id *)arg2;
- (void)run;
@property(copy) SSURLRequestProperties *requestProperties;
- (void)setRequest:(id)arg1;
- (id)request;
- (void)dealloc;
- (id)initWithSessionManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) SSBag *bag;
@property(readonly, copy) NSString *debugDescription;
@property __weak id <ISURLOperationDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isURLBagRequest;
@property(readonly) Class superclass;

@end

