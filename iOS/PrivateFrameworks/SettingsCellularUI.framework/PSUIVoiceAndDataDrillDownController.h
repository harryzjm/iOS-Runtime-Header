//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListItemsController.h>

@class CTServiceDescriptor, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString, PSUI5GStandaloneCache, PSUICoreTelephonyCarrierBundleCache, PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory;

__attribute__((visibility("hidden")))
@interface PSUIVoiceAndDataDrillDownController : PSListItemsController
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory *_switchFactory;
    PSUICoreTelephonyCarrierBundleCache *_cbCache;
    PSUI5GStandaloneCache *_saCache;
    int _currentRATMode;
    CoreTelephonyClient *_ctClient;
    CTServiceDescriptor *_serviceDescriptor;
}

- (void).cxx_destruct;
- (id)getLogger;
- (void)nrDisableStatusChanged:(id)arg1 status:(id)arg2;
- (void)airplaneModeChanged;
- (void)handleMaxDataRateChanged;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (void)listItemSelected:(id)arg1;
- (id)identifierForRATMode:(int)arg1;
- (int)RATModeForSpecifier:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)shouldShow5GSASwitch;
- (_Bool)shouldShowFooterTextWithVoiceExplanation;
- (_Bool)shouldShowVoNRSwitch;
- (_Bool)shouldShowVoLTESwitch;
- (_Bool)shouldShow5GReliabilityWarning;
- (_Bool)shouldShow5GSABatteryLifeReliabilityWarning;
- (id)getSwitchSpecifiers;
- (void)updateCurrentRATModeFromSpecifier:(id)arg1;
- (void)set5GRATModeSpecifierEnabledState:(id)arg1;
- (void)configure5GRATModeSpecifiersEnabledState;
- (_Bool)shouldEnable5GRATModeSpecifiers;
- (void)setRATGroupFooterText;
- (void)configureSpecifiers;
- (void)setUpRATModeSpecifierIdentifiers:(id)arg1;
- (void)prepareSpecifiers:(id)arg1;
- (void)reloadSpecifier:(id)arg1;
- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (void)startObservingNotifications;
- (id)init;
- (id)initWithCTClient:(id)arg1 switchFactory:(id)arg2 carrierBundleCache:(id)arg3 standaloneCache:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

