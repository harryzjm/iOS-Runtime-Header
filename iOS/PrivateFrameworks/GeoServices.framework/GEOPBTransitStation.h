//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPBTransitStation : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    GEOLatLng *_location;
    NSString *_nameDisplayString;
    unsigned int _stationIndex;
    int _structureType;
    NSMutableArray *_zoomNames;
    struct {
        unsigned int muid:1;
        unsigned int stationIndex:1;
        unsigned int structureType:1;
    } _has;
}

+ (Class)zoomNameType;
@property(retain, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property(retain, nonatomic) NSMutableArray *zoomNames; // @synthesize zoomNames=_zoomNames;
@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(nonatomic) unsigned int stationIndex; // @synthesize stationIndex=_stationIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasNameDisplayString;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoomNamesCount;
- (void)addZoomName:(id)arg1;
- (void)clearZoomNames;
- (int)StringAsStructureType:(id)arg1;
- (id)structureTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasStructureType;
@property(nonatomic) int structureType; // @synthesize structureType=_structureType;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) _Bool hasStationIndex;
- (id)identifier;
- (id)bestName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

