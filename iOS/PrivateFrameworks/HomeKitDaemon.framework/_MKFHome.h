//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, HMDHomeNFCReaderKey, HMDNaturalLightingContext, HMFSoftwareVersion, MKFHomeDatabaseID, MKFResidentSyncMetadata, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFApplicationData, MKFDevice, MKFHomeThreadNetwork, MKFRoom, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFHome
{
}

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
- (void)synchronizeZonesRelationWith:(id)arg1;
- (id)findZonesRelationWithModelID:(id)arg1;
- (id)materializeOrCreateZonesRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
@property(readonly, retain, nonatomic) NSArray *zones;
- (void)synchronizeUsersRelationWith:(id)arg1;
- (id)findUsersRelationWithModelID:(id)arg1;
- (id)materializeOrCreateUsersRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
@property(readonly, retain, nonatomic) NSArray *users;
- (void)synchronizeTriggersRelationWith:(id)arg1;
- (id)findTriggersRelationOfTypeTimerTriggerWithModelID:(id)arg1;
- (id)createTriggersRelationOfTypeTimerTriggerWithModelID:(id)arg1;
- (id)materializeOrCreateTriggersRelationOfTypeTimerTriggerWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
- (id)findTriggersRelationOfTypeEventTriggerWithModelID:(id)arg1;
- (id)createTriggersRelationOfTypeEventTriggerWithModelID:(id)arg1;
- (id)materializeOrCreateTriggersRelationOfTypeEventTriggerWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
- (id)createTriggersRelationOfType:(id)arg1 modelID:(id)arg2;
- (id)materializeOrCreateTriggersRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;
@property(readonly, retain, nonatomic) NSArray *triggers;
- (id)materializeOrCreateThreadNetworkRelation:(_Bool *)arg1;
- (id)findSettingsRelationOfTypeHomeSoftwareUpdateSetting;
- (id)materializeOrCreateSettingsRelationOfTypeHomeSoftwareUpdateSetting:(_Bool *)arg1;
- (id)findSettingsRelationOfTypeHomePersonManagerSetting;
- (id)materializeOrCreateSettingsRelationOfTypeHomePersonManagerSetting:(_Bool *)arg1;
- (id)findSettingsRelationOfTypeHomeNetworkRouterSetting;
- (id)materializeOrCreateSettingsRelationOfTypeHomeNetworkRouterSetting:(_Bool *)arg1;
- (id)findSettingsRelationOfTypeHomeNetworkRouterManagingDeviceSetting;
- (id)materializeOrCreateSettingsRelationOfTypeHomeNetworkRouterManagingDeviceSetting:(_Bool *)arg1;
- (id)findSettingsRelationOfTypeHomeMediaSetting;
- (id)materializeOrCreateSettingsRelationOfTypeHomeMediaSetting:(_Bool *)arg1;
@property(readonly, retain, nonatomic) NSArray *settings;
- (void)synchronizeServiceGroupsRelationWith:(id)arg1;
- (id)findServiceGroupsRelationWithModelID:(id)arg1;
- (id)materializeOrCreateServiceGroupsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
@property(readonly, retain, nonatomic) NSArray *serviceGroups;
- (void)synchronizeRoomsRelationWith:(id)arg1;
- (id)findRoomsRelationWithModelID:(id)arg1;
- (id)materializeOrCreateRoomsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
@property(readonly, retain, nonatomic) NSArray *rooms;
- (void)removeResidentsObject:(id)arg1;
- (void)addResidentsObject:(id)arg1;
- (id)findResidentsRelationWithModelID:(id)arg1;
- (id)materializeOrCreateResidentsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
@property(readonly, retain, nonatomic) NSArray *residents;
- (void)removeRemovedAccessCodesObject:(id)arg1;
- (void)addRemovedAccessCodesObject:(id)arg1;
- (id)findRemovedAccessCodesRelationWithModelID:(id)arg1;
- (id)materializeOrCreateRemovedAccessCodesRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
@property(readonly, retain, nonatomic) NSArray *removedAccessCodes;
- (void)removePersonsObject:(id)arg1;
- (void)addPersonsObject:(id)arg1;
- (id)findPersonsRelationWithModelID:(id)arg1;
- (id)materializeOrCreatePersonsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
@property(readonly, retain, nonatomic) NSArray *persons;
- (id)materializeOrCreateNetworkProtectionGroupsRelation:(_Bool *)arg1;
@property(readonly, retain, nonatomic) NSArray *networkProtectionGroups;
- (void)synchronizeInvitationsRelationWith:(id)arg1;
- (id)findInvitationsRelationWithModelID:(id)arg1;
- (id)materializeOrCreateInvitationsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
@property(readonly, retain, nonatomic) NSArray *invitations;
- (void)removeGuestAccessCodesObject:(id)arg1;
- (void)addGuestAccessCodesObject:(id)arg1;
- (id)findGuestAccessCodesRelationWithModelID:(id)arg1;
- (id)materializeOrCreateGuestAccessCodesRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
@property(readonly, retain, nonatomic) NSArray *guestAccessCodes;
- (id)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;
- (void)synchronizeActionSetsRelationWith:(id)arg1;
- (id)findActionSetsRelationWithModelID:(id)arg1;
- (id)materializeOrCreateActionSetsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
@property(readonly, retain, nonatomic) NSArray *actionSets;
- (void)synchronizeAccessoriesRelationWith:(id)arg1;
- (id)findAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)arg1;
- (id)createAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)arg1;
- (id)materializeOrCreateAccessoriesRelationOfTypeHAPAccessoryWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
- (id)findAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)arg1;
- (id)createAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)arg1;
- (id)materializeOrCreateAccessoriesRelationOfTypeAppleMediaAccessoryWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
- (id)findAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)arg1;
- (id)createAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)arg1;
- (id)materializeOrCreateAccessoriesRelationOfTypeAirPlayAccessoryWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
- (id)createAccessoriesRelationOfType:(id)arg1 modelID:(id)arg2;
- (id)materializeOrCreateAccessoriesRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;
@property(readonly, retain, nonatomic) NSArray *accessories;
- (id)castIfHome;
@property(readonly, copy, nonatomic) MKFHomeDatabaseID *databaseID;
@property(copy) NSNumber *audioAnalysisClassifierOptions;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;
- (_Bool)residentSyncClientDidSync;
- (id)accessoryWithModelID:(id)arg1 context:(id)arg2;
@property(copy) NSNumber *eventLogDuration;
@property(copy) NSNumber *eventLogEnabled;
@property(copy) NSNumber *didOnboardEventLog;
- (id)guestAccessCode:(id)arg1 withLabel:(id)arg2 context:(id)arg3;
- (void)residentSyncContextualizeConditions:(id)arg1 userContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSSet *accessories_; // @dynamic accessories_;
@property(retain, nonatomic) NSSet *actionSets_; // @dynamic actionSets_;
@property(copy, nonatomic) NSNumber *analysisOptions; // @dynamic analysisOptions;
@property(retain, nonatomic) id <MKFApplicationData> applicationData; // @dynamic applicationData;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) id <MKFRoom> defaultRoom; // @dynamic defaultRoom;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *didOnboardAnalysis; // @dynamic didOnboardAnalysis;
@property(copy, nonatomic) NSNumber *didOnboardLocationServices; // @dynamic didOnboardLocationServices;
@property(copy, nonatomic) NSNumber *didOnboardMemory; // @dynamic didOnboardMemory;
@property(copy, nonatomic) NSNumber *doorbellChimeEnabled; // @dynamic doorbellChimeEnabled;
@property(copy, nonatomic) NSDate *firstHAPAccessoryAddedDate; // @dynamic firstHAPAccessoryAddedDate;
@property(retain, nonatomic) NSSet *guestAccessCodes_; // @dynamic guestAccessCodes_;
@property(copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding; // @dynamic hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property(copy, nonatomic) NSNumber *hasOnboardedForAccessCode; // @dynamic hasOnboardedForAccessCode;
@property(copy, nonatomic) NSNumber *hasOnboardedForWalletKey; // @dynamic hasOnboardedForWalletKey;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(retain, nonatomic) NSSet *invitations_; // @dynamic invitations_;
@property(retain, nonatomic) CLLocation *location; // @dynamic location;
@property(copy, nonatomic) NSNumber *locationServicesEnabled; // @dynamic locationServicesEnabled;
@property(copy, nonatomic) NSDate *locationUpdateTimeStamp; // @dynamic locationUpdateTimeStamp;
@property(retain, nonatomic) NSDictionary *matterKeyValueStore; // @dynamic matterKeyValueStore;
@property(copy, nonatomic) NSNumber *memoryDuration; // @dynamic memoryDuration;
@property(copy, nonatomic) NSNumber *memoryEnabled; // @dynamic memoryEnabled;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSNumber *multiUserEnabled; // @dynamic multiUserEnabled;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) HMDNaturalLightingContext *naturalLightingContext; // @dynamic naturalLightingContext;
@property(retain, nonatomic) NSSet *networkProtectionGroups_; // @dynamic networkProtectionGroups_;
@property(copy, nonatomic) NSNumber *networkProtectionMode; // @dynamic networkProtectionMode;
@property(retain, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey; // @dynamic nfcReaderKey;
@property(copy, nonatomic) NSNumber *owned; // @dynamic owned;
@property(retain, nonatomic) id <MKFUser> owner; // @dynamic owner;
@property(retain, nonatomic) NSData *ownerPublicKey; // @dynamic ownerPublicKey;
@property(retain, nonatomic) NSSet *persons_; // @dynamic persons_;
@property(copy, nonatomic) NSNumber *presenceAuthorizationStatus; // @dynamic presenceAuthorizationStatus;
@property(copy, nonatomic) NSNumber *presenceComputeStatus; // @dynamic presenceComputeStatus;
@property(retain, nonatomic) id <MKFDevice> primaryResident; // @dynamic primaryResident;
@property(retain, nonatomic) NSSet *removedAccessCodes_; // @dynamic removedAccessCodes_;
@property(retain, nonatomic) MKFResidentSyncMetadata *residentSyncMetadata; // @dynamic residentSyncMetadata;
@property(retain, nonatomic) NSSet *residents_; // @dynamic residents_;
@property(retain, nonatomic) NSSet *rooms_; // @dynamic rooms_;
@property(retain, nonatomic) NSSet *serviceGroups_; // @dynamic serviceGroups_;
@property(retain, nonatomic) NSSet *settings_; // @dynamic settings_;
@property(retain, nonatomic) HMFSoftwareVersion *sharedHomeSourceVersion; // @dynamic sharedHomeSourceVersion;
@property(copy, nonatomic) NSNumber *siriPhraseOptions; // @dynamic siriPhraseOptions;
@property(copy, nonatomic) NSNumber *soundCheckEnabled; // @dynamic soundCheckEnabled;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <MKFHomeThreadNetwork> threadNetwork; // @dynamic threadNetwork;
@property(retain, nonatomic) NSSet *triggers_; // @dynamic triggers_;
@property(retain, nonatomic) NSSet *users_; // @dynamic users_;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(retain, nonatomic) NSSet *zones_; // @dynamic zones_;

@end

