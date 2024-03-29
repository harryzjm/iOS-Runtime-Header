//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAccessCodeDemoDataMocker, HMDBulletinBoard, HMDDevice, HMDHome, HMDHomeAdministratorHandler, HMDHomeWalletKeyManager, HMDRemoteMessageForwarder, HMFMessageDispatcher, NSArray, NSNotificationCenter, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeManagerContext : NSObject
{
    HMDHome *_home;
    HMFMessageDispatcher *_messageDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_UUID;
    HMDBulletinBoard *_bulletinBoard;
    HMDRemoteMessageForwarder *_remoteMessageForwarder;
    HMDAccessCodeDemoDataMocker *_demoDataMocker;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDAccessCodeDemoDataMocker *demoDataMocker; // @synthesize demoDataMocker=_demoDataMocker;
@property(readonly) HMDRemoteMessageForwarder *remoteMessageForwarder; // @synthesize remoteMessageForwarder=_remoteMessageForwarder;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)generateAccessCodeValueFromConstraints:(id)arg1 accessoryAccessCodes:(id)arg2 homeAccessCodes:(id)arg3;
- (id)hapAccessoryWithUUID:(id)arg1;
@property(readonly) NSArray *UUIDsOfUsersWithoutAccessCodes;
@property(readonly) NSArray *UUIDsOfMatterAccessoriesSupportingAccessCodes;
@property(readonly) NSArray *UUIDsOfHAPAccessoriesSupportingAccessCodes;
@property(readonly) NSArray *UUIDsOfAccessoriesSupportingAccessCodes;
@property(readonly) NSArray *accessoriesSupportingAccessCodes;
- (id)userWithUUID:(id)arg1;
- (id)userForMessage:(id)arg1;
- (void)redispatchToResidentMessage:(id)arg1;
- (id)_performMockedReadRequests:(id)arg1;
- (id)performReadRequests:(id)arg1 withRetries:(long long)arg2 timeInterval:(double)arg3 loggingObject:(id)arg4;
- (id)performWriteRequests:(id)arg1 withRetries:(long long)arg2 timeInterval:(double)arg3 loggingObject:(id)arg4;
- (id)_performMockedWriteRequests:(id)arg1;
@property(readonly) HMDDevice *residentCommunicationHandlerPreferredDevice;
@property(readonly, getter=hasHomeOnboardedForAccessCodes) _Bool homeOnboardedForAccessCodes;
@property(readonly, getter=isHomeAppForegrounded) _Bool homeAppForegrounded;
@property(readonly, getter=isResidentSupported) _Bool residentSupported;
@property(readonly, getter=isCurrentDeviceWatch) _Bool currentDeviceWatch;
@property(readonly, getter=isCurrentDeviceOwnerController) _Bool currentDeviceOwnerController;
@property(readonly, getter=isCurrentDeviceOwnerUser) _Bool currentDeviceOwnerUser;
@property(readonly, getter=isCurrentDeviceResidentCapable) _Bool currentDeviceResidentCapable;
@property(readonly) double residentDataSyncVerificationRetryTimeInterval;
@property(readonly) long long residentDataSyncVerificationRetries;
@property(readonly) double dataCleanUpCheckTimerInterval;
@property(readonly) double removedUserAccessCodeTimeToLive;
@property(readonly) double accessoryReadWriteRetryTimeInterval;
@property(readonly) long long accessoryReadWriteRetries;
@property(readonly, getter=isDemoDataMockerEnabled) _Bool demoDataMockerEnabled;
@property(readonly) _Bool primaryResidentSupportsAccessCodes;
@property(readonly, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
@property(readonly) HMDHomeAdministratorHandler *administratorHandler;
@property(readonly) HMDHomeWalletKeyManager *walletKeyManager;
@property(readonly) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly) NSNotificationCenter *notificationCenter;
@property(readonly, getter=isFeatureEnabled) _Bool featureEnabled;
- (void)configureWithMessageDispatcher:(id)arg1;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 UUID:(id)arg3;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

