//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPCorrectedCoordinate, GEORPCorrectedLabel, GEORPCorrectedSearch, GEORPDirectionsProblem, GEORPMapLocation, GEORPMerchantLookupCorrections, GEORPPlaceProblem, NSMutableArray, NSString, PBDataReader;

@interface GEORPProblemCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_comments;
    GEORPCorrectedCoordinate *_correctedCoordinate;
    NSMutableArray *_correctedFields;
    NSMutableArray *_correctedFlags;
    GEORPCorrectedLabel *_correctedLabel;
    GEORPMapLocation *_correctedMapLocation;
    GEORPCorrectedSearch *_correctedSearch;
    GEORPDirectionsProblem *_directionsProblem;
    GEORPMerchantLookupCorrections *_merchantLookupCorrections;
    NSMutableArray *_photoWithMetadatas;
    GEORPPlaceProblem *_placeProblem;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _delayed;
    struct {
        unsigned int has_delayed:1;
        unsigned int read_comments:1;
        unsigned int read_correctedCoordinate:1;
        unsigned int read_correctedFields:1;
        unsigned int read_correctedFlags:1;
        unsigned int read_correctedLabel:1;
        unsigned int read_correctedMapLocation:1;
        unsigned int read_correctedSearch:1;
        unsigned int read_directionsProblem:1;
        unsigned int read_merchantLookupCorrections:1;
        unsigned int read_photoWithMetadatas:1;
        unsigned int read_placeProblem:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)correctedFlagType;
+ (Class)photoWithMetadataType;
+ (Class)correctedFieldType;
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
@property(retain, nonatomic) GEORPMerchantLookupCorrections *merchantLookupCorrections;
@property(readonly, nonatomic) _Bool hasMerchantLookupCorrections;
- (id)correctedFlagAtIndex:(unsigned long long)arg1;
- (unsigned long long)correctedFlagsCount;
- (void)addCorrectedFlag:(id)arg1;
- (void)clearCorrectedFlags;
@property(retain, nonatomic) NSMutableArray *correctedFlags;
@property(nonatomic) _Bool hasDelayed;
@property(nonatomic) _Bool delayed;
- (id)photoWithMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoWithMetadatasCount;
- (void)addPhotoWithMetadata:(id)arg1;
- (void)clearPhotoWithMetadatas;
@property(retain, nonatomic) NSMutableArray *photoWithMetadatas;
@property(retain, nonatomic) GEORPDirectionsProblem *directionsProblem;
@property(readonly, nonatomic) _Bool hasDirectionsProblem;
@property(retain, nonatomic) GEORPPlaceProblem *placeProblem;
@property(readonly, nonatomic) _Bool hasPlaceProblem;
@property(retain, nonatomic) NSString *comments;
@property(readonly, nonatomic) _Bool hasComments;
@property(retain, nonatomic) GEORPMapLocation *correctedMapLocation;
@property(readonly, nonatomic) _Bool hasCorrectedMapLocation;
@property(retain, nonatomic) GEORPCorrectedSearch *correctedSearch;
@property(readonly, nonatomic) _Bool hasCorrectedSearch;
@property(retain, nonatomic) GEORPCorrectedCoordinate *correctedCoordinate;
@property(readonly, nonatomic) _Bool hasCorrectedCoordinate;
@property(retain, nonatomic) GEORPCorrectedLabel *correctedLabel;
@property(readonly, nonatomic) _Bool hasCorrectedLabel;
- (id)correctedFieldAtIndex:(unsigned long long)arg1;
- (unsigned long long)correctedFieldsCount;
- (void)addCorrectedField:(id)arg1;
- (void)clearCorrectedFields;
@property(retain, nonatomic) NSMutableArray *correctedFields;
- (id)initWithData:(id)arg1;
- (id)init;

@end
