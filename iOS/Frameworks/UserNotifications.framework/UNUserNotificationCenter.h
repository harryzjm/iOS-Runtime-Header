//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/UNUserNotificationServiceConnectionObserver-Protocol.h>

@class NSMutableArray, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver>
{
    id <UNUserNotificationCenterDelegate> _delegate;
    NSString *_bundleIdentifier;
    NSMutableArray *_observers;
}

+ (_Bool)supportsContentExtensions;
+ (id)currentNotificationCenter;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <UNUserNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didChangePendingNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)didDeliverNotifications:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getBadgeNumberWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllDeliveredNotifications;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)getDeliveredNotificationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllPendingNotificationRequests;
- (void)removeSimilarNotificationRequests:(id)arg1;
- (void)removeSimilarNotificationRequests:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1;
- (void)setNotificationRequests:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setNotificationRequests:(id)arg1;
- (void)addNotificationRequests:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addNotificationRequest:(id)arg1;
- (void)getPendingNotificationRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNotificationCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setNotificationCategories:(id)arg1;
- (void)getNotificationSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) _Bool supportsContentExtensions;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleProxy:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
