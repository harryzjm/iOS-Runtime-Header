//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableDateInterval;

@interface HKCodableTimePeriodData : PBCodable <NSCopying>
{
    long long _total;
    HKCodableDateInterval *_dateInterval;
    struct {
        unsigned int total:1;
    } _has;
}

+ (id)timePeriodDataWithCodableData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(retain, nonatomic) HKCodableDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTotal;
@property(readonly, nonatomic) _Bool hasDateInterval;

@end
