//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@class FBSMutableSceneParameters, NSString, SBApplicationSceneEntity, SBWorkspaceApplicationSceneTransitionContext, SBWorkspaceTransitionRequest, UIApplicationSceneSettings, UIApplicationSceneTransitionContext;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction
{
    SBApplicationSceneEntity *_applicationSceneEntity;
    SBWorkspaceTransitionRequest *_request;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    NSString *_sceneIdentifier;
    FBSMutableSceneParameters *_sceneParameters;
    UIApplicationSceneTransitionContext *_sceneTransitionContext;
    _Bool _suspendedActivation;
    _Bool _shouldSendActivationResult;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldSendActivationResult; // @synthesize shouldSendActivationResult=_shouldSendActivationResult;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, nonatomic) SBApplicationSceneEntity *applicationSceneEntity; // @synthesize applicationSceneEntity=_applicationSceneEntity;
- (void)_sendActivationResultWithError:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_didComplete;
@property(readonly, nonatomic) UIApplicationSceneSettings *sceneSettings;
- (id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2;

@end
