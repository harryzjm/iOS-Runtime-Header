//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class CNContact, NSDictionary, PKBankAccountInformation, PKPaymentPass, PKRemotePaymentInstrument;

@protocol PKPaymentOptionsProtocol <NSObject>
@property(retain, nonatomic) CNContact *defaultContactName;
@property(retain, nonatomic) CNContact *defaultContactPhone;
@property(nonatomic) _Bool useHideMyEmail;
@property(retain, nonatomic) CNContact *defaultContactEmail;
@property(readonly, nonatomic) NSDictionary *defaultBillingAddresses;
@property(retain, nonatomic) CNContact *defaultShippingAddress;
- (void)setDefaultBillingAddress:(CNContact *)arg1 forBankInformation:(PKBankAccountInformation *)arg2;
- (void)setDefaultBillingAddress:(CNContact *)arg1 forRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg2;
- (void)setDefaultBillingAddress:(CNContact *)arg1 forPaymentPass:(PKPaymentPass *)arg2;
- (CNContact *)defaultBillingAddressForBankInformation:(PKBankAccountInformation *)arg1;
- (CNContact *)defaultBillingAddressForRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1;
- (CNContact *)defaultBillingAddressForPaymentPass:(PKPaymentPass *)arg1;
@end

