//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSCachedBackingStoreDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSContactMonitorListener-Protocol.h>
#import <DoNotDisturbServer/DNDSIDSSyncEngineDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSModeConfigurationsStoring-Protocol.h>
#import <DoNotDisturbServer/DNDSSyncEngineDataSource-Protocol.h>

@class DNDSIDSSyncEngine, DNDSSyncEngine, NSData, NSSet, NSString;
@protocol DNDSBackingStore, DNDSContactMonitoring, DNDSModeConfigurationsStoreDelegate;

@interface DNDSModeConfigurationsStore : NSObject <DNDSCachedBackingStoreDelegate, DNDSSyncEngineDataSource, DNDSIDSSyncEngineDataSource, DNDSModeConfigurationsStoring, DNDSContactMonitorListener>
{
    id <DNDSBackingStore> _backingStore;
    id <DNDSContactMonitoring> _contactMonitor;
    DNDSSyncEngine *_syncEngine;
    DNDSIDSSyncEngine *_idsSyncEngine;
    NSData *_contactHistoryToken;
    struct os_unfair_lock_s _lock;
    id <DNDSModeConfigurationsStoreDelegate> _delegate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *contactHistoryToken; // @synthesize contactHistoryToken=_contactHistoryToken;
@property(nonatomic) __weak id <DNDSModeConfigurationsStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_purgeRecordIDs:(id)arg1;
- (void)_purgeData;
- (void)_notifyDelegateOfAvailableModes;
- (id)_lock_recordIDsForIDSSyncEngine:(id)arg1;
- (id)_lock_modeIdentifiers;
- (void)_lock_purgeData;
- (void)_lock_purgeRecordIDs:(id)arg1;
- (unsigned long long)_lock_writeRecord:(id)arg1 writePartition:(_Bool)arg2 error:(id *)arg3;
- (void)_lock_updateModeConfigurationWithConfiguration:(id)arg1;
- (void)_lock_updateModeConfigurationWithCKRecord:(id)arg1;
- (void)_lock_updateModeConfigurationWithDNDSIDSRecord:(id)arg1;
- (void)_lock_removeModeConfigurationWithModeIdentifier:(id)arg1;
- (void)_lock_removeModeConfigurationWithCKRecordID:(id)arg1;
- (id)_lock_modeConfigurationForModeIdentifier:(id)arg1;
- (id)_lock_modeConfigurationForCKRecordID:(id)arg1;
- (id)_lock_modeConfigurationForDNDSIDSRecordID:(id)arg1;
- (_Bool)_lock_populateCKRecord:(id)arg1;
- (_Bool)_lock_populateDNDSIDSRecord:(id)arg1;
- (id)_lock_existingConfigurations;
- (id)_lock_mutableExistingConfigurations;
- (void)contactMonitor:(id)arg1 didReceiveUpdatedContacts:(id)arg2 deletedContactIdentifiers:(id)arg3 withContactHistoryToken:(id)arg4;
- (void)contactMonitor:(id)arg1 didReceiveUpdatedContactsForContactsWithoutIdentifiers:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *monitoredContacts;
- (void)purgeRecordsForIDSSyncEngine:(id)arg1;
- (id)recordIDsForIDSSyncEngine:(id)arg1;
- (void)idsSyncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2;
- (void)idsSyncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)idsSyncEngine:(id)arg1 prepareRecordToSave:(inout id)arg2;
- (void)purgeRecordsForSyncEngine:(id)arg1;
- (id)recordIDsForSyncEngine:(id)arg1;
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2 removingRecordIDs:(id)arg3;
- (id)syncEngine:(id)arg1 recordTypeForRecordID:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2;
- (_Bool)syncEngine:(id)arg1 prepareRecordToSave:(inout id)arg2;
- (void)syncEngine:(id)arg1 resolveConflictBetweenClientRecord:(id)arg2 andServerRecord:(id)arg3;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (_Bool)syncEngine:(id)arg1 wantsRecord:(id)arg2;
- (void)cachedBackingStoreDidPurgeCache:(id)arg1;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (unsigned long long)writeRecord:(id)arg1 writePartition:(_Bool)arg2 error:(id *)arg3;
- (unsigned long long)writeRecord:(id)arg1 error:(id *)arg2;
- (id)readRecordWithError:(id *)arg1;
- (id)initWithBackingStore:(id)arg1 syncEngine:(id)arg2 idsSyncEngine:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
