//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEORegionalResource : PBCodable
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

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

