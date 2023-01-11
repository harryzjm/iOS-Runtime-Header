//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPBundleId, CLPIndoorCMAttitude, CLPIndoorCMPedometer, CLPIndoorMotionActivity, CLPIndoorPressure, CLPIndoorWifiScan, CLPLocation;

@interface CLPIndoorEvent : PBCodable <NSCopying>
{
    CLPBundleId *_bundleId;
    CLPIndoorCMAttitude *_cmAttitude;
    CLPIndoorCMPedometer *_cmPedometer;
    CLPLocation *_location;
    CLPIndoorMotionActivity *_motionActivity;
    CLPIndoorPressure *_pressure;
    int _type;
    CLPIndoorWifiScan *_wifiScan;
    CDStruct_f953fb60 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLPBundleId *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) CLPIndoorWifiScan *wifiScan; // @synthesize wifiScan=_wifiScan;
@property(retain, nonatomic) CLPIndoorPressure *pressure; // @synthesize pressure=_pressure;
@property(retain, nonatomic) CLPIndoorMotionActivity *motionActivity; // @synthesize motionActivity=_motionActivity;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLPIndoorCMPedometer *cmPedometer; // @synthesize cmPedometer=_cmPedometer;
@property(retain, nonatomic) CLPIndoorCMAttitude *cmAttitude; // @synthesize cmAttitude=_cmAttitude;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBundleId;
@property(readonly, nonatomic) _Bool hasWifiScan;
@property(readonly, nonatomic) _Bool hasPressure;
@property(readonly, nonatomic) _Bool hasMotionActivity;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasCmPedometer;
@property(readonly, nonatomic) _Bool hasCmAttitude;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end
