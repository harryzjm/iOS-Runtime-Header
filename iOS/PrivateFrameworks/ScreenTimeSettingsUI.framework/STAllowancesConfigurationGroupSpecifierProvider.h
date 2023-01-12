//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSTimer, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STAllowancesConfigurationGroupSpecifierProvider
{
    _Bool _isCommunicationSafetyRegionSupported;
    PSSpecifier *_deviceBedtimeSpecifier;
    PSSpecifier *_appLimitsSpecifier;
    PSSpecifier *_alwaysAllowedSpecifier;
    PSSpecifier *_communicationLimitsSpecifier;
    PSSpecifier *_contentPrivacySpecifier;
    PSSpecifier *_communicationSafetySpecifier;
    NSTimer *_downtimeScheduleRefreshTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *downtimeScheduleRefreshTimer; // @synthesize downtimeScheduleRefreshTimer=_downtimeScheduleRefreshTimer;
@property(retain, nonatomic) PSSpecifier *communicationSafetySpecifier; // @synthesize communicationSafetySpecifier=_communicationSafetySpecifier;
@property(readonly, nonatomic) _Bool isCommunicationSafetyRegionSupported; // @synthesize isCommunicationSafetyRegionSupported=_isCommunicationSafetyRegionSupported;
@property(retain, nonatomic) PSSpecifier *contentPrivacySpecifier; // @synthesize contentPrivacySpecifier=_contentPrivacySpecifier;
@property(retain, nonatomic) PSSpecifier *communicationLimitsSpecifier; // @synthesize communicationLimitsSpecifier=_communicationLimitsSpecifier;
@property(retain, nonatomic) PSSpecifier *alwaysAllowedSpecifier; // @synthesize alwaysAllowedSpecifier=_alwaysAllowedSpecifier;
@property(retain, nonatomic) PSSpecifier *appLimitsSpecifier; // @synthesize appLimitsSpecifier=_appLimitsSpecifier;
@property(retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier; // @synthesize deviceBedtimeSpecifier=_deviceBedtimeSpecifier;
- (_Bool)showDemoModeAlertIfNeeded;
- (_Bool)_isCommunicationSafetyRegionSupportedOrAlreadyEnabled;
- (id)_communicationSafetyDetailText;
- (void)_communicationSafetyDidChange;
- (void)showCommunicationSafetyViewController:(id)arg1;
- (id)contentPrivacyDetailText;
- (void)_showCommunicationLimitsViewController:(id)arg1;
- (id)_communicationLimitsDetailText;
- (void)_resetCommunicationLimitsDetailText;
- (void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_isRemoteUserDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)_isManagedDidChangeTo:(_Bool)arg1;
- (void)_userTypeDidChange:(unsigned long long)arg1;
- (void)alwaysAllowListController:(id)arg1 didFinishEditingAlwaysAllowList:(id)arg2;
- (void)showAlwaysAllowedViewController:(id)arg1;
- (id)alwaysAllowedDetailText;
- (void)_hasWatchOSDevicesOnlyDidChange:(_Bool)arg1;
- (void)showAppLimitsViewController:(id)arg1;
- (id)appLimitsDetailText;
- (void)bedtimeListController:(id)arg1 didFinishEditingBedtime:(id)arg2;
- (void)showDeviceBedtimeViewController:(id)arg1;
- (id)_subtitleTextForDeviceBedtime:(id)arg1;
- (void)_refreshBedtimeSpecifiersForBedtime:(id)arg1;
- (void)_deviceBedtimeDidChange:(id)arg1;
- (void)scheduleDowntimeRefreshIfNeeded;
- (void)scheduleDowntimeRefreshAndReloadSpecifiersForBedtime:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

