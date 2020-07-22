//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSProcessAssertion, NSMutableArray, NSMutableSet;

@interface FBUIApplicationWorkspaceScene
{
    NSMutableSet *_allWatchdogs;
    NSMutableArray *_watchdogStack;
    BKSProcessAssertion *_resumeProcessAssertion;
    BKSProcessAssertion *_suspendingProcessAssertion;
    BKSProcessAssertion *_seoProcessAssertion;
    BKSProcessAssertion *_deliverMessageProcessAssertion;
    unsigned long long _deliverMessageProcessAssertionCount;
    _Bool _createResponseReceived;
}

- (void)_workspaceQueue_dropAllProcessAssertions;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion:(_Bool)arg1;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion;
- (void)_workspaceQueue_takeDeliverMessageProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_dropSuspendingProcessAssertion;
- (void)_workspaceQueue_takeSuspendingProcessAssertion;
- (void)_workspaceQueue_dropSEOProcessAssertion;
- (void)_workspaceQueue_takeSEOProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_dropResumeProcessAssertion;
- (void)_workspaceQueue_takeResumeProcessAssertionWithTransitionContext:(id)arg1;
- (id)_workspaceQueue_newProcessAssertionForReason:(unsigned int)arg1 withName:(id)arg2 transitionContext:(id)arg3 acquireSynchronously:(_Bool)arg4;
- (unsigned long long)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2;
- (long long)_workspaceQueue_lifecycleStateForSettings:(id)arg1;
- (void)_workspaceQueue_cancelAllWatchdogTimers;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)arg1;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned long long)arg1 transitionContext:(id)arg2;
- (int)_workspaceQueue_pid;
- (id)_workspaceQueue_process;
- (void)_dispatchBlockAfterProcessLaunch:(CDUnknownBlockType)arg1;
- (void)_workspaceQueue_deactivateResponseReceived:(id)arg1;
- (void)_workspaceQueue_deactivateForSEO:(_Bool)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(CDUnknownBlockType)arg4;
- (void)_workspaceQueue_activateResponseReceived:(id)arg1;
- (void)_workspaceQueue_activateForSEO:(_Bool)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(CDUnknownBlockType)arg4;
- (void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_workspaceQueue_performGracefulExitWithDeliveryConfirmation:(CDUnknownBlockType)arg1;
- (void)_workspaceQueue_takeAssertionsForDeactivation:(_Bool)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_invalidate;
- (id)parentWorkspace;
- (void)dealloc;
- (id)initWithParentWorkspace:(id)arg1 identifier:(id)arg2;

@end

