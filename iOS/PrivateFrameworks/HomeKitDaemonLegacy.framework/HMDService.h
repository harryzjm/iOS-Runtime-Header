//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDApplicationData, HMDBulletinBoardNotification, HMDHAPAccessory, HMFMessageDispatcher, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HMDServiceOwner, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDService : HMFObject
{
    struct os_unfair_recursive_lock_s _lock;
    _Bool _hidden;
    _Bool _primary;
    HMDApplicationData *_appData;
    NSUUID *_uuid;
    NSNumber *_instanceID;
    NSNumber *_labelIndex;
    NSNumber *_labelNamespace;
    NSString *_serviceSubtype;
    NSNumber *_configurationState;
    NSArray *_characteristics;
    NSString *_configuredName;
    NSString *_expectedConfiguredName;
    NSString *_lastSeenConfiguredName;
    NSString *_providedName;
    HMDHAPAccessory *_accessory;
    NSString *_name;
    NSString *_defaultName;
    NSString *_associatedServiceType;
    NSArray *_linkedServices;
    NSString *_serviceType;
    HMDBulletinBoardNotification *_bulletinBoardNotification;
    NSNumber *_mediaSourceIdentifier;
    NSArray *_mediaSourceDisplayOrder;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_messageDispatcher;
    unsigned long long _serviceProperties;
    NSUUID *_cachedAccessoryUUID;
    id <HMDServiceOwner> _owner;
    NSNumber *_lastKnownDiscoveryMode;
    NSNumber *_lastKnownOperatingState;
    NSNumber *_lastKnownOperatingStateAbnormalReasons;
    NSMutableDictionary *_deviceLastRequestPresenceDateMap;
    NSString *_logID;
}

+ (_Bool)hasMessageReceiverChildren;
+ (_Bool)_parseOperatingStateResponseValue:(id)arg1 intoState:(id *)arg2 abnormalReasons:(id *)arg3;
+ (_Bool)supportsSecureCoding;
+ (_Bool)_processUpdateOnPowerManagementServiceForCharacteristicType:(id)arg1 value:(id)arg2 serviceType:(id)arg3 accessory:(id)arg4 accessoryTransaction:(id)arg5;
+ (_Bool)processUpdateForCharacteristicType:(id)arg1 value:(id)arg2 serviceType:(id)arg3 service:(id)arg4 serviceTransactionGetter:(CDUnknownBlockType)arg5 accessory:(id)arg6 accessoryTransaction:(id)arg7 accessoryTransactionChanged:(_Bool *)arg8;
+ (_Bool)validateProvidedName:(id)arg1;
+ (id)logCategory;
+ (id)generateUUIDWithAccessoryUUID:(id)arg1 serviceID:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(retain, nonatomic) NSMutableDictionary *deviceLastRequestPresenceDateMap; // @synthesize deviceLastRequestPresenceDateMap=_deviceLastRequestPresenceDateMap;
@property(retain, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons; // @synthesize lastKnownOperatingStateAbnormalReasons=_lastKnownOperatingStateAbnormalReasons;
@property(retain, nonatomic) NSNumber *lastKnownOperatingState; // @synthesize lastKnownOperatingState=_lastKnownOperatingState;
@property(retain, nonatomic) NSNumber *lastKnownDiscoveryMode; // @synthesize lastKnownDiscoveryMode=_lastKnownDiscoveryMode;
@property(nonatomic) __weak id <HMDServiceOwner> owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSUUID *cachedAccessoryUUID; // @synthesize cachedAccessoryUUID=_cachedAccessoryUUID;
@property(nonatomic) unsigned long long serviceProperties; // @synthesize serviceProperties=_serviceProperties;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSArray *mediaSourceDisplayOrder; // @synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder;
@property(retain, nonatomic) NSNumber *mediaSourceIdentifier; // @synthesize mediaSourceIdentifier=_mediaSourceIdentifier;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(retain, nonatomic) HMDBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property(readonly, nonatomic) NSString *associatedServiceType; // @synthesize associatedServiceType=_associatedServiceType;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSNumber *configurationState; // @synthesize configurationState=_configurationState;
@property(retain, nonatomic) NSString *serviceSubtype; // @synthesize serviceSubtype=_serviceSubtype;
@property(retain, nonatomic) NSNumber *labelNamespace; // @synthesize labelNamespace=_labelNamespace;
@property(retain, nonatomic) NSNumber *labelIndex; // @synthesize labelIndex=_labelIndex;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
- (_Bool)shouldUpdateLastSeenConfiguredName:(id)arg1;
- (void)_writeConfiguredNameToAccessory:(id)arg1;
- (void)_saveCurrentNameAsExpectedAndLastSeen:(id)arg1;
- (id)backingStoreObjects:(long long)arg1;
- (void)fillCharacteristicsInServiceBackingStoreObject:(id)arg1;
- (void)populateModelObjectWithChangeType:(id)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)_registerForMessages;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_createAndRunTransactionWithName:(id)arg1 transaction:(id)arg2 message:(id)arg3;
- (void)updateMediaSourceDisplayOrder:(id)arg1 requestMessage:(id)arg2;
- (void)persistMediaSourceDisplayOrder:(id)arg1 requestMessage:(id)arg2;
- (_Bool)isEmptyConfiguredNameAllowed;
- (_Bool)updateCharacteristics:(id)arg1;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;
- (void)appDataUpdated:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionServiceUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)_processTransactionForNameComponents:(id)arg1 messagesToSendToAccessory:(id)arg2 result:(id)arg3;
- (void)_saveLastSeenAndExpectedConfiguredName:(id)arg1;
- (void)_saveForLastSeenConfiguredNameUpdate;
- (void)_saveForExpectedConfiguredNameUpdate;
- (id)_messagesForConfiguredNameChange;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updatePresenceRequestTimeForDeviceWithDestination:(id)arg1;
- (_Bool)shouldIncludePresenceForDeviceWithDestination:(id)arg1;
- (_Bool)shouldEnableDaemonRelaunch;
- (void)configureBulletinNotification;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (void)updateLastKnownValues;
- (id)getLastSeenConfiguredName;
- (id)getConfiguredNameForXPCClients;
- (id)getConfiguredName;
- (_Bool)updateAssociatedServiceType:(id)arg1 error:(id *)arg2;
- (id)messagesForUpdatedRoom:(id)arg1;
- (id)nameChangedMessage;
- (id)_checkIfDefaultNameChanged;
- (void)_updateDefaultName;
- (id)_deriveDefaultName;
- (id)findCharacteristicWithType:(id)arg1;
- (id)findCharacteristic:(id)arg1;
- (void)_readRequiredCharacteristicValuesForceReadFWVersion:(_Bool)arg1;
- (id)gatherRequiredReadRequestsForceReadFWVersion:(_Bool)arg1;
- (_Bool)isReadingRequiredForBTLEServiceCharacteristic:(id)arg1;
- (id)_updateProvidedName:(id)arg1;
- (void)_shouldServiceBeHidden;
- (_Bool)_supportsBulletinNotification;
- (void)_createNotification;
- (id)configureWithService:(id)arg1 accessory:(id)arg2 shouldRead:(_Bool)arg3 added:(_Bool)arg4;
- (id)_sanitizeNameToWriteToAccessory:(id)arg1;
- (id)configureWithService:(id)arg1 accessory:(id)arg2;
- (void)_handleSetAppData:(id)arg1;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
- (id)logIdentifier;
@property(copy, nonatomic) NSString *lastSeenConfiguredName; // @synthesize lastSeenConfiguredName=_lastSeenConfiguredName;
@property(copy, nonatomic) NSString *expectedConfiguredName; // @synthesize expectedConfiguredName=_expectedConfiguredName;
@property(copy, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
@property(readonly, getter=isCustom) _Bool custom;
- (id)home;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
@property(readonly, copy, nonatomic) NSString *type;
- (id)dumpState;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)_recalculateUUID;
- (void)dealloc;
- (id)initWithAccessory:(id)arg1 owner:(id)arg2 instance:(id)arg3 uuid:(id)arg4;
- (id)initWithTransaction:(id)arg1 accessory:(id)arg2 owner:(id)arg3;
- (id)init;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;
- (id)_serviceSubtypeFromLinkedServicesForServiceType:(id)arg1 accessoryCategory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

