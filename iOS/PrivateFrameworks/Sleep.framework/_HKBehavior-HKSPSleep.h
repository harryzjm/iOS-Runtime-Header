//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKBehavior.h>

@interface _HKBehavior (HKSPSleep)
- (unsigned long long)hksp_device;
- (_Bool)hksp_isDeviceUnlocked;
@property(nonatomic) _Bool hksp_isRunningUnitTests;
- (_Bool)hksp_demoMode;
- (void)hksp_activePairedDeviceHasSleepAppInstalledWithCompletion:(CDUnknownBlockType)arg1;
- (id)hksp_activePairedDeviceProductType;
- (_Bool)hksp_activePairedDeviceHasHomeButton;
- (_Bool)_hksp_activePairedDeviceSupportsCapability:(id)arg1;
- (_Bool)hksp_activePairedDeviceSupportsSleepLauncherComplication;
- (_Bool)hksp_activePairedDeviceSupportsFocusMode;
- (_Bool)hksp_activePairedDeviceSupportsSleepStages;
- (_Bool)hksp_activePairedDeviceSupportsSleep;
- (_Bool)hksp_hasActivePairedDevice;
- (_Bool)hksp_useDemoSleepData;
- (_Bool)hksp_supportsDailyAnalytics;
- (_Bool)hksp_supportsLegacySleepAlarms;
- (_Bool)hksp_supportsSleepAlarms;
- (_Bool)hksp_supportsCFUserNotifications;
- (_Bool)hksp_supportsUserNotificationCenter;
- (_Bool)hksp_supportsWakeDetection;
- (_Bool)hksp_supportsGoodMorningAlerts;
- (_Bool)hksp_supportsSleepTracking;
- (_Bool)hksp_supportsWakeUpResults;
- (_Bool)hksp_supportsSleepWidget;
- (_Bool)hksp_supportsHealthData;
- (_Bool)hksp_supportsSleepLockScreen;
- (_Bool)hksp_supportsChargingReminders;
- (_Bool)hksp_supportsSleepDaemon;
- (_Bool)hksp_supportsSleep;
- (_Bool)_hksp_supportsSleep_checkTinker:(_Bool)arg1;
@end

