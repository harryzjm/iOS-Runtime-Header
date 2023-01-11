//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSendPaymentIntent-Protocol.h>

@class NSString, _INPBContact, _INPBCurrencyAmount, _INPBIntentMetadata, _INPBString;

@interface _INPBSendPaymentIntent : PBCodable <_INPBSendPaymentIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBCurrencyAmount *_currencyAmount;
    _INPBIntentMetadata *_intentMetadata;
    _INPBString *_note;
    _INPBContact *_payee;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBContact *payee; // @synthesize payee=_payee;
@property(retain, nonatomic) _INPBString *note; // @synthesize note=_note;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasPayee;
@property(readonly, nonatomic) _Bool hasNote;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasCurrencyAmount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
