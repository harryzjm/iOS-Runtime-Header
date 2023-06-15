//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksCore/FCClassifiable-Protocol.h>
#import <StocksCore/FCFeedTransformationItem-Protocol.h>
#import <StocksCore/NFCopying-Protocol.h>
#import <StocksCore/NSObject-Protocol.h>

@class FCArticleAudioTrack, FCArticleContent, FCAssetHandle, FCColor, FCCoverArt, FCHeadlineExperimentalTitleMetadata, FCHeadlineThumbnail, FCIssue, FCTopStoriesStyleConfiguration, NSArray, NSData, NSDate, NSString, NSURL;
@protocol FCChannelProviding, FCContentContext, FCHeadlineMetadata, FCHeadlineStocksFields, FCNativeAdProviding;

@protocol FCHeadlineProviding <NSObject, NFCopying, FCClassifiable, FCFeedTransformationItem>
@property(readonly, nonatomic) NSURL *routeURL;
@property(readonly, nonatomic) _Bool isFullTrackAvailableToAll;
@property(readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs;
@property(readonly, copy, nonatomic) NSString *nativeAdCampaignData;
@property(readonly, nonatomic) id <FCNativeAdProviding> associatedAd;
@property(readonly, nonatomic) _Bool showPublisherLogo;
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
@property(readonly, nonatomic) _Bool showSubscriptionRequiredText;
@property(readonly, copy, nonatomic) NSDate *displayDate;
@property(readonly, nonatomic) FCTopStoriesStyleConfiguration *storyStyle;
@property(readonly, nonatomic) unsigned long long storyType;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, nonatomic) unsigned long long feedOrder;
@property(readonly, nonatomic) _Bool usesImageOnTopLayout;
@property(readonly, nonatomic) unsigned long long topStoryType;
@property(readonly, nonatomic) _Bool isTopStory;
@property(readonly, nonatomic) double tileProminenceScore;
@property(readonly, copy, nonatomic) NSString *surfacedByBinID;
@property(readonly, copy, nonatomic) NSString *surfacedByTopicID;
@property(readonly, copy, nonatomic) NSString *surfacedByChannelID;
@property(readonly, copy, nonatomic) NSString *surfacedBySectionID;
@property(readonly, nonatomic, getter=isHiddenFromFeeds) _Bool hiddenFromFeeds;
@property(readonly, nonatomic, getter=isBoundToContext) _Bool boundToContext;
@property(readonly, nonatomic) _Bool disablePrerollAds;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) _Bool hiddenFromAutoFavorites;
@property(readonly, nonatomic, getter=isPressRelease) _Bool pressRelease;
@property(readonly, nonatomic) _Bool disableTapToChannel;
@property(readonly, nonatomic) _Bool needsRapidUpdates;
@property(readonly, copy, nonatomic) NSString *language;
@property(readonly, copy, nonatomic) NSArray *sportsEventIDs;
@property(readonly, copy, nonatomic) NSString *videoType;
@property(readonly, copy, nonatomic) NSURL *videoCallToActionURL;
@property(readonly, copy, nonatomic) NSString *videoCallToActionTitle;
@property(readonly, nonatomic) FCCoverArt *coverArt;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs;
@property(readonly, copy, nonatomic) NSString *localDraftPath;
@property(readonly, nonatomic) _Bool isDraft;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories;
@property(readonly, copy, nonatomic) NSString *sponsoredBy;
@property(readonly, nonatomic, getter=isDisplayingAsNativeAd) _Bool displayAsNativeAd;
@property(readonly, nonatomic, getter=isFeatureCandidate) _Bool featureCandidate;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic) FCAssetHandle *videoStillImage;
@property(readonly, nonatomic) NSURL *videoURL;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSArray *topics;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSURL *contentURL;
@property(readonly, copy, nonatomic) NSString *accessoryText;
@property(readonly, copy, nonatomic) NSString *shortExcerpt;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailMedium;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnail;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailLQ;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) struct CGRect thumbnailFocalFrame;
@property(readonly, copy, nonatomic) NSString *excerpt;
@property(readonly, copy, nonatomic) NSArray *narrators;
@property(readonly, copy, nonatomic) NSArray *authors;
@property(readonly, copy, nonatomic) NSString *sourceName;
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@property(readonly, nonatomic) long long backendArticleVersion;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *titleCompact;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *primaryAudience;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, copy, nonatomic) NSString *referencedArticleID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *identifier;

@optional
@property(readonly, copy, nonatomic) id <FCHeadlineMetadata> appliedOverrideMetadata;
@property(readonly, nonatomic) NSData *thumbnailPerceptualHash;
@property(readonly, nonatomic) FCColor *thumbnailImageAccentColor;
@property(readonly, nonatomic) FCColor *thumbnailImageTextColor;
@property(readonly, nonatomic) FCColor *thumbnailImageBackgroundColor;
@property(readonly, nonatomic) FCColor *thumbnailImagePrimaryColor;
@property(readonly, nonatomic) double layeredThumbnailAspectRatio;
@property(readonly, nonatomic) NSString *layeredThumbnailJSON;
@property(readonly, nonatomic) FCAssetHandle *articleRecirculationConfigAssetHandle;
@property(readonly, copy, nonatomic) NSString *surfacedByArticleListID;
@property(readonly, nonatomic) NSString *narrativeTrackPreferredUpsellVariantID;
@property(readonly, copy, nonatomic) NSArray *narrativeTrackBuddyArticleIDs;
@property(readonly, nonatomic) NSString *narrativeTrackTextRanges;
@property(readonly, nonatomic) FCArticleAudioTrack *narrativeTrackSample;
@property(readonly, nonatomic) FCArticleAudioTrack *narrativeTrack;
@property(readonly, nonatomic) _Bool isLocalDraft;
@property(readonly, copy, nonatomic) NSString *callToActionText;
@property(readonly, copy, nonatomic) NSArray *linkedIssueIDs;
@property(readonly, copy, nonatomic) NSArray *linkedArticleIDs;
@property(readonly, nonatomic, getter=isIssueOnly) _Bool issueOnly;
@property(readonly, copy, nonatomic) FCIssue *parentIssue;
@property(readonly, nonatomic) _Bool webConverted;
@property(readonly, nonatomic) _Bool reduceVisibility;
@property(readonly, nonatomic) _Bool hideModalCloseButton;
@property(readonly, nonatomic) _Bool disableBookmarking;
@property(readonly, nonatomic) _Bool showBundleSoftPaywall;
@property(readonly, nonatomic) _Bool useTransparentNavigationBar;
@property(readonly, nonatomic) _Bool webEmbedsEnabled;
@property(readonly, nonatomic) NSArray *tagsExpiration;
@property(readonly, nonatomic) NSDate *globalExpirationTime;
@property(readonly, copy, nonatomic) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata;
@property(readonly, nonatomic) NSData *backingArticleRecordData;
@property(readonly, nonatomic) id <FCHeadlineStocksFields> stocksFields;
@property(readonly, nonatomic, getter=isBundlePaid) _Bool bundlePaid;
@property(readonly, nonatomic) unsigned long long role;
- (FCArticleContent *)contentWithContext:(id <FCContentContext>)arg1;
@end

