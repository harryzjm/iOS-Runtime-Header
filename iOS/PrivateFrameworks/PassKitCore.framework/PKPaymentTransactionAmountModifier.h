//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKTransactionAmount;

@interface PKPaymentTransactionAmountModifier : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    long long _order;
    PKTransactionAmount *_amount;
    NSString *_modifierDescription;
    NSString *_typeString;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(copy, nonatomic) NSString *modifierDescription; // @synthesize modifierDescription=_modifierDescription;
@property(copy, nonatomic) PKTransactionAmount *amount; // @synthesize amount=_amount;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isEqualToPaymentTransactionAmountModifier:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
