//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneWindowingModeDiffAction : NSObject
{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDisplayDiffInspector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsDisplayDiffInspector; // @synthesize sceneSettingsDisplayDiffInspector=_sceneSettingsDisplayDiffInspector;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

