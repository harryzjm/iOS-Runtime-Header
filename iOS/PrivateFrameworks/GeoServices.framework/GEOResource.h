//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, PBUnknownFields;

@interface GEOResource : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSData *_checksum;
    int _connectionType;
    NSString *_filename;
    NSMutableArray *_filters;
    unsigned int _preferWiFiAllowedStaleThreshold;
    int _resourceType;
    struct {
        unsigned int connectionType:1;
        unsigned int preferWiFiAllowedStaleThreshold:1;
        unsigned int resourceType:1;
    } _has;
}

+ (Class)filterType;
@property(nonatomic) unsigned int preferWiFiAllowedStaleThreshold; // @synthesize preferWiFiAllowedStaleThreshold=_preferWiFiAllowedStaleThreshold;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSData *checksum; // @synthesize checksum=_checksum;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
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
@property(nonatomic) _Bool hasPreferWiFiAllowedStaleThreshold;
- (int)StringAsConnectionType:(id)arg1;
- (id)connectionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasConnectionType;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
- (id)filterAtIndex:(unsigned long long)arg1;
- (unsigned long long)filtersCount;
- (void)addFilter:(id)arg1;
- (void)clearFilters;
- (void)setRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1;
- (void)addRegion:(struct GEOTileSetRegion)arg1;
- (void)clearRegions;
@property(readonly, nonatomic) struct GEOTileSetRegion *regions;
@property(readonly, nonatomic) unsigned long long regionsCount;
@property(readonly, nonatomic) _Bool hasChecksum;
@property(readonly, nonatomic) _Bool hasFilename;
- (int)StringAsResourceType:(id)arg1;
- (id)resourceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasResourceType;
@property(nonatomic) int resourceType; // @synthesize resourceType=_resourceType;
- (void)dealloc;
- (_Bool)_geo_isRelevantForScales:(id)arg1 scenarios:(id)arg2;

@end

