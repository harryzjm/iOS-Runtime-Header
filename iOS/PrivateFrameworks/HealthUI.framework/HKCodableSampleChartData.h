//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableMetadataDictionary, HKCodableQuantity;

@interface HKCodableSampleChartData : PBCodable <NSCopying>
{
    long long _dataType;
    double _endDate;
    long long _int64Value;
    double _startDate;
    HKCodableMetadataDictionary *_metadataDictionary;
    HKCodableQuantity *_quantity;
    struct {
        unsigned int dataType:1;
        unsigned int endDate:1;
        unsigned int int64Value:1;
        unsigned int startDate:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKCodableQuantity *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long int64Value; // @synthesize int64Value=_int64Value;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasQuantity;
@property(readonly, nonatomic) _Bool hasMetadataDictionary;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(nonatomic) _Bool hasInt64Value;
@property(nonatomic) _Bool hasDataType;

@end
