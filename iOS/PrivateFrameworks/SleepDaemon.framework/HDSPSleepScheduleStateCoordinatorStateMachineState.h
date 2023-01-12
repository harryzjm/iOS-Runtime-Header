//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachineState.h>

@class HDSPSleepScheduleStateCoordinatorStateMachine, NSString;

__attribute__((visibility("hidden")))
@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState
{
    unsigned long long _scheduleState;
}

@property(readonly, nonatomic) unsigned long long scheduleState; // @synthesize scheduleState=_scheduleState;
- (void)wakeUpConfirmed;
- (void)wakeTimeReached;
- (void)bedtimeReached;
- (void)windDownReached;
- (void)significantScheduleChangeOccurred:(unsigned long long)arg1;
- (void)scheduleModelChanged:(id)arg1;
- (void)timeZoneChange;
- (void)significantTimeChange;
- (id)_determineNextStateFromTimeline;
- (id)_timelineForDate:(id)arg1;
- (_Bool)isAlarmEnabled;
- (_Bool)isSleepScheduleDisabled;
- (void)stateDidExpireWithContext:(id)arg1;
- (void)_forceUpdateStateWithChangeReason:(unsigned long long)arg1;
- (id)nextStateWithContext:(id *)arg1 forceUpdate:(_Bool)arg2;
- (id)nextStateWithContext:(id *)arg1;
- (void)didEnterWithPreviousState:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine; // @dynamic stateMachine;
@property(readonly) Class superclass;

@end

