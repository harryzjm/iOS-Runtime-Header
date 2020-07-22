//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBFeedConfiguration, NTPBPublisherPaidDescriptionStrings, NTPBRecordBase;

@interface NTPBTagRecord : PBCodable <NSCopying>
{
    long long _allowedAdTypes;
    long long _contentProvider;
    unsigned long long _forYouCutoffTime;
    unsigned long long _forYouMaximumArticleCount;
    long long _minimumNewsVersion;
    long long _score;
    unsigned long long _tagNameImageBaselineShift;
    double _tagNameImageScaleFactor;
    NSMutableArray *_allowedStorefrontIDs;
    NTPBRecordBase *_base;
    NSMutableArray *_blockedStorefrontIDs;
    NSString *_channelDefaultSectionID;
    NSMutableArray *_channelSectionFeedConfigurations;
    NSMutableArray *_channelSectionIDs;
    NSString *_coverArticleListID;
    NSString *_coverImageURL;
    NTPBFeedConfiguration *_feedConfiguration;
    int _groupingAvailability;
    NSMutableArray *_iAdCategories;
    NSMutableArray *_iAdKeywords;
    NSString *_logoURL;
    NSString *_name;
    NSString *_nameCompact;
    NSData *_nameImageCompactMetadata;
    NSString *_nameImageCompactURL;
    NSString *_nameImageForDarkBackgroundURL;
    NSString *_nameImageMaskURL;
    NSString *_nameImageMaskWidgetHQURL;
    NSString *_nameImageMaskWidgetLQURL;
    NSData *_nameImageMetadata;
    NSString *_nameImageURL;
    NSString *_parentID;
    NSMutableArray *_pinnedArticleIDs;
    NSString *_primaryAudience;
    NSString *_publisherPaidAuthorizationURL;
    NTPBPublisherPaidDescriptionStrings *_publisherPaidDescriptionStrings;
    NSMutableArray *_publisherPaidFeldsparablePurchaseIDs;
    NSString *_publisherPaidVerificationURL;
    NSString *_publisherPaidWebaccessURL;
    NSMutableArray *_purchaseOfferableConfigurations;
    NSMutableArray *_relatedChannelIDs;
    NSMutableArray *_relatedChannelIDsForOnboardings;
    NSMutableArray *_relatedTopicIDs;
    NSMutableArray *_relatedTopicIDsForOnboardings;
    NSString *_replacementID;
    NSString *_templateJson;
    int _type;
    _Bool _hideAccessoryText;
    _Bool _isDeprecated;
    _Bool _isExplicitContent;
    _Bool _isHidden;
    _Bool _isNotificationEnabled;
    _Bool _isPublic;
    _Bool _publisherPaidLeakyPaywallOptOut;
    _Bool _publisherPaidWebOptIn;
    struct {
        unsigned int allowedAdTypes:1;
        unsigned int contentProvider:1;
        unsigned int forYouCutoffTime:1;
        unsigned int forYouMaximumArticleCount:1;
        unsigned int minimumNewsVersion:1;
        unsigned int score:1;
        unsigned int tagNameImageBaselineShift:1;
        unsigned int tagNameImageScaleFactor:1;
        unsigned int groupingAvailability:1;
        unsigned int type:1;
        unsigned int hideAccessoryText:1;
        unsigned int isDeprecated:1;
        unsigned int isExplicitContent:1;
        unsigned int isHidden:1;
        unsigned int isNotificationEnabled:1;
        unsigned int isPublic:1;
        unsigned int publisherPaidLeakyPaywallOptOut:1;
        unsigned int publisherPaidWebOptIn:1;
    } _has;
}

+ (Class)iAdKeywordsType;
+ (Class)purchaseOfferableConfigurationType;
+ (Class)publisherPaidFeldsparablePurchaseIDsType;
+ (Class)channelSectionFeedConfigurationsType;
+ (Class)channelSectionIDsType;
+ (Class)pinnedArticleIDsType;
+ (Class)allowedStorefrontIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)iAdCategoriesType;
+ (Class)relatedChannelIDsForOnboardingType;
+ (Class)relatedTopicIDsForOnboardingType;
+ (Class)relatedChannelIDsType;
+ (Class)relatedTopicIDsType;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(retain, nonatomic) NSData *nameImageCompactMetadata; // @synthesize nameImageCompactMetadata=_nameImageCompactMetadata;
@property(retain, nonatomic) NSString *nameImageCompactURL; // @synthesize nameImageCompactURL=_nameImageCompactURL;
@property(retain, nonatomic) NSString *nameCompact; // @synthesize nameCompact=_nameCompact;
@property(retain, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings; // @synthesize publisherPaidDescriptionStrings=_publisherPaidDescriptionStrings;
@property(nonatomic) _Bool hideAccessoryText; // @synthesize hideAccessoryText=_hideAccessoryText;
@property(retain, nonatomic) NSString *nameImageMaskWidgetHQURL; // @synthesize nameImageMaskWidgetHQURL=_nameImageMaskWidgetHQURL;
@property(retain, nonatomic) NSString *nameImageMaskWidgetLQURL; // @synthesize nameImageMaskWidgetLQURL=_nameImageMaskWidgetLQURL;
@property(retain, nonatomic) NSMutableArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property(nonatomic) double tagNameImageScaleFactor; // @synthesize tagNameImageScaleFactor=_tagNameImageScaleFactor;
@property(nonatomic) unsigned long long tagNameImageBaselineShift; // @synthesize tagNameImageBaselineShift=_tagNameImageBaselineShift;
@property(nonatomic) unsigned long long forYouCutoffTime; // @synthesize forYouCutoffTime=_forYouCutoffTime;
@property(nonatomic) unsigned long long forYouMaximumArticleCount; // @synthesize forYouMaximumArticleCount=_forYouMaximumArticleCount;
@property(nonatomic) _Bool publisherPaidWebOptIn; // @synthesize publisherPaidWebOptIn=_publisherPaidWebOptIn;
@property(nonatomic) _Bool publisherPaidLeakyPaywallOptOut; // @synthesize publisherPaidLeakyPaywallOptOut=_publisherPaidLeakyPaywallOptOut;
@property(retain, nonatomic) NSMutableArray *purchaseOfferableConfigurations; // @synthesize purchaseOfferableConfigurations=_purchaseOfferableConfigurations;
@property(retain, nonatomic) NSMutableArray *publisherPaidFeldsparablePurchaseIDs; // @synthesize publisherPaidFeldsparablePurchaseIDs=_publisherPaidFeldsparablePurchaseIDs;
@property(retain, nonatomic) NSString *publisherPaidWebaccessURL; // @synthesize publisherPaidWebaccessURL=_publisherPaidWebaccessURL;
@property(retain, nonatomic) NSString *publisherPaidVerificationURL; // @synthesize publisherPaidVerificationURL=_publisherPaidVerificationURL;
@property(retain, nonatomic) NSString *publisherPaidAuthorizationURL; // @synthesize publisherPaidAuthorizationURL=_publisherPaidAuthorizationURL;
@property(nonatomic) _Bool isNotificationEnabled; // @synthesize isNotificationEnabled=_isNotificationEnabled;
@property(nonatomic) _Bool isExplicitContent; // @synthesize isExplicitContent=_isExplicitContent;
@property(nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
@property(retain, nonatomic) NSString *coverArticleListID; // @synthesize coverArticleListID=_coverArticleListID;
@property(retain, nonatomic) NSMutableArray *channelSectionFeedConfigurations; // @synthesize channelSectionFeedConfigurations=_channelSectionFeedConfigurations;
@property(retain, nonatomic) NSString *channelDefaultSectionID; // @synthesize channelDefaultSectionID=_channelDefaultSectionID;
@property(retain, nonatomic) NSMutableArray *channelSectionIDs; // @synthesize channelSectionIDs=_channelSectionIDs;
@property(retain, nonatomic) NSString *templateJson; // @synthesize templateJson=_templateJson;
@property(retain, nonatomic) NSString *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(retain, nonatomic) NSData *nameImageMetadata; // @synthesize nameImageMetadata=_nameImageMetadata;
@property(retain, nonatomic) NSString *nameImageMaskURL; // @synthesize nameImageMaskURL=_nameImageMaskURL;
@property(retain, nonatomic) NSString *nameImageForDarkBackgroundURL; // @synthesize nameImageForDarkBackgroundURL=_nameImageForDarkBackgroundURL;
@property(retain, nonatomic) NSString *nameImageURL; // @synthesize nameImageURL=_nameImageURL;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(retain, nonatomic) NSMutableArray *pinnedArticleIDs; // @synthesize pinnedArticleIDs=_pinnedArticleIDs;
@property(retain, nonatomic) NTPBFeedConfiguration *feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
@property(retain, nonatomic) NSMutableArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(retain, nonatomic) NSMutableArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(retain, nonatomic) NSMutableArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property(nonatomic) long long allowedAdTypes; // @synthesize allowedAdTypes=_allowedAdTypes;
@property(retain, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(retain, nonatomic) NSString *parentID; // @synthesize parentID=_parentID;
@property(retain, nonatomic) NSMutableArray *relatedChannelIDsForOnboardings; // @synthesize relatedChannelIDsForOnboardings=_relatedChannelIDsForOnboardings;
@property(retain, nonatomic) NSMutableArray *relatedTopicIDsForOnboardings; // @synthesize relatedTopicIDsForOnboardings=_relatedTopicIDsForOnboardings;
@property(retain, nonatomic) NSMutableArray *relatedChannelIDs; // @synthesize relatedChannelIDs=_relatedChannelIDs;
@property(retain, nonatomic) NSMutableArray *relatedTopicIDs; // @synthesize relatedTopicIDs=_relatedTopicIDs;
@property(retain, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
@property(retain, nonatomic) NSString *replacementID; // @synthesize replacementID=_replacementID;
@property(nonatomic) _Bool isDeprecated; // @synthesize isDeprecated=_isDeprecated;
@property(nonatomic) _Bool isPublic; // @synthesize isPublic=_isPublic;
@property(nonatomic) long long contentProvider; // @synthesize contentProvider=_contentProvider;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsHidden;
@property(nonatomic) _Bool hasGroupingAvailability;
@property(nonatomic) int groupingAvailability; // @synthesize groupingAvailability=_groupingAvailability;
@property(readonly, nonatomic) _Bool hasNameImageCompactMetadata;
@property(readonly, nonatomic) _Bool hasNameImageCompactURL;
@property(readonly, nonatomic) _Bool hasNameCompact;
@property(readonly, nonatomic) _Bool hasPublisherPaidDescriptionStrings;
@property(nonatomic) _Bool hasHideAccessoryText;
@property(readonly, nonatomic) _Bool hasNameImageMaskWidgetHQURL;
@property(readonly, nonatomic) _Bool hasNameImageMaskWidgetLQURL;
- (id)iAdKeywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdKeywordsCount;
- (void)addIAdKeywords:(id)arg1;
- (void)clearIAdKeywords;
@property(nonatomic) _Bool hasTagNameImageScaleFactor;
@property(nonatomic) _Bool hasTagNameImageBaselineShift;
@property(nonatomic) _Bool hasForYouCutoffTime;
@property(nonatomic) _Bool hasForYouMaximumArticleCount;
@property(nonatomic) _Bool hasPublisherPaidWebOptIn;
@property(nonatomic) _Bool hasPublisherPaidLeakyPaywallOptOut;
- (id)purchaseOfferableConfigurationAtIndex:(unsigned long long)arg1;
- (unsigned long long)purchaseOfferableConfigurationsCount;
- (void)addPurchaseOfferableConfiguration:(id)arg1;
- (void)clearPurchaseOfferableConfigurations;
- (id)publisherPaidFeldsparablePurchaseIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)publisherPaidFeldsparablePurchaseIDsCount;
- (void)addPublisherPaidFeldsparablePurchaseIDs:(id)arg1;
- (void)clearPublisherPaidFeldsparablePurchaseIDs;
@property(readonly, nonatomic) _Bool hasPublisherPaidWebaccessURL;
@property(readonly, nonatomic) _Bool hasPublisherPaidVerificationURL;
@property(readonly, nonatomic) _Bool hasPublisherPaidAuthorizationURL;
@property(nonatomic) _Bool hasIsNotificationEnabled;
@property(nonatomic) _Bool hasIsExplicitContent;
@property(nonatomic) _Bool hasMinimumNewsVersion;
@property(readonly, nonatomic) _Bool hasCoverArticleListID;
- (id)channelSectionFeedConfigurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelSectionFeedConfigurationsCount;
- (void)addChannelSectionFeedConfigurations:(id)arg1;
- (void)clearChannelSectionFeedConfigurations;
@property(readonly, nonatomic) _Bool hasChannelDefaultSectionID;
- (id)channelSectionIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelSectionIDsCount;
- (void)addChannelSectionIDs:(id)arg1;
- (void)clearChannelSectionIDs;
@property(readonly, nonatomic) _Bool hasTemplateJson;
@property(readonly, nonatomic) _Bool hasCoverImageURL;
@property(readonly, nonatomic) _Bool hasNameImageMetadata;
@property(readonly, nonatomic) _Bool hasNameImageMaskURL;
@property(readonly, nonatomic) _Bool hasNameImageForDarkBackgroundURL;
@property(readonly, nonatomic) _Bool hasNameImageURL;
@property(nonatomic) _Bool hasScore;
- (id)pinnedArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pinnedArticleIDsCount;
- (void)addPinnedArticleIDs:(id)arg1;
- (void)clearPinnedArticleIDs;
@property(readonly, nonatomic) _Bool hasFeedConfiguration;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedStorefrontIDsCount;
- (void)addAllowedStorefrontIDs:(id)arg1;
- (void)clearAllowedStorefrontIDs;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)addBlockedStorefrontIDs:(id)arg1;
- (void)clearBlockedStorefrontIDs;
- (id)iAdCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdCategoriesCount;
- (void)addIAdCategories:(id)arg1;
- (void)clearIAdCategories;
@property(nonatomic) _Bool hasAllowedAdTypes;
@property(readonly, nonatomic) _Bool hasLogoURL;
@property(readonly, nonatomic) _Bool hasParentID;
- (id)relatedChannelIDsForOnboardingAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedChannelIDsForOnboardingsCount;
- (void)addRelatedChannelIDsForOnboarding:(id)arg1;
- (void)clearRelatedChannelIDsForOnboardings;
- (id)relatedTopicIDsForOnboardingAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedTopicIDsForOnboardingsCount;
- (void)addRelatedTopicIDsForOnboarding:(id)arg1;
- (void)clearRelatedTopicIDsForOnboardings;
- (id)relatedChannelIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedChannelIDsCount;
- (void)addRelatedChannelIDs:(id)arg1;
- (void)clearRelatedChannelIDs;
- (id)relatedTopicIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedTopicIDsCount;
- (void)addRelatedTopicIDs:(id)arg1;
- (void)clearRelatedTopicIDs;
@property(readonly, nonatomic) _Bool hasPrimaryAudience;
@property(readonly, nonatomic) _Bool hasReplacementID;
@property(nonatomic) _Bool hasIsDeprecated;
@property(nonatomic) _Bool hasIsPublic;
@property(nonatomic) _Bool hasContentProvider;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasBase;
- (void)dealloc;

@end

