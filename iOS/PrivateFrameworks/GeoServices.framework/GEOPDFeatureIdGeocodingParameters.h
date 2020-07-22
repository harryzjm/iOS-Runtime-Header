//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _featureId;
    GEOLatLng *_location;
    CDStruct_b1448a5c _has;
}

@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long featureId; // @synthesize featureId=_featureId;
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
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasFeatureId;

@end
