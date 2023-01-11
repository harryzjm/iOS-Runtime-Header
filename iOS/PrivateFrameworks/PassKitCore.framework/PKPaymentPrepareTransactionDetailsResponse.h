//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDecimalNumber, NSDictionary, NSString;

@interface PKPaymentPrepareTransactionDetailsResponse
{
    NSDecimalNumber *_amount;
    NSString *_secureElementIdentifier;
    NSDictionary *_instructionsDictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *instructionsDictionary; // @synthesize instructionsDictionary=_instructionsDictionary;
@property(readonly, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(readonly, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (id)initWithData:(id)arg1;

@end
