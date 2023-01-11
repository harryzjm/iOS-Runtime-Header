//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/FBSceneObserver-Protocol.h>

@class FBSSceneClientSettingsDiffInspector, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _UISceneKeyboardProxyLayerForwardingManager : NSObject <FBSceneObserver>
{
    NSMapTable *_mapSceneToKeyboardForwardingStateMachine;
    FBSSceneClientSettingsDiffInspector *_layersChangedClientSettingsDiffInspector;
}

+ (id)sharedInstance;
+ (id)new;
+ (_Bool)supportsForwardingKeyboardLayers;
- (void).cxx_destruct;
- (void)_updateKeyboardLayersForScene:(id)arg1;
- (id)_stateMachineForScene:(id)arg1;
- (id)_newStateMachineWithScene:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)scene:(id)arg1 willPrioritizePresenter:(id)arg2;
- (void)trackScene:(id)arg1;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
