//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/NSObject-Protocol.h>

@class BPSExpressSetupDetailItem, NRDevice, NSString, UIImage, UIViewController;
@protocol BPSBuddyControllerDelegate;

@protocol BPSBuddyController <NSObject>
- (void)setDelegate:(id <BPSBuddyControllerDelegate>)arg1;
- (id <BPSBuddyControllerDelegate>)delegate;

@optional
+ (UIImage *)imageForExpressSetting;
+ (void)doWorkForSkippedExpressSettingPane:(NRDevice *)arg1;
+ (NSString *)expressModeSettingsString:(NRDevice *)arg1;
+ (BPSExpressSetupDetailItem *)expressModeSettingsItem:(NRDevice *)arg1;
+ (_Bool)skipControllerForExpressMode:(NRDevice *)arg1;
+ (_Bool)controllerNeedsToRun;
- (_Bool)holdBeforeDisplaying;
- (_Bool)controllerBlocksRunningBeforeSignIn;
- (_Bool)controllerAllowsNavigatingBackFrom;
- (_Bool)controllerAllowsNavigatingBackTo;
- (UIViewController *)viewController;
@end

