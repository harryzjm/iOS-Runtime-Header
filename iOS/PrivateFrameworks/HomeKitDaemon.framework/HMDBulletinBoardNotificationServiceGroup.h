//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBulletinBoardNotification, HMFMessageDispatcher, NSArray, NSHashTable, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDBulletinBoardNotificationServiceGroup : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSSet *_cameraProfileUUIDs;
    NSSet *_associatedServiceUUIDs;
    NSHashTable *_cameraProfilesTable;
    NSHashTable *_associatedServicesTable;
    HMDBulletinBoardNotification *_bulletinBoardNotification;
    NSUUID *_messageTargetUUID;
    NSArray *_associatedServices;
    NSArray *_cameraProfiles;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
- (void).cxx_destruct;
@property(retain) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSArray *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(retain, nonatomic) NSArray *associatedServices; // @synthesize associatedServices=_associatedServices;
@property __weak HMDBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;
- (id)actionContextForCameraProfileID:(id)arg1;
- (id)_cameraProfileWithID:(id)arg1;
- (id)dumpState;
- (void)setAssociatedServicesTable:(id)arg1;
@property(readonly, copy, nonatomic) NSHashTable *associatedServicesTable; // @synthesize associatedServicesTable=_associatedServicesTable;
- (void)setCameraProfilesTable:(id)arg1;
@property(readonly, copy, nonatomic) NSHashTable *cameraProfilesTable; // @synthesize cameraProfilesTable=_cameraProfilesTable;
@property(retain, nonatomic) NSSet *associatedServiceUUIDs; // @synthesize associatedServiceUUIDs=_associatedServiceUUIDs;
@property(retain, nonatomic) NSSet *cameraProfileUUIDs; // @synthesize cameraProfileUUIDs=_cameraProfileUUIDs;
- (void)_sendNotification:(id)arg1;
- (id)_prepareServiceGroupPayload;
- (void)_updateAssociatedServicesTable:(id)arg1;
- (void)_updateAssociatedServices:(id)arg1 associatedCameras:(id)arg2;
- (void)_configureServices;
- (id)_cameraNotificationGeneratingServicesForAccessory:(id)arg1;
- (id)_accessoriesInRoom:(id)arg1 ofHome:(id)arg2;
- (_Bool)_isDefaultRoom:(id)arg1 ofHome:(id)arg2;
- (void)configureBulletinNotification;
- (_Bool)_isNotificationGeneratingService:(id)arg1;
- (_Bool)_isAlarmService:(id)arg1;
- (_Bool)_isSupportedAssociationService:(id)arg1;
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (void)dealloc;
- (id)initWithBulletinBoardNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

