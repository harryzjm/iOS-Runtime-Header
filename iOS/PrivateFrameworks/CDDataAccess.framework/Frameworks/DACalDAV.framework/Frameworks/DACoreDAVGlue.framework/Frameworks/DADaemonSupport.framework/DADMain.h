//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CDDataAccessExpress/DADisableableObject.h>

#import <DADaemonSupport/DATransactionMonitorDelegate-Protocol.h>
#import <DADaemonSupport/UMUserSwitchStakeholder-Protocol.h>

@class NSArray, NSString, NSTimer;

@interface DADMain : DADisableableObject <UMUserSwitchStakeholder, DATransactionMonitorDelegate>
{
    NSTimer *_delayedShutdownTimer;
    NSTimer *_forceShutdownTimer;
    _Bool *_runLoopStoppedRef;
    NSArray *_userSwitchTasks;
}

+ (id)sharedMain;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *userSwitchTasks; // @synthesize userSwitchTasks=_userSwitchTasks;
- (void)dealloc;
- (id)init;
- (void)_configureAggdLogging;
- (void)disable;
- (void)_setRunLoopStopped:(_Bool)arg1;
- (void)waitForSystemAvailabilityWithCompletionBlock:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)shutdownDAD;
- (void)addLanguageChangeHandler;
- (void)addSignalHandler;
- (void)didFinishAllXPCTransactions;
- (void)willSwitchUser;
- (void)addToOperationsQueueDisabledCheckAndGoBlock:(CDUnknownBlockType)arg1 wrappedBlock:(CDUnknownBlockType)arg2;
- (void)_forceShutdownDaemonOnLogoutInTimeInterval:(int)arg1;
- (void)_forceShutdownTimerFired:(id)arg1;
- (void)_shutdownDaemon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
