//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDecimalNumber, NSString, PKPaymentApplication, PKPaymentMerchantSession;

@interface PKInAppPaymentSessionAuthorizationRequest : NSObject
{
    PKPaymentApplication *_paymentApplication;
    NSString *_currencyCode;
    NSString *_countryCode;
    NSDecimalNumber *_transactionAmount;
    unsigned long long _merchantCapabilities;
    NSArray *_supportedNetworks;
    NSString *_merchantIdentifier;
    NSData *_applicationData;
    PKPaymentMerchantSession *_merchantSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentMerchantSession *merchantSession; // @synthesize merchantSession=_merchantSession;
@property(retain, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(copy, nonatomic) NSArray *supportedNetworks; // @synthesize supportedNetworks=_supportedNetworks;
@property(nonatomic) unsigned long long merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property(retain, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;

@end
