//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBHStackConfiguration, SBHStackConfigurationViewController, SBHWidgetConfigurationInteraction;
@protocol SBHIconViewConfigurationInteraction, SBLeafIconDataSource;

@protocol SBHStackConfigurationViewControllerDelegate <NSObject>
- (void)stackConfigurationViewControllerViewDidDisappear:(SBHStackConfigurationViewController *)arg1;
- (void)stackConfigurationViewControllerWantsToDismiss:(SBHStackConfigurationViewController *)arg1;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 didCommitStackConfiguration:(SBHStackConfiguration *)arg2;
- (void)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 didCommitWidgetConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (SBHWidgetConfigurationInteraction *)stackConfigurationViewController:(SBHStackConfigurationViewController *)arg1 widgetConfigurationInteractionForDataSource:(id <SBLeafIconDataSource>)arg2;
@end
