//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface BFFLocationController : NSObject
{
    NSString *_guessedCountryFromTelephony;
    NSArray *_guessedCountries;
    NSDictionary *_aliasDict;
    NSSet *_validCountries;
    _Bool _fakeMode;
    NSArray *_firstGuessedLanguages;
}

+ (id)sharedBuddyLocationController;
@property(nonatomic) _Bool fakeMode; // @synthesize fakeMode=_fakeMode;
@property(retain, nonatomic) NSArray *firstGuessedLanguages; // @synthesize firstGuessedLanguages=_firstGuessedLanguages;
@property(retain, nonatomic) NSArray *guessedCountries; // @synthesize guessedCountries=_guessedCountries;
- (void).cxx_destruct;
- (void)reset;
- (void)_closeWifiConnection;
- (void)_scanComplete:(id)arg1 error:(_Bool)arg2;
- (void)_startWifiScan;
- (id)guessedLanguages;
- (_Bool)getCountryFromTelephony;
- (id)guessedCountryFromTelephony;
- (void)dealloc;
- (id)init;
- (void)_setGuessedCountryDefault:(id)arg1;
- (id)_countriesFromDefaults;
- (id)_checkedArrayForString:(id)arg1;
- (id)_checkForAliasesOrInvalid:(id)arg1;
- (id)_checkForAliases:(id)arg1;
- (id)aliasDict;
- (id)_countryFromTelephony;

@end
