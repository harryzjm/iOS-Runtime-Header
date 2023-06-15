//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeKitVersion, HMDHomeNFCReaderKey, MKFCKHAPAccessory, MKFCKRoom, MKFCKUser, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKHome
{
}

+ (id)createWithLocalModel:(id)arg1 context:(id)arg2;
+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;
+ (id)createWithModelID:(id)arg1 persistentStore:(id)arg2 context:(id)arg3;
+ (id)rootKeyPath;
+ (unsigned long long)cloudStoreTypes;
+ (id)_createHomeManagerContextFromContext:(id)arg1;
+ (id)_homeManagerContextFromContext:(id)arg1;
+ (id)_homeManagerHomeWithModelID:(id)arg1 homeManager:(id)arg2 context:(id)arg3;
+ (id)_encodeNetworkProtectionGroupModelID:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 targetProtectionMode:(id)arg4;
+ (id)_balanceFakeZonesForHome:(id)arg1 context:(id)arg2;
+ (id)_balanceFakeUsersForHome:(id)arg1 context:(id)arg2;
+ (void)_setPropertiesOnUser:(id)arg1 isOwner:(_Bool)arg2;
+ (id)_balanceFakeTriggersForHome:(id)arg1 context:(id)arg2;
+ (id)_balanceFakeScenesForHome:(id)arg1 context:(id)arg2;
+ (id)_balanceFakeRoomsForHome:(id)arg1 context:(id)arg2;
+ (id)_balanceFakeMediaAccessoriesForHome:(id)arg1 context:(id)arg2;
+ (id)_balanceFakeHAPAccessoriesForHome:(id)arg1 context:(id)arg2;
+ (void)_setCommonPropertiesOnAccessory:(id)arg1;
+ (id)_createFakeHomeInPersistentStore:(id)arg1 context:(id)arg2;
+ (void)_maybeDeleteFakeHomes:(id)arg1 context:(id)arg2;
+ (void)_maybeCreateFakeHomes:(id)arg1 context:(id)arg2;
+ (void)_rebalanceFakeHomesWithContext:(id)arg1;
+ (id)_encodeRemovedUserInfoWithUserID:(id)arg1 removedUserModelID:(id)arg2 userName:(id)arg3 dateRemoved:(id)arg4;
+ (id)__dictionaryFromRemovedUserAccessCodeDictionaryForUnitTest:(id)arg1 tombStonedPinCodes:(int)arg2;
+ (id)__removedUserInfoDictionaryForUnitTest:(id)arg1;
+ (id)__dictionaryFromGuestAccessCodeForUnitTest:(id)arg1 label:(id)arg2 userUniqueIDForAccessories:(id)arg3;
+ (id)__userUniqueIDForAccessoriesFromDictionaryForUnitTest:(id)arg1;
+ (id)__labelFromDictionaryForUnitTest:(id)arg1;
+ (id)__accessCodeFromDictionaryForUnitTest:(id)arg1;
+ (id)__dictionaryFromGuestAccessCodeDictionaryForUnitTest:(id)arg1 tombStonedPinCodes:(int)arg2;
+ (id)__dictionaryFromHMRemovedUserInfoForUnitTest:(id)arg1;
+ (id)__removedUserInfoFromDictionaryForUnitTest:(id)arg1;
+ (id)fetchRequest;
- (id)homeModelID;
- (long long)ensureCanonicalModel;
- (_Bool)_exportRelationshipsFromLocalModel:(id)arg1 localRelationship:(id)arg2 cloudRelationship:(id)arg3 cloudModels:(id)arg4 context:(id)arg5;
- (_Bool)_exportRelationshipsFromLocalHome:(id)arg1 localRelationship:(id)arg2 cloudRelationship:(id)arg3 context:(id)arg4;
- (_Bool)_exportRelationshipsFromLocalHome:(id)arg1 localRelationshipName:(id)arg2 context:(id)arg3;
- (void)_maybeDeleteStaleLocalModels:(id)arg1 modelIDKey:(id)arg2 context:(id)arg3;
- (void)_maybeDeleteStaleLocalModels:(id)arg1 context:(id)arg2;
- (_Bool)_importRelationshipsIntoLocalModel:(id)arg1 localRelationshipName:(id)arg2 context:(id)arg3;
- (void)awakeFromInsert;
- (_Bool)_exportHomeManagerWithContext:(id)arg1;
- (_Bool)_importHomeManagerWithContext:(id)arg1;
- (_Bool)_exportPersonsFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importPersonsIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportUsersFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importUsersIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)validateOwner:(id *)arg1 error:(id *)arg2;
- (_Bool)_exportNetworkProtectionGroupsFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importNetworkProtectionGroupsIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportSettingsFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importSettingsIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportRoomsFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importRoomsIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportApplicationDataFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importApplicationDataIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportTriggersFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importTriggersIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportScenesFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importScenesIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportResidentsFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importResidentsIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportMatterKeyValueStoreFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importMatterKeyValueStoreIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportZonesFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importZonesIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportAccessoriesFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importAccessoriesIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportInvitationOutgoingFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importInvitationOutgoingIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportServiceGroupsFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importServiceGroupsIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportPinCodesFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportRemovedUserAccessCodesFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_exportGuestAccessCodesFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importPinCodesIntoLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)_importRemovedUserAccessCodesIntoLocalModel:(id)arg1 context:(id)arg2;
- (id)_populateRemovedUserAccessCodeFromDictionary:(id)arg1 withAccessCode:(id)arg2 hh2ModelID:(id)arg3 home:(id)arg4 groupsByModelID:(id)arg5 context:(id)arg6;
- (_Bool)_importGuestAccessCodesIntoLocalModel:(id)arg1 context:(id)arg2;
- (id)_populateGuestAccessCodeWithDictionary:(id)arg1 hh2ModelID:(id)arg2 home:(id)arg3 groupsByModelID:(id)arg4 context:(id)arg5;

// Remaining properties
@property(retain, nonatomic) NSSet *accessories; // @dynamic accessories;
@property(retain, nonatomic) MKFCKHAPAccessory *activeNetworkRouter; // @dynamic activeNetworkRouter;
@property(nonatomic) long long analysisOptions; // @dynamic analysisOptions;
@property(retain, nonatomic) NSDictionary *applicationData; // @dynamic applicationData;
@property(nonatomic) _Bool automaticSoftwareUpdateEnabled; // @dynamic automaticSoftwareUpdateEnabled;
@property(nonatomic) _Bool automaticThirdPartyAccessorySoftwareUpdateEnabled; // @dynamic automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) MKFCKRoom *defaultRoom; // @dynamic defaultRoom;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool didOnboardAnalysis; // @dynamic didOnboardAnalysis;
@property(nonatomic) _Bool didOnboardLocationServices; // @dynamic didOnboardLocationServices;
@property(nonatomic) _Bool didOnboardMemory; // @dynamic didOnboardMemory;
@property(nonatomic) _Bool doorbellChimeEnabled; // @dynamic doorbellChimeEnabled;
@property(copy, nonatomic) NSDate *firstHAPAccessoryAddedDate; // @dynamic firstHAPAccessoryAddedDate;
@property(copy, nonatomic) NSUUID *flags; // @dynamic flags;
@property(retain, nonatomic) NSDictionary *guestAccessCodes; // @dynamic guestAccessCodes;
@property(nonatomic) _Bool hasAnyUserAcknowledgedCameraRecordingOnboarding; // @dynamic hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property(nonatomic) _Bool hasOnboardedForAccessCode; // @dynamic hasOnboardedForAccessCode;
@property(nonatomic) _Bool hasOnboardedForWalletKey; // @dynamic hasOnboardedForWalletKey;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDictionary *homeManagerApplicationData; // @dynamic homeManagerApplicationData;
@property(retain, nonatomic) NSSet *invitations; // @dynamic invitations;
@property(nonatomic) _Bool locationServicesEnabled; // @dynamic locationServicesEnabled;
@property(retain, nonatomic) NSDictionary *matterKeyValueStore; // @dynamic matterKeyValueStore;
@property(nonatomic) long long mediaMinimumUserPrivilege; // @dynamic mediaMinimumUserPrivilege;
@property(copy, nonatomic) NSString *mediaPassword; // @dynamic mediaPassword;
@property(nonatomic) _Bool mediaPeerToPeerEnabled; // @dynamic mediaPeerToPeerEnabled;
@property(nonatomic) _Bool memoryEnabled; // @dynamic memoryEnabled;
@property(retain, nonatomic) HMDHomeKitVersion *minimumHomeKitVersionForAccessoryNetworkProtectionChanges; // @dynamic minimumHomeKitVersionForAccessoryNetworkProtectionChanges;
@property(retain, nonatomic) HMDHomeKitVersion *minimumHomeKitVersionForNetworkRouterSupport; // @dynamic minimumHomeKitVersionForNetworkRouterSupport;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(nonatomic) _Bool multiUserEnabled; // @dynamic multiUserEnabled;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSArray *networkProtectionGroups; // @dynamic networkProtectionGroups;
@property(nonatomic) long long networkProtectionMode; // @dynamic networkProtectionMode;
@property(retain, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey; // @dynamic nfcReaderKey;
@property(retain, nonatomic) MKFCKUser *owner; // @dynamic owner;
@property(copy, nonatomic) NSUUID *personDataZoneUUID; // @dynamic personDataZoneUUID;
@property(retain, nonatomic) NSSet *persons; // @dynamic persons;
@property(nonatomic) long long primaryHomeCounter; // @dynamic primaryHomeCounter;
@property(retain, nonatomic) NSDictionary *removedUserAccessCodes; // @dynamic removedUserAccessCodes;
@property(retain, nonatomic) NSSet *residents; // @dynamic residents;
@property(retain, nonatomic) NSSet *rooms; // @dynamic rooms;
@property(retain, nonatomic) NSSet *scenes; // @dynamic scenes;
@property(retain, nonatomic) NSSet *serviceGroups; // @dynamic serviceGroups;
@property(nonatomic) long long siriPhraseOptions; // @dynamic siriPhraseOptions;
@property(nonatomic) _Bool soundCheckEnabled; // @dynamic soundCheckEnabled;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSSet *triggers; // @dynamic triggers;
@property(retain, nonatomic) NSSet *users; // @dynamic users;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;
@property(retain, nonatomic) NSSet *zones; // @dynamic zones;

@end

