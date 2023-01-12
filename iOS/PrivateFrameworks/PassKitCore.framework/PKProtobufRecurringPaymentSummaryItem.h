//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@interface PKProtobufRecurringPaymentSummaryItem : PBCodable <NSCopying>
{
    double _endDate;
    double _startDate;
    unsigned int _intervalCount;
    unsigned int _intervalUnit;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int intervalCount:1;
        unsigned int intervalUnit:1;
    } _has;
}

@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) unsigned int intervalCount; // @synthesize intervalCount=_intervalCount;
@property(nonatomic) unsigned int intervalUnit; // @synthesize intervalUnit=_intervalUnit;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasIntervalCount;
@property(nonatomic) _Bool hasIntervalUnit;
@property(nonatomic) _Bool hasStartDate;

@end
