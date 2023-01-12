//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebAuthorizeApplePayEnrollmentAction
{
    NSNumber *_confirmationStyle;
    NSString *_passSerialNumber;
    NSString *_passTypeIdentifier;
    NSDictionary *_paymentSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *paymentSession; // @synthesize paymentSession=_paymentSession;
@property(retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(retain, nonatomic) NSString *passSerialNumber; // @synthesize passSerialNumber=_passSerialNumber;
@property(retain, nonatomic) NSNumber *confirmationStyle; // @synthesize confirmationStyle=_confirmationStyle;
- (id)runAction;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

@end
