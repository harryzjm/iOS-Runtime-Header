//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSDictionary, WFParameterInputViewController;

@protocol WFParameterInputViewControllerDelegate <NSObject>
- (void)parameterInputViewControllerDidFinish:(WFParameterInputViewController *)arg1 withParameterStates:(NSDictionary *)arg2;
- (void)parameterInputViewControllerDidCancel:(WFParameterInputViewController *)arg1;
@end
