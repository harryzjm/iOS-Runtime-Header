//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFAction, WFActionDrawerCoordinator;

@protocol WFActionDrawerCoordinatorDelegate <NSObject>
- (WFAction *)actionDrawerCoordinator:(WFActionDrawerCoordinator *)arg1 replacementActionForDescriptionOfAction:(WFAction *)arg2;
- (void)actionDrawerCoordinator:(WFActionDrawerCoordinator *)arg1 didAppendAction:(WFAction *)arg2;
@end
