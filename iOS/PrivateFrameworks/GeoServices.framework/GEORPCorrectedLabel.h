//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapRegion, NSMutableArray, NSString;

@interface GEORPCorrectedLabel : PBCodable <NSCopying>
{
    unsigned long long _uid;
    GEOLatLng *_coordinate;
    NSString *_correctedValue;
    NSMutableArray *_featureHandles;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
    _Bool _localizedLabels;
    struct {
        unsigned int uid:1;
        unsigned int localizedLabels:1;
    } _has;
}

+ (Class)featureHandleType;
@property(nonatomic) _Bool localizedLabels; // @synthesize localizedLabels=_localizedLabels;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSMutableArray *featureHandles; // @synthesize featureHandles=_featureHandles;
@property(retain, nonatomic) GEOMapRegion *featureRegion; // @synthesize featureRegion=_featureRegion;
@property(retain, nonatomic) NSString *correctedValue; // @synthesize correctedValue=_correctedValue;
@property(retain, nonatomic) NSString *originalValue; // @synthesize originalValue=_originalValue;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLocalizedLabels;
@property(nonatomic) _Bool hasUid;
@property(readonly, nonatomic) _Bool hasCoordinate;
- (id)featureHandleAtIndex:(unsigned long long)arg1;
- (unsigned long long)featureHandlesCount;
- (void)addFeatureHandle:(id)arg1;
- (void)clearFeatureHandles;
@property(readonly, nonatomic) _Bool hasFeatureRegion;
@property(readonly, nonatomic) _Bool hasCorrectedValue;
@property(readonly, nonatomic) _Bool hasOriginalValue;

@end

