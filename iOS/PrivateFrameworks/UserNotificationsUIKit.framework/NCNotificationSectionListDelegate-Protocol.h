//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationRequest, NCNotificationSectionList, NSArray, NSIndexPath, NSIndexSet, NSString;
@protocol NCNotificationListItem;

@protocol NCNotificationSectionListDelegate <NSObject>
- (NSString *)notificationSectionList:(NCNotificationSectionList *)arg1 coalescingIdentifierForNotificationRequest:(NCNotificationRequest *)arg2;
- (_Bool)notificationSectionList:(NCNotificationSectionList *)arg1 shouldInsertForExpandedStackNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationSectionListNeedsReload:(NCNotificationSectionList *)arg1;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didRemoveNotificationListItem:(id <NCNotificationListItem>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didInsertNotificationListItem:(id <NCNotificationListItem>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didRemoveSectionsAtIndices:(NSIndexSet *)arg2;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didRemoveSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didInsertSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 requestsReloadAtIndices:(NSArray *)arg2;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didRemoveNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didReplaceNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(NCNotificationSectionList *)arg1 didInsertNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

