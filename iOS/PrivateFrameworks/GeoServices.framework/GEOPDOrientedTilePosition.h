//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDOrientedTilePosition : PBCodable <NSCopying>
{
    int _altitude;
    unsigned int _pitch;
    unsigned int _roll;
    unsigned int _x;
    unsigned int _yaw;
    unsigned int _y;
    struct {
        unsigned int has_altitude:1;
        unsigned int has_pitch:1;
        unsigned int has_roll:1;
        unsigned int has_x:1;
        unsigned int has_yaw:1;
        unsigned int has_y:1;
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
@property(nonatomic) _Bool hasRoll;
@property(nonatomic) unsigned int roll;
@property(nonatomic) _Bool hasPitch;
@property(nonatomic) unsigned int pitch;
@property(nonatomic) _Bool hasYaw;
@property(nonatomic) unsigned int yaw;
@property(nonatomic) _Bool hasAltitude;
@property(nonatomic) int altitude;
@property(nonatomic) _Bool hasY;
@property(nonatomic) unsigned int y;
@property(nonatomic) _Bool hasX;
@property(nonatomic) unsigned int x;

@end
