//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreDaemon/NSXPCListenerDelegate-Protocol.h>

@class ASDCheckQueueRequestOptions, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDCheckQueueRequest <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDCheckQueueRequestOptions *_options;
}

- (void).cxx_destruct;
- (void)_setupConnection;
- (void)_makeAutomaticQueueRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_makeRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_sendRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sendRequestCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkPendingCheckWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkAutomaticCheckWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

