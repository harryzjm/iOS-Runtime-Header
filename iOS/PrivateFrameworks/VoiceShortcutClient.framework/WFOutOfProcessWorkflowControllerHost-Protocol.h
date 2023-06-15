//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFDialogAttribution, WFWorkflowDescriptor, WFWorkflowRunViewSource;

@protocol WFOutOfProcessWorkflowControllerHost
- (void)runnerWillExit;
- (void)runnerDidPunchToShortcutsJr;
- (void)workflowDidPause;
- (void)presenterRequestedUpdatedRunViewSource:(WFWorkflowRunViewSource *)arg1 completionHandler:(void (^)(WFWorkflowRunViewSource *, NSError *))arg2;
- (void)workflowDidStartRunning:(WFWorkflowDescriptor *)arg1 isAutomation:(_Bool)arg2 dialogAttribution:(WFDialogAttribution *)arg3;
@end

