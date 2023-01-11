//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/MuxNotificationSinkDelegate-Protocol.h>

@class MuxNotificationSink, NSError, NSSet, NSXPCConnection, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface CoreTelephonyClientMux : NSObject <MuxNotificationSinkDelegate>
{
    struct map<__unsafe_unretained id, (anonymous namespace)::DelegateContext, std::__1::less<__unsafe_unretained id>, std::__1::allocator<std::__1::pair<const __unsafe_unretained id, (anonymous namespace)::DelegateContext>>> _delegates;
    NSSet *_currentSelectorSet;
    NSXPCConnection *_connection;
    struct queue _xpcQueue;
    NSXPCListenerEndpoint *_endpoint;
    MuxNotificationSink *_notificationSink;
    NSError *_reconnectError;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *reconnectError; // @synthesize reconnectError=_reconnectError;
@property(retain, nonatomic) MuxNotificationSink *notificationSink; // @synthesize notificationSink=_notificationSink;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) struct queue xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)_connection;
- (void)_ensureConnectionSetup_sync:(_Bool)arg1;
- (void)_ensureConnectionSetup_sync;
- (void)_initializeConnection_sync;
- (void)_connect_sync;
- (void)_setReconnectError_sync:(id)arg1;
- (void)_registerForNotifications_sync:(id)arg1 shouldForce:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_computeNotificationSet_sync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_computeNotificationSet_sync:(CDUnknownBlockType)arg1;
- (void)_computeNotificationSetForced_sync:(CDUnknownBlockType)arg1;
- (void)_computeNotificationSetForced_sync;
- (id)proxyWithErrorHandler_sync:(CDUnknownBlockType)arg1;
- (id)synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)proxyWithQueue:(struct queue)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)sink:(id)arg1 handleNotification:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(struct queue)arg2;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 sink:(id)arg2;
- (id)initWithSink:(id)arg1;
- (id)init;

@end
