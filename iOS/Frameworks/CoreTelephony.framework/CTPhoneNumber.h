//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CoreTelephony/CTMessageAddress-Protocol.h>
#import <CoreTelephony/NSCopying-Protocol.h>

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_digits;
    NSString *_countryCode;
    _Bool _isShortCode;
}

+ (_Bool)isValidPhoneNumber:(id)arg1;
+ (_Bool)isValidPhoneNumberChar:(unsigned short)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
@property _Bool isShortCode; // @synthesize isShortCode=_isShortCode;
@property(readonly) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly) NSString *digits; // @synthesize digits=_digits;
- (id)encodedString;
- (id)canonicalFormat;
- (id)formatForCallingCountry:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (long long)numberOfDigitsForShortCodeNumber;

@end
