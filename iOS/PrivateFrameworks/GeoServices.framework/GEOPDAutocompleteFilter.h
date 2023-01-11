//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPoiIconCategoryFilter, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _placeTypeFilters;
    CDStruct_95bda58d _requestedEntryTypes;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_placeTypeFilters:1;
        unsigned int read_requestedEntryTypes:1;
        unsigned int read_poiIconCategoryFilter:1;
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
- (int)StringAsPlaceTypeFilters:(id)arg1;
- (id)placeTypeFiltersAsString:(int)arg1;
- (void)setPlaceTypeFilters:(int *)arg1 count:(unsigned long long)arg2;
- (int)placeTypeFilterAtIndex:(unsigned long long)arg1;
- (void)addPlaceTypeFilter:(int)arg1;
- (void)clearPlaceTypeFilters;
@property(readonly, nonatomic) int *placeTypeFilters;
@property(readonly, nonatomic) unsigned long long placeTypeFiltersCount;
@property(retain, nonatomic) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
@property(readonly, nonatomic) _Bool hasPoiIconCategoryFilter;
- (int)StringAsRequestedEntryTypes:(id)arg1;
- (id)requestedEntryTypesAsString:(int)arg1;
- (void)setRequestedEntryTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)requestedEntryTypeAtIndex:(unsigned long long)arg1;
- (void)addRequestedEntryType:(int)arg1;
- (void)clearRequestedEntryTypes;
@property(readonly, nonatomic) int *requestedEntryTypes;
@property(readonly, nonatomic) unsigned long long requestedEntryTypesCount;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end
