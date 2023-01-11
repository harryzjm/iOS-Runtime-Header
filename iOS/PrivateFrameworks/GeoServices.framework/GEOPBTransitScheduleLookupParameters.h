//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPBTransitScheduleLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _lineId;
    unsigned long long _referenceTripId;
    unsigned long long _transitId;
    struct {
        unsigned int has_lineId:1;
        unsigned int has_referenceTripId:1;
        unsigned int has_transitId:1;
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
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasReferenceTripId;
@property(nonatomic) unsigned long long referenceTripId;
@property(nonatomic) _Bool hasTransitId;
@property(nonatomic) unsigned long long transitId;
@property(nonatomic) _Bool hasLineId;
@property(nonatomic) unsigned long long lineId;

@end
