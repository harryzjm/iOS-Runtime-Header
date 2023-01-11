//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachine.h>

#import <SleepDaemon/HDSPWakeDetectionStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPWakeDetectionStateMachineEventHandler-Protocol.h>
#import <SleepDaemon/HDSPWakeDetectionStateMachineInfoProvider-Protocol.h>

@class HDSPWakeDetectionDetectingState, HDSPWakeDetectionDisabledState, HDSPWakeDetectionNotifiedState, HDSPWakeDetectionWaitingState, HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate, NSString;
@protocol HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, NAScheduler;

__attribute__((visibility("hidden")))
@interface HDSPWakeDetectionStateMachine : HKSPPersistentStateMachine <HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler>
{
    HDSPWakeDetectionDisabledState *_disabledState;
    HDSPWakeDetectionWaitingState *_waitingState;
    HDSPWakeDetectionDetectingState *_detectingState;
    HDSPWakeDetectionNotifiedState *_notifiedState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HDSPWakeDetectionNotifiedState *notifiedState; // @synthesize notifiedState=_notifiedState;
@property(readonly, nonatomic) HDSPWakeDetectionDetectingState *detectingState; // @synthesize detectingState=_detectingState;
@property(readonly, nonatomic) HDSPWakeDetectionWaitingState *waitingState; // @synthesize waitingState=_waitingState;
@property(readonly, nonatomic) HDSPWakeDetectionDisabledState *disabledState; // @synthesize disabledState=_disabledState;
- (id)detectionWindowAfterDate:(id)arg1;
@property(readonly, nonatomic) _Bool sleepModeIsOff;
@property(readonly, nonatomic) unsigned long long sleepScheduleState;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property(readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property(readonly, nonatomic) NSDate *currentDate;
- (void)postWakeDetectionNotification;
- (void)stopWakeDetection;
- (void)startWakeDetection;
- (void)unscheduleWakeDetection;
- (void)scheduleWakeDetection;
- (void)wakeupEventDetected:(id)arg1;
- (void)wakeDetectionEventDue;
- (id)stateMachineLog;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) __weak id <HDSPWakeDetectionStateMachineDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <HDSPWakeDetectionStateMachineInfoProvider> infoProvider; // @dynamic infoProvider;
@property(readonly) Class superclass;

@end
