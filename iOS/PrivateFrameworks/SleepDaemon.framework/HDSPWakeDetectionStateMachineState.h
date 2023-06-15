//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachineState.h>

@class HDSPWakeDetectionStateMachine, NSString;

__attribute__((visibility("hidden")))
@interface HDSPWakeDetectionStateMachineState : HKSPPersistentStateMachineState
{
}

- (void)earlyWakeUpWasNotifiedRemotely;
- (void)wakeupEventDetected:(unsigned long long)arg1 date:(id)arg2;
- (void)wakeDetectionEventDue;
- (_Bool)isWakeDetectionDisabled;
- (void)updateState;
@property(readonly, nonatomic) _Bool isDetectingState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HDSPWakeDetectionStateMachine *stateMachine; // @dynamic stateMachine;
@property(readonly) Class superclass;

@end

