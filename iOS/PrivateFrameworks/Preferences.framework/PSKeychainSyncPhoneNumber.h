//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class KeychainSyncCountryInfo, NSString;

@interface PSKeychainSyncPhoneNumber : NSObject
{
    NSString *_digits;
    KeychainSyncCountryInfo *_countryInfo;
}

+ (id)phoneNumberWithDigits:(id)arg1 countryInfo:(id)arg2;
@property(retain, nonatomic) KeychainSyncCountryInfo *countryInfo; // @synthesize countryInfo=_countryInfo;
@property(retain, nonatomic) NSString *digits; // @synthesize digits=_digits;
- (void).cxx_destruct;
- (id)formattedAndObfuscatedString;
- (id)formattedStringWithDialingPrefix;
- (id)formattedString;
- (id)_stringByAddingDialingPrefixToString:(id)arg1;

@end

