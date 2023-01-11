//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEORegionalResource : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_tileRanges;
    unsigned long long _tileRangesCount;
    unsigned long long _tileRangesSpace;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct {
        unsigned int has_x:1;
        unsigned int has_y:1;
        unsigned int has_z:1;
        unsigned int read_unknownFields:1;
        unsigned int read_tileRanges:1;
        unsigned int read_attributions:1;
        unsigned int read_iconChecksums:1;
        unsigned int read_icons:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)iconChecksumType;
+ (Class)attributionType;
+ (Class)iconType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setTileRanges:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)tileRangeAtIndex:(unsigned long long)arg1;
- (void)addTileRange:(struct GEOTileSetRegion)arg1;
- (void)clearTileRanges;
@property(readonly, nonatomic) struct GEOTileSetRegion *tileRanges;
@property(readonly, nonatomic) unsigned long long tileRangesCount;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconChecksumsCount;
- (void)addIconChecksum:(id)arg1;
- (void)clearIconChecksums;
@property(retain, nonatomic) NSMutableArray *iconChecksums;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
@property(retain, nonatomic) NSMutableArray *attributions;
- (id)iconAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (void)addIcon:(id)arg1;
- (void)clearIcons;
@property(retain, nonatomic) NSMutableArray *icons;
@property(nonatomic) _Bool hasZ;
@property(nonatomic) unsigned int z;
@property(nonatomic) _Bool hasY;
@property(nonatomic) unsigned int y;
@property(nonatomic) _Bool hasX;
@property(nonatomic) unsigned int x;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end
