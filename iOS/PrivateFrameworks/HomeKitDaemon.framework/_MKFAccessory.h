//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFAccessoryDatabaseID, NSArray, NSData, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFAccessory, MKFApplicationData, MKFHome, MKFRoom, MKFSoftwareUpdate;

__attribute__((visibility("hidden")))
@interface _MKFAccessory
{
}

+ (id)backingModelProtocol;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
- (void)removeUsersWithPersonalRequestsEnabledObject:(id)arg1;
- (void)addUsersWithPersonalRequestsEnabledObject:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *usersWithPersonalRequestsEnabled;
- (void)removeUsersWithMediaContentProfileEnabledObject:(id)arg1;
- (void)addUsersWithMediaContentProfileEnabledObject:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *usersWithMediaContentProfileEnabled;
- (void)removeUsersWithListeningHistoryEnabledObject:(id)arg1;
- (void)addUsersWithListeningHistoryEnabledObject:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *usersWithListeningHistoryEnabled;
- (id)materializeOrCreateSoftwareUpdateRelation:(_Bool *)arg1;
@property(readonly, retain, nonatomic) NSArray *mediaPropertyNotificationRegistrations;
- (void)removeHostedAccessoriesObject:(id)arg1;
- (void)addHostedAccessoriesObject:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *hostedAccessories;
@property(readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property(readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property(readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
- (id)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;
@property(readonly, retain, nonatomic) NSArray *analysisEventBulletinRegistrations;
@property(readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
- (id)castIfAccessory;
@property(readonly, copy, nonatomic) MKFAccessoryDatabaseID *databaseID;

// Remaining properties
@property(copy, nonatomic) NSNumber *accessoryCategory; // @dynamic accessoryCategory;
@property(retain, nonatomic) NSSet *actionMediaPlaybacks_; // @dynamic actionMediaPlaybacks_;
@property(retain, nonatomic) NSSet *analysisEventBulletinRegistrations_; // @dynamic analysisEventBulletinRegistrations_;
@property(retain, nonatomic) id <MKFApplicationData> applicationData; // @dynamic applicationData;
@property(retain, nonatomic) NSArray *appliedFirewallWANRules; // @dynamic appliedFirewallWANRules;
@property(retain, nonatomic) NSSet *cameraAccessModeBulletinRegistrations_; // @dynamic cameraAccessModeBulletinRegistrations_;
@property(retain, nonatomic) NSSet *cameraReachabilityBulletinRegistrations_; // @dynamic cameraReachabilityBulletinRegistrations_;
@property(retain, nonatomic) NSSet *cameraSignificantEventBulletinRegistrations_; // @dynamic cameraSignificantEventBulletinRegistrations_;
@property(copy, nonatomic) NSString *configurationAppIdentifier; // @dynamic configurationAppIdentifier;
@property(copy, nonatomic) NSString *configuredName; // @dynamic configuredName;
@property(copy, nonatomic) NSNumber *currentNetworkProtectionMode; // @dynamic currentNetworkProtectionMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *firmwareVersion; // @dynamic firmwareVersion;
@property(copy, nonatomic) NSUUID *groupIdentifier; // @dynamic groupIdentifier;
@property(copy, nonatomic) NSString *groupName; // @dynamic groupName;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(retain, nonatomic) id <MKFAccessory> hostAccessory; // @dynamic hostAccessory;
@property(retain, nonatomic) NSSet *hostedAccessories_; // @dynamic hostedAccessories_;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSNumber *initialCategoryIdentifier; // @dynamic initialCategoryIdentifier;
@property(copy, nonatomic) NSString *initialManufacturer; // @dynamic initialManufacturer;
@property(copy, nonatomic) NSString *initialModel; // @dynamic initialModel;
@property(copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970; // @dynamic lastNetworkAccessViolationOccurrenceSince1970;
@property(copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970; // @dynamic lastNetworkAccessViolationResetSince1970;
@property(copy, nonatomic) NSDate *lastSeenDate; // @dynamic lastSeenDate;
@property(copy, nonatomic) NSNumber *lowBattery; // @dynamic lowBattery;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(retain, nonatomic) NSSet *mediaPropertyNotificationRegistrations_; // @dynamic mediaPropertyNotificationRegistrations_;
@property(copy, nonatomic) NSString *model; // @dynamic model;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSNumber *networkClientIdentifier; // @dynamic networkClientIdentifier;
@property(copy, nonatomic) NSNumber *networkClientLAN; // @dynamic networkClientLAN;
@property(copy, nonatomic) NSString *networkClientProfileFingerprint; // @dynamic networkClientProfileFingerprint;
@property(copy, nonatomic) NSString *networkRouterUUID; // @dynamic networkRouterUUID;
@property(copy, nonatomic) NSString *pendingConfigurationIdentifier; // @dynamic pendingConfigurationIdentifier;
@property(copy, nonatomic) NSString *primaryProfileVersion; // @dynamic primaryProfileVersion;
@property(copy, nonatomic) NSString *productData; // @dynamic productData;
@property(copy, nonatomic) NSString *providedName; // @dynamic providedName;
@property(retain, nonatomic) id <MKFRoom> room; // @dynamic room;
@property(copy, nonatomic) NSString *serialNumber; // @dynamic serialNumber;
@property(retain, nonatomic) id <MKFSoftwareUpdate> softwareUpdate; // @dynamic softwareUpdate;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *suspendCapable; // @dynamic suspendCapable;
@property(retain, nonatomic) NSSet *usersWithListeningHistoryEnabled_; // @dynamic usersWithListeningHistoryEnabled_;
@property(retain, nonatomic) NSSet *usersWithMediaContentProfileEnabled_; // @dynamic usersWithMediaContentProfileEnabled_;
@property(retain, nonatomic) NSSet *usersWithPersonalRequestsEnabled_; // @dynamic usersWithPersonalRequestsEnabled_;
@property(copy, nonatomic) NSNumber *wiFiCredentialType; // @dynamic wiFiCredentialType;
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey; // @dynamic wiFiUniquePreSharedKey;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

