//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString, PKProtobufPaymentMethod, PKProtobufShippingMethod;

@interface PKProtobufPaymentHostUpdate : PBCodable <NSCopying>
{
    PKProtobufPaymentMethod *_paymentMethod;
    NSString *_remotePaymentRequestIdentifier;
    NSData *_shippingContact;
    PKProtobufShippingMethod *_shippingMethod;
}

@property(retain, nonatomic) PKProtobufPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(retain, nonatomic) PKProtobufShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(retain, nonatomic) NSData *shippingContact; // @synthesize shippingContact=_shippingContact;
@property(retain, nonatomic) NSString *remotePaymentRequestIdentifier; // @synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier;
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
@property(readonly, nonatomic) _Bool hasPaymentMethod;
@property(readonly, nonatomic) _Bool hasShippingMethod;
@property(readonly, nonatomic) _Bool hasShippingContact;
@property(readonly, nonatomic) _Bool hasRemotePaymentRequestIdentifier;

@end

