//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDecimalNumber;

@protocol PKPaymentSetupPurchaseAmountViewDelegate <NSObject>
- (void)transferBalanceFromExistingCard;
- (void)didUpdateAmount:(NSDecimalNumber *)arg1 isValid:(_Bool)arg2;
- (void)shakeCard;
@end

