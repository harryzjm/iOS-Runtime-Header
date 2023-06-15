//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabase : NSObject
{
    NSString *_containerId;
    AMSSQLiteConnection *_connection;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedDatabaseWithContainerId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
- (void)_performTransaction:(CDUnknownBlockType)arg1;
- (id)_lockedById;
- (id)_cachePath;
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;
- (_Bool)removeCrossDeviceIdentifiersWithError:(id *)arg1;
- (_Bool)permanentlyRemoveIdentifierForKey:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateUnsyncedIdentifiersUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)enumerateUnsyncedIdentifierStoresUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)clearIdentifierSyncStateWithError:(id *)arg1;
- (id)identifierForKey:(id)arg1 updateMaybe:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)identifierStoreForKey:(id)arg1 updateMaybe:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)removeIdentifiersForAccount:(id)arg1 error:(id *)arg2;
- (_Bool)cleanupInvalidIdentifiersWithError:(id *)arg1;
- (_Bool)unlockEvents:(id)arg1 error:(id *)arg2;
- (_Bool)unlockAllEventsWithKey:(id)arg1 error:(id *)arg2;
- (id)lockAllEventsWithError:(id *)arg1;
- (_Bool)insertEvents:(id)arg1 error:(id *)arg2;
- (void)enumerateEventsWithTopic:(id)arg1 lockKey:(id)arg2 objectBlock:(CDUnknownBlockType)arg3;
- (_Bool)dropEvents:(id)arg1 error:(id *)arg2;
- (_Bool)dropAllEventsWithLockKey:(id)arg1 error:(id *)arg2;
- (long long)countAllEventsWithLockKey:(id)arg1 error:(id *)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithContainerId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

