//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMBLocalZone, HMDDatabaseZoneManager, HMFTimer, NSObject, NSSet, NSString, NSUUID;
@protocol HMDPersonManagerSettings, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPersonManager : HMFObject
{
    _Bool _syncsPersonData;
    NSString *_logIdentifier;
    NSUUID *_UUID;
    HMBLocalZone *_localZone;
    HMBCloudZone *_cloudZone;
    HMFTimer *_unassociatedFaceCropsCleanupTimer;
    unsigned long long _fetchBatchLimit;
    CDUnknownBlockType _unassociatedFaceCropsCleanupTimerFactory;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDDatabaseZoneManager *_zoneManager;
    NSSet *_dataInterfaces;
}

+ (id)logCategory;
+ (id)zoneNameForZoneUUID:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSSet *dataInterfaces; // @synthesize dataInterfaces=_dataInterfaces;
@property(readonly) HMDDatabaseZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy) CDUnknownBlockType unassociatedFaceCropsCleanupTimerFactory; // @synthesize unassociatedFaceCropsCleanupTimerFactory=_unassociatedFaceCropsCleanupTimerFactory;
@property unsigned long long fetchBatchLimit; // @synthesize fetchBatchLimit=_fetchBatchLimit;
@property(retain) HMFTimer *unassociatedFaceCropsCleanupTimer; // @synthesize unassociatedFaceCropsCleanupTimer=_unassociatedFaceCropsCleanupTimer;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) _Bool syncsPersonData; // @synthesize syncsPersonData=_syncsPersonData;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)timerDidFire:(id)arg1;
- (id)attributeDescriptions;
@property(readonly, copy) id <HMDPersonManagerSettings> settings;
- (id)createBatchChange;
- (id)removeFaceprintsWithUUIDs:(id)arg1;
- (id)disassociateFaceCropsWithUUIDs:(id)arg1;
- (id)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 forSource:(long long)arg3;
- (id)addOrUpdateFaceprints:(id)arg1;
- (id)faceprintsForFaceCropsWithUUIDs:(id)arg1;
- (void)enumerateFaceprintsUsingBlock:(CDUnknownBlockType)arg1;
- (id)faceCropsForPersonsWithUUIDs:(id)arg1;
- (void)enumeratePersonFaceCropsUsingBlock:(CDUnknownBlockType)arg1;
- (id)faceCropsWithUUIDs:(id)arg1;
- (void)enumerateUnassociatedFaceCropsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFaceCropsUsingBlock:(CDUnknownBlockType)arg1;
- (id)personsWithUUIDs:(id)arg1;
- (id)performCloudPull;
@property(readonly, getter=isCurrentDeviceAvailableResident) _Bool currentDeviceAvailableResident;
@property(readonly, getter=isDataAvailable) _Bool dataAvailable;
- (void)coreDataManager:(id)arg1 didRemovePersonsWithUUIDs:(id)arg2;
- (void)coreDataManager:(id)arg1 didUpdatePersons:(id)arg2;
- (void)zoneManagerDidStop:(id)arg1;
- (void)zoneManagerDidStart:(id)arg1;
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (void)handleDataSyncInProgressChangedNotification:(id)arg1;
- (void)handleResidentWasRemovedNotification:(id)arg1;
- (void)handleResidentWasUpdatedNotification:(id)arg1;
- (void)handleResidentWasAddedNotification:(id)arg1;
- (void)handleUserPrivilegeDidChangeNotification:(id)arg1;
- (id)_removePersonZones;
- (void)_cleanUpExpiredUnassociatedFaceCrops;
- (void)_createZones;
- (void)_notifyDataInterfacesOfCurrentIsDataSyncInProgress;
- (void)_notifyDataInterfacesOfCurrentIsCurrentDeviceAvailableResident;
- (void)_handleDeletedModel:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)_handleCreatedOrUpdatedModel:(id)arg1 mirrorOutputFuture:(id)arg2;
- (id)_removeFaceprintsForFaceCropsWithUUIDs:(id)arg1;
- (id)_faceCropsModelsWithUUIDs:(id)arg1;
- (id)_unassociatedFaceCropsModelsWithUUIDs:(id)arg1;
- (_Bool)isDataSyncInProgress;
- (void)_createOrRemoveZonesForSettings:(id)arg1;
- (id)faceCropUUIDsForPersonWithUUID:(id)arg1;
- (id)removeFaceCropsWithUUIDs:(id)arg1;
- (id)addOrUpdateFaceCrops:(id)arg1;
- (id)addOrUpdatePersons:(id)arg1 andRemovePersonsWithUUIDs:(id)arg2;
- (id)removePersonsWithUUIDs:(id)arg1;
- (id)addOrUpdatePersons:(id)arg1;
- (void)enumeratePersonsUsingBlock:(CDUnknownBlockType)arg1;
- (id)addUnassociatedFaceCropWithData:(id)arg1;
- (void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2;
- (id)faceCropsForPersonWithUUID:(id)arg1;
- (id)personFaceCropWithUnassociatedFaceCropUUID:(id)arg1;
- (id)unassociatedFaceCropWithUUID:(id)arg1;
- (id)personWithUUID:(id)arg1;
@property(readonly) _Bool sharesFaceClassifications;
- (_Bool)syncsDataToAllUsers;
- (id)removeAllAssociatedDataDueToHomeGraphObjectRemoval:(_Bool)arg1;
- (void)configureWithHome:(id)arg1;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 zoneManager:(id)arg2 dataInterfaces:(id)arg3 workQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

