//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCompletedPaymentTransaction, NSError, NSString;

@protocol FCPaymentTransactionManagerDelegate
- (void)transactionFailedWithProductID:(NSString *)arg1 transactionState:(long long)arg2 transactionError:(NSError *)arg3;
- (void)transactionPurchased:(FCCompletedPaymentTransaction *)arg1;
@end

