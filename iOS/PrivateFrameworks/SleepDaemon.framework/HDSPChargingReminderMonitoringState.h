//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HDSPChargingReminderMonitoringState
{
}

- (void)batteryLevelChanged:(float)arg1;
- (_Bool)schedulesExpiration;
- (id)stateName;
- (void)didExit;
- (void)didEnter;
- (id)expirationDate;

@end

