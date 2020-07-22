//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOTransitSurcharge : PBCodable <NSCopying>
{
    unsigned int _numberOfLegs;
    int _paymentType;
    NSMutableArray *_surchargeUnits;
    struct {
        unsigned int numberOfLegs:1;
        unsigned int paymentType:1;
    } _has;
}

+ (Class)surchargeUnitType;
@property(retain, nonatomic) NSMutableArray *surchargeUnits; // @synthesize surchargeUnits=_surchargeUnits;
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
@property(nonatomic) _Bool hasNumberOfLegs;
@property(nonatomic) unsigned int numberOfLegs; // @synthesize numberOfLegs=_numberOfLegs;
- (int)StringAsPaymentType:(id)arg1;
- (id)paymentTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPaymentType;
@property(nonatomic) int paymentType; // @synthesize paymentType=_paymentType;
- (id)surchargeUnitAtIndex:(unsigned long long)arg1;
- (unsigned long long)surchargeUnitsCount;
- (void)addSurchargeUnit:(id)arg1;
- (void)clearSurchargeUnits;

@end
