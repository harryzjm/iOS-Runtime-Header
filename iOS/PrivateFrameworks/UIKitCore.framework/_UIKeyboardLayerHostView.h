//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSSceneClientSettingsDiffInspector, FBSSceneIdentityToken, FBScene, NSString;
@protocol BSInvalidatable, UIScenePresenter;

__attribute__((visibility("hidden")))
@interface _UIKeyboardLayerHostView
{
    CDUnknownBlockType _sceneLayerMatchingPredicate;
    FBScene *_owningScene;
    FBScene *_keyboardScene;
    id <BSInvalidatable> _keyboardSceneAvailabilityObserver;
    FBSSceneClientSettingsDiffInspector *_keyboardSceneClientSettingsDiffInspector;
    FBSSceneIdentityToken *_keyboardPreferredHostIdentity;
    _Bool _isPaired;
    id <UIScenePresenter> _presenter;
}

- (void).cxx_destruct;
- (void)_updatePairingState;
- (void)_setKeyboardScene:(id)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setCurrentPresentationContext:(id)arg1;
- (void)dealloc;
- (id)initWithKeyboardLayer:(id)arg1 owningScene:(id)arg2;
- (id)initWithKeyboardProxyLayer:(id)arg1 owningScene:(id)arg2;
- (id)_initWithLayer:(id)arg1 owningScene:(id)arg2 keyboardMatchingPredicate:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

