//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/SFUnlockClientProtocol-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, SFAutoUnlockManagerDelegate;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>
{
    id <SFAutoUnlockManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (void)enableBluetoothAndWiFi;
+ (_Bool)bluetoothAndWiFiEnabled;
+ (_Bool)autoUnlockEnabled:(unsigned int)arg1;
+ (_Bool)autoUnlockSupported;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) id <SFAutoUnlockManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)authPromptInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)autoUnlockStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)failedUnlockWithError:(id)arg1;
- (void)completedUnlockWithDevice:(id)arg1;
- (void)beganAttemptWithDevice:(id)arg1;
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;
- (void)enabledDevice:(id)arg1;
- (void)keyDeviceLocked:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2;
- (void)cancelAutoUnlock;
- (void)attemptAutoUnlock;
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)repairCloudPairing;
@property(readonly, nonatomic) double spinnerDelay;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

