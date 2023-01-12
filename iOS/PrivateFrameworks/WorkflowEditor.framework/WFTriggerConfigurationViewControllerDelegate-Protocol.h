//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class WFTrigger, WFTriggerConfigurationViewController;

@protocol WFTriggerConfigurationViewControllerDelegate <NSObject>
- (void)triggerConfigurationViewController:(WFTriggerConfigurationViewController *)arg1 didFinishWithTrigger:(WFTrigger *)arg2;

@optional
- (void)triggerConfigurationViewController:(WFTriggerConfigurationViewController *)arg1 didUpdateCriteriaForTrigger:(WFTrigger *)arg2;
@end
