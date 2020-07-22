//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUISettingDescription, SKUISettingDescriptionView, SKUISettingsGroupController, UIViewController;

@protocol SKUISettingsGroupControllerDelegate <NSObject>
- (SKUISettingDescriptionView *)settingsGroupController:(SKUISettingsGroupController *)arg1 viewForSettingDescription:(SKUISettingDescription *)arg2;
- (void)settingsGroupController:(SKUISettingsGroupController *)arg1 reloadSettingDescription:(SKUISettingDescription *)arg2;
- (UIViewController *)owningViewControllerForSettingsGroupController:(SKUISettingsGroupController *)arg1;
@end

