//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOWiFiQualityHours, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityProfile : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOWiFiQualityHours *_hours;
    NSMutableArray *_qualities;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_hours:1;
        unsigned int read_qualities:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)qualitiesType;
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
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)qualitiesCount;
- (void)addQualities:(id)arg1;
- (void)clearQualities;
@property(retain, nonatomic) NSMutableArray *qualities;
@property(retain, nonatomic) GEOWiFiQualityHours *hours;
@property(readonly, nonatomic) _Bool hasHours;
- (id)initWithData:(id)arg1;
- (id)init;

@end
