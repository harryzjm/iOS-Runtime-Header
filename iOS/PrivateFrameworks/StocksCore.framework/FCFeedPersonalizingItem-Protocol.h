//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksCore/NSObject-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, FCFeedPersonalizedItemScoreProfile, NSArray, NSDate, NSString;

@protocol FCFeedPersonalizingItem <NSObject>
@property(nonatomic, retain) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property(nonatomic, readonly) NSArray *topics;
- (void)enumerateTopicConversionStatsWithBlock:(void (^)(NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *))arg1;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
- (void)enumerateTopicCohortsWithBlock:(void (^)(NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *))arg1;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
- (_Bool)isHiddenFromAutoFavorites;
@property(nonatomic, readonly) _Bool hasThumbnail;
@property(nonatomic, readonly) _Bool hasVideo;
- (_Bool)isPaid;
- (_Bool)isANF;
@property(nonatomic, readonly) _Bool hasGlobalUserFeedback;
@property(nonatomic, readonly) double globalUserFeedback;
@property(nonatomic, readonly) NSArray *topicIDs;
@property(nonatomic, readonly) NSString *publisherID;
@property(nonatomic, readonly) unsigned long long halfLife;
@property(nonatomic, readonly) NSDate *publishDate;
@property(nonatomic, readonly) NSString *itemID;
@property(nonatomic, readonly) NSString *sourceFeedID;

@optional
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration *expirationData;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt;
@property(nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector;
@property(nonatomic, readonly) unsigned long long halfLifeOverride;
@property(nonatomic, readonly) NSArray *iAdCategories;
@property(nonatomic, readonly) _Bool webConverted;
@property(nonatomic, readonly) _Bool reduceVisibility;
@property(nonatomic, readonly) _Bool isEvergreen;
@property(nonatomic, readonly) _Bool hasAudioTrack;
@property(nonatomic, readonly) _Bool isFeatureCandidate;
@property(nonatomic, readonly) _Bool isFeatured;
@property(nonatomic, readonly) long long bodyTextLength;
- (_Bool)isBundlePaid;

// Remaining properties
@property(nonatomic, readonly) _Bool anf;
@property(nonatomic, readonly) _Bool bundlePaid;
@property(nonatomic, readonly) _Bool hiddenFromAutoFavorites;
@property(nonatomic, readonly) _Bool paid;
@end

