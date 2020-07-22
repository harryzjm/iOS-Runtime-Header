//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMDAccessoryTransaction, HMDAccessoryVersion, HMDApplicationData, HMDApplicationRegistry, HMDHome, HMDRoom, HMDVendorModelEntry, HMFMessageDispatcher, NSArray, NSMutableSet, NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAccessory : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMFMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging>
{
    _Bool _primary;
    _Bool _reachable;
    _Bool _remotelyReachable;
    NSMutableSet *_accessoryProfiles;
    _Bool _blocked;
    _Bool _remoteAccessEnabled;
    _Bool _unblockPending;
    NSString *_identifier;
    HMDRoom *_room;
    NSString *_name;
    NSString *_model;
    NSString *_manufacturer;
    HMDAccessoryVersion *_firmwareVersion;
    NSString *_serialNumber;
    HMDApplicationData *_appData;
    NSUUID *_uuid;
    HMAccessoryCategory *_category;
    HMDHome *_home;
    NSString *_providedName;
    NSString *_configurationAppIdentifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSNumber *_categoryIdentifier;
    unsigned long long _configNumber;
    HMDApplicationRegistry *_appRegistry;
    HMDAccessoryTransaction *_transaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(retain, nonatomic) HMDAccessoryTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property(nonatomic) unsigned long long configNumber; // @synthesize configNumber=_configNumber;
@property(nonatomic) _Bool unblockPending; // @synthesize unblockPending=_unblockPending;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic, getter=isRemoteAccessEnabled) _Bool remoteAccessEnabled; // @synthesize remoteAccessEnabled=_remoteAccessEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(copy, nonatomic) NSString *configurationAppIdentifier; // @synthesize configurationAppIdentifier=_configurationAppIdentifier;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_blocked;
@property(copy, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic, getter=isRemotelyReachable) _Bool remotelyReachable; // @synthesize remotelyReachable=_remotelyReachable;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (_Bool)shouldEnableDaemonRelaunch;
- (void)_sendBlockedNotification:(_Bool)arg1 withError:(id)arg2 withIdentifier:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)logDuetRoomEvent;
- (void)didEncounterError:(id)arg1;
- (void)unblockWithMessageIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)blockWithError:(id)arg1;
- (void)setAccessoryProfiles:(id)arg1;
- (void)removeAccessoryProfile:(id)arg1;
- (void)addAccessoryProfile:(id)arg1;
@property(readonly, copy) NSArray *accessoryProfiles;
- (id)updateAppData:(id)arg1;
- (void)takeOwnershipOfAppData:(id)arg1;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;
- (void)appDataUpdated:(id)arg1 message:(id)arg2;
- (void)_handleSetAppData:(id)arg1;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
- (void)_remoteAccessEnabled:(_Bool)arg1;
- (void)remoteAccessEnabled:(_Bool)arg1;
- (void)_notifyConnectivityChangedWithReachabilityState:(_Bool)arg1 remoteAccessChanged:(_Bool)arg2;
@property(readonly, nonatomic) long long reachableTransports;
- (void)handleRemoteReachabilityChange:(_Bool)arg1;
- (_Bool)isRemoteReachable;
- (void)handleReachabilityChange:(_Bool)arg1;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
- (void)removeAdvertisement:(id)arg1;
- (void)addAdvertisement:(id)arg1;
- (void)updateMediaSession:(id)arg1;
- (void)updateManufacturer:(id)arg1 model:(id)arg2 firmwareVersion:(id)arg3 serialNumber:(id)arg4;
@property(readonly, copy, nonatomic) HMDVendorModelEntry *vendorInfo;
- (void)setSerialNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void)setFirmwareVersion:(id)arg1;
@property(readonly, copy, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
- (void)setManufacturer:(id)arg1;
@property(readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void)setModel:(id)arg1;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
- (id)_updateAccessoryName:(id)arg1;
- (void)_handleRename:(id)arg1;
- (id)_updateProvidedName:(id)arg1;
- (void)updateName:(id)arg1;
- (id)getConfiguredName;
- (void)handleUpdatedName:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_updateCategory:(id)arg1 notifyClients:(_Bool)arg2;
- (void)updateCategory:(id)arg1;
- (id)_updateRoom:(id)arg1 message:(id *)arg2;
- (void)_handleUpdateRoom:(id)arg1;
- (void)updateRoom:(id)arg1 message:(id)arg2;
- (void)updateRoom:(id)arg1;
@property(retain, nonatomic) HMDRoom *room; // @synthesize room=_room;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)unconfigure;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (void)registerForMessagesWithNewUUID:(id)arg1;
- (void)_registerForMessages;
- (id)backingStoreObjects:(long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
@property(readonly, getter=isCurrentAccessory) _Bool currentAccessory;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)init;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (id)assistantObject;
- (id)url;
- (id)assistantUniqueIdentifier;
- (void)_createCameraProfiles:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

