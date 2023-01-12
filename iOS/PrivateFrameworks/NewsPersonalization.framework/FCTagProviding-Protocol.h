//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsPersonalization/NFCopying-Protocol.h>
#import <NewsPersonalization/NSObject-Protocol.h>

@class FCAssetHandle, FCColor, FCPaywallConfiguration, FCPurchaseOfferableConfiguration, FCSportsRecommendationMappings, NSArray, NSData, NSDate, NSString, NSURL, NTPBPublisherPaidDescriptionStrings;
@protocol FCChannelProviding, FCFeedTheming, FCSectionProviding, FCSportsProviding, FCTagProviding, FCTagStocksFields, FCTopicProviding;

@protocol FCTagProviding <NSObject, NFCopying>
@property(nonatomic, readonly) FCSportsRecommendationMappings *sportsRecommendationMappings;
@property(nonatomic, readonly) NSData *sportsRecommendationMappingsJSON;
- (id <FCTagProviding>)setTitleDisplaySuffixOverride:(NSString *)arg1;
- (id <FCTagProviding>)setTitleDisplayPrefixOverride:(NSString *)arg1;
@property(nonatomic, copy) NSString *titleDisplaySuffix;
@property(nonatomic, copy) NSString *titleDisplayPrefix;
@property(nonatomic, readonly) FCPaywallConfiguration *paidBundlePaywallConfiguration;
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
@property(nonatomic, readonly) id <FCTagStocksFields> stocksFields;
@property(nonatomic, readonly) NSDate *publisherSpecifiedArticleIDsModifiedDate;
@property(nonatomic, readonly) NSArray *publisherSpecifiedArticleIDs;
@property(nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property(nonatomic, readonly) _Bool isSports;
@property(nonatomic, readonly) _Bool isMagazine;
@property(nonatomic, readonly) _Bool isNewspaper;
@property(nonatomic, readonly) _Bool isSensitiveTopic;
@property(nonatomic, readonly) _Bool isLocal;
@property(nonatomic, readonly) _Bool isSandbox;
@property(nonatomic, readonly) _Bool isInternal;
@property(nonatomic, readonly) _Bool isAutoDarkModeEnabled;
@property(nonatomic, readonly) _Bool isArticleReadCountReportingEnabled;
@property(nonatomic, readonly) _Bool isRealTimeTrackingEnabled;
@property(nonatomic, readonly) _Bool isHidden;
@property(nonatomic, readonly) unsigned long long groupingEligibility;
@property(nonatomic, readonly) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property(nonatomic, readonly) _Bool isBlockedExplicitContent;
@property(nonatomic, readonly) FCAssetHandle *nameImageLargeMaskAssetHandle;
@property(nonatomic, readonly) FCAssetHandle *nameImageLargeAssetHandle;
@property(nonatomic, readonly) FCAssetHandle *nameImageCompactAssetHandle;
@property(nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property(nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property(nonatomic, readonly) _Bool publisherPaidWebAccessOptIn;
@property(nonatomic, readonly) _Bool publisherPaidLeakyPaywallOptOut;
@property(nonatomic, readonly) NSArray *publisherPaidOfferableConfigurations;
@property(nonatomic, readonly) NSArray *publisherPaidBundlePurchaseIDs;
@property(nonatomic, readonly) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property(nonatomic, readonly) NSString *publisherPaidWebAccessURL;
@property(nonatomic, readonly) NSString *publisherPaidVerificationURL;
@property(nonatomic, readonly) NSString *publisherPaidAuthorizationURL;
@property(nonatomic, readonly) double subscriptionRate;
@property(nonatomic, readonly) NSString *superfeedConfigResourceID;
@property(nonatomic, readonly) NSString *magazineGenre;
@property(nonatomic, readonly) NSString *subtitle;
@property(nonatomic, readonly) _Bool isNotificationEnabled;
@property(nonatomic, readonly) long long minimumNewsVersion;
@property(nonatomic, readonly) long long score;
@property(nonatomic, readonly) NSArray *allowedStorefrontIDs;
@property(nonatomic, readonly) NSArray *blockedStorefrontIDs;
@property(nonatomic, readonly) NSArray *iAdKeywords;
@property(nonatomic, readonly) NSArray *iAdCategories;
@property(nonatomic, readonly) FCColor *groupDarkStyleTitleColor;
@property(nonatomic, readonly) FCColor *groupTitleColor;
@property(nonatomic, readonly) id <FCFeedTheming> theme;
@property(nonatomic, readonly) FCAssetHandle *feedNavImageAssetHandle;
@property(nonatomic, readonly) FCAssetHandle *coverImageAssetHandle;
@property(nonatomic, readonly) _Bool isSubscribable;
@property(nonatomic, readonly) NSString *primaryAudience;
@property(nonatomic, readonly) NSString *highlightsArticleListID;
@property(nonatomic, readonly) NSString *replacementID;
@property(nonatomic, readonly) _Bool isExplicitContent;
@property(nonatomic, readonly) _Bool isDeprecated;
@property(nonatomic, readonly) _Bool isPublic;
@property(nonatomic, readonly) long long contentProvider;
@property(nonatomic, readonly) NSString *language;
@property(nonatomic, readonly) NSString *versionKey;
@property(nonatomic, readonly) NSString *nameCompact;
@property(nonatomic, readonly) NSString *groupName;
@property(nonatomic, readonly) NSString *compactDisplayName;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSDate *loadDate;
@property(nonatomic, readonly) id <FCSportsProviding> asSports;
@property(nonatomic, readonly) id <FCTopicProviding> asTopic;
@property(nonatomic, readonly) id <FCSectionProviding> asSection;
@property(nonatomic, readonly) id <FCChannelProviding> asChannel;
@property(nonatomic, readonly) _Bool hideAccessoryText;
@property(nonatomic, readonly) unsigned long long userFacingTagType;
@property(nonatomic, readonly) unsigned long long tagType;

@optional
@property(nonatomic, readonly) NSData *backingTagRecordData;
@end

