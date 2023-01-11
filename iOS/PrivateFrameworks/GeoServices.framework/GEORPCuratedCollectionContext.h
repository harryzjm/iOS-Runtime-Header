//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPCuratedCollectionContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _placeEntityMuids;
    unsigned long long _curatedCollectionMuid;
    NSMutableArray *_imageInfos;
    NSString *_originalDescription;
    NSString *_originalName;
    NSString *_originalUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_curatedCollectionMuid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_placeEntityMuids:1;
        unsigned int read_imageInfos:1;
        unsigned int read_originalDescription:1;
        unsigned int read_originalName:1;
        unsigned int read_originalUrl:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)imageInfoType;
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
- (id)imageInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageInfosCount;
- (void)addImageInfo:(id)arg1;
- (void)clearImageInfos;
@property(retain, nonatomic) NSMutableArray *imageInfos;
@property(retain, nonatomic) NSString *originalDescription;
@property(readonly, nonatomic) _Bool hasOriginalDescription;
@property(retain, nonatomic) NSString *originalUrl;
@property(readonly, nonatomic) _Bool hasOriginalUrl;
@property(retain, nonatomic) NSString *originalName;
@property(readonly, nonatomic) _Bool hasOriginalName;
- (void)setPlaceEntityMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)placeEntityMuidAtIndex:(unsigned long long)arg1;
- (void)addPlaceEntityMuid:(unsigned long long)arg1;
- (void)clearPlaceEntityMuids;
@property(readonly, nonatomic) unsigned long long *placeEntityMuids;
@property(readonly, nonatomic) unsigned long long placeEntityMuidsCount;
@property(nonatomic) _Bool hasCuratedCollectionMuid;
@property(nonatomic) unsigned long long curatedCollectionMuid;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end
