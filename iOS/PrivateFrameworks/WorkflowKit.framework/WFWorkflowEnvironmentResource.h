//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFWorkflowReferencing-Protocol.h>

@class NSString, WFWorkflow;

@interface WFWorkflowEnvironmentResource <WFWorkflowReferencing>
{
    WFWorkflow *_workflow;
}

+ (_Bool)mustBeAvailableForDisplay;
- (void).cxx_destruct;
@property(nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void)refreshAvailability;
- (_Bool)workflowEnvironmentIsValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
