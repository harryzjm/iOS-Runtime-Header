//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEONavCameraState : PBCodable <NSCopying>
{
    int _distanceToManeuver;
    int _speedBucket;
    int _upcomingManeuverType;
    _Bool _isGroupedManeuver;
    struct {
        unsigned int distanceToManeuver:1;
        unsigned int speedBucket:1;
        unsigned int upcomingManeuverType:1;
        unsigned int isGroupedManeuver:1;
    } _has;
}

@property(nonatomic) _Bool isGroupedManeuver; // @synthesize isGroupedManeuver=_isGroupedManeuver;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsSpeedBucket:(id)arg1;
- (id)speedBucketAsString:(int)arg1;
@property(nonatomic) _Bool hasSpeedBucket;
@property(nonatomic) int speedBucket; // @synthesize speedBucket=_speedBucket;
@property(nonatomic) _Bool hasIsGroupedManeuver;
- (int)StringAsDistanceToManeuver:(id)arg1;
- (id)distanceToManeuverAsString:(int)arg1;
@property(nonatomic) _Bool hasDistanceToManeuver;
@property(nonatomic) int distanceToManeuver; // @synthesize distanceToManeuver=_distanceToManeuver;
- (int)StringAsUpcomingManeuverType:(id)arg1;
- (id)upcomingManeuverTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasUpcomingManeuverType;
@property(nonatomic) int upcomingManeuverType; // @synthesize upcomingManeuverType=_upcomingManeuverType;

@end

