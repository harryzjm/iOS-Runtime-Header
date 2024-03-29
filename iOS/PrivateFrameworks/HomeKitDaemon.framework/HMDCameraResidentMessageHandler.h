//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDDevice, HMDMessageDispatcher, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraResidentMessageHandler : HMFObject
{
    struct os_unfair_lock_s _lock;
    HMDAccessory *_accessory;
    HMDMessageDispatcher *_messageDispatcher;
    NSString *_logIdentifier;
    NSMutableDictionary *_queuedMessagesByDeviceIdentifier;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *queuedMessagesByDeviceIdentifier; // @synthesize queuedMessagesByDeviceIdentifier=_queuedMessagesByDeviceIdentifier;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (void)sendNextMessageForDeviceIdentifier:(id)arg1;
- (id)nextMessageForDeviceIdentifier:(id)arg1;
- (void)dequeueRespondedMessageForDeviceIdentifier:(id)arg1;
- (void)enqueueMessage:(id)arg1 forDeviceIdentifier:(id)arg2;
@property(readonly, getter=isRemoteAccessDeviceReachable) _Bool remoteAccessDeviceReachable;
@property(readonly, getter=isUsingCompanionForRemoteAccessDevice) _Bool usingCompanionForRemoteAccessDevice;
@property(readonly) HMDDevice *remoteAccessDevice;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (id)initWithAccessory:(id)arg1 logIdentifier:(id)arg2 messageDispatcher:(id)arg3;
- (id)initWithAccessory:(id)arg1 logIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

