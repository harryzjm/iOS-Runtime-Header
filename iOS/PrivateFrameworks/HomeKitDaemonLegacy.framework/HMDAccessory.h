//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMAccessoryCategory, HMDAccessoryNetworkAccessViolation, HMDAccessoryVersion, HMDApplicationData, HMDHome, HMDNetworkRouterFirewallRuleAccessoryIdentifier, HMDRoom, HMDSoftwareUpdate, HMDUserManagementOperationTimestamp, HMDVendorModelEntry, HMFMessageDispatcher, HMFVersion, NSArray, NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HMDFeaturesDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessory : HMFObject
{
    struct os_unfair_recursive_lock_s _lock;
    _Bool _primary;
    _Bool _reachable;
    _Bool _remotelyReachable;
    NSMutableSet *_accessoryProfiles;
    _Bool _connected;
    _Bool _suspended;
    _Bool _lowBattery;
    _Bool _reachabilityPingEnabled;
    _Bool _reachabilityPingNotificationEnabled;
    _Bool _resetOnBackoffExpiry;
    _Bool _supportsDoorbellChime;
    _Bool _supportsCoordinationDoorbellChime;
    _Bool _suspendCapable;
    _Bool _shouldProcessTransactionRemoval;
    _Bool _supportsManagedConfigurationProfile;
    _Bool _remoteAccessEnabled;
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
    NSString *_providedName;
    NSDate *_lastSeenDate;
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
    NSDate *_timeBecameUnreachable;
    NSDate *_timeBecameReachable;
    NSString *_pendingConfigurationIdentifier;
    double _lastPairingFailureTime;
    unsigned long long _consecutivePairingFailures;
    NSUUID *_preferredMediaUserUUID;
    NSNumber *_preferredMediaUserSelectionTypeNumber;
    NSString *_hashRouteID;
    HMDAccessory *_hostAccessory;
    NSUUID *_uuid;
    HMAccessoryCategory *_category;
    HMDHome *_home;
    NSString *_configurationAppIdentifier;
    NSArray *_transportReports;
    HMDAccessoryNetworkAccessViolation *_networkAccessViolation;
    id <HMDFeaturesDataSource> _featuresDataSource;
    CDUnknownBlockType _hashedRouteFactory;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSNumber *_categoryIdentifier;
    NSString *_configuredName;
    unsigned long long _accessoryReprovisionState;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (_Bool)splitProductDataIntoProductGroupAndProductNumber:(id)arg1 productGroup:(id *)arg2 productNumber:(id *)arg3;
+ (_Bool)validateProductData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic, getter=isRemoteAccessEnabled) _Bool remoteAccessEnabled; // @synthesize remoteAccessEnabled=_remoteAccessEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy) CDUnknownBlockType hashedRouteFactory; // @synthesize hashedRouteFactory=_hashedRouteFactory;
@property(retain) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(retain, nonatomic) HMDAccessoryNetworkAccessViolation *networkAccessViolation; // @synthesize networkAccessViolation=_networkAccessViolation;
@property(readonly) _Bool supportsManagedConfigurationProfile; // @synthesize supportsManagedConfigurationProfile=_supportsManagedConfigurationProfile;
@property(copy, nonatomic) NSArray *transportReports; // @synthesize transportReports=_transportReports;
@property _Bool shouldProcessTransactionRemoval; // @synthesize shouldProcessTransactionRemoval=_shouldProcessTransactionRemoval;
@property(nonatomic, getter=isSuspendCapable) _Bool suspendCapable; // @synthesize suspendCapable=_suspendCapable;
@property(readonly, nonatomic) _Bool supportsCoordinationDoorbellChime; // @synthesize supportsCoordinationDoorbellChime=_supportsCoordinationDoorbellChime;
@property(readonly, nonatomic) _Bool supportsDoorbellChime; // @synthesize supportsDoorbellChime=_supportsDoorbellChime;
@property(copy, nonatomic) NSString *configurationAppIdentifier; // @synthesize configurationAppIdentifier=_configurationAppIdentifier;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *hashRouteID; // @synthesize hashRouteID=_hashRouteID;
@property(copy, nonatomic) NSNumber *preferredMediaUserSelectionTypeNumber; // @synthesize preferredMediaUserSelectionTypeNumber=_preferredMediaUserSelectionTypeNumber;
@property(copy, nonatomic) NSUUID *preferredMediaUserUUID; // @synthesize preferredMediaUserUUID=_preferredMediaUserUUID;
@property(nonatomic) unsigned long long consecutivePairingFailures; // @synthesize consecutivePairingFailures=_consecutivePairingFailures;
@property(nonatomic) _Bool reachabilityPingNotificationEnabled; // @synthesize reachabilityPingNotificationEnabled=_reachabilityPingNotificationEnabled;
@property(retain, nonatomic) NSArray *allowedHosts; // @synthesize allowedHosts=_allowedHosts;
@property(nonatomic) long long wiFiCredentialType; // @synthesize wiFiCredentialType=_wiFiCredentialType;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;
- (void)submitLogEvent:(id)arg1;
- (void)notifyClientsOfUpdatedAccessoryControllableValue:(_Bool)arg1;
- (_Bool)supportsUnreachablePing;
- (void)stopReachabilityCheck;
- (void)startReachabilityCheck;
- (void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (void)handleUpdatedSoftwareUpdateModel:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (_Bool)_allowSoftwareUpdateChangeFromSource:(unsigned long long)arg1;
- (void)_applySoftwareUpdateModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSoftwareUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool supportsFirmwareUpdate;
@property(readonly, nonatomic) _Bool requiresRemovalOnPrimaryResident;
@property(readonly, nonatomic) _Bool supportsMessagedHomePodSettings;
@property(readonly) _Bool supportsSoftwareUpdateV2;
- (_Bool)supportsSoftwareUpdate;
- (void)notifyClientsOfConfigurationChangeWithReason:(id)arg1 source:(id)arg2 shouldFetch:(_Bool)arg3;
- (id)notificationCenterForSoftwareUpdate:(id)arg1;
@property(retain, nonatomic) HMDSoftwareUpdate *softwareUpdate; // @synthesize softwareUpdate=_softwareUpdate;
- (void)setSoftwareUpdateForTesting:(id)arg1;
- (void)__handlePairingIdentityRequest:(id)arg1;
- (_Bool)supportsMinimumUserPrivilege;
- (void)_updateHost:(id)arg1;
@property(nonatomic) __weak HMDAccessory *hostAccessory; // @synthesize hostAccessory=_hostAccessory;
- (void)removeHostedAccessory:(id)arg1;
- (void)addHostedAccessory:(id)arg1;
- (void)resetHashedRoute;
- (_Bool)providesHashRouteID;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)supportsDiagnosticsTransfer;
@property(readonly, nonatomic) _Bool supportsMediaActions;
@property(readonly, nonatomic) _Bool supportsAnnounce;
@property(readonly, nonatomic) _Bool supportsJustSiri;
@property(readonly, nonatomic) _Bool supportsDropIn;
@property(readonly, nonatomic) _Bool supportsAudioAnalysis;
@property(readonly, nonatomic) _Bool supportsThirdPartyMusic;
@property(readonly, nonatomic) _Bool supportsMusicAlarm;
- (_Bool)_shouldFilterAccessoryProfile:(id)arg1;
@property(readonly, nonatomic) _Bool supportsCompanionInitiatedRestart;
@property(readonly, nonatomic) _Bool supportsAudioReturnChannel;
@property(readonly, nonatomic) _Bool supportsMultiUser;
@property(readonly, nonatomic) _Bool supportsTargetControl;
@property(readonly, nonatomic) _Bool supportsTargetController;
- (void)autoConfigureTargetControllers;
- (void)handleIdentifyAccessoryMessage:(id)arg1;
@property(readonly) _Bool supportsIdentify;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (id)dumpNetworkState;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)didUpdateCurrentNetworkProtection;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
@property(readonly) _Bool supportsUserManagement;
- (void)__handleAuditPairings:(id)arg1;
- (void)__handleListPairings:(id)arg1;
- (_Bool)shouldEnableDaemonRelaunch;
- (void)didEncounterError:(id)arg1;
- (void)__handleUpdatePendingConfigurationIdentifierMessage:(id)arg1;
@property(copy, nonatomic) NSString *pendingConfigurationIdentifier; // @synthesize pendingConfigurationIdentifier=_pendingConfigurationIdentifier;
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
- (_Bool)needsAirplayAccess;
- (_Bool)supportsNetworkProtection;
@property(retain, nonatomic) HMFVersion *primaryProfileVersion; // @synthesize primaryProfileVersion=_primaryProfileVersion;
- (void)setAccessoryProfiles:(id)arg1;
- (void)removeAccessoryProfile:(id)arg1;
- (void)handleAddedSiriEndpointProfile:(id)arg1;
- (void)handleAddedMediaProfile:(id)arg1;
- (void)handleAddedAccessoryProfile:(id)arg1;
- (void)addAccessoryProfile:(id)arg1;
@property(readonly, copy) NSArray *accessoryProfiles;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;
- (void)appDataUpdated:(id)arg1 message:(id)arg2;
- (void)__handleSetAppData:(id)arg1;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
- (void)_configNumberUpdated;
@property(nonatomic) unsigned long long configNumber; // @synthesize configNumber=_configNumber;
- (id)runtimeState;
- (void)_remoteAccessEnabled:(_Bool)arg1;
- (void)remoteAccessEnabled:(_Bool)arg1;
- (void)_notifyConnectivityChangedWithReachabilityState:(_Bool)arg1 remoteAccessChanged:(_Bool)arg2;
- (id)messageSendPolicy;
@property(nonatomic, getter=hasActiveSession) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic) long long reachableTransports;
- (_Bool)isReachableForXPCClients;
@property(nonatomic, getter=isLowBattery) _Bool lowBattery; // @synthesize lowBattery=_lowBattery;
@property(retain, nonatomic) NSDate *lastSeenDate; // @synthesize lastSeenDate=_lastSeenDate;
@property(nonatomic, getter=isRemotelyReachable) _Bool remotelyReachable; // @synthesize remotelyReachable=_remotelyReachable;
- (_Bool)_getLastKnownLowBatteryStatus;
- (void)saveLastSeenToLocalStore;
- (void)_checkForLastSeenUpdateOnBecomingUnreachable;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(copy, nonatomic) NSDate *timeBecameReachable; // @synthesize timeBecameReachable=_timeBecameReachable;
@property(copy, nonatomic) NSDate *timeBecameUnreachable; // @synthesize timeBecameUnreachable=_timeBecameUnreachable;
- (void)setreachabilityPingNotificationEnabled:(_Bool)arg1;
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
@property(copy, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
- (id)getConfiguredName;
- (void)_handleUpdatedName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)__handleGetAccessoryAdvertisingParams:(id)arg1;
- (void)setInitialCategoryIdentifier:(id)arg1;
@property(readonly, nonatomic) NSNumber *initialCategoryIdentifier; // @synthesize initialCategoryIdentifier=_initialCategoryIdentifier;
- (id)_updateCategory:(id)arg1 notifyClients:(_Bool)arg2;
- (void)updateCategory:(id)arg1;
- (_Bool)_updateRoom:(id)arg1 source:(unsigned long long)arg2;
- (void)__handleUpdateRoom:(id)arg1;
- (id)modelWithUpdatedRoom:(id)arg1;
- (void)updateRoom:(id)arg1 source:(unsigned long long)arg2;
@property(retain, nonatomic) HMDRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) _Bool hasBattery;
@property(readonly, copy) NSUUID *endpointIdentifier;
@property(readonly, copy) NSUUID *spiClientIdentifier;
@property(nonatomic) _Bool resetOnBackoffExpiry; // @synthesize resetOnBackoffExpiry=_resetOnBackoffExpiry;
- (void)setConsecutivePairingFailure:(unsigned long long)arg1;
- (unsigned long long)consecutivePairingFailure;
@property(nonatomic) double lastPairingFailureTime; // @synthesize lastPairingFailureTime=_lastPairingFailureTime;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)removeCloudData;
- (void)unconfigure;
@property(readonly) _Bool hasSiriEndpointProfile;
@property(readonly) _Bool hasMediaProfile;
- (_Bool)isFirstPartyAccessory;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;
- (void)__handleIdentify:(id)arg1;
- (void)handleAccessoryUpdateShouldProcessTransactionRemovalValueRequestMessage:(id)arg1;
- (void)_handleLinkQualityRequestMessage:(id)arg1;
- (void)sendLastSeenStatusResponseMessage:(id)arg1;
- (void)_handleLastSeenStatusRequestMessage:(id)arg1;
- (void)_registerForMessages;
- (id)backingStoreObjects:(long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)shortDescription;
- (unsigned long long)supportedTransports;
@property(readonly, getter=isCurrentAccessory) _Bool currentAccessory;
- (id)attributeDescriptions;
- (id)privateDescription;
- (void)dealloc;
- (void)sendRemovalRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendRemovalRequest;
- (void)runTransactionWithPreferredMediaUserUUID:(id)arg1 selectionType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDefaultPreferredMediaUserIfRemoved:(id)arg1 defaultUser:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPreferredMediaUser:(id)arg1 selectionType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)encodePreferredMediaUser:(id)arg1;
- (void)decodePreferredMediaUser:(id)arg1;
- (void)transactionAccessoryUpdatedForPreferredMediaUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runTransactionWithModels:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runTransactionWithModel:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)init;
- (id)accessoryBulletinContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (void)_handlePreviewAllowedHosts:(id)arg1;
- (id)metricLoggingTransportDetails;
- (void)populateVendorDetailsForCoreAnalytics:(id)arg1 keyPrefix:(id)arg2;
- (id)vendorDetailsForAWD;
- (id)metricLoggingVendorDetails;
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;
@property(readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *metadataIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

