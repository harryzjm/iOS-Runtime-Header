//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIViewServiceDeputy_UIViewServiceInterface-Protocol.h>
#import <UIKitCore/_UIViewServiceUIBehaviorInterface-Protocol.h>

@class BKSHIDEventAuthenticationMessage, NSArray;

@protocol _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface, _UIViewServiceUIBehaviorInterface>
- (void)__hostDidReceiveGestureDirection:(long long)arg1 authenticationMessage:(BKSHIDEventAuthenticationMessage *)arg2;
- (void)__hostViewWillDisappear:(_Bool)arg1;
- (void)__hostViewWillAppear:(_Bool)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostWillEnterForeground;
- (void)__setHostAllowedNotifications:(NSArray *)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setSceneSize:(struct CGSize)arg1;
- (void)__setSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (void)__setWindowOffset:(struct CGPoint)arg1;
- (void)__createHostedTextEffectsWithReplyHandler:(void (^)(_UIHostedWindowHostingHandle *, _UIHostedWindowHostingHandle *, _UIHostedWindowHostingHandle *))arg1;
@end

