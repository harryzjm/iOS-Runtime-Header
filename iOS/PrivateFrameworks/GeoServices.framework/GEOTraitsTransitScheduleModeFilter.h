//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTraitsTransitScheduleTimeRange, PBUnknownFields;

@interface GEOTraitsTransitScheduleModeFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _numAdditionalDepartures;
    GEOTraitsTransitScheduleTimeRange *_timeRange;
    struct {
        unsigned int numAdditionalDepartures:1;
    } _has;
}

@property(nonatomic) unsigned int numAdditionalDepartures; // @synthesize numAdditionalDepartures=_numAdditionalDepartures;
@property(retain, nonatomic) GEOTraitsTransitScheduleTimeRange *timeRange; // @synthesize timeRange=_timeRange;
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
@property(nonatomic) _Bool hasNumAdditionalDepartures;
@property(readonly, nonatomic) _Bool hasTimeRange;
- (void)configureWithDefaultStartTime:(double)arg1 duration:(double)arg2 numAdditionalDepartures:(unsigned int)arg3;

@end

