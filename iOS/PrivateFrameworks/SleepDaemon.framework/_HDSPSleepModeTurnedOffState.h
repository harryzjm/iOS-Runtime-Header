//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _HDSPSleepModeTurnedOffState
{
}

- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (_Bool)_shouldUpdateSleepModeStateForState:(unsigned long long)arg1 changeReason:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)stateDidExpire;
- (void)updateState;
- (id)expirationDate;

@end

