//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FMDFMIPManager : NSObject
{
}

+ (id)sharedInstance;
- (void)stopSoundMessageWithCompletion:(CDUnknownBlockType)arg1;
- (void)playSoundWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getNeedsLocateAckLostModeFileURL;
- (id)getManagedLostModeFileURL;
- (void)_disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateNeedsLocateAckLostModeWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateManagedLostModeWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isRunningAsMobileUser;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (void)_forceFMWUpgradeAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAccessoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearData:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)soundStoppedForAccessoryIdentifier:(id)arg1;
- (void)waitForRoutableAccessory:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopPlayingSoundForAccessory:(id)arg1 rampDownDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startPlayingSoundForAccessory:(id)arg1 duration:(double)arg2 rampUpDuration:(double)arg3 channels:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)signatureHeadersWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pathsToPreserveAcrossWipe;
- (void)userNotifiedOfActivationLockForPairedDevices:(id)arg1;
- (void)userNotifiedOfActivationLockForAllPairedDevices;
- (void)setLowBatteryLocateEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)lowBatteryLocateEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)initiateLostModeExitAuthWithCompletion:(CDUnknownBlockType)arg1;
- (void)didReceiveLostModeExitAuthToken:(id)arg1;
- (_Bool)needsLostModeExitAuth;
- (void)enableActivationLockWithCompletion:(CDUnknownBlockType)arg1;
- (void)isActivationLockedWithCompletion:(CDUnknownBlockType)arg1;
- (void)isActivationLockEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)isActivationLockAllowedWithCompletion:(CDUnknownBlockType)arg1;
- (void)markPairedDeviceWithUDID:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2;
- (id)enableFMIPInContext:(unsigned long long)arg1;
- (void)didChangeFMIPAccountInfo:(id)arg1;
- (id)fmipAccount;
- (void)fmipAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)fmipStateWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_checkLostModeInSharedContainer;
- (_Bool)lockdownShouldDisableDevicePairing;
- (_Bool)lockdownShouldDisableDeviceRestore;
- (void)deviceActivationDidSucceed;
- (void)playSoundWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userDidAckManagedLostModeLocateWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableManagedLostModeWithLocatedMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableManagedLostModeWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableLostMode;
- (id)enableLostModeWithInfo:(id)arg1;
- (id)lostModeInfo;
- (unsigned long long)_needsAckLostModeType;
- (unsigned long long)_managedLostModeType;
- (_Bool)isLostModeActive;
- (_Bool)isManagedLostModeActive;
- (_Bool)lostModeIsActive;
- (void)activationLockVersionWithCompletion:(CDUnknownBlockType)arg1;
- (void)addNotificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showDailyLocateReport;
- (void)setDailyLocateReportEnabled:(_Bool)arg1;
- (void)disableBiometricIDForLostModeWithCompletion:(CDUnknownBlockType)arg1;
- (id)_postWipePrefPath;
- (_Bool)_quickFetchFMIPEnabledstate;

@end

