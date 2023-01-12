//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKStoredValuePassBalance : NSObject <NSSecureCoding>
{
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    NSString *_balanceType;
    NSDate *_expiryDate;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, copy, nonatomic) NSString *balanceType; // @synthesize balanceType=_balanceType;
@property(readonly, copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (_Bool)isCurrencyBalance;
- (_Bool)isExpired;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToBalance:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 amount:(id)arg2 balanceType:(id)arg3 expiryDate:(id)arg4;
- (id)initWithTransitAppletBalance:(id)arg1 balanceField:(id)arg2;
- (id)initWithIdentifier:(id)arg1 cashAmount:(id)arg2 currencyCode:(id)arg3 expiryDate:(id)arg4;
- (id)initWithCurrencyAmount:(id)arg1;

@end
