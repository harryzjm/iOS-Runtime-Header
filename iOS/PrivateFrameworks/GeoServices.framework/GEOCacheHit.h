//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOCacheHit : PBCodable <NSCopying>
{
    unsigned int _bytes;
    unsigned int _count;
    int _requestorType;
    int _tileSourceType;
    struct {
        unsigned int has_bytes:1;
        unsigned int has_count:1;
        unsigned int has_requestorType:1;
        unsigned int has_tileSourceType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(nonatomic) _Bool hasBytes;
@property(nonatomic) unsigned int bytes;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) unsigned int count;
- (int)StringAsTileSourceType:(id)arg1;
- (id)tileSourceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTileSourceType;
@property(nonatomic) int tileSourceType;
- (int)StringAsRequestorType:(id)arg1;
- (id)requestorTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestorType;
@property(nonatomic) int requestorType;

@end
