//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityLocationSearch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    GEOLocation *_location;
    unsigned long long _radius;
    NSMutableArray *_tiles;
    struct {
        unsigned int has_radius:1;
        unsigned int read_location:1;
        unsigned int read_tiles:1;
        unsigned int wrote_location:1;
        unsigned int wrote_radius:1;
        unsigned int wrote_tiles:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)tilesType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) unsigned long long radius;
- (id)tilesAtIndex:(unsigned long long)arg1;
- (unsigned long long)tilesCount;
- (void)_addNoFlagsTiles:(id)arg1;
- (void)addTiles:(id)arg1;
- (void)clearTiles;
@property(retain, nonatomic) NSMutableArray *tiles;
- (void)_readTiles;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)_readLocation;

@end
