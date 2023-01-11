//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsAnalytics/NSObject-Protocol.h>

@class FCBundleSubscription, FCBundleSubscriptionChangeSet;

@protocol FCBundleSubscriptionChangeObserver <NSObject>

@optional
- (void)bundleSubscriptionDidChange:(FCBundleSubscription *)arg1 previousBundleSubscription:(FCBundleSubscription *)arg2 changeSet:(FCBundleSubscriptionChangeSet *)arg3;
- (void)bundleSubscriptionDidExpire:(FCBundleSubscription *)arg1;
- (void)bundleSubscriptionDidSubscribe:(FCBundleSubscription *)arg1;
@end
