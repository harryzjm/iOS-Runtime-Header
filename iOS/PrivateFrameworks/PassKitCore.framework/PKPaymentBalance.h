//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSString, PKCurrencyAmount;

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isPrimary;
    NSString *_identifier;
    NSDecimalNumber *_value;
    NSString *_currencyCode;
    long long _exponent;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
    NSDate *_lastUpdateDate;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) long long exponent; // @synthesize exponent=_exponent;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) NSString *formattedValue;
@property(readonly, nonatomic) PKCurrencyAmount *currencyValue;
@property(readonly, nonatomic) _Bool isCurrency;
- (void)_setValueWithRounding:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3;
- (id)initWithIdentifier:(id)arg1 forCurrencyAmount:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

