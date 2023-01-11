//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDCodableLocationDatum : PBCodable <NSCopying>
{
    double _altitude;
    double _course;
    double _horizontalAccuracy;
    double _latitude;
    double _longitude;
    double _speed;
    double _timestamp;
    double _verticalAccuracy;
    struct {
        unsigned int altitude:1;
        unsigned int course:1;
        unsigned int horizontalAccuracy:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int speed:1;
        unsigned int timestamp:1;
        unsigned int verticalAccuracy:1;
    } _has;
}

@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double course; // @synthesize course=_course;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasVerticalAccuracy;
@property(nonatomic) _Bool hasHorizontalAccuracy;
@property(nonatomic) _Bool hasCourse;
@property(nonatomic) _Bool hasSpeed;
@property(nonatomic) _Bool hasAltitude;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;
@property(nonatomic) _Bool hasTimestamp;

@end
