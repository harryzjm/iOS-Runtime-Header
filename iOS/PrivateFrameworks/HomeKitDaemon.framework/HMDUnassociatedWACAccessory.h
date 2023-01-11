//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDUnassociatedAccessory, HMFTimer, NSObject, NSString;
@protocol HMDWACAccessoryConfigurationDelegate, HMDWACDevice, OS_dispatch_queue;

@interface HMDUnassociatedWACAccessory <HMFLogging, HMFTimerDelegate>
{
    id <HMDWACDevice> _wacDevice;
    CDUnknownBlockType _completionHandler;
    HMFTimer *_handoffExpirationTimer;
    long long _state;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDUnassociatedAccessory *_postWACAccessory;
    id <HMDWACAccessoryConfigurationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *wacDeviceID;
}

+ (id)logCategory;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)_postWACMatchingAccessoryFound:(id)arg1;
- (void)_abort:(CDUnknownBlockType)arg1;
- (void)_postWACMatchTimeout;
- (void)_waitForPostWACMatch;
- (void)_configureDeviceCompleted:(id)arg1;
- (void)_configureDevice;
- (void)_userPermissionResponse:(_Bool)arg1;
- (void)_requestUserPermission;
- (void)updateWithMatchingUnassociatedAccessory:(id)arg1;
- (void)cancelConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSString *wacDeviceID; // @synthesize wacDeviceID;
@property(retain, setter=setWACDevice:) id <HMDWACDevice> wacDevice;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 wacDevice:(id)arg5;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <HMDWACAccessoryConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDelegate:(id)arg1 withQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

