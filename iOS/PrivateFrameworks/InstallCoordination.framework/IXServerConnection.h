//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InstallCoordination/IXClientDelegateProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IXServerConnection : NSObject <IXClientDelegateProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_coordinatorInstances;
    NSMutableDictionary *_promiseInstances;
}

+ (id)sharedConnection;
@property(readonly, nonatomic) NSMutableDictionary *promiseInstances; // @synthesize promiseInstances=_promiseInstances;
@property(readonly, nonatomic) NSMutableDictionary *coordinatorInstances; // @synthesize coordinatorInstances=_coordinatorInstances;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
- (void)unregisterDataPromiseForUpdates:(id)arg1;
- (void)registerDataPromiseForUpdates:(id)arg1 notifyDaemon:(_Bool)arg2;
- (void)unregisterAppInstallCoordinatorForUpdates:(id)arg1;
- (void)registerAppInstallCoordinatorForUpdates:(id)arg1 notifyDaemon:(_Bool)arg2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_onQueue_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (_Bool)_onQueue_createXPCConnectionIfNecessary;
- (void)_onQueue_reSetupObserversAfter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

