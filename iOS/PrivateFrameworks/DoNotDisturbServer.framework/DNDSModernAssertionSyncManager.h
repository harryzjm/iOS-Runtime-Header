//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSAssertionSyncManager-Protocol.h>
#import <DoNotDisturbServer/DNDSSyncServiceUpdateListener-Protocol.h>

@class NSDate, NSDictionary, NSHashTable, NSString;
@protocol DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSSyncService, OS_dispatch_queue;

@interface DNDSModernAssertionSyncManager : NSObject <DNDSSyncServiceUpdateListener, DNDSAssertionSyncManager>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    id <DNDSSyncService> _syncService;
    NSDate *_invalidateAllModeAssertionsDate;
    unsigned long long _invalidateAllModeAssertionsReason;
    NSDictionary *_assertionsByUUID;
    id <DNDSAssertionSyncManagerDataSource> _dataSource;
    id <DNDSAssertionSyncManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <DNDSAssertionSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_queue_invalidateAllLocalModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2;
- (id)_queue_allModeAssertionsWithError:(id *)arg1;
- (id)_queue_assertionWithUUID:(id)arg1 error:(id *)arg2;
- (void)_queue_receivedRemoteSyncRecord:(id)arg1 remoteDeviceIdentifier:(id)arg2;
- (void)_queue_sendStateSnapshotToAllRemotes;
- (void)_queue_invalidateAllRemoteModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2;
- (void)syncService:(id)arg1 didReceiveRecord:(id)arg2 sourceIdentifier:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allModeAssertionsWithError:(id *)arg1;
- (id)assertionWithUUID:(id)arg1 error:(id *)arg2;
- (void)invalidateAllModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2;
- (void)updateForReason:(unsigned long long)arg1;
- (void)resume;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

