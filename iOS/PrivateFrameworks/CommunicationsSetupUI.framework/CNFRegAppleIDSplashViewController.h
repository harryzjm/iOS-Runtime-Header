//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSAppleIDSplashViewController.h>

@class CNFRegController;

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController
{
    _Bool _showBusyUIOnAppearance;
    CNFRegController *_regController;
    long long _serviceType;
}

+ (id)_inProgressRegisteringNonPhoneAccountForService:(id)arg1;
+ (_Bool)shouldShowSplashViewForService:(id)arg1 inProgressRegisteringNonPhoneAccount:(id *)arg2;
@property _Bool showBusyUIOnAppearance; // @synthesize showBusyUIOnAppearance=_showBusyUIOnAppearance;
@property long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain) CNFRegController *regController; // @synthesize regController=_regController;
- (void).cxx_destruct;
- (id)_iCloudUserName;
- (void)_cnfSignInWithUsername:(id)arg1 password:(id)arg2;
- (void)_handleRegistarResults:(_Bool)arg1 alertController:(id)arg2;
- (void)handleAuthCompletionWithResults:(id)arg1;
- (void)_applicationDidResume:(id)arg1;
- (void)_completeIfAccountIsAlreadyRegistered;
- (void)_showSettingsController;
- (id)_imService;
- (void)continueRegisteringAccount:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)serviceIcon;
- (id)serviceDescription;
- (id)serviceName;
- (void)setSpecifier:(id)arg1;
- (void)dealloc;

@end

