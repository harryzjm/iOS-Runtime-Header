//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPDiagnosticsProvider-Protocol.h>
#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPGoodMorningAlertObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepLockScreenAssertionManagerDelegate-Protocol.h>
#import <SleepDaemon/HDSPSleepLockScreenStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPSleepLockScreenStateMachineInfoProvider-Protocol.h>
#import <SleepDaemon/HDSPSleepModeObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleModelObserver-Protocol.h>
#import <SleepDaemon/HKSPSensitiveUIObserver-Protocol.h>

@class HDSPEnvironment, HDSPSleepLockScreenAssertionManager, HDSPSleepLockScreenStateMachine, HKSPSleepScheduleModel, NSDate, NSDictionary, NSString;
@protocol NAScheduler;

@interface HDSPSleepLockScreenManager : NSObject <HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenAssertionManagerDelegate, HKSPSensitiveUIObserver, HDSPDiagnosticsProvider, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPGoodMorningAlertObserver, HDSPEnvironmentAware>
{
    long long _state;
    long long _overrideState;
    NSDictionary *_overrideUserInfo;
    struct os_unfair_lock_s _sleepLockScreenLock;
    HDSPEnvironment *_environment;
    HDSPSleepLockScreenStateMachine *_stateMachine;
    HDSPSleepLockScreenAssertionManager *_assertionManager;
    long long _currentLockScreenState;
    CDUnknownBlockType _didUpdateAlertAssertion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didUpdateAlertAssertion; // @synthesize didUpdateAlertAssertion=_didUpdateAlertAssertion;
@property(nonatomic) long long currentLockScreenState; // @synthesize currentLockScreenState=_currentLockScreenState;
@property(readonly, nonatomic) HDSPSleepLockScreenAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property(readonly, nonatomic) HDSPSleepLockScreenStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) struct os_unfair_lock_s sleepLockScreenLock; // @synthesize sleepLockScreenLock=_sleepLockScreenLock;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
- (id)diagnosticInfo;
- (id)diagnosticDescription;
- (id)_currentState;
- (void)lockScreenDidConnect;
- (void)overrideLockScreenState:(long long)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic) long long sleepMode;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property(readonly, nonatomic) NSDate *currentDate;
- (void)sensitiveUIStateChanged;
- (long long)_lock_resolvedLockScreenState;
- (_Bool)_lock_overridingLockScreenState;
- (void)_lock_updateLockScreenAssertion;
- (_Bool)_lock_shouldShowLockScreenForState:(long long)arg1;
- (void)sleepLockScreenStateDidChange:(long long)arg1 previousState:(long long)arg2;
- (void)dismissAlertForGoodMorning;
- (void)presentAlertForGoodMorning;
- (void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepSettings:(id)arg3;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(id)arg1 assertionManager:(id)arg2;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
