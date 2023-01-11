//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachine.h>

#import <SleepDaemon/HDSPSleepModeStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPSleepModeStateMachineEventHandler-Protocol.h>
#import <SleepDaemon/HDSPSleepModeStateMachineInfoProvider-Protocol.h>

@class HDSPSleepModeBedtimeState, HDSPSleepModeManualBedtimeState, HDSPSleepModeManualOffState, HDSPSleepModeOffState, HDSPSleepModeWindDownState, HKSPSleepScheduleModel, NSDate, NSString;
@protocol HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, NAScheduler;

__attribute__((visibility("hidden")))
@interface HDSPSleepModeStateMachine : HKSPPersistentStateMachine <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPSleepModeStateMachineEventHandler>
{
    HDSPSleepModeOffState *_offState;
    HDSPSleepModeWindDownState *_windDownState;
    HDSPSleepModeManualOffState *_manualOffState;
    HDSPSleepModeBedtimeState *_bedtimeState;
    HDSPSleepModeManualBedtimeState *_manualBedtimeState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HDSPSleepModeManualBedtimeState *manualBedtimeState; // @synthesize manualBedtimeState=_manualBedtimeState;
@property(readonly, nonatomic) HDSPSleepModeBedtimeState *bedtimeState; // @synthesize bedtimeState=_bedtimeState;
@property(readonly, nonatomic) HDSPSleepModeManualOffState *manualOffState; // @synthesize manualOffState=_manualOffState;
@property(readonly, nonatomic) HDSPSleepModeWindDownState *windDownState; // @synthesize windDownState=_windDownState;
@property(readonly, nonatomic) HDSPSleepModeOffState *offState; // @synthesize offState=_offState;
@property(readonly, nonatomic) _Bool isInDemoMode;
@property(readonly, nonatomic) unsigned long long sleepScheduleState;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property(readonly, nonatomic) NSDate *currentDate;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (void)userEngagedBedtimeMode;
- (void)userDisengagedCurrentMode;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)arg1;
- (id)stateMachineLog;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) __weak id <HDSPSleepModeStateMachineDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <HDSPSleepModeStateMachineInfoProvider> infoProvider; // @dynamic infoProvider;
@property(readonly) Class superclass;

@end
