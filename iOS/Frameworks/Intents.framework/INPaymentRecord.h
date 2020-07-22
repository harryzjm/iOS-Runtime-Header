//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INPaymentRecordExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCurrencyAmount, INPaymentMethod, INPerson, NSString;

@interface INPaymentRecord : NSObject <INCacheableContainer, INPaymentRecordExport, NSCopying, NSSecureCoding>
{
    INPerson *_payee;
    INPerson *_payer;
    INCurrencyAmount *_currencyAmount;
    INPaymentMethod *_paymentMethod;
    NSString *_note;
    long long _status;
    INCurrencyAmount *_feeAmount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) INCurrencyAmount *feeAmount; // @synthesize feeAmount=_feeAmount;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(readonly, copy, nonatomic) INPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(readonly, copy, nonatomic) INCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property(readonly, copy, nonatomic) INPerson *payer; // @synthesize payer=_payer;
@property(readonly, copy, nonatomic) INPerson *payee; // @synthesize payee=_payee;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6;
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6 feeAmount:(id)arg7;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
