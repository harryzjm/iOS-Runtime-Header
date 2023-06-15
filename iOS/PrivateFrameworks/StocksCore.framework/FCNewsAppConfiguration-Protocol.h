//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksCore/FCCoreConfiguration-Protocol.h>
#import <StocksCore/NFCopying-Protocol.h>

@class FCIAdConfiguration, FCPersonalizationPublisherDampeningConfig, FCPrefetchConfiguration, NSArray, NSDictionary, NSString, NTPBDiscoverMoreVideosInfo;
@protocol FCNewsAppConfigurationInternal;

@protocol FCNewsAppConfiguration <FCCoreConfiguration, NFCopying>
@property(readonly, nonatomic) _Bool hideAlacartePaywalls;
@property(readonly, nonatomic) _Bool hideAllPaywalls;
@property(readonly, nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property(readonly, nonatomic) long long subscriptionsPlacardGlobalMaximumPerDay;
@property(readonly, nonatomic) long long subscriptionsPlacardPublisherFrequencyInSeconds;
@property(readonly, nonatomic) NSString *articleRecirculationComponentPlacementConfigJSON;
@property(readonly, nonatomic) NTPBDiscoverMoreVideosInfo *shareDiscoverMoreVideosInfo;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, nonatomic) unsigned long long trendingStyle;
@property(readonly, copy, nonatomic) NSArray *topStoriesPublishDates;
@property(readonly, nonatomic) _Bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(readonly, nonatomic) long long autoRefreshMinimumInterval;
@property(readonly, nonatomic) long long stateRestorationAllowedTimeWindow;
@property(readonly, nonatomic) NSArray *mediaSharingBlacklistedChannelIDs;
@property(readonly, nonatomic) NSArray *externalAnalyticsConfigurations;
@property(readonly, nonatomic) NSString *exploreArticleID;
@property(readonly, nonatomic) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForSingleArticle;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForArticleList;
@property(readonly, nonatomic) NSString *personalizationFavorabilityResourceId;
@property(readonly, nonatomic) NSString *personalizationWhitelistResourceId;
@property(readonly, nonatomic) NSString *personalizationUrlMappingResourceId;
@property(readonly, nonatomic) NSString *personalizationBundleIdMappingResourceId;
@property(readonly, nonatomic) long long analyticsEndpointMaxPayloadSize;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationStart;
@property(readonly, nonatomic) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;
@property(readonly, nonatomic) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property(readonly, nonatomic) NSString *widgetConfigID;
@property(readonly, nonatomic) double parsecPopulationCeiling;
@property(readonly, nonatomic) double parsecPopulationFloor;
@property(readonly, nonatomic) _Bool universalLinksEnabled;
@property(readonly, nonatomic) NSString *embedConfigurationAssetID;
@property(readonly, nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property(readonly, nonatomic) long long notificationArticleCacheTimeout;
@property(readonly, nonatomic) long long newFavoriteNotificationAlertsFrequency;
@property(readonly, nonatomic) FCPrefetchConfiguration *prefetchConfig;
@property(readonly, nonatomic) FCIAdConfiguration *iAdConfig;
@property(readonly, nonatomic) double prerollReadyToPlayTimeout;
@property(readonly, nonatomic) double prerollLoadingTimeout;
@property(readonly, nonatomic) double interstitialAdLoadDelay;
@property(readonly, nonatomic) long long autoScrollToTopFeedTimeout;
@property(readonly, nonatomic) NSArray *onboardingFeedIDs;

@optional
@property(readonly, nonatomic) NSDictionary *financeURLAnalyticsAllowLists;
@property(readonly, nonatomic) FCPersonalizationPublisherDampeningConfig *publisherDampeningConfig;
@property(readonly, nonatomic) double todayFeedConfigEndpointTimeoutAfterCK;
@property(readonly, nonatomic) double todayPerformanceAlertSpinnerThreshold;
@property(readonly, nonatomic) double todayPerformanceAlertGapExpansionThreshold;
@property(readonly, nonatomic) double todayPerformanceAlertPrewarmThreshold;
@property(readonly, nonatomic) long long todayPerformanceAlertsMinNewsVersion;
@property(readonly, nonatomic) _Bool todayPerformanceAlertsEnabled;
@property(readonly, nonatomic) id <FCNewsAppConfigurationInternal> internalConfiguration;
@property(readonly, nonatomic) NSArray *recommendedIssueDenyList;
@property(readonly, nonatomic) NSArray *recommendedIssueAllowList;
@property(readonly, nonatomic) _Bool allowAnyChannelForTodayChannelGroups;
@property(readonly, nonatomic) _Bool articleLinkBehaviorImprovementsEnabled;
@property(readonly, copy, nonatomic) NSDictionary *tagFeedGroupClusteringKnobOverrides;
@property(readonly, copy, nonatomic) NSDictionary *todayFeedGroupClusteringKnobOverrides;
@property(readonly, nonatomic) long long maxSportRecommendationsPerSport;
@property(readonly, nonatomic) long long maxSportRecommendationsWithLeagueTypeCollege;
@property(readonly, nonatomic) double minMembershipThresholdForLocalRecommendation;
@property(readonly, nonatomic) double minMembershipThreshold;
@property(readonly, nonatomic) double minScoreThresholdForSportsRecommendations;
@property(readonly, nonatomic) _Bool considerAutofavoritesInMappingCandidates;
@property(readonly, nonatomic) double minMembershipForTaxonomyCandidates;
@property(readonly, nonatomic) _Bool useAltSportsRecommendationMapping;
@property(readonly, nonatomic) _Bool sportsNativeAdsEnabled;
@property(readonly, nonatomic) NSString *sportsSyncingConfigurationResourceId;
@property(readonly, nonatomic) NSString *sportsInjuryReportConfigurationResourceId;
@property(readonly, nonatomic) NSString *sportsLineScoreConfigurationResourceId;
@property(readonly, nonatomic) NSString *sportsKeyPlayerConfigurationResourceId;
@property(readonly, nonatomic) NSString *sportsBracketConfigurationResourceId;
@property(readonly, nonatomic) NSString *sportsBoxScoreConfigurationResourceId;
@property(readonly, nonatomic) _Bool sportsTopicNotificationsEnabled;
@property(readonly, nonatomic) NSString *sportsStandingConfigurationResourceId;
@property(readonly, nonatomic) NSString *sportsConfigurationResourceId;
@property(readonly, nonatomic) NSString *sportsFeaturedEventsResourceId;
@property(readonly, nonatomic) NSString *sportsTaxonomyResourceId;
@property(readonly, nonatomic) long long sportsManagementMinChildItemsCount;
@property(readonly, nonatomic) long long sportsManagementRecommendedItemsCount;
@property(readonly, copy, nonatomic) NSDictionary *superfeedConfigOverrideResourceIDs;
@property(readonly, copy, nonatomic) NSArray *deprecatedSportsTopicTagIds;
@property(readonly, copy, nonatomic) NSArray *editorialFallbackSportsTopicTagIds;
@property(readonly, copy, nonatomic) NSArray *editoralRecommendedSportsTopicTagIds;
@property(readonly, copy, nonatomic) NSDictionary *editorialTopicEventMapping;
@property(readonly, copy, nonatomic) NSArray *analyticsDenylistDescriptorsInternal;
@property(readonly, copy, nonatomic) NSArray *analyticsDenylistDescriptorsSeed;
@property(readonly, copy, nonatomic) NSArray *analyticsDenylistDescriptorsPublic;
@property(readonly, copy, nonatomic) NSArray *analyticsEventNamesInternalAllowlist;
@property(readonly, copy, nonatomic) NSArray *analyticsEventNamesSeedAllowlist;
@property(readonly, copy, nonatomic) NSArray *analyticsEventNamesPublicAllowlist;
@property(readonly, nonatomic) double analyticsJitterUpperBound;
@property(readonly, nonatomic) double analyticsJitterLowerBound;
@property(readonly, nonatomic) _Bool isAnalyticsJitterEnabled;
@property(readonly, nonatomic) _Bool isImprovedManagedTopicGroupingEnabled;
@property(readonly, nonatomic) _Bool isLocalNewsInTopStoriesEnabled;
@property(readonly, nonatomic) _Bool channelGroupsInTodayEnabled;
@property(readonly, nonatomic) _Bool fallbackToReverseChronSorting;
@property(readonly, nonatomic) _Bool clientSideEngagementBoostEnabled;
@property(readonly, nonatomic) _Bool sportsRecommendationHidesIgnoredTags;
@property(readonly, nonatomic) _Bool shouldGroupSportsHighlights;
@property(readonly, nonatomic) _Bool sportsEventPagesEnabled;
@property(readonly, nonatomic) _Bool sportsRecordEnabled;
@property(readonly, nonatomic) _Bool sportsInjuryReportsEnabled;
@property(readonly, nonatomic) _Bool sportsBracketsEnabled;
@property(readonly, nonatomic) _Bool sportsBoxScoresEnabled;
@property(readonly, nonatomic) _Bool sportsStandingsEnabled;
@property(readonly, nonatomic) _Bool articleEmbeddingsScoringEnabled;
@property(readonly, nonatomic) _Bool statelessPersonalizationEnabled;
@property(readonly, nonatomic) _Bool personalizationEventTrackingEnabled;
@property(readonly, nonatomic) _Bool audioFeedConfigRequestsEnabled;
@property(readonly, nonatomic) long long topStoriesLocalNewsExpiration;
@property(readonly, nonatomic) long long todayFeedLoadToCacheTimeWindow;
@property(readonly, nonatomic) _Bool todayFeedConfigRequestsEnabled;
@property(readonly, nonatomic) _Bool isCardFeedRedesignEnabled;
@property(readonly, nonatomic) double continueReadingDismissalInterval;
@property(readonly, nonatomic) _Bool inAppMessagesEnabled;
@property(readonly, nonatomic) _Bool appReviewRequestEnabled;
@property(readonly, nonatomic) _Bool smarterMessagingEnabled;
@property(readonly, nonatomic) _Bool newSearchEndpointConfigEnabled;
@property(readonly, nonatomic) _Bool newChannelPickerEnabled;
@property(readonly, nonatomic) _Bool fineGrainedNewsletterManagementEnabled;
@property(readonly, nonatomic) _Bool isSIWAOnMacEnabled;
@property(readonly, nonatomic) _Bool paidBundleViaOfferEnabled;
@property(readonly, nonatomic) _Bool servicesBundleCIPActivationEnabled;
@property(readonly, nonatomic) _Bool splitTopicGroupsForYouAndPopular;
@property(readonly, nonatomic) _Bool splitTopicGroups;
@property(readonly, nonatomic) NSArray *discoverNewsPlusChannelIDs;
@property(readonly, nonatomic) _Bool searchFeaturedStoriesEnabled;
@property(readonly, nonatomic) _Bool useFasterSearch;
@property(readonly, nonatomic) _Bool useNewsArticleSearch;
@property(readonly, nonatomic) _Bool isSportsSyncingSupported;
@property(readonly, nonatomic) NSArray *channelPickerLocalSearchConfigurationProfiles;
@property(readonly, nonatomic) NSArray *channelPickerNewsPlusSearchConfigurationProfiles;
@property(readonly, nonatomic) NSArray *channelPickerRegularSearchConfigurationProfiles;
@property(readonly, nonatomic) NSArray *sportsSearchConfigurationProfiles;
@property(readonly, nonatomic) NSArray *searchConfigurationProfiles;
@property(readonly, nonatomic) _Bool userSegmentationInWidgetAllowed;
@property(readonly, nonatomic) _Bool notificationAssetPrefetchingRequiresWatch;
@property(readonly, nonatomic) _Bool notificationEnableAssetPrefetching;
@property(readonly, nonatomic) _Bool widgetAnalyticsEnabled;
@property(readonly, nonatomic) _Bool widgetContentPrefetchEnabled;
@property(readonly, nonatomic) long long articleAdPrefetchLimit;
@property(readonly, nonatomic) long long feedAdScreenfulsToPrefetch;
@property(readonly, nonatomic) double nativeInArticleAdRequestThrottle;
@property(readonly, nonatomic) double nativeInFeedAdRequestThrottle;
@property(readonly, nonatomic) double prerollAdRequestThrottle;
@property(readonly, nonatomic) double interstitialAdRequestThrottle;
@property(readonly, nonatomic) double articleBannerAdRequestThrottle;
@property(readonly, nonatomic) double feedBannerAdRequestThrottle;
@property(readonly, nonatomic) _Bool forYouGroupShouldPromoteAccessibleHeadline;
@property(readonly, nonatomic) long long articleReadCountThreshold;
@property(readonly, nonatomic) NSString *locationRecommendationMappingsResourceId;
@property(readonly, nonatomic) NSString *userVectorModelResourceId;
@property(readonly, nonatomic) NSString *userVectorWhitelistResourceId;
@property(readonly, nonatomic) NSString *businessAudioTagID;
@property(readonly, nonatomic) NSString *inConversationsAudioTagID;
@property(readonly, nonatomic) NSString *searchEndpointConfigurationResourceID;
@property(readonly, nonatomic) NSString *channelPickerConfigurationResourceId;
@property(readonly, nonatomic) NSString *userConcernConfigurationResourceId;
@property(readonly, nonatomic) NSString *audioPlaylistFeedConfigurationResourceId;
@property(readonly, nonatomic) NSString *audioHistoryFeedConfigurationResourceId;
@property(readonly, nonatomic) NSString *bundleChannelPickerSuggestionsTabiPackageResourceId;
@property(readonly, nonatomic) NSString *nonBundleChannelPickerSuggestionsTabiPackageResourceId;
@property(readonly, nonatomic) NSString *endOfArticleFeedConfigurationResourceId;
@property(readonly, nonatomic) NSString *searchMoreFeedConfigurationResourceId;
@property(readonly, nonatomic) NSString *searchFeedConfigurationResourceId;
@property(readonly, nonatomic) NSString *historyFeedConfigurationResourceId;
@property(readonly, nonatomic) NSString *savedFeedConfigurationResourceId;
@property(readonly, nonatomic) NSString *sharedWithYouFeedLayoutConfigurationResourceId;
@property(readonly, nonatomic) NSString *sectionFeedConfigurationResourceId;
@property(readonly, nonatomic) NSString *channelFeedConfigurationResourceId;
@property(readonly, nonatomic) NSString *topicFeedConfigurationResourceId;
@property(readonly, nonatomic) NSString *tagFeedLayoutConfigurationResourceId;
@property(readonly, nonatomic) NSString *localAreasMappingResourceId;
@property(readonly, nonatomic) _Bool enableLocationBasedAutofavorites;
@property(readonly, nonatomic) _Bool issuesNewsletterOptinEnabled;
@property(readonly, nonatomic) long long newsletterSubscriptionType;
@property(readonly, nonatomic) double newsletterSubscriptionStatusCacheTimeout;
@property(readonly, nonatomic) long long emailSignupRequiredAppLaunchCount;
@property(readonly, nonatomic) unsigned long long bestOfBundleFeedGroupKind;
@property(readonly, nonatomic) unsigned long long likeDislikeBehavior;
@property(readonly, nonatomic) long long maximumTrendingGroupSizeiPhone;
@property(readonly, nonatomic) long long maximumTrendingGroupSizeiPad;
@property(readonly, nonatomic) long long feedContentExposureTestMaximumInterval;
@property(readonly, nonatomic) long long criticalStorageThreshold;
@property(readonly, nonatomic) long long lowStorageThreshold;
@property(readonly, nonatomic, getter=isArticleToolbarCompressionEnabled) _Bool articleToolbarCompressionEnabled;
@property(readonly, nonatomic) NSString *issueArticleRecirculationConfig;
@property(readonly, nonatomic) NSString *translationMapResourceID;
@property(readonly, nonatomic) _Bool enableBadgeInSpotlightTabBar;
@property(readonly, nonatomic) NSString *anfRenderingConfiguration;
@property(readonly, nonatomic) NSString *webEmbedContentBlockerOverrides;
@property(readonly, nonatomic) NSString *webEmbedContentBlockers;
@property(readonly, nonatomic) NSString *feedNavigationConfigJSON;
@property(readonly, nonatomic) _Bool disableThumbnailsForArticleRecirculation;
@property(readonly, nonatomic) long long articleRecirculationPopularFeedQueryTimeRange;
@end

