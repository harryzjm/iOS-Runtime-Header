//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTFCompactRoadSpeeds : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_5df41632 _geoIds;
    NSData *_openlr;
    NSMutableArray *_predictedSpeeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _color;
    float _confidence;
    unsigned int _decayTimeWindowInMinutes;
    float _endOffset;
    unsigned int _speedKph;
    float _startOffset;
    _Bool _hidden;
    struct {
        unsigned int has_color:1;
        unsigned int has_confidence:1;
        unsigned int has_decayTimeWindowInMinutes:1;
        unsigned int has_endOffset:1;
        unsigned int has_speedKph:1;
        unsigned int has_startOffset:1;
        unsigned int has_hidden:1;
        unsigned int read_geoIds:1;
        unsigned int read_openlr:1;
        unsigned int read_predictedSpeeds:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)predictedSpeedType;
- (void).cxx_destruct;
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
@property(retain, nonatomic) NSData *openlr;
@property(readonly, nonatomic) _Bool hasOpenlr;
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) float confidence;
@property(nonatomic) _Bool hasDecayTimeWindowInMinutes;
@property(nonatomic) unsigned int decayTimeWindowInMinutes;
@property(nonatomic) _Bool hasSpeedKph;
@property(nonatomic) unsigned int speedKph;
- (int)StringAsColor:(id)arg1;
- (id)colorAsString:(int)arg1;
@property(nonatomic) _Bool hasColor;
@property(nonatomic) int color;
- (id)predictedSpeedAtIndex:(unsigned long long)arg1;
- (unsigned long long)predictedSpeedsCount;
- (void)addPredictedSpeed:(id)arg1;
- (void)clearPredictedSpeeds;
@property(retain, nonatomic) NSMutableArray *predictedSpeeds;
@property(nonatomic) _Bool hasHidden;
@property(nonatomic) _Bool hidden;
@property(nonatomic) _Bool hasEndOffset;
@property(nonatomic) float endOffset;
@property(nonatomic) _Bool hasStartOffset;
@property(nonatomic) float startOffset;
- (void)setGeoIds:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)geoIdsAtIndex:(unsigned long long)arg1;
- (void)addGeoIds:(long long)arg1;
- (void)clearGeoIds;
@property(readonly, nonatomic) long long *geoIds;
@property(readonly, nonatomic) unsigned long long geoIdsCount;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end
