//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOTransitSurcharge : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_surchargeUnits;
    unsigned int _numberOfLegs;
    int _paymentType;
    struct {
        unsigned int has_numberOfLegs:1;
        unsigned int has_paymentType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)surchargeUnitType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(nonatomic) _Bool hasNumberOfLegs;
@property(nonatomic) unsigned int numberOfLegs;
- (int)StringAsPaymentType:(id)arg1;
- (id)paymentTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPaymentType;
@property(nonatomic) int paymentType;
- (id)surchargeUnitAtIndex:(unsigned long long)arg1;
- (unsigned long long)surchargeUnitsCount;
- (void)addSurchargeUnit:(id)arg1;
- (void)clearSurchargeUnits;
@property(retain, nonatomic) NSMutableArray *surchargeUnits;

@end
