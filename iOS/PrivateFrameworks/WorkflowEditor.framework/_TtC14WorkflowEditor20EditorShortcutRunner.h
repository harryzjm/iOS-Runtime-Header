//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14WorkflowEditor20EditorShortcutRunner : NSObject
{
    MISSING_TYPE *workflow;
    MISSING_TYPE *shortcutRunnerStateObservation;
    MISSING_TYPE *onLifecycleEvent;
    MISSING_TYPE *_runningState;
    MISSING_TYPE *runnerClient;
    MISSING_TYPE *isRunning;
    MISSING_TYPE *progress;
    MISSING_TYPE *progressModeler;
    MISSING_TYPE *modelerStateObservation;
}

- (void).cxx_destruct;
- (id)init;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(_Bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithAllResults:(id)arg2 error:(id)arg3 cancelled:(_Bool)arg4;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end

