//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDCodableActivityStatisticsQuantityInfo : PBCodable <NSCopying>
{
    double _endDate;
    double _startDate;
    double _value;
    NSString *_unit;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int value:1;
    } _has;
}

@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
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
@property(nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasUnit;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;

@end

