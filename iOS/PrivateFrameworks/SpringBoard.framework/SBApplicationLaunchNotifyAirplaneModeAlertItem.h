//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBApplicationLaunchNotifyAirplaneModeAlertItem
{
    _Bool _usesCellNetwork;
}

- (void)_sendUserToSettings;
- (void)_turnOffAirplaneMode;
- (void)_configureForAirplaneModeDataAlertOffCellular:(_Bool)arg1;
- (void)_configureForAirplaneModeDataAlertOnCellular:(_Bool)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithApplication:(id)arg1;

@end
