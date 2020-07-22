//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDFeatureBuilding, GEOPDFeaturePOI, GEOPDFeatureVenue, PBUnknownFields;

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDFeatureBuilding *_featureBuilding;
    GEOPDFeaturePOI *_featurePoi;
    GEOPDFeatureVenue *_featureVenue;
}

@property(retain, nonatomic) GEOPDFeaturePOI *featurePoi; // @synthesize featurePoi=_featurePoi;
@property(retain, nonatomic) GEOPDFeatureBuilding *featureBuilding; // @synthesize featureBuilding=_featureBuilding;
@property(retain, nonatomic) GEOPDFeatureVenue *featureVenue; // @synthesize featureVenue=_featureVenue;
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
@property(readonly, nonatomic) _Bool hasFeaturePoi;
@property(readonly, nonatomic) _Bool hasFeatureBuilding;
@property(readonly, nonatomic) _Bool hasFeatureVenue;

@end
