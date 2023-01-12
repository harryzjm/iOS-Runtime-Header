//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HAPSuspendedAccessory, HMFTimer, NSString;
@protocol HMDLowPowerModeProfileDelegate;

@interface HMDLowPowerModeProfile <HMFTimerDelegate>
{
    CDUnknownBlockType _pendingWakeBlock;
    NSString *_clientIdentifier;
    unsigned long long _internalState;
    unsigned long long _internalOldState;
    unsigned long long _retryCount;
    HMFTimer *_backoffTimer;
    id <HMDLowPowerModeProfileDelegate> _delegate;
    HAPSuspendedAccessory *_suspendedAccessory;
    HMFTimer *_waitForWakeTimer;
}

+ (id)WoWLANInfoForSupportedSleepConfiguration:(id)arg1;
+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) HMFTimer *waitForWakeTimer; // @synthesize waitForWakeTimer=_waitForWakeTimer;
@property(retain, nonatomic) HAPSuspendedAccessory *suspendedAccessory; // @synthesize suspendedAccessory=_suspendedAccessory;
@property(nonatomic) __weak id <HMDLowPowerModeProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMFTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long internalOldState; // @synthesize internalOldState=_internalOldState;
@property(nonatomic) unsigned long long internalState; // @synthesize internalState=_internalState;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy, nonatomic) CDUnknownBlockType pendingWakeBlock; // @synthesize pendingWakeBlock=_pendingWakeBlock;
- (void)timerDidFire:(id)arg1;
- (void)_stopBackoffTimerForType:(unsigned long long)arg1;
- (void)_startTimerForType:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)newHAPSuspendedAccessoryFromAccessoryConnectivityInfoWithType:(unsigned long long)arg1;
- (unsigned long long)suspendedState;
- (id)supportedSleepConfigurationCharacteristic;
- (id)selectedSleepConfigurationCharacteristic;
- (id)powerManagementService;
- (id)connectivityInfo;
- (id)hapAccessory;
- (void)handleAccessoryConnectionChanged:(id)arg1;
- (void)handleAccessoryCharacteristicsChanged:(id)arg1;
- (_Bool)_shouldManageAccessoryLPM;
- (void)_updateCharacteristicsNotifications:(_Bool)arg1;
- (void)_readInitialRequiredCharacteristics;
- (void)_readFromCharacteristic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_writeToCharacteristic:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processSelectedSleepConfigurationParametersWithCharacteristic:(id)arg1;
- (void)_processSupportedSleepConfigurationParametersWithCharacteristic:(id)arg1;
- (void)_queryAccessoryWithOperation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unconfigureAccessoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_configureAccessoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_readAccessorySelectedConfigWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stateMachine_unconfigureAccessory;
- (void)_stateMachine_configureAccessory;
- (void)_stateMachine_readAccessoryConfiguration;
- (void)_stateMachine_Idle;
- (void)_stateMachine_backoffOperation;
- (void)_enterState:(unsigned long long)arg1;
- (void)enterState:(unsigned long long)arg1;
- (_Bool)_canEnterNewState:(unsigned long long)arg1;
- (void)_resetStateMachine;
- (void)_runStateMachine;
- (void)_wakeSuspendedAccessory:(id)arg1 activity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)wakeSuspendedAccessoryWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)wakeSuspendedAccessoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)unconfigure;
- (void)handleInitialState;
- (void)registerForMessages;
- (id)initWithAccessory:(id)arg1 powerManagementservice:(id)arg2 workQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
