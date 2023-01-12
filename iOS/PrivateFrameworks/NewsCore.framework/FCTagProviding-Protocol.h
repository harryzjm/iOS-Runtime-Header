//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NFCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCAssetHandle, FCColor, FCPaywallConfiguration, FCPurchaseOfferableConfiguration, FCSportsRecommendationMappings, NSArray, NSData, NSDate, NSString, NSURL, NTPBPublisherPaidDescriptionStrings;
@protocol FCChannelProviding, FCFeedTheming, FCSectionProviding, FCSportsProviding, FCTagProviding, FCTagStocksFields, FCTopicProviding;

@protocol FCTagProviding <NSObject, NFCopying>
@property(readonly, nonatomic) FCSportsRecommendationMappings *sportsRecommendationMappings;
@property(readonly, nonatomic) NSData *sportsRecommendationMappingsJSON;
@property(copy, nonatomic) NSString *titleDisplaySuffix;
@property(copy, nonatomic) NSString *titleDisplayPrefix;
@property(readonly, copy, nonatomic) FCPaywallConfiguration *paidBundlePaywallConfiguration;
@property(readonly, nonatomic) id <FCTagStocksFields> stocksFields;
@property(readonly, nonatomic) NSDate *publisherSpecifiedArticleIDsModifiedDate;
@property(readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, nonatomic) _Bool isSports;
@property(readonly, nonatomic) _Bool isMagazine;
@property(readonly, nonatomic) _Bool isNewspaper;
@property(readonly, nonatomic) _Bool isSensitiveTopic;
@property(readonly, nonatomic) _Bool isLocal;
@property(readonly, nonatomic) _Bool isSandbox;
@property(readonly, nonatomic) _Bool isInternal;
@property(readonly, nonatomic) _Bool isAutoDarkModeEnabled;
@property(readonly, nonatomic) _Bool isArticleReadCountReportingEnabled;
@property(readonly, nonatomic) _Bool isRealTimeTrackingEnabled;
@property(readonly, nonatomic) _Bool isHidden;
@property(readonly, nonatomic) unsigned long long groupingEligibility;
@property(readonly, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
@property(readonly, nonatomic) FCAssetHandle *nameImageLargeMaskAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageLargeAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property(readonly, nonatomic) _Bool publisherPaidWebAccessOptIn;
@property(readonly, nonatomic) _Bool publisherPaidLeakyPaywallOptOut;
@property(readonly, nonatomic) NSArray *publisherPaidOfferableConfigurations;
@property(readonly, nonatomic) NSArray *publisherPaidBundlePurchaseIDs;
@property(readonly, nonatomic) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property(readonly, copy, nonatomic) NSString *publisherPaidWebAccessURL;
@property(readonly, copy, nonatomic) NSString *publisherPaidVerificationURL;
@property(readonly, copy, nonatomic) NSString *publisherPaidAuthorizationURL;
@property(readonly, nonatomic) double subscriptionRate;
@property(readonly, copy, nonatomic) NSString *superfeedConfigResourceID;
@property(readonly, copy, nonatomic) NSString *magazineGenre;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) _Bool isNotificationEnabled;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic) long long score;
@property(readonly, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, nonatomic) NSArray *iAdKeywords;
@property(readonly, nonatomic) NSArray *iAdCategories;
@property(readonly, copy, nonatomic) FCColor *groupDarkStyleTitleColor;
@property(readonly, copy, nonatomic) FCColor *groupTitleColor;
@property(readonly, copy, nonatomic) id <FCFeedTheming> theme;
@property(readonly, nonatomic) FCAssetHandle *feedNavImageAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *coverImageAssetHandle;
@property(readonly, nonatomic) _Bool isSubscribable;
@property(readonly, copy, nonatomic) NSString *primaryAudience;
@property(readonly, copy, nonatomic) NSString *highlightsArticleListID;
@property(readonly, copy, nonatomic) NSString *replacementID;
@property(readonly, nonatomic) _Bool isExplicitContent;
@property(readonly, nonatomic) _Bool isDeprecated;
@property(readonly, nonatomic) _Bool isPublic;
@property(readonly, nonatomic) long long contentProvider;
@property(readonly, copy, nonatomic) NSString *language;
@property(readonly, copy, nonatomic) NSString *versionKey;
@property(readonly, copy, nonatomic) NSString *nameCompact;
@property(readonly, copy, nonatomic) NSString *groupName;
@property(readonly, copy, nonatomic) NSString *compactDisplayName;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSDate *loadDate;
@property(readonly, nonatomic) id <FCSportsProviding> asSports;
@property(readonly, nonatomic) id <FCTopicProviding> asTopic;
@property(readonly, nonatomic) id <FCSectionProviding> asSection;
@property(readonly, nonatomic) id <FCChannelProviding> asChannel;
@property(readonly, nonatomic) _Bool hideAccessoryText;
@property(readonly, nonatomic) unsigned long long userFacingTagType;
@property(readonly, nonatomic) unsigned long long tagType;
- (id <FCTagProviding>)setTitleDisplaySuffixOverride:(NSString *)arg1;
- (id <FCTagProviding>)setTitleDisplayPrefixOverride:(NSString *)arg1;
- (void)ppt_overrideFeedID:(NSString *)arg1;
- (NSURL *)authorizationURL;
- (NSString *)feedIDForBin:(long long)arg1;
- (NSString *)paidFeedIDForBin:(long long)arg1;
- (NSString *)freeFeedIDForBin:(long long)arg1;
- (FCPurchaseOfferableConfiguration *)prefetchPurchaseOffer;
- (_Bool)isAuthenticationSetup;
- (_Bool)isPurchaseSetup;
- (_Bool)isEqualToTag:(id <FCTagProviding>)arg1;
- (_Bool)isNoLongerAvailable;

@optional
@property(readonly, nonatomic) NSData *backingTagRecordData;
@end

