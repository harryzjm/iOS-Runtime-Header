//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBPluginBundleController-Protocol.h>
#import <SpringBoardUI/SBUIOptionalLegibility-Protocol.h>

@class SBLockScreenPluginAction, SBLockScreenPluginContext, SBLockScreenPluginPresentation, UIViewController;
@protocol SBLockScreenPluginAgent, SBLockScreenPluginAppearance, SBLockScreenPluginViewController;

@protocol SBLockScreenPluginController <SBPluginBundleController, SBUIOptionalLegibility>
@property(readonly, nonatomic) id <SBLockScreenPluginAppearance> pluginAppearance;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property(readonly, nonatomic) long long pluginPriority;
@property(nonatomic) __weak id <SBLockScreenPluginAgent> pluginAgent;

@optional
@property(readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
- (void)updateForPresentation:(SBLockScreenPluginPresentation *)arg1;
- (_Bool)pluginHandleEvent:(long long)arg1;
- (void)pluginDidDeactivateWithContext:(SBLockScreenPluginContext *)arg1;
- (void)pluginWillActivateWithContext:(SBLockScreenPluginContext *)arg1;
@end

