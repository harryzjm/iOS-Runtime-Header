//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTileCoordinate, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDGroundMetadataTile : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_buildTables;
    NSMutableArray *_cameraMetadataTables;
    GEOTileCoordinate *_coord;
    NSMutableArray *_photoPositions;
    NSMutableArray *_storefronts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _tileBuildId;
    struct {
        unsigned int has_tileBuildId:1;
        unsigned int read_buildTables:1;
        unsigned int read_cameraMetadataTables:1;
        unsigned int read_coord:1;
        unsigned int read_photoPositions:1;
        unsigned int read_storefronts:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)cameraMetadataTableType;
+ (Class)buildTableType;
+ (Class)storefrontType;
+ (Class)photoPositionType;
- (void).cxx_destruct;
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
@property(nonatomic) _Bool hasTileBuildId;
@property(nonatomic) unsigned int tileBuildId;
@property(retain, nonatomic) GEOTileCoordinate *coord;
@property(readonly, nonatomic) _Bool hasCoord;
- (id)cameraMetadataTableAtIndex:(unsigned long long)arg1;
- (unsigned long long)cameraMetadataTablesCount;
- (void)addCameraMetadataTable:(id)arg1;
- (void)clearCameraMetadataTables;
@property(retain, nonatomic) NSMutableArray *cameraMetadataTables;
- (id)buildTableAtIndex:(unsigned long long)arg1;
- (unsigned long long)buildTablesCount;
- (void)addBuildTable:(id)arg1;
- (void)clearBuildTables;
@property(retain, nonatomic) NSMutableArray *buildTables;
- (id)storefrontAtIndex:(unsigned long long)arg1;
- (unsigned long long)storefrontsCount;
- (void)addStorefront:(id)arg1;
- (void)clearStorefronts;
@property(retain, nonatomic) NSMutableArray *storefronts;
- (id)photoPositionAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoPositionsCount;
- (void)addPhotoPosition:(id)arg1;
- (void)clearPhotoPositions;
@property(retain, nonatomic) NSMutableArray *photoPositions;
- (id)initWithData:(id)arg1;
- (id)init;

@end
