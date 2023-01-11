//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, GEOPDCaptionedPhoto, GEOPDMapsIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisher : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_collectionIds;
    GEOLocalizedString *_name;
    GEOPDCaptionedPhoto *_photo;
    NSMutableArray *_publisherDescriptions;
    GEOPDMapsIdentifier *_publisherId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _errorState;
    unsigned int _numCollections;
    struct {
        unsigned int has_errorState:1;
        unsigned int has_numCollections:1;
        unsigned int read_unknownFields:1;
        unsigned int read_collectionIds:1;
        unsigned int read_name:1;
        unsigned int read_photo:1;
        unsigned int read_publisherDescriptions:1;
        unsigned int read_publisherId:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)publisherDescriptionType;
+ (Class)collectionIdType;
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
- (int)StringAsErrorState:(id)arg1;
- (id)errorStateAsString:(int)arg1;
@property(nonatomic) _Bool hasErrorState;
@property(nonatomic) int errorState;
- (id)publisherDescriptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)publisherDescriptionsCount;
- (void)addPublisherDescription:(id)arg1;
- (void)clearPublisherDescriptions;
@property(retain, nonatomic) NSMutableArray *publisherDescriptions;
@property(nonatomic) _Bool hasNumCollections;
@property(nonatomic) unsigned int numCollections;
- (id)collectionIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)collectionIdsCount;
- (void)addCollectionId:(id)arg1;
- (void)clearCollectionIds;
@property(retain, nonatomic) NSMutableArray *collectionIds;
@property(retain, nonatomic) GEOLocalizedString *name;
@property(readonly, nonatomic) _Bool hasName;
@property(retain, nonatomic) GEOPDCaptionedPhoto *photo;
@property(readonly, nonatomic) _Bool hasPhoto;
@property(retain, nonatomic) GEOPDMapsIdentifier *publisherId;
@property(readonly, nonatomic) _Bool hasPublisherId;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)publisherDescription;

@end
