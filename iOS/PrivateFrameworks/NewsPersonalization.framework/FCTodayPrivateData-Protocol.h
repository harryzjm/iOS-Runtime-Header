//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsPersonalization/FCBundleSubscriptionProviderType-Protocol.h>
#import <NewsPersonalization/FCPurchaseProviderType-Protocol.h>
#import <NewsPersonalization/NFMutableCopying-Protocol.h>
#import <NewsPersonalization/NSObject-Protocol.h>

@class FCBundleSubscription, FCDerivedPersonalizationData, NSArray, NSData, NSDictionary, NSNumber, NSSet, NSString;

@protocol FCTodayPrivateData <NSObject, NFMutableCopying, FCPurchaseProviderType, FCBundleSubscriptionProviderType>
@property(readonly, copy, nonatomic) NSData *userEmbeddingData;
@property(readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property(readonly, copy, nonatomic) NSNumber *onboardingVersion;
@property(readonly, copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property(readonly, copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property(readonly, copy, nonatomic) NSArray *rankedAllSubscriptionDates;
@property(readonly, copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property(readonly, copy, nonatomic) NSSet *groupableTagIDs;
@property(readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property(readonly, copy, nonatomic) NSArray *autoFavoriteTagIDs;
@property(readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property(readonly, copy, nonatomic) NSString *localNewsTagID;
@property(readonly, copy, nonatomic) FCDerivedPersonalizationData *derivedPersonalizationData;
@end

