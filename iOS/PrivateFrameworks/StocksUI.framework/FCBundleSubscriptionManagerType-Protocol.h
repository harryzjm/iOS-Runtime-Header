//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksUI/FCBundleSubscriptionProviderType-Protocol.h>

@class FCBundleSubscription, FCBundleSubscriptionLookUpEntry, NSString;
@protocol FCBundleSubscriptionChangeObserver, FCEntitlementsOverrideProviderType;

@protocol FCBundleSubscriptionManagerType <FCBundleSubscriptionProviderType>
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)silentExpireBundleSubscription;
- (void)clearBundleSubscription;
- (void)prewarmBundleTagIDsWithPurchaseID:(NSString *)arg1;
- (void)renewalNoticeShownWithPurchaseID:(NSString *)arg1;
- (FCBundleSubscriptionLookUpEntry *)bundleSubscriptionLookupEntry;
- (void)removeObserver:(id <FCBundleSubscriptionChangeObserver>)arg1;
- (void)addObserver:(id <FCBundleSubscriptionChangeObserver>)arg1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 hideBundleDetectionUI:(_Bool)arg2 completion:(void (^)(FCBundleSubscription *))arg3;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(void (^)(FCBundleSubscription *))arg2;
@property(nonatomic, retain) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property(nonatomic, readonly) FCBundleSubscription *validatedCachedSubscription;
@property(nonatomic, readonly) FCBundleSubscription *cachedSubscription;
@end

