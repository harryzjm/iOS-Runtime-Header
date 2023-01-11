//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiMeasurement : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _entryTime;
    unsigned long long _exitTime;
    NSMutableArray *_locations;
    NSMutableArray *_wifiAccessPoints;
    struct {
        unsigned int entryTime:1;
        unsigned int exitTime:1;
    } _has;
}

+ (Class)wifiAccessPointType;
+ (Class)locationType;
@property(nonatomic) unsigned long long exitTime; // @synthesize exitTime=_exitTime;
@property(nonatomic) unsigned long long entryTime; // @synthesize entryTime=_entryTime;
@property(retain, nonatomic) NSMutableArray *wifiAccessPoints; // @synthesize wifiAccessPoints=_wifiAccessPoints;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
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
@property(nonatomic) _Bool hasExitTime;
@property(nonatomic) _Bool hasEntryTime;
- (id)wifiAccessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)wifiAccessPointsCount;
- (void)addWifiAccessPoint:(id)arg1;
- (void)clearWifiAccessPoints;
- (id)locationAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)addLocation:(id)arg1;
- (void)clearLocations;

@end

