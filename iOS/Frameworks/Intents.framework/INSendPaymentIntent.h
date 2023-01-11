//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSendPaymentIntentExport-Protocol.h>

@class INCurrencyAmount, INPerson, NSString;

@interface INSendPaymentIntent <INSendPaymentIntentExport>
{
}

- (_Bool)configureAttributeSet:(id)arg1 includingData:(_Bool)arg2;
- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (_Bool)_isUserConfirmationRequired;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setNote:(id)arg1;
@property(readonly, copy, nonatomic) NSString *note;
- (void)setCurrencyAmount:(id)arg1;
@property(readonly, copy, nonatomic) INCurrencyAmount *currencyAmount;
- (void)setPayee:(id)arg1;
@property(readonly, copy, nonatomic) INPerson *payee;
- (id)initWithPayee:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

