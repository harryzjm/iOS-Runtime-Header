//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOCacheMiss : PBCodable <NSCopying>
{
    NSMutableArray *_errors;
    unsigned int _bytes;
    unsigned int _count;
    unsigned int _httpStatus;
    int _missType;
    int _requestorType;
    struct {
        unsigned int has_bytes:1;
        unsigned int has_count:1;
        unsigned int has_httpStatus:1;
        unsigned int has_missType:1;
        unsigned int has_requestorType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)errorsType;
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
@property(nonatomic) _Bool hasHttpStatus;
@property(nonatomic) unsigned int httpStatus;
- (id)errorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorsCount;
- (void)addErrors:(id)arg1;
- (void)clearErrors;
@property(retain, nonatomic) NSMutableArray *errors;
@property(nonatomic) _Bool hasBytes;
@property(nonatomic) unsigned int bytes;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) unsigned int count;
- (int)StringAsMissType:(id)arg1;
- (id)missTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMissType;
@property(nonatomic) int missType;
- (int)StringAsRequestorType:(id)arg1;
- (id)requestorTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestorType;
@property(nonatomic) int requestorType;

@end
