//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class WFDialogRequest, WFWorkflowRunViewSource, WFWorkflowRunningContext;

@protocol WFUIPresenterDelegate <NSObject>

@optional
- (void)presenterWillDismissPresentedContent;
- (void)presenterRequestedUpdatedRunViewSource:(WFWorkflowRunViewSource *)arg1 completionHandler:(void (^)(WFWorkflowRunViewSource *, NSError *))arg2;
- (void)presenterRequestedWorkflowPauseForContext:(WFWorkflowRunningContext *)arg1 dialogRequest:(WFDialogRequest *)arg2;
- (void)presenterRequestedWorkflowStopForContext:(WFWorkflowRunningContext *)arg1;
- (void)presenterDidReceiveSuspendedResponseForRequest:(WFDialogRequest *)arg1 runningContext:(WFWorkflowRunningContext *)arg2 withCompletionHandler:(void (^)(WFDialogResponse *, NSError *))arg3;
- (_Bool)presenterWillShowRequest:(WFDialogRequest *)arg1 runningContext:(WFWorkflowRunningContext *)arg2 withCompletionHandler:(void (^)(WFDialogResponse *, NSError *))arg3;
@end

