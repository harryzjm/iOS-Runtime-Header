//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONavCameraState;

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying>
{
    double _distanceToDestination;
    int _lineType;
    GEONavCameraState *_navCameraState;
    int _navState;
    struct {
        unsigned int distanceToDestination:1;
        unsigned int lineType:1;
        unsigned int navState:1;
    } _has;
}

@property(retain, nonatomic) GEONavCameraState *navCameraState; // @synthesize navCameraState=_navCameraState;
@property(nonatomic) double distanceToDestination; // @synthesize distanceToDestination=_distanceToDestination;
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
@property(readonly, nonatomic) _Bool hasNavCameraState;
@property(nonatomic) _Bool hasDistanceToDestination;
- (int)StringAsNavState:(id)arg1;
- (id)navStateAsString:(int)arg1;
@property(nonatomic) _Bool hasNavState;
@property(nonatomic) int navState; // @synthesize navState=_navState;
- (int)StringAsLineType:(id)arg1;
- (id)lineTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLineType;
@property(nonatomic) int lineType; // @synthesize lineType=_lineType;

@end

