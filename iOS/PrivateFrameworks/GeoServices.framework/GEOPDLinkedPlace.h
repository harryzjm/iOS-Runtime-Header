//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOStyleAttributes, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedPlace : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _featureId;
    GEOLatLng *_center;
    GEOPDMapsIdentifier *_mapsId;
    NSString *_name;
    GEOStyleAttributes *_styleAttributes;
    CDStruct_b1448a5c _has;
}

@property(nonatomic) unsigned long long featureId; // @synthesize featureId=_featureId;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GEOPDMapsIdentifier *mapsId; // @synthesize mapsId=_mapsId;
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
@property(nonatomic) _Bool hasFeatureId;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(readonly, nonatomic) _Bool hasCenter;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasMapsId;

@end

