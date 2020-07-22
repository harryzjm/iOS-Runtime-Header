//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

@interface PKPeerPaymentStatusResponse
{
    unsigned long long _status;
    NSString *_paymentIdentifier;
    NSString *_transactionIdentifier;
    NSArray *_actions;
    NSData *_amountHash;
}

@property(readonly, copy, nonatomic) NSData *amountHash; // @synthesize amountHash=_amountHash;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, copy, nonatomic) NSString *paymentIdentifier; // @synthesize paymentIdentifier=_paymentIdentifier;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)amountHashIsValidForAmount:(id)arg1 andCurrency:(id)arg2;
- (id)initWithData:(id)arg1;

@end

