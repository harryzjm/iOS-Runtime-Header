//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDBounds, PBUnknownFields;

@interface GEOPDSpatialLookupResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _mappedCategorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
}

+ (id)spatialLookupResultForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOPDBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
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
- (int)StringAsMappedCategorys:(id)arg1;
- (id)mappedCategorysAsString:(int)arg1;
- (void)setMappedCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)mappedCategoryAtIndex:(unsigned long long)arg1;
- (void)addMappedCategory:(int)arg1;
- (void)clearMappedCategorys;
@property(readonly, nonatomic) int *mappedCategorys;
@property(readonly, nonatomic) unsigned long long mappedCategorysCount;
@property(readonly, nonatomic) _Bool hasBounds;
@property(readonly, nonatomic) _Bool hasCenter;
- (void)dealloc;

@end

