//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDBasemapRegionMetadata, GEOTimezone, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _area;
    GEOPDBasemapRegionMetadata *_basemapRegionMetadata;
    GEOLatLng *_center;
    GEOLatLng *_enhancedCenter;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _knownAccuracy;
    _Bool _isApproximateCenter;
    struct {
        unsigned int has_area:1;
        unsigned int has_knownAccuracy:1;
        unsigned int has_isApproximateCenter:1;
        unsigned int read_unknownFields:1;
        unsigned int read_basemapRegionMetadata:1;
        unsigned int read_center:1;
        unsigned int read_enhancedCenter:1;
        unsigned int read_timezone:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (id)placeInfoForPlaceData:(id)arg1;
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
@property(retain, nonatomic) GEOLatLng *enhancedCenter;
@property(readonly, nonatomic) _Bool hasEnhancedCenter;
@property(retain, nonatomic) GEOPDBasemapRegionMetadata *basemapRegionMetadata;
@property(readonly, nonatomic) _Bool hasBasemapRegionMetadata;
- (int)StringAsKnownAccuracy:(id)arg1;
- (id)knownAccuracyAsString:(int)arg1;
@property(nonatomic) _Bool hasKnownAccuracy;
@property(nonatomic) int knownAccuracy;
@property(nonatomic) _Bool hasIsApproximateCenter;
@property(nonatomic) _Bool isApproximateCenter;
@property(retain, nonatomic) GEOTimezone *timezone;
@property(readonly, nonatomic) _Bool hasTimezone;
@property(nonatomic) _Bool hasArea;
@property(nonatomic) double area;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
- (id)initWithData:(id)arg1;
- (id)init;

@end
