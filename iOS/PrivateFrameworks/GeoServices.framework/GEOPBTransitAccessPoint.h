//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    unsigned int _accessPointIndex;
    NSString *_entranceNameDisplayString;
    NSMutableArray *_entranceZoomNames;
    NSString *_exitNameDisplayString;
    NSMutableArray *_exitZoomNames;
    GEOLatLng *_location;
    unsigned int _stationIndex;
    struct {
        unsigned int muid:1;
        unsigned int accessPointIndex:1;
        unsigned int stationIndex:1;
    } _has;
}

+ (Class)exitZoomNameType;
+ (Class)entranceZoomNameType;
@property(retain, nonatomic) NSString *exitNameDisplayString; // @synthesize exitNameDisplayString=_exitNameDisplayString;
@property(retain, nonatomic) NSString *entranceNameDisplayString; // @synthesize entranceNameDisplayString=_entranceNameDisplayString;
@property(retain, nonatomic) NSMutableArray *exitZoomNames; // @synthesize exitZoomNames=_exitZoomNames;
@property(retain, nonatomic) NSMutableArray *entranceZoomNames; // @synthesize entranceZoomNames=_entranceZoomNames;
@property(nonatomic) unsigned int stationIndex; // @synthesize stationIndex=_stationIndex;
@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(nonatomic) unsigned int accessPointIndex; // @synthesize accessPointIndex=_accessPointIndex;
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
@property(readonly, nonatomic) _Bool hasExitNameDisplayString;
@property(readonly, nonatomic) _Bool hasEntranceNameDisplayString;
- (id)exitZoomNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)exitZoomNamesCount;
- (void)addExitZoomName:(id)arg1;
- (void)clearExitZoomNames;
- (id)entranceZoomNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)entranceZoomNamesCount;
- (void)addEntranceZoomName:(id)arg1;
- (void)clearEntranceZoomNames;
@property(nonatomic) _Bool hasStationIndex;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) _Bool hasAccessPointIndex;
- (id)identifier;
- (id)bestExitNameWithLocale:(out id *)arg1;
- (id)bestExitName;
- (id)bestEntranceNameWithLocale:(out id *)arg1;
- (id)bestEntranceName;

@end

