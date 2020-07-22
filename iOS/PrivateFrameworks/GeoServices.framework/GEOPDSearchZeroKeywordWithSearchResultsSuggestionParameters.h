//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxCategories;
    unsigned int _maxResultsPerCategory;
    struct {
        unsigned int blurredHourOfDay:1;
        unsigned int dayOfWeek:1;
        unsigned int maxCategories:1;
        unsigned int maxResultsPerCategory:1;
    } _has;
}

@property(nonatomic) unsigned int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property(nonatomic) unsigned int blurredHourOfDay; // @synthesize blurredHourOfDay=_blurredHourOfDay;
@property(nonatomic) unsigned int maxResultsPerCategory; // @synthesize maxResultsPerCategory=_maxResultsPerCategory;
@property(nonatomic) unsigned int maxCategories; // @synthesize maxCategories=_maxCategories;
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
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) _Bool hasBlurredHourOfDay;
@property(nonatomic) _Bool hasMaxResultsPerCategory;
@property(nonatomic) _Bool hasMaxCategories;

@end
