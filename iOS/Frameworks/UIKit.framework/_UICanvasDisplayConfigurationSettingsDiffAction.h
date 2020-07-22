//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UICanvasSettingsDiffAction-Protocol.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

__attribute__((visibility("hidden")))
@interface _UICanvasDisplayConfigurationSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction>
{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDisplayConfigurationDiffInspector;
}

@property(retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsDisplayConfigurationDiffInspector; // @synthesize sceneSettingsDisplayConfigurationDiffInspector=_sceneSettingsDisplayConfigurationDiffInspector;
- (void).cxx_destruct;
- (void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

