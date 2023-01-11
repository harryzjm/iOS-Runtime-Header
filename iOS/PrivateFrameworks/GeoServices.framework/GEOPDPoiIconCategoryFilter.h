//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiIconCategoryFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _excludeCategoryFilters;
    CDStruct_9f2792e4 _includeCategoryFilters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_excludeCategoryFilters:1;
        unsigned int read_includeCategoryFilters:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
- (void)setExcludeCategoryFilters:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)excludeCategoryFilterAtIndex:(unsigned long long)arg1;
- (void)addExcludeCategoryFilter:(unsigned int)arg1;
- (void)clearExcludeCategoryFilters;
@property(readonly, nonatomic) unsigned int *excludeCategoryFilters;
@property(readonly, nonatomic) unsigned long long excludeCategoryFiltersCount;
- (void)setIncludeCategoryFilters:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)includeCategoryFilterAtIndex:(unsigned long long)arg1;
- (void)addIncludeCategoryFilter:(unsigned int)arg1;
- (void)clearIncludeCategoryFilters;
@property(readonly, nonatomic) unsigned int *includeCategoryFilters;
@property(readonly, nonatomic) unsigned long long includeCategoryFiltersCount;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end
