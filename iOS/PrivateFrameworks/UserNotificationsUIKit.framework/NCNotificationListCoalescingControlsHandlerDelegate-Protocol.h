//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NSString, UIView;
@protocol NCNotificationListCoalescingControlsHandler;

@protocol NCNotificationListCoalescingControlsHandlerDelegate <NSObject>

@optional
- (void)notificationListCoalescingControlsHandler:(id <NCNotificationListCoalescingControlsHandler>)arg1 didTransitionToClearState:(_Bool)arg2;
- (void)notificationListCoalescingControlsHandlerRequestsClearingAllNotifications:(id <NCNotificationListCoalescingControlsHandler>)arg1;
- (void)notificationListCoalescingControlsHandlerDidDismissPreviewInteractionPresentedContent:(id <NCNotificationListCoalescingControlsHandler>)arg1;
- (void)notificationListCoalescingControlsHandlerDidPresentPreviewInteractionPresentedContent:(id <NCNotificationListCoalescingControlsHandler>)arg1;
- (void)notificationListCoalescingControlsHandlerDidBeginPreviewInteraction:(id <NCNotificationListCoalescingControlsHandler>)arg1;
- (UIView *)containerViewForCoalescingControlsHandlerPreviewInteractionPresentedContent:(id <NCNotificationListCoalescingControlsHandler>)arg1;
- (void)notificationListCoalescingControlsHandler:(id <NCNotificationListCoalescingControlsHandler>)arg1 requestsClearingNotificationsWithCoalescingIdentifier:(NSString *)arg2 inSection:(unsigned long long)arg3;
- (void)notificationListCoalescingControlsHandler:(id <NCNotificationListCoalescingControlsHandler>)arg1 requestsRestackingNotificationsWithCoalescingIdentifier:(NSString *)arg2 inSection:(unsigned long long)arg3;
@end
