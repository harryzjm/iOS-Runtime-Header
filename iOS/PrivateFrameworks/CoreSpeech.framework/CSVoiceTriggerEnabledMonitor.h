//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSVoiceTriggerEnabledMonitor
{
    int _notifyToken;
    _Bool _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;
- (_Bool)_checkVoiceTriggerEnabled;
- (_Bool)isEnabled;
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;
- (void)_didReceiveVoiceTriggerSettingChanged:(_Bool)arg1;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(_Bool)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

