//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSError, NSProgress, WFContentCollection, WFWorkflowRunnerClient;

@protocol WFWorkflowRunnerClientDelegate <NSObject>

@optional
- (void)workflowRunnerClient:(WFWorkflowRunnerClient *)arg1 didFinishRunningWorkflowWithError:(NSError *)arg2 cancelled:(_Bool)arg3;
- (void)workflowRunnerClient:(WFWorkflowRunnerClient *)arg1 didFinishRunningWorkflowWithOutput:(WFContentCollection *)arg2 error:(NSError *)arg3 cancelled:(_Bool)arg4;
- (void)workflowRunnerClient:(WFWorkflowRunnerClient *)arg1 didStartRunningWorkflowWithProgress:(NSProgress *)arg2;
@end

