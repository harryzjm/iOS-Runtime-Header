//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying>
{
    unsigned long long _lineId;
    NSString *_direction;
    NSString *_headsign;
    struct {
        unsigned int lineId:1;
    } _has;
}

@property(retain, nonatomic) NSString *headsign; // @synthesize headsign=_headsign;
@property(retain, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long lineId; // @synthesize lineId=_lineId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasHeadsign;
@property(readonly, nonatomic) _Bool hasDirection;
@property(nonatomic) _Bool hasLineId;

@end

