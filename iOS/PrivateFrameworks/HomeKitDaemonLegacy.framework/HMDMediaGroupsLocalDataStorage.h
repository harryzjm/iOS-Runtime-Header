//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaGroupsAggregatorBackupSender, NSArray, NSMutableDictionary, NSString, NSUUID;
@protocol HMDMediaGroupsLocalDataStorageDataSource;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsLocalDataStorage : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_groups;
    NSMutableDictionary *_participantAccessoryUUIDToAssociatedGroupIdentifier;
    id <HMDMediaGroupsLocalDataStorageDataSource> _dataSource;
    NSUUID *_identifier;
    HMDMediaGroupsAggregatorBackupSender *_backupDataSender;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDMediaGroupsAggregatorBackupSender *backupDataSender; // @synthesize backupDataSender=_backupDataSender;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaGroupsLocalDataStorageDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;
- (id)receiverForParticipantAccessoryUUID:(id)arg1 mediaGroupsAggregatorBackupSender:(id)arg2;
- (id)routerForParticipantAccessoryUUID:(id)arg1 mediaGroupsAggregatorBackupSender:(id)arg2;
- (id)backupGroupsForParticipantAccessoryUUID:(id)arg1 mediaGroupsAggregatorBackupSender:(id)arg2;
- (id)receiverForParticipantAccessoryUUID:(id)arg1;
- (id)routerForParticipantAccessoryUUID:(id)arg1;
- (void)removeGroupWithIdentifier:(id)arg1;
- (void)updateGroup:(id)arg1;
- (void)addBackedUpGroup:(id)arg1;
- (void)addBackedUpGroups:(id)arg1;
- (id)groupWithIdentifier:(id)arg1;
@property(readonly) NSArray *groups;
- (void)setParticipantAccessoryUUID:(id)arg1 associatedGroupIdentifier:(id)arg2;
- (id)nullSentinelUUID;
- (void)unsetParticipantAccessoryUUIDsWithAssociatedGroupIdentifier:(id)arg1;
- (id)associatedGroupIdentifierForParticipantAccessoryUUID:(id)arg1;
- (void)removeAssociatedGroupIdentifierForParticipantAccessoryUUID:(id)arg1;
- (id)allParticipantAccessoryUUIDs;
- (void)clearCachedDataForParticipantAccessoryUUID:(id)arg1;
- (void)clearCachedData;
- (id)associatedGroupsWithGroupIdentifier:(id)arg1;
- (id)backupGroupsForParticipantAccessoryUUID:(id)arg1;
- (void)backupData;
- (void)updateGroup:(id)arg1 participantAccessoryUUIDs:(id)arg2;
- (void)updateUsingParticipantAccessoryUUID:(id)arg1 associatedGroupIdentifier:(id)arg2 backedUpGroupData:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backupSender:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

