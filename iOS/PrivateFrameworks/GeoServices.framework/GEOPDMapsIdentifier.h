//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDShardedId, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsIdentifier : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _placeType;
    GEOPDShardedId *_shardedId;
    struct {
        unsigned int placeType:1;
    } _has;
}

@property(retain, nonatomic) GEOPDShardedId *shardedId; // @synthesize shardedId=_shardedId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsPlaceType:(id)arg1;
- (id)placeTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceType;
@property(nonatomic) int placeType; // @synthesize placeType=_placeType;
@property(readonly, nonatomic) _Bool hasShardedId;
- (int)placeDisplayType;

@end

