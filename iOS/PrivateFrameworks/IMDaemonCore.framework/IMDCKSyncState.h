//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMKeyValueCollectionDelegate-Protocol.h>

@class IMKeyValueCollection, NSArray, NSDate, NSDictionary, NSString;
@protocol IMDCKSyncStateDelegate;

@interface IMDCKSyncState : NSObject <IMKeyValueCollectionDelegate>
{
    IMKeyValueCollection *_storage;
    id <IMDCKSyncStateDelegate> _delegate;
}

+ (void)removeBuildObjectsFromDict:(id)arg1;
+ (id)logHandle;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IMDCKSyncStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IMKeyValueCollection *keyValueCollection; // @synthesize keyValueCollection=_storage;
- (void)setErrorToKeyRollingError;
- (void)setErrorToAccountNeedsRepair;
- (void)broadcastSyncState;
- (id)serializedRepresentation;
- (void)keyValueCollection:(id)arg1 didUpdateValues:(id)arg2;
- (void)keyValueCollection:(id)arg1 willUpdateValues:(id)arg2;
- (void)setSyncControllerSyncState:(unsigned long long)arg1 withRecordType:(long long)arg2;
- (void)setStartingInitialSyncWithRecordType:(long long)arg1;
- (void)setStartingPeriodicSyncWithRecordType:(long long)arg1;
- (void)_setStartingSync;
- (void)clearLocalCloudKitSyncState;
- (void)setSyncingFinished;
@property(readonly, copy) NSString *description;
- (id)syncReportDictionaryForAttempt:(unsigned long long)arg1 withSuccess:(_Bool)arg2;
- (id)syncReportDictionary;
- (id)syncUserType;
- (_Bool)_shouldReportNewUserIfCreatedChatZones:(_Bool)arg1 deletedZones:(_Bool)arg2;
- (id)_describeErrors:(id)arg1;
- (id)describeErrors;
- (id)getAnalyticSyncDatesObjectForKey:(id)arg1;
- (void)setAnalyticSyncDatesDictionaryObject:(id)arg1 forKey:(id)arg2 shouldOverrideIfExists:(_Bool)arg3;
- (void)removeObjectFromAnalyticSyncDatesDictionaryForKey:(id)arg1;
- (void)_removeObjectForKey:(id)arg1 forDictionary:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2 forDictionary:(id)arg3 shouldSetBuild:(_Bool)arg4;
- (void)_finishBatchChange;
- (void)_startBatchChange;
- (void)addSyncError:(id)arg1;
- (void)clearSyncErrors;
@property(readonly, nonatomic) NSArray *syncErrors;
@property(nonatomic) long long accountStatus; // @dynamic accountStatus;
@property(nonatomic) long long syncControllerRecordType; // @dynamic syncControllerRecordType;
@property(nonatomic) long long syncControllerSyncType; // @dynamic syncControllerSyncType;
@property(nonatomic) unsigned long long syncControllerSyncState; // @dynamic syncControllerSyncState;
@property(copy, nonatomic) NSDictionary *analyticSyncDatesDictionary; // @dynamic analyticSyncDatesDictionary;
@property(copy, nonatomic) NSDate *lastSyncDate; // @dynamic lastSyncDate;
@property(copy, nonatomic) NSDate *exitDate; // @dynamic exitDate;
@property(nonatomic, getter=isStartingInitialSyncSetByCloudKitHooks) _Bool startingInitialSyncSetByCloudKitHooks; // @dynamic startingInitialSyncSetByCloudKitHooks;
@property(nonatomic, getter=isStartingPeriodicSyncSetByCloudKitHooks) _Bool startingPeriodicSyncSetByCloudKitHooks; // @dynamic startingPeriodicSyncSetByCloudKitHooks;
@property(nonatomic, getter=isStartingEnabledSettingChange) _Bool startingEnabledSettingChange; // @dynamic startingEnabledSettingChange;
@property(nonatomic, getter=isDisablingDevices) _Bool disablingDevices; // @dynamic disablingDevices;
@property(nonatomic, getter=isSyncingPaused) _Bool syncingPaused; // @dynamic syncingPaused;
@property(nonatomic, getter=isInExitState) _Bool inExitState; // @dynamic inExitState;
@property(nonatomic, getter=isRemovedFromBackup) _Bool removedFromBackup; // @dynamic removedFromBackup;
@property(nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled; // @dynamic syncingEnabled;
@property(nonatomic, getter=isEligibleForTruthZone) _Bool eligibleForTruthZone; // @dynamic eligibleForTruthZone;
@property(nonatomic, getter=isSyncing) _Bool syncing; // @dynamic syncing;
@property(nonatomic, getter=isFeatureEnabled) _Bool featureEnabled; // @dynamic featureEnabled;
@property(nonatomic) _Bool deletedZones; // @dynamic deletedZones;
@property(nonatomic) _Bool createdChatZone; // @dynamic createdChatZone;
- (id)logHandle;
- (id)init;
- (id)initWithKeyValueCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
