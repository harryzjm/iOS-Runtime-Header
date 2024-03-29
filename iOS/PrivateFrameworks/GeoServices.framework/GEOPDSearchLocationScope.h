//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOMapRegion, GEOPDSearchMultiMapRegion, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchLocationScope : PBCodable
{
    PBDataReader *_reader;
    GEOLatLng *_center;
    double _displayRegionLimitKm;
    GEOMapRegion *_mapRegion;
    GEOPDSearchMultiMapRegion *_multiMapRegion;
    double _scopeDistanceLimitKm;
    NSString *_winDistanceGeohash4;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _locationScopeType;
    int _scopeDistanceType;
    float _winDistanceKmMean;
    float _winDistanceKmP50;
    float _winDistanceKmP80;
    float _winDistanceKmP90;
    float _winDistanceKmP95;
    float _winDistanceKmP99;
    _Bool _hasBelowStreetGeo;
    _Bool _isBlendingScope;
    _Bool _isMixedIntent;
    struct {
        unsigned int has_displayRegionLimitKm:1;
        unsigned int has_scopeDistanceLimitKm:1;
        unsigned int has_locationScopeType:1;
        unsigned int has_scopeDistanceType:1;
        unsigned int has_winDistanceKmMean:1;
        unsigned int has_winDistanceKmP50:1;
        unsigned int has_winDistanceKmP80:1;
        unsigned int has_winDistanceKmP90:1;
        unsigned int has_winDistanceKmP95:1;
        unsigned int has_winDistanceKmP99:1;
        unsigned int has_hasBelowStreetGeo:1;
        unsigned int has_isBlendingScope:1;
        unsigned int has_isMixedIntent:1;
        unsigned int read_center:1;
        unsigned int read_mapRegion:1;
        unsigned int read_multiMapRegion:1;
        unsigned int read_winDistanceGeohash4:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)init;

@end

