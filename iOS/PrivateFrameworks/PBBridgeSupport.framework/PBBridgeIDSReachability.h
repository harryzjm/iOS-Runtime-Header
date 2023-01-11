//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PBBridgeSupport/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableOrderedSet, NSString, PBBridgeIDSReachabilityStatusObject;
@protocol OS_dispatch_queue;

@interface PBBridgeIDSReachability : NSObject <IDSServiceDelegate>
{
    NSMutableOrderedSet *_observers;
    IDSService *_reachabilityService;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _lock;
    PBBridgeIDSReachabilityStatusObject *_activeDeviceStatus;
}

+ (id)nrDevices;
+ (id)deviceStatusFromIDSDevices:(id)arg1 nrDevices:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 linkedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_processDevices:(id)arg1;
- (unsigned long long)reachabilityForDevice:(id)arg1;
- (id)getDeviceStatusChangeFromIDSDevices:(id)arg1 nrDevices:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
