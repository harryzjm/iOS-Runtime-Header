//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeUI/STAlwaysAllowListControllerDelegate-Protocol.h>
#import <ScreenTimeUI/STDeviceBedtimeListControllerDelegate-Protocol.h>

@class NSString, PSSpecifier;

@interface STAllowancesConfigurationGroupSpecifierProvider <STDeviceBedtimeListControllerDelegate, STAlwaysAllowListControllerDelegate>
{
    PSSpecifier *_deviceBedtimeSpecifier;
    PSSpecifier *_appLimitsSpecifier;
    PSSpecifier *_alwaysAllowedSpecifier;
    PSSpecifier *_contentPrivacySpecifier;
}

@property(retain, nonatomic) PSSpecifier *contentPrivacySpecifier; // @synthesize contentPrivacySpecifier=_contentPrivacySpecifier;
@property(retain, nonatomic) PSSpecifier *alwaysAllowedSpecifier; // @synthesize alwaysAllowedSpecifier=_alwaysAllowedSpecifier;
@property(retain, nonatomic) PSSpecifier *appLimitsSpecifier; // @synthesize appLimitsSpecifier=_appLimitsSpecifier;
@property(retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier; // @synthesize deviceBedtimeSpecifier=_deviceBedtimeSpecifier;
- (void).cxx_destruct;
- (_Bool)showDemoModeAlertIfNeeded;
- (void)showContentPrivacyViewController:(id)arg1;
- (id)contentPrivacyDetailText;
- (void)alwaysAllowListController:(id)arg1 didFinishEditingAlwaysAllowList:(id)arg2;
- (void)showAlwaysAllowedViewController:(id)arg1;
- (id)alwaysAllowedDetailText;
- (void)showAppLimitsViewController:(id)arg1;
- (id)appLimitsDetailText;
- (void)bedtimeListController:(id)arg1 didFinishEditingBedtime:(id)arg2;
- (void)showDeviceBedtimeViewController:(id)arg1;
- (id)deviceDowntimeDetailText;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
