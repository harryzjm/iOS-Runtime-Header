//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCLongLookAnimator;
@protocol UIViewControllerContextTransitioning;

@protocol NCLongLookAnimatorObserving <NSObject>

@optional
- (void)longLookAnimatorDidFinishFirstResponderChanges:(NCLongLookAnimator *)arg1;
- (void)longLookAnimator:(NCLongLookAnimator *)arg1 willBeginDismissalAnimationWithTransitionContext:(id <UIViewControllerContextTransitioning>)arg2;
- (void)longLookAnimator:(NCLongLookAnimator *)arg1 willBeginPresentationAnimationWithTransitionContext:(id <UIViewControllerContextTransitioning>)arg2;
@end

