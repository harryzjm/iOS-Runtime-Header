//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFVariableConfigurationAccessoryView;

@protocol WFVariableConfigurationAccessoryViewDelegate <NSObject>
- (void)accessoryViewDidReturnToKeyboard:(WFVariableConfigurationAccessoryView *)arg1;
- (void)accessoryViewDidRevealAction:(WFVariableConfigurationAccessoryView *)arg1;
- (void)accessoryViewDidRename:(WFVariableConfigurationAccessoryView *)arg1;
- (void)accessoryViewDidDelete:(WFVariableConfigurationAccessoryView *)arg1;
- (void)accessoryViewDidDismiss:(WFVariableConfigurationAccessoryView *)arg1;
@end
