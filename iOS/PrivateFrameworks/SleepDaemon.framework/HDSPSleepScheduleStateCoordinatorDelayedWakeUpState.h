//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState
{
}

- (void)bedtimeReached;
- (void)windDownReached;
- (id)expirationDate;
- (void)updateStateForcibly:(_Bool)arg1;
- (void)significantScheduleChangeOccurred:(unsigned long long)arg1;
- (void)wakeUpConfirmed;
- (void)didExit;
- (unsigned long long)scheduleState;
- (id)stateName;

@end

