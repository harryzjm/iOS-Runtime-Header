//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDBackingStore, HMDResidentSyncManager, HMFTimer, NSNotificationCenter, NSString, NSUUID;
@protocol HMDAppleMediaDeviceAssociationControllerDataSource, HMDTimerProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaDeviceAssociationController : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _busy;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_homeUUID;
    NSUUID *_accessoryUUID;
    HMDResidentSyncManager *_residentSyncManager;
    HMDBackingStore *_backingStore;
    NSNotificationCenter *_notificationCenter;
    id <HMDAppleMediaDeviceAssociationControllerDataSource> _dataSource;
    id <HMDTimerProvider> _timerProvider;
    HMFTimer *_backoffTimer;
    long long _timerIntervalIndex;
    CDUnknownBlockType _mkfAppleMediaModelFinder;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType mkfAppleMediaModelFinder; // @synthesize mkfAppleMediaModelFinder=_mkfAppleMediaModelFinder;
@property long long timerIntervalIndex; // @synthesize timerIntervalIndex=_timerIntervalIndex;
@property(retain) HMFTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property __weak id <HMDTimerProvider> timerProvider; // @synthesize timerProvider=_timerProvider;
@property(readonly) id <HMDAppleMediaDeviceAssociationControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly) HMDResidentSyncManager *residentSyncManager; // @synthesize residentSyncManager=_residentSyncManager;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)logIdentifier;
- (id)mkfAppleMediaAccessoryWithModelIdentifier:(id)arg1;
- (double)nextInterval;
- (void)timerDidFire:(id)arg1;
- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (void)_setStatusBusy:(_Bool)arg1;
- (_Bool)_statusBusy;
- (id)_deviceAssociationInfoFromProtoData:(id)arg1;
- (void)_handleHMDAppleMediaDeviceAssociationPushMessage:(id)arg1;
- (void)_updateIdsAddressWithAccessoryUUID:(id)arg1 idsIdentifier:(id)arg2 idsDestination:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handlePrimaryResidentDeviceAddressUpdate;
- (void)_startRetryTimer;
- (void)_pushDeviceAddress;
- (void)_shouldPushDeviceAddressWithCompletion:(CDUnknownBlockType)arg1;
- (void)_pushDeviceAddressIfNeeded;
- (_Bool)_currentDeviceHasDeviceAddress;
- (void)_process;
- (void)_handlePrimaryChange:(id)arg1;
- (void)handleTransactionObjectUpdated;
- (void)_handleDeviceUpdatedNotification:(id)arg1;
- (void)_handleAppleAccountManagerResolvedNotification:(id)arg1;
- (void)_registerForNotifications:(id)arg1;
- (void)_registerForMessages:(id)arg1 messageDispatcher:(id)arg2;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)initWithQueue:(id)arg1 homeUUID:(id)arg2 accessoryUUID:(id)arg3 residentSyncManager:(id)arg4 backingStore:(id)arg5 notificationCenter:(id)arg6 dataSource:(id)arg7;
- (id)initWithHome:(id)arg1 accessory:(id)arg2 dataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

