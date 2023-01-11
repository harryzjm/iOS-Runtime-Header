//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBArticleIDsTodaySectionSpecificConfig, NTPBArticleListTodaySectionSpecificConfig, NTPBDiscoverMoreVideosInfo, NTPBForYouTodaySectionSpecificConfig, NTPBItemsTodaySectionSpecificConfig, NTPBPersonalizedSectionPresenceConfig, NTPBPersonalizedTodaySectionSpecificConfig;

@interface NTPBTodaySectionConfig : PBCodable <NSCopying>
{
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _queueMemberships;
    unsigned long long _cachedResultCutoffTime;
    unsigned long long _fallbackOrder;
    unsigned long long _interSectionFilteringOptions;
    unsigned long long _intraSectionFilteringOptions;
    unsigned long long _maximumStoriesAllocation;
    unsigned long long _minimumStoriesAllocation;
    unsigned long long _personalizedPresenceFeatureClickPrior;
    unsigned long long _personalizedPresenceFeatureImpressionPrior;
    unsigned long long _seenArticlesMinimumTimeSinceFirstSeenToFilter;
    NTPBArticleIDsTodaySectionSpecificConfig *_articleIDsTodaySectionConfig;
    NTPBArticleListTodaySectionSpecificConfig *_articleListTodaySectionConfig;
    NSString *_backgroundGradientColor;
    NSString *_compactName;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NTPBForYouTodaySectionSpecificConfig *_forYouTodaySectionConfig;
    NSString *_groupActionTitle;
    NSString *_groupActionUrl;
    NSString *_identifier;
    NTPBItemsTodaySectionSpecificConfig *_itemsTodaySectionConfig;
    int _leadingCellPromotionPolicy;
    NSString *_name;
    NSString *_nameColor;
    NSString *_personalizationFeatureID;
    NTPBPersonalizedSectionPresenceConfig *_personalizedPresenceConfig;
    NSString *_personalizedPresenceFeatureID;
    NTPBPersonalizedTodaySectionSpecificConfig *_personalizedTodaySectionConfig;
    int _readArticlesFilterMethod;
    NSString *_referralBarName;
    int _sectionType;
    int _seenArticlesFilterMethod;
    _Bool _displaysAsVideoPlaylist;
    _Bool _glanceable;
    _Bool _openVideoPlaylistInApp;
    _Bool _presenceDeterminedByPersonalization;
    _Bool _shownInFavoritesOnlyMode;
    _Bool _useNameColorInWidget;
    _Bool _videoPlaysMutedByDefault;
    struct {
        unsigned int cachedResultCutoffTime:1;
        unsigned int fallbackOrder:1;
        unsigned int interSectionFilteringOptions:1;
        unsigned int intraSectionFilteringOptions:1;
        unsigned int maximumStoriesAllocation:1;
        unsigned int minimumStoriesAllocation:1;
        unsigned int personalizedPresenceFeatureClickPrior:1;
        unsigned int personalizedPresenceFeatureImpressionPrior:1;
        unsigned int seenArticlesMinimumTimeSinceFirstSeenToFilter:1;
        unsigned int leadingCellPromotionPolicy:1;
        unsigned int readArticlesFilterMethod:1;
        unsigned int sectionType:1;
        unsigned int seenArticlesFilterMethod:1;
        unsigned int displaysAsVideoPlaylist:1;
        unsigned int glanceable:1;
        unsigned int openVideoPlaylistInApp:1;
        unsigned int presenceDeterminedByPersonalization:1;
        unsigned int shownInFavoritesOnlyMode:1;
        unsigned int useNameColorInWidget:1;
        unsigned int videoPlaysMutedByDefault:1;
    } _has;
}

@property(retain, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo; // @synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo;
@property(nonatomic) _Bool openVideoPlaylistInApp; // @synthesize openVideoPlaylistInApp=_openVideoPlaylistInApp;
@property(nonatomic) _Bool useNameColorInWidget; // @synthesize useNameColorInWidget=_useNameColorInWidget;
@property(retain, nonatomic) NTPBItemsTodaySectionSpecificConfig *itemsTodaySectionConfig; // @synthesize itemsTodaySectionConfig=_itemsTodaySectionConfig;
@property(retain, nonatomic) NSString *groupActionUrl; // @synthesize groupActionUrl=_groupActionUrl;
@property(retain, nonatomic) NSString *groupActionTitle; // @synthesize groupActionTitle=_groupActionTitle;
@property(retain, nonatomic) NSString *referralBarName; // @synthesize referralBarName=_referralBarName;
@property(nonatomic) unsigned long long personalizedPresenceFeatureClickPrior; // @synthesize personalizedPresenceFeatureClickPrior=_personalizedPresenceFeatureClickPrior;
@property(nonatomic) unsigned long long personalizedPresenceFeatureImpressionPrior; // @synthesize personalizedPresenceFeatureImpressionPrior=_personalizedPresenceFeatureImpressionPrior;
@property(retain, nonatomic) NSString *personalizedPresenceFeatureID; // @synthesize personalizedPresenceFeatureID=_personalizedPresenceFeatureID;
@property(retain, nonatomic) NSString *compactName; // @synthesize compactName=_compactName;
@property(nonatomic) _Bool videoPlaysMutedByDefault; // @synthesize videoPlaysMutedByDefault=_videoPlaysMutedByDefault;
@property(nonatomic) _Bool glanceable; // @synthesize glanceable=_glanceable;
@property(retain, nonatomic) NSString *backgroundGradientColor; // @synthesize backgroundGradientColor=_backgroundGradientColor;
@property(retain, nonatomic) NTPBPersonalizedSectionPresenceConfig *personalizedPresenceConfig; // @synthesize personalizedPresenceConfig=_personalizedPresenceConfig;
@property(nonatomic) _Bool presenceDeterminedByPersonalization; // @synthesize presenceDeterminedByPersonalization=_presenceDeterminedByPersonalization;
@property(nonatomic) _Bool displaysAsVideoPlaylist; // @synthesize displaysAsVideoPlaylist=_displaysAsVideoPlaylist;
@property(retain, nonatomic) NSString *personalizationFeatureID; // @synthesize personalizationFeatureID=_personalizationFeatureID;
@property(nonatomic) unsigned long long seenArticlesMinimumTimeSinceFirstSeenToFilter; // @synthesize seenArticlesMinimumTimeSinceFirstSeenToFilter=_seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property(retain, nonatomic) NTPBPersonalizedTodaySectionSpecificConfig *personalizedTodaySectionConfig; // @synthesize personalizedTodaySectionConfig=_personalizedTodaySectionConfig;
@property(retain, nonatomic) NSString *nameColor; // @synthesize nameColor=_nameColor;
@property(nonatomic) _Bool shownInFavoritesOnlyMode; // @synthesize shownInFavoritesOnlyMode=_shownInFavoritesOnlyMode;
@property(retain, nonatomic) NTPBArticleIDsTodaySectionSpecificConfig *articleIDsTodaySectionConfig; // @synthesize articleIDsTodaySectionConfig=_articleIDsTodaySectionConfig;
@property(nonatomic) unsigned long long interSectionFilteringOptions; // @synthesize interSectionFilteringOptions=_interSectionFilteringOptions;
@property(nonatomic) unsigned long long intraSectionFilteringOptions; // @synthesize intraSectionFilteringOptions=_intraSectionFilteringOptions;
@property(nonatomic) unsigned long long maximumStoriesAllocation; // @synthesize maximumStoriesAllocation=_maximumStoriesAllocation;
@property(nonatomic) unsigned long long minimumStoriesAllocation; // @synthesize minimumStoriesAllocation=_minimumStoriesAllocation;
@property(retain, nonatomic) NTPBForYouTodaySectionSpecificConfig *forYouTodaySectionConfig; // @synthesize forYouTodaySectionConfig=_forYouTodaySectionConfig;
@property(retain, nonatomic) NTPBArticleListTodaySectionSpecificConfig *articleListTodaySectionConfig; // @synthesize articleListTodaySectionConfig=_articleListTodaySectionConfig;
@property(nonatomic) unsigned long long fallbackOrder; // @synthesize fallbackOrder=_fallbackOrder;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDiscoverMoreVideosInfo;
@property(nonatomic) _Bool hasOpenVideoPlaylistInApp;
@property(nonatomic) _Bool hasUseNameColorInWidget;
@property(readonly, nonatomic) _Bool hasItemsTodaySectionConfig;
@property(readonly, nonatomic) _Bool hasGroupActionUrl;
@property(readonly, nonatomic) _Bool hasGroupActionTitle;
@property(readonly, nonatomic) _Bool hasReferralBarName;
@property(nonatomic) _Bool hasPersonalizedPresenceFeatureClickPrior;
@property(nonatomic) _Bool hasPersonalizedPresenceFeatureImpressionPrior;
@property(readonly, nonatomic) _Bool hasPersonalizedPresenceFeatureID;
@property(readonly, nonatomic) _Bool hasCompactName;
@property(nonatomic) _Bool hasVideoPlaysMutedByDefault;
@property(nonatomic) _Bool hasLeadingCellPromotionPolicy;
@property(nonatomic) int leadingCellPromotionPolicy; // @synthesize leadingCellPromotionPolicy=_leadingCellPromotionPolicy;
@property(nonatomic) _Bool hasGlanceable;
@property(readonly, nonatomic) _Bool hasBackgroundGradientColor;
- (void)setQueueMemberships:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)queueMembershipAtIndex:(unsigned long long)arg1;
- (void)addQueueMembership:(unsigned long long)arg1;
- (void)clearQueueMemberships;
@property(readonly, nonatomic) unsigned long long *queueMemberships;
@property(readonly, nonatomic) unsigned long long queueMembershipsCount;
@property(readonly, nonatomic) _Bool hasPersonalizedPresenceConfig;
@property(nonatomic) _Bool hasPresenceDeterminedByPersonalization;
@property(nonatomic) _Bool hasDisplaysAsVideoPlaylist;
@property(readonly, nonatomic) _Bool hasPersonalizationFeatureID;
@property(nonatomic) _Bool hasSeenArticlesMinimumTimeSinceFirstSeenToFilter;
@property(readonly, nonatomic) _Bool hasPersonalizedTodaySectionConfig;
@property(readonly, nonatomic) _Bool hasNameColor;
@property(nonatomic) _Bool hasShownInFavoritesOnlyMode;
@property(readonly, nonatomic) _Bool hasArticleIDsTodaySectionConfig;
@property(nonatomic) _Bool hasSeenArticlesFilterMethod;
@property(nonatomic) int seenArticlesFilterMethod; // @synthesize seenArticlesFilterMethod=_seenArticlesFilterMethod;
@property(nonatomic) _Bool hasInterSectionFilteringOptions;
@property(nonatomic) _Bool hasIntraSectionFilteringOptions;
@property(nonatomic) _Bool hasMaximumStoriesAllocation;
@property(nonatomic) _Bool hasMinimumStoriesAllocation;
@property(readonly, nonatomic) _Bool hasForYouTodaySectionConfig;
@property(readonly, nonatomic) _Bool hasArticleListTodaySectionConfig;
@property(nonatomic) _Bool hasReadArticlesFilterMethod;
@property(nonatomic) int readArticlesFilterMethod; // @synthesize readArticlesFilterMethod=_readArticlesFilterMethod;
@property(nonatomic) _Bool hasCachedResultCutoffTime;
@property(nonatomic) unsigned long long cachedResultCutoffTime; // @synthesize cachedResultCutoffTime=_cachedResultCutoffTime;
@property(nonatomic) _Bool hasSectionType;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property(nonatomic) _Bool hasFallbackOrder;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasName;
- (void)dealloc;

@end

