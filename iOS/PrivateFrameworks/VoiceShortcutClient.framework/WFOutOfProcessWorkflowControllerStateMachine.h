//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFStateMachine.h"

@class NSObject;
@protocol OS_dispatch_queue, WFOutOfProcessWorkflowControllerStateMachineDelegate;

__attribute__((visibility("hidden")))
@interface WFOutOfProcessWorkflowControllerStateMachine : WFStateMachine
{
    id <WFOutOfProcessWorkflowControllerStateMachineDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <WFOutOfProcessWorkflowControllerStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;
- (void)handleRunnerWillExit;
- (void)handleXPCErrorWithDescription:(id)arg1 reason:(id)arg2 currentDialogAttribution:(id)arg3;
- (void)exitWithReason:(id)arg1;
- (void)tearDownRunnerWithReason:(id)arg1;
- (void)notifyDelegateWithReason:(id)arg1 result:(id)arg2 currentDialogAttribution:(id)arg3;
- (void)finishRunningWithReason:(id)arg1 result:(id)arg2;
- (void)stopShortcutWithError:(id)arg1 reason:(id)arg2;
- (void)pauseAndWriteShortcutToDiskState;
- (void)startRunningShortcutWithReason:(id)arg1;
- (void)acquiringRunnerWithReason:(id)arg1;
- (void)handlingRequestWithReason:(id)arg1;
- (void)idleStateWithReason:(id)arg1;
- (_Bool)isFinishingShortcut;
- (_Bool)isRunningShortcut;
- (_Bool)blocksTransitionsOnInvalidation;
- (id)init;

@end

