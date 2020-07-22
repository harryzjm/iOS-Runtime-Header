//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDRating : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _maxScore;
    double _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct {
        unsigned int maxScore:1;
        unsigned int score:1;
        unsigned int numRatingsUsedForScore:1;
        unsigned int ratingType:1;
    } _has;
}

+ (id)ratingForPlaceData:(id)arg1 type:(int)arg2;
@property(nonatomic) int numRatingsUsedForScore; // @synthesize numRatingsUsedForScore=_numRatingsUsedForScore;
@property(nonatomic) double score; // @synthesize score=_score;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNumRatingsUsedForScore;
@property(nonatomic) _Bool hasMaxScore;
@property(nonatomic) double maxScore; // @synthesize maxScore=_maxScore;
@property(nonatomic) _Bool hasScore;
- (int)StringAsRatingType:(id)arg1;
- (id)ratingTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRatingType;
@property(nonatomic) int ratingType; // @synthesize ratingType=_ratingType;

@end

