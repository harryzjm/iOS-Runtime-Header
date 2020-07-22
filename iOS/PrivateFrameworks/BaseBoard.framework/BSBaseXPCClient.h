//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class BSAtomicSignal, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSBaseXPCClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BSAtomicSignal *_invalidationSignal;
    NSObject<OS_xpc_object> *_serverEndpoint;
    NSString *_serviceName;
    _Bool _clientInvalidated;
    int _notifyToken;
    NSObject<OS_xpc_object> *_connection;
    _Bool _suspended;
}

- (void)queue_invalidate;
- (void)queue_reconnectToResumedServerIfNecessary;
- (void)queue_reregister;
- (_Bool)queue_isSuspended;
- (id)queue_connection;
- (void)queue_registerWithServerIfNecessary;
- (id)_connectionInstanceUUID;
- (void)queue_suspendConnection;
- (void)queue_resumeConnection;
- (void)queue_clientWasInvalidated;
- (void)queue_connectionWasInvalidated;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasDestroyed;
- (void)queue_connectionWasSuspended;
- (void)queue_connectionWasResumed;
- (void)queue_connectionWasCreated;
- (void)queue_handleError:(id)arg1;
- (void)queue_handleMessage:(id)arg1;
- (void)_setEndpoint:(id)arg1;
- (id)_connection;
- (id)_notifyTokenName;
- (void)_sendMessage:(CDUnknownBlockType)arg1 withReplyHandler:(CDUnknownBlockType)arg2 waitForReply:(_Bool)arg3 waitDuration:(unsigned long long)arg4;
- (void)_sendMessage:(CDUnknownBlockType)arg1;
- (void)_sendReplyForMessage:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)_sendMessageReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)_sendReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (id)_errorFromMessageIfAny:(id)arg1;
- (void)invalidate;
- (void)resumeConnection;
- (void)suspendConnection;
- (void)reconnectIfNecessary;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)init;

@end

