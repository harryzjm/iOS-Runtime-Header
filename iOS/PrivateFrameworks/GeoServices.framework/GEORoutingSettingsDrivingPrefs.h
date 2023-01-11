//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORoutingSettingsDrivingPrefs : PBCodable <NSCopying>
{
    _Bool _avoidHighways;
    _Bool _avoidTolls;
    _Bool _speedLimitEnabled;
    _Bool _trafficEnabled;
    _Bool _voiceNavEnabled;
    struct {
        unsigned int has_avoidHighways:1;
        unsigned int has_avoidTolls:1;
        unsigned int has_speedLimitEnabled:1;
        unsigned int has_trafficEnabled:1;
        unsigned int has_voiceNavEnabled:1;
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
@property(nonatomic) _Bool hasVoiceNavEnabled;
@property(nonatomic) _Bool voiceNavEnabled;
@property(nonatomic) _Bool hasTrafficEnabled;
@property(nonatomic) _Bool trafficEnabled;
@property(nonatomic) _Bool hasSpeedLimitEnabled;
@property(nonatomic) _Bool speedLimitEnabled;
@property(nonatomic) _Bool hasAvoidTolls;
@property(nonatomic) _Bool avoidTolls;
@property(nonatomic) _Bool hasAvoidHighways;
@property(nonatomic) _Bool avoidHighways;

@end
