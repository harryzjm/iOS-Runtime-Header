//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOTimeRange : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _from;
    unsigned int _to;
    struct {
        unsigned int from:1;
        unsigned int to:1;
    } _has;
}

@property(nonatomic) unsigned int to; // @synthesize to=_to;
@property(nonatomic) unsigned int from; // @synthesize from=_from;
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
@property(nonatomic) _Bool hasTo;
@property(nonatomic) _Bool hasFrom;
- (id)initWithPlaceDataTimeRange:(struct GEOPDLocalTimeRange *)arg1;

@end

