//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NTPBAdExposureIneligible, NTPBAdExposureOpportunity, NTPBAlreadySubscriberSignIn, NTPBAnfComponentExposure, NTPBAppSessionEnd, NTPBAppSessionEndWatch, NTPBAppSessionStart, NTPBAppSessionStartWatch, NTPBArticleHostViewExposure, NTPBArticleLikeDislike, NTPBArticleScroll, NTPBArticleScrollNotw, NTPBArticleViewNotw, NTPBArticleViewWatch, NTPBBackgroundSubscriptionValidation, NTPBBundleIdMappingMiss, NTPBChannelMuteUnmute, NTPBComscoreEventSend, NTPBCoverArticleWidgetExposure, NTPBCoverArticleWidgetView, NTPBDiscoverMoreInterstitialExposure, NTPBEmailOptInInvite, NTPBEndOfArticleExposure, NTPBExternalAnalyticsEventSend, NTPBFeedCellExposure, NTPBFeedCellHostViewExposure, NTPBFeedEngagementMenuExposure, NTPBFeedSubscribeUnsubscribe, NTPBFeedViewExposure, NTPBGroupViewExposure, NTPBLinkTapArticle, NTPBLocalNotificationReceived, NTPBLocalNotificationReturn, NTPBMediaEngage, NTPBMediaEngageComplete, NTPBMediaExposure, NTPBMediaView, NTPBNoUserAction, NTPBNotificationSettingsScreenView, NTPBNotificationSubscribeUnsubscribe, NTPBOptInButtonExposure, NTPBPaidSubscriptionConversionPointExposure, NTPBPaidSubscriptionResult, NTPBPaidSubscriptionSheetIapFail, NTPBPaidSubscriptionSheetView, NTPBPullToRefresh, NTPBReadingListAddRemove, NTPBReadingListShow, NTPBRecommendationBrickExposure, NTPBReportConcernSubmission, NTPBRestorePaidSubscription, NTPBSearchBegin, NTPBSearchExecute, NTPBSearchResultSelect, NTPBSearchViewExposure, NTPBShareInformationScreenView, NTPBShareResult, NTPBShareSheetExposure, NTPBShareSheetIapFail, NTPBSubscriptionDetectionScreenView, NTPBSuggestionsFeedback, NTPBTodayWidgetExposure, NTPBTodayWidgetHeadlineExposure, NTPBTodayWidgetSession, NTPBUrlMappingMiss, NTPBUserIgnoreFavoritesSuggestion, NTPBUserOnboardingBegin, NTPBUserOnboardingChannelPickerComplete, NTPBUserOnboardingResult, NTPBUserOnboardingResume, NTPBUserOnboardingScreenView, NTPBWebAccessScreenView, NTPBWidgetEngagement;

@interface NTPBEventObject : PBCodable <NSCopying>
{
    NTPBAdExposureIneligible *_adExposureIneligible;
    NTPBAdExposureOpportunity *_adExposureOpportunity;
    NTPBAlreadySubscriberSignIn *_alreadySubscriberSignIn;
    NTPBAnfComponentExposure *_anfComponentExposure;
    NTPBAppSessionEnd *_appSessionEnd;
    NTPBAppSessionEndWatch *_appSessionEndWatch;
    NTPBAppSessionStart *_appSessionStart;
    NTPBAppSessionStartWatch *_appSessionStartWatch;
    NTPBArticleHostViewExposure *_articleHostViewExposure;
    NTPBArticleLikeDislike *_articleLikeDislike;
    NTPBArticleScroll *_articleScroll;
    NTPBArticleScrollNotw *_articleScrollNotw;
    NTPBArticleViewNotw *_articleViewNotw;
    NTPBArticleViewWatch *_articleViewWatch;
    NTPBBackgroundSubscriptionValidation *_backgroundSubscriptionValidation;
    NTPBBundleIdMappingMiss *_bundleIdMappingMiss;
    NTPBChannelMuteUnmute *_channelMuteUnmute;
    NTPBComscoreEventSend *_comscoreEventSend;
    NTPBCoverArticleWidgetExposure *_coverArticleWidgetExposure;
    NTPBCoverArticleWidgetView *_coverArticleWidgetView;
    NTPBDiscoverMoreInterstitialExposure *_discoverMoreInterstitialExposure;
    NTPBEmailOptInInvite *_emailOptInInvite;
    NTPBEndOfArticleExposure *_endOfArticleExposure;
    NTPBExternalAnalyticsEventSend *_externalAnalyticsEventSend;
    NTPBFeedCellExposure *_feedCellExposure;
    NTPBFeedCellHostViewExposure *_feedCellHostViewExposure;
    NTPBFeedEngagementMenuExposure *_feedEngagementMenuExposure;
    NTPBFeedSubscribeUnsubscribe *_feedSubscribeUnsubscribe;
    NTPBFeedViewExposure *_feedViewExposure;
    NTPBGroupViewExposure *_groupViewExposure;
    NTPBLinkTapArticle *_linkTapArticle;
    NTPBLocalNotificationReceived *_localNotificationReceived;
    NTPBLocalNotificationReturn *_localNotificationReturn;
    NTPBMediaEngage *_mediaEngage;
    NTPBMediaEngageComplete *_mediaEngageComplete;
    NTPBMediaExposure *_mediaExposure;
    NTPBMediaView *_mediaView;
    NTPBNoUserAction *_noUserAction;
    NTPBNotificationSettingsScreenView *_notificationSettingsScreenView;
    NTPBNotificationSubscribeUnsubscribe *_notificationSubscribeUnsubscribe;
    NTPBOptInButtonExposure *_optInButtonExposure;
    NTPBPaidSubscriptionConversionPointExposure *_paidSubscriptionConversionPointExposure;
    NTPBPaidSubscriptionResult *_paidSubscriptionResult;
    NTPBPaidSubscriptionSheetIapFail *_paidSubscriptionSheetIapFail;
    NTPBPaidSubscriptionSheetView *_paidSubscriptionSheetView;
    NTPBPullToRefresh *_pullToRefresh;
    NTPBReadingListAddRemove *_readingListAddRemove;
    NTPBReadingListShow *_readingListShow;
    NTPBRecommendationBrickExposure *_recommendationBrickExposure;
    NTPBReportConcernSubmission *_reportConcernSubmission;
    NTPBRestorePaidSubscription *_restorePaidSubscription;
    NTPBSearchBegin *_searchBegin;
    NTPBSearchExecute *_searchExecute;
    NTPBSearchResultSelect *_searchResultSelect;
    NTPBSearchViewExposure *_searchViewExposure;
    NTPBShareInformationScreenView *_shareInformationScreenView;
    NTPBShareResult *_shareResult;
    NTPBShareSheetExposure *_shareSheetExposure;
    NTPBShareSheetIapFail *_shareSheetIapFail;
    NTPBSubscriptionDetectionScreenView *_subscriptionDetectionScreenView;
    NTPBSuggestionsFeedback *_suggestionsFeedback;
    NTPBTodayWidgetExposure *_todayWidgetExposure;
    NTPBTodayWidgetHeadlineExposure *_todayWidgetHeadlineExposure;
    NTPBTodayWidgetSession *_todayWidgetSession;
    NTPBUrlMappingMiss *_urlMappingMiss;
    NTPBUserIgnoreFavoritesSuggestion *_userIgnoreFavoritesSuggestion;
    NTPBUserOnboardingBegin *_userOnboardingBegin;
    NTPBUserOnboardingChannelPickerComplete *_userOnboardingChannelPickerComplete;
    NTPBUserOnboardingResult *_userOnboardingResult;
    NTPBUserOnboardingResume *_userOnboardingResume;
    NTPBUserOnboardingScreenView *_userOnboardingScreenView;
    NTPBWebAccessScreenView *_webAccessScreenView;
    NTPBWidgetEngagement *_widgetEngagement;
}

@property(retain, nonatomic) NTPBUserIgnoreFavoritesSuggestion *userIgnoreFavoritesSuggestion; // @synthesize userIgnoreFavoritesSuggestion=_userIgnoreFavoritesSuggestion;
@property(retain, nonatomic) NTPBSuggestionsFeedback *suggestionsFeedback; // @synthesize suggestionsFeedback=_suggestionsFeedback;
@property(retain, nonatomic) NTPBOptInButtonExposure *optInButtonExposure; // @synthesize optInButtonExposure=_optInButtonExposure;
@property(retain, nonatomic) NTPBAdExposureIneligible *adExposureIneligible; // @synthesize adExposureIneligible=_adExposureIneligible;
@property(retain, nonatomic) NTPBTodayWidgetExposure *todayWidgetExposure; // @synthesize todayWidgetExposure=_todayWidgetExposure;
@property(retain, nonatomic) NTPBTodayWidgetHeadlineExposure *todayWidgetHeadlineExposure; // @synthesize todayWidgetHeadlineExposure=_todayWidgetHeadlineExposure;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(retain, nonatomic) NTPBTodayWidgetSession *todayWidgetSession; // @synthesize todayWidgetSession=_todayWidgetSession;
@property(retain, nonatomic) NTPBAnfComponentExposure *anfComponentExposure; // @synthesize anfComponentExposure=_anfComponentExposure;
@property(retain, nonatomic) NTPBAppSessionEndWatch *appSessionEndWatch; // @synthesize appSessionEndWatch=_appSessionEndWatch;
@property(retain, nonatomic) NTPBArticleViewWatch *articleViewWatch; // @synthesize articleViewWatch=_articleViewWatch;
@property(retain, nonatomic) NTPBAppSessionStartWatch *appSessionStartWatch; // @synthesize appSessionStartWatch=_appSessionStartWatch;
@property(retain, nonatomic) NTPBExternalAnalyticsEventSend *externalAnalyticsEventSend; // @synthesize externalAnalyticsEventSend=_externalAnalyticsEventSend;
@property(retain, nonatomic) NTPBBundleIdMappingMiss *bundleIdMappingMiss; // @synthesize bundleIdMappingMiss=_bundleIdMappingMiss;
@property(retain, nonatomic) NTPBUrlMappingMiss *urlMappingMiss; // @synthesize urlMappingMiss=_urlMappingMiss;
@property(retain, nonatomic) NTPBArticleScrollNotw *articleScrollNotw; // @synthesize articleScrollNotw=_articleScrollNotw;
@property(retain, nonatomic) NTPBArticleViewNotw *articleViewNotw; // @synthesize articleViewNotw=_articleViewNotw;
@property(retain, nonatomic) NTPBDiscoverMoreInterstitialExposure *discoverMoreInterstitialExposure; // @synthesize discoverMoreInterstitialExposure=_discoverMoreInterstitialExposure;
@property(retain, nonatomic) NTPBComscoreEventSend *comscoreEventSend; // @synthesize comscoreEventSend=_comscoreEventSend;
@property(retain, nonatomic) NTPBPaidSubscriptionSheetIapFail *paidSubscriptionSheetIapFail; // @synthesize paidSubscriptionSheetIapFail=_paidSubscriptionSheetIapFail;
@property(retain, nonatomic) NTPBRestorePaidSubscription *restorePaidSubscription; // @synthesize restorePaidSubscription=_restorePaidSubscription;
@property(retain, nonatomic) NTPBCoverArticleWidgetExposure *coverArticleWidgetExposure; // @synthesize coverArticleWidgetExposure=_coverArticleWidgetExposure;
@property(retain, nonatomic) NTPBEmailOptInInvite *emailOptInInvite; // @synthesize emailOptInInvite=_emailOptInInvite;
@property(retain, nonatomic) NTPBNotificationSettingsScreenView *notificationSettingsScreenView; // @synthesize notificationSettingsScreenView=_notificationSettingsScreenView;
@property(retain, nonatomic) NTPBNotificationSubscribeUnsubscribe *notificationSubscribeUnsubscribe; // @synthesize notificationSubscribeUnsubscribe=_notificationSubscribeUnsubscribe;
@property(retain, nonatomic) NTPBCoverArticleWidgetView *coverArticleWidgetView; // @synthesize coverArticleWidgetView=_coverArticleWidgetView;
@property(retain, nonatomic) NTPBSubscriptionDetectionScreenView *subscriptionDetectionScreenView; // @synthesize subscriptionDetectionScreenView=_subscriptionDetectionScreenView;
@property(retain, nonatomic) NTPBBackgroundSubscriptionValidation *backgroundSubscriptionValidation; // @synthesize backgroundSubscriptionValidation=_backgroundSubscriptionValidation;
@property(retain, nonatomic) NTPBAlreadySubscriberSignIn *alreadySubscriberSignIn; // @synthesize alreadySubscriberSignIn=_alreadySubscriberSignIn;
@property(retain, nonatomic) NTPBWebAccessScreenView *webAccessScreenView; // @synthesize webAccessScreenView=_webAccessScreenView;
@property(retain, nonatomic) NTPBShareInformationScreenView *shareInformationScreenView; // @synthesize shareInformationScreenView=_shareInformationScreenView;
@property(retain, nonatomic) NTPBPaidSubscriptionResult *paidSubscriptionResult; // @synthesize paidSubscriptionResult=_paidSubscriptionResult;
@property(retain, nonatomic) NTPBShareSheetIapFail *shareSheetIapFail; // @synthesize shareSheetIapFail=_shareSheetIapFail;
@property(retain, nonatomic) NTPBPaidSubscriptionSheetView *paidSubscriptionSheetView; // @synthesize paidSubscriptionSheetView=_paidSubscriptionSheetView;
@property(retain, nonatomic) NTPBPaidSubscriptionConversionPointExposure *paidSubscriptionConversionPointExposure; // @synthesize paidSubscriptionConversionPointExposure=_paidSubscriptionConversionPointExposure;
@property(retain, nonatomic) NTPBGroupViewExposure *groupViewExposure; // @synthesize groupViewExposure=_groupViewExposure;
@property(retain, nonatomic) NTPBSearchViewExposure *searchViewExposure; // @synthesize searchViewExposure=_searchViewExposure;
@property(retain, nonatomic) NTPBFeedEngagementMenuExposure *feedEngagementMenuExposure; // @synthesize feedEngagementMenuExposure=_feedEngagementMenuExposure;
@property(retain, nonatomic) NTPBShareSheetExposure *shareSheetExposure; // @synthesize shareSheetExposure=_shareSheetExposure;
@property(retain, nonatomic) NTPBChannelMuteUnmute *channelMuteUnmute; // @synthesize channelMuteUnmute=_channelMuteUnmute;
@property(retain, nonatomic) NTPBAdExposureOpportunity *adExposureOpportunity; // @synthesize adExposureOpportunity=_adExposureOpportunity;
@property(retain, nonatomic) NTPBUserOnboardingChannelPickerComplete *userOnboardingChannelPickerComplete; // @synthesize userOnboardingChannelPickerComplete=_userOnboardingChannelPickerComplete;
@property(retain, nonatomic) NTPBUserOnboardingScreenView *userOnboardingScreenView; // @synthesize userOnboardingScreenView=_userOnboardingScreenView;
@property(retain, nonatomic) NTPBLocalNotificationReceived *localNotificationReceived; // @synthesize localNotificationReceived=_localNotificationReceived;
@property(retain, nonatomic) NTPBLinkTapArticle *linkTapArticle; // @synthesize linkTapArticle=_linkTapArticle;
@property(retain, nonatomic) NTPBPullToRefresh *pullToRefresh; // @synthesize pullToRefresh=_pullToRefresh;
@property(retain, nonatomic) NTPBLocalNotificationReturn *localNotificationReturn; // @synthesize localNotificationReturn=_localNotificationReturn;
@property(retain, nonatomic) NTPBReportConcernSubmission *reportConcernSubmission; // @synthesize reportConcernSubmission=_reportConcernSubmission;
@property(retain, nonatomic) NTPBEndOfArticleExposure *endOfArticleExposure; // @synthesize endOfArticleExposure=_endOfArticleExposure;
@property(retain, nonatomic) NTPBRecommendationBrickExposure *recommendationBrickExposure; // @synthesize recommendationBrickExposure=_recommendationBrickExposure;
@property(retain, nonatomic) NTPBReadingListShow *readingListShow; // @synthesize readingListShow=_readingListShow;
@property(retain, nonatomic) NTPBReadingListAddRemove *readingListAddRemove; // @synthesize readingListAddRemove=_readingListAddRemove;
@property(retain, nonatomic) NTPBNoUserAction *noUserAction; // @synthesize noUserAction=_noUserAction;
@property(retain, nonatomic) NTPBShareResult *shareResult; // @synthesize shareResult=_shareResult;
@property(retain, nonatomic) NTPBSearchResultSelect *searchResultSelect; // @synthesize searchResultSelect=_searchResultSelect;
@property(retain, nonatomic) NTPBSearchExecute *searchExecute; // @synthesize searchExecute=_searchExecute;
@property(retain, nonatomic) NTPBSearchBegin *searchBegin; // @synthesize searchBegin=_searchBegin;
@property(retain, nonatomic) NTPBMediaEngageComplete *mediaEngageComplete; // @synthesize mediaEngageComplete=_mediaEngageComplete;
@property(retain, nonatomic) NTPBMediaEngage *mediaEngage; // @synthesize mediaEngage=_mediaEngage;
@property(retain, nonatomic) NTPBMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) NTPBMediaExposure *mediaExposure; // @synthesize mediaExposure=_mediaExposure;
@property(retain, nonatomic) NTPBFeedSubscribeUnsubscribe *feedSubscribeUnsubscribe; // @synthesize feedSubscribeUnsubscribe=_feedSubscribeUnsubscribe;
@property(retain, nonatomic) NTPBFeedCellHostViewExposure *feedCellHostViewExposure; // @synthesize feedCellHostViewExposure=_feedCellHostViewExposure;
@property(retain, nonatomic) NTPBFeedViewExposure *feedViewExposure; // @synthesize feedViewExposure=_feedViewExposure;
@property(retain, nonatomic) NTPBFeedCellExposure *feedCellExposure; // @synthesize feedCellExposure=_feedCellExposure;
@property(retain, nonatomic) NTPBArticleLikeDislike *articleLikeDislike; // @synthesize articleLikeDislike=_articleLikeDislike;
@property(retain, nonatomic) NTPBArticleHostViewExposure *articleHostViewExposure; // @synthesize articleHostViewExposure=_articleHostViewExposure;
@property(retain, nonatomic) NTPBArticleScroll *articleScroll; // @synthesize articleScroll=_articleScroll;
@property(retain, nonatomic) NTPBAppSessionEnd *appSessionEnd; // @synthesize appSessionEnd=_appSessionEnd;
@property(retain, nonatomic) NTPBAppSessionStart *appSessionStart; // @synthesize appSessionStart=_appSessionStart;
@property(retain, nonatomic) NTPBUserOnboardingResult *userOnboardingResult; // @synthesize userOnboardingResult=_userOnboardingResult;
@property(retain, nonatomic) NTPBUserOnboardingResume *userOnboardingResume; // @synthesize userOnboardingResume=_userOnboardingResume;
@property(retain, nonatomic) NTPBUserOnboardingBegin *userOnboardingBegin; // @synthesize userOnboardingBegin=_userOnboardingBegin;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUserIgnoreFavoritesSuggestion;
@property(readonly, nonatomic) _Bool hasSuggestionsFeedback;
@property(readonly, nonatomic) _Bool hasOptInButtonExposure;
@property(readonly, nonatomic) _Bool hasAdExposureIneligible;
@property(readonly, nonatomic) _Bool hasTodayWidgetExposure;
@property(readonly, nonatomic) _Bool hasTodayWidgetHeadlineExposure;
@property(readonly, nonatomic) _Bool hasWidgetEngagement;
@property(readonly, nonatomic) _Bool hasTodayWidgetSession;
@property(readonly, nonatomic) _Bool hasAnfComponentExposure;
@property(readonly, nonatomic) _Bool hasAppSessionEndWatch;
@property(readonly, nonatomic) _Bool hasArticleViewWatch;
@property(readonly, nonatomic) _Bool hasAppSessionStartWatch;
@property(readonly, nonatomic) _Bool hasExternalAnalyticsEventSend;
@property(readonly, nonatomic) _Bool hasBundleIdMappingMiss;
@property(readonly, nonatomic) _Bool hasUrlMappingMiss;
@property(readonly, nonatomic) _Bool hasArticleScrollNotw;
@property(readonly, nonatomic) _Bool hasArticleViewNotw;
@property(readonly, nonatomic) _Bool hasDiscoverMoreInterstitialExposure;
@property(readonly, nonatomic) _Bool hasComscoreEventSend;
@property(readonly, nonatomic) _Bool hasPaidSubscriptionSheetIapFail;
@property(readonly, nonatomic) _Bool hasRestorePaidSubscription;
@property(readonly, nonatomic) _Bool hasCoverArticleWidgetExposure;
@property(readonly, nonatomic) _Bool hasEmailOptInInvite;
@property(readonly, nonatomic) _Bool hasNotificationSettingsScreenView;
@property(readonly, nonatomic) _Bool hasNotificationSubscribeUnsubscribe;
@property(readonly, nonatomic) _Bool hasCoverArticleWidgetView;
@property(readonly, nonatomic) _Bool hasSubscriptionDetectionScreenView;
@property(readonly, nonatomic) _Bool hasBackgroundSubscriptionValidation;
@property(readonly, nonatomic) _Bool hasAlreadySubscriberSignIn;
@property(readonly, nonatomic) _Bool hasWebAccessScreenView;
@property(readonly, nonatomic) _Bool hasShareInformationScreenView;
@property(readonly, nonatomic) _Bool hasPaidSubscriptionResult;
@property(readonly, nonatomic) _Bool hasShareSheetIapFail;
@property(readonly, nonatomic) _Bool hasPaidSubscriptionSheetView;
@property(readonly, nonatomic) _Bool hasPaidSubscriptionConversionPointExposure;
@property(readonly, nonatomic) _Bool hasGroupViewExposure;
@property(readonly, nonatomic) _Bool hasSearchViewExposure;
@property(readonly, nonatomic) _Bool hasFeedEngagementMenuExposure;
@property(readonly, nonatomic) _Bool hasShareSheetExposure;
@property(readonly, nonatomic) _Bool hasChannelMuteUnmute;
@property(readonly, nonatomic) _Bool hasAdExposureOpportunity;
@property(readonly, nonatomic) _Bool hasUserOnboardingChannelPickerComplete;
@property(readonly, nonatomic) _Bool hasUserOnboardingScreenView;
@property(readonly, nonatomic) _Bool hasLocalNotificationReceived;
@property(readonly, nonatomic) _Bool hasLinkTapArticle;
@property(readonly, nonatomic) _Bool hasPullToRefresh;
@property(readonly, nonatomic) _Bool hasLocalNotificationReturn;
@property(readonly, nonatomic) _Bool hasReportConcernSubmission;
@property(readonly, nonatomic) _Bool hasEndOfArticleExposure;
@property(readonly, nonatomic) _Bool hasRecommendationBrickExposure;
@property(readonly, nonatomic) _Bool hasReadingListShow;
@property(readonly, nonatomic) _Bool hasReadingListAddRemove;
@property(readonly, nonatomic) _Bool hasNoUserAction;
@property(readonly, nonatomic) _Bool hasShareResult;
@property(readonly, nonatomic) _Bool hasSearchResultSelect;
@property(readonly, nonatomic) _Bool hasSearchExecute;
@property(readonly, nonatomic) _Bool hasSearchBegin;
@property(readonly, nonatomic) _Bool hasMediaEngageComplete;
@property(readonly, nonatomic) _Bool hasMediaEngage;
@property(readonly, nonatomic) _Bool hasMediaView;
@property(readonly, nonatomic) _Bool hasMediaExposure;
@property(readonly, nonatomic) _Bool hasFeedSubscribeUnsubscribe;
@property(readonly, nonatomic) _Bool hasFeedCellHostViewExposure;
@property(readonly, nonatomic) _Bool hasFeedViewExposure;
@property(readonly, nonatomic) _Bool hasFeedCellExposure;
@property(readonly, nonatomic) _Bool hasArticleLikeDislike;
@property(readonly, nonatomic) _Bool hasArticleHostViewExposure;
@property(readonly, nonatomic) _Bool hasArticleScroll;
@property(readonly, nonatomic) _Bool hasAppSessionEnd;
@property(readonly, nonatomic) _Bool hasAppSessionStart;
@property(readonly, nonatomic) _Bool hasUserOnboardingResult;
@property(readonly, nonatomic) _Bool hasUserOnboardingResume;
@property(readonly, nonatomic) _Bool hasUserOnboardingBegin;

@end

