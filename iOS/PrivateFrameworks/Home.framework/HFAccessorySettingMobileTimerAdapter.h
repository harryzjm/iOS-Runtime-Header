//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTAlarmManager;
@protocol HFAccessorySettingMobileTimerAdapterDelegate;

@interface HFAccessorySettingMobileTimerAdapter
{
    id <HFAccessorySettingMobileTimerAdapterDelegate> _delegate;
    unsigned long long _mode;
    MTAlarmManager *_alarmManagerForSynchronization;
}

@property(retain, nonatomic) MTAlarmManager *alarmManagerForSynchronization; // @synthesize alarmManagerForSynchronization=_alarmManagerForSynchronization;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <HFAccessorySettingMobileTimerAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_respondToAlarmManagerUpdate;
- (void)_alarmWasUpdated:(id)arg1;
- (void)_alarmWasDeleted:(id)arg1;
- (void)_alarmWasAdded:(id)arg1;
- (void)_alarmDidFire:(id)arg1;
- (void)_setupAccessoryAdapterMode;
- (id)_homeKitAlarms;
- (id)_synchronizeMobileTimerToHomeKit;
- (id)_synchronizeHomeKitToMobileTimer;
- (id)_submitAlarmsToHomeKit:(id)arg1;
- (id)alarmDataContentSetting;
- (id)loggedInAppleMusicAccountDSID;
- (id)addAlarm:(id)arg1;
- (id)removeAlarm:(id)arg1;
- (id)updateAlarm:(id)arg1;
- (id)alarmManagerAlarms;
- (id)allAlarms;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1;
- (id)initWithAccessoryProfile:(id)arg1 mode:(unsigned long long)arg2;

@end
