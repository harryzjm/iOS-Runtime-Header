//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEORouteLegRange : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _endValidDistanceOffsetCm;
    unsigned int _startValidDistanceOffsetCm;
    struct {
        unsigned int has_endValidDistanceOffsetCm:1;
        unsigned int has_startValidDistanceOffsetCm:1;
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
@property(nonatomic) _Bool hasEndValidDistanceOffsetCm;
@property(nonatomic) unsigned int endValidDistanceOffsetCm;
@property(nonatomic) _Bool hasStartValidDistanceOffsetCm;
@property(nonatomic) unsigned int startValidDistanceOffsetCm;

@end
