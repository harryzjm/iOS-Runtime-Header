//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment, SKPaymentTransaction, SKPaymentTransactionAuthorizationResponse;

__attribute__((visibility("hidden")))
@interface SKPaymentTransactionInternal : NSObject
{
    NSString *_uuid;
    NSArray *_downloads;
    NSError *_error;
    SKPaymentTransaction *_originalTransaction;
    SKPayment *_payment;
    NSString *_temporaryIdentifier;
    NSDate *_transactionDate;
    NSString *_transactionIdentifier;
    NSData *_transactionReceipt;
    long long _transactionState;
    SKPaymentTransactionAuthorizationResponse *_authorizationResponse;
}

- (void).cxx_destruct;
- (id)init;

@end

