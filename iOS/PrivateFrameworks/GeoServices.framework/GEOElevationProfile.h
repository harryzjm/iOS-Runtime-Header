//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMinimumVisibleElevationRange, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOElevationProfile : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMinimumVisibleElevationRange *_minimumVisibleElevationRange;
    NSMutableArray *_points;
    NSMutableArray *_segmentDescriptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _sumElevationGainCm;
    unsigned int _sumElevationLossCm;
    struct {
        unsigned int has_sumElevationGainCm:1;
        unsigned int has_sumElevationLossCm:1;
        unsigned int read_unknownFields:1;
        unsigned int read_minimumVisibleElevationRange:1;
        unsigned int read_points:1;
        unsigned int read_segmentDescriptions:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)segmentDescriptionType;
+ (Class)pointType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)segmentDescriptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentDescriptionsCount;
- (void)addSegmentDescription:(id)arg1;
- (void)clearSegmentDescriptions;
@property(retain, nonatomic) NSMutableArray *segmentDescriptions;
@property(retain, nonatomic) GEOMinimumVisibleElevationRange *minimumVisibleElevationRange;
@property(readonly, nonatomic) _Bool hasMinimumVisibleElevationRange;
@property(nonatomic) _Bool hasSumElevationLossCm;
@property(nonatomic) unsigned int sumElevationLossCm;
@property(nonatomic) _Bool hasSumElevationGainCm;
@property(nonatomic) unsigned int sumElevationGainCm;
- (id)pointAtIndex:(unsigned long long)arg1;
- (unsigned long long)pointsCount;
- (void)addPoint:(id)arg1;
- (void)clearPoints;
@property(retain, nonatomic) NSMutableArray *points;
- (id)initWithData:(id)arg1;
- (id)init;

@end
