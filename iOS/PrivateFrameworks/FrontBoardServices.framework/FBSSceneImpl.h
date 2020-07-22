//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneAgentProxy-Protocol.h>
#import <FrontBoardServices/FBSSceneHandle-Protocol.h>
#import <FrontBoardServices/FBSSceneSnapshotRequestDelegate-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSettings, FBSSceneSpecification, FBSSerialQueue, NSMutableArray, NSObject, NSString;
@protocol FBSSceneClientAgent, FBSSceneDelegate, FBSSceneUpdater, OS_dispatch_queue;

@interface FBSSceneImpl <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy>
{
    id <FBSSceneDelegate> _delegate;
    NSString *_identifier;
    FBSSceneSpecification *_specification;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    id <FBSSceneUpdater> _updater;
    id <FBSSceneClientAgent> _agent;
    CDUnknownBlockType _agentMessageHandler;
    FBSSerialQueue *_callOutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_layers;
    _Bool _shouldObserveLayers;
    NSMutableArray *_agentSessions;
}

- (void).cxx_destruct;
- (_Bool)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (_Bool)snapshotRequestAllowSnapshot:(id)arg1;
- (void)sceneLayerDidInvalidate:(id)arg1;
- (void)sceneLayerDidUpdate:(id)arg1;
- (_Bool)sceneLayerShouldObserveUpdates:(id)arg1;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)agent:(id)arg1 registerMessageHandler:(CDUnknownBlockType)arg2;
- (void)closeSession:(id)arg1;
- (id)sessionForIdentifier:(id)arg1;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)clientProcess;
- (id)hostProcess;
- (id)counterpartAgent;
- (id)callOutQueue;
- (id)specification;
- (id)parameters;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_willDestroyWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didCreateWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_hasAgent;
- (void)_queue_configureReceivedActions:(id)arg1;
- (void)_performDelegateCallOut:(CDUnknownBlockType)arg1;
- (void)_queue_invalidate;
- (void)_updateLayer:(id)arg1;
- (_Bool)invalidateSnapshotWithContext:(id)arg1;
- (_Bool)performSnapshotWithContext:(id)arg1;
- (id)snapshotRequest;
- (void)detachSceneContext:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (id)layers;
- (id)clientSettings;
- (id)settings;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)identifier;
- (void)dealloc;
- (id)_initWithInternalQueue:(id)arg1 callOutQueue:(id)arg2 updater:(id)arg3 identifier:(id)arg4 specification:(id)arg5 settings:(id)arg6 clientSettings:(id)arg7;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3;
- (id)_initWithQueue:(id)arg1 callOutQueue:(id)arg2 identifier:(id)arg3 specification:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

