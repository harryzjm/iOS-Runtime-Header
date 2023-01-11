//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class BSAnimationSettings, UIPresentationController, UIWindow;
@protocol PLExpandedPlatterPresentationController, PLKeyboardHomeAffordanceAssertion, UIViewSpringAnimationBehaviorDescribing;

@protocol PLExpandedPlatterPresentationControllerDelegate <NSObject>

@optional
- (id <UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
- (id <PLKeyboardHomeAffordanceAssertion>)expandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1 keyboardAssertionForGestureWindow:(UIWindow *)arg2;
- (_Bool)expandedPlatterPresentationControllerShouldAllowKeyboardOnAppearance:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
@end
