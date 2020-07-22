//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitFare-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitPrice, NSArray, NSDecimalNumber, NSMutableArray, NSString;

@interface GEOTransitBaseFare : PBCodable <GEOTransitFare, NSCopying>
{
    unsigned int _numberOfLegs;
    int _paymentType;
    GEOTransitPrice *_price;
    NSMutableArray *_supportedPaymentMethods;
    _Bool _cashOnly;
    struct {
        unsigned int numberOfLegs:1;
        unsigned int paymentType:1;
        unsigned int cashOnly:1;
    } _has;
}

+ (Class)supportedPaymentMethodType;
@property(nonatomic) _Bool cashOnly; // @synthesize cashOnly=_cashOnly;
@property(retain, nonatomic) NSMutableArray *supportedPaymentMethods; // @synthesize supportedPaymentMethods=_supportedPaymentMethods;
@property(retain, nonatomic) GEOTransitPrice *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasCashOnly;
- (id)supportedPaymentMethodAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedPaymentMethodsCount;
- (void)addSupportedPaymentMethod:(id)arg1;
- (void)clearSupportedPaymentMethods;
@property(nonatomic) _Bool hasNumberOfLegs;
@property(nonatomic) unsigned int numberOfLegs; // @synthesize numberOfLegs=_numberOfLegs;
- (int)StringAsPaymentType:(id)arg1;
- (id)paymentTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPaymentType;
@property(nonatomic) int paymentType; // @synthesize paymentType=_paymentType;
@property(readonly, nonatomic) _Bool hasPrice;
@property(readonly, nonatomic) NSArray *supportedICCardProviders;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) NSDecimalNumber *value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

