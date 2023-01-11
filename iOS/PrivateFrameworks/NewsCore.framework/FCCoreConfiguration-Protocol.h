//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NFCopying-Protocol.h>

@class FCForYouGroupsConfiguration, FCNotificationsConfiguration, FCPersonalizationTreatment, FCTopStoriesConfiguration, FCVideoGroupsConfig, NSArray, NSDictionary, NSNumber, NSString, NTPBTodayConfig;

@protocol FCCoreConfiguration <NFCopying>
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
@property(readonly, nonatomic) NSString *moreVideosChannelID;
@property(readonly, nonatomic) NSString *topVideosChannelID;
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
- (NSDictionary *)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
- (NTPBTodayConfig *)todayConfigWithQueueConfigs:(NSArray *)arg1 maxSlotCount:(unsigned long long)arg2;
- (FCPersonalizationTreatment *)personalizationTreatmentForFeldsparID:(NSString *)arg1;

@optional
@property(readonly, nonatomic) double delayBeforeRetryingDroppedFeeds;
@property(readonly, nonatomic) long long maxRetriesForDroppedFeeds;
@property(readonly, nonatomic) _Bool isSpecialEventsMicaAnimationDisabled;
@property(readonly, nonatomic) long long singleChannelFeedMinFeedItemsPerRequest;
@property(readonly, nonatomic) long long singleTopicFeedMinFeedItemsPerRequest;
@property(readonly, nonatomic) _Bool shouldShowAlternateHeadlines;
@end

