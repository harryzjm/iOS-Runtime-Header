//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKCreditAccountUserActivity : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_accountUserAltDSID;
    NSDecimalNumber *_purchases;
    NSDecimalNumber *_adjustedPurchases;
    NSDecimalNumber *_pendingPurchases;
    NSDecimalNumber *_rewardsBalance;
    NSDecimalNumber *_rewardsEarned;
    NSDecimalNumber *_rewardsRedeemed;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDecimalNumber *rewardsRedeemed; // @synthesize rewardsRedeemed=_rewardsRedeemed;
@property(retain, nonatomic) NSDecimalNumber *rewardsEarned; // @synthesize rewardsEarned=_rewardsEarned;
@property(retain, nonatomic) NSDecimalNumber *rewardsBalance; // @synthesize rewardsBalance=_rewardsBalance;
@property(retain, nonatomic) NSDecimalNumber *pendingPurchases; // @synthesize pendingPurchases=_pendingPurchases;
@property(retain, nonatomic) NSDecimalNumber *adjustedPurchases; // @synthesize adjustedPurchases=_adjustedPurchases;
@property(retain, nonatomic) NSDecimalNumber *purchases; // @synthesize purchases=_purchases;
@property(copy, nonatomic) NSString *accountUserAltDSID; // @synthesize accountUserAltDSID=_accountUserAltDSID;
- (id)remainingMonthlySpendWithLimit:(id)arg1;
@property(readonly, nonatomic) NSDecimalNumber *totalSpending;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToCreditAccountUserActivity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
