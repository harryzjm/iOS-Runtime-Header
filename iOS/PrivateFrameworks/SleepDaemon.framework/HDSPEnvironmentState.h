//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPStateMachineState.h>

#import <SleepDaemon/HDSPEnvironmentStateMachineEventHandler-Protocol.h>

@class HDSPEnvironmentStateMachine, NSString;

__attribute__((visibility("hidden")))
@interface HDSPEnvironmentState : HKSPStateMachineState <HDSPEnvironmentStateMachineEventHandler>
{
}

- (void)dataMigrationDidComplete;
- (void)systemDidBecomeReady;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HDSPEnvironmentStateMachine *stateMachine; // @dynamic stateMachine;
@property(readonly) Class superclass;

@end
