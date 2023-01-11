//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListItemsController.h>

#import <SettingsCellularUI/CoreTelephonyClientCapabilitiesDelegate-Protocol.h>
#import <SettingsCellularUI/UIAlertViewDelegate-Protocol.h>

@class CTServiceDescriptor, CTXPCServiceSubscriptionContext, CoreTelephonyClient, Logger, NSString, PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory;

__attribute__((visibility("hidden")))
@interface PSUIVoiceAndDataDrillDownController : PSListItemsController <CoreTelephonyClientCapabilitiesDelegate, UIAlertViewDelegate>
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory *_switchFactory;
    int _currentRATMode;
    CoreTelephonyClient *_ctClient;
    CTServiceDescriptor *_serviceDescriptor;
    Logger *_logger;
}

- (void).cxx_destruct;
- (id)getLogger;
- (void)airplaneModeChanged;
- (void)handleMaxDataRateChanged;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (void)listItemSelected:(id)arg1;
- (id)identifierForRATMode:(int)arg1;
- (int)RATModeForSpecifier:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)shouldShowFooterTextWithVoiceExplanation;
- (_Bool)shouldShowVoLTESwitch;
- (id)getSwitchSpecifiers;
- (void)updateCurrentRATModeFromSpecifier:(id)arg1;
- (void)setRATGroupFooterText;
- (void)configureSpecifiers;
- (void)setUpRATModeSpecifierIdentifiers:(id)arg1;
- (void)prepareSpecifiers:(id)arg1;
- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (void)startObservingNotifications;
- (id)init;
- (void)setSA:(_Bool)arg1 andReload:(_Bool)arg2;
- (void)setVoLTE:(_Bool)arg1 andReload:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
