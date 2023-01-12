//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, _GCNintendoJoyConDevice;
@protocol NSObject><NSCopying><NSSecureCoding, OS_dispatch_queue, _GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry;

__attribute__((visibility("hidden")))
@interface _GCNintendoJoyConDeviceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_claimedServices;
    NSMutableDictionary *_physicalDevices;
    _GCNintendoJoyConDevice *_pendingJoyCon;
    NSMutableSet *_fusionGestureDevices;
    id <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> _deviceRegistry;
}

- (void).cxx_destruct;
@property __weak id <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> deviceRegistry; // @synthesize deviceRegistry=_deviceRegistry;
- (_Bool)acceptFilterConnection:(id)arg1 forHIDService:(id)arg2;
- (_Bool)acceptDriverConnection:(id)arg1 forHIDService:(id)arg2;
- (void)relinquishHIDService:(id)arg1;
- (void)_onqueue_relinquishHIDDevice:(id)arg1;
- (void)claimHIDService:(id)arg1;
- (void)_onqueue_checkAndDisconnectDuplicateDevice:(id)arg1;
- (id)matchHIDService:(id)arg1;
- (void)_onqueue_registerDefaultConfigurationsForDevice:(id)arg1;
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)arg1;
- (void)_onqueue_tryRegisteringFusionConfigurationWithDevice:(id)arg1;
- (void)_onqueue_registerFusionConfigurationWithLeftDevice:(id)arg1 rightDevice:(id)arg2;
- (void)deactivateLogicalDevice:(id)arg1;
- (void)activateLogicalDevice:(id)arg1;
- (id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier;
- (void)device:(id)arg1 fusionGestureActive:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

