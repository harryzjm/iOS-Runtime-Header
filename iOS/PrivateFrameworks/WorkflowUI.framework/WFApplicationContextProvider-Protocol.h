//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSBundle, NSString, UIApplication, UIWindow, WFApplicationContext;

@protocol WFApplicationContextProvider <NSObject>
- (UIApplication *)applicationForWFApplicationContext:(WFApplicationContext *)arg1;
- (UIWindow *)keyWindowForWFApplicationContext:(WFApplicationContext *)arg1;
- (NSString *)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(WFApplicationContext *)arg2;
- (NSString *)currentUserInterfaceTypeForWFApplicationContext:(WFApplicationContext *)arg1;
- (NSBundle *)bundleForWFApplicationContext:(WFApplicationContext *)arg1;

@optional
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(nonatomic) _Bool wfIdleTimerDisabled;
- (long long)currentApplicationStateForWFApplicationContext:(WFApplicationContext *)arg1;
- (_Bool)shouldReverseLayoutDirection;
@end

