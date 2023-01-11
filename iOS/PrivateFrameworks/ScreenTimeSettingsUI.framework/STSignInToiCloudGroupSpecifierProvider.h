//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeSettingsUI/AAUISignInControllerDelegate-Protocol.h>
#import <ScreenTimeSettingsUI/MCProfileConnectionObserver-Protocol.h>

@class NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STSignInToiCloudGroupSpecifierProvider <AAUISignInControllerDelegate, MCProfileConnectionObserver>
{
    PSSpecifier *_signInSpecifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSSpecifier *signInSpecifier; // @synthesize signInSpecifier=_signInSpecifier;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)signInControllerDidCancel:(id)arg1;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_updateEnabledValue;
- (void)presentAppleAccountSignInController:(id)arg1;
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
