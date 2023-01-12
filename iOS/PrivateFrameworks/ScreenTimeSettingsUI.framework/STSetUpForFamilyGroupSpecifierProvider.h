//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PSSpecifier, UIViewController;

__attribute__((visibility("hidden")))
@interface STSetUpForFamilyGroupSpecifierProvider
{
    UIViewController *_presenter;
    PSSpecifier *_setupFamilySpecifier;
}

+ (id)providerWithCoordinator:(id)arg1 presenter:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) PSSpecifier *setupFamilySpecifier; // @synthesize setupFamilySpecifier=_setupFamilySpecifier;
@property(nonatomic) __weak UIViewController *presenter; // @synthesize presenter=_presenter;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)presentAppleAccountSetupFamilyController:(id)arg1;
- (void)_updateEnabledValue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

