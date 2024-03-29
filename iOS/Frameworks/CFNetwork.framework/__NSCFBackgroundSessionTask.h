//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLSessionTask.h"

@class NSError, NSMutableSet, NSString;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask
{
    NSMutableSet *_secKeyProxies;
    struct os_unfair_lock_s _proxyLock;
    _Bool _sentCancel;
    _Bool _sentDidFinish;
    NSError *_immediateError;
}

- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1;
- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1;
- (void)set_discretionaryOverride:(long long)arg1;
- (id)_timingData;
- (void)setDelegate:(id)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_adjustPriorityHint:(float)arg1 incremental:(_Bool)arg2;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_resume;
- (void)_onqueue_cancel;
- (void)_onqueue_suspend;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_didReceiveInformationalResponse:(id)arg1;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeSecKeyProxy:(id)arg1;
- (void)addSecKeyProxy:(id)arg1;
- (void)dealloc;
- (id)initWithBackgroundTask:(id)arg1;
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

