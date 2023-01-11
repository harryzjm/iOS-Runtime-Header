//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSBinaryPromise, AMSUserNotification, AMSUserNotificationCenter, NSArray, NSString;
@protocol AMSUserNotificationCenterDelegate;

@protocol AMSUserNotificationStrategy
@property(readonly, nonatomic) __weak AMSUserNotificationCenter *originalCenter;
@property(nonatomic) __weak id <AMSUserNotificationCenterDelegate> delegate;
@property(readonly, nonatomic) NSArray *activeNotifications;
- (AMSBinaryPromise *)removeNotification:(AMSUserNotification *)arg1;
- (AMSBinaryPromise *)postNotification:(AMSUserNotification *)arg1;
- (id)initWithOriginalCenter:(AMSUserNotificationCenter *)arg1 bundleId:(NSString *)arg2 runningInDaemon:(_Bool)arg3;
@end
