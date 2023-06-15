//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsSubscription/NSObject-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, FCFeedPersonalizedItemScoreProfile, NSArray, NSData, NSDate, NSString;

@protocol FCFeedPersonalizingItem <NSObject>
@property(retain) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property(readonly, copy, nonatomic) NSArray *topics;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) _Bool hiddenFromAutoFavorites;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) _Bool hasVideo;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, nonatomic, getter=isANF) _Bool anf;
@property(readonly, nonatomic) _Bool hasGlobalUserFeedback;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, nonatomic) unsigned long long halfLife;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *itemID;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
- (void)enumerateTopicConversionStatsWithBlock:(void (^)(NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *))arg1;
- (void)enumerateTopicCohortsWithBlock:(void (^)(NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *))arg1;

@optional
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration *expirationData;
@property(readonly, nonatomic) NSData *thumbnailPerceptualHash;
@property(readonly, copy, nonatomic) NSString *language;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, nonatomic) NSData *float16FullBodyEncoding;
@property(readonly, nonatomic) NSData *float16TitleEncoding;
@property(readonly, nonatomic) unsigned long long halfLifeOverride;
@property(readonly, copy, nonatomic) NSArray *iAdCategories;
@property(readonly, nonatomic) _Bool webConverted;
@property(readonly, nonatomic) _Bool reduceVisibility;
@property(readonly, nonatomic) _Bool isEvergreen;
@property(readonly, nonatomic) _Bool hasAudioTrack;
@property(readonly, nonatomic) _Bool isFeatureCandidate;
@property(readonly, nonatomic) _Bool isFeatured;
@property(readonly, nonatomic) long long bodyTextLength;
@property(readonly, nonatomic, getter=isBundlePaid) _Bool bundlePaid;
@end

