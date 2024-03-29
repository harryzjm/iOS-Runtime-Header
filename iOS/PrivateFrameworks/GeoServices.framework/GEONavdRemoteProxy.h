//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEONavdServerProxy.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSXPCConnection;
@protocol GEONavdXPCInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdRemoteProxy : GEONavdServerProxy
{
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2;
- (void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2;
- (void)dealloc;
- (void)forceCacheRefresh;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;
- (void)statusWithCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <GEONavdXPCInterface> remoteObjectProxyThreadUnsafe;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)_connectToDaemonIfNeededThreadUnsafe;
- (void)close;
- (void)open;
- (id)init;

@end

