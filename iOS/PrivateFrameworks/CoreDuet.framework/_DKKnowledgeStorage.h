//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKCoreDataStorageDelegate-Protocol.h>
#import <CoreDuet/_DKKnowledgeDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeEventStreamDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeQuerying-Protocol.h>
#import <CoreDuet/_DKKnowledgeSaving-Protocol.h>

@class NSHashTable, NSString, NSURL, NSUUID, _DKCoreDataStorage, _DKTombstonePolicy;
@protocol OS_dispatch_queue;

@interface _DKKnowledgeStorage : NSObject <_DKCoreDataStorageDelegate, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>
{
    _Bool _localOnly;
    _DKCoreDataStorage *_syncStorage;
    NSUUID *_deviceUUID;
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    NSString *_directory;
    NSURL *_modelURL;
    NSHashTable *_knowledgeStorageEventNotificationDelegates;
    unsigned long long _insertsAndDeletesObserverCount;
    NSString *_clientID;
    _DKTombstonePolicy *_tombstonePolicy;
    NSObject<OS_dispatch_queue> *_executionQueue;
    _DKCoreDataStorage *_storage;
}

+ (id)sourceDeviceIdentityFromObject:(id)arg1;
+ (id)storageWithDirectory:(id)arg1 readOnly:(_Bool)arg2 localOnly:(_Bool)arg3;
+ (id)storageWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
+ (id)storeWithDirectory:(id)arg1 readOnly:(_Bool)arg2;
+ (id)storageWithShallowCopyFromStorage:(id)arg1 clientIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _DKCoreDataStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) _Bool localOnly; // @synthesize localOnly=_localOnly;
@property(retain) _DKTombstonePolicy *tombstonePolicy; // @synthesize tombstonePolicy=_tombstonePolicy;
- (id)syncStorageAssertion;
- (id)sourceDeviceIdentity;
@property(readonly, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
- (void)decrementInsertsAndDeletesObserverCount;
- (void)incrementInsertsAndDeletesObserverCount;
- (void)_databaseChangedWithNotification:(id)arg1;
- (id)lastChangeSetWithEntityName:(id)arg1 error:(id *)arg2;
- (void)startSyncUpToCloudWithResponseQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startSyncDownFromCloudWithResponseQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)lastSequenceNumberForChangeSetWithEntityName:(id)arg1 error:(id *)arg2;
- (_Bool)saveChangeSetsForSync:(id)arg1 error:(id *)arg2;
- (id)fetchSyncChangesSinceDate:(id)arg1 error:(id *)arg2;
- (id)fetchLocalChangesSinceDate:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteHistogram:(id)arg1;
- (void)saveHistogram:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)coreDataStorage:(id)arg1 didAutoMigratePersistentStore:(id)arg2 toManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)coreDataStorage:(id)arg1 willAutoMigrateStoreAtURL:(id)arg2 fromManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id *)arg5;
- (id)coreDataStorage:(id)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2;
- (_Bool)coreDataStorage:(id)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2;
- (_Bool)coreDataStorage:(id)arg1 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(unsigned long long)arg2;
- (void)closeSyncStorage;
- (void)closeStorage;
- (unsigned long long)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned long long)arg2 batchLimit:(unsigned long long)arg3;
- (unsigned long long)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)eventCountPerStreamName;
- (unsigned long long)eventCount;
- (unsigned long long)deleteOrphanedEntities;
- (unsigned long long)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned long long)arg1 excludingPredicate:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteObjectsOlderThanDate:(id)arg1 excludingPredicate:(id)arg2 limit:(unsigned long long)arg3;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)deleteObjects:(id)arg1 error:(id *)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)removeKnowledgeStorageEventNotificationDelegate:(id)arg1;
- (void)addKnowledgeStorageEventNotificationDelegate:(id)arg1;
- (_Bool)deleteSyncStorage;
- (_Bool)deleteStorage;
@property(readonly, nonatomic) _DKCoreDataStorage *syncStorage; // @synthesize syncStorage=_syncStorage;
- (void)removeSyncPeer:(id)arg1;
- (_Bool)saveSyncPeer:(id)arg1 error:(id *)arg2;
- (id)syncPeersWithError:(id *)arg1;
- (id)keyValueStoreForDomain:(id)arg1;

@end
