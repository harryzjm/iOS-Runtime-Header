//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKAssetRepairSchedulerDelegate-Protocol.h>
#import <CloudKit/CKSyncEngineDataSource-Protocol.h>

@class CKAssetRepairScheduler, CKContainer, CKSchedulerActivity, CKSyncEngine, CKUploadRequestConfiguration, CKUploadRequestManagerResponseActionThrottler, CKUploadRequestManagerStateMachine, CKUploadRequestPersistentStore, NSMutableDictionary, NSString;
@protocol NSObject, OS_dispatch_queue;

@interface CKUploadRequestManagerInternals : NSObject <CKAssetRepairSchedulerDelegate, CKSyncEngineDataSource>
{
    _Bool _ignoringSystemConditions;
    _Bool _hasRegisteredActivity;
    int _fetchAllToken;
    CKUploadRequestManagerStateMachine *_stateMachine;
    NSString *_machServiceName;
    CKContainer *_container;
    CKContainer *_repairContainer;
    CKUploadRequestConfiguration *_repairContainerOverrides;
    CKSyncEngine *_repairZoneSyncEngine;
    NSString *_assignedMachServiceName;
    CKAssetRepairScheduler *_repairProcessor;
    CKUploadRequestPersistentStore *_database;
    NSString *_deviceID;
    NSString *_cachesDirectory;
    struct __SCNetworkReachability *_reachability;
    id <NSObject> _accountChangeObserver;
    CDUnknownBlockType _scheduledAccountStatusCheck;
    CDUnknownBlockType _repairActivityHandler;
    CKSchedulerActivity *_observedRepairActivity;
    CKUploadRequestManagerResponseActionThrottler *_responseActionThrottler;
    NSObject<OS_dispatch_queue> *_stateMachineQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_callbackForOverridePoint;
    CDUnknownBlockType _assetRequestCallback;
    CDUnknownBlockType _packageRequestCallback;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType packageRequestCallback; // @synthesize packageRequestCallback=_packageRequestCallback;
@property(copy) CDUnknownBlockType assetRequestCallback; // @synthesize assetRequestCallback=_assetRequestCallback;
@property(retain, nonatomic) NSMutableDictionary *callbackForOverridePoint; // @synthesize callbackForOverridePoint=_callbackForOverridePoint;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateMachineQueue; // @synthesize stateMachineQueue=_stateMachineQueue;
@property(retain, nonatomic) CKUploadRequestManagerResponseActionThrottler *responseActionThrottler; // @synthesize responseActionThrottler=_responseActionThrottler;
@property(retain, nonatomic) CKSchedulerActivity *observedRepairActivity; // @synthesize observedRepairActivity=_observedRepairActivity;
@property(copy, nonatomic) CDUnknownBlockType repairActivityHandler; // @synthesize repairActivityHandler=_repairActivityHandler;
@property(nonatomic) int fetchAllToken; // @synthesize fetchAllToken=_fetchAllToken;
@property(copy, nonatomic) CDUnknownBlockType scheduledAccountStatusCheck; // @synthesize scheduledAccountStatusCheck=_scheduledAccountStatusCheck;
@property(retain, nonatomic) id <NSObject> accountChangeObserver; // @synthesize accountChangeObserver=_accountChangeObserver;
@property(nonatomic) struct __SCNetworkReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSString *cachesDirectory; // @synthesize cachesDirectory=_cachesDirectory;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) CKUploadRequestPersistentStore *database; // @synthesize database=_database;
@property(retain, nonatomic) CKAssetRepairScheduler *repairProcessor; // @synthesize repairProcessor=_repairProcessor;
@property(nonatomic) _Bool hasRegisteredActivity; // @synthesize hasRegisteredActivity=_hasRegisteredActivity;
@property(retain, nonatomic) NSString *assignedMachServiceName; // @synthesize assignedMachServiceName=_assignedMachServiceName;
@property(retain, nonatomic) CKSyncEngine *repairZoneSyncEngine; // @synthesize repairZoneSyncEngine=_repairZoneSyncEngine;
@property(retain, nonatomic) CKUploadRequestConfiguration *repairContainerOverrides; // @synthesize repairContainerOverrides=_repairContainerOverrides;
@property(retain, nonatomic) CKContainer *repairContainer; // @synthesize repairContainer=_repairContainer;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) _Bool ignoringSystemConditions; // @synthesize ignoringSystemConditions=_ignoringSystemConditions;
- (void)invokeCallbackForOverridePoint:(long long)arg1 withError:(id)arg2 onCallbackQueue:(_Bool)arg3;
- (void)setCallback:(CDUnknownBlockType)arg1 forOverridePoint:(long long)arg2;
- (void)dispatchEvent:(long long)arg1 synchronously:(_Bool)arg2;
- (void)manuallyTriggerUploadRequests;
- (void)fetchServerChanges:(CDUnknownBlockType)arg1;
- (id)createDatabase;
@property(retain, nonatomic) CKUploadRequestManagerStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (id)repairZoneID;
@property(copy) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;
- (void)commonInitWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(_Bool)arg3;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (void)assetRepairSchedulerAllRequestsComplete:(id)arg1;
- (void)assetRepairScheduler:(id)arg1 preparingRepairWithOperation:(id)arg2;
- (void)assetRepairScheduler:(id)arg1 completedRepairWithMetadata:(id)arg2 error:(id)arg3;
- (void)assetRepairScheduler:(id)arg1 completedRequestWithMetadata:(id)arg2 result:(long long)arg3;
- (_Bool)isRepairRecordActionable:(id)arg1;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDChanged:(id)arg2;
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)performRepairs;
- (id)nextRepairDateForDate:(id)arg1;
- (id)repairableAssetsForDate:(id)arg1;
- (void)scheduleRecordRepair:(id)arg1 withDelay:(double)arg2 increasingCount:(_Bool)arg3;
- (void)scheduleOrInvokeRepairsNow;
- (void)scheduleRepairsWithDelay:(double)arg1;
- (void)scheduleNextSync;
- (void)scheduleRecurringFetch;
- (void)unregisterFromFetchAllNotifications;
- (void)registerForFetchAllNotifications;
- (void)checkAccountID;
- (void)checkAccountStatus;
- (void)unregisterFromAccountNotifications;
- (void)registerForAccountNotifications;
- (void)checkNetworkReachability;
- (void)unregisterFromNetworkReachability;
- (void)registerForNetworkReachability;
- (void)fetchRepairContainerMetadata;
- (void)closeSyncEngine;
- (void)openSyncEngine;
- (void)cancelScheduledEvent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)finishSchedulerCallbackWithDeferral:(_Bool)arg1;
- (void)registerForRepairScheduler;
- (_Bool)canPerformFunction:(long long)arg1;
- (void)dispatchEvent:(long long)arg1;
- (void)respondToStateMachineChangeState:(long long)arg1 enter:(_Bool)arg2;
- (void)respondToStateMachineAction:(long long)arg1 isRetry:(_Bool)arg2;
- (id)createStateMachine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
