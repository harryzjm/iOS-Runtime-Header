//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSString, PSSpecifier;

@interface PSUIResetPrefController : PSListController
{
    _Bool _requireRestrictionsCode;
    _Bool _requirePasscode;
    _Bool _returningFromPINSheetWithSuccess;
    _Bool _shouldEraseWithFMiP;
    _Bool _shouldTryEraseAgainWithFMiP;
    _Bool _shouldEraseDataPlans;
    int _codesNeeded;
    int _codesEntered;
    PSSpecifier *_currentSpecifier;
    PSSpecifier *_locationSpecifier;
    long long _locationSpecifierIndex;
    NSString *_passcode;
    _Bool _shouldSkipBasebandStatusCheck;
}

@property(nonatomic) _Bool shouldSkipBasebandStatusCheck; // @synthesize shouldSkipBasebandStatusCheck=_shouldSkipBasebandStatusCheck;
- (void).cxx_destruct;
- (void)profileNotification:(id)arg1;
- (void)confirmEraseCellularSettings;
- (void)eraseCellularSettings;
- (void)resetAKey;
- (void)reprovisionAccount;
- (void)subscriberOptions:(id)arg1;
- (id)specifiers;
- (void)resetAllCellularNetworks:(id)arg1;
- (void)resetNetworkSettings:(id)arg1;
- (void)eraseSettings:(id)arg1;
- (void)_eraseSettingsAndContent;
- (void)locatorStateDidChange:(id)arg1;
- (void)_disablePhoneLocatorAndErase;
- (void)eraseSettingsAndContent:(id)arg1;
- (void)_resetWithMode:(int)arg1;
- (_Bool)_networkConnectivityAvailable;
- (void)_showStockholmLocallyStoredValueOfflineWarningIfNeeded:(CDUnknownBlockType)arg1;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)resetPrivacyWarnings:(id)arg1;
- (void)resetIconPositions:(id)arg1;
- (void)resetKeyboardDictionary:(id)arg1;
- (void)popupViewDidDisappear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didAppear;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateLocationResetSpecifier;
- (void)dealloc;
- (id)init;

@end

