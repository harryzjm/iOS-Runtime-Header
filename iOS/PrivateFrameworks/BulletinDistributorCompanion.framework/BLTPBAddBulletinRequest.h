//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class BLTPBBulletin;

@interface BLTPBAddBulletinRequest : PBRequest <NSCopying>
{
    double _date;
    BLTPBBulletin *_bulletin;
    unsigned int _updateType;
    _Bool _shouldPlayLightsAndSirens;
    _Bool _trafficRestricted;
    struct {
        unsigned int date:1;
        unsigned int updateType:1;
        unsigned int shouldPlayLightsAndSirens:1;
        unsigned int trafficRestricted:1;
    } _has;
}

@property(nonatomic) _Bool trafficRestricted; // @synthesize trafficRestricted=_trafficRestricted;
@property(nonatomic) unsigned int updateType; // @synthesize updateType=_updateType;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) _Bool shouldPlayLightsAndSirens; // @synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens;
@property(retain, nonatomic) BLTPBBulletin *bulletin; // @synthesize bulletin=_bulletin;
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
@property(nonatomic) _Bool hasTrafficRestricted;
@property(nonatomic) _Bool hasUpdateType;
@property(nonatomic) _Bool hasDate;
@property(nonatomic) _Bool hasShouldPlayLightsAndSirens;
@property(readonly, nonatomic) _Bool hasBulletin;

@end

