//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCEdgeCacheHint, FCNetworkEvent, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface FCCKDirectRequestOperation
{
    _Bool _production;
    _Bool _operationFailsOnRequestFailure;
    NSArray *_requests;
    NSString *_containerName;
    long long _requestType;
    long long _networkEventType;
    double _timeoutIntervalForRequest;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    CDUnknownBlockType _criticalNodeFailureTest;
    CDUnknownBlockType _requestCompletionHandler;
    NSString *_requestUUID;
    FCNetworkEvent *_networkEvent;
    NSMutableArray *_resultResponses;
    NSMutableDictionary *_resultErrorsByRequestID;
    NSError *_resultError;
}

+ (id)_headersImpactingEdgeCache;
+ (_Bool)_enableDebugLogLevel;
+ (id)URLSession;
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) NSMutableDictionary *resultErrorsByRequestID; // @synthesize resultErrorsByRequestID=_resultErrorsByRequestID;
@property(retain, nonatomic) NSMutableArray *resultResponses; // @synthesize resultResponses=_resultResponses;
@property(retain, nonatomic) FCNetworkEvent *networkEvent; // @synthesize networkEvent=_networkEvent;
@property(copy, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property(copy, nonatomic) CDUnknownBlockType requestCompletionHandler; // @synthesize requestCompletionHandler=_requestCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType criticalNodeFailureTest; // @synthesize criticalNodeFailureTest=_criticalNodeFailureTest;
@property(copy, nonatomic) FCEdgeCacheHint *edgeCacheHint; // @synthesize edgeCacheHint=_edgeCacheHint;
@property(copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic) long long networkEventType; // @synthesize networkEventType=_networkEventType;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic) _Bool operationFailsOnRequestFailure; // @synthesize operationFailsOnRequestFailure=_operationFailsOnRequestFailure;
@property(nonatomic) _Bool production; // @synthesize production=_production;
@property(copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (id)_errorFromOperationResultError:(id)arg1;
- (id)_errorFromHTTPResponse:(id)arg1;
- (id)_bundleIDToReport;
- (id)_mmeClientInfo;
- (id)_requestHeadersWithBaseURL:(id)arg1;
- (id)_requestBodyData;
- (id)generateHTTPRequest;
- (void)_processResponseData:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;
- (id)init;

@end

