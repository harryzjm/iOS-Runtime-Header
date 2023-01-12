//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsArticles/FCCoreConfiguration-Protocol.h>
#import <NewsArticles/NFCopying-Protocol.h>

@class FCIAdConfiguration, FCPrefetchConfiguration, NSArray, NSDictionary, NSString, NTPBDiscoverMoreVideosInfo;

@protocol FCNewsAppConfiguration <FCCoreConfiguration, NFCopying>
@property(nonatomic, readonly) _Bool hideAlacartePaywalls;
@property(nonatomic, readonly) _Bool hideAllPaywalls;
@property(nonatomic, readonly) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property(nonatomic, readonly) long long subscriptionsPlacardGlobalMaximumPerDay;
@property(nonatomic, readonly) long long subscriptionsPlacardPublisherFrequencyInSeconds;
@property(nonatomic, readonly) NSString *articleRecirculationComponentPlacementConfigJSON;
@property(nonatomic, readonly) NTPBDiscoverMoreVideosInfo *shareDiscoverMoreVideosInfo;
@property(nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property(nonatomic, readonly) unsigned long long trendingStyle;
@property(nonatomic, readonly) NSArray *topStoriesPublishDates;
@property(nonatomic, readonly) _Bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(nonatomic, readonly) long long autoRefreshMinimumInterval;
@property(nonatomic, readonly) long long stateRestorationAllowedTimeWindow;
@property(nonatomic, readonly) NSArray *mediaSharingBlacklistedChannelIDs;
@property(nonatomic, readonly) NSArray *externalAnalyticsConfigurations;
@property(nonatomic, readonly) NSString *exploreArticleID;
@property(nonatomic, readonly) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(nonatomic, readonly) long long corryBarMaxArticleCountForSingleArticle;
@property(nonatomic, readonly) long long corryBarMaxArticleCountForArticleList;
@property(nonatomic, readonly) NSString *personalizationFavorabilityResourceId;
@property(nonatomic, readonly) NSString *personalizationWhitelistResourceId;
@property(nonatomic, readonly) NSString *personalizationUrlMappingResourceId;
@property(nonatomic, readonly) NSString *personalizationBundleIdMappingResourceId;
@property(nonatomic, readonly) long long analyticsEndpointMaxPayloadSize;
@property(nonatomic, readonly) double articleDiversificationUniquePublisherExpectationYIntercept;
@property(nonatomic, readonly) double articleDiversificationUniquePublisherExpectationSlope;
@property(nonatomic, readonly) double articleDiversificationSimilarityExpectationEnd;
@property(nonatomic, readonly) double articleDiversificationSimilarityExpectationStart;
@property(nonatomic, readonly) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;
@property(nonatomic, readonly) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property(nonatomic, readonly) NSString *widgetConfigID;
@property(nonatomic, readonly) double parsecPopulationCeiling;
@property(nonatomic, readonly) double parsecPopulationFloor;
@property(nonatomic, readonly) _Bool universalLinksEnabled;
@property(nonatomic, readonly) NSString *embedConfigurationAssetID;
@property(nonatomic, readonly) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property(nonatomic, readonly) long long notificationArticleCacheTimeout;
@property(nonatomic, readonly) long long newFavoriteNotificationAlertsFrequency;
@property(nonatomic, readonly) FCPrefetchConfiguration *prefetchConfig;
@property(nonatomic, readonly) FCIAdConfiguration *iAdConfig;
@property(nonatomic, readonly) double prerollLoadingTimeout;
@property(nonatomic, readonly) double interstitialAdLoadDelay;
@property(nonatomic, readonly) long long autoScrollToTopFeedTimeout;
@property(nonatomic, readonly) NSArray *onboardingFeedIDs;

@optional
@property(nonatomic, readonly) NSDictionary *todayFeedGroupClusteringKnobOverrides;
@property(nonatomic, readonly) long long maxSportRecommendationsPerSport;
@property(nonatomic, readonly) long long maxSportRecommendationsWithLeagueTypeCollege;
@property(nonatomic, readonly) double minMembershipThresholdForLocalRecommendation;
@property(nonatomic, readonly) double minMembershipThreshold;
@property(nonatomic, readonly) double minScoreThresholdForSportsRecommendations;
@property(nonatomic, readonly) _Bool considerAutofavoritesInMappingCandidates;
@property(nonatomic, readonly) double minMembershipForTaxonomyCandidates;
@property(nonatomic, readonly) _Bool useAltSportsRecommendationMapping;
@property(nonatomic, readonly) _Bool sportsNativeAdsEnabled;
@property(nonatomic, readonly) NSString *sportsSyncingConfigurationResourceId;
@property(nonatomic, readonly) NSString *sportsStandingConfigurationResourceId;
@property(nonatomic, readonly) NSString *sportsConfigurationResourceId;
@property(nonatomic, readonly) NSString *sportsFeaturedEventsResourceId;
@property(nonatomic, readonly) NSString *sportsTaxonomyResourceId;
@property(nonatomic, readonly) long long sportsManagementMinChildItemsCount;
@property(nonatomic, readonly) long long sportsManagementRecommendedItemsCount;
@property(nonatomic, readonly) NSDictionary *superfeedConfigOverrideResourceIDs;
@property(nonatomic, readonly) NSArray *deprecatedSportsTopicTagIds;
@property(nonatomic, readonly) NSArray *editorialFallbackSportsTopicTagIds;
@property(nonatomic, readonly) NSArray *editoralRecommendedSportsTopicTagIds;
@property(nonatomic, readonly) NSDictionary *editorialTopicEventMapping;
@property(nonatomic, readonly) NSArray *analyticsDenylistDescriptorsInternal;
@property(nonatomic, readonly) NSArray *analyticsDenylistDescriptorsSeed;
@property(nonatomic, readonly) NSArray *analyticsDenylistDescriptorsPublic;
@property(nonatomic, readonly) NSArray *analyticsEventNamesInternalAllowlist;
@property(nonatomic, readonly) NSArray *analyticsEventNamesSeedAllowlist;
@property(nonatomic, readonly) NSArray *analyticsEventNamesPublicAllowlist;
@property(nonatomic, readonly) double analyticsJitterUpperBound;
@property(nonatomic, readonly) double analyticsJitterLowerBound;
@property(nonatomic, readonly) _Bool isAnalyticsJitterEnabled;
@property(nonatomic, readonly) _Bool isLocalNewsInTopStoriesEnabled;
@property(nonatomic, readonly) _Bool clientSideEngagementBoostEnabled;
@property(nonatomic, readonly) _Bool sportsRecommendationHidesIgnoredTags;
@property(nonatomic, readonly) _Bool sportsRecordEnabled;
@property(nonatomic, readonly) _Bool sportsStandingsEnabled;
@property(nonatomic, readonly) _Bool statelessPersonalizationEnabled;
@property(nonatomic, readonly) _Bool personalizationEventTrackingEnabled;
@property(nonatomic, readonly) _Bool audioFeedConfigRequestsEnabled;
@property(nonatomic, readonly) long long topStoriesLocalNewsExpiration;
@property(nonatomic, readonly) long long todayFeedLoadToCacheTimeWindow;
@property(nonatomic, readonly) _Bool todayFeedConfigRequestsEnabled;
@property(nonatomic, readonly) _Bool isCardFeedRedesignEnabled;
@property(nonatomic, readonly) double continueReadingDismissalInterval;
@property(nonatomic, readonly) _Bool inAppMessagesEnabled;
@property(nonatomic, readonly) _Bool appReviewRequestEnabled;
@property(nonatomic, readonly) _Bool smarterMessagingEnabled;
@property(nonatomic, readonly) _Bool isSIWAOnMacEnabled;
@property(nonatomic, readonly) _Bool servicesBundleCIPActivationEnabled;
@property(nonatomic, readonly) _Bool splitTopicGroupsForYouAndPopular;
@property(nonatomic, readonly) _Bool splitTopicGroups;
@property(nonatomic, readonly) NSArray *discoverNewsPlusChannelIDs;
@property(nonatomic, readonly) _Bool searchFeaturedStoriesEnabled;
@property(nonatomic, readonly) _Bool immersiveSidebar;
@property(nonatomic, readonly) _Bool useFasterSearch;
@property(nonatomic, readonly) _Bool useNewsArticleSearch;
@property(nonatomic, readonly) _Bool isSportsSyncingSupported;
@property(nonatomic, readonly) NSArray *sportsSearchConfigurationProfiles;
@property(nonatomic, readonly) NSArray *searchConfigurationProfiles;
@property(nonatomic, readonly) _Bool userSegmentationInWidgetAllowed;
@property(nonatomic, readonly) _Bool notificationAssetPrefetchingRequiresWatch;
@property(nonatomic, readonly) _Bool notificationEnableAssetPrefetching;
@property(nonatomic, readonly) _Bool widgetAnalyticsEnabled;
@property(nonatomic, readonly) _Bool widgetContentPrefetchEnabled;
@property(nonatomic, readonly) long long articleAdPrefetchLimit;
@property(nonatomic, readonly) long long feedAdScreenfulsToPrefetch;
@property(nonatomic, readonly) double nativeInArticleAdRequestThrottle;
@property(nonatomic, readonly) double nativeInFeedAdRequestThrottle;
@property(nonatomic, readonly) double prerollAdRequestThrottle;
@property(nonatomic, readonly) double interstitialAdRequestThrottle;
@property(nonatomic, readonly) double articleBannerAdRequestThrottle;
@property(nonatomic, readonly) double feedBannerAdRequestThrottle;
@property(nonatomic, readonly) _Bool forYouGroupShouldPromoteAccessibleHeadline;
@property(nonatomic, readonly) long long articleReadCountThreshold;
@property(nonatomic, readonly) NSString *locationRecommendationMappingsResourceId;
@property(nonatomic, readonly) NSString *userVectorModelResourceId;
@property(nonatomic, readonly) NSString *userVectorWhitelistResourceId;
@property(nonatomic, readonly) NSString *businessAudioTagID;
@property(nonatomic, readonly) NSString *inConversationsAudioTagID;
@property(nonatomic, readonly) NSString *audioPlaylistFeedConfigurationResourceId;
@property(nonatomic, readonly) NSString *audioHistoryFeedConfigurationResourceId;
@property(nonatomic, readonly) NSString *endOfArticleFeedConfigurationResourceId;
@property(nonatomic, readonly) NSString *searchMoreFeedConfigurationResourceId;
@property(nonatomic, readonly) NSString *searchFeedConfigurationResourceId;
@property(nonatomic, readonly) NSString *historyFeedConfigurationResourceId;
@property(nonatomic, readonly) NSString *savedFeedConfigurationResourceId;
@property(nonatomic, readonly) NSString *sharedWithYouFeedLayoutConfigurationResourceId;
@property(nonatomic, readonly) NSString *tagFeedLayoutConfigurationResourceId;
@property(nonatomic, readonly) NSString *localAreasMappingResourceId;
@property(nonatomic, readonly) _Bool enableLocationBasedAutofavorites;
@property(nonatomic, readonly) _Bool issuesNewsletterOptinEnabled;
@property(nonatomic, readonly) long long newsletterSubscriptionType;
@property(nonatomic, readonly) double newsletterSubscriptionStatusCacheTimeout;
@property(nonatomic, readonly) long long emailSignupRequiredAppLaunchCount;
@property(nonatomic, readonly) unsigned long long bestOfBundleFeedGroupKind;
@property(nonatomic, readonly) unsigned long long likeDislikeBehavior;
@property(nonatomic, readonly) long long maximumTrendingGroupSizeiPhone;
@property(nonatomic, readonly) long long maximumTrendingGroupSizeiPad;
@property(nonatomic, readonly) long long feedContentExposureTestMaximumInterval;
@property(nonatomic, readonly) long long criticalStorageThreshold;
@property(nonatomic, readonly) long long lowStorageThreshold;
- (_Bool)isArticleToolbarCompressionEnabled;
@property(nonatomic, readonly) NSString *issueArticleRecirculationConfigJSON;
@property(nonatomic, readonly) NSString *translationMapResourceID;
@property(nonatomic, readonly) _Bool enableBadgeInSpotlightTabBar;
@property(nonatomic, readonly) NSString *anfRenderingConfiguration;
@property(nonatomic, readonly) NSString *webEmbedContentBlockerOverrides;
@property(nonatomic, readonly) NSString *webEmbedContentBlockers;
@property(nonatomic, readonly) NSString *feedNavigationConfigJSON;
@property(nonatomic, readonly) _Bool disableThumbnailsForArticleRecirculation;
@property(nonatomic, readonly) long long articleRecirculationPopularFeedQueryTimeRange;

// Remaining properties
@property(nonatomic, readonly) _Bool articleToolbarCompressionEnabled;
@end

