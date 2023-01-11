//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOCategory : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_alias;
    long long _geoOntologyId;
    NSMutableArray *_localizedNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _level;
    struct {
        unsigned int has_geoOntologyId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_alias:1;
        unsigned int read_localizedNames:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)localizedNamesType;
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
- (id)localizedNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedNamesCount;
- (void)addLocalizedNames:(id)arg1;
- (void)clearLocalizedNames;
@property(retain, nonatomic) NSMutableArray *localizedNames;
@property(nonatomic) _Bool hasGeoOntologyId;
@property(nonatomic) long long geoOntologyId;
@property(nonatomic) int level;
@property(retain, nonatomic) NSString *alias;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithPlaceDataCategory:(id)arg1;

@end
