//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDMessageDispatcher, HMDResidentMeshMeshStorage, HMFTimer, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDResidentMesh : HMFObject
{
    NSUUID *_uuid;
    unsigned long long _broadcastRate;
    HMDHomeManager *_homeManager;
    HMDMessageDispatcher *_messageDispatcher;
    NSMutableArray *_residents;
    HMDResidentMeshMeshStorage *_resident;
    NSMutableArray *_reachableAccessories;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFTimer *_startupTimer;
    long long _startupTickCount;
    HMFTimer *_devicesChangedTimer;
    NSSet *_primaryResidentForHomes;
    HMFTimer *_linkQualityMonitorTimer;
    NSMutableDictionary *_loadMetrics;
    NSMutableSet *_updatedOrAddedDevices;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *updatedOrAddedDevices; // @synthesize updatedOrAddedDevices=_updatedOrAddedDevices;
@property(readonly, nonatomic) NSMutableDictionary *loadMetrics; // @synthesize loadMetrics=_loadMetrics;
@property(readonly, nonatomic) HMFTimer *linkQualityMonitorTimer; // @synthesize linkQualityMonitorTimer=_linkQualityMonitorTimer;
@property(retain, nonatomic) NSSet *primaryResidentForHomes; // @synthesize primaryResidentForHomes=_primaryResidentForHomes;
@property(readonly, nonatomic) HMFTimer *devicesChangedTimer; // @synthesize devicesChangedTimer=_devicesChangedTimer;
@property(nonatomic) long long startupTickCount; // @synthesize startupTickCount=_startupTickCount;
@property(readonly, nonatomic) HMFTimer *startupTimer; // @synthesize startupTimer=_startupTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *reachableAccessories; // @synthesize reachableAccessories=_reachableAccessories;
@property(nonatomic) __weak HMDResidentMeshMeshStorage *resident; // @synthesize resident=_resident;
@property(retain, nonatomic) NSMutableArray *residents; // @synthesize residents=_residents;
@property(nonatomic) __weak HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property unsigned long long broadcastRate; // @synthesize broadcastRate=_broadcastRate;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)messageDestination;
- (void)dumpDebug;
- (void)_dumpDebug;
- (id)dumpState;
- (id)_dumpState;
- (void)setMetricForCurrentDevice:(id)arg1 withValue:(id)arg2 isUrgent:(_Bool)arg3;
- (void)_flushWorkQueue;
- (id)deviceForAccessory:(id)arg1 residentOrder:(unsigned long long)arg2 reachableResidents:(unsigned long long *)arg3;
- (id)_residentMapForAccessories:(id)arg1;
- (id)balancedResidentMapForAccessories:(id)arg1;
- (id)cameraRecordingAnalysisNodesForCameraAccessory:(id)arg1;
- (id)bestResidentDeviceForAccessory:(id)arg1;
- (void)_handleMeshUpdateMessage:(id)arg1;
- (void)_handleMeshUpdateRequestMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 payload:(id)arg2 target:(id)arg3 force:(_Bool)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)_removeConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(_Bool)arg2;
- (void)_addConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(_Bool)arg2;
- (_Bool)_checkReachabilityWithTimerActivation:(_Bool)arg1;
- (id)_addResidentStorageResidentDevice:(id)arg1;
- (id)_residentStorageForResidentDevice:(id)arg1;
- (id)_addMeshStorageResidentDevice:(id)arg1;
- (id)_meshStorageForDeviceIdentifier:(id)arg1;
- (id)_meshStorageForResidentDevice:(id)arg1;
- (void)_buildResidentsWithElection:(id)arg1 device:(id)arg2;
- (void)_deviceIsNotReachable:(id)arg1;
- (void)_handleAddUpdateOrReachabilityChangeForDevice:(id)arg1;
- (void)_updateAccessoryLinkQuality;
- (void)timerDidFire:(id)arg1;
- (void)__deviceResidentChanged:(id)arg1;
- (void)__rebuildResidents:(id)arg1;
- (void)__residentDeviceAddedOrUpdatedNotification:(id)arg1;
- (void)__residentDeviceRemovedNotification:(id)arg1;
- (void)__deviceIsNotReachable:(id)arg1;
- (void)__deviceIsReachable:(id)arg1;
- (void)__accessoryDidUpdateSuspendedState:(id)arg1;
- (void)__accessoryIsNotReachable:(id)arg1;
- (void)__accessoryIsReachable:(id)arg1;
- (void)dealloc;
- (id)initWithHomeManager:(id)arg1 residentEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

