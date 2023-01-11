//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PPPBFeedbackMetadata;

@interface PPPBFeedbackLog : PBCodable <NSCopying>
{
    NSString *_assetVersion;
    NSMutableArray *_experimentalGroups;
    NSMutableArray *_extractedDonations;
    PPPBFeedbackMetadata *_feedbackMetadata;
    NSString *_homeLocationGeohash;
    int _predictionType;
    NSMutableArray *_scoredItems;
    struct {
        unsigned int predictionType:1;
    } _has;
}

+ (Class)experimentalGroupsType;
+ (Class)extractedDonationsType;
+ (Class)scoredItemsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
@property(retain, nonatomic) NSString *homeLocationGeohash; // @synthesize homeLocationGeohash=_homeLocationGeohash;
@property(retain, nonatomic) NSMutableArray *experimentalGroups; // @synthesize experimentalGroups=_experimentalGroups;
@property(retain, nonatomic) NSMutableArray *extractedDonations; // @synthesize extractedDonations=_extractedDonations;
@property(retain, nonatomic) NSMutableArray *scoredItems; // @synthesize scoredItems=_scoredItems;
@property(retain, nonatomic) PPPBFeedbackMetadata *feedbackMetadata; // @synthesize feedbackMetadata=_feedbackMetadata;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAssetVersion;
@property(readonly, nonatomic) _Bool hasHomeLocationGeohash;
- (id)experimentalGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)experimentalGroupsCount;
- (void)addExperimentalGroups:(id)arg1;
- (void)clearExperimentalGroups;
- (id)extractedDonationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)extractedDonationsCount;
- (void)addExtractedDonations:(id)arg1;
- (void)clearExtractedDonations;
- (id)scoredItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)scoredItemsCount;
- (void)addScoredItems:(id)arg1;
- (void)clearScoredItems;
@property(nonatomic) _Bool hasPredictionType;
@property(nonatomic) int predictionType; // @synthesize predictionType=_predictionType;
@property(readonly, nonatomic) _Bool hasFeedbackMetadata;

@end
