//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class MISSING_TYPE, UIScene, UIWindow;

__attribute__((visibility("hidden")))
@interface _TtC11PosterBoard21SwitcherSceneDelegate : UIResponder
{
    MISSING_TYPE *window;
    MISSING_TYPE *$__lazy_storage_$_sceneSettingsDiffInspector;
    MISSING_TYPE *_scene;
    MISSING_TYPE *switcherInUseAssertion;
}

- (void).cxx_destruct;
- (void)dataStoreDidTearDown;
- (void)windowDidDetachContext:(id)arg1;
- (void)windowDidAttachContext:(id)arg1;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)_actionHandlersForScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (void)_setScene:(id)arg1;
@property(nonatomic, retain) UIScene *_scene; // @synthesize _scene;
- (id)initWithScene:(id)arg1;
- (id)init;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
@property(nonatomic, retain) UIWindow *window; // @synthesize window;

@end

