//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PairedSync/NSXPCListenerDelegate-Protocol.h>
#import <PairedSync/PSYActivity-Protocol.h>
#import <PairedSync/PSYServiceSyncSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection, NSXPCListener, PSYServiceSyncSession;
@protocol OS_dispatch_queue, PSYSyncCoordinatorDelegate;

@interface PSYSyncCoordinator : NSObject <NSXPCListenerDelegate, PSYActivity, PSYServiceSyncSessionDelegate>
{
    NSXPCListener *_listener;
    CDUnknownBlockType _pendingCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _delegateLock;
    id <PSYSyncCoordinatorDelegate> _delegate;
    PSYServiceSyncSession *_activeSyncSession;
    int _syncSwitchIDToken;
    unsigned long long _syncRestriction;
    unsigned long long _syncIDOfStartedSync;
    _Bool _hasStartedListening;
    NSMutableDictionary *_nrDevices;
    NSString *_serviceName;
    NSXPCConnection *_connection;
}

+ (id)filteredErrorWithError:(id)arg1;
+ (id)syncCoordinatorWithServiceName:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)exitForTestInput:(id)arg1;
- (void)beginDryRunSyncWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)syncSessionForOptions:(id)arg1 supportsMigrationSync:(_Bool)arg2;
- (void)deviceChanged:(id)arg1;
- (void)unregisterForDeviceChangeNotifications;
- (void)registerForDeviceChangeNotifications;
- (void)_cleanup;
- (void)dealloc;
- (void)invalidateActiveSyncSession;
- (void)performDelegateBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <PSYSyncCoordinatorDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)reportProgress:(double)arg1;
- (void)syncDidFailWithError:(id)arg1;
- (void)syncDidComplete;
- (void)syncDidCompleteSending;
- (void)syncSession:(id)arg1 reportProgress:(double)arg2;
- (void)syncSession:(id)arg1 didFailWithError:(id)arg2;
- (void)syncSessionDidComplete:(id)arg1;
- (void)syncSessionDidCompleteSending:(id)arg1;
- (id)progressHandler;
@property(readonly, nonatomic) PSYServiceSyncSession *activeSyncSession;
- (oneway void)abortSyncWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)beginSyncWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_syncRestrictionDidUpdate:(id)arg1 forServiceName:(id)arg2;
- (_Bool)_pairedSyncFinishedMigrationSyncWithPairingID:(id)arg1;
- (_Bool)_pairedSyncFinishedReunionSync;
- (unsigned long long)_syncRestriction;
- (unsigned long long)syncRestriction;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_unregisterNRDeviceMonitors;
- (void)_registerMonitorNRDevice:(id)arg1 forMigrationChanges:(CDUnknownBlockType)arg2;
- (void)_registerMonitorAllNRDevicesForMigrationChanges:(CDUnknownBlockType)arg1;
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (int)registerNotifyTokenWithName:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)readNotifyToken:(int)arg1;
- (id)initWithServiceName:(id)arg1 serviceLookupPath:(id)arg2;
- (id)initWithServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
