//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class WFVariable, WFVariableShortcutsBar;

@protocol WFVariableShortcutsBarDelegate <NSObject>
- (void)shortcutsBarDidSelectCustomButton:(WFVariableShortcutsBar *)arg1;
- (void)shortcutsBarDidSelectMagicVariable:(WFVariableShortcutsBar *)arg1;
- (void)shortcutsBar:(WFVariableShortcutsBar *)arg1 didSelectVariable:(WFVariable *)arg2;
- (void)shortcutsBarDidOpenTray:(WFVariableShortcutsBar *)arg1;
- (void)shortcutsBarDidDismiss:(WFVariableShortcutsBar *)arg1;
@end
