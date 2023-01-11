//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollectionLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    NSMutableArray *_collectionIds;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_collectionIds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_center:1;
        unsigned int wrote_collectionIds:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
- (id)dictionaryRepresentation;
- (id)description;
- (id)collectionIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)collectionIdsCount;
- (void)_addNoFlagsCollectionId:(id)arg1;
- (void)addCollectionId:(id)arg1;
- (void)clearCollectionIds;
@property(retain, nonatomic) NSMutableArray *collectionIds;
- (void)_readCollectionIds;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
- (void)_readCenter;

@end
