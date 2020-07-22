//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying>
{
    NSString *_feedId;
    int _feedType;
    int _recommendationBrickType;
    NSMutableArray *_recommendedFeedIds;
    _Bool _exposedFromReferredUser;
    struct {
        unsigned int feedType:1;
        unsigned int recommendationBrickType:1;
        unsigned int exposedFromReferredUser:1;
    } _has;
}

+ (Class)recommendedFeedIdsType;
@property(nonatomic) _Bool exposedFromReferredUser; // @synthesize exposedFromReferredUser=_exposedFromReferredUser;
@property(retain, nonatomic) NSMutableArray *recommendedFeedIds; // @synthesize recommendedFeedIds=_recommendedFeedIds;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExposedFromReferredUser;
- (int)StringAsRecommendationBrickType:(id)arg1;
- (id)recommendationBrickTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRecommendationBrickType;
@property(nonatomic) int recommendationBrickType; // @synthesize recommendationBrickType=_recommendationBrickType;
- (id)recommendedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedFeedIdsCount;
- (void)addRecommendedFeedIds:(id)arg1;
- (void)clearRecommendedFeedIds;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;

@end

