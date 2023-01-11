//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/WFWorkflowRunCoordinatorObserver-Protocol.h>

@class NSString, WFConfiguredTrigger, WFWorkflowRunCoordinator, WFWorkflowRunEvent, WFWorkflowRunningContext;
@protocol VCDatabaseProvider, VCTriggerEventRunnerDelegate;

@interface VCTriggerEventRunner : NSObject <WFWorkflowRunCoordinatorObserver>
{
    id <VCDatabaseProvider> _databaseProvider;
    id <VCTriggerEventRunnerDelegate> _delegate;
    WFWorkflowRunEvent *_inProgressRunEvent;
    WFConfiguredTrigger *_inProgressTrigger;
    WFWorkflowRunningContext *_inProgressRunningContext;
    WFWorkflowRunCoordinator *_runCoordinator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator; // @synthesize runCoordinator=_runCoordinator;
@property(retain, nonatomic) WFWorkflowRunningContext *inProgressRunningContext; // @synthesize inProgressRunningContext=_inProgressRunningContext;
@property(retain, nonatomic) WFConfiguredTrigger *inProgressTrigger; // @synthesize inProgressTrigger=_inProgressTrigger;
@property(retain, nonatomic) WFWorkflowRunEvent *inProgressRunEvent; // @synthesize inProgressRunEvent=_inProgressRunEvent;
@property(readonly, nonatomic) id <VCTriggerEventRunnerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
- (void)logPowerLogEventForConfiguredTrigger:(id)arg1 workflowReference:(id)arg2;
- (void)runCoordinator:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 runningContext:(id)arg3 cancelled:(_Bool)arg4;
- (_Bool)isRunningWorkflowWithIdentifier:(id)arg1;
- (_Bool)startRunningWorkflow:(id)arg1 forTrigger:(id)arg2 eventInfo:(id)arg3;
- (id)initWithDatabaseProvider:(id)arg1 delegate:(id)arg2 runCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
