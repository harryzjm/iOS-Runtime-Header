//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationManagementContentProvider, NCNotificationRequest;

@protocol NCNotificationManagementSuggestionDelegate <NSObject>
- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 keepNotificationsForSectionIdentifierForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationManagementContentProvider:(NCNotificationManagementContentProvider *)arg1 hasUpdatedContentForRequest:(NCNotificationRequest *)arg2;
@end
