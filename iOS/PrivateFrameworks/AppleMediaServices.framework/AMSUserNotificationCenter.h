//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AMSUserNotificationStrategy;

@interface AMSUserNotificationCenter : NSObject
{
    id <AMSUserNotificationStrategy> _strategy;
}

+ (Class)_determineStrategyForBundleId:(id)arg1;
+ (id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(_Bool)arg4;
+ (id)removeNotification:(id)arg1 centerBundleId:(id)arg2;
+ (id)postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;
+ (_Bool)badgeBundleId:(id)arg1 badgeId:(id)arg2 enabled:(_Bool)arg3 error:(id *)arg4;
+ (id)activeNotificationsWithCenterBundleId:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <AMSUserNotificationStrategy> strategy; // @synthesize strategy=_strategy;

@end
