//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTServiceDescriptor, CTXPCServiceSubscriptionContext, CoreTelephonyClient, Logger, PSListController, PSUICoreTelephonyCallCache, PSUICoreTelephonyCarrierBundleCache, PSUICoreTelephonyRegistrationCache, PSUIDeviceWiFiState;

__attribute__((visibility("hidden")))
@interface PSUIVoiceAndDataSpecifier : PSSpecifier
{
    PSListController *_hostController;
    PSSpecifier *_mobileDataGroup;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CTServiceDescriptor *_serviceDescriptor;
    CoreTelephonyClient *_ctClient;
    PSListController *_drillDownController;
    PSUICoreTelephonyCallCache *_callCache;
    PSUICoreTelephonyRegistrationCache *_regCache;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSUIDeviceWiFiState *_deviceWifiState;
    _Bool _3GOverrideTo4G;
    _Bool _LTEOverrideTo4G;
    _Bool _supports2G;
    _Bool _supports3G;
    _Bool _supports4G;
    _Bool _showLegacyRAT;
    Logger *_logger;
}

- (void).cxx_destruct;
- (id)getLogger;
- (void)handleMaxDataRateChanged;
- (void)setSmartDataModeState:(int)arg1;
- (id)getSmartDataModeState;
- (id)suffixStringFromRATMode:(int)arg1;
- (id)localizedWarningStringForKey:(id)arg1 andRATMode:(int)arg2;
- (int)warningRATModeForTargetMode:(int)arg1 currentMode:(int)arg2;
- (id)localizedRATModeStringForPrefix:(id)arg1 targetMode:(int)arg2;
- (void)canceledRATSelectionDuringCall;
- (void)acceptedRATSelectionDuringCall:(id)arg1;
- (id)createCallMayEndConfirmationSpecifierForTargetRATMode:(int)arg1 currentRATMode:(int)arg2;
- (void)showCallMayEndWarningForTargetRATMode:(int)arg1 currentRATMode:(int)arg2;
- (_Bool)shouldShowCallEndWarningForTargetRATMode:(int)arg1 currentRATMode:(int)arg2;
- (void)setMaxDataRateForRATMode:(int)arg1;
- (void)setRATMode:(id)arg1 specifier:(id)arg2;
- (id)getRATMode;
- (void)populateSpecifiers:(id)arg1 values:(id)arg2;
- (void)setUpRATSpecifers;
- (_Bool)shouldOverrideRATModeForCBKey:(id)arg1;
- (void)setUpInternalState;
- (void)startObservingNotifications;
- (id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5;
- (id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5 serviceDescriptor:(id)arg6 coreTelephonyClient:(id)arg7 callCache:(id)arg8 registrationCache:(id)arg9 carrierBundleCache:(id)arg10 deviceWifiState:(id)arg11;

@end
