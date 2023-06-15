//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivitySharingDaemonCore/ASActivitySharingManagerReadyObserver-Protocol.h>

@class ASUserNotificationResponse, NSArray, NSSet, NSString, NSUUID, UNNotificationRequest;
@protocol ASBulletinPostingManagerDelegate;

@protocol ASBulletinPostingManager <ASActivitySharingManagerReadyObserver>
@property(nonatomic) __weak id <ASBulletinPostingManagerDelegate> delegate;
- (NSArray *)topicIdentifiers;
- (void)handleNotificationResponse:(ASUserNotificationResponse *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)postFakeBulletins:(NSSet *)arg1;
- (void)removeNotificationWithIdentifier:(NSString *)arg1;
- (void)removeCompetitionNotificationsForFriendUUID:(NSUUID *)arg1;
- (void)enqueueBulletins:(NSSet *)arg1 withPostingSyle:(long long)arg2;
- (void)registerNotificationCategories:(NSSet *)arg1;
- (void)postNotificationRequest:(UNNotificationRequest *)arg1;
@end

