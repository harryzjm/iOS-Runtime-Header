//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFBaseLibraryWorkflowCell;

@protocol WFBaseLibraryWorkflowCellDelegate <NSObject>

@optional
- (void)workflowCellDidRequestStop:(WFBaseLibraryWorkflowCell *)arg1;
- (void)workflowCellDidRequestRun:(WFBaseLibraryWorkflowCell *)arg1;
@end
