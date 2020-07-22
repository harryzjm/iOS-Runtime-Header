//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@interface MCURLListenerListController : PSListController
{
}

+ (void)setShowingProfileInstallation:(_Bool)arg1;
+ (_Bool)showingProfileInstallation;
+ (void)setOriginalURLSender:(id)arg1;
+ (void)setCurrentInstallationController:(id)arg1;
+ (id)originalURLSender;
+ (id)currentInstallationController;
- (void)handleURL:(id)arg1;
- (void)_pushProfileDetailsForProfileWithID:(id)arg1;
- (void)_showSheetToInstallProvisioningProfile;
- (void)_showSheetToInstallConfigurationProfile;

@end

