//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsKit/NSObject-Protocol.h>

@class NCCoalescedNotification, NCNotificationRequest, NCNotificationSectionSettings, NSString;
@protocol NCNotificationDestinationDelegate;

@protocol NCNotificationDestination <NSObject>
@property(readonly, nonatomic) NSString *identifier;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (_Bool)canReceiveNotificationRequest:(NCNotificationRequest *)arg1;

@optional
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1;
- (_Bool)interceptsQueueRequest:(NCNotificationRequest *)arg1;
@end

