//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/FBApplicationUpdateScenesTransactionObserver-Protocol.h>
#import <SpringBoard/FBSynchronizedTransaction-Protocol.h>
#import <SpringBoard/FBSynchronizedTransactionGroupDelegate-Protocol.h>

@class FBDisplayLayoutTransition, FBSynchronizedTransactionGroup, NSMutableSet, NSSet, NSString, SBSceneBackgroundedStatusAssertion, SBSceneLayoutSynchronizeTransitionTransaction, SBWorkspaceApplicationSceneTransitionContext, SBWorkspaceTransitionRequest;
@protocol FBSynchronizedTransactionDelegate, SBSceneLayoutWorkspaceTransactionDelegate;

@interface SBSceneLayoutWorkspaceTransaction <FBSynchronizedTransactionGroupDelegate, FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransaction>
{
    id <SBSceneLayoutWorkspaceTransactionDelegate> _delegate;
    unsigned long long _options;
    FBDisplayLayoutTransition *_fbLayoutTransition;
    _Bool _isTransitioning;
    _Bool _transitionFailed;
    _Bool _delegateTransitionComplete;
    _Bool _performSceneUpdates;
    _Bool _waitForSceneUpdates;
    _Bool _waitingForSynchronizedCommit;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizePrepareTransitionTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeSendActivationResultTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeBeginTransitionTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeAddSlavesTransaction;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    FBSynchronizedTransactionGroup *_sceneUpdateTransactionGroup;
    SBSceneBackgroundedStatusAssertion *_scenesBackgroundedStatusAssertion;
    NSMutableSet *_updateTransactions;
    NSMutableSet *_fromAppSceneEntities;
    NSMutableSet *_foregroundingAppSceneEntities;
    NSMutableSet *_backgroundingAppSceneEntities;
    NSMutableSet *_scenesToBackground;
    SBWorkspaceTransitionRequest *_interruptingTransitionRequest;
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) __weak id <FBSynchronizedTransactionDelegate> synchronizationDelegate; // @synthesize synchronizationDelegate=_synchronizationDelegate;
@property(readonly, nonatomic) NSSet *backgroundingApplicationSceneEntities; // @synthesize backgroundingApplicationSceneEntities=_backgroundingAppSceneEntities;
@property(readonly, nonatomic) NSSet *foregroundingApplicationSceneEntities; // @synthesize foregroundingApplicationSceneEntities=_foregroundingAppSceneEntities;
@property(readonly, nonatomic) NSSet *fromApplicationSceneEntities; // @synthesize fromApplicationSceneEntities=_fromAppSceneEntities;
@property(readonly, nonatomic) NSSet *sceneUpdateTransactions; // @synthesize sceneUpdateTransactions=_updateTransactions;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_isTransitioning;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <SBSceneLayoutWorkspaceTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)synchronizedTransactionGroup:(id)arg1 shouldFailForSynchronizedTransaction:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)performSynchronizedCommit;
- (_Bool)isReadyForSynchronizedCommit;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 willUpdateScene:(id)arg2;
- (void)transaction:(id)arg1 didCreateScene:(id)arg2;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)_sendActivationResultWithError:(id)arg1;
- (_Bool)_overrideInterfaceOrientationForOrientationMismatch:(long long *)arg1;
- (long long)_orientationForFollowOnRotationIfNeeded;
- (void)_updateScenesForTransitionCompletion;
- (void)_prepareScenesForTransition;
- (void)_prepareScenesForSceneUpdates;
- (void)_updateKeyboardContextMaskStyles:(_Bool)arg1;
- (void)_updateAggregateDictionary;
- (void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)arg1;
- (void)_beginLayoutTransition;
- (void)_prepareLayoutTransition;
- (void)_completeTransition;
- (void)_evaluateTransitionCompletion;
- (void)_performTransition;
- (_Bool)_sceneEntities:(id)arg1 hasEntityRepresentingSceneID:(id)arg2;
- (void)_captureAppsForTransition;
- (id)sceneManager;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (void)_willBegin;
@property(readonly, nonatomic) NSSet *toApplicationSceneEntities;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
