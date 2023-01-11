//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteSessionData, GEOPDParsecQueryRankingFeatures, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
    NSMutableArray *_clientRankingFeatureMetadatas;
    GEOPDParsecQueryRankingFeatures *_parsecQueryRankingFeatures;
    NSMutableArray *_sections;
    NSMutableArray *_sortPriorityMappings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _retainSearchTime;
    _Bool _enableRap;
    _Bool _isNoResultFromNegativeCache;
    _Bool _isTopSectionTypeQuery;
    _Bool _shouldDifferentiateClientAndServerResults;
    _Bool _shouldDisplayNoResults;
    struct {
        unsigned int has_retainSearchTime:1;
        unsigned int has_enableRap:1;
        unsigned int has_isNoResultFromNegativeCache:1;
        unsigned int has_isTopSectionTypeQuery:1;
        unsigned int has_shouldDifferentiateClientAndServerResults:1;
        unsigned int has_shouldDisplayNoResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_autocompleteSessionData:1;
        unsigned int read_clientRankingFeatureMetadatas:1;
        unsigned int read_parsecQueryRankingFeatures:1;
        unsigned int read_sections:1;
        unsigned int read_sortPriorityMappings:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)clientRankingFeatureMetadataType;
+ (Class)sortPriorityMappingType;
+ (Class)sectionsType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDParsecQueryRankingFeatures *parsecQueryRankingFeatures;
@property(readonly, nonatomic) _Bool hasParsecQueryRankingFeatures;
@property(retain, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;
@property(readonly, nonatomic) _Bool hasAutocompleteSessionData;
@property(nonatomic) _Bool hasShouldDifferentiateClientAndServerResults;
@property(nonatomic) _Bool shouldDifferentiateClientAndServerResults;
- (id)clientRankingFeatureMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientRankingFeatureMetadatasCount;
- (void)addClientRankingFeatureMetadata:(id)arg1;
- (void)clearClientRankingFeatureMetadatas;
@property(retain, nonatomic) NSMutableArray *clientRankingFeatureMetadatas;
@property(nonatomic) _Bool hasIsTopSectionTypeQuery;
@property(nonatomic) _Bool isTopSectionTypeQuery;
- (id)sortPriorityMappingAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortPriorityMappingsCount;
- (void)addSortPriorityMapping:(id)arg1;
- (void)clearSortPriorityMappings;
@property(retain, nonatomic) NSMutableArray *sortPriorityMappings;
@property(nonatomic) _Bool hasIsNoResultFromNegativeCache;
@property(nonatomic) _Bool isNoResultFromNegativeCache;
@property(nonatomic) _Bool hasRetainSearchTime;
@property(nonatomic) unsigned int retainSearchTime;
@property(nonatomic) _Bool hasShouldDisplayNoResults;
@property(nonatomic) _Bool shouldDisplayNoResults;
@property(nonatomic) _Bool hasEnableRap;
@property(nonatomic) _Bool enableRap;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)addSections:(id)arg1;
- (void)clearSections;
@property(retain, nonatomic) NSMutableArray *sections;
- (id)initWithData:(id)arg1;
- (id)init;

@end
