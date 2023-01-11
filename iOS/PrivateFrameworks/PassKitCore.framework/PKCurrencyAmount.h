//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKCurrencyAmount : NSObject <NSCopying, NSSecureCoding>
{
    NSDecimalNumber *_amount;
    NSString *_currency;
    long long _exponent;
    NSString *_preformattedString;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *preformattedString; // @synthesize preformattedString=_preformattedString;
@property(nonatomic) long long exponent; // @synthesize exponent=_exponent;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (id)negativeValue;
- (id)absoluteValue;
- (id)minimalFormattedStringValueInLocale:(id)arg1;
- (_Bool)isCurrency;
- (id)minimalFormattedStringValue;
- (id)formattedStringValue;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCurrencyAmount:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAmount:(id)arg1 exponent:(long long)arg2 preformattedString:(id)arg3;
- (id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3;
- (id)initWithAmount:(id)arg1 currency:(id)arg2;
- (long long)compareToCurrencyCode:(id)arg1 amount:(id)arg2;

@end
