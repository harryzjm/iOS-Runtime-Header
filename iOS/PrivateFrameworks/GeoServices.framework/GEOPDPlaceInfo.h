//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOTimezone, PBUnknownFields;

@interface GEOPDPlaceInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _area;
    GEOLatLng *_center;
    int _knownAccuracy;
    GEOTimezone *_timezone;
    _Bool _isApproximateCenter;
    struct {
        unsigned int area:1;
        unsigned int knownAccuracy:1;
        unsigned int isApproximateCenter:1;
    } _has;
}

+ (id)placeInfoForPlaceData:(id)arg1;
@property(nonatomic) _Bool isApproximateCenter; // @synthesize isApproximateCenter=_isApproximateCenter;
@property(retain, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property(nonatomic) double area; // @synthesize area=_area;
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
- (int)StringAsKnownAccuracy:(id)arg1;
- (id)knownAccuracyAsString:(int)arg1;
@property(nonatomic) _Bool hasKnownAccuracy;
@property(nonatomic) int knownAccuracy; // @synthesize knownAccuracy=_knownAccuracy;
@property(nonatomic) _Bool hasIsApproximateCenter;
@property(readonly, nonatomic) _Bool hasTimezone;
@property(nonatomic) _Bool hasArea;
@property(readonly, nonatomic) _Bool hasCenter;

@end
