//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface CKSettingsSharedWithYouController : PSListController
{
}

- (void)postNotificationForAppEnablementChanges;
- (id)appIsEnabled:(id)arg1;
- (void)setAppIsEnabled:(id)arg1 specifier:(id)arg2 shouldPostNotification:(id)arg3;
- (id)getAppBundleIDsFromDefaults;
- (id)getAppSpecifiers;
- (void)setupDefaultAppsIfRequired;
- (void)updateAppPreferencesWith:(id)arg1;
- (id)sharedWithYouEnabled:(id)arg1;
- (void)setSharedWithYouEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;

@end
