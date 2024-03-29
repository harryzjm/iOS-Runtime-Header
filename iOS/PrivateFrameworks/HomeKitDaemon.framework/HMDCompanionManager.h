//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSObject, NSString;
@protocol HMDIDSService, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCompanionManager : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDDevice *_companion;
    id <HMDIDSService> _service;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (_Bool)isCompatibleCompanionDevice:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMDIDSService> service; // @synthesize service=_service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
@property(readonly) HMDDevice *companion; // @synthesize companion=_companion;
- (void)__initializeConnectedDevices;
- (id)attributeDescriptions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

