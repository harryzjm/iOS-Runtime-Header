//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMDAccessoryNetworkAccessViolation, HMDAccessoryVersion, HMDApplicationData, HMDHome, HMDNetworkRouterFirewallRuleAccessoryIdentifier, HMDRoom, HMDSoftwareUpdate, HMDUserManagementOperationTimestamp, HMDVendorModelEntry, HMFMessageDispatcher, HMFVersion, NSArray, NSData, NSMutableSet, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDAccessory : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMDHomeMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging>
{
    id <HMFLocking> _lock;
    _Bool _primary;
    _Bool _reachable;
    _Bool _remotelyReachable;
    NSMutableSet *_accessoryProfiles;
    _Bool _reachabilityPingEnabled;
    _Bool _reachablilityPingNotificationEnabled;
    _Bool _suspended;
    _Bool _suspendCapable;
    _Bool _remoteAccessEnabled;
    _Bool _custom1WoBLE;
    _Bool _custom1WoWLAN;
    NSString *_identifier;
    HMDRoom *_room;
    NSString *_model;
    NSString *_initialModel;
    NSString *_manufacturer;
    NSString *_initialManufacturer;
    HMDAccessoryVersion *_firmwareVersion;
    NSString *_serialNumber;
    HMDApplicationData *_appData;
    NSString *_productData;
    unsigned long long _configNumber;
    NSNumber *_networkClientIdentifier;
    NSUUID *_networkRouterUUID;
    long long _currentNetworkProtectionMode;
    long long _networkClientLAN;
    NSUUID *_networkClientProfileFingerprint;
    long long _wiFiCredentialType;
    NSArray *_allowedHosts;
    NSData *_wiFiUniquePreSharedKey;
    NSUUID *_configuredNetworkProtectionGroupUUID;
    NSUUID *_defaultNetworkProtectionGroupUUID;
    HMFVersion *_primaryProfileVersion;
    NSNumber *_initialCategoryIdentifier;
    HMDSoftwareUpdate *_softwareUpdate;
    HMDUserManagementOperationTimestamp *_sharedAdminAddedTimestamp;
    HMDUserManagementOperationTimestamp *_pairingsAuditedTimestamp;
    NSUUID *_uuid;
    HMAccessoryCategory *_category;
    HMDHome *_home;
    NSString *_providedName;
    NSString *_configurationAppIdentifier;
    HMDAccessoryNetworkAccessViolation *_networkAccessViolation;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSNumber *_categoryIdentifier;
    NSString *_configuredName;
    unsigned long long _accessoryReprovisionState;
    double _lastPairingFailureTime;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (_Bool)splitProductDataIntoProductGroupAndProductNumber:(id)arg1 productGroup:(id *)arg2 productNumber:(id *)arg3;
+ (_Bool)validateProductData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double lastPairingFailureTime; // @synthesize lastPairingFailureTime=_lastPairingFailureTime;
@property(nonatomic) _Bool custom1WoWLAN; // @synthesize custom1WoWLAN=_custom1WoWLAN;
@property(nonatomic) _Bool custom1WoBLE; // @synthesize custom1WoBLE=_custom1WoBLE;
@property(nonatomic) unsigned long long accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic, getter=isRemoteAccessEnabled) _Bool remoteAccessEnabled; // @synthesize remoteAccessEnabled=_remoteAccessEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMDAccessoryNetworkAccessViolation *networkAccessViolation; // @synthesize networkAccessViolation=_networkAccessViolation;
@property(nonatomic, getter=isSuspendCapable) _Bool suspendCapable; // @synthesize suspendCapable=_suspendCapable;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(copy, nonatomic) NSString *configurationAppIdentifier; // @synthesize configurationAppIdentifier=_configurationAppIdentifier;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(copy, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSArray *allowedHosts; // @synthesize allowedHosts=_allowedHosts;
@property(nonatomic) long long wiFiCredentialType; // @synthesize wiFiCredentialType=_wiFiCredentialType;
- (void)updateReachabilityPingNotification;
- (void)stopReachabilityCheck;
- (void)startReachabilityCheck;
- (void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (void)handleUpdatedSoftwareUpdateModel:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (_Bool)_allowSoftwareUpdateChangeFromSource:(unsigned long long)arg1;
- (void)_applySoftwareUpdateModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSoftwareUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)supportsSoftwareUpdate;
@property(retain, nonatomic) HMDSoftwareUpdate *softwareUpdate; // @synthesize softwareUpdate=_softwareUpdate;
- (void)__handlePairingIdentityRequest:(id)arg1;
- (_Bool)supportsMinimumUserPrivilege;
- (id)hashRouteID;
- (_Bool)providesHashRouteID;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)supportsDiagnosticsTransfer;
@property(readonly, nonatomic) _Bool supportsThirdPartyMusic;
- (_Bool)_shouldFilterAccessoryProfile:(id)arg1;
@property(readonly, nonatomic) _Bool supportsCompanionInitiatedRestart;
@property(readonly, nonatomic) _Bool supportsMultiUser;
@property(readonly, nonatomic) _Bool supportsTargetControl;
@property(readonly, nonatomic) _Bool supportsTargetController;
- (void)autoConfigureTargetControllers;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)didUpdateCurrentNetworkProtection;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
@property(readonly) _Bool supportsUserManagement;
- (void)__handleAuditPairings:(id)arg1;
- (void)__handleListPairings:(id)arg1;
- (_Bool)shouldEnableDaemonRelaunch;
- (void)logRoomEvent:(unsigned long long)arg1;
- (void)didEncounterError:(id)arg1;
@property(retain, nonatomic) NSUUID *configuredNetworkProtectionGroupUUID; // @synthesize configuredNetworkProtectionGroupUUID=_configuredNetworkProtectionGroupUUID;
@property(readonly, nonatomic) NSUUID *defaultNetworkProtectionGroupUUID; // @synthesize defaultNetworkProtectionGroupUUID=_defaultNetworkProtectionGroupUUID;
- (id)networkProtectionGroupUUID;
- (void)saveNetworkAccessViolation:(id)arg1;
- (void)_handleWiFiReconfiguration:(id)arg1;
- (void)saveWiFiUniquePreSharedKey:(id)arg1 credentialType:(long long)arg2;
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey; // @synthesize wiFiUniquePreSharedKey=_wiFiUniquePreSharedKey;
- (void)setWifiCredentialType:(long long)arg1;
- (_Bool)supportsWiFiReconfiguration;
- (void)saveCurrentNetworkProtectionMode:(long long)arg1 assignedLAN:(long long)arg2 allowedWANHosts:(id)arg3 profileFingerprint:(id)arg4;
@property(retain, nonatomic) NSUUID *networkClientProfileFingerprint; // @synthesize networkClientProfileFingerprint=_networkClientProfileFingerprint;
@property(nonatomic) long long networkClientLAN; // @synthesize networkClientLAN=_networkClientLAN;
@property(nonatomic) long long currentNetworkProtectionMode; // @synthesize currentNetworkProtectionMode=_currentNetworkProtectionMode;
- (long long)targetNetworkProtectionMode;
- (void)saveNetworkClientIdentifier:(id)arg1 networkRouterUUID:(id)arg2 clearProfileFingerprint:(_Bool)arg3;
@property(retain, nonatomic) NSUUID *networkRouterUUID; // @synthesize networkRouterUUID=_networkRouterUUID;
@property(retain, nonatomic) NSNumber *networkClientIdentifier; // @synthesize networkClientIdentifier=_networkClientIdentifier;
- (_Bool)supportsNetworkProtection;
@property(retain, nonatomic) HMFVersion *primaryProfileVersion; // @synthesize primaryProfileVersion=_primaryProfileVersion;
- (void)setAccessoryProfiles:(id)arg1;
- (void)removeAccessoryProfile:(id)arg1;
- (void)addAccessoryProfile:(id)arg1;
@property(readonly, copy) NSArray *accessoryProfiles;
- (void)takeOwnershipOfAppData:(id)arg1;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;
- (void)appDataUpdated:(id)arg1 message:(id)arg2;
- (void)__handleSetAppData:(id)arg1;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(nonatomic) unsigned long long configNumber; // @synthesize configNumber=_configNumber;
- (id)runtimeState;
- (void)_remoteAccessEnabled:(_Bool)arg1;
- (void)remoteAccessEnabled:(_Bool)arg1;
- (void)_notifyConnectivityChangedWithReachabilityState:(_Bool)arg1 remoteAccessChanged:(_Bool)arg2;
- (id)messageSendPolicy;
@property(readonly, nonatomic) long long reachableTransports;
- (_Bool)isReachableForXPCClients;
@property(nonatomic, getter=isRemotelyReachable) _Bool remotelyReachable; // @synthesize remotelyReachable=_remotelyReachable;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(nonatomic) _Bool reachablilityPingNotificationEnabled; // @synthesize reachablilityPingNotificationEnabled=_reachablilityPingNotificationEnabled;
@property(nonatomic) _Bool reachabilityPingEnabled; // @synthesize reachabilityPingEnabled=_reachabilityPingEnabled;
- (void)setSuspendedCapable:(_Bool)arg1;
@property(readonly, nonatomic) _Bool supportsPersonalRequests;
@property(readonly, nonatomic) _Bool supportsMediaContentProfile;
@property(readonly) _Bool requiresHomeAppForManagement;
- (void)removeAdvertisement:(id)arg1;
- (void)addAdvertisement:(id)arg1;
@property(retain, nonatomic) HMDUserManagementOperationTimestamp *pairingsAuditedTimestamp; // @synthesize pairingsAuditedTimestamp=_pairingsAuditedTimestamp;
@property(retain, nonatomic) HMDUserManagementOperationTimestamp *sharedAdminAddedTimestamp; // @synthesize sharedAdminAddedTimestamp=_sharedAdminAddedTimestamp;
- (void)notifyAccessoryNameChanged:(_Bool)arg1;
- (void)updateMediaSession:(id)arg1;
@property(readonly, copy, nonatomic) HMDVendorModelEntry *vendorInfo;
@property(readonly, nonatomic) NSString *productGroup;
- (void)setProductData:(id)arg1;
@property(readonly, nonatomic) NSString *productData; // @synthesize productData=_productData;
- (void)setSerialNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void)setFirmwareVersion:(id)arg1;
@property(readonly, copy, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
- (void)setInitialManufacturer:(id)arg1;
@property(readonly, copy, nonatomic) NSString *initialManufacturer; // @synthesize initialManufacturer=_initialManufacturer;
- (void)setManufacturer:(id)arg1;
@property(readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void)setInitialModel:(id)arg1;
@property(readonly, copy, nonatomic) NSString *initialModel; // @synthesize initialModel=_initialModel;
- (void)setModel:(id)arg1;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void)__handleRename:(id)arg1;
- (void)_renameAccessory:(id)arg1 resetName:(_Bool)arg2 message:(id)arg3;
- (id)getConfiguredName;
- (void)_handleUpdatedName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)__handleGetAccessoryAdvertisingParams:(id)arg1;
- (void)setInitialCategoryIdentifier:(id)arg1;
@property(readonly, nonatomic) NSNumber *initialCategoryIdentifier; // @synthesize initialCategoryIdentifier=_initialCategoryIdentifier;
- (id)_updateCategory:(id)arg1 notifyClients:(_Bool)arg2;
- (void)updateCategory:(id)arg1;
- (_Bool)_updateRoom:(id)arg1;
- (void)__handleUpdateRoom:(id)arg1;
- (id)modelWithUpdatedRoom:(id)arg1;
- (void)updateRoom:(id)arg1;
@property(retain, nonatomic) HMDRoom *room; // @synthesize room=_room;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)removeCloudData;
- (void)unconfigure;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;
- (void)registerForMessagesWithNewUUID:(id)arg1;
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;
- (void)__handleIdentify:(id)arg1;
- (void)_registerForMessages;
- (id)backingStoreObjects:(long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (unsigned long long)supportedTransports;
@property(readonly, getter=isCurrentAccessory) _Bool currentAccessory;
- (id)attributeDescriptions;
- (id)privateDescription;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)init;
- (id)accessoryBulletinContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (void)_handlePreviewAllowedHosts:(id)arg1;
- (void)populateVendorDetailsForCoreAnalytics:(id)arg1 keyPrefix:(id)arg2;
- (id)vendorDetailsForAWD;
- (id)assistantObject;
- (id)urlString;
- (id)assistantUniqueIdentifier;
@property(readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *metadataIdentifier;
- (id)networkProtectionReportForAWD;
- (int)networkProtectionStatusForAnalytics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
