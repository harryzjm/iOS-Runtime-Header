//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSSet, NSString, NSTimeZone, NSURL, PKCreditAccountRates, PKCreditAccountSummary, PKCurrencyAmount;

@interface PKCreditAccountDetails
{
    _Bool _termsAcceptanceRequired;
    NSDate *_lastUpdatedDate;
    NSDate *_createdDate;
    NSString *_countryCode;
    NSString *_currencyCode;
    NSTimeZone *_productTimeZone;
    NSSet *_physicalCards;
    NSSet *_virtualCards;
    NSString *_termsIdentifier;
    NSURL *_termsURL;
    NSURL *_associatedPassURL;
    NSString *_associatedPassTypeIdentifier;
    NSString *_associatedPassSerialNumber;
    long long _cardType;
    PKCreditAccountSummary *_accountSummary;
    PKCreditAccountRates *_rates;
    NSSet *_installmentPlans;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *installmentPlans; // @synthesize installmentPlans=_installmentPlans;
@property(retain, nonatomic) PKCreditAccountRates *rates; // @synthesize rates=_rates;
@property(retain, nonatomic) PKCreditAccountSummary *accountSummary; // @synthesize accountSummary=_accountSummary;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *associatedPassSerialNumber; // @synthesize associatedPassSerialNumber=_associatedPassSerialNumber;
@property(copy, nonatomic) NSString *associatedPassTypeIdentifier; // @synthesize associatedPassTypeIdentifier=_associatedPassTypeIdentifier;
@property(copy, nonatomic) NSURL *associatedPassURL; // @synthesize associatedPassURL=_associatedPassURL;
@property(copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;
@property(copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property(nonatomic) _Bool termsAcceptanceRequired; // @synthesize termsAcceptanceRequired=_termsAcceptanceRequired;
@property(copy, nonatomic) NSSet *virtualCards; // @synthesize virtualCards=_virtualCards;
@property(copy, nonatomic) NSSet *physicalCards; // @synthesize physicalCards=_physicalCards;
@property(retain, nonatomic) NSTimeZone *productTimeZone; // @synthesize productTimeZone=_productTimeZone;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(copy, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
- (long long)numberOfActiveStatementedInstallments;
- (long long)numberOfActiveInstallments;
@property(readonly, copy, nonatomic) PKCurrencyAmount *totalBalance;
@property(readonly, copy, nonatomic) PKCurrencyAmount *cardBalance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addOrUpdatePhysicalCard:(id)arg1;
- (id)virtualCardWithIdentifier:(id)arg1;
- (void)removeVirtualCard:(id)arg1;
- (void)addOrUpdateVirtualCard:(id)arg1;
- (id)installmentPlanWithIdentifier:(id)arg1;
- (void)ingestExtendedAccountDetails:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
