//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMCContext, HMFFuture, HMFPromise, NSHashTable, NSMapTable, NSObject, NSPersistentCloudKitContainer, NSPersistentStore, NSPersistentStoreCoordinator, NSSet, NSString, NSXPCStoreServer;
@protocol HMDCoreDataNotificationCenter, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDCoreData : HMFObject
{
    NSObject<OS_os_log> *_logger;
    struct os_unfair_lock_s _lock;
    unsigned long long _setupSignpostID;
    _Bool _firstCloudKitImportComplete;
    _Bool _usingLiveCloudKit;
    NSPersistentCloudKitContainer *_container;
    NSPersistentStore *_workingStore;
    NSPersistentStore *_cloudPrivateStore;
    NSPersistentStore *_cloudSharedStore;
    NSPersistentStore *_localStore;
    NSXPCStoreServer *_xpcStoreServer;
    NSHashTable *_listeners;
    NSMapTable *_contexts;
    HMFPromise *_firstCloudKitImportPromise;
    id <HMDCoreDataNotificationCenter> _notificationCenter;
    HMFFuture *_firstCloudKitImportFuture;
}

+ (id)logCategory;
+ (id)defaultPersistentStoreDescriptions;
+ (id)workingStoreDescription;
+ (id)localStoreDescription;
+ (id)cloudSharedStoreDescription;
+ (id)cloudPrivateStoreDescription;
+ (id)createWithPersistentStoreDescriptions:(id)arg1 notificationCenter:(id)arg2;
+ (id)createWithPersistentStoreDescriptions:(id)arg1;
+ (id)createWithDefaultPersistentStoresWithoutLiveCloudKit;
+ (id)managedObjectModel;
+ (void)cleanUpSharedInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMFFuture *firstCloudKitImportFuture; // @synthesize firstCloudKitImportFuture=_firstCloudKitImportFuture;
@property(readonly, nonatomic) id <HMDCoreDataNotificationCenter> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) NSPersistentStore *localStore;
@property(readonly, nonatomic) NSPersistentStore *cloudSharedStore;
@property(readonly, nonatomic) NSPersistentStore *cloudPrivateStore;
@property(readonly, nonatomic) NSPersistentStore *workingStore;
@property(readonly, nonatomic) NSPersistentCloudKitContainer *container; // @synthesize container=_container;
- (id)dumpCloudKitConfiguration:(_Bool)arg1 localConfiguration:(_Bool)arg2 workingConfiguration:(_Bool)arg3 includeFakeModels:(_Bool)arg4 context:(id)arg5 error:(id *)arg6;
- (id)dumpConfiguration:(id)arg1 includeFakeModels:(_Bool)arg2 context:(id)arg3 error:(id *)arg4;
- (void)removeNotificationListener:(id)arg1;
- (void)addNotificationListener:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *allContexts;
- (_Bool)isRelatedContext:(id)arg1;
- (id)contextWithHomeUUID:(id)arg1;
@property(readonly, nonatomic) HMCContext *contextWithRootPartition;
- (id)newManagedObjectContext;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
- (void)_handleDidResetSyncNotification:(id)arg1;
- (void)_handleWillResetSyncNotification:(id)arg1;
- (void)_handlePersistentCloudKitContainerEventChangedNotification:(id)arg1;
- (void)_handleChangeNotification:(id)arg1;
- (void)stopWatchingManagedObjectChanges;
- (void)startWatchingManagedObjectChanges;
- (id)initWithPersistentStoreDescriptions:(id)arg1 notificationCenter:(id)arg2;
- (id)initWithCloudKitContainer:(id)arg1 notificationCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

