//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class UIWindow;

@interface UIApplication (Bridge)
- (void)ts_performBlockAfterCATransactionCommits:(CDUnknownBlockType)arg1;
- (void)ts_installCACommitCompletionBlock:(CDUnknownBlockType)arg1;
- (id)ts_statusBarWindow;
- (double)defaultStatusBarHeight;
- (_Bool)isRunningPerformanceTest;
- (struct CGRect)ts_accessibilitySoftwareKeyboardAccessibilityFrame;
- (_Bool)ts_accessibilitySoftwareKeyboardActive;
@property(nonatomic, readonly) UIWindow *key_window;
@end

