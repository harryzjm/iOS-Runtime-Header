//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSString, VCUIShortcutViewController, WFWorkflow, WFWorkflowReference;

@protocol VCUIShortcutViewControllerDelegate <NSObject>
- (void)shortcutViewControllerDidCancel:(VCUIShortcutViewController *)arg1;

@optional
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didFinishWithName:(NSString *)arg2;
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didDeleteShortcut:(WFWorkflowReference *)arg2;
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didSaveShortcut:(WFWorkflow *)arg2;
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didCreateShortcut:(WFWorkflow *)arg2;
@end
