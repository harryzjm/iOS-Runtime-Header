//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTask-Protocol.h>
#import <GeoServices/GEODataSessionTaskDelegate-Protocol.h>
#import <GeoServices/GEODataSessionTaskRulesObserver-Protocol.h>
#import <GeoServices/GEOStateCapturing-Protocol.h>

@class GEOClientMetrics, GEODataSession, GEODataURLSessionTask, GEODataXPCSessionTask, NSData, NSError, NSString, NSURL;
@protocol GEODataSessionTask, GEODataSessionTaskDelegate, GEODataSessionTaskRules, OS_dispatch_queue, OS_os_activity;

__attribute__((visibility("hidden")))
@interface GEODataSessionTask : NSObject <GEODataSessionTaskDelegate, GEODataSessionTaskRulesObserver, GEOStateCapturing, GEODataSessionTask>
{
    id <GEODataSessionTaskDelegate> _delegate;
    GEODataSession *_session;
    id <GEODataSessionTaskRules> _rules;
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_activity> *_activity;
    id <GEODataSessionTask> _completedSubtask;
    GEODataURLSessionTask *_urlTask;
    GEODataXPCSessionTask *_xpcTask;
    int _requestKind;
    unsigned long long _stateCaptureHandle;
    unsigned int _taskIdentifier;
    double _startTime;
    double _endTime;
    _Bool _didStart;
}

@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) unsigned int taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(nonatomic) __weak id <GEODataSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GEODataSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) int requestKind; // @synthesize requestKind=_requestKind;
@property(retain, nonatomic) id <GEODataSessionTask> completedSubtask; // @synthesize completedSubtask=_completedSubtask;
@property(retain, nonatomic) GEODataXPCSessionTask *xpcTask; // @synthesize xpcTask=_xpcTask;
@property(retain, nonatomic) GEODataURLSessionTask *urlTask; // @synthesize urlTask=_urlTask;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // @synthesize sessionIsolation=_sessionIsolation;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly) _Bool failedDueToCancel;
@property(readonly, nonatomic) NSString *remoteAddressAndPort;
@property(readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property(readonly, nonatomic) unsigned long long incomingPayloadSize;
@property(readonly, nonatomic) NSData *receivedData;
@property(readonly, nonatomic) _Bool protocolBufferHasPreamble;
@property(readonly, nonatomic) NSError *error;
- (void)cancel;
- (void)start;
@property float priority;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithSession:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 requestKind:(int)arg5;
- (_Bool)validateTileResponseWithError:(id *)arg1;
- (void)rulesDidChooseCompletedSubtask:(id)arg1;
- (void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
@property(readonly, nonatomic) NSURL *originalRequestURL;
@property(readonly, nonatomic) long long responseSource;
@property(readonly, nonatomic) NSString *entityTag;
- (_Bool)getHeaderValue:(id *)arg1 forField:(id)arg2;
- (_Bool)validateTransportWithError:(id *)arg1;
- (_Bool)didValidateEntityTagForData:(id *)arg1 entityTag:(id *)arg2;
@property(readonly) double elapsedTime;
- (id)captureStateWithHints:(struct os_state_hints_s *)arg1;
- (void)startSubtasksApplyingRules:(id)arg1 URL:(id)arg2 XPC:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

