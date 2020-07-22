//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOURLSerializable-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLCamera, GEOURLCenterSpan, GEOURLRouteHandle, GEOURLTimePoint, NSString;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying>
{
    GEOURLCamera *_camera;
    GEOURLCenterSpan *_centerSpan;
    int _mapType;
    NSString *_referralIdentifier;
    GEOURLRouteHandle *_routeHandle;
    GEOURLTimePoint *_timePoint;
    int _transportType;
    int _userTrackingMode;
    _Bool _connectedToCar;
    _Bool _enableTraffic;
    struct {
        unsigned int mapType:1;
        unsigned int transportType:1;
        unsigned int userTrackingMode:1;
        unsigned int connectedToCar:1;
        unsigned int enableTraffic:1;
    } _has;
}

@property(nonatomic) _Bool connectedToCar; // @synthesize connectedToCar=_connectedToCar;
@property(retain, nonatomic) GEOURLTimePoint *timePoint; // @synthesize timePoint=_timePoint;
@property(retain, nonatomic) GEOURLRouteHandle *routeHandle; // @synthesize routeHandle=_routeHandle;
@property(retain, nonatomic) NSString *referralIdentifier; // @synthesize referralIdentifier=_referralIdentifier;
@property(retain, nonatomic) GEOURLCamera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) GEOURLCenterSpan *centerSpan; // @synthesize centerSpan=_centerSpan;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) _Bool enableTraffic; // @synthesize enableTraffic=_enableTraffic;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasConnectedToCar;
@property(readonly, nonatomic) _Bool hasTimePoint;
@property(readonly, nonatomic) _Bool hasRouteHandle;
- (int)StringAsUserTrackingMode:(id)arg1;
- (id)userTrackingModeAsString:(int)arg1;
@property(nonatomic) _Bool hasUserTrackingMode;
@property(nonatomic) int userTrackingMode; // @synthesize userTrackingMode=_userTrackingMode;
@property(readonly, nonatomic) _Bool hasReferralIdentifier;
@property(readonly, nonatomic) _Bool hasCamera;
@property(readonly, nonatomic) _Bool hasCenterSpan;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
- (int)StringAsMapType:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapType;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) _Bool hasEnableTraffic;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

