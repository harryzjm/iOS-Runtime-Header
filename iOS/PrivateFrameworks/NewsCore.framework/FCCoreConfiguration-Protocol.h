//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NFCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCForYouGroupsConfiguration, FCNotificationsConfiguration, FCPaidBundleConfiguration, FCPersonalizationTreatment, FCTopStoriesConfiguration, FCVideoGroupsConfig, NSArray, NSDictionary, NSNumber, NSString, NSURL, NTPBTodayConfig;

@protocol FCCoreConfiguration <NSObject, NFCopying>
@property(readonly, nonatomic) long long expirePinnedArticlesAfter;
@property(readonly, nonatomic) NSNumber *currentTreatment;
@property(readonly, nonatomic) NSString *experimentalizableFieldPostfix;
@property(readonly, nonatomic) NSString *forYouRecordConfigID;
@property(readonly, nonatomic) long long minimumDistanceBetweenImageOnTopTiles;
@property(readonly, nonatomic) long long endOfArticleMaxInaccessiblePaidArticleCount;
@property(readonly, nonatomic) double endOfArticleMinPaidHeadlineRatio;
@property(readonly, copy, nonatomic) FCVideoGroupsConfig *forYouVideoGroupsConfig;
@property(readonly, nonatomic) double minimumTrendingUnseenRatio;
@property(readonly, nonatomic) long long optionalTopStoriesRefreshRate;
@property(readonly, nonatomic) _Bool diversifyOptionalTopStories;
@property(readonly, nonatomic) long long maximumPaidSubscriptionGroupSizeiPhone;
@property(readonly, nonatomic) long long maximumPaidSubscriptionGroupSizeiPad;
@property(readonly, nonatomic) long long maximumTimesHeadlineInPaidSubscriptionGroup;
@property(readonly, nonatomic) long long maximumNumberOfExpiredPaidSubscriptionGroups;
@property(readonly, nonatomic) long long expiredPaidSubscriptionGroupCutoffTime;
@property(readonly, nonatomic) long long minimumDurationBetweenTrendingGroupsWeekend;
@property(readonly, nonatomic) long long minimumDurationBetweenTrendingGroupsWeekday;
@property(readonly, nonatomic) long long minimumDurationBetweenForYouGroupsWeekend;
@property(readonly, nonatomic) long long minimumDurationBetweenForYouGroupsWeekday;
@property(readonly, nonatomic) FCForYouGroupsConfiguration *forYouGroupsConfiguration;
@property(readonly, nonatomic) NSArray *hiddenFeedIDs;
@property(readonly, nonatomic) long long articleRapidUpdatesTimeout;
@property(readonly, nonatomic) NSString *editorialGemsSectionID;
@property(readonly, nonatomic) NSString *editorialChannelID;
@property(readonly, nonatomic) NSString *savedStoriesTagID;
@property(readonly, nonatomic) NSString *featuredStoriesTagID;
@property(readonly, nonatomic) NSString *trendingTagID;
@property(readonly, nonatomic) NSString *briefingsTagID;
@property(readonly, nonatomic) NSString *breakingNewsChannelID;
@property(readonly, nonatomic) FCTopStoriesConfiguration *topStoriesConfig;
@property(readonly, nonatomic) NSDictionary *endpointConfigsByEnvironment;
@property(readonly, nonatomic, getter=isPrivateDataMigrationCleanupEnabled) _Bool privateDataMigrationCleanupEnabled;
@property(readonly, nonatomic) _Bool privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
@property(readonly, nonatomic, getter=isPrivateDataEncryptionMigrationDesired) _Bool privateDataEncryptionMigrationDesired;
@property(readonly, nonatomic, getter=isPrivateDataEncryptionAllowed) _Bool privateDataEncryptionAllowed;
@property(readonly, nonatomic) _Bool useSecureConnectionForAssets;
@property(readonly, nonatomic) NSArray *presubscribedFeedIDs;
@property(readonly, nonatomic) long long subscriptionsGlobalMeteredCount;
@property(readonly, nonatomic) long long savedArticlesMaximumCountCellular;
@property(readonly, nonatomic) long long savedArticlesMaximumCountWiFi;
@property(readonly, nonatomic) long long savedArticlesOpenedCutoffTime;
@property(readonly, nonatomic) long long savedArticlesCutoffTime;
@property(readonly, nonatomic) long long notificationEnabledChannelsRefreshFrequency;
@property(readonly, nonatomic) FCNotificationsConfiguration *notificationsConfig;
@property(readonly, nonatomic, getter=isOrderFeedEndpointEnabled) _Bool orderFeedEndpointEnabled;
@property(readonly, nonatomic) long long trendingTopicsRefreshRate;
@property(readonly, nonatomic) long long appConfigRefreshRate;
- (FCPersonalizationTreatment *)personalizationTreatment;
- (NSDictionary *)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;

@optional
@property(readonly, nonatomic) _Bool xavierEnabled;
@property(readonly, nonatomic) _Bool newPersonalizationEnabled;
@property(readonly, nonatomic) _Bool newNotificationHandlingEnabled;
@property(readonly, nonatomic) _Bool newAdsEnabled;
@property(readonly, nonatomic) _Bool searchFeedEnabled;
@property(readonly, nonatomic) _Bool tagFeedEnabled;
@property(readonly, nonatomic) _Bool todayFeedEnabled;
@property(readonly, nonatomic) long long maximumRetryAfterForCK;
@property(readonly, nonatomic, getter=isPrivateDataEncryptionRequired) _Bool privateDataEncryptionRequired;
@property(readonly, nonatomic) _Bool privateDataShouldSecureSubscriptions;
@property(readonly, nonatomic) _Bool enableCacheFallbackForArticleRecirculation;
@property(readonly, nonatomic) long long widgetForYouBackgroundMinimumUpdateInterval;
@property(readonly, nonatomic) long long widgetForYouForegroundMinimumUpdateInterval;
@property(readonly, nonatomic) _Bool recordBothPersonalizationVectors;
@property(readonly, nonatomic) _Bool usePersonalizationVectorAlt;
@property(readonly, nonatomic) NSString *audioConfigRecordID;
@property(readonly, nonatomic) _Bool alternateUniversalLinksEnabledDefaultForFamilyMember;
@property(readonly, nonatomic) _Bool alternateUniversalLinksEnabledDefaultForPurchaser;
@property(readonly, nonatomic) long long alternateUniversalLinksBannerPresentationCount;
@property(readonly, nonatomic) long long alternateUniversalLinksResourceRefreshRate;
@property(readonly, nonatomic) NSString *alternateUniversalLinksResourceID;
@property(readonly, nonatomic) NSString *todayFeedKnobs;
@property(readonly, nonatomic) NSArray *aLaCartePaidSubscriptionGroupWhitelistedChannelIDs;
@property(readonly, nonatomic) double feedLineHeightMultiplier;
@property(readonly, nonatomic) NSString *spotlightChannelID;
@property(readonly, nonatomic) long long entitlementsCacheRecoveryAttemptDurationInSeconds;
@property(readonly, nonatomic) NSString *magazinesConfigRecordID;
@property(readonly, nonatomic) FCPaidBundleConfiguration *paidBundleConfig;
@property(readonly, nonatomic) double delayBeforeRetryingDroppedFeeds;
@property(readonly, nonatomic) long long maxRetriesForDroppedFeeds;
@property(readonly, nonatomic) long long singleChannelFeedMinFeedItemsPerRequest;
@property(readonly, nonatomic) long long singleTopicFeedMinFeedItemsPerRequest;
@property(readonly, nonatomic) _Bool shouldShowAlternateHeadlines;
@property(readonly, nonatomic) NSString *conversionCohortsExpField;
@property(readonly, nonatomic) NSString *engagementCohortsExpField;
- (NTPBTodayConfig *)todayConfigWithIdentifier:(NSString *)arg1 queueConfigs:(NSArray *)arg2 backgroundColorLight:(NSString *)arg3 backgroundColorDark:(NSString *)arg4 audioIndicatorColor:(NSString *)arg5;
- (NSURL *)appAnalyticsEndpointUrlForEnvironment:(unsigned long long)arg1;
@end
