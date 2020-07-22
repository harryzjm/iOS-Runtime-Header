//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    NSString *_initialCountryCode;
    NSString *_stringValue;
    struct __CFPhoneNumber *_phoneNumberRef;
}

+ (struct __CFPhoneNumber *)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2;
+ (unsigned long long)samePersonPhoneNumberComparisonMatchCount;
+ (_Bool)supportsSecureCoding;
+ (id)defaultCountryCode;
+ (id)phoneNumberWithStringValue:(id)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)new;
@property(readonly, copy, nonatomic) NSString *initialCountryCode; // @synthesize initialCountryCode=_initialCountryCode;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, copy, nonatomic) NSString *unformattedInternationalStringValue;
@property(readonly, copy, nonatomic) NSString *formattedInternationalStringValue;
@property(readonly, copy, nonatomic) NSString *formattedStringValue;
@property(readonly, copy, nonatomic) NSString *digits;
- (id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1;
- (_Bool)isValid:(id *)arg1;
- (struct __CFPhoneNumber *)nts_lazyPhoneNumberRef;
- (struct __CFPhoneNumber *)phoneNumberRef;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)lastFourDigits;
- (_Bool)isLikePhoneNumber:(id)arg1;
- (_Bool)isLikePhoneNumberForSamePerson:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithStringValue:(id)arg1;
- (id)initWithStringValue:(id)arg1 countryCode:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
